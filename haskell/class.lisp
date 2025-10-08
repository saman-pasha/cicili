
;; Data Constructor
;; data Mood = Blah | Woot
;; (data TestT NoArg (WithArg (type x) (type y)))
;; for pointer type and copy reference on assignment types
;; suggestion: some member pointer or self member reference
;; auto Maybe type
(DEFMACRO decl-class (name ctor &REST rest-ctors)
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
       (decl-Maybe ,name)
       
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
                           `($$$ (decl) (func ,ct-name () (out ,name)))
                           (IF (> (LENGTH params) 1)
                               `($$$ (decl) (func ,(make-data-h-ctor-name ct-name) ,params (out ,name))
                                     (fn ,ct-name ,@(MAPCAR #'CADR params)
                                         (,(make-data-h-ctor-name ct-name) ,@(MAPCAR #'CADR params))))
                               `($$$ (decl) (func ,ct-name ,params (out ,name)))))))
                 ctors))))

(DEFMACRO define-class (name ctor &REST rest-ctors)
  (LET* ((name (MACROEXPAND name))
         (ctors (MAPCAR #'(LAMBDA (ct)
                            (LET ((ct (MACROEXPAND ct)))
                              (IF (SYMBOLP ct) (LIST ct) ct)))
                        (APPEND (LIST ctor) rest-ctors))))
    
    `($$$ (define-Maybe ,name)
       
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
                               `(func ,(make-data-h-ctor-name ct-name) ,params
                                           (out ,name)
                                           (var ,name this . #'(malloc (sizeof (<> ,name class_t))))
                                           (set (cof this)
                                             (cast (<> ,name class_t) '{
                                                   ,(make-data-h-type-name (IF (= 1 (LENGTH ctors)) '_ ct-name))
                                                   ,(INTERN (FORMAT NIL "$__h_data$~A" (IF (= 1 (LENGTH ctors)) '_ ct-name)))
                                                   '{ ,@(MAPCAR #'CADR params) }
                                                   }))
                                           (return this))
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

(DEFMACRO import-class (name ctor &REST rest-ctors)
  (LET* ((name (MACROEXPAND name))
         (ctors (MAPCAR #'(LAMBDA (ct)
                            (LET ((ct (MACROEXPAND ct)))
                              (IF (SYMBOLP ct) (LIST ct) ct)))
                        (APPEND (LIST ctor) rest-ctors))))
    
    `($$$
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
                       (UNLESS (NULL params)
                         (WHEN (> (LENGTH params) 1)
                           `(fn ,ct-name ,@(MAPCAR #'CADR params)
                                (,(make-data-h-ctor-name ct-name) ,@(MAPCAR #'CADR params)))))))
                 ctors))))
