
(source "string_test.c"
  (:std #t :compile #t :link "-L{$CWD} -L{$CWD}../Slice -lcicili_string.lo string_test.lo -o string_test")

        (include "../Slice/cicili_string.h")

        (func printString ((String * str)) ; accepts both (char *) and (String *)
              (format #t "the str: %s\n" (-> str deref)))

        (func printChars ((const char * cstr))
              (format #t "cstr: %s\n" cstr))

        (main
            (let
                ((@String * a . #'(-> String new "hello"))
                 (@String * b . #'(-> String new "world"))
                 (String * formatted . #'(-> String newFormat "value: %d, %s" 42 "test"))
                 (String * helloWorld . #'(-> a concat b))
                 (String * upper . #'(-> a toUpper))
                 (String * lower . #'(-> upper toLower))
                 (String * trimmed . #'(-> (-> String new "   padded   ") trim))
                 (String * replaced . #'(-> (-> String new "a-b-c-d") replace #\- #\_))
                 (String * substr . #'(-> helloWorld substring 3 4))
                 (String * prefix . #'(-> String new "hel"))
                 (String * suffix . #'(-> String new "rld"))
                 (bool eq1 . #'(-> a equals a))
                 (bool eq2 . #'(-> a equals b))
                 (size_t index . #'(-> a find #\l))
                 (bool sw . #'(-> a startsWith prefix))
                 (bool ew . #'(-> helloWorld endsWith suffix))
                 
                 (@String * trait1 . #'(-> char toString "toString trait 1 call")) ; char toString trait
                 (@String * trait2 . "toString trait 2 call") ; char toString trait
                 (@String * trait3)

                 (char * fromString1 . trait1)
                 (char * fromString2))

              (set trait3 "toString trait 3 call") ; char toString trait
              (set trait2 (cast (char []) '{ #\H #\I }))
              (set fromString2 trait2)
              
              (format #t "a: %s\n" ($ a arr))
              (format #t "b: %s\n" ($ b arr))
              (format #t "helloWorld: %s\n" ($ helloWorld arr))
              (format #t "formatted: %s\n" ($ formatted arr))
              (format #t "upper: %s\n" ($ upper arr))
              (format #t "lower: %s\n" ($ lower arr))
              (format #t "trimmed: [%s]\n" ($ trimmed arr))
              (format #t "replaced: %s\n" ($ replaced arr))
              (format #t "substring(3,4): %s\n" ($ substr arr))
              (format #t "a equals a: %s\n" (? eq1 "true" "false"))
              (format #t "a equals b: %s\n" (? eq2 "true" "false"))
              (format #t "find 'l' in a: %zu\n" index)
              (format #t "a starts with 'hel': %s\n" (? sw "true" "false"))
              (format #t "helloWorld ends with 'rld': %s\n" (? ew "true" "false"))
              (format #t "%s\n" (-> trait1 deref))
              (format #t "%s\n" (-> trait2 deref))
              (format #t "%s\n" trait3)
              (format #t "%s\n" fromString1)
              (format #t "%s\n" fromString2)
              
              
              (printString trait1)
              (printString "Alice and Bob") ; char toString trait
              (printChars trait3)
              
              ;; (-> a free) ; no need to free @ told cicili to use free method at end of scope instead
              ;; (-> b free)
              (-> helloWorld free)
              (-> formatted free)
              (-> upper free)
              (-> lower free)
              (-> trimmed free)
              (-> replaced free)
              (-> substr free)
              (-> prefix free)
              (-> suffix free)
              ;; (-> trait1 free)
              ;; (-> trait2 free)
              
              (return 0))))
