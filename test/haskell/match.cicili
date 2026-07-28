
(source "match.c" (make :std #t :haskell #t :compile #t :link #t)

        (decl-data SomeType
          (Variant0 (void * p))
          (Variant1 (int x))
          (Variant2 (char c)))

        (impl-data SomeType
          (Variant0 (void * p))
          (Variant1 (int x))
          (Variant2 (char c)))

        (main
          (letin ((v1 (Variant1 12))
                  (v2 (Variant2 #\G)))
            (printf "lentgh: %d\n"
              (match v1
                (Variant0 v (format #t "Variant0: %p\n" v))
                (Variant1 x (format #t "Variant1: %d\n" x))
                (Variant2 c (format #t "Variant2: %c\n" x))
                (default 0)
                ))
            ))) ; match.c
