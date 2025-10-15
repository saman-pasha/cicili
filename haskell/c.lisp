
(header "../haskell.h" (:std #t)

        (@define (code "__h_ISPOINTER(x) ((((uintptr_t)(x)) & ~~0xffff) != 0)"))
        
        ;; FreeRouter for all 'data' and 'class'es
        (struct __h_FreeRouter
          (member func free ((void * this))))
        
        (decl) (func __h_free_data_router ((void ** instance)))
        (decl) (func __h_free_class_router ((void *** instance)))
        
        (enum __h_DefaultCtor
          (__h___t))

        ;; data Bool = False True
        (decl-data Bool False True)

        ;; data Ordering = LT EQ GT
        (decl-data Ordering LT EQ GT)

        (decl-List   List^Bool Bool)
        (decl-List   List^int  int)
        (decl-String List^char char)

        (decl-Range  Range^int int)

        (decl-List List^List^int  List^int)
        (decl-List List^List^char List^char)
        (decl-List List^String    String)

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
              ((cast (func _ ((void * this))) (cof (cof instance))) (cof (cof instance))))
        
        (define-data Bool False True)

        (define-data Ordering LT EQ GT)
        
        (define-List   List^Bool Bool (\\ v (printf "%s" (match v (True "True") (default "False")))))
        (define-List   List^int int   (\\ v (printf "%d" v)))
        (define-String List^char char (\\ v (printf "%c" v)))
        
        (define-Range  Range^int int  (\\ v (printf "%d" v)))

        (define-List List^List^int  List^int  (\\ v ((<> show List^int)  v)))
        (define-List List^List^char List^char (\\ v ((<> show List^char) v)))
        (define-List List^String    String    (\\ v ((<> show List^char) v)))

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
