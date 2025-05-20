(Slice "" ByteVector uchar 256 () () ())

(source "./tests/bytevector_test.c" (:std #t :compile #t :link "-L{$CWD} cicili_slice.lo bytevector_test.lo -o bytevector_test")

  (include "cicili_slice.h")

  (main
    (let
      ((ByteVector * bv . #'(-> ByteVector newEmpty 5)))

      ;; Append bytes
      (-> bv push #x41) ; 'A'
      (-> bv push #x42) ; 'B'
      (-> bv push #x43) ; 'C'
      (-> bv push #x41) ; 'A'
      (-> bv push #x44) ; 'D'
      (-> bv push #x41) ; 'A'

      ;; Insert at index 2
      (-> bv insert 2 #x58) ; 'X'

      ;; Remove index 3
      (-> bv removeAt 3)

      ;; Check contents
      (format #t "ByteVector contents as chars:\n")
      (for ((size_t i 0) (< i ($ bv len)) (++ i))
        (format #t "%c " ($ bv arr [i])))
      (format #t "\n")

      ;; Query operations
      (bool hasA . #'(-> bv contains #x41))
      (size_t firstA . #'(-> bv indexOf #x41))
      (size_t lastA . #'(-> bv lastIndexOf #x41))
      (size_t countA . #'(-> bv count #x41))

      (format #t "Contains 'A': %s\n" (? hasA "true" "false"))
      (format #t "First index of 'A': %zu\n" firstA)
      (format #t "Last index of 'A': %zu\n" lastA)
      (format #t "Count of 'A': %zu\n" countA)

      ;; Pop one byte
      (uchar last . #'(-> bv pop))
      (format #t "Popped: %c\n" last)

      ;; Final state
      (format #t "Final ByteVector contents:\n")
      (for ((size_t i 0) (< i ($ bv len)) (++ i))
        (format #t "%c " ($ bv arr [i])))
      (format #t "\n")

      ;; Cleanup
      (-> bv free)
      (return 0))))
