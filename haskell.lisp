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
       (SETQ body (SUBST arg param body :TEST 'EQUAL))
       `(,@body))))

;; everything is a Lambda lalalalalalalalalalalalalalalalalalalalalala
;; a series of lambdas
;; ((f m) n)
;; reducible function
(DEFMACRO fn (macro param &REST body)
  (LET ((macro (MACROEXPAND macro)))
    ;; (SETF (MACRO-FUNCTION (INTERN (SUBSTITUTE #\^ #\_ (SYMBOL-NAME ,macro)))) (MACRO-FUNCTION ,macro)) ; alias ^ _
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

;; data helpers
(DEFUN make-data-h-type-name (ct)
  (INTERN (FORMAT NIL "__h_~A_t" (MACROEXPAND ct))))

(DEFUN make-data-h-ctor-name (ct)
  (INTERN (FORMAT NIL "__h_~A_ctor" (MACROEXPAND ct))))

(DEFUN make-data-h-member-name (number)
  (INTERN (FORMAT NIL "__h_~A_mem" number)))

(DEFUN make-match-h-arg-name (id number)
  (INTERN (FORMAT NIL "__h_~A_~A_arg" id number)))

;; Tuple
;; (a, b, c)
;; use as variable type
;; (var (Tuple int char) tu . '{ 2 #\c })
(DEFMACRO Tuple (&REST elements)
  (LET ((members ()))
    (DOTIMES (i (LENGTH elements))
      (PUSH (LIST (NTH i elements) (make-data-h-member-name i)) members))
    `'{ ,@(REVERSE members) }))

;; helper for tuple passing by value
(DEFMACRO cast-tuple (type value)
  `(cast ,type (cof (cast (,type *) (aof ,value)))))

;; Data Constructor
;; data Mood = Blah | Woot
;; (data TestT NoArg (WithArg (type x) (type y)))
;; for value type and copy on assignment types
;; suggestion: no member pointer and no self member reference
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
                            (LIST (make-data-h-type-name (MACROEXPAND (CAR ct))))))
                      (IF (> (LENGTH ctors) 1) ctors (LIST (LIST enum-name)))))
       (struct ,name
         (member ,(IF (> (LENGTH ctors) 1) enum-name 'DefaultCtor) __h_ctor)
         (union 
             ,@(MAPCAR #'(LAMBDA (ct)
                           (LET* ((mem-counter -1)
                                  (params (MAPCAR #'(LAMBDA (param)
                                                      (SETQ mem-counter (1+ mem-counter))
                                                      (MULTIPLE-VALUE-BIND (const type modifier const-ptr variable array-def)
                                                          (CICILI:SPECIFY-TYPE< param)
                                                        (REMOVE NIL (LIST const type modifier const-ptr
                                                                          (make-data-h-member-name mem-counter)
                                                                          array-def))))
                                                  (CDR ct))))
                             `(struct
                                  ,@(MAPCAR #'(LAMBDA (param) `(member ,@param)) params)
                                (declare ,(IF (= 1 (LENGTH ctors)) '_ (MACROEXPAND (CAR ct)))))))
                       ctors)
           (declare __h_data)))
       ,@(MAPCAR #'(LAMBDA (ct)
                     (WHEN (EQUAL name (CAR ct)) (ERROR (FORMAT NIL "data type and ctor having same name: ~A" name)))

                     (LET* ((ct-name (MACROEXPAND (CAR ct)))
                            (mem-counter -1)
                            (params (MAPCAR #'(LAMBDA (param)
                                                (SETQ mem-counter (1+ mem-counter))
                                                (MULTIPLE-VALUE-BIND (const type modifier const-ptr variable array-def)
                                                    (CICILI:SPECIFY-TYPE< param)
                                                  (REMOVE NIL (LIST const type modifier const-ptr
                                                                    (make-data-h-member-name mem-counter)
                                                                    array-def))))
                                            (CDR ct))))
                       (IF (NULL params)
                           `(func ,ct-name ()
                                  (out ,name)
                                  (return (cast ,name '{ ,(make-data-h-type-name (IF (= 1 (LENGTH ctors)) '_ ct-name)) })))
                           (IF (> (LENGTH params) 1)
                               `($$$ (func ,(make-data-h-ctor-name ct-name) ,params
                                           (out ,name)
                                           (return (cast ,name '{
                                                         ,(make-data-h-type-name (IF (= 1 (LENGTH ctors)) '_ ct-name))
                                                         ,(INTERN (FORMAT NIL "$__h_data$~A"
                                                                          (IF (= 1 (LENGTH ctors)) '_ ct-name)))
                                                         '{ ,@(MAPCAR #'CADR params) }
                                                         })))
                                  (fn ,ct-name ,@(MAPCAR #'CADR params)
                                      (,(make-data-h-ctor-name ct-name) ,@(MAPCAR #'CADR params))))
                               `(func ,ct-name ,params
                                      (out ,name)
                                      (return (cast ,name '{
                                                    ,(make-data-h-type-name (IF (= 1 (LENGTH ctors)) '_ ct-name))
                                                    ,(INTERN (FORMAT NIL "$__h_data$~A"
                                                                     (IF (= 1 (LENGTH ctors)) '_ ct-name)))
                                                    '{ ,@(MAPCAR #'CADR params) }
                                                    })))))))
                 ctors))))

;; prelude
;; (enum DefaultCtor
;;   (_))
        
;; (enum Bool
;;   (False)
;;   (True))

;; data Maybe = Nothing | Just a
;; (enum Maybe
;;   (Nothing)
;;   (Just))

(generic specialise_Maybe (a)
         (struct (<> Maybe a)
           (member Maybe __h_ctor)
           (union
               (struct (declare Nothing))
             (struct (member a __h_0_mem) (declare Just))
             (declare __h_data)))

         (func (<> Nothing a) ()
               (out (<> Maybe a))
               (return (cast (<> Maybe a) '{ $__h_ctor __h_Nothing_t $__h_data$Nothing '{ } })))

         (func (<> Just a) ((a value))
               (out (<> Maybe a))
               (return (cast (<> Maybe a) '{ $__h_ctor __h_Just_t $__h_data$Just '{ $__h_0_mem value } })))
         )

;; Data Constructor
;; data Mood = Blah | Woot
;; (data TestT NoArg (WithArg (type x) (type y)))
;; for pointer type and copy reference on assignment types
;; suggestion: some member pointer or self member reference
;; auto Maybe type
(DEFMACRO class (name ctor &REST rest-ctors)
  (LET* ((name (MACROEXPAND name))
         (enum-name (INTERN (FORMAT NIL "__h_~A_ctor_t" name)))
         (ctors (MAPCAR #'(LAMBDA (ct)
                            (LET ((ct (MACROEXPAND ct)))
                              (IF (SYMBOLP ct) (LIST ct) ct)))
                        (APPEND (LIST ctor) rest-ctors))))
    
    `($$$ (enum ,enum-name
            ,@(MAPCAR #'(LAMBDA (ct)
                          (LET ((ct (MACROEXPAND ct)))                            
                            (LIST (make-data-h-type-name (MACROEXPAND (CAR ct))))))
                      (IF (> (LENGTH ctors) 1) ctors (IF (> (LENGTH ctors) 1) ctors (LIST (LIST enum-name))))))

       ;; struct
       (decl) (struct (<> ,name class_t))
       (typedef (<> ,name class_t) * ,name)
       ;; Maybe
       (decl) (struct (<> Maybe ,name))
       (specialise_Maybe ,name)
       
       ;; actual type
       (struct (<> ,name class_t)
         (member ,(IF (> (LENGTH ctors) 1) enum-name 'DefaultCtor)  __h_ctor)
         (union 
             ,@(MAPCAR #'(LAMBDA (ct)
                           (LET* ((mem-counter -1)
                                  (params (MAPCAR #'(LAMBDA (param)
                                                      (SETQ mem-counter (1+ mem-counter))
                                                      (MULTIPLE-VALUE-BIND (const type modifier const-ptr variable array-def)
                                                          (CICILI:SPECIFY-TYPE< param)
                                                        (REMOVE NIL (LIST const type modifier const-ptr
                                                                          (make-data-h-member-name mem-counter)
                                                                          array-def))))
                                                  (CDR ct))))
                             `(struct
                                  ,@(MAPCAR #'(LAMBDA (param) `(member ,@param)) params)
                                (declare ,(IF (= 1 (LENGTH ctors)) '_ (MACROEXPAND (CAR ct)))))))
                       ctors)
           (declare __h_data)))
       
       ;; constructors
       ,@(MAPCAR #'(LAMBDA (ct)
                     (WHEN (EQUAL name (CAR ct)) (ERROR (FORMAT NIL "data type and ctor having same name: ~A" name)))
                     
                     (LET* ((ct-name (MACROEXPAND (CAR ct)))
                            (mem-counter -1)
                            (params (MAPCAR #'(LAMBDA (param)
                                                (SETQ mem-counter (1+ mem-counter))
                                                (MULTIPLE-VALUE-BIND (const type modifier const-ptr variable array-def)
                                                    (CICILI:SPECIFY-TYPE< param)
                                                  (REMOVE NIL (LIST const type modifier const-ptr
                                                                    (make-data-h-member-name mem-counter)
                                                                    array-def))))
                                            (CDR ct))))
                       (IF (NULL params)
                           `(func ,ct-name ()
                                  (out ,name)
                                  (return (cast ,name '{ ,(make-data-h-type-name (IF (= 1 (LENGTH ctors)) '_ ct-name)) })))
                           (IF (> (LENGTH params) 1)
                               `($$$ (func ,(make-data-h-ctor-name ct-name) ,params
                                           (out ,name)
                                           (var ,name this . #'(malloc (sizeof (<> ,name class_t))))
                                           (set (cof this)
                                             (cast (<> ,name class_t) '{
                                                   ,(make-data-h-type-name (IF (= 1 (LENGTH ctors)) '_ ct-name))
                                                   ,(INTERN (FORMAT NIL "$__h_data$~A" (IF (= 1 (LENGTH ctors)) '_ ct-name)))
                                                   '{ ,@(MAPCAR #'CADR params) }
                                                   }))
                                           (return this))
                                  (fn ,ct-name ,@(MAPCAR #'CADR params)
                                      (,(make-data-h-ctor-name ct-name) ,@(MAPCAR #'CADR params))))
                               `(func ,ct-name ,params
                                      (out ,name)
                                      (var ,name this . #'(malloc (sizeof ,name)))
                                      (set (cof this)
                                        (cast (<> ,name class_t) '{
                                              ,(make-data-h-type-name (IF (= 1 (LENGTH ctors)) '_ ct-name))
                                              ,(INTERN (FORMAT NIL "$__h_data$~A" (IF (= 1 (LENGTH ctors)) '_ ct-name)))
                                              '{ ,@(MAPCAR #'CADR params) }
                                              }))
                                      (return this))))))
                 ctors))))

;; pattern matching
;; data type and arguments expansion
;; needs default case as default return value
;; all cases after default case will be ignored
;; each match can has a guard with => a condition
;; access by path mode
;; * means Cons char ctor returns a pointer beacause Lists are classes
;; = str at first of any case makes an alias for whole object
;; ^ opr only inside cases can be used separated,
;; note in other cicili clauses ^ must be mixed whithout any space
;; _ for types with only one ctor
(DEFUN match-case-h-details (match-id data case)
  (LET* ((parts (partition-h-data case '^))
         (result (REDUCE #'(LAMBDA (x y)
                             (APPEND
                              (REVERSE (CDR (REVERSE x)))
                              (LIST (MACROEXPAND `(<> ,(CAR (LAST x)) ,(CAR y))))
                              (CDR y)))
                   parts))) ;; to mix names separated with ^
    (SETQ case result)
    
    (LET* ((has-alias (AND (LISTP case) (EQUAL (CAR case) '=)))
           (data-name (IF has-alias (CADR case) (IF (LISTP data) (GENSYM "__h_data") data)))
           (case (IF has-alias (CDDR case) case))
           (symb (MACROEXPAND (CAR case)))
           (tail (CDR case))
           (defs ())
           (assigns ())
           (args ())
           (conds ())
           (=>found NIL)
           (is-ptr NIL))

      (WHEN (AND (ATOM symb) (EQUAL symb '*))
        (SETQ is-ptr T)
        (SETQ case (CDR case))
        (SETQ symb (MACROEXPAND (CAR case)))
        (SETQ tail (CDR case)))

      (COND ((AND (LISTP symb) (EQUAL (CAR symb) '\,)) ; tuple \,
             (WHEN (OR has-alias (NOT (EQL data data-name)))
               (PUSH `(auto ,data-name . ,(IF (LISTP data) `(FUNCTION ,data) data)) defs))
             ;; (PUSH `(set ,data-name ,data) assigns))
             
             (DOTIMES (i (1- (LENGTH symb))) 
               (LET ((arg (MACROEXPAND (NTH (1+ i) symb))))
                 (UNLESS (EQUAL arg '_)
                   (LET ((arg-name (make-match-h-arg-name match-id i))
                         (mem-name (LIST '$ data-name (make-data-h-member-name i))))
                     (IF (ATOM arg)
                         (PROGN
                           (PUSH `(const auto ,arg . (FUNCTION ,mem-name)) defs)
                           (SETF (GETF args arg) (INTERN (FORMAT NIL "PREV_CASE_~A" arg))))
                         (LET ((match-id (GENSYM "match")))
                           (PUSH `(auto ,arg-name . (FUNCTION ,mem-name)) defs)
                           (MULTIPLE-VALUE-BIND (in-data-name in-symb in-tail in-defs in-assigns in-args in-conds)
                               (match-case-h-details match-id arg-name (APPEND arg (LIST NIL)))
                             (SETQ defs (APPEND in-defs defs))
                             (SETQ assigns (APPEND in-assigns assigns))
                             (SETQ args (APPEND in-args args))
                             (WHEN in-conds (SETQ conds (IF conds `(and ,conds ,in-conds) in-conds))))))))))
             (IF (EQUAL (CAR tail) '=>)
                 (PROGN
                   (SETQ =>found T)
                   (SETQ conds (IF conds `(and ,conds ,(NTH 1 tail)) (NTH 1 tail))))
                 (SETQ conds (IF conds conds 'true))))

            ((AND (LISTP symb) (EQUAL (CAR symb) '\:)) ; list \:
             (WHEN (OR has-alias (NOT (EQL data data-name)))
               (PUSH `(auto ,data-name . ,(IF (LISTP data) `(FUNCTION ,data) data)) defs))
             ;;  (PUSH `(set ,data-name ,data) assigns))
             ;; (PUSH `((typeof ,data) ,data-name) defs)
             ;; (PUSH `(set ,data-name ,data) assigns))

             (LET ((el-type (CADR symb)))
               (PUSH `((typeof ((<> has len Cons ,el-type) ,data-name ,(1- (LENGTH (CDDR symb))))) __h_has_len) defs)
               (PUSH `(set __h_has_len ((<> has len Cons ,el-type) ,data-name ,(1- (LENGTH (CDDR symb))))) assigns)
               (SETQ conds `(== __h_has_len ,(- (LENGTH symb) 3)))
               (DOTIMES (i (- (LENGTH symb) 2))
                 (LET ((arg (MACROEXPAND (NTH (+ i 2) symb))))
                   (UNLESS (EQUAL arg '_)
                     (LET ((arg-name (make-match-h-arg-name match-id i))
                           (mem-name (IF (< i (- (LENGTH symb) 3))
                                         (LIST '$ `((<> nth Cons ,el-type) ,i ,data-name)
                                               '__h_data
                                               'Just
                                               (make-data-h-member-name 0))
                                         `((<> drop Cons ,el-type) ,i ,data-name))))
                       (IF (ATOM arg)
                           (PROGN
                             (PUSH `((typeof ,mem-name) ,arg) defs)
                             (PUSH `(set ,arg ,mem-name) assigns)
                             (SETF (GETF args arg) (INTERN (FORMAT NIL "PREV_CASE_~A" arg))))
                           (LET ((match-id (GENSYM "match")))
                             (PUSH `((typeof ,mem-name) ,arg-name) defs)
                             (PUSH `(set ,arg-name ,mem-name) assigns)
                             (MULTIPLE-VALUE-BIND (in-data-name in-symb in-tail in-defs in-assigns in-args in-conds)
                                 (match-case-h-details match-id arg-name (APPEND arg (LIST NIL)))
                               (SETQ defs (APPEND in-defs defs))
                               (SETQ assigns (APPEND in-assigns assigns))
                               (SETQ args (APPEND in-args args))
                               (WHEN in-conds (SETQ conds (IF conds `(and ,conds ,in-conds) in-conds))))))))))
               (IF (EQUAL (CAR tail) '=>)
                   (PROGN
                     (SETQ =>found T)
                     (SETQ conds (IF conds `(and ,conds ,(NTH 1 tail)) (NTH 1 tail))))
                   (SETQ conds (IF conds conds 'true)))))

            (T (WHEN (OR has-alias (NOT (EQL data data-name)))
                 (PUSH `(auto ,data-name . ,(IF (LISTP data) `(FUNCTION ,data) data)) defs))
               ;; (PUSH `(set ,data-name ,data) assigns))

               (DOTIMES (i (1- (LENGTH tail))) ; data type
                 (LET ((arg (MACROEXPAND (NTH (1+ i) case))))
                   (UNLESS =>found
                     (IF (EQUAL arg '=>)
                         (PROGN
                           (SETQ =>found T)
                           (SETQ conds (IF conds `(and ,conds ,(NTH (+ i 2) case)) (NTH (+ i 2) case))))
                         (UNLESS (EQUAL arg '_)
                           (LET ((arg-name (make-match-h-arg-name match-id i))
                                 (mem-name (LIST '$
                                                 (LIST (IF is-ptr '-> '$) data-name '__h_data)
                                                 symb
                                                 (make-data-h-member-name i))))
                             (IF (ATOM arg)
                                 (PROGN
                                   ;; (PUSH `((typeof ,mem-name) ,arg) defs)
                                   ;; (PUSH `(set ,arg ,mem-name) assigns)
                                   (PUSH `(auto ,arg . ,(IF (LISTP mem-name) `(FUNCTION ,mem-name) mem-name)) defs)

                                   (SETF (GETF args arg) (INTERN (FORMAT NIL "PREV_CASE_~A" arg))))
                                 (LET ((match-id (GENSYM "match")))
                                   ;; (PUSH `((typeof ,mem-name) ,arg-name) defs)
                                   ;; (PUSH `(set ,arg-name ,mem-name) assigns)
                                   (PUSH `(auto ,arg-name . ,(IF (LISTP mem-name) `(FUNCTION ,mem-name) mem-name)) defs)

                                   (MULTIPLE-VALUE-BIND (in-data-name in-symb in-tail in-defs in-assigns in-args in-conds)
                                       (match-case-h-details match-id arg-name (APPEND arg (LIST NIL)))
                                     (SETQ defs (APPEND in-defs defs))
                                     (SETQ assigns (APPEND in-assigns assigns))
                                     (SETQ args (APPEND in-args args))
                                     (WHEN in-conds (SETQ conds (IF conds `(and ,conds ,in-conds) in-conds))))))
                             ))))))))
      
      (WHEN (OR (AND =>found (LISTP symb) (/= (LENGTH case) 4))
              (AND =>found (ATOM symb) (< (LENGTH case) 4))
              (AND (NULL =>found) (LISTP symb) (/= (LENGTH case) 2))
              (AND (NULL =>found) (ATOM symb) (< (LENGTH case) 2)))
        (ERROR (FORMAT NIL "match case wrong definition: ~A" case)))

      (UNLESS (EQUAL symb 'default)
        (WHEN (ATOM symb)
          (SETQ conds (IF (AND conds (EQUAL conds 'true))
                          `(== (,(IF is-ptr '-> '$) ,data-name __h_ctor) ,(make-data-h-type-name symb))
                          (IF conds
                              `(and (== (,(IF is-ptr '-> '$) ,data-name __h_ctor) ,(make-data-h-type-name symb)) ,conds)
                              `(== (,(IF is-ptr '-> '$) ,data-name __h_ctor) ,(make-data-h-type-name symb)))))))

      (VALUES data-name symb tail defs assigns args conds))))

(DEFMACRO match* (data cases is-io prev-args)
  (IF (NULL cases)
      `($$$)
      (LET* ((match-id (GENSYM "match"))
             (case (CAR cases)))
        (MULTIPLE-VALUE-BIND (data-name symb tail defs assigns args conds)
            (match-case-h-details match-id data case)

          ;; (LET ((filtered-prev-args ()))
          ;;   (DOTIMES (i (LENGTH args))
          ;;     (WHEN (= 0 (REM i 2)) (REMF prev-args (NTH i args))))
          ;;   (DOTIMES (i (LENGTH prev-args))
          ;;     (WHEN (= 0 (REM i 2))
          ;;       (PUSH (LIST (NTH i prev-args) (GETF prev-args (NTH i prev-args))) filtered-prev-args)))
          
          `(,(IF is-io 'let 'letn) ,(REVERSE defs)
             ,(IF (AND assigns conds)
                  (LET ((ctor-cond (CAR conds)))
                    (IF (AND (SYMBOLP ctor-cond) (EQUAL ctor-cond 'and))
                        `(if ,(CADR conds) (block ,@(REVERSE assigns)))
                        `(if ,conds (block ,@(REVERSE assigns)))))
                  `(block ,@(REVERSE assigns)))
             ;; (where ,(REVERSE filtered-prev-args)
             ,(IF conds
                  `(letn ((bool __h_case_result . (FUNCTION ,conds)))
                     ,(APPEND
                       `(,(IF is-io 'if '?) __h_case_result ,(CAR (LAST case)))
                       (IF (CDR cases)
                           `((match* ,data-name ,(CDR cases) ,is-io ,args))
                           '())))
                  (CAR (LAST case))))))))

;; match with required default value or void
(DEFMACRO match (data &REST cases)
  `(match* ,data ,cases NIL NIL))

;; match with optional default case
(DEFMACRO io (data &REST cases)
  `(match* ,data ,cases T NIL))

;; List must be defined by this generic
(generic specialise_List (type a)
         (guard (<> _H Maybe a)
           (specialise_Maybe a))
         
         (class type ((<> Cons a) (a head) ((<> Maybe type) tail)))

         (func (<> new type Pure) ((const a * buf) (int len))
               (out (<> Maybe type))
               (if (null buf)
                   (return ((<> Nothing type)))
                   (let ((a item . #'(cof buf)))
                     (if (== len 0)
                         (return ((<> Nothing type)))
                         (return ($> (<> Just type) ! (<> Cons a) item $
                                     ((<> new type Pure) (++ buf) (-- len))))))))

         (func (<> release type) (((<> Maybe type) list))
               (io list
                 (Just (= ls * _ _ tail)
                   (block
                       ((<> release type) tail)
                     (free ls)))))
         
         (func (<> free type) (((<> Maybe type) * list)) ; specified for letin
               ((<> release type) (cof list)))

         (func (<> next type) (((<> Maybe type) list))
               (out (<> Maybe type))
               (return (match list
                         (Just (= ls * _ _ tail) tail)
                         (default ((<> Nothing type))))))
         
         (func (<> nth type) ((int index) ((<> Maybe type) list))
               (out (<> Maybe a))
               (return (match list
                         (Just (* _ head tail)
                           (case (== index 0) ((<> Just a) head)
                                 otherwise    ((<> nth type) (-- index) tail)))
                         (default ((<> Nothing a))))))

         (fn (<> !! type) index list
             ((<> nth type) index list))

         (func (<> drop type) ((int index) ((<> Maybe type) list))
               (out (<> Maybe type))
               (return (case (== index 0) list
                             otherwise    (match list
                                            (Just (* _ _ tail)
                                              ((<> drop type) (-- index) tail))
                                            (default ((<> Nothing type)))))))
         
         (func (<> len type) (((<> Maybe type) list))
               (out int)
               (return (match list
                         (Just (* _ _ tail)
                           (+ 1 ((<> len type) tail)))
                         (default 0))))

         (func (<> has len type) (((<> Maybe type) list) (int desired))
               (out int)
               (return (match list
                         (Just (* _ _ tail)
                           (case (== desired 1) 1
                                 otherwise      (+ 1 ((<> has len type) tail (-- desired)))))
                         (default 0))))

         (fn (<> push type) head tail
             ($> (<> Just type) ! (<> Cons a) head $ tail))

         (fn (<> \: type) head tail
             ($> (<> Just type) ! (<> Cons a) head $ tail))

         (func (<> take type) ((int len) ((<> Maybe type) list))
               (out (<> Maybe type))
               (return (match list
                         (Just (* _ head tail) => (> len 0)
                               ($> (<> push type) head $ ((<> take type) (-- len) tail)))
                         (default ((<> Nothing type))))))

         (fn (<> head type) list
             ((<> nth type) 0 list))

         (fn (<> tail type) list
             ((<> drop type) 0 list))

         (func (<> append type) (((<> Maybe type) llist) ((<> Maybe type) rlist))
               (out (<> Maybe type))
               (return (match llist
                         (Just (* _ head tail)
                           ($> (<> push type) head $ ((<> append type) tail rlist)))
                         (default rlist))))

         (fn (<> ++ type) llist rlist
             ((<> append type) llist rlist))

         ;; Cons a
         (func (<> nth Cons a) ((int index) (type cons))
               (out (<> Maybe a))
               (return (match cons
                         (* _ head tail
                            (case (== index 0) ((<> Just a) head)
                                  otherwise    ((<> nth type) (-- index) tail)))
                         (default ((<> Nothing a))))))

         (func (<> drop Cons a) ((int index) (type cons))
               (out (<> Maybe type))
               (return (case (== index 0) ((<> Just type) cons)
                             otherwise    (match cons
                                            (* _ _ tail
                                               ((<> drop type) (-- index) tail))
                                            (default ((<> Nothing type)))))))

         (func (<> len Cons a) ((type cons))
               (out int)
               (return (match cons
                         (* _ _ tail
                            (+ 1 ((<> len type) tail)))
                         (default 0))))

         (func (<> has len Cons a) ((type cons) (int desired))
               (out int)
               (return (match cons
                         (* _ _ tail
                            (+ 1 ((<> has len type) tail (-- desired))))
                         (default 0))))

         )

(generic specialize_Range (type a)
         (class type ((<> Cons Range a) (a from) ((<> Maybe type) tail) (a to) (a step)))

         (func (<> new type) ((a from) (a to) (a step))
               (out (<> Maybe type))
               (return (case (<= from to) ($> (<> Just type) $ (<> Cons Range a) from ((<> Nothing type)) to step)
                             otherwise    ((<> Nothing type)))))
         
         (func (<> release type) (((<> Maybe type) list))
               (io list
                 (Just (= ls * _ from tail to step)
                   (block
                       ((<> release type) tail)
                     (free ls)))))
         
         (func (<> free type) (((<> Maybe type) * list)) ; specified for letin
               ((<> release type) (cof list)))

         (func (<> next type) (((<> Maybe type) list))
               (out (<> Maybe type))
               (return (match list
                         (Just (= ls * _ from _ to step) => (<= (+ from step) to)
                               ($> (<> Just type) $ (<> Cons Range a) (+ from step) ((<> Nothing type)) to step))
                         (default ((<> Nothing type))))))
         
         (fn (<> push type) from tail to step
             ($> (<> Just type) $ (<> Cons Range a) from tail to step))

         (fn (<> \: type) from tail to step
             ($> (<> Just type) $ (<> Cons Range a) from tail to step))

         (func (<> take type) ((int len) ((<> Maybe type) list))
               (out (<> Maybe type))
               (return (match list
                         (Just (* _ from _ to step) => (> len 0)
                               (letin ((ne ((<> next type) list) (<> free type)))
                                 (match ne
                                   (Just ($> (<> push type) from ((<> take type) (-- len) ne) to step))
                                   (default ($> (<> push type) from ne to step)))))
                         (default ((<> Nothing type))))))
         
         (func (<> show type) (((<> Maybe type) list))
               (io list
                 (Just (* _ head tail)
                   (io tail
                     (Just (block
                               (printf "%d, " head)
                             ((<> show type) tail)))
                     (default (printf "%d "  head))))))
         )

;; helper for tuple passing by value
(DEFMACRO cast-list (type value)
  `(cast ,type (cof (cast (,type *) (aof ,value)))))

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


