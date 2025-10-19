
(header "../haskell.h" (:std #t)

        (decl) (func __h_free_data_router ((void ** instance)))
        (decl) (func __h_free_class_router ((void *** instance)))
        
        (enum __h_DefaultCtor
          (__h___t))

        ;; data Bool = False True
        (decl-data Bool False True)

        ;; data Ordering = LT EQ GT
        (decl-data Ordering LT EQ GT)

        (decl-Maybe Bool)
        (decl-Maybe int)
        (decl-Maybe char)

        (decl-List   List^Bool Bool)
        (decl-List   List^int  int)
        (decl-String List^char char)

        (decl-Range  Range^int int)

        (decl-Maybe List^Bool)
        (decl-Maybe List^int)
        (decl-Maybe List^char)
        (decl-Maybe String)

        (decl-List List^List^int  List^int)
        (decl-List List^List^char List^char)
        (decl-List List^String    String)

        (decl-Rc List^Bool)
        (decl-Rc List^int)
        (decl-Rc List^char)
        (decl-Rc String)
        
        (decl-folds int)
        
        (decl-Monoid (<> Sum     int) int)
        (decl-Monoid (<> Product int) int)

        (decl-folds (<> List int))
        (decl-folds (<> List char))

        (decl-Monoid (<> Concat List    int) (<> List int))
        (decl-Monoid (<> Concat List   char) (<> List char))
        (decl-Monoid (<> Concat String char) (<> List char))

        (decl-Functor-List int  int)
        (decl-Functor-List int  Bool)
        (decl-Functor-List char char)
        (decl-Functor-List char Bool)

        ) ; haskell.h

(source "haskell.c" (:std #t :compile "-c haskell.c -o ../haskell.o" :link #f)
        (include "../haskell.h")
        
        (func __h_free_data_router ((void ** instance))
              ((cast (func _ ((void * this))) (cof instance)) instance))
        
        (func __h_free_class_router ((void *** instance))
              ((cast (func _ ((void * this))) (cof (cof instance))) instance))
        
        (define-data Bool False True)

        (define-data Ordering LT EQ GT)
        
        (define-Maybe Bool)
        (define-Maybe int)
        (define-Maybe char)

        (define-List   List^Bool Bool (\\ v (printf "%s" (match v (True "True") (default "False")))))
        (define-List   List^int int   (\\ v (printf "%d" v)))
        (define-String List^char char (\\ v (printf "%c" v)))
        
        (define-Range  Range^int int  (\\ v (printf "%d" v)))

        (define-Maybe List^Bool)
        (define-Maybe List^int)
        (define-Maybe List^char)
        (define-Maybe String)

        (define-List List^List^int  List^int  (\\ v ((<> show List^int)  v)))
        (define-List List^List^char List^char (\\ v ((<> show List^char) v)))
        (define-List List^String    String    (\\ v ((<> show List^char) v)))

        (define-Rc List^Bool)
        (define-Rc List^int)
        (define-Rc List^char)
        (define-Rc String)
        
        (define-folds int)
        
        (define-Monoid (<> Sum int)     int 0 +)
        (define-Monoid (<> Product int) int 1 *)
        
        (define-folds (<> List int))
        (define-folds (<> List char))

        (define-Monoid (<> Concat List int)
          (<> List int)
          ((<> Empty int))
          (<> append List int))
        (define-Monoid (<> Concat List char)
          (<> List char)
          ((<> Empty char))
          (<> append List char))
        (define-Monoid (<> Concat String char)
          (<> List char)
          ((<> Empty char))
          (<> append String))

        (define-Functor-List int  int)
        (define-Functor-List int  Bool)
        (define-Functor-List char char)
        (define-Functor-List char Bool)

        ) ; haskell.c
