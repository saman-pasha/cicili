
(header "../haskell.h" (:std #t)

        (decl) (func __h_free_data_router ((void *** instance)))
        (decl) (func __h_free_class_router ((void *** instance)))
        
        (enum __h_DefaultCtor
          (__h___t))

        (decl-Bool)
        
        ;; data Ordering = LT EQ GT
        (decl-data Ordering LT EQ GT)

        (decl-List   List^Bool Bool)
        (decl-List   List^int  int)
        (decl-String List^char char)

        (decl-Range  Range^int int)

        (decl-List List^List^Bool List^Bool)
        (decl-List List^List^int  List^int)
        (decl-List List^List^char List^char)
        (decl-List List^String    String)

        (decl-Rc List^Bool)
        (decl-Rc List^int)
        (decl-Rc List^char)
        (decl-Rc String)
        
        (decl-Monoid (<> All     Bool) Bool)
        (decl-Monoid (<> Any     Bool) Bool)
        (decl-Monoid (<> Sum     int)  int)
        (decl-Monoid (<> Product int)  int)

        (decl-Monoid (<> List   Bool) (<> List Bool))
        (decl-Monoid (<> List   int)  (<> List int))
        (decl-Monoid (<> List   char) (<> List char))
        (decl-Monoid (<> String char) (<> List char))

        (decl-Functor-List List^int^int   int  int)
        (decl-Functor-List List^int^Bool  int  Bool)
        (decl-Functor-List List^char^char char char)
        (decl-Functor-List List^char^Bool char Bool)
        (decl-Functor-List String^char    char char)
        (decl-Functor-List String^Bool    char Bool)

        ) ; haskell.h

(source "haskell.c" (:std #t :compile "-c haskell.c -o ../haskell.o" :link #f)
        (include "../haskell.h")
        
        (func __h_free_data_router ((void *** instance))
              ((cast (func _ ((void * this))) (cof (cof instance))) instance))
        
        (func __h_free_class_router ((void *** instance))
              ((cast (func _ ((void * this))) (cof (cof (cast (void ***) (cof instance))))) instance))

        (impl-Bool)
        
        (impl-data Ordering LT EQ GT)
        
        (impl-List   List^Bool Bool (\\ v (printf "%s" (match v (True "True") (default "False")))))
        (impl-List   List^int  int  (\\ v (printf "%d" v)))
        (impl-String List^char char (\\ v (printf "%c" v)))
        
        (impl-Range  Range^int int  (\\ v (printf "%d" v)))

        (impl-List List^List^Bool List^Bool (\\ v ((<> show List^Bool) v)))
        (impl-List List^List^int  List^int  (\\ v ((<> show List^int)  v)))
        (impl-List List^List^char List^char (\\ v ((<> show List^char) v)))
        (impl-List List^String    String    (\\ v ((<> show List^char) v)))

        (impl-Rc List^Bool)
        (impl-Rc List^int)
        (impl-Rc List^char)
        (impl-Rc String)
        
        (impl-Monoid (<> All     Bool) Bool (True)  and_Bool)
        (impl-Monoid (<> Any     Bool) Bool (False) or_Bool)
        (impl-Monoid (<> Sum     int)  int  0       +)
        (impl-Monoid (<> Product int)  int  1       *)
        
        (impl-Monoid (<> List Bool)
          (<> List Bool)
          ((<> Empty Bool))
          (<> append List Bool))
        (impl-Monoid (<> List int)
          (<> List int)
          ((<> Empty int))
          (<> append List int))
        (impl-Monoid (<> List char)
          (<> List char)
          ((<> Empty char))
          (<> append List char))
        (impl-Monoid (<> String char)
          (<> List char)
          ((<> Empty char))
          (<> append List char))

        (impl-Functor-List List^int^int   int  int)
        (impl-Functor-List List^int^Bool  int  Bool)
        (impl-Functor-List List^char^char char char)
        (impl-Functor-List List^char^Bool char Bool)
        (impl-Functor-List String^char    char char)
        (impl-Functor-List String^Bool    char Bool)

        ) ; haskell.c
