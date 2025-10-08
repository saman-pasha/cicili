
;; Data Constructor
;; data Mood = Blah | Woot
;; (data TestT NoArg (WithArg (type x) (type y)))
;; for value type and copy on assignment types
;; suggestion: no member pointer and no self member reference
(DEFMACRO decl-data (name ctor &REST ctors)
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
                           `($$$ (decl) (func ,ct-name () (out ,name)))
                           (IF (> (LENGTH params) 1)
                               `($$$ (decl) (func ,(make-data-h-ctor-name ct-name) ,params (out ,name))
                                     (fn ,ct-name ,@(MAPCAR #'CADR params)
                                         (,(make-data-h-ctor-name ct-name) ,@(MAPCAR #'CADR params))))
                               `($$$ (decl) (func ,ct-name ,params (out ,name)))))))
                 ctors))))

(DEFMACRO define-data (name ctor &REST ctors)
  (LET* ((name (MACROEXPAND name))
         (ctors (MAPCAR #'(LAMBDA (ct)
                            (LET ((ct (MACROEXPAND ct)))
                              (IF (SYMBOLP ct) (LIST ct) ct)))
                        (PUSH ctor ctors))))
    
    `($$$ ;; constructors
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
                                        (return (cast ,name '{
                                                      ,(make-data-h-type-name (IF (= 1 (LENGTH ctors)) '_ ct-name))
                                                      ,(INTERN (FORMAT NIL "$__h_data$~A"
                                                                       (IF (= 1 (LENGTH ctors)) '_ ct-name)))
                                                      '{ ,@(MAPCAR #'CADR params) }
                                                      })))
                                 `(func ,ct-name ,params
                                        (out ,name)
                                        (return (cast ,name '{
                                                      ,(make-data-h-type-name (IF (= 1 (LENGTH ctors)) '_ ct-name))
                                                      ,(INTERN (FORMAT NIL "$__h_data$~A"
                                                                       (IF (= 1 (LENGTH ctors)) '_ ct-name)))
                                                      '{ ,@(MAPCAR #'CADR params) }
                                                      })))))))
                   ctors))))

(DEFMACRO import-data (name ctor &REST ctors)
  (LET* ((name (MACROEXPAND name))
         (ctors (MAPCAR #'(LAMBDA (ct)
                            (LET ((ct (MACROEXPAND ct)))
                              (IF (SYMBOLP ct) (LIST ct) ct)))
                        (PUSH ctor ctors))))
    
    `($$$ ;; constructors
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
