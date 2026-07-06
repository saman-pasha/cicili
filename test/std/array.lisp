
;;; test cicili std array
(source "array.c"
  (make :std #t
        :compile ("-O3" "-ffast-math" "-c" "array.c")
        :link ("-larray.o" "-o" "arr_test"))

  (include <sys/time.h>)
  (include <limits.h>)

  (decl-array array^int int)
  (impl-array array^int int)
  (import-array array^int int)

  (func ms_now ()
        (out llong)
        (let (((struct timeval) tv))
          (gettimeofday (aof tv) nil)
          (return (+ (* ($ tv tv_sec) 1000LL) + (/ ($ tv tv_usec) 1000LL)))))

  (var int N    . 1000000000) ; total operations
  (var int STEP . 1000)       ; elements per epoch

  (func bench_a_nth ()
        (out long)
        (let ((defer () ((<> free array int) (aof v)))
              ((<> array int) v . #'(new^array^int '{
                                      0  1  2  3  4  5  6  7  8  9
                                      10 11 12 13 14 15 16 17 18 19
                                      20 21 22 23 24 25 26 27 28 29
                                      30 31 32 33 34 35 36 37 38 39
                                      40 41 42 43 44 45 46 47 48 49 }))
        ;; (letin* ((v (new^array^int '{
        ;;               0  1  2  3  4  5  6  7  8  9
        ;;               10 11 12 13 14 15 16 17 18 19
        ;;               20 21 22 23 24 25 26 27 28 29
        ;;               30 31 32 33 34 35 36 37 38 39
        ;;               40 41 42 43 44 45 46 47 48 49 })
        ;;             (<> free array int))
                 ) ; decls

          (let ((i64 sum . 0)
                (llong t0 . #'(ms_now)))
            
            ;; ((<> let array int) (arr len v)
            ;;  (cast void len)
            ;;  (for ((int i . 0)) (< i N) ((++ i))
            ;;       (+= sum (nth (% i 50) arr))))

            (for ((int i . 0)) (< i N) ((++ i))
                 ;; (+= sum ((<> nth array int) (% i 50) v :unchecked T))))
                 (+= sum ((<> nth array int) (% i 50) v :default 0)))
            
            ;; (let ((int val . #'((<> nth array int) (% i 50) v :default -1)))
            ;;   (if (> val -1) (set sum (+ sum val))))
            (let ((llong elapsed . #'(- (ms_now) t0)))
              (printf "  (nth checksum: %lld)\n" sum)  ; after timer — forces liveness
              (return elapsed)))))
  
  (main
    (printf "sizeof %s: %zu\n" (symbol-name (<> array int)) (sizeof (<> array int)))
    
    (let ((defer () (free^array^int (aof arr01)))
          (array^int arr01 . #'(new^array^int '{ 1 2 3 4 5 })))

      (printf "arr01 len: %zu\n" (len^array^int arr01))

      (printf "print int array using Unsafe nth: ")
      (for ((size_t i . 0)) (< i (len^array^int arr01)) ((++ i))
           (printf "%d" (nth^array^int i arr01 :unchecked T)))
      (putchar #\Newline)

      (printf "print int array using Safe nth: ")
      (for ((size_t i . 0)) (< i 7) ((++ i))
           (printf "%d" (nth^array^int i arr01 :default 0)))
      (putchar #\Newline)

      ) ; let

    (fflush stdout)
    (printf "  nth (bounds-checked) %d times: %ld ms\n"
      N (bench_a_nth))

    )) ; array.c

;; sbcl --script cicili.lisp --syslog ./test/std/array.lisp
;; arr_test

;; sizeof array_int: 16
;; NEW ARR: array_int 7ff7b1807ed0 5
;; arr01 len: 5
;; print int array using Unsafe nth: 12345
;; print int array using Safe nth: 1234500
;; FREE ARR: 6000038211e0
;; NEW ARR: array_int 7ff7b1807db8 50
;;   (nth checksum: 24500000000)
;; FREE ARR: 600000320000
;;   nth (bounds-checked) 1000000000 times: 416 ms

;; (nth) bench result: with letin* has 40ms latency
;; Cicili 408 411 413 415 416
;; Rust   439 435 437 439 436
