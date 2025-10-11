(import "./core.lisp")
(import "./tuple.lisp")
(import "./data.lisp")
(import "./maybe.lisp")
(import "./class.lisp")
(import "./match.lisp")
(import "./list.lisp")
(import "./string.lisp")
(import "./range.lisp")
(import "./monoid.lisp")

(import "./haskell.lisp")

(DEFMACRO init-macro ()
  `($$$
     (import-List   new^List^int List^int int)
     (import-String new^String List^char char)
     (import-Range  Range^int int)))
