
(header "../haskell.h" (:std #t)
        
        (enum DefaultCtor
          (__h___t))

        ;; data Bool = False True
        (decl-data Bool False True)

        ;; data Ordering = LT EQ GT
        (decl-data Ordering LT EQ GT)

        (decl-List   List^int int)
        (decl-String List^char char)
        (decl-Range  Range^int int)

        (decl-List List^List^int List^int)
        (decl-List List^List^char List^char)
        (decl-List List^String String)

        (decl-folds int)
        
        (decl-Monoid (<> Sum int) int 0 +)
        (decl-Monoid (<> Product int) int 1 *)

        (decl-folds (<> List int))
        (decl-folds (<> List char))

        (decl-Monoid (<> Concat List int)
          (<> List int)
          ((<> Empty int))
          (<> append List int))
        (decl-Monoid (<> Concat List char)
          (<> List char)
          ((<> Empty char))
          (<> append List char))
        (decl-Monoid (<> Concat String char)
          (<> List char)
          ((<> Empty char))
          (<> append String))

        ) ; haskell.h

(source "haskell.c" (:std #t :compile "-c haskell.c -o ../haskell.o" :link #f)
        (include "../haskell.h")
        
        (define-data Bool False True)

        (define-data Ordering LT EQ GT)
        
        (define-List   List^int int "%d")
        (define-String List^char char "%c")
        (define-Range  Range^int int "%d")

        (define-List List^List^int List^int "%p")
        (define-List List^List^char List^char "%p")
        (define-List List^String String "%p")

        (define-folds int)
        
        (define-Monoid (<> Sum int) int 0 +)
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

        ) ; haskell.c
