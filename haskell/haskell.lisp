
;;; helper macro will auto defer all vars
;; needs to destructor be specified
(DEFMACRO letin (var-list &REST body)
  `(letn ,(APPLY 'APPEND
                 (MAP 'LIST #'(LAMBDA (var)
                                (UNLESS (OR (NOT (AND (EQUAL (CAR var) *) (= (LENGTH var) 3))) (= (LENGTH var) 2))
                                  (ERROR (FORMAT NIL "wrong letin variable definition: ~A" var)))
                                (IF (= (LENGTH var) 2)
                                    `((defer () __h_free_data_router) (auto ,(CAR var) . (FUNCTION ,(CADR var))))
                                    `((defer () __h_free_class_router) (auto ,(CADR var) . (FUNCTION ,(CADDR var))))))
                      var-list))
     ,@body))

;; auto destructor calling
;; * at first means the variable is pointer (output of a class instantiation)
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
