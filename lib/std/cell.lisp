;;;; Cicili std cell
(generic decl-cell
  (type a)

  (non-copy)
  (struct type
          (member const uintptr_t ptr))

  (typedef a (<> type interior_t))

  
  (inline)
  ;; needed for letin
  (func (<> free type) ((type * cell))        
        (syslog! (printf "FREE CELL: %zx\n" (-> cell ptr)))
        (when (-> cell ptr) ((<> free a) (cast (a *) (-> cell ptr)))))

  (inline)
  ;; needed for pass move to function
  (func (<> free type pointer) ((type ** cell))        
        ((<> free type) (cof cell)))

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
         (ptr-name (GENSYM (FORMAT NIL "~A_ptr" (SYMBOL-NAME (CAR a)))))
         (obj-name (GENSYM (FORMAT NIL "~A_obj" (SYMBOL-NAME (CAR a))))))
    (WHEN (> (LENGTH a) 1) (ERROR (FORMAT NIL "new cell got invalid type ~A for ~A" a ctor)))
    `(letn ((,@a * ,ptr-name . (FUNCTION (malloc (sizeof ,@a))))
            (,@a move ,obj-name . (FUNCTION (,ctor ,@args))))
       (syslog! (printf "NEW CELL: %zx\n" (cast uintptr_t ,ptr-name)))
       (memcpy ,ptr-name (aof ,obj-name) (sizeof ,obj-name))
       (cast (<> cell ,@a) '{ (cast uintptr_t ,ptr-name) }))))


(DEFMACRO let^cell ((obj cell &REST captures) &REST body)
  (LET ((obj obj)
        (cell cell))
    ;; full-type is list of inferred type details
    (MULTIPLE-VALUE-BIND (_ full-type) (CICILI:INFER-TYPE cell :WITH-NAME T :COPY-NAME T)
      (LET ((type-name (NTH 1 full-type))
            (cell-acc (NTH 4 full-type)))
        `(closure ((<> let ,type-name ,(GENSYM)) ,cell-acc (aof ,cell) ,@captures)
           (when (-> ,cell-acc ptr)
             (let (((<> ,type-name interior_t) move ,obj .
                    (FUNCTION (cof (cast ((<> ,type-name interior_t) *) (-> ,cell-acc ptr))))))
               ,@body)))))))


(DEFMACRO letn^cell ((obj cell default &REST captures) &REST body)
  (LET ((obj obj)
        (cell cell)
        (default default))
    ;; full-type is list of inferred type details
    (MULTIPLE-VALUE-BIND (_ full-type) (CICILI:INFER-TYPE cell :WITH-NAME T :COPY-NAME T)
      (LET ((type-name (NTH 1 full-type))
            (cell-acc (NTH 4 full-type)))
        `(closure ((<> letn ,type-name ,(GENSYM)) ,cell-acc (aof ,cell) :default_value ,default ,@captures)
           (out auto)
           (return (? (-> ,cell-acc ptr)
                     (letn (((<> ,type-name interior_t) move ,obj .
                             (FUNCTION (cof (cast ((<> ,type-name interior_t) *) (-> ,cell-acc ptr))))))
                       ,@body)
                     default_value)))))))


(DEFMACRO take^cell ((obj cell &REST captures) &REST body)
  (LET ((obj obj)
        (cell cell))
    ;; full-type is list of inferred type details
    (MULTIPLE-VALUE-BIND (_ full-type) (CICILI:INFER-TYPE cell :WITH-NAME T :COPY-NAME T)
      (LET ((type-name (NTH 1 full-type))
            (cell-acc (NTH 4 full-type)))
        `(closure ((<> let ,type-name ,(GENSYM)) ,cell-acc ,cell ,@captures)
           (when ($ ,cell-acc ptr)
             (let (((<> ,type-name interior_t) move ,obj .
                    (FUNCTION (cof (cast ((<> ,type-name interior_t) *) ($ ,cell-acc ptr))))))
               ,@body)))))))


(DEFMACRO taken^cell ((obj cell default &REST captures) &REST body)
  (LET ((obj obj)
        (cell cell)
        (default default))
    ;; full-type is list of inferred type details
    (MULTIPLE-VALUE-BIND (_ full-type) (CICILI:INFER-TYPE cell :WITH-NAME T :COPY-NAME T)
      (LET ((type-name (NTH 1 full-type))
            (cell-acc (NTH 4 full-type)))
        `(closure ((<> letn ,type-name ,(GENSYM)) ,cell-acc ,cell :default_value ,default ,@captures)
           (out auto)
           (return (? ($ ,cell-acc ptr)
                     (letn (((<> ,type-name interior_t) move ,obj .
                             (FUNCTION (cof (cast ((<> ,type-name interior_t) *) ($ ,cell-acc ptr))))))
                       ,@body)
                     default_value)))))))
