
;; Data Constructor
;; data Mood = Blah | Woot
;; (data TestT NoArg (WithArg (type x) (type y)))
;; for pointer type and copy reference on assignment types
;; suggestion: some member pointer or self member reference
;; (match alias, data type name) designed for generic types
;; the data type name and each ctor can have an alias for ease of use in matches
(DEFMACRO decl-class (name ctor &REST ctors)
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
                               (CDDR ct))))
                        (CONS ctor ctors))))
    
    `($$$
         (guard (<> __H ,enum-name _)
           (enum ,enum-name
             (,(make-data-h-type-name (CAAR (CAR (REVERSE ctors)))) . 0)
             ,@(MAPCAR #'(LAMBDA (i ct) (CONS (make-data-h-type-name (CAAR ct)) (+ i 1)))
                       (range-h (LENGTH ctors)) (CDR (REVERSE ctors)))))

       (decl) (struct ,(make-class-h-base-name name))

       (typedef ,(make-class-h-base-name name) * ,name)

       (typedef func (<> free ,name t) ((,name * this_ptr)))  

       (struct ,(make-class-h-base-name name)
         (member (<> free ,name t) __h_free_class)
         (member char __h_ctor)
         (union 
             ,@(MAPCAR #'(LAMBDA (i ct)
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
                                                    (PROGN
                                                      (SETF (NTH 4 param) (make-data-h-member-name mem-counter))
                                                      `(member ,@(REMOVE NIL param)))))
                                            params real-params)
                                (declare ,ct-name)
                                ,(LIST 'declare (IF (= i (1- (LENGTH ctors)))
                                                    '_
                                                    (INTERN (FORMAT NIL "_~A" i)))))))
                       (range-h (LENGTH ctors)) ctors)
           (declare __h_data)))
       
       ,@(MAPCAR #'(LAMBDA (ct)
                     (LET ((ct-name (CADAR ct))
                           (params (CADR ct))
                           (real-params (CADDR ct)))
                       
                       (WHEN (EQUAL name ct-name) (ERROR (FORMAT NIL "data type and ctor having same name: ~A" name)))
                       
                       (IF (NULL params)
                           `($$$ (decl) (func ,ct-name () (out ,name)))
                           (IF (> (LENGTH params) 1)
                               `($$$ (decl) (func ,(make-data-h-ctor-name ct-name) ,real-params (out ,name))
                                     (fn ,ct-name ,@(MAPCAR #'(LAMBDA (param) (NTH 4 param)) params)
                                         (,(make-data-h-ctor-name ct-name)
                                           ,@(MAPCAR #'(LAMBDA (param) (NTH 4 param)) params))))
                               `($$$ (decl) (func ,ct-name ,real-params (out ,name)))))))
                 ctors)

       ;; destructor
       (decl) (func (<> free ,name) ((,name * this_ptr)))
       )))

(DEFMACRO define-class (name ctor &REST ctors)
  (SETQ name (MACROEXPAND name))
  (SETQ name (IF (SYMBOLP name)
                 (LIST name name)
                 (IF (= 2 (LENGTH name))
                     name
                     (ERROR (FORMAT NIL "only match alias and name allowed in data name: ~A" name)))))
  
  (LET* ((alias (MACROEXPAND (CAR name)))
         (name (MACROEXPAND (CADR name)))
         (free-def NIL)
         (ctors (REMOVE
                 NIL 
                 (MAPCAR #'(LAMBDA (i ct)
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
                                    (CDDR ct)))))
                         (range-h (1+ (LENGTH ctors))) (CONS ctor ctors)))))
    
    `($$$ ;; destructor, both variables this_ptr and this are available for class's free functions
         (func (<> free ,name) ((,name * this_ptr))
               (let ((auto this . #'(cof this_ptr)))
                 ,@(CDDR free-def)))
       
       ;; constructors
       ,@(MAPCAR #'(LAMBDA (i ct)
                     (LET ((ct-name (CADAR ct))
                           (params (CADR ct))
                           (real-params (CADDR ct)))

                       (WHEN (EQUAL name ct-name) (ERROR (FORMAT NIL "data type and ctor having same name: ~A" name)))
                       
                       (IF (NULL params)
                           `(func ,ct-name ()
                                  (out ,name)
                                  (let ((,name instance . #'(malloc (sizeof ,(make-class-h-base-name name)))))
                                    (set (cof instance)
                                      (cast ,(make-class-h-base-name name) '{
                                            (<> free ,name)
                                            ,(make-data-h-type-name (IF (= i (1- (LENGTH ctors))) '_ (CAAR ct)))
                                            }))
                                    (return instance)))
                           (IF (> (LENGTH params) 1)
                               `(func ,(make-data-h-ctor-name ct-name)
                                  ,real-params
                                  (out ,name)
                                  (let ((,name instance . #'(malloc (sizeof ,(make-class-h-base-name name)))))
                                    (set (cof instance)
                                      (cast ,(make-class-h-base-name name) '{
                                            (<> free ,name)
                                            ,(make-data-h-type-name (IF (= i (1- (LENGTH ctors))) '_ (CAAR ct)))
                                            ,(INTERN (FORMAT NIL "$__h_data$~A"
                                                             (IF (= i (1- (LENGTH ctors))) '_ (CAAR ct))))
                                            '{ ,@(MAPCAR #'(LAMBDA (param) (NTH 4 param)) params) }
                                            }))
                                    (return instance)))
                               `(func ,ct-name ,real-params
                                      (out ,name)
                                      (let ((,name instance . #'(malloc (sizeof ,(make-class-h-base-name name)))))
                                        (set (cof instance)
                                          (cast ,(make-class-h-base-name name) '{
                                                (<> free ,name)
                                                ,(make-data-h-type-name (IF (= i (1- (LENGTH ctors))) '_ (CAAR ct)))
                                                ,(INTERN (FORMAT NIL "$__h_data$~A"
                                                                 (IF (= i (1- (LENGTH ctors))) '_ (CAAR ct))))
                                                '{ ,@(MAPCAR #'(LAMBDA (param) (NTH 4 param)) params) }
                                                })
                                          (return instance))))))))
                 (range-h (LENGTH ctors)) ctors))))

(DEFMACRO import-class (name ctor &REST ctors)
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

                             (WHEN (OR (EQUAL (CAR ct) 'free) (EQUAL (CADR ct) 'free))
                               (ERROR (FORMAT NIL "use 'free' destructor only inside definition: ~A" ct)))

                             (LIST
                              ct
                              (MAPCAR #'(LAMBDA (param)
                                          (MULTIPLE-VALUE-BIND (const type modifier const-ptr variable array-def)
                                              (CICILI:SPECIFY-TYPE< param)
                                            (LIST const type modifier const-ptr variable array-def)))
                                      (CDDR ct)))))
                       (CONS ctor ctors))))
    
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
