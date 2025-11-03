
(generic decl-String (type a)

         (decl-List type a)
         (typedef type String)
         
         (decl) (func (<> new String Const) ((const a * buf)) (out type))
         (decl) (func (<> show String) ((type list)))

         (inline) (func (<> free String) ((type * list))
                        ((<> free type) list))

         ) ; decl-String

(generic impl-String (type a fmt)

         (impl-List type a fmt)

         (func (<> new String Const) ((const a * buf))
               (out type)
               (if (null buf)
                   (return ((<> Empty a)))
                   (let ((a item . #'(cof buf)))
                     (if (== item #\Null)
                         (return ((<> Empty a)))
                         (return ((<> Cons a) item ((<> new String Const) (++ buf))))))))

         (func (<> show String) ((type list))
               (io list
                 (* Cons head tail
                    (progn
                      (fmt head)
                      ((<> show String) tail)))))

         ) ; impl-String

(generic import-String (ctor type a)

         (import-List ctor type a)

         (DEFMACRO ctor (buf &OPTIONAL len)
           (IF len
               `((<> new type Pure) ,buf ,len)
               (IF (AND (LISTP buf) (EQUAL (CAR buf) 'QUOTE))
                   `((<> new type Pure) (cast (const a []) ,buf) ,(LENGTH (CADR buf)))
                   (IF (STRINGP buf)
                       `((<> new String Const) ,buf)
                       (ERROR (FORMAT NIL "new^String len required for dynamic array input: ~A" buf))))))

         ) ; import-String
