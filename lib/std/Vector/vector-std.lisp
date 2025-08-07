(import "./string.lisp"  :std ())
(import "./generic.lisp" :std ())

(std.Vector        "" ByteVector uchar 256 () () () ())
(std.String        "" CharString char  256 () () () ())
(std.Vector        "" IntVector  int   256 () () () ())
(std.GenericVector "" BorrowableVector (void *) 16 NIL NIL NIL NIL)
