(import "./core.lisp")
(import "./tuple.lisp")
(import "./data.lisp")
(import "./bool.lisp")
(import "./maybe.lisp")
(import "./either.lisp")
(import "./class.lisp")
(import "./match.lisp")
(import "./rc.lisp")
(import "./box.lisp")
(import "./list.lisp")
(import "./boxed-list.lisp")
(import "./string.lisp")
(import "./range.lisp")
(import "./monoid.lisp")
(import "./functor.lisp")
(import "./applicative.lisp")
(import "./monad.lisp")
(import "../draft/collection/vector.lisp")
(import "./haskell.lisp")

(DEFMACRO init-macro ()
  `($$$ (fn identity (-input) -input)

     (fn showAsString -show -obj
         (letn ((char * buffer . #'(cast (char *) (calloc 1024 (sizeof char))))
                (defer () (fclose file))
                (CFile file . #'(fmemopen buffer 1024 "w+")))
           (-show file -obj)
           buffer))

     (import-List   List^Bool Bool new^List^Bool)
     (import-List   List^int  int  new^List^int)
     (import-List   List^char char new^List^char)

     (import-Vector Str       char T   new^Str)
     (import-Vector String    Char NIL new^String)
     
     (import-Range  Range^int int)

     (import-List List^List^int  List^int  new^List^List^int)
     (import-List List^List^char List^char new^List^List^char)
     ;; (import-List List^String    String    new^List^String)

     (import-Monoid (<> All     Bool) Bool)
     (import-Monoid (<> Any     Bool) Bool)
     (import-Monoid (<> Sum     int)  int)
     (import-Monoid (<> Product int)  int)
     
     (import-Monoid (<> List   Bool) (<> List Bool))
     (import-Monoid (<> List   int)  (<> List int))
     (import-Monoid (<> List   char) (<> List char))
     ;; (import-Monoid (<> String char) (<> List char))

     (import-Functor-List List^int^int   int  int)
     (import-Functor-List List^int^char  int  char)
     (import-Functor-List List^int^Bool  int  Bool)
     (import-Functor-List List^char^char char char)
     (import-Functor-List List^char^int  char int)
     (import-Functor-List List^char^Bool char Bool)
     
     )
  ) ; init-macro
