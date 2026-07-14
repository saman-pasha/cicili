;;;; Cicili std cell
(generic decl-cell
  (type a)

  (struct type
          (member uintptr_t ptr)
          (member size_t    adr))

  (typedef a (<> type interior_t))
  
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

  ;; interior guard
  (DEFMACRO (<> free a) (obj)
    (ERROR (FORMAT NIL "shouldn't free an object where ordered to be used inside Cell: ~A" (symbol-name a))))

  ) ; decl-cell

(DEFMACRO free^cell (cell)
  (LET ((cell cell)
        (type (CICILI:INFER-TYPE cell)))
    (WHEN (OR (/= (LENGTH type) 2) (NOT (EQL (CADR type) '*))) (ERROR (FORMAT NIL "free cell got invalid type ~A for ~A" type cell)))
    `((<> free ,(CAR type)) ,cell)))


(DEFMACRO new^cell (type &REST args)
  (LET* ((ctor `(<> new ,type))
         (args args)
         (a (CICILI:INFER-TYPE `(,ctor ,@args)))
         (ptr-name (GENSYM "tmp_ptr"))
         (dptr-name (GENSYM "tmp_cell_ptr")))
    (WHEN (> (LENGTH a) 1) (ERROR (FORMAT NIL "new cell got invalid type ~A for ~A" a ctor)))
    `(letn ((,@a * ,ptr-name . (FUNCTION (malloc (sizeof ,@a))))
            (uintptr_t * ,dptr-name . (FUNCTION (malloc (sizeof uintptr_t)))))
       (set (cof ,ptr-name) (,ctor ,@args))
       (set (cof ,dptr-name) (cast uintptr_t ,ptr-name))
       (syslog! (printf "NEW CELL: %zx %zx\n" (cast uintptr_t ,dptr-name) (cof (cast (size_t *) ,dptr-name))))
       (cast (<> cell ,@a) '{ (cast uintptr_t ,dptr-name) (cof (cast (size_t *) ,dptr-name)) }))))


(DEFMACRO let^cell ((obj cell &REST captures) &REST body)
  (LET* ((obj obj)
         (cell cell)
         (type (CICILI:INFER-TYPE cell))
         (cell-acc (GENSYM "acc_cell"))
         (cell-ptr (GENSYM "acc_cell_ptr")))
    (WHEN (> (LENGTH type) 1) (ERROR (FORMAT NIL "let cell got invalid type ~A for ~A" type cell)))
    `(closure ((<> let ,@type ,(GENSYM)) ,cell-acc ,cell ,@captures)
       (let (((<> ,@type interior_t) ** ,cell-ptr . (FUNCTION (cast ((<> ,@type interior_t) **) ($ ,cell-acc ptr)))))
         (when (and ,cell-ptr (== (cof (cast (size_t *) ,cell-ptr)) ($ ,cell-acc adr)))
           (let (((<> ,@type interior_t) ,obj . (FUNCTION (cof (cof ,cell-ptr)))))
             ,@body))))))


(DEFMACRO letn^cell ((obj cell default &REST captures) &REST body)
  (LET* ((obj obj)
         (cell cell)
         (default default)
         (type (CICILI:INFER-TYPE cell))
         (cell-acc (GENSYM "acc_cell"))
         (cell-ptr (GENSYM "acc_cell_ptr")))
    (WHEN (> (LENGTH type) 1) (ERROR (FORMAT NIL "letn cell got invalid type ~A for ~A" type cell)))
    `(closure ((<> letn ,@type ,(GENSYM)) ,cell-acc ,cell :default_value ,default ,@captures)
       (out auto)
       (return (letn (((<> ,@type interior_t) ** ,cell-ptr . (FUNCTION (cast ((<> ,@type interior_t) **) ($ ,cell-acc ptr)))))
                 (? (and ,cell-ptr (== (cof (cast (size_t *) ,cell-ptr)) ($ ,cell-acc adr)))
                   (letn (((<> ,@type interior_t) ,obj . (FUNCTION (cof (cof ,cell-ptr)))))
                     ,@body)
                   default_value))))))


(DEFMACRO take^cell ((ptr cell &REST captures) &REST body)
  (LET* ((ptr ptr)
         (cell cell)
         (type (CICILI:INFER-TYPE cell))     
         (cell-acc (GENSYM "acc_cell"))
         (cell-ptr (GENSYM "acc_cell_ptr")))
    (WHEN (> (LENGTH type) 1) (ERROR (FORMAT NIL "take cell got invalid type ~A for ~A" type cell)))
    `(closure ((<> take ,@type ,(GENSYM)) ,cell-acc ,cell ,@captures)
       (let (((<> ,@type interior_t) ** ,cell-ptr . (FUNCTION (cast ((<> ,@type interior_t) **) ($ ,cell-acc ptr)))))
         (when (and ,cell-ptr (== (cof (cast (size_t *) ,cell-ptr)) ($ ,cell-acc adr)))
           (let (((<> ,@type interior_t) * ,ptr . (FUNCTION (cof ,cell-ptr))))
             (syslog! (printf "TAKE CELL: %zx %zx\n" (cof (cast (size_t *) ,cell-ptr)) ($ ,cell-acc adr)))
             (free (cast (void *) ($ ,cell-acc ptr)))
             (set ($ ,cell-acc ptr) 0)
             ,@body))))))


(DEFMACRO taken^cell ((ptr cell default &REST captures) &REST body)
  (LET* ((ptr ptr)
         (cell cell)
         (default default)
         (type (CICILI:INFER-TYPE cell))     
         (cell-acc (GENSYM "acc_cell"))
         (cell-ptr (GENSYM "acc_cell_ptr")))
    (WHEN (> (LENGTH type) 1) (ERROR (FORMAT NIL "taken cell got invalid type ~A for ~A" type cell)))
    `(closure ((<> taken ,@type ,(GENSYM)) ,cell-acc ,cell :default_value ,default ,@captures)
       (out auto)
       (return (letn (((<> ,@type interior_t) ** ,cell-ptr . (FUNCTION (cast ((<> ,@type interior_t) **) ($ ,cell-acc ptr)))))
                 (? (and ,cell-ptr (== (cof (cast (size_t *) ,cell-ptr)) ($ ,cell-acc adr)))
                   (letn (((<> ,@type interior_t) * ,ptr . (FUNCTION (cof ,cell-ptr))))
                     (syslog! (printf "TAKE CELL: %zx %zx\n" (cof (cast (size_t *) ,cell-ptr)) ($ ,cell-acc adr)))
                     (free (cast (void *) ($ ,cell-acc ptr)))
                     (set ($ ,cell-acc ptr) 0)
                     ,@body)
                   default_value))))))
