
;;; helper macro will auto defer all vars
(DEFMACRO letin (var-list &REST body)
  `(letn ,(APPLY 'APPEND
                 (MAP 'LIST #'(LAMBDA (var)
                                (WHEN (OR (< (LENGTH var) 2) (> (LENGTH var) 3))
                                  (ERROR (FORMAT NIL "wrong letin variable definition: ~A" var)))
                                (IF (= (LENGTH var) 2)
                                    `((auto ,(CAR var) . (FUNCTION ,(CADR var))))
                                    `((defer () ,(CADDR var)) (auto ,(CAR var) . (FUNCTION ,(CADR var))))))
                      var-list))
     ,@body))

