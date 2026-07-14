(import "./array.lisp")
(import "./vector.lisp")
(import "./cell.lisp")
(import "./rc.lisp")


(DEFMACRO init-macro ()
  `($$$
     ;; imports-...
    (decl) (func printf ((const char * fmt) ($$$ args)) (out size_t))
     )
  ) ; init-macro
