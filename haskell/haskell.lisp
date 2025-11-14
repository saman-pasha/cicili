
;;; helper macro will auto defer all vars
;; checks an object has destructor
(DEFMACRO --h-only-haskell-obj (is-ptr factory)
  `(letn ((auto tmp_obj . (FUNCTION ,factory)))
     (cast void ,(IF is-ptr
                     `(-> tmp_obj __h_table freeClass)
                     `(-> ($ tmp_obj __h_table) freeData)))
     tmp_obj))

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
                                        . (FUNCTION (--h-only-haskell-obj
                                                        ,NIL
                                                      ,(CADR var)))))
                                    `((defer () __h_free_class_router)
                                      (auto ,(CADR var)
                                        . (FUNCTION (--h-only-haskell-obj
                                                        ,T
                                                      ,(CADDR var)))))))
                      var-list))
     ,@body))

;; accepts all variables if the 3rd argument specified, will use it as destructor
(DEFMACRO letin* (var-list &REST body)
  `(letn ,(APPLY 'APPEND
                 (MAP 'LIST #'(LAMBDA (var)
                                (WHEN (OR (< (LENGTH var) 2) (> (LENGTH var) 3))
                                  (ERROR (FORMAT NIL "wrong letin variable definition: ~A" var)))
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

                                `((defer () __h_free_class_router)
                                  (auto ,(CAR var)
                                    . (FUNCTION ((<> new ,(CADR var) Pure)
                                                 (--h-only-haskell-obj
                                                     ,T
                                                   ,(CADDR var)))))))
                      var-list))
     ,@body))
