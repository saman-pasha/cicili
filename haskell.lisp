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
  (LET* ((params (REVERSE (CDR (REVERSE (APPEND (LIST param) body)))))
         (body (CAR (LAST body)))
         (len (LENGTH params)))
    (DOTIMES (i len)
      (SETQ body
            (LIST 'lambda
                  (IF (> (- len i) 1) (INTERN (FORMAT NIL "~A_aa~D" macro (1- (- len i)))) macro)
                  (INTERN (FORMAT NIL "~A" (NTH (1- (- len i)) params)))
                  body)))
    `(,@body)))

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

;; Tuple
;; (a, b, c)
;; use as variable type
;; (var (Tuple int char) tu . '{ 2 #\c })
(DEFMACRO Tuple (&REST elements)
  (LET ((members ()))
    (DOTIMES (i (LENGTH elements))
      (PUSH (LIST (NTH i elements) (make-data-member-name i)) members))
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

;; data Maybe = Nothing | Just a
(generic specialise_Maybe (a)
         (data (<> Maybe a)
           (<> Nothing a)
           ((<> Just a) (a value))))

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
                            (LIST (make-data-type-name (MACROEXPAND (CAR ct))))))
                      ctors))

       ;; struct
       (decl) (struct (<> ,name class_t))
       (typedef (<> ,name class_t) * ,name)
       ;; Maybe
       (decl) (struct (<> Maybe ,name))
       (specialise_Maybe ,name)
              
       ;; actual type
       (struct (<> ,name class_t)
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
       
       ;; constructors
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
                                           (var ,name this . #'(malloc (sizeof (<> ,name class_t))))
                                           (set (cof this)
                                             (cast (<> ,name class_t) '{
                                                   ,(make-data-type-name ct-name)
                                                   ,(INTERN (FORMAT NIL "$__h_data$~A" ct-name))
                                                   '{ ,@(MAPCAR #'CADR params) }
                                                   }))
                                           (return this))
                                  (fn ,ct-name ,@(MAPCAR #'CADR params)
                                      (,(make-data-ctor-name ct-name) ,@(MAPCAR #'CADR params))))
                               `(func ,ct-name ,params
                                      (out ,name)
                                      (var ,name this . #'(malloc (sizeof ,name)))
                                      (set (cof this)
                                        (cast (<> ,name class_t) '{
                                              ,(make-data-type-name ct-name)
                                              ,(INTERN (FORMAT NIL "$__h_data$~A" ct-name))
                                              '{ ,@(MAPCAR #'CADR params) }
                                              }))
                                      (return this))))))
                 ctors))))

;; pattern matching
;; data type and arguments expansion
;; => for additional condition
;; needs default case as default return value
;; all cases after default case will be ignored
(DEFUN match-case-details (match-id data case)
  (LET* ((parts (partition-data case '^))
         (result (REDUCE #'(LAMBDA (x y)
                             (APPEND
                              (REVERSE (CDR (REVERSE x)))
                              (LIST (INTERN (FORMAT NIL "~A_~A" (CAR (LAST x)) (CAR y))))
                              (CDR y)))
                   parts))) ;; to mix names separated with ^
    (SETQ case result)
                             
    (LET* ((has-alias (AND (LISTP case) (EQUAL (CAR case) '=)))
           (data-name (IF has-alias (CADR case) (IF (LISTP data) (GENSYM "__h_data") data)))
           (case (IF has-alias (CDDR case) case))
           (symb (MACROEXPAND (CAR case)))
           (tail (CDR case))
           (defs ())
           (args ())
           (conds ())
           (=>found NIL)
           (is-ptr NIL))

      (WHEN (AND (ATOM symb) (EQUAL symb '*))
        (SETQ is-ptr T)
        (SETQ case (CDR case))
        (SETQ symb (MACROEXPAND (CAR case)))
        (SETQ tail (CDR case)))
      
      (WHEN (OR has-alias (NOT (EQL data data-name)))
        (PUSH `(const auto ,data-name . ,(IF (LISTP data) `(FUNCTION ,data) data)) defs))
      
      (COND ((AND (LISTP symb) (EQUAL (CAR symb) '\,)) ; tuple
             (DOTIMES (i (1- (LENGTH symb))) 
               (LET ((arg (MACROEXPAND (NTH (1+ i) symb))))
                 (UNLESS (EQUAL arg '_)
                   (LET ((arg-name (make-match-arg-name match-id i))
                         (mem-name (LIST '$ data-name (make-data-member-name i))))
                     (IF (ATOM arg)
                         (PROGN
                           (PUSH `(const auto ,arg . (FUNCTION ,mem-name)) defs))
                         ;; (PUSH (LIST arg arg-name) args))
                         (LET ((match-id (GENSYM "match")))
                           (PUSH `(const auto ,arg-name . (FUNCTION ,mem-name)) defs)
                           (MULTIPLE-VALUE-BIND (in-data-name in-symb in-tail in-defs in-args in-conds) ; inner case
                               (match-case-details match-id arg-name (APPEND arg (LIST NIL)))
                             (SETQ defs (APPEND in-defs defs))
                             (SETQ args (APPEND in-args args))
                             (WHEN in-conds
                               (SETQ conds (IF conds `(and ,conds ,in-conds) in-conds))))))))))
             (IF (EQUAL (CAR tail) '=>)
                 (PROGN
                   (SETQ =>found T)
                   (SETQ conds (IF conds `(and ,conds ,(NTH 1 tail)) (NTH 1 tail))))
                 (SETQ conds (IF conds conds 'true))))

            ((AND (LISTP symb) (EQUAL (CAR symb) '\:)) ; list
             (DOTIMES (i (1- (LENGTH symb))) 
               (LET ((arg (MACROEXPAND (NTH (1+ i) symb))))
                 (UNLESS (EQUAL arg '_)
                   (LET ((arg-name (make-match-arg-name match-id i))
                         (mem-name (LIST '-> data-name (make-data-member-name i))))
                     (IF (ATOM arg)
                         (PROGN
                           (PUSH `(const auto ,arg . (FUNCTION ,mem-name)) defs))
                         ;; (PUSH (LIST arg arg-name) args))
                         (LET ((match-id (GENSYM "match")))
                           (PUSH `(const auto ,arg-name . (FUNCTION ,mem-name)) defs)
                           (MULTIPLE-VALUE-BIND (in-data-name in-symb in-tail in-defs in-args in-conds) ; inner case
                               (match-case-details match-id arg-name (APPEND arg (LIST NIL)))
                             (FORMAT T "EEE3---- ~A ~A~% ~A~% ~A~% ~A~% ~A~%"
                                     in-data-name in-symb in-tail in-defs in-args in-conds)
                             (SETQ defs (APPEND in-defs defs))
                             (SETQ args (APPEND in-args args))
                             (WHEN in-conds
                               (SETQ conds (IF conds `(and ,conds ,in-conds) in-conds))))))))))
             (IF (EQUAL (CAR tail) '=>)
                 (PROGN
                   (SETQ =>found T)
                   (SETQ conds (IF conds `(and ,conds ,(NTH 1 tail)) (NTH 1 tail))))
                 (SETQ conds (IF conds conds 'true))))

            (T (DOTIMES (i (1- (LENGTH tail))) ; data type
                 (LET ((arg (MACROEXPAND (NTH (1+ i) case))))
                   (UNLESS =>found
                     (IF (EQUAL arg '=>)
                         (PROGN
                           (SETQ =>found T)
                           (SETQ conds (IF conds `(and ,conds ,(NTH (+ i 2) case)) (NTH (+ i 2) case))))
                         (UNLESS (EQUAL arg '_)
                           (LET ((arg-name (make-match-arg-name match-id i))
                                 (mem-name (LIST '$
                                                 (LIST (IF is-ptr '-> '$) data-name '__h_data)
                                                 symb
                                                 (make-data-member-name i))))
                             (IF (ATOM arg)
                                 (PROGN
                                   (PUSH `(const auto ,arg . (FUNCTION ,mem-name)) defs))
                                 ;; (PUSH (LIST arg arg-name) args))
                                 (LET ((match-id (GENSYM "match")))
                                   (PUSH `(const auto ,arg-name . (FUNCTION ,mem-name)) defs)
                                   (MULTIPLE-VALUE-BIND (in-data-name in-symb in-tail in-defs in-args in-conds) ; inner case
                                       (match-case-details match-id arg-name (APPEND arg (LIST NIL)))
                                     (SETQ defs (APPEND in-defs defs))
                                     (SETQ args (APPEND in-args args))
                                     (WHEN in-conds
                                       (SETQ conds (IF conds `(and ,conds ,in-conds) in-conds))))))
                             ))))))))
      
      (WHEN (OR (AND =>found (LISTP symb) (/= (LENGTH case) 4))
              (AND =>found (ATOM symb) (< (LENGTH case) 4))
              (AND (NULL =>found) (LISTP symb) (/= (LENGTH case) 2))
              (AND (NULL =>found) (ATOM symb) (< (LENGTH case) 2)))
        (ERROR (FORMAT NIL "match case wrong definition: ~A" case)))

      (UNLESS (EQUAL symb 'default)
        (WHEN (ATOM symb)
          (SETQ conds (IF (AND conds (EQUAL conds 'true))
                          `(== (,(IF is-ptr '-> '$) ,data-name __h_ctor) ,(make-data-type-name symb))
                          (IF conds
                              `(and (== (,(IF is-ptr '-> '$) ,data-name __h_ctor) ,(make-data-type-name symb)) ,conds)
                              `(== (,(IF is-ptr '-> '$) ,data-name __h_ctor) ,(make-data-type-name symb)))))))

      (VALUES data-name symb tail defs args conds))))

(DEFMACRO match* (data cases is-io)
  (IF (NULL cases)
      `($$$)
      (LET* ((match-id (GENSYM "match"))
             (case (CAR cases)))
        (MULTIPLE-VALUE-BIND (data-name symb tail defs args conds)
            (match-case-details match-id data case)
          ;; (FORMAT T "EEE0------ ~A ~A~% ~A~% ~A~% ~A~% ~A~%" data-name symb tail defs args conds)

          `(,(IF is-io 'let 'letn) ,(REVERSE defs)
             (where ,(REVERSE args)
               ,(IF conds
                    (APPEND
                     `(,(IF is-io 'if '?) ,conds ,(CAR (LAST case)))
                     (IF (CDR cases)
                         `((match* ,data-name ,(CDR cases) ,is-io))
                         '()))
                    (CAR (LAST case)))))))))

;; match with required default value or void
(DEFMACRO match (data &REST cases)
  `(match* ,data ,cases NIL))

;; match with optional default case
(DEFMACRO io (data &REST cases)
  `(match* ,data ,cases T))

;; List must be defined by this generic
(generic specialise_List (type a)
         (guard (<> _H Maybe a)
           (specialise_Maybe a))
         
         (class type ((<> Cons a) (a head) ((<> Maybe type) tail)))

         (func (<> new type) ((const a * buf))
               (out (<> Maybe type))
               (if (null buf)
                   (return ((<> Nothing type)))
                   (let ((a item . #'(cof buf)))
                     (if (== item #\Null)
                         (return ((<> Nothing type)))
                         (return ($> (<> Just type) $ (<> Cons a) item $ (<> new type) (++ buf)))))))
         
         (func (<> drop type) (((<> Maybe type) list))
               (io list
                 (Just ^ type (= ls * Cons ^ a _ tail)
                       (progn
                         ((<> drop type) tail)
                         (free ls)))))
         
         (func (<> free type) (((<> Maybe type) * list)) ; specified for letin
               ((<> drop type) (cof list)))
         
         (func (<> show type) (((<> Maybe type) list))
               (io list
                 (Just ^ type (* Cons ^ a head tail)
                       (progn
                         (putchar head)
                         ((<> show type) tail)))))

         (func (<> nth type) (((<> Maybe type) list) (int index))
               (out (<> Maybe a))
               (return (match list
                         (Just ^ type (* Cons ^ a head tail)
                               (? (== index 0)
                                 ((<> Just a) head)
                                 ((<> nth type) tail (-- index))))
                         (default ((<> Nothing a))))))

         (func (<> len type) (((<> Maybe type) list))
               (out int)
               (return (match list
                         (Just ^ type (* Cons ^ a head tail)
                               (+ 1 ((<> len type) tail)))
                         (default 0))))
         )

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

;; CURRY UNCURRY the Legend
;; (: head tail) for list
;; (, item0 item1) for tuple
