;;;; Haskell Thinking Model Implementation for Cicili

;; lambda calculus
(DEFMACRO lambda (macro param body)
  `(DEFMACRO ,macro (arg)
     (LET ((param ',param)
           (body ',body))
       (SETQ body (SUBST arg param body))
       `(,@body))))

;; every thing is a Lambda
(DEFMACRO function (macro &REST body)
  (LET ((body-p (CAR (LAST body)))
        (len (- (LENGTH body) 2)))
    (DOTIMES (i (1+ len))
      (SETQ body-p (LIST 'lambda
                         (IF (= (- len i) 0) macro (INTERN (FORMAT NIL "~A_aa~D" macro (- len i))))
                         (INTERN (FORMAT NIL "~A" (NTH (- len i) body)))
                         body-p))
      (FORMAT T "~A~%" body-p))
    `(,@body-p)))

;; \
(DEFMACRO & (&REST body)
  `(function ,(GENSYM "ciciliLambda") ,@body))

(DEFMACRO let-in (args body)
  `(,@(REDUCE #'LIST
        (APPEND (LIST `(function ,(GENSYM "ciciliLetIn") ,@(MAPCAR #'CAR args) ,body))
                (MAPCAR #'CADR args)))))
