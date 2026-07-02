;;;; Cicili std vector
;;; contigous memory reallocation and liveness check (Cell a*)
;;; uses two 16-bit address free space beside 48-bit virtual memory of both vec and its snapshot addr
;;; most minimal performant indexable vector
;;; vectors with max length limit of
;;; ((2^16 - 1) | (2^16 - 1))
;;; ((llen << 16) + rlen)
;;; 4_294_967_295
(generic decl-vector
  (type a)

  (struct type
    ;; using cicili direct c code for bit fields definition
    ;; (code '{       uintptr_t vec  #\: 48 })
    ;; (code '{ const unsigned  llen #\: 16 })
    ;; (code '{ const unsigned  rlen #\: 16 })
    ;; (code '{ const size_t    addr #\: 48 }))
    ;; tradeof between more 8 bytes and 10% performance     
    (member size_t   vec)
    (member unsigned llen)
    (member unsigned rlen)
    (member size_t   addr))
  
  (inline)
  (func (<> free type) ((type * vector))
        (when (and (-> vector vec) (== (cof (cast (size_t *) (-> vector vec))) (-> vector addr))) ; alive vectors only
          (syslog! (printf "FREE: %zx %zx\n" (cof (cast (size_t *) (-> vector vec))) (-> vector addr)))
          (free (cast (void *) (-> vector vec)))))

  ) ; decl-vector


(generic import-vector
  (type a)

  (DEFMACRO (<> new type) (vec &OPTIONAL len)
    (LET* ((vec vec)
           (len len)
           (cal-len (IF len len
                        (IF (STRINGP vec) (LENGTH vec)
                            (IF (AND (LISTP vec) (EQUAL (CAR vec) 'QUOTE)) (LENGTH (CADR vec))
                                NIL))))
           (vec-len (GENSYM "tmp_len"))
           (vec-name (GENSYM "tmp_vec")))
      (IF vec-len
          `(letn ((const size_t ,vec-len . (FUNCTION ,cal-len))
                  (a * ,vec-name . (FUNCTION (calloc ,vec-len (sizeof a)))))                
             (memcpy ,vec-name (cast (a []) ,vec) (* ,vec-len (sizeof a)))
             (syslog! (printf "NEW: %zx %u %u %zx\n"
                        (cast uintptr_t ,vec-name)
                        (cast unsigned (>> ,vec-len 16))
                        (cast unsigned (bitand ,vec-len 0xFFFF))
                        (cof (cast (size_t *) ,vec-name))))
             (cast type '{
                   (cast uintptr_t ,vec-name)
                   (cast unsigned (>> ,vec-len 16))
                   (cast unsigned (bitand ,vec-len 0xFFFF))
                   (cof (cast (size_t *) ,vec-name)) }))
          (ERROR (FORMAT NIL "new^~A len required for dynamic vector input: ~A" (symbol-name type) vec)))))


  (DEFMACRO (<> slice type) (vector &OPTIONAL (low 0) (high NIL))
    (LET* ((vector vector)
           (low low)
           (high high)
           (vec-acc (GENSYM "acc_slc"))
           (vec-name (GENSYM "acc_slc_mem"))
           (vec-len (GENSYM "acc_slc_len"))
           (vec-low (GENSYM "acc_slc_low"))
           (vec-high (GENSYM "acc_slc_high")))           
      `(letn ((type ,vec-acc . (FUNCTION ,vector))
              (uintptr_t ,vec-name . (FUNCTION ($ ,vec-acc vec)))
              (size_t ,vec-len . (FUNCTION (cast size_t (bitor ($ ,vec-acc llen) ($ ,vec-acc rlen)))))
              (const size_t ,vec-low . (FUNCTION (cast size_t ,low)))
              (const size_t ,vec-high . (FUNCTION (cast size_t ,(IF high high vec-len)))))
         (? (or (< ,vec-low 0)
              (> ,vec-low ,vec-high)
              (> ,vec-high ,vec-len)
              (< ,vec-high ,vec-low)) ; check out of bounds
            (cast type '{ (cast uintptr_t nil) (cast unsigned 0) (cast unsigned 0) (cast size_t 0) })
            (progn
              (set ,vec-name (cast uintptr_t (+ (cast (a *) ,vec-name) ,vec-low)))
              (set ,vec-len (- ,vec-high ,vec-low))
              (cast type '{
                    (cast uintptr_t ,vec-name)
                    (cast unsigned (>> ,vec-len 16))
                    (cast unsigned (bitand ,vec-len 0xFFFF))
                    0UL }))))))
  

  (DEFMACRO (<> len type) (vector)
     (LET ((vector vector)
           (vec-acc (GENSYM "acc_slc")))
       `(letn ((type ,vec-acc . (FUNCTION ,vector)))
          (cast size_t (bitor ($ ,vec-acc llen) ($ ,vec-acc rlen))))))


  ;; there are two path Safe and Unsafe
  ;; Safe with default to check vec liveness and bounds
  ;; Unsafe without default, check vec liveness and bounds
  ;; for vectors checks bounds and aliveness, for slices checks bounds but aliveness
  ;; vector is responsible to free
  (DEFMACRO (<> nth type) (index vector &KEY unchecked default)
    (LET ((index index)
          (vector vector)
          (unchecked unchecked)
          (default default)
          (vec-acc (GENSYM "acc_vec"))
          (vec-name (GENSYM "acc_vec_mem"))
          (vec-idx (GENSYM "acc_vec_idx")))
      (WHEN (AND (NULL unchecked) (NULL default)) (ERROR (FORMAT NIL "checked nth of vector needs default value ~A" vector)))
      (IF unchecked
          `(nth ,index (cast (a *) ($ ,vector vec)))
          `(letn ((type ,vec-acc . (FUNCTION ,vector))
                  (uintptr_t ,vec-name . (FUNCTION ($ ,vec-acc vec)))
                  (const size_t ,vec-idx . (FUNCTION ,index)))
             (syslog! (printf "NTH: %zx %zx\n" (cof (cast (size_t *) ,vec-name)) ($ ,vec-acc addr)))
             (? (and ,vec-name
                     (or (== ($ ,vec-acc addr) 0UL)                                ; for slice
                         (== (cof (cast (size_t *) ,vec-name)) ($ ,vec-acc addr))) ; for vector
                     (< ,vec-idx (cast size_t (bitor ($ ,vec-acc llen) ($ ,vec-acc rlen)))))
                (nth ,vec-idx (cast (a *) ,vec-name))
                ,default)))))

  
  (DEFMACRO (<> let type) ((vec len vector) &REST body)
    (LET ((vec-acc (GENSYM "acc_vec"))
          (vec-name (GENSYM "acc_vec_mem")))
      `(let ((type ,vec-acc . (FUNCTION ,vector))
             (a * ,vec . (FUNCTION (cast (a *) ($ ,vec-acc vec))))
             (size_t ,len . (FUNCTION (cast size_t (bitor ($ ,vec-acc llen) ($ ,vec-acc rlen))))))
         ,@body)))
  

  (DEFMACRO (<> let type) ((vec len vector) &REST body)
    (LET ((vec-acc (GENSYM "acc_vec"))
          (vec-name (GENSYM "acc_vec_mem")))
      `(letn ((type ,vec-acc . (FUNCTION ,vector))
              (a * ,vec . (FUNCTION (cast (a *) ($ ,vec-acc vec))))
              (size_t ,len . (FUNCTION (cast size_t (bitor ($ ,vec-acc llen) ($ ,vec-acc rlen))))))
         ,@body)))

  ) ; import-vector
