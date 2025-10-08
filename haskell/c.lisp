
(header "../haskell.h" (:std #t)
        
        ;; (enum DefaultCtor
        ;;   (_))
        
        ;; (enum Bool
        ;;   (False)
        ;;   (True))
        
        (enum DefaultCtor
          (__h___t))
        
        (enum Bool
          (False)
          (True))

        ;; data Maybe = Nothing | Just a
        (enum Maybe
          (__h_Nothing_t)
          (__h_Just_t))

        (enum Ordering
          (LT)
          (EQ)
          (GT))
        
        ;; data Maybe = Nothing | Just a
        ;; (enum Maybe
        ;;   (Nothing)
        ;;   (Just))

        (specialize-String-header String char)
        (specialize-List-header List^int int)
        (specialize-Range-header Range^int int)
        
        ) ; haskell.h

(source "haskell.c" (:std #t :compile "-c haskell.c -o ../haskell.o" :link #f)
        (include "../haskell.h")
        
        (specialize-String-source String char "%c")
        (specialize-List-source List^int int)
        (specialize-List-show List^int int "%d")
        (specialize-Range-source Range^int int "%d")
        )
