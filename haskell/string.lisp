
(generic specialize-String-header (type a)

         (specialize-List-header type a)
         
         (decl) (func (<> new type Const) ((const a * buf)) (out (<> Maybe type)))
         (decl) (func (<> show type) (((<> Maybe type) list)))
         )

(generic specialize-String-source (type a fmt)

         (specialize-List-source type a)
         
         (func (<> new type Const) ((const a * buf))
               (out (<> Maybe type))
               (if (null buf)
                   (return ((<> Nothing type)))
                   (let ((a item . #'(cof buf)))
                     (if (== item #\Null)
                         (return ((<> Nothing type)))
                         (return ($> (<> Just type) ! (<> Cons a) item $
                                     ((<> new type Const) (++ buf))))))))
         
         (func (<> show type) (((<> Maybe type) list))
               (io list
                 (Just (* _ head tail)
                   (progn
                     (printf fmt head)
                     ((<> show type) tail)))))
         )

(generic specialize-String-import (ctor type a)

         (specialize-List-import ctor type a)
         
         (DEFMACRO ctor (buf &OPTIONAL len)
           (IF len
               `((<> new type Pure) ,buf ,len)
               (IF (AND (LISTP buf) (EQUAL (CAR buf) 'QUOTE))
                   `((<> new type Pure) (cast (const a []) ,buf) ,(LENGTH (CADR buf)))
                   (IF (STRINGP buf)
                       `((<> new type Const) ,buf)
                       (ERROR (FORMAT NIL "new^List^int len required for dynamic array input: ~A" buf))))))
         )
