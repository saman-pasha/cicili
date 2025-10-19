
(generic decl-String (type a)

         (decl-List type a)
         (typedef type String)
         
         (inline) (func (<> next String) ((type list)) (out type)
                        (return ((<> next type) list)))
         
         (inline) (func (<> nth String) ((int index) (type list)) (out (<> Maybe a))
                        (return ((<> nth type) index list)))
         
         (inline) (func (<> drop String) ((int index) (type list)) (out type)
                        (return ((<> drop type) index list)))
         
         (inline) (func (<> len String) ((type list)) (out int)
                        (return ((<> len type) list)))
         
         (inline) (func (<> has len String) ((type list) (int desired)) (out int)
                        (return ((<> has len type) list desired)))
         
         (inline) (func (<> take String) ((int len) (type list)) (out type)
                        (return ((<> take type) len list)))
         
         (inline) (func (<> append String) ((type llist) (type rlist)) (out type)
                        (return ((<> append type) llist rlist)))

         (fn (<> !! String) index list
             ((<> nth type) index list))

         (fn (<> push String) head tail
             ($> (<> Cons a) head tail))

         (fn (<> \: String) head tail
             ($> (<> Cons a) head tail))

         (fn (<> head String) list
             ((<> nth type) 0 list))

         (fn (<> tail String) list
             ((<> drop type) 0 list))

         (fn (<> ++ String) llist rlist
             ((<> append type) llist rlist))

         (decl) (func (<> new String Const) ((const a * buf)) (out type))
         (decl) (func (<> show String) ((type list)))

         (inline) (func (<> free String) ((type * list))
                        ((<> free type) list))

         ) ; decl-String

(generic define-String (type a fmt)

         (define-List type a fmt)

         (func (<> new String Const) ((const a * buf))
               (out type)
               (if (null buf)
                   (return ((<> Empty a)))
                   (let ((a item . #'(cof buf)))
                     (if (== item #\Null)
                         (return ((<> Empty a)))
                         (return ($> (<> Cons a) item $ ((<> new String Const) (++ buf))))))))

         (func (<> show String) ((type list))
               (io list
                 (* Cons head tail
                    (progn
                      (fmt head)
                      ((<> show String) tail)))))

         ) ; define-String

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

         (fn (<> !! String) index list
             ((<> nth type) index list))

         (fn (<> push String) head tail
             ($> (<> Cons a) head tail))

         (fn (<> \: String) head tail
             ($> (<> Cons a) head tail))

         (fn (<> head String) list
             ((<> nth type) 0 list))

         (fn (<> tail String) list
             ((<> drop type) 0 list))

         (fn (<> ++ String) llist rlist
             ((<> append type) llist rlist))

         ) ; import-String
