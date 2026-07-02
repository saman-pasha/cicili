;;;; reference counting
;;; Cicili std rc
;;; uses 17-bit address space after 47-bit virtual memory
;;; most minimal performant rc
;;; rc with max count of (2^16 - 1) 131071
(generic decl-rc
  (type a)

  (struct type
    ;; using cicili direct c code for bit fields definition
    (struct
      (code '{ const size_t    cnt #\: 17 })
      (code '{ const uintptr_t ptr #\: 47 })
      (declare * pay))
    (code '{ const unsigned      #\: 17 })
    (code '{ const size_t    adr #\: 47 }))

  (inline)
  (func (<> free type) ((type * rc))
        ;; (when (and (== (-> rc cnt) 1) (== (cast size_t (-> rc ptr)) (-> rc adr)))
        ;;   (free (cast (void *) (-> rc ptr))))
        ;; (-- (-> rc cnt))
        )

  ) ; decl-rc


(generic import-rc
  (type a)

  (DEFMACRO (<> new type) (obj)
    (LET ((ptr-name (GENSYM "tmp_rc")))
      `(letn (
              (size_t * ,ptr-name . (FUNCTION (malloc (sizeof size_t))))
              ;; (size_t ** pp . (FUNCTION (aof ,ptr-name))) ; (malloc (sizeof size_t))))
              (size_t snp . (FUNCTION (cof ,ptr-name)))
              )
         (printf "CCCCC: %zx   %zx    %zx\n" (cast size_t ,ptr-name) (cof ,ptr-name) snp)
         ;; (memcpy ,ptr-name (aof ,obj) (sizeof a))
         ;; (set (cof pp) ,ptr-name)
         
         (printf "CCCCC: %zx   %zx    %zx\n" (cast size_t ,ptr-name) (cof ,ptr-name) snp)
         ;; (free ,ptr-name)
         ;; (set ,ptr-name nil)
         ;; (set (cof pp) nil)
         ;; (free pp)
         (printf "CCCCC: %zx   %zx    %zx\n" (cast size_t ,ptr-name) (cof ,ptr-name) snp)
         ;; (set ,ptr-name (malloc (* 10 (sizeof size_t))))
         ;; (free ,ptr-name)
         ;; (set (cof pp) (malloc (sizeof size_t)))
         (printf "CCCCC: %zx   %zx    %zx\n" (cast size_t ,ptr-name) (cof ,ptr-name) snp)
         (cast type '{ })
         ;; (cast type '{ 1 (cast uintptr_t ,ptr-name) (cast size_t ,ptr-name) })
         )))


  (DEFMACRO (<> count type) (pointer)
    `($ array cnt))


  (DEFMACRO (<> clone type) (index array &KEY unchecked default)
    (LET ((index index)
          (array array)
          (unchecked unchecked)
          (default default)
          (arr-name (GENSYM "acc_arr"))
          (arr-indx (GENSYM "acc_arr_idx")))
      (WHEN (AND (NULL unchecked) (NULL default)) (ERROR (FORMAT NIL "checked nth of array needs default value ~A" array)))
      (IF unchecked
          `(nth ,index (cast type (bitand (cast uintptr_t ,array) 0x7FFFFFFFFFFF)))
          `(letn ((uintptr_t ,arr-name . (FUNCTION ($ ,array arr)))
                  (const size_t ,arr-indx . (FUNCTION ,index)))
             (? (< ,arr-indx (cast size_t (>> ,arr-name 47)))
                (nth ,arr-indx (cast type (bitand ,arr-name 0x7FFFFFFFFFFF)))
                ,default)))))

  
  (DEFMACRO (<> let type) ((ptr cnt pointer) &REST body)
    (LET ((cnt cnt)
          (ptr-name (GENSYM "acc_rc")))
      `(let ((uintptr_t ,ptr-name . (FUNCTION (cast uintptr_t ,pointer)))
             (type ,ptr . (FUNCTION (cast type (bitand (cof (+ (cast (size_t *) ,ptr-name) 1)) 0x7FFFFFFFFFFF))))
             (size_t ,cnt . (FUNCTION (>> (cof (cast (size_t *) ,ptr-name)) 47))))
         (if (> ,cnt 0) (block ,@body)))))


  (DEFMACRO (<> letn type) ((ptr cnt pointer def) &REST body)
    (LET ((cnt cnt)
          (ptr-name (GENSYM "acc_rc")))
      `(let ((uintptr_t ,ptr-name . (FUNCTION (cast uintptr_t ,pointer)))
             (type ,ptr . (FUNCTION (cast type (bitand (cof (+ (cast (size_t *) ,ptr-name) 1)) 0x7FFFFFFFFFFF))))
             (size_t ,cnt . (FUNCTION (>> (cof (cast (size_t *) ,ptr-name)) 47))))
         (? (> ,cnt 0) (progn ,@body) def))))


  ) ; import-rc

