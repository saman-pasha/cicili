;;;; Cicili std rc
(generic decl-rc
  (a)

  (non-copy)
  (struct (<> rc a context)
          (member a ref ptr)
          (member size_t * count))

  (inline)
  (func (<> free rc a context) (((<> rc a context) * ctx))
        (syslog! (printf "FREE RC CTX: %p\n" (-> ctx ptr)))
        (when (and (-> ctx ptr)
                   (-> ctx count)
                   (== (cof (-> ctx count)) 1))
          ((<> free a) (-> ctx ptr))
          (free (-> ctx count))
          (free (-> ctx ptr))))

  (inline)
  (func (<> free rc a context pointer) (((<> rc a context) ** ctx))
        (<> free rc a context (cof ctx)))

  (decl-cell (<> rc a context))

  ) ; decl-rc


(DEFMACRO new^rc^context (type &REST args)
  (LET* ((ctor `(<> new ,type))
         (args args)
         (a (CICILI:INFER-TYPE `(,ctor ,@args)))
         (ptr-name (GENSYM (FORMAT NIL "~A_ptr" (SYMBOL-NAME (CAR a)))))
         (obj-name (GENSYM (FORMAT NIL "~A_obj" (SYMBOL-NAME (CAR a)))))
         (count-name (GENSYM (FORMAT NIL "~A_count" (SYMBOL-NAME (CAR a))))))
    (FORMAT T "NEW^RC^CONTEXT   ~A~%" a)
    (WHEN (> (LENGTH a) 1) (ERROR (FORMAT NIL "new rc context got invalid type ~A for ~A" a ctor)))
    `(letn ((,@a * ,ptr-name . (FUNCTION (malloc (sizeof ,@a))))
            (,@a move ,obj-name . (FUNCTION (,ctor ,@args)))
            (size_t * ,count-name . (FUNCTION (malloc (sizeof size_t)))))
       (syslog! (printf "NEW RC CTX: %p\n" ,ptr-name))
       (memcpy ,ptr-name (aof ,obj-name) (sizeof ,obj-name))
       (set (cof ,count-name) 1)
       (cast (<> rc ,@a context) '{ ,ptr-name ,count-name }))))


(DEFMACRO free^rc (rc)
  (LET ((rc rc)
        (full-type (NTH-VALUE 1 (CICILI:TYPE-CHECK rc :TYPEOF :std^cell :MODIFIER :ref))))
    `((<> free ,(NTH 1 full-type) context) ,rc)))


(DEFMACRO new^rc (type &REST args)
  `(new^cell rc^context ,type ,@args))


(DEFMACRO clone^rc (rc)
  (LET* ((rc rc)
         (types (MULTIPLE-VALUE-LIST (CICILI:INFER-TYPE `(aof ,rc))))
         (a (CICILI:INFER-TYPE `(<> ,(NTH 1 (NTH 1 types)) interior_t)))
         (rc-name (GENSYM "tmp_rc")))
    (WHEN (> (LENGTH a) 1) (ERROR (FORMAT NIL "clone rc got invalid type ~A for ~A" a rc)))
    `(letn ((,@(CAR types) ,rc-name . (FUNCTION (aof ,rc)))
            (auto def_value . (FUNCTION (cast (typeof (cof ,rc-name)) '{ 0 })))) 
       (letn^cell ((<> ctx ,@a) (cof ,rc-name) def_value)
         (? (and (-> (<> ctx ,@a) ptr)
                 (-> (<> ctx ,@a) count)
                 (>= (cof (-> (<> ctx ,@a) count)) 1))
           (progn
             (++ (cof (-> (<> ctx ,@a) count)))
             ;; (cast (<> cell ,@a) '{ (cast ,@a '{ (-> (<> ctx ,@a) ptr) (-> (<> ctx ,@a) count) }) })
             default_value)
           default_value)))))


(DEFMACRO let^rc ((obj rc &REST captures) &REST body)
  (LET* ((obj obj)
         (types (MULTIPLE-VALUE-LIST (CICILI:TYPE-CHECK rc :TYPEOF :std^cell :MODIFIER :move)))
         (a `(<> ,(NTH 1 (NTH 1 types)) interior_t)))
    `(let^cell ((<> ,obj ,a) ,rc) ,@captures
               (let ((auto ,obj . (FUNCTION (-> (<> ,obj ,a) ptr)))) ; (<> ,obj ,a) is rc^context
                 ,@body))))


(DEFMACRO letn^rc ((obj rc default &REST captures) &REST body)
  (LET* ((obj obj)
         (types (MULTIPLE-VALUE-LIST (CICILI:TYPE-CHECK rc :TYPEOF :std^cell :MODIFIER :move)))
         (a `(<> ,(NTH 1 (NTH 1 types)) interior_t)))
    `(letn^cell ((<> ,obj ,a) ,rc ,default) ,@captures
                (letn ((auto ,obj . (FUNCTION (-> (<> ,obj ,a) ptr)))) ; (<> ,obj ,a) is rc^context
                  ,@body))))


(DEFMACRO take^rc ((obj rc &REST captures) &REST body)
  (LET* ((obj obj)
         (types (MULTIPLE-VALUE-LIST (CICILI:TYPE-CHECK rc :TYPEOF :std^cell :MODIFIER :move)))
         (a `(<> ,(NTH 1 (NTH 1 types)) interior_t)))
    `(take^cell ((<> ,obj ,a) ,rc) ,@captures
                (when (and ($ (<> ,obj ,a) ptr)
                           ($ (<> ,obj ,a) count)
                           (>= (cof ($ (<> ,obj ,a) count)) 1))
                  (let ((auto ,obj . (FUNCTION ($ (<> ,obj ,a) ptr)))) ; (<> ,obj ,a) is rc^context
                    ,@body)))))


(DEFMACRO taken^rc ((obj rc default &REST captures) &REST body)
  (LET* ((obj obj)
         (types (MULTIPLE-VALUE-LIST (CICILI:TYPE-CHECK rc :TYPEOF :std^cell :MODIFIER :move)))
         (a `(<> ,(NTH 1 (NTH 1 types)) interior_t)))
    `(taken^cell ((<> ,obj ,a) ,rc ,default) ,@captures
                 (? (and ($ (<> ,obj ,a) ptr)
                         ($ (<> ,obj ,a) count)
                         (>= (cof ($ (<> ,obj ,a) count)) 1))
                   (letn ((auto ,obj . (FUNCTION ($ (<> ,obj ,a) ptr)))) ; (<> ,obj ,a) is rc^context
                     ,@body)
                   default_value))))
