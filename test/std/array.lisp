
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
            
            (for ((int i . 0)) (< i N) ((++ i))
                 ;; (+= sum ((<> nth array) (% i 50) v :unchecked T)))
                 (+= sum ((<> nth array) (% i 50) v :default 0)))
            
            (let ((llong elapsed . #'(- (ms_now) t0)))
              (printf "  (nth checksum: %lld)\n" sum)  ; after timer — forces liveness
              (return elapsed)))))
  
  (main
    (printf "sizeof %s: %zu\n" (symbol-name (<> array int)) (sizeof (<> array int)))

    ;; example to ues new generic constructor
    (let ((int * iarr . #'(alloc 2 (sizeof int)))) ; alloc is auto free allocation
      (letin ((arr01 (new array (cast (const int []) '{ 1 2 3 4 5 })))
              (arr02 (new array iarr 2)))

        (printf "arr01 len: %zu\n" (len^array arr01))
        (printf "arr02 len: %zu\n" (len^array arr02))

        (printf "print int array using Unsafe nth: ")
        (for ((size_t i . 0)) (< i (len^array arr01)) ((++ i))
             (printf "%d" (nth^array i arr01 :unchecked T)))
        (putchar #\Newline)

        (printf "print int array using Safe nth: ")
        (for ((size_t i . 0)) (< i 7) ((++ i))
             (printf "%d" (nth^array i arr01 :default 0)))
        (putchar #\Newline)

        (let ((i64 sum . 0))
          (printf "letn sum: %lld\n"
            (letn^array (arr len arr01 :sum (aof sum))
              (cast void len)
              (for ((int i . 0)) (< i N) ((++ i))
                   (+= (cof sum) (nth (% i 5) arr)))
              (cof sum))))
        
        )) ; let

    (printf "  nth (bounds-checked) %d times: %ld ms\n" N (bench_a_nth))

    )) ; array.c

;; sbcl --script cicili.lisp --syslog ./test/std/array.lisp
;; arr_test

;; sizeof array_int: 16
;; NEW ARR: const int * 0x6000029e11e0 5
;; NEW ARR: int * 0x600002be4040 2
;; arr01 len: 5
;; arr02 len: 2
;; print int array using Unsafe nth: 12345
;; print int array using Safe nth: 1234500
;; letn sum: 3000000000
;; FREE ARR: 0x600002be4040
;; FREE ARR: 0x6000029e11e0
;; NEW ARR: const int * 0x6000012e0000 50
;;   (nth checksum: 24500000000)
;; FREE ARR: 0x6000012e0000
;;   nth (bounds-checked) 1000000000 times: 412 ms

;; (nth) bench result:
;; Cicili 414 421 412 422 412
;; Rust   439 435 437 439 436
