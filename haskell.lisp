;;;; Haskell Thinking Model Implementation for Cicili

;; lambda calculus
;; single parameter
;; single irreducible clause
;; (f n)
(DEFMACRO lambda (macro param body)
  `(DEFMACRO ,macro (arg)
     (LET ((param ',param)
           (body ',body))
       (SETQ body (SUBST arg param body))
       `(,@body))))

;; everything is a Lambda lalalalalalalalalalalalalalalalalalalalalala
;; a series of lambdas
;; ((f m) n)
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

;; '\' haskel lambda sign equivalent
(DEFMACRO \\ (&REST body)
  `(function ,(GENSYM "__h_lambda") ,@body))

;; where and letin are the same
(DEFMACRO letin (args body)
  `(,@(REDUCE #'LIST
        (APPEND (LIST `(function ,(GENSYM "__h_letIn") ,@(MAPCAR #'CAR args) ,body))
                (MAPCAR #'CADR args)))))
;; where and letin are the same
(DEFMACRO where (args body)
  `(,@(REDUCE #'LIST
        (APPEND (LIST `(function ,(GENSYM "__h_where") ,@(MAPCAR #'CAR args) ,body))
                (MAPCAR #'CADR args)))))

;; https://www.reddit.com/user/ckriesbeck/
;; https://www.reddit.com/r/lisp/comments/m5grm5/split_list_into_sublists/
(DEFUN partition-data (data sep)
  (DO* ((tail data (MEMBER sep data :TEST 'EQUAL))
        (lsts NIL (CONS (LDIFF data tail) lsts))
        (data data (CDR tail)))
       ((NULL data) (REVERSE lsts))))

;; function application
;; a way to apply function to arguments in row
;; (\$ f m n) instead of ((f m) n)
;; (\$ f m n $ g x) instead of (((f m) n) (g x))
(DEFMACRO $> (&REST func-n-args)
  (LET ((parts (partition-data func-n-args '$))
        (result ()))
    (DOLIST (p parts)
      (SETQ result (PUSH (REDUCE #'LIST p) result)))
    `(,@(REDUCE #'LIST (REVERSE result) :FROM-END T))))
  
