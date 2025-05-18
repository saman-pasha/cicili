(header "bytevector_test.h" ()
  (include "cicili_bytevector.h"))

(source "bytevector_test.c" (:std #t :compile #t :link "-o bytevector_test -L{$CWD} -lcicili_bytevector.o")
  (include <stdio.h> <string.h> "bytevector_test.h")

  (func main ()
    (let ((uchar data [6] . '{ 0x41, 0x42, 0x43, 0x44, 0x45, 0x00 }) ; "ABCDE"
          (ByteVector * vec1 . #'(-> ByteVector newFromArray data 5))
          (ByteVector * vec2 . #'(-> ByteVector newCopy vec1))
          (ByteVector * vec3 . #'(-> vec1 appendNew vec2))
          (uchar * raw1 . #'(-> vec3 cloneArray))))

      (printf "vec1: %.*s\n" ($ vec1 len) ($ vec1 arr)) ; ABCDE
      (printf "vec2 (copy): %.*s\n" ($ vec2 len) ($ vec2 arr)) ; ABCDE
      (printf "vec3 (appended): %.*s\n" ($ vec3 len) raw1) ; ABCDEABCDE

      ;; mutate vec2 to show vec1 is unaffected
      (set (nth 0 ($ vec2 arr)) 0x5A) ; 'Z'
      (printf "vec2 after mutation: %.*s\n" ($ vec2 len) ($ vec2 arr)) ; ZBCDE
      (printf "vec1 after vec2 mutation: %.*s\n" ($ vec1 len) ($ vec1 arr)) ; ABCDE

      ;; cleanup
      (free vec1)
      (free vec2)
      (free vec3)
      (free raw1))))
