
;; data Bool = False True
(DEFMACRO decl-Bool ()
  `(decl-data Bool
     True
     False
     (func and  ((Bool lhs) (Bool rhs)) (out Bool))
     (func or   ((Bool lhs) (Bool rhs)) (out Bool))
     (func show ((CFile file) (Bool value)) (out int))))

(DEFMACRO impl-Bool ()
  `(impl-data Bool
     True
     False
     
     (func and ((Bool lhs) (Bool rhs))
           (out Bool)
           (return (match lhs
                     (False   (False))
                     (default (match rhs
                                (False   (False))
                                (default (True)))))))
     
     (func or ((Bool lhs) (Bool rhs))
           (out Bool)
           (return (match lhs
                     (True    (True))
                     (default (match rhs
                                (True    (True))
                                (default (False)))))))

     (func show ((CFile file) (Bool value))
           (out int)
           (return (match value
                     (False   (fprintf file "%s" "False"))
                     (default (fprintf file "%s" "True")))))))
