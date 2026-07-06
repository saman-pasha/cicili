
(import "./array.lisp")
(import "./rc.lisp")

;;;; Cicili std vector
;;; contigous memory reallocation and liveness check rc<array a>
;;; most minimal performant indexable vector
(generic decl-vector
  (type a)

  (decl-array (<> array a) a)
  (decl-rc (<> rc (<> array a)) (<> array a))
  
  (struct type
          (member (<> rc (<> array a)) vec)
          (member size_t low)
          (member size_t high))
  
  (inline)
  (func (<> free type) ((type * vector))
        (syslog! (printf "FREE VECTOR: %zx\n" (cast uintptr_t vector)))
        ((<> free rc (<> array a)) (aof (-> vector vec))))

  ) ; decl-vector


(generic import-vector
  (type a)

  (import-array (<> array a) a)
  (import-rc (<> rc (<> array a)) (<> array a))
  
  (DEFMACRO (<> new type) (vec &OPTIONAL len)
    (LET* ((vec vec)
           (len len)
           (cal-len (IF len len
                        (IF (STRINGP vec) (LENGTH vec)
                            (IF (AND (LISTP vec) (EQUAL (CAR vec) 'QUOTE)) (LENGTH (CADR vec))
                                NIL))))
           (vec-len (GENSYM "tmp_len")))
      (IF cal-len
          `(letn ((const size_t ,vec-len . (FUNCTION ,cal-len)))                
             (syslog! (printf "NEW VECTOR: %s %zu\n" (symbol-name type) ,vec-len))
             (cast type '{ ((<> new rc (<> array a)) ,vec ,vec-len) 0 ,vec-len }))
          (ERROR (FORMAT NIL "new^~A len required for dynamic vector input: ~A" (symbol-name type) vec)))))


  (DEFMACRO (<> slice type) (vector &OPTIONAL (low 0) (high NIL))
    (LET* ((vector vector)
           (vec-acc (GENSYM "acc_slc"))
           (low low)
           (high (IF high high `(- ($ ,vec-acc high) ($ ,vec-acc low))))
           (slc-low (GENSYM "acc_slc_low"))
           (slc-high (GENSYM "acc_slc_high")))           
      `(letn ((type ,vec-acc . (FUNCTION ,vector))
              (const size_t ,slc-low . (FUNCTION (cast size_t ,low)))
              (const size_t ,slc-high . (FUNCTION (cast size_t ,high))))
         (syslog! (printf "slice %s: low: (%zu -> %zu), high: (%zu -> %zu)\n"
                    (symbol-name type)
                    ,slc-low (+ ($ ,vec-acc low) ,slc-low)
                    ,slc-high (+ ($ ,vec-acc low) ,slc-high)))
         (? (or (< ,slc-low 0)
                (> ,slc-low ,slc-high)
                (> ,slc-high (- ($ ,vec-acc high) ($ ,vec-acc low)))) ; check out of bounds
            (cast type '{ 0 })
            (cast type '{
                  ((<> clone rc (<> array a)) ($ ,vec-acc vec))
                  (+ ($ ,vec-acc low) ,slc-low)
                  (+ ($ ,vec-acc low) ,slc-high) })))))
  

  (DEFMACRO (<> len type) (vector)
     (LET ((vector vector)
           (vec-acc (GENSYM "acc_slc")))
       `(letn ((type ,vec-acc . (FUNCTION ,vector)))
          (- ($ ,vec-acc high) ($ ,vec-acc low)))))


  ;; there are two path Safe and Unsafe
  ;; force with default
  ;; checks bounds and aliveness
  (DEFMACRO (<> nth type) (index vector &KEY default)
    (LET* ((index index)
           (vector vector)
           (default default)
           (vec-acc (GENSYM "acc_vec"))
           (arr-name (GENSYM "acc_vec_arr"))
           (arr-idx (GENSYM "acc_vec_idx")))
      (WHEN (NULL default) (ERROR (FORMAT NIL "nth of vector needs default value ~A" vector)))
      `(letn ((type ,vec-acc . (FUNCTION ,vector))
              (const size_t ,arr-idx . (FUNCTION (+ ($ ,vec-acc low) ,index))))
         ;; (syslog! (printf "NTH: %zu\n" ,arr-idx))
         (? (< ,arr-idx ($ ,vec-acc high))
            ((<> letn rc (<> array a)) (,arr-name ($ ,vec-acc vec) ,default)
             (nth ,arr-idx (cast (a *) ($ ,arr-name arr))))
            ,default))))

  
  (DEFMACRO (<> let type) ((arr len vector) &REST body)
    (LET ((vec-acc (GENSYM "acc_vec"))
          (arr-name (GENSYM "acc_vec_arr")))
      `(let ((type ,vec-acc . (FUNCTION ,vector)))
         ((<> let rc (<> array a)) (,arr-name ($ ,vec-acc vec))
          (let ((a * ,arr . (FUNCTION (+ (cast (a *) ($ ,arr-name arr)) ($ ,vec-acc low))))
                (size_t ,len . (FUNCTION (- ($ ,vec-acc high) ($ ,vec-acc low)))))
            ,@body)))))
  

  ;; (DEFMACRO (<> letn type) ((vec len vector) &REST body)
  ;;   (LET ((vec-acc (GENSYM "acc_vec"))
  ;;         (vec-name (GENSYM "acc_vec_mem")))
  ;;     `(letn ((type ,vec-acc . (FUNCTION ,vector))
  ;;             (a * ,vec . (FUNCTION (cast (a *) ($ ,vec-acc vec))))
  ;;             (size_t ,len . (FUNCTION (cast size_t (bitor ($ ,vec-acc llen) ($ ,vec-acc rlen))))))
  ;;        ,@body)))

  ) ; import-vector
