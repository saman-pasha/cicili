
(header "../haskell.h" (:std #t)

        (decl) (func __h_free_data_router ((void ** instance)))
        (decl) (func __h_free_class_router ((void *** instance)))
        
        (enum __h_DefaultCtor
          (__h___t))

        ;; data Bool = False True
        (decl-data Bool False True)
        (decl) (func Bool_and ((Bool lhs) (Bool rhs)) (out Bool))
        (decl) (func Bool_or  ((Bool lhs) (Bool rhs)) (out Bool))
        (decl) (func show_Bool ((Bool value)))
        
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

        (decl-List List^List^Bool List^Bool)
        (decl-List List^List^int  List^int)
        (decl-List List^List^char List^char)
        (decl-List List^String    String)

        (decl-Rc List^Bool)
        (decl-Rc List^int)
        (decl-Rc List^char)
        (decl-Rc String)
        
        (decl-folds Bool)
        (decl-folds int)
        (decl-folds char)
        
        (decl-Monoid (<> All     Bool) Bool)
        (decl-Monoid (<> Any     Bool) Bool)
        (decl-Monoid (<> Sum     int)  int)
        (decl-Monoid (<> Product int)  int)

        (decl-folds (<> List Bool))
        (decl-folds (<> List int))
        (decl-folds (<> List char))

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
        
        (func __h_free_data_router ((void ** instance))
              ((cast (func _ ((void * this))) (cof instance)) instance))
        
        (func __h_free_class_router ((void *** instance))
              ((cast (func _ ((void * this))) (cof (cof instance))) instance))
        
        (define-data Bool False True)
        
        (func Bool_and ((Bool lhs) (Bool rhs))
              (out Bool)
              (return (match lhs
                        (False   (False))
                        (default (match rhs
                                   (False   (False))
                                   (default (True)))))))
        
        (func Bool_or  ((Bool lhs) (Bool rhs))
              (out Bool)
              (return (match lhs
                        (True    (True))
                        (default (match rhs
                                   (True    (True))
                                   (default (False)))))))

        (func show_Bool ((Bool value))
              (io value
                (False   (printf "%s" "False"))
                (default (printf "%s" "True"))))

        (define-data Ordering LT EQ GT)
        
        (define-Maybe Bool)
        (define-Maybe int)
        (define-Maybe char)

        (define-List   List^Bool Bool (\\ v (printf "%s" (match v (True "True") (default "False")))))
        (define-List   List^int  int  (\\ v (printf "%d" v)))
        (define-String List^char char (\\ v (printf "%c" v)))
        
        (define-Range  Range^int int  (\\ v (printf "%d" v)))

        (define-Maybe List^Bool)
        (define-Maybe List^int)
        (define-Maybe List^char)
        (define-Maybe String)

        (define-List List^List^Bool List^Bool (\\ v ((<> show List^Bool) v)))
        (define-List List^List^int  List^int  (\\ v ((<> show List^int)  v)))
        (define-List List^List^char List^char (\\ v ((<> show List^char) v)))
        (define-List List^String    String    (\\ v ((<> show List^char) v)))

        (define-Rc List^Bool)
        (define-Rc List^int)
        (define-Rc List^char)
        (define-Rc String)
        
        (define-folds Bool)
        (define-folds int)
        (define-folds char)
        
        (define-Monoid (<> All     Bool) Bool (True)  Bool_and)
        (define-Monoid (<> Any     Bool) Bool (False) Bool_or)
        (define-Monoid (<> Sum     int)  int  0       +)
        (define-Monoid (<> Product int)  int  1       *)
        
        (define-folds (<> List Bool))
        (define-folds (<> List int))
        (define-folds (<> List char))

        (define-Monoid (<> List Bool)
          (<> List Bool)
          ((<> Empty Bool))
          (<> append List Bool))
        (define-Monoid (<> List int)
          (<> List int)
          ((<> Empty int))
          (<> append List int))
        (define-Monoid (<> List char)
          (<> List char)
          ((<> Empty char))
          (<> append List char))
        (define-Monoid (<> String char)
          (<> List char)
          ((<> Empty char))
          (<> append String))

        (define-Functor-List List^int^int   int  int)
        (define-Functor-List List^int^Bool  int  Bool)
        (define-Functor-List List^char^char char char)
        (define-Functor-List List^char^Bool char Bool)
        (define-Functor-List String^char    char char)
        (define-Functor-List String^Bool    char Bool)

        ;; (define-Applicative Maybe 
        ) ; haskell.c
