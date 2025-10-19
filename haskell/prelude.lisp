(import "./core.lisp")
(import "./tuple.lisp")
(import "./data.lisp")
(import "./maybe.lisp")
(import "./class.lisp")
(import "./match.lisp")
(import "./list.lisp")
(import "./string.lisp")
(import "./range.lisp")
(import "./rc.lisp")
(import "./monoid.lisp")
(import "./functor.lisp")

(import "./haskell.lisp")

(DEFMACRO init-macro ()
  `($$$
     (import-List   new^List^Bool List^Bool Bool)
     (import-List   new^List^int  List^int  int)
     (import-String new^String    List^char char)
     
     (import-Range  Range^int int)

     (import-List new^List^List^int  List^List^int  List^int)
     (import-List new^List^List^char List^List^char List^char)
     (import-List new^List^String    List^String    String)

     ))
