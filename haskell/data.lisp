
;; Data Constructor
;; data Mood = Blah | Woot
;; (data TestT NoArg (WithArg (type x) (type y)))
;; for value type and copy on assignment types
;; suggestion: no member pointer and no self member reference
;; (match alias, data type name) designed for generic types
;; the data type name and each ctor can have an alias for ease of use in matches
;; shared alias for generic data types lets them to cast to each other
(DEFMACRO decl-data (name ctor &REST ctors)
  (SETQ name (MACROEXPAND name))
  (SETQ name (IF (SYMBOLP name)
                 (LIST name name)
                 (IF (= 2 (LENGTH name))
                     name
                     (ERROR (FORMAT NIL "only match alias and name allowed in data name: ~A" name)))))
  
  (LET* ((alias (MACROEXPAND (CAR name)))
         (name (MACROEXPAND (CADR name)))
         (enum-name (INTERN (FORMAT NIL "__h_~A_ctor_t" alias)))
         (fns '())
         (ctors (REMOVE
                 NIL
                 (MAPCAR #'(LAMBDA (ct)
                             (IF (AND (LISTP ct) (EQUAL (CAR ct) 'func))
                                 (PROGN (PUSH ct fns) NIL)
                                 (LET ((ct (MACROEXPAND ct)))
                                   (SETQ ct (IF (SYMBOLP ct)
                                                (LIST ct ct)
                                                (IF (EQUAL (CAR ct) '=)
                                                    (SETQ ct (CDR ct))
                                                    (SETQ ct (CONS (CAR ct) ct)))))
                                   
                                   (WHEN (OR (EQUAL (CAR ct) 'free) (EQUAL (CADR ct) 'free))
                                     (ERROR (FORMAT NIL "use 'free' destructor only inside definition: ~A" ct)))
                                   
                                   (LIST
                                    ct
                                    (MAPCAR #'(LAMBDA (param)
                                                (MULTIPLE-VALUE-BIND (const type modifier const-ptr variable array-def)
                                                    (CICILI:SPECIFY-TYPE< param)
                                                  (LIST const type modifier const-ptr variable array-def)))
                                            (CDDR ct))
                                    ;; real param defs
                                    (CDDR ct)))))
                         (CONS ctor ctors)))))
    
    `(guard (<> _ ,name _H_DECL__)

       (guard (<> __H ,enum-name _)
         (enum ,enum-name
           (,(make-data-h-type-name (CAAR (CAR (REVERSE ctors)))) . 0)
           ,@(MAPCAR #'(LAMBDA (i ct) (CONS (make-data-h-type-name (CAAR ct)) (+ i 1)))
                     (range-h (LENGTH ctors)) (CDR (REVERSE ctors)))))

       (decl) (struct ,name)

       (typedef func (<> free ,name t) ((,name * this)))  

       (struct (<> ,name _H_Table)
         (member (<> free ,name t) freeData)
         ,@(MAPCAR #'(LAMBDA (f)
                       (WHEN (EQUAL (CAR f) 'func)
                         (CONS 'member f)))
                   fns))
       
       (struct ,name
         (member const (<> ,name _H_Table) * __h_table)
         (member char __h_ctor)
         (union ,@(MAPCAR #'(LAMBDA (i ct)
                              (LET ((ct-name (CAAR ct))
                                    (params (CADR ct))
                                    (real-params (CADDR ct))
                                    (mem-counter -1))
                                `(struct
                                     ,@(MAPCAR #'(LAMBDA (param rp)
                                                   (SETQ mem-counter (1+ mem-counter))
                                                   (IF (EQUAL (NTH 1 param) 'func)
                                                       (LET ((cp-rp (COPY-LIST rp)))
                                                         (SETF (NTH 1 cp-rp) (make-data-h-member-name mem-counter))
                                                         `(member ,@cp-rp))
                                                       (LET ((cp-param (COPY-LIST param)))
                                                         (SETF (NTH 4 cp-param) (make-data-h-member-name mem-counter))
                                                         `(member ,@(REMOVE NIL cp-param)))))
                                               params real-params)
                                   (declare ,ct-name)
                                   ,(LIST 'declare (IF (= i (1- (LENGTH ctors))) ; default ctor case
                                                       '_
                                                       (INTERN (FORMAT NIL "_~A" i)))))))
                          (range-h (LENGTH ctors)) ctors)
           (declare __h_data)))
       
       ,@(MAPCAR #'(LAMBDA (i ct)
                     (LET* ((is-default (IF (= i (1- (LENGTH ctors))) T NIL))
                            (ct-name (CADAR ct))
                            (def-ct-name (IF is-default `(<> Default ,name) ct-name))
                            (params (CADR ct))
                            (real-params (CADDR ct)))
                       
                       (WHEN (EQUAL name ct-name) (ERROR (FORMAT NIL "data type and ctor having same name: ~A" name)))

                       (IF is-default
                           (IF (NULL params)
                               `($$$ (decl)   (func ,ct-name     () (out ,name))
                                     (inline) (func ,def-ct-name () (out ,name) (return (,ct-name))))
                               `($$$ (decl)   (func ,ct-name ,real-params (out ,name))
                                     (inline) (func ,def-ct-name ,real-params (out ,name)
                                                    (return (,ct-name ,@(MAPCAR #'(LAMBDA (param) (NTH 4 param)) params))))))

                           (IF (NULL params)
                               `($$$ (decl) (func ,ct-name () (out ,name)))
                               `($$$ (decl) (func ,ct-name ,real-params (out ,name)))))))
                 (range-h (LENGTH ctors)) ctors)

       ;; funcs decl
       ,@(MAPCAR #'(LAMBDA (f)
                     (LET ((fP (COPY-LIST f)))
                       (SETF (CADR fP) `(<> ,(CADR f) ,name))
                       `($$$ (decl) ,fP)))
                 fns)

       ;; Table initializer
       (decl) (func (<> get ,name _H_Table) () (out const (<> ,name _H_Table) * const))

       ;; destructor
       (decl) (func (<> free ,name) ((,name * this)))
       )))

(DEFMACRO impl-data (name ctor &REST ctors)
  (SETQ name (MACROEXPAND name))
  (SETQ name (IF (SYMBOLP name)
                 (LIST name name)
                 (IF (= 2 (LENGTH name))
                     name
                     (ERROR (FORMAT NIL "only match alias and name allowed in data name: ~A" name)))))
  
  (LET* ((alias (MACROEXPAND (CAR name)))
         (name (MACROEXPAND (CADR name)))
         (free-def NIL)
         (fns '())
         (ctors (REMOVE
                 NIL
                 (MAPCAR #'(LAMBDA (i ct)
                             (IF (AND (LISTP ct) (EQUAL (CAR ct) 'func))
                                 (PROGN (PUSH ct fns) NIL)
                                 (LET ((ct (MACROEXPAND ct)))
                                   (SETQ ct (IF (SYMBOLP ct)
                                                (LIST ct ct)
                                                (IF (EQUAL (CAR ct) '=)
                                                    (SETQ ct (CDR ct))
                                                    (SETQ ct (CONS (CAR ct) ct)))))
                                   
                                   (WHEN (OR (EQUAL (CAR ct) 'free) (EQUAL (CADR ct) 'free))
                                     (IF free-def
                                         (ERROR (FORMAT NIL "'free' is defined twice: ~A" ct))
                                         (SETQ free-def ct)))

                                   (WHEN (AND free-def (< i (1- (LENGTH ctors))))
                                     (ERROR (FORMAT NIL "'free' should be last case: ~A" ct)))
                                   
                                   (IF free-def
                                       NIL
                                       (LIST
                                        ct
                                        (MAPCAR #'(LAMBDA (param)
                                                    (MULTIPLE-VALUE-BIND (const type modifier const-ptr variable array-def)
                                                        (CICILI:SPECIFY-TYPE< param)
                                                      (LIST const type modifier const-ptr variable array-def)))
                                                (CDDR ct))
                                        ;; real param defs
                                        (CDDR ct))))))
                         (range-h (1+ (LENGTH ctors))) (CONS ctor ctors)))))

    `(guard (<> _ ,name _H_IMPL__)

       ;; funcs decl
       ,@(MAPCAR #'(LAMBDA (f)
                     (LET ((fP (COPY-LIST f)))
                       (SETF (CADR fP) `(<> ,(CADR f) ,name))
                       fP))
                 fns)
       
       ;; destructor
       (func (<> free ,name) ((,name * this))
             ,@(CDDR free-def))
       
       ;; Table initializer
       (func (<> get ,name _H_Table) ()
             (out const (<> ,name _H_Table) * const)
             (static)
             (var const (<> ,name _H_Table) table . '{
                  (<> free ,name)
                  ,@(MAPCAR #'(LAMBDA (f)
                                (MACROEXPAND `(<> ,(CADR f) ,name)))
                            fns)
                  })
             (return (aof table)))

       ;; constructors
       ,@(MAPCAR #'(LAMBDA (i ct)
                     (LET ((ct-name (CADAR ct))
                           (params (CADR ct))
                           (real-params (CADDR ct)))

                       (WHEN (EQUAL name ct-name) (ERROR (FORMAT NIL "data type and ctor having same name: ~A" name)))

                       (IF (NULL params)
                           `(func ,ct-name ()
                                  (out ,name)
                                  (return (cast ,name '{
                                                ((<> get ,name _H_Table))
                                                ,(make-data-h-type-name
                                                     (IF (= i (1- (LENGTH ctors))) '_ (CAAR ct)))
                                                })))
                           `(func ,ct-name ,real-params
                                  (out ,name)
                                  (return (cast ,name '{
                                                ((<> get ,name _H_Table))
                                                ,(make-data-h-type-name (IF (= i (1- (LENGTH ctors))) '_ (CAAR ct)))
                                                ,(INTERN (FORMAT NIL "$__h_data$~A"
                                                                 (IF (= i (1- (LENGTH ctors))) '_ (CAAR ct))))
                                                '{ ,@(MAPCAR #'(LAMBDA (param) (NTH 4 param)) params) }
                                                }))))))
                 (range-h (LENGTH ctors)) ctors)))) ; impl-data

(DEFMACRO import-data (name ctor &REST ctors)
  
  ) ; import-data
