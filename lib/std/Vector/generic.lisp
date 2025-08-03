(import "./vector.lisp" :std NIL)

(DEFMACRO GenericVector (path name element step include-body members-body header-body source-body)
  (std.VectorScope
      `(Vector ,path ,name ,element ,step
               ( ; includes
                ,@include-body)
               ( ; members
                ,@members-body)
               ( ; header
                ,@header-body)
               ( ; source
                ,@source-body))))

(generic __GENERIC_VECTOR_G_ (N TY)
         
         (method (N . (<> borrow TY)) ((size_t index)
                                       (func borrower ((size_t index) (const TY * value))))
                 (borrower index (cast (const TY *) (aof (nth index ($ this arr))))))

         (method (N . (<> iterBorrow TY)) ((func borrower ((size_t index) (const TY * value))))
                 (for-each-const index item ($ this arr) ($ this len)
                                 (borrower index (cast (const TY *) item))))
         
         (method (N . (<> borrowMut TY)) ((size_t index)
                                          (func borrower ((size_t index) (TY * value))))
                 (borrower index (cast (TY *) (aof (nth index ($ this arr))))))

         (method (N . (<> iterBorrowMut TY)) ((func borrower ((size_t index) (TY * value))))
                 (for-each index item ($ this arr) ($ this len)
                           (borrower index (cast (TY *) item))))

         )
