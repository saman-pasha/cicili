;;;; Haskell Thinking Model Implementation for Cicili

;; lambda calculus
;; single parameter
;; single irreducible clause
;; (f n)
;; reducible
(DEFMACRO lambda (macro param body)
  `(DEFMACRO ,macro (arg)
     (LET ((param ',param)
           (body ',body))
       (SETQ body (SUBST arg param body))
       `(,@body))))

;; everything is a Lambda lalalalalalalalalalalalalalalalalalalalalala
;; a series of lambdas
;; ((f m) n)
;; reducible function
(DEFMACRO fn (macro param &REST body)
  (WHEN (NULL body) (ERROR (FORMAT NIL "fn without any parameter or body: (~A ~A)" macro param)))
  (LET ((body (PUSH param body))
        (body-p (CAR (LAST body)))
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
  `(fn ,(GENSYM "__h_lambda") ,@body))

;; where and letin are the same
(DEFMACRO letin (args body)
  `(,@(REDUCE #'LIST
        (APPEND (LIST `(fn ,(GENSYM "__h_letIn") ,@(MAPCAR #'CAR args) ,body))
                (MAPCAR #'CADR args)))))
;; where and letin are the same
(DEFMACRO where (args body)
  `(,@(REDUCE #'LIST
        (APPEND (LIST `(fn ,(GENSYM "__h_where") ,@(MAPCAR #'CAR args) ,body))
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

;; data helpers
(DEFUN make-data-type-name (ct)
  (INTERN (FORMAT NIL "__h_~A_t" ct)))

(DEFUN make-data-ctor-name (ct)
  (INTERN (FORMAT NIL "__h_~A_ctor" ct)))

(DEFUN make-data-member-name (number)
  (INTERN (FORMAT NIL "__h_~A_mem" number)))

;; Data Constructor
;; data Mood = Blah | Woot
;; (data TestT NoArg (WithArg (type x) (type y)))
(DEFMACRO data (name ctor &REST ctors)
  (LET ((enum-name (INTERN (FORMAT NIL "__h_~A_ctor_t" name)))
        (ctors (MAPCAR #'(LAMBDA (ct) (IF (SYMBOLP ct) (LIST ct) ct)) (PUSH ctor ctors))))
    `($$$ (enum ,enum-name
            ,@(MAPCAR #'(LAMBDA (ct) (LIST (make-data-type-name (CAR ct)))) ctors))
       (struct ,name
         (member ,enum-name __h_ctor)
         (union 
             ,@(MAPCAR #'(LAMBDA (ct)
                           (LET ((mem-counter -1))
                             `(struct
                                  ,@(MAPCAR #'(LAMBDA (param)
                                                (SETQ mem-counter (1+ mem-counter))
                                                (MULTIPLE-VALUE-BIND (const type modifier const-ptr variable array-def)
                                                    (CICILI:SPECIFY-TYPE< param)
                                                  `(member ,@(REMOVE NIL (LIST const type modifier const-ptr
                                                                               (make-data-member-name mem-counter)
                                                                               array-def)))))
                                            (CDR ct))
                                (declare ,(CAR ct)))))
                       ctors)
           (declare __h_data)))
       ,@(MAPCAR #'(LAMBDA (ct)
                     (WHEN (EQUAL name (CAR ct)) (ERROR (FORMAT NIL "data type and ctor having same name: ~A" name)))
                     (LET ((ct-name (CAR ct))
                           (params (CDR ct)))
                       (IF (NULL params)
                           `(func ,ct-name ()
                                  (out ,name)
                                  (return (cast ,name '{ ,(make-data-type-name ct-name) })))
                           (IF (> 1 (LENGTH params))
                               `($$$ (func ,(make-data-ctor-name ct-name) ,params
                                           (out ,name)
                                           (return (cast ,name '{
                                                         ,(make-data-type-name ct-name)
                                                         ,(INTERN (FORMAT NIL "$__h_data$~A" ct-name))
                                                         '{ ,@(MAPCAR #'CADR params) }
                                                         })))
                                  (fn ,ct-name ,@(MAPCAR #'CADR params)
                                      (,(make-data-ctor-name ct-name))))
                               `(func ,ct-name ,params
                                      (out ,name)
                                      (return (cast ,name '{
                                                    ,(make-data-type-name ct-name)
                                                    ,(INTERN (FORMAT NIL "$__h_data$~A" ct-name))
                                                    '{ ,@(MAPCAR #'CADR params) }
                                                    })))))))
                 ctors))))

;; pattern matching
;; data type and arguments expansion
;; => for additional condition
(DEFMACRO match (data))
