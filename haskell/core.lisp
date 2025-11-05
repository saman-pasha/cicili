;;;; Haskell Thinking Model Implementation for Cicili

;; lambda calculus
;; reducible
;; single parameter
;; outputs single irreducible clause
;; (f n)
(DEFMACRO lambda (macro param body)
  `(DEFMACRO ,macro (arg)
     (LET ((param ',param)
           (body ',body))
       (SETQ body (SUBST arg param body :TEST 'EQUAL))
       `(,@body))))

;; everything is a Lambda lalalalalalalalalalalalalalalalalalalalalala
;; a series of lambdas
;; ((f m) n)
;; reducible function
(DEFMACRO fn (macro param &REST body)
  (LET ((macro (MACROEXPAND macro)))
    (WHEN (NULL body) (ERROR (FORMAT NIL "fn without any parameter or body: (~A ~A)" macro param)))
    (LET* ((params (REVERSE (CDR (REVERSE (APPEND (LIST param) body)))))
           (body (CAR (LAST body)))
           (len (LENGTH params)))
      (DOTIMES (i len)
        (SETQ body
              (LIST 'lambda
                    (IF (> (- len i) 1) (INTERN (FORMAT NIL "~A_aa~D" macro (1- (- len i)))) macro)
                    (INTERN (FORMAT NIL "~A" (NTH (1- (- len i)) params)))
                    body)))
      `(,@body))))

;; '\' haskel lambda sign equivalent
(DEFMACRO \\ (&REST body)
  `(fn ,(GENSYM "__h_lambda") ,@body))

;; where and letin are the same
;; where puts exactly the value of each var in place of it, and makes C functions Curry
(DEFMACRO where (args body)
  (IF args
      `(,@(REDUCE #'LIST
            (APPEND (LIST `(fn ,(GENSYM "__h_where") ,@(MAPCAR #'CAR args) ,body))
                    (MAPCAR #'CADR args))))
      body))

;; https://www.reddit.com/user/ckriesbeck/
;; https://www.reddit.com/r/lisp/comments/m5grm5/split_list_into_sublists/
(DEFUN partition-h-data (data sep)
  (DO* ((tail data (MEMBER sep data :TEST 'EQUAL))
        (lsts NIL (CONS (LDIFF data tail) lsts))
        (data data (CDR tail)))
       ((NULL data) (REVERSE lsts))))

;; https://stackoverflow.com/users/34771/vatine
;; https://stackoverflow.com/questions/13937520/pythons-range-analog-in-common-lisp
(DEFUN range-h (max &KEY (min 0) (step 1))
   (LOOP FOR n FROM min BELOW max BY step
         COLLECT n))

;; both function application and function compsition
;; '$ for function application and '! for function composition
;; pointfree style using $> for both haskell '$ and '. 
;; a way to apply function to arguments in row
;; ($> f m n)       instead of ((f m) n)
;; ($> f m $ g $ x) instead of ((f m) (g x))
;; ($> f m ! g $ x) instead of ((f m) (g x))
(DEFUN replace-h-operator (op expr)
  (LET ((parts (partition-h-data expr (CAR op))))
    (IF (= 1 (LENGTH parts))
        expr
        (REDUCE #'(LAMBDA (x y)
                    (LIST (CDR op) x y))
          parts))))

;; $ function application
(DEFMACRO $> (&REST func-n-args)
  (LET ((parts (partition-h-data func-n-args '$))
        (result ()))
    (DOLIST (p parts)
      (LET ((pres (replace-h-operator (CONS '! '!>) p)))
        (PUSH (IF (= 1 (LENGTH pres))
                  (CAR pres)
                  (IF (> (LENGTH pres) 2)
                      (IF (EQUAL (CAR pres) (CDR (CONS '! '!>)))
                          pres
                          (REDUCE #'LIST pres))
                      pres))
          result)))
    `(,@(REDUCE #'LIST (REVERSE result) :FROM-END T))))

;; . function composition
(DEFMACRO !> (lhs rhs)
  (LET ((arg (INTERN (FORMAT NIL "__h_!_arg~A" (GENSYM))))
        (result ()))
    (DOLIST (p (LIST lhs rhs))
      (PUSH (REDUCE #'LIST p) result))
    (PUSH arg result)
    `(\\ ,arg ,(REDUCE #'LIST (REVERSE result) :FROM-END T))))

;; | function guard
;; otherwise case is required
(DEFMACRO function-h-guard (fcond fpath otherwise elsepath &REST guards)
  `(? ,fcond ,fpath ,(IF guards
                         `(function-h-guard ,otherwise ,elsepath ,@guards)
                         (IF (AND (ATOM otherwise) (EQUAL otherwise 'otherwise))
                             elsepath
                             (ERROR (FORMAT NIL "case guards without otherwise"))))))
;; | function guard
(DEFMACRO case (fcond fpath otherwise elsepath &REST guards)
  `(function-h-guard ,fcond ,fpath ,otherwise ,elsepath ,@guards))

;; a way to access functions inside Table by data instance
(DEFMACRO \. (function data)
  `(-> (aof ,data) __h_table ,function))

;; a way to access functions inside Table by class instance
(DEFMACRO \.* (function class)
  `(-> ,class __h_table ,function))

;; a way to access functions inside Table by getTable
(DEFMACRO \.+ (function type)
  `(-> ((<> get ,type _H_Table)) ,function))

;; helpers
(DEFUN make-data-h-type-name (ct)
  (INTERN (FORMAT NIL "__h_~A_t" (MACROEXPAND ct))))

(DEFUN make-data-h-ctor-name (ct)
  (INTERN (FORMAT NIL "__h_~A_ctor" (MACROEXPAND ct))))

(DEFUN make-data-h-member-name (number)
  (INTERN (FORMAT NIL "__h_~A_mem" number)))

(DEFUN make-match-h-arg-name (id number)
  (INTERN (FORMAT NIL "__h_~A_~A_arg" id number)))

(DEFUN make-class-h-base-name (ct)
  (INTERN (FORMAT NIL "__h_~A_class_t" (MACROEXPAND ct))))
