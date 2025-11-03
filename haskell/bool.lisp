
;; data Bool = False True
(DEFMACRO decl-Bool ()
  `(decl-data Bool
     False
     True
     (func and  ((Bool lhs) (Bool rhs)) (out Bool))
     (func or   ((Bool lhs) (Bool rhs)) (out Bool))
     (func show ((Bool value)))))

(DEFMACRO impl-Bool ()
  `(impl-data Bool
     False
     True
     
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

     (func show ((Bool value))
           (io value
             (False   (printf "%s" "False"))
             (default (printf "%s" "True"))))))
