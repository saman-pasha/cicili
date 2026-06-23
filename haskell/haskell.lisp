
;; helper macro will auto defer all vars
;; checks an object has destructor
(DEFMACRO --h-only-haskell-obj (is-ptr var-name factory)
  (LET ((var-name var-name))
    `(letn ((auto ,var-name . (FUNCTION ,factory)))
       (cast void ,(IF is-ptr
                       `(-> ,var-name __h_table freeClass)
                       `(-> ($ ,var-name __h_table) freeData)))
       ,var-name)))

;; letin accepts only haskell objects are produced by 'data' or 'class'
;; auto destructor calling
;; needs to destructor be specified
;; * at first means the variable is pointer (output of a class instantiation)
(DEFMACRO letin (var-list &REST body)
  `(letn ,(APPLY 'APPEND
                 (MAP 'LIST #'(LAMBDA (var)

                                (UNLESS (OR (NOT (AND (EQUAL (CAR var) *) (= (LENGTH var) 3))) (= (LENGTH var) 2))
                                  (ERROR (FORMAT NIL "wrong letin variable definition: ~A" var)))

                                (IF (= (LENGTH var) 2)
                                    `((defer () __h_free_data_router)
                                      (auto ,(CAR var)
                                        . (FUNCTION (--h-only-haskell-obj ,NIL ,(CAR var) ,(CADR var)))))
                                    `((defer () __h_free_class_router)
                                      (auto ,(CADR var)
                                        . (FUNCTION (--h-only-haskell-obj ,T ,(CADR var) ,(CADDR var)))))))
                      var-list))
     ,@body))

;; accepts all variables if the 3rd argument specified, will use it as destructor
(DEFMACRO letin* (var-list &REST body)
  `(letn ,(APPLY 'APPEND
                 (MAP 'LIST #'(LAMBDA (var)
                                (WHEN (OR (< (LENGTH var) 2) (> (LENGTH var) 3))
                                  (ERROR (FORMAT NIL "wrong letin* variable definition: ~A" var)))
                                (IF (= (LENGTH var) 2)
                                    `((auto ,(CAR var) . (FUNCTION ,(CADR var))))
                                    `((defer () ,(CADDR var)) (auto ,(CAR var) . (FUNCTION ,(CADR var))))))
                      var-list))
     ,@body))

;; Rc works like letin but with reference counting and needs Rc type at second argument
;; each var will be wrapped inside a Rc
;; all var initializers should be a Rc ctor
;; * means rc contains a pointer
(DEFMACRO rc (var-list &REST body)
  `(letn ,(APPLY 'APPEND
                 (MAP 'LIST #'(LAMBDA (var)

                                (UNLESS (= (LENGTH var) 3)
                                  (ERROR (FORMAT NIL "wrong rc variable definition: ~A" var)))

                                `((defer () __h_free_data_router)
                                  (auto ,(CAR var)
                                    . (FUNCTION ((<> new ,(CADR var))
                                                 (--h-only-haskell-obj ,T ,(CAR var) ,(CADDR var)))))))
                      var-list))
     ,@body))


(DEFMACRO new (obj)
  (LET ((obj obj))
    `((\.* new ,obj) ,obj)))

(DEFMACRO copy (obj)
  (LET ((obj obj))
    `((\.* copy ,obj) ,obj)))

(DEFMACRO show (obj)
  (LET ((obj obj))
    `((\.* show ,obj) stdout ,obj)))

(DEFMACRO iterate (args &REST body)
  (DESTRUCTURING-BIND (begin end vector &KEY reverse) args
    (LET ((cloned   (GENSYM "__h_cloned"))
          (cloned_x (GENSYM "__h_cloned_x"))
          (iterator (GENSYM "__h_iterator")))
      `(let ((defer () __h_free_data_router)
             (auto ,cloned . #'((\. clone ,vector) ,vector))) ; get one reference till end of iteration
         (io# ,cloned
           (= ,cloned_x default
              (let ((auto ,iterator . #'((\.* iterator ,cloned_x) ,cloned)))
                (io ,iterator
                  ((\, ,begin ,end)
                   ,(IF reverse
                        `(block (-- ,begin)
                                (while (!= ,begin (-- ,end))
                                  ,@body))
                        `(while (!= (1+ ,begin) ,end)
                           ,@body)))))))))))
