
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

        (decl-folds int)
        
        (decl-Monoid (<> Sum int) int 0 +)
        (decl-Monoid (<> Product int) int 1 *)

        ) ; haskell.h

(source "haskell.c" (:std #t :compile "-c haskell.c -o ../haskell.o" :link #f)
        (include "../haskell.h")
        
        (define-data Bool False True)

        (define-data Ordering LT EQ GT)
        
        (define-List   List^int int "%d")
        (define-String List^char char "%c")
        (define-Range  Range^int int "%d")

        (define-folds int)
        
        (define-Monoid (<> Sum int) int 0 +)
        (define-Monoid (<> Product int) int 1 *)

        ) ; haskell.c
