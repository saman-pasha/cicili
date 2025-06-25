
(source "vector_test.c"
  (:std #t :compile #t :link "-L{$CWD}../Vector -lcicili_intvector.o vector_test.lo -o vector_test")

        (include "./../Vector/cicili_intvector.h")

        (main
            (let
                ((@IntVector * s1 . #'(-> IntVector newEmpty 3))
                 (@IntVector * s2 . #'(-> IntVector newFromArray (cast (int []) '{ 1 2 3 }) 3))
                 (IntVector * appended . #'(-> s2 appendNew s2))
                 (IntVector * clone . #'(-> s2 clone))
                 (bool contains2 . #'(-> s2 contains 2))
                 (size_t idx . #'(-> s2 indexOf 2))
                 (size_t lastIdx . #'(-> appended lastIndexOf 2))
                 (size_t count2 . #'(-> appended count 2)))

              ;; Push values
              (-> s1 push 10)
              (-> s1 push 20)
              (-> s1 push 30)

              ;; Pop
              (let ((auto val . #'(-> s1 pop)))
                (when ($ val outp)
                  (format #t "Popped: %d\n" ($ val out))))

              ;; Insert and Remove
              (-> s1 insert 1 99)
              (-> s1 removeAt 0)

              ;; Output the contents
              (format #t "s1 contents:\n")
              (for ((size_t i . 0)) (< i ($ s1 len)) ((++ i))
                   (format #t "%d " (nth i ($ s1 arr))))
              (format #t "\n")

              (format #t "contains 2: %s\n" (? contains2 "true" "false"))
              (format #t "indexOf 2: %zu\n" idx)
              (format #t "lastIndexOf 2: %zu\n" lastIdx)
              (format #t "count of 2: %zu\n" count2)

              ;; Free everything
              ;; (-> s1 free) ; no need to free @ told cicili to use free method at end of scope instead
              ;; (-> s2 free)
              (-> clone free)
              (-> appended free)

              (return 0))))
