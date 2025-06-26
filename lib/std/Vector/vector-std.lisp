(import "string.lisp" () ())
(import "generic.lisp" () ())

(Vector "" ByteVector uchar 256 () () () ())
(String "" String     char  256 () () () ())
(Vector "" IntVector  int   256 () () () ())
(GenericVector "" BorrowableVector (void *) 16 NIL NIL NIL NIL)
