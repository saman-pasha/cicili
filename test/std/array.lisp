
;;; test Cicili std array
(source "array.c"
  (make :std #t
        :compile ("-O3" "-ffast-math" "-c" "array.c")
        :link ("-larray.o" "-o" "arr_test"))

  (include <time.h>)
  (include <limits.h>)

  (decl-array array^int int)

  (func ms_now ()
        (out llong)
        (let (((struct timespec) ts))
          (timespec_get (aof ts) TIME_UTC)
          (return (+ (* (cast llong ts.tv_sec) 1000) (/ ts.tv_nsec 1000000))))
        (return 0)
        ) ; ms-now

  (var int N    . 1000000000) ; total operations
  (var int STEP . 1000)       ; elements per epoch

  (func bench_a_nth ()
        (out long)
        (letin ((v (new^array (cast (const int []) '{
                                    0  1  2  3  4  5  6  7  8  9
                                    10 11 12 13 14 15 16 17 18 19
                                    20 21 22 23 24 25 26 27 28 29
                                    30 31 32 33 34 35 36 37 38 39
                                    40 41 42 43 44 45 46 47 48 49 })))
                ) ; decls
          
          (let ((i64 sum . 0)
                (llong t0 . #'(ms_now)))
            
            ;; (let^array (arr len v)
            ;;   (cast void len)
            ;;   (for ((int i . 0)) (< i N) ((++ i))
            ;;        (+= sum (nth (% i 50) arr))))
            
            (for ((int i . 0)) (< i N) ((++ i))
                 ;; (+= sum ((<> nth array) (% i 50) v :unchecked T)))
                 (+= sum ((<> nth array) (% i 50) v :default 0)))
            
            (let ((llong elapsed . #'(- (ms_now) t0)))
              (printf "  (nth checksum: %lld)\n" sum)  ; after timer — forces liveness
              (return elapsed)))))
  
  (main
    (printf "sizeof %s: %zu\n" (symbol-name (<> array int)) (sizeof (<> array int)))
    
    (letin ((arr01 (new^array (cast (const int []) '{ 1 2 3 4 5 }))))

      (printf "arr01 len: %zu\n" (len^array arr01))

      (printf "print int array using Unsafe nth: ")
      (for ((size_t i . 0)) (< i (len^array arr01)) ((++ i))
           (printf "%d" (nth^array i arr01 :unchecked T)))
      (putchar #\Newline)

      (printf "print int array using Safe nth: ")
      (for ((size_t i . 0)) (< i 7) ((++ i))
           (printf "%d" (nth^array i arr01 :default 0)))
      (putchar #\Newline)

      ) ; let

    (printf "  nth (bounds-checked) %d times: %ld ms\n" N (bench_a_nth))

    )) ; array.c

;; sbcl --script cicili.lisp --syslog ./test/std/array.lisp
;; arr_test

;; sizeof array_int: 16
;; NEW ARR: type 0x60000027d200 5
;; arr01 len: 5
;; print int array using Unsafe nth: 12345
;; print int array using Safe nth: 1234500
;; FREE ARR: 0x60000027d200
;; NEW ARR: type 0x60000397c000 50
;;   (nth checksum: 24500000000)
;; FREE ARR: 0x60000397c000
;;   nth (bounds-checked) 1000000000 times: 417 ms

;; (nth) bench result:
;; Cicili 408 415 418 408 417
;; Rust   439 435 437 439 436
