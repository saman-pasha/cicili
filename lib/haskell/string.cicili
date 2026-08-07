
(generic decl-String
  (type a)

  (decl-List type a)

  (decl) (func (<> new type Const) ((const a * buf)) (out type))

  ) ; decl-String

(generic impl-String
  (type a fmt sep)

  (impl-List type a fmt sep)

  (func (<> new type Const) ((const a * buf))
        (out type)
        (if (null buf)
            (return ((<> Nil a)))
            (let ((a item . #'(cof buf)))
              (if (== item #\Null)
                  (return ((<> Nil a)))
                  (return ((<> Cons a) item ((<> new type Const) (++ buf))))))))

  ) ; impl-String

(generic import-String
  (type a ctor)

  (import-List type a ctor)

  (DEFMACRO ctor (buf &OPTIONAL len)
    (LET ((len len))
      (IF len
          `((<> pure type) ,buf ,len)
          (IF (AND (LISTP buf) (EQUAL (CAR buf) 'QUOTE))
              `((<> pure type) (cast (const a []) ,buf) ,(LENGTH (CADR buf)))
              (IF (STRINGP buf)
                  `((<> new type Const) ,buf)
                  (ERROR (FORMAT NIL "new^String len required for dynamic array input: ~A" buf)))))))

  ) ; import-String
