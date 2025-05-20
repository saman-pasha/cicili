(Slice "" IntSlice int 4 () () ())

(source "./tests/slice_test.c" (:std #t :compile #t :link "-L{$CWD} cicili_slice.lo slice_test.lo -o slice_test")

  (include "cicili_slice.h")

  (main
    (let
      ((IntSlice * s1 . #'(-> IntSlice newEmpty 3))
       (IntSlice * s2 . #'(-> IntSlice newFromArray (int []) {1,2,3} 3))
       (IntSlice * appended . #'(-> s2 appendNew s2))
       (IntSlice * clone . #'(-> s2 clone))
       (bool contains2 . #'(-> s2 contains 2))
       (size_t idx . #'(-> s2 indexOf 2))
       (size_t lastIdx . #'(-> appended lastIndexOf 2))
       (size_t count2 . #'(-> appended count 2)))

      ;; Push values
      (-> s1 push 10)
      (-> s1 push 20)
      (-> s1 push 30)

      ;; Pop
      (let ((int val . #'(-> s1 pop)))
        (format #t "Popped: %d\n" val))

      ;; Insert and Remove
      (-> s1 insert 1 99)
      (-> s1 removeAt 0)

      ;; Output the contents
      (format #t "s1 contents:\n")
      (for ((size_t i 0) (< i ($ s1 len)) (++ i))
        (format #t "%d ", ($ s1 arr [i])))
      (format #t "\n")

      (format #t "contains 2: %s\n" (? contains2 "true" "false"))
      (format #t "indexOf 2: %zu\n" idx)
      (format #t "lastIndexOf 2: %zu\n" lastIdx)
      (format #t "count of 2: %zu\n" count2)

      ;; Free everything
      (-> s1 free)
      (-> s2 free)
      (-> clone free)
      (-> appended free)

      (return 0))))
