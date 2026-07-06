;;;; Cicili std cell
(generic decl-cell
  (type a)

  (struct type
          (member uintptr_t ptr)
          (member size_t    adr))
  
  (inline)
  (func (<> free type) ((type * cell))
        (when (and (-> cell ptr) (== (cof (cast (size_t *) (-> cell ptr))) (-> cell adr))) ; liveness
          (syslog! (printf "FREE CELL: %zx %zx\n" (cof (cast (size_t *) (-> cell ptr))) (-> cell adr)))
          ((<> free a) (cof (cast (void **) (-> cell ptr))))
          (free (cast (void *) (-> cell ptr)))
          (set (cof (cast (uintptr_t *) (-> cell ptr))) 0)
          (set (-> cell ptr) 0)))

  (inline)
  (func (<> force free a) ((a * obj))
    ((<> free a) obj))
  
  ) ; decl-cell


(generic import-cell
  (type a)
  
  ;; interior guard
  (DEFMACRO (<> free a) (obj)
    (ERROR (FORMAT NIL "shouldn't free an object where ordered to be used inside Cell: ~A" 'a)))
  
  
  (DEFMACRO (<> new type) (&REST args)
    (LET* ((args args)
           (ptr-name (GENSYM "tmp_ptr"))
           (dptr-name (GENSYM "tmp_cell_ptr")))
      `(letn ((a * ,ptr-name . (FUNCTION (malloc (sizeof a))))
              (uintptr_t * ,dptr-name . (FUNCTION (malloc (sizeof uintptr_t)))))
         (set (cof ,ptr-name) ((<> new a) ,@args))
         (set (cof ,dptr-name) (cast uintptr_t ,ptr-name))
         (syslog! (printf "NEW CELL: %zx %zx\n" (cast uintptr_t ,dptr-name) (cof (cast (size_t *) ,dptr-name))))
         (cast type '{ (cast uintptr_t ,dptr-name) (cof (cast (size_t *) ,dptr-name)) }))))


  (DEFMACRO (<> let type) ((obj cell &OPTIONAL is-ptr) &REST body)
    (LET* ((ptrs obj)
           (is-ptr is-ptr)
           (obj (IF is-ptr cell ptrs))
           (cell (IF is-ptr `(FUNCTION ,is-ptr) `(FUNCTION ,cell)))
           (cell-acc (GENSYM "acc_cell"))
           (cell-ptr (GENSYM "acc_cell_ptr"))
           (obj-val (IF is-ptr `(FUNCTION (cof ,cell-ptr)) `(FUNCTION (cof (cof ,cell-ptr))))))
      (WHEN is-ptr
        (UNLESS (EQUAL ptrs '*)
          (ERROR (FORMAT NIL "cell let: pointer should be '* in ~A" (LIST ptrs obj cell is-ptr)))))
      `(let ((type ,cell-acc . ,cell)
             (a ** ,cell-ptr . (FUNCTION (cast (a **) ($ ,cell-acc ptr)))))
         (when (and ,cell-ptr (== (cof (cast (size_t *) ,cell-ptr)) ($ ,cell-acc adr)))
           (let ((auto ,obj . ,obj-val))
             ,@body)))))


  (DEFMACRO (<> letn type) ((obj cell default &OPTIONAL is-ptr) &REST body)
    (LET* ((ptrs obj)
           (is-ptr is-ptr)
           (obj (IF is-ptr cell ptrs))
           (cell (IF is-ptr `(FUNCTION ,default) `(FUNCTION ,cell)))
           (default (IF is-ptr is-ptr default))
           (cell-acc (GENSYM "acc_cell"))
           (cell-ptr (GENSYM "acc_cell_ptr"))
           (obj-val (IF is-ptr `(FUNCTION (cof ,cell-ptr)) `(FUNCTION (cof (cof ,cell-ptr))))))
      (WHEN is-ptr
        (UNLESS (EQUAL ptrs '*)
          (ERROR (FORMAT NIL "cell letn: pointer should be '* in ~A" (LIST ptrs obj cell default is-ptr)))))
      `(letn ((type ,cell-acc . ,cell)
              (a ** ,cell-ptr . (FUNCTION (cast (a **) ($ ,cell-acc ptr)))))
         (? (and ,cell-ptr (== (cof (cast (size_t *) ,cell-ptr)) ($ ,cell-acc adr)))
           (letn ((auto ,obj . ,obj-val))
             ,@body)
           ,default))))


  (DEFMACRO (<> take type) ((obj cell is-ptr) &REST body)
    (LET* ((ptrs obj)
           (is-ptr is-ptr)
           (obj (IF is-ptr cell ptrs))
           (cell (IF is-ptr `(FUNCTION ,is-ptr) `(FUNCTION ,cell)))
           (cell-acc (GENSYM "acc_cell"))
           (cell-ptr (GENSYM "acc_cell_ptr"))
           (obj-val (IF is-ptr `(FUNCTION (cof ,cell-ptr)) `(FUNCTION (cof (cof ,cell-ptr))))))
      (WHEN is-ptr
        (UNLESS (EQUAL ptrs '*)
          (ERROR (FORMAT NIL "cell take: pointer should be '* in ~A" (LIST ptrs obj cell is-ptr)))))
      `(let ((type ,cell-acc . ,cell)
             (a ** ,cell-ptr . (FUNCTION (cast (a **) ($ ,cell-acc ptr)))))
         (when (and ,cell-ptr (== (cof (cast (size_t *) ,cell-ptr)) ($ ,cell-acc adr)))
           (let ((auto ,obj . ,obj-val))
             (syslog! (printf "TAKE CELL: %zx %zx\n" (cof (cast (size_t *) ,cell-ptr)) ($ ,cell-acc adr)))
             (free (cast (void *) ($ ,cell-acc ptr)))
             (set ($ ,cell-acc ptr) 0)
             ,@body)))))
  

  (DEFMACRO (<> taken type) ((obj cell default is-ptr) &REST body)
    (LET* ((ptrs obj)
           (is-ptr is-ptr)
           (obj (IF is-ptr cell ptrs))
           (cell (IF is-ptr `(FUNCTION ,default) `(FUNCTION ,cell)))
           (default (IF is-ptr is-ptr default))
           (cell-acc (GENSYM "acc_cell"))
           (cell-ptr (GENSYM "acc_cell_ptr"))
           (obj-val (IF is-ptr `(FUNCTION (cof ,cell-ptr)) `(FUNCTION (cof (cof ,cell-ptr))))))
      (WHEN is-ptr
        (UNLESS (EQUAL ptrs '*)
          (ERROR (FORMAT NIL "cell taken: pointer should be '* in ~A" (LIST ptrs obj cell default is-ptr)))))
      `(letn ((type ,cell-acc . ,cell)
              (a ** ,cell-ptr . (FUNCTION (cast (a **) ($ ,cell-acc ptr)))))
         (? (and ,cell-ptr (== (cof (cast (size_t *) ,cell-ptr)) ($ ,cell-acc adr)))
           (letn ((auto ,obj . ,obj-val))
             (syslog! (printf "TAKEN CELL: %zx %zx\n" (cof (cast (size_t *) ,cell-ptr)) ($ ,cell-acc adr)))
             (free (cast (void *) ($ ,cell-acc ptr)))
             (set ($ ,cell-acc ptr) 0)
             ,@body)
           ,default))))

  ) ; import-cell
