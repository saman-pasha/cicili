
(generic decl-String (a)

         (decl-List a)

         (generic decl-String-with-type (org-type type)
                  
                  (decl) (func (<> new type Const) ((const a * buf)) (out org-type *))
                  (decl) (func (<> show type) ((org-type * list)))

                  (inline) (func (<> free type) ((org-type ** list))
                             ((<> free org-type) list))
                  
                  ) ; decl-String-with-type

         (decl-String-with-type (<> List a) String)
         
         ) ; decl-String

(generic define-String (a fmt)

         (define-List a fmt)

         (generic define-String-with-type (org-type type)
                  
                  (func (<> new type Const) ((const a * buf))
                        (out org-type *)
                        (if (null buf)
                            (return ((<> Empty a)))
                            (let ((a item . #'(cof buf)))
                              (if (== item #\Null)
                                  (return ((<> Empty a)))
                                  (return ($> (<> Cons a) item $ ((<> new type Const) (++ buf))))))))
                  
                  (func (<> show type) ((org-type * list))
                        (io list
                          (* Cons head tail
                            (progn
                              (printf fmt head)
                              ((<> show type) tail)))))

                  ) ; define-String-with-type

         (define-String-with-type (<> List a) String)
         
         ) ; define-String

(generic import-String (ctor a)

         (import-List ctor a)

         (generic import-String-with-type (org-type type)
                  
                  (DEFMACRO ctor (buf &OPTIONAL len)
                    (IF len
                        `((<> new org-type Pure) ,buf ,len)
                        (IF (AND (LISTP buf) (EQUAL (CAR buf) 'QUOTE))
                            `((<> new org-type Pure) (cast (const a []) ,buf) ,(LENGTH (CADR buf)))
                            (IF (STRINGP buf)
                                `((<> new type Const) ,buf)
                                (ERROR (FORMAT NIL "new^String len required for dynamic array input: ~A" buf))))))

                  ) ; import-String-with-type

         (import-String-with-type (<> List a) String)
         
         ) ; import-String
