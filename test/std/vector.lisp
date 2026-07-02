
;;; test cicili std vector
(source "vector.c"
  (make :std #t
        :compile ("-O3" "-ffast-math" "-c" "vector.c")
        :link ("-lvector.o" "-o" "vec_test"))

  (include <sys/time.h>)
  (include <limits.h>)

  (decl-vector vector^int int)
  (import-vector vector^int int)

  (func ms_now ()
        (out llong)
        (let (((struct timeval) tv))
          (gettimeofday (aof tv) nil)
          (return (+ (* ($ tv tv_sec) 1000LL) + (/ ($ tv tv_usec) 1000LL)))))

  (var size_t N    . 1000000000) ; total operations
  (var size_t STEP . 1000)       ; elements per epoch

  (func bench_a_nth ()
        (out long)
        (letin* ((v (new^vector^int '{
                      0  1  2  3  4  5  6  7  8  9
                      10 11 12 13 14 15 16 17 18 19
                      20 21 22 23 24 25 26 27 28 29
                      30 31 32 33 34 35 36 37 38 39
                      40 41 42 43 44 45 46 47 48 49 })
                    (<> free vector int))
                 ) ; decls

          (let ((i64 sum . 0)
                (llong t0 . #'(ms_now)))
            
            ;; (free^vector^int (aof v)) ; uncomment to iterate but all nth returns default

            (for ((size_t i . 0)) (< i N) ((++ i))
                 ;; (+= sum ((<> nth vector int) (% i 50) v :unchecked T)))
                 (+= sum ((<> nth vector int) (% i 50) v :default 0)))

            (let ((llong elapsed . #'(- (ms_now) t0)))
              (printf "  (nth checksum: %lld)\n" sum) ; after timer — forces liveness
              (return elapsed)))))
  
  (func bench_a_slice ()
        (out long)
        (let ((defer () ((<> free vector int) (aof v)))
              ((<> vector int) v . #'(new^vector^int '{
                                      0  1  2  3  4  5  6  7  8  9
                                      10 11 12 13 14 15 16 17 18 19
                                      20 21 22 23 24 25 26 27 28 29
                                      30 31 32 33 34 35 36 37 38 39
                                      40 41 42 43 44 45 46 47 48 49 }))
                 ) ; decls

          (let ((i64 total_len . 0)
                (llong t0 . #'(ms_now))
                (size_t n . #'(* N N)))
            
            (for ((size_t i . 0)) (< i n) ((++ i))
                 (+= total_len ((<> len vector int) ((<> slice vector int) ((<> slice vector int) v 2) 2))))

            (let ((llong elapsed . #'(- (ms_now) t0)))
              (printf "  (slice checksum: %lld)\n" total_len) ; after timer — forces liveness
              (return elapsed)))))

  (main
    (printf "sizeof %s: %zu\n" (symbol-name (<> vector int)) (sizeof (<> vector int)))
    
    (let ((defer () (free^vector^int (aof vec01)))
          (vector^int vec01 . #'(new^vector^int '{ 1 2 3 4 5 })))

      (printf "vec01 len: %zu\n" (len^vector^int vec01))

      (printf "print int vector using Unsafe nth: ")
      (for ((size_t i . 0)) (< i (len^vector^int vec01)) ((++ i))
           (printf "%d" (nth^vector^int i vec01 :unchecked T)))
      (putchar #\Newline)

      (printf "print int vector using Safe nth: ")
      (for ((size_t i . 0)) (< i 7) ((++ i))
           (printf "%d" (nth^vector^int i vec01 :default 0)))
      (putchar #\Newline)

      (printf "print int slice using nth: ")
      ((<> let vector int) (pure_array len ((<> slice vector int) vec01 2)) ; drop 2
       (for ((int i . 0)) (< i len) ((++ i))
            (printf "%d" (nth i pure_array)))) ; nth pure c array access
      (putchar #\Newline)

      ) ; let

    (printf "  nth (bounds-checked) %zu times: %ld ms\n" N (bench_a_nth))
    (printf "  slice (bounds-checked) %zu * %zu times: %ld ms\n" N N (bench_a_slice))

    )) ; vector.c


;; Results:

;; sizeof vector_int: 16
;; vec01 len: 5
;; print int vector using Unsafe nth: 12345
;; print int vector using Safe nth: 1234500
;; print int slice using nth: 345
;;   (nth checksum: 24500000000)
;;   nth (bounds-checked) 1000000000 times: 457 ms
;;   (slice checksum: 9106511852580896768)
;;   slice (bounds-checked) 1000000000 * 1000000000 times: 0 ms

;; sizeof vector_int: 24
;; vec01 len: 5
;; print int vector using Unsafe nth: 12345
;; print int vector using Safe nth: 1234500
;; print int slice using nth: 345
;;   (nth checksum: 24500000000)
;;   nth (bounds-checked) 1000000000 times: 404 ms
;;   (slice checksum: 9106511852580896768)
;;   slice (bounds-checked) 1000000000 * 1000000000 times: 0 ms

;; (nth) bench result: with letin* has 40ms latency
;; Cicili 406 404 406 406 404
;; Rust   439 435 437 439 436

;; (slice) bench result:
;; Cicili 0 0 0 0 0
;; Rust   0 0 0 0 0
