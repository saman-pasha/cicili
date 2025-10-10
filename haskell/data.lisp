
;; Data Constructor
;; data Mood = Blah | Woot
;; (data TestT NoArg (WithArg (type x) (type y)))
;; for value type and copy on assignment types
;; suggestion: no member pointer and no self member reference
;; (match alias, data type name) designed for generic types
;; the data type name and each ctor can have an alias for ease of use in matches
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
         (ctors (MAPCAR #'(LAMBDA (ct)
                            (LET ((ct (MACROEXPAND ct)))
                              (SETQ ct (IF (SYMBOLP ct)
                                           (LIST ct ct)
                                           (IF (EQUAL (CAR ct) '=)
                                               (SETQ ct (CDR ct))
                                               (SETQ ct (CONS (CAR ct) ct)))))
                              (LIST
                               ct
                               (MAPCAR #'(LAMBDA (param)
                                           (MULTIPLE-VALUE-BIND (const type modifier const-ptr variable array-def)
                                               (CICILI:SPECIFY-TYPE< param)
                                             (LIST const type modifier const-ptr variable array-def)))
                                       (CDDR ct)))))
                        (PUSH ctor ctors))))

    `($$$
         (guard (<> __H ,enum-name _)
           (enum ,enum-name
             ,@(MAPCAR #'(LAMBDA (ct) (LIST (make-data-h-type-name (CAAR ct))))
                       (IF (> (LENGTH ctors) 1) ctors (LIST (LIST (LIST enum-name)))))))
       
       (struct ,name
         (member ,(IF (> (LENGTH ctors) 1) enum-name 'DefaultCtor) __h_ctor)
         (union 
             ,@(MAPCAR #'(LAMBDA (ct)
                           (LET ((ct-name (CAAR ct))
                                 (params (CADR ct))
                                 (mem-counter -1))
                             `(struct
                                  ,@(MAPCAR #'(LAMBDA (param)
                                                (SETQ mem-counter (1+ mem-counter))
                                                (SETF (NTH 4 param) (make-data-h-member-name mem-counter))
                                                `(member ,@(REMOVE NIL param))) params)
                                (declare ,(IF (= 1 (LENGTH ctors)) '_ ct-name)))))
                       ctors)
           (declare __h_data)))
       
       ,@(MAPCAR #'(LAMBDA (ct)
                     (LET ((ct-name (CADAR ct))
                           (params (CADR ct)))
                       
                       (WHEN (EQUAL name ct-name) (ERROR (FORMAT NIL "data type and ctor having same name: ~A" name)))
                       
                       (IF (NULL params)
                           `($$$ (decl) (func ,ct-name () (out ,name)))
                           (IF (> (LENGTH params) 1)
                               `($$$ (decl) (func ,(make-data-h-ctor-name ct-name) ,params (out ,name))
                                     (fn ,ct-name ,@(MAPCAR #'(LAMBDA (param) (NTH 4 param)) params)
                                         (,(make-data-h-ctor-name ct-name)
                                           ,@(MAPCAR #'(LAMBDA (param) (NTH 4 param)) params))))
                               `($$$ (decl) (func ,ct-name ,params (out ,name)))))))
                 ctors))))

(DEFMACRO define-data (name ctor &REST ctors)
  (SETQ name (MACROEXPAND name))
  (SETQ name (IF (SYMBOLP name)
                 (LIST name name)
                 (IF (= 2 (LENGTH name))
                     name
                     (ERROR (FORMAT NIL "only match alias and name allowed in data name: ~A" name)))))
  
  (LET ((alias (MACROEXPAND (CAR name)))
        (name (MACROEXPAND (CADR name)))
        (ctors (MAPCAR #'(LAMBDA (ct)
                           (LET ((ct (MACROEXPAND ct)))
                             (SETQ ct (IF (SYMBOLP ct)
                                          (LIST ct ct)
                                          (IF (EQUAL (CAR ct) '=)
                                              (SETQ ct (CDR ct))
                                              (SETQ ct (CONS (CAR ct) ct)))))
                             (LIST
                              ct
                              (MAPCAR #'(LAMBDA (param)
                                          (MULTIPLE-VALUE-BIND (const type modifier const-ptr variable array-def)
                                              (CICILI:SPECIFY-TYPE< param)
                                            (LIST const type modifier const-ptr variable array-def)))
                                      (CDDR ct)))))
                       (PUSH ctor ctors))))
    
    `($$$ ;; constructors
         ,@(MAPCAR #'(LAMBDA (ct)
                       (LET ((ct-name (CADAR ct))
                             (params (CADR ct)))

                         (WHEN (EQUAL name ct-name) (ERROR (FORMAT NIL "data type and ctor having same name: ~A" name)))
                         
                         (IF (NULL params)
                             `(func ,ct-name ()
                                    (out ,name)
                                    (return (cast ,name
                                              '{ ,(make-data-h-type-name (IF (= 1 (LENGTH ctors)) '_ (CAAR ct))) })))
                             (IF (> (LENGTH params) 1)
                                 `(func ,(make-data-h-ctor-name ct-name)
                                    ,(MAPCAR #'(LAMBDA (param) (REMOVE NIL param)) params)
                                    (out ,name)
                                    (return (cast ,name '{
                                                  ,(make-data-h-type-name (IF (= 1 (LENGTH ctors)) '_ (CAAR ct)))
                                                  ,(INTERN (FORMAT NIL "$__h_data$~A"
                                                                   (IF (= 1 (LENGTH ctors)) '_ (CAAR ct))))
                                                  '{ ,@(MAPCAR #'(LAMBDA (param) (NTH 4 param)) params) }
                                                  })))
                                 `(func ,ct-name ,(MAPCAR #'(LAMBDA (param) (REMOVE NIL param)) params)
                                        (out ,name)
                                        (return (cast ,name '{
                                                      ,(make-data-h-type-name (IF (= 1 (LENGTH ctors)) '_ (CAAR ct)))
                                                      ,(INTERN (FORMAT NIL "$__h_data$~A"
                                                                       (IF (= 1 (LENGTH ctors)) '_ (CAAR ct))))
                                                      '{ ,@(MAPCAR #'(LAMBDA (param) (NTH 4 param)) params) }
                                                      })))))))
                   ctors))))

(DEFMACRO import-data (name ctor &REST ctors)
  (SETQ name (MACROEXPAND name))
  (SETQ name (IF (SYMBOLP name)
                 (LIST name name)
                 (IF (= 2 (LENGTH name))
                     name
                     (ERROR (FORMAT NIL "only match alias and name allowed in data name: ~A" name)))))
  
  (LET ((alias (MACROEXPAND (CAR name)))
        (name (MACROEXPAND (CADR name)))
        (ctors (MAPCAR #'(LAMBDA (ct)
                           (LET ((ct (MACROEXPAND ct)))
                             (SETQ ct (IF (SYMBOLP ct)
                                          (LIST ct ct)
                                          (IF (EQUAL (CAR ct) '=)
                                              (SETQ ct (CDR ct))
                                              (SETQ ct (CONS (CAR ct) ct)))))
                             (LIST
                              ct
                              (MAPCAR #'(LAMBDA (param)
                                          (MULTIPLE-VALUE-BIND (const type modifier const-ptr variable array-def)
                                              (CICILI:SPECIFY-TYPE< param)
                                            (LIST const type modifier const-ptr variable array-def)))
                                      (CDDR ct)))))
                       (PUSH ctor ctors))))
    
    `($$$ ;; constructors
         ,@(MAPCAR #'(LAMBDA (ct)
                       (LET ((ct-name (CADAR ct))
                             (params (CADR ct)))

                         (WHEN (EQUAL name ct-name) (ERROR (FORMAT NIL "data type and ctor having same name: ~A" name)))
                         
                         (UNLESS (NULL params)
                           (WHEN (> (LENGTH params) 1)
                             `(fn ,ct-name ,@(MAPCAR #'(LAMBDA (param) (NTH 4 param)) params)
                                  (,(make-data-h-ctor-name ct-name)
                                    ,@(MAPCAR #'(LAMBDA (param) (NTH 4 param)) params)))))))
                   ctors))))
