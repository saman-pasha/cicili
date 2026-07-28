;;;; Cicili std cell
(generic decl-cell
  (a)

  (non-copy)
  (struct (<> cell a)
          (member a ref ptr))

  (typedef a (<> cell a interior_t))

  ;; super type declaration to use in 'type-check
  (guard __CELL_TYPE_H_
    (decl) (struct (<> std cell)))
  (typedef (<> std cell) (<> cell a type_t))
  
  (inline)
  ;; needed for letin
  (func (<> free cell a) (((<> cell a) * cell))        
        (syslog! (printf "FREE CELL: %p\n" (-> cell ptr)))
        (when (-> cell ptr)
          ((<> free a) (-> cell ptr))
          (free (-> cell ptr))))

  (inline)
  ;; needed for pass move to function
  (func (<> free cell a pointer) (((<> cell a) ** cell))        
        ((<> free cell a) (cof cell)))

  ;; interior guard
  (DEFMACRO (<> free a) (obj)
    (ERROR (FORMAT NIL "shouldn't free an object where ordered to be used inside Cell: ~A" (symbol-name a))))

  ) ; decl-cell

(DEFMACRO free^cell (cell)
  (LET ((cell cell)
        (full-type (NTH-VALUE 1 (CICILI:TYPE-CHECK cell :TYPEOF :std^cell :MODIFIER :ref))))
    `((<> free ,(NTH 1 full-type)) ,cell)))


(DEFMACRO new^cell (type &REST args)
  (LET* ((ctor `(<> new ,type))
         (args args)
         (a (CICILI:INFER-TYPE `(,ctor ,@args)))
         (ptr-name (GENSYM (FORMAT NIL "~A_ptr" (SYMBOL-NAME (CAR a)))))
         (obj-name (GENSYM (FORMAT NIL "~A_obj" (SYMBOL-NAME (CAR a))))))
    (WHEN (> (LENGTH a) 1) (ERROR (FORMAT NIL "new cell got invalid type ~A for ~A" a ctor)))
    `(letn ((,@a * ,ptr-name . (FUNCTION (malloc (sizeof ,@a))))
            (,@a move ,obj-name . (FUNCTION (,ctor ,@args))))
       (syslog! (printf "NEW CELL: %p\n" ,ptr-name))
       (memcpy ,ptr-name (aof ,obj-name) (sizeof ,obj-name))
       (cast (<> cell ,@a) '{ ,ptr-name }))))


(DEFMACRO let^cell ((obj cell &REST captures) &REST body)
  (LET ((obj obj)
        (cell cell))
    ;; full-type is list of inferred type details
    (MULTIPLE-VALUE-BIND (_ full-type) (CICILI:TYPE-CHECK cell :TYPEOF :std^cell :MODIFIER :move)
      (LET ((type-name (NTH 1 full-type)))
        `(closure ((<> let ,type-name ,(GENSYM)) :cell (aof ,cell) ,@captures)
           (when (-> cell ptr)
             (let (((<> ,type-name interior_t) ref ,obj . (FUNCTION (-> cell ptr))))
               ,@body)))))))


(DEFMACRO letn^cell ((obj cell default &REST captures) &REST body)
  (LET ((obj obj)
        (cell cell)
        (default default))
    ;; full-type is list of inferred type details
    (MULTIPLE-VALUE-BIND (_ full-type) (CICILI:TYPE-CHECK cell :TYPEOF :std^cell :MODIFIER :move)
      (LET ((type-name (NTH 1 full-type)))
        `(closure ((<> letn ,type-name ,(GENSYM)) :cell (aof ,cell) :default_value ,default ,@captures)
           (out auto)
           (return (? (-> cell ptr)
                     (letn (((<> ,type-name interior_t) ref ,obj . (FUNCTION (-> cell ptr))))
                       ,@body)
                     default_value)))))))


(DEFMACRO take^cell ((obj cell &REST captures) &REST body)
  (LET ((obj obj)
        (cell cell))
    ;; full-type is list of inferred type details
    (MULTIPLE-VALUE-BIND (_ full-type) (CICILI:TYPE-CHECK cell :TYPEOF :std^cell :MODIFIER :move)
      (LET* ((type-name (NTH 1 full-type)))
        `(closure ((<> take ,type-name ,(GENSYM)) :cell ,cell ,@captures)
           (when ($ cell ptr)
             (letin ((,obj (cof ($ cell ptr))))
               ,@body)))))))


(DEFMACRO taken^cell ((obj cell default &REST captures) &REST body)
  (LET ((obj obj)
        (cell cell)
        (default default))
    ;; full-type is list of inferred type details
    (MULTIPLE-VALUE-BIND (_ full-type) (CICILI:TYPE-CHECK cell :TYPEOF :std^cell :MODIFIER :move)
      (LET* ((type-name (NTH 1 full-type)))
        `(closure ((<> taken ,type-name ,(GENSYM)) :cell ,cell :default_value ,default ,@captures)
           (out auto)
           (return (? ($ cell ptr)
                     (letin ((,obj (cof ($ cell ptr)))) ; should zeroed ($ cell ptr)
                       ,@body)
                     default_value)))))))
