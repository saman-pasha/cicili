
(header "../haskell.h" (:std #t)
        
        (enum DefaultCtor
          (__h___t))

        ;; data Bool = False True
        (decl-data Bool False True)

        ;; data Ordering = LT EQ GT
        (decl-data Ordering LT EQ GT)

        (decl-List   int)
        (decl-String char)
        (decl-Range  int)
        
        ) ; haskell.h

(source "haskell.c" (:std #t :compile "-c haskell.c -o ../haskell.o" :link #f)
        (include "../haskell.h")
        
        (define-data Bool False True)

        (define-data Ordering LT EQ GT)
        
        (define-List   int "%d")
        (define-String char "%c")
        (define-Range  int "%d")

        ) ; haskell.c
