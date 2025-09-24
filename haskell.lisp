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
  (IF args
      `(,@(REDUCE #'LIST
            (APPEND (LIST `(fn ,(GENSYM "__h_letIn") ,@(MAPCAR #'CAR args) ,body))
                    (MAPCAR #'CADR args))))
      body))

;; where and letin are the same
(DEFMACRO where (args body)
  (IF args
      `(,@(REDUCE #'LIST
            (APPEND (LIST `(fn ,(GENSYM "__h_where") ,@(MAPCAR #'CAR args) ,body))
                    (MAPCAR #'CADR args))))
      body))

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

(DEFUN make-match-arg-name (id number)
  (INTERN (FORMAT NIL "__h_~A_~A_arg" id number)))

;; Data Constructor
;; data Mood = Blah | Woot
;; (data TestT NoArg (WithArg (type x) (type y)))
(DEFMACRO data (name ctor &REST ctors)
  (LET* ((name (MACROEXPAND name))
         (enum-name (INTERN (FORMAT NIL "__h_~A_ctor_t" name)))
         (ctors (MAPCAR #'(LAMBDA (ct)
                            (LET ((ct (MACROEXPAND ct)))
                              (IF (SYMBOLP ct) (LIST ct) ct)))
                        (PUSH ctor ctors))))
    `($$$ (enum ,enum-name
            ,@(MAPCAR #'(LAMBDA (ct)
                          (LET ((ct (MACROEXPAND ct)))                            
                            (LIST (make-data-type-name (MACROEXPAND (CAR ct))))))
                      ctors))
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
                                (declare ,(MACROEXPAND (CAR ct))))))
                       ctors)
           (declare __h_data)))
       ,@(MAPCAR #'(LAMBDA (ct)
                     (WHEN (EQUAL name (CAR ct)) (ERROR (FORMAT NIL "data type and ctor having same name: ~A" name)))
                     (LET ((ct-name (MACROEXPAND (CAR ct)))
                           (params (CDR ct)))
                       (IF (NULL params)
                           `(func ,ct-name ()
                                  (out ,name)
                                  (return (cast ,name '{ ,(make-data-type-name ct-name) })))
                           (IF (> (LENGTH params) 1)
                               `($$$ (func ,(make-data-ctor-name ct-name) ,params
                                           (out ,name)
                                           (return (cast ,name '{
                                                         ,(make-data-type-name ct-name)
                                                         ,(INTERN (FORMAT NIL "$__h_data$~A" ct-name))
                                                         '{ ,@(MAPCAR #'CADR params) }
                                                         })))
                                  (fn ,ct-name ,@(MAPCAR #'CADR params)
                                      (,(make-data-ctor-name ct-name) ,@(MAPCAR #'CADR params))))
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
(DEFMACRO match* (data cases tail)
  (IF (NULL cases)
      `($$$)
      (LET* ((match-id (GENSYM "match"))
             (case (CAR cases))
             (symb (MACROEXPAND (CAR case)))
             (defs ())
             (args ())
             (=>found NIL))
        (IF (ATOM symb)
            (DOTIMES (i (1- (LENGTH (CDR case)))) ; data type
              (LET ((arg (MACROEXPAND (NTH (1+ i) case))))
                (UNLESS =>found
                  (IF (EQUAL arg '=>)
                      (SETQ =>found (NTH (+ i 2) case))
                      (UNLESS (EQUAL arg '_)
                        (LET ((arg-name (make-match-arg-name match-id i))
                              (mem-name (LIST '$ data '__h_data symb (make-data-member-name i))))
                          (PUSH `(auto ,arg-name . (FUNCTION ,mem-name)) defs)
                          (PUSH (LIST arg arg-name) args)
                          ;; (IF (ATOM arg)
                          ;;     (PUSH (LIST arg arg-name) args)
                          ;;    (match ,data ,@(CDR cases)))
                          ))))))
            (PROGN
              (DOTIMES (i (LENGTH symb)) ; tuple
                (LET ((arg (MACROEXPAND (NTH i symb))))
                  (UNLESS (EQUAL arg '_)
                    (LET ((arg-name (make-match-arg-name match-id i))
                          (mem-name (LIST '$ data (make-data-member-name i))))
                      (PUSH `(auto ,arg-name . (FUNCTION ,mem-name)) defs)
                      (PUSH (LIST arg arg-name) args)))))
              (WHEN (EQUAL (CADR case) '=>)
                (SETQ =>found (NTH 2 case)))))

        (WHEN (OR (AND =>found (LISTP symb) (/= (LENGTH case) 4))
                (AND =>found (ATOM symb) (< (LENGTH case) 4))
                (AND (NULL =>found) (LISTP symb) (/= (LENGTH case) 2))
                (AND (NULL =>found) (ATOM symb) (< (LENGTH case) 2)))
          (ERROR (FORMAT NIL "match case wrong definition: ~A" case)))
        
        `(let ,defs
           (letin ,args
             ,(APPEND
               (IF (EQUAL symb '_)
                   (CAR (LAST case))
                   (IF (ATOM symb)
                       (IF =>found
                           `(if (and (== ($ ,data __h_ctor) ,(make-data-type-name symb)) ,=>found)
                                ,(CAR (LAST case)))
                           `(if (== ($ ,data __h_ctor) ,(make-data-type-name symb))
                                ,(CAR (LAST case))))
                       (IF =>found
                           `(if ,=>found
                                ,(CAR (LAST case)))
                           `(if (== true true)
                                ,(CAR (LAST case))))))
               (IF (CDR cases)
                   `((match* ,data ,(CDR cases) ,(+ tail 1)))
                   '())))))))

(DEFMACRO match (data &REST cases)
  `(match* ,data ,cases 0))

;; tuple
;; (a, b, c)
;; use as variable type
;; (var (tuple int char) tu . '{ 2 #\c })
(DEFMACRO tuple (&REST elements)
  (LET ((members ()))
    (DOTIMES (i (LENGTH elements))
      (PUSH (LIST (NTH i elements) (make-data-member-name i)) members))
  `'{ ,@(REVERSE members) }))

;; helper for tuple passing by value
(DEFMACRO cast-tuple (type value)
  `(cast ,type (cof (cast (,type *) (aof ,value)))))


;; CURRY UNCURRY the Legend
