;;;; Cicili std cell
(generic decl-cell
  (type a)

  (non-copy)
  (struct type
          (member uintptr_t ptr))

  (typedef a (<> type interior_t))
  
  (inline)
  (func (<> free type) ((type ** cell_ptr))
        (let ((type * cell . (FUNCTION (cof cell_ptr))))
          (when (-> cell ptr) ; liveness
            ((<> free a) (cast (void *) (-> cell ptr)))
            (set (-> cell ptr) 0))
          (syslog! (printf "FREE CELL: %zx\n" (-> cell ptr)))
          (free cell)))

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
            ((<> cell ,@a) * ,dptr-name . (FUNCTION (malloc (sizeof (<> cell ,@a))))))
       (set (cof ,ptr-name) (,ctor ,@args))
       (set (-> ,dptr-name ptr) (cast uintptr_t ,ptr-name))
       (syslog! (printf "NEW CELL: %zx\n" (cast uintptr_t ,dptr-name)))
       ,dptr-name)))


(DEFMACRO let^cell ((obj cell &REST captures) &REST body)
  (LET* ((obj obj)
         (cell cell)
         (cell-acc (GENSYM "acc_cell"))
         (cell-ptr (GENSYM "acc_cell_ptr")))
    ;; full-type is list of inferred type details
    (MULTIPLE-VALUE-BIND (_ full-type) (CICILI:INFER-TYPE cell)
      (LET ((type-name (NTH 1 full-type)))
        `(closure ((<> let ,type-name ,(GENSYM)) ,cell-acc ,cell ,@captures)
           (let (((<> ,type-name interior_t) * ,cell-ptr . (FUNCTION (cast ((<> ,type-name interior_t) *) (-> ,cell-acc ptr)))))
             (when ,cell-ptr
               (let (((<> ,type-name interior_t) ,obj . (FUNCTION (cof ,cell-ptr))))
                 ,@body))))))))


(DEFMACRO letn^cell ((obj cell default &REST captures) &REST body)
  (LET* ((obj obj)
         (cell cell)
         (default default)
         (cell-acc (GENSYM "acc_cell"))
         (cell-ptr (GENSYM "acc_cell_ptr")))
    ;; full-type is list of inferred type details
    (MULTIPLE-VALUE-BIND (_ full-type) (CICILI:INFER-TYPE cell)
      (LET ((type-name (NTH 1 full-type)))
        `(closure ((<> letn ,type-name ,(GENSYM)) ,cell-acc ,cell :default_value ,default ,@captures)
           (out auto)
           (return (letn (((<> ,type-name interior_t) * ,cell-ptr . (FUNCTION (cast ((<> ,type-name interior_t) *) (-> ,cell-acc ptr)))))
                     (? ,cell-ptr
                       (letn (((<> ,type-name interior_t) ,obj . (FUNCTION (cof ,cell-ptr))))
                         ,@body)
                       default_value))))))))


(DEFMACRO take^cell ((ptr cell &REST captures) &REST body)
  (LET* ((ptr ptr)
         (cell cell)
         (cell-acc (GENSYM "acc_cell"))
         (cell-ptr (GENSYM "acc_cell_ptr")))
    (MULTIPLE-VALUE-BIND (_ full-type) (CICILI:INFER-TYPE cell)
      (LET ((type-name (NTH 1 full-type)))
        `(closure ((<> take ,type-name ,(GENSYM)) ,cell-acc ,cell ,@captures)
           (let (((<> ,type-name interior_t) * ,cell-ptr . (FUNCTION (cast ((<> ,type-name interior_t) *) (-> ,cell-acc ptr)))))
             (when ,cell-ptr
               (let (((<> ,type-name interior_t) * ,ptr . (FUNCTION ,cell-ptr)))
                 (syslog! (printf "TAKE CELL: %zx\n" (-> ,cell-acc ptr)))
                 (set (-> ,cell-acc ptr) 0)
                 ,@body))))))))


(DEFMACRO taken^cell ((ptr cell default &REST captures) &REST body)
  (LET* ((ptr ptr)
         (cell cell)
         (default default)
         (cell-acc (GENSYM "acc_cell"))
         (cell-ptr (GENSYM "acc_cell_ptr")))
    (MULTIPLE-VALUE-BIND (_ full-type) (CICILI:INFER-TYPE cell)
      (LET ((type-name (NTH 1 full-type)))
        `(closure ((<> taken ,type-name ,(GENSYM)) ,cell-acc ,cell :default_value ,default ,@captures)
           (out auto)
           (return (letn (((<> ,type-name interior_t) * ,cell-ptr . (FUNCTION (cast ((<> ,type-name interior_t) *) (-> ,cell-acc ptr)))))
                     (? ,cell-ptr
                       (letn (((<> ,type-name interior_t) * ,ptr . (FUNCTION ,cell-ptr)))
                         (syslog! (printf "TAKE CELL: %zx\n" (-> ,cell-acc ptr)))
                         (set (-> ,cell-acc ptr) 0)
                         ,@body)
                       default_value))))))))
