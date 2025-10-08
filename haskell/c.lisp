
(header "../haskell.h" (:std #t)
        
        (enum DefaultCtor
          (__h___t))
        
        (enum Bool
          (False)
          (True))

        ;; data Maybe = Nothing | Just a
        ;; refer maybe.lisp
        (enum Maybe
          (__h_Nothing_t)
          (__h_Just_t))

        (enum Ordering
          (LT)
          (EQ)
          (GT))

        (decl-String String char)
        (decl-List   List^int int)
        (decl-Range  Range^int int)
        
        ) ; haskell.h

(source "haskell.c" (:std #t :compile "-c haskell.c -o ../haskell.o" :link #f)
        (include "../haskell.h")
        
        (define-String    String char "%c")
        (define-List      List^int int)
        (define-List-show List^int int "%d")
        (define-Range     Range^int int "%d")
        )
