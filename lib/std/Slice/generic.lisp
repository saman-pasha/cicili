(import "slice.lisp" NIL NIL)

(IN-PACKAGE :CL-USER)

(DEFMACRO GenericSlice (path name element step include-body members-body header-body source-body)
  (SliceScope
      `(Slice ,path ,name ,element ,step
              ( ; includes
               ,@include-body)
              ( ; members
               ,@members-body)
              ( ; header
               ,@header-body)
              ( ; source
               (generic __GENERIC_SLICE_G_ (TY)
                        
                        (method (,name . (<> borrow TY)) ((size_t index)
                                                          (func borrower ((size_t index) (const TY * value))))
                                (borrower index (cast (const TY *) (aof (nth index ($ this arr))))))

                        (method (,name . (<> iterBorrow TY)) ((func borrower ((size_t index) (const TY * value))))
                                (for-each-const index item ($ this arr) ($ this len)
                                                (borrower index (cast (const TY *) item))))
                        
                        (method (,name . (<> borrowMut TY)) ((size_t index)
                                                             (func borrower ((size_t index) (TY * value))))
                                (borrower index (cast (TY *) (aof (nth index ($ this arr))))))

                        (method (,name . (<> iterBorrowMut TY)) ((func borrower ((size_t index) (TY * value))))
                                (for-each index item ($ this arr) ($ this len)
                                          (borrower index (cast (TY *) item))))

                        )
               ,@source-body))))
