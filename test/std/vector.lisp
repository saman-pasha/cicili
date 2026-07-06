
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

  (func bench_a_nth_rc ()
        (out long)
        (printf "\n")
        (let ((defer () ((<> free vector int) (aof v)))
              ((<> vector int) v . #'(new^vector^int '{
                                       0  1  2  3  4  5  6  7  8  9
                                       10 11 12 13 14 15 16 17 18 19
                                       20 21 22 23 24 25 26 27 28 29
                                       30 31 32 33 34 35 36 37 38 39
                                       40 41 42 43 44 45 46 47 48 49 }))
              ;; (letin* ((v (new^vector^int '{
              ;;               0  1  2  3  4  5  6  7  8  9
              ;;               10 11 12 13 14 15 16 17 18 19
              ;;               20 21 22 23 24 25 26 27 28 29
              ;;               30 31 32 33 34 35 36 37 38 39
              ;;               40 41 42 43 44 45 46 47 48 49 })
              ;;             (<> free vector int))
              ) ; decls

          (let ((i64 sum . 0)
                (llong t0 . #'(ms_now)))
            
            ;; (free^vector^int (aof v)) ; uncomment to iterate but all nth returns default

            ;; (let^vector^int (arr len v)
            ;;   (cast void len)
            ;;   (for ((size_t i . 0)) (< i N) ((++ i))
            ;;        (+= sum (nth (% i 50) arr))))

            (for ((size_t i . 0)) (< i N) ((++ i))
                 (+= sum ((<> nth vector int) (% i 50) v :default 0)))

            (let ((llong elapsed . #'(- (ms_now) t0)))
              (printf "  (nth rc checksum: %lld)\n" sum) ; after timer — forces liveness
              (return elapsed)))))
  
  (func bench_a_slice ()
        (out long)
        (printf "\n")
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
                 (+= total_len ((<> len vector int) ((<> slice vector int) ((<> slice vector int) v 2) 2)))
                 ((<> free vector int) (aof v))
                 ((<> free vector int) (aof v)))

            (let ((llong elapsed . #'(- (ms_now) t0)))
              (printf "  (slice checksum: %lld)\n" total_len) ; after timer — forces liveness
              (return elapsed)))))

  (main
    (printf "sizeof %s: %zu\n" (symbol-name (<> vector int)) (sizeof (<> vector int)))
    
    (let ((defer () (free^vector^int (aof vec01)))
          (vector^int vec01 . #'(new^vector^int '{ 1 2 3 4 5 })))

      (printf "vec01 len: %zu\n" (len^vector^int vec01))

      (printf "print int vector using only Safe nth: ")
      (for ((size_t i . 0)) (< i 7) ((++ i))
           (printf "%d" (nth^vector^int i vec01 :default 0)))
      (putchar #\Newline)

      (printf "print int slice using nth: ")
      ((<> let vector int) (pure_array len ((<> slice vector int) vec01 2)) ; drop 2
       (for ((int i . 0)) (< i len) ((++ i))
            (printf "%d" (nth i pure_array)))) ; nth pure c array access
      (putchar #\Newline)

      ((<> let vector int) (pure_array len ((<> slice vector int) ((<> slice vector int) vec01 2) 2)) ; drop 2 of drop 2
       (for ((int i . 0)) (< i len) ((++ i))
            (printf "%d" (nth i pure_array)))) ; nth pure c array access
      (putchar #\Newline)

      (free^vector^int (aof vec01))
      (free^vector^int (aof vec01))
      (free^vector^int (aof vec01))
      ) ; let

    (printf "  nth rc (bounds-checked) %zu times: %ld ms\n" N (bench_a_nth_rc))
    ;; (printf "  slice (bounds-checked) %zu * %zu times: %ld ms\n" N N (bench_a_slice))

    )) ; vector.c


;; sbcl --script cicili.lisp --syslog ./test/std/vector.lisp
;; ./test/std/vec_test

;; sizeof vector_int: 32
;; NEW VECTOR: vector_int 5
;; NEW ARR: array_int 6000027d5200 5
;; NEW RC: 0x6000025d0040 6000025d0050 6000025d0040
;; vec01 len: 5
;; print int vector using only Safe nth: 1234500
;; print int slice using nth: slice vector_int: low: (2 -> 2), high: (5 -> 5)
;; 345
;; slice vector_int: low: (2 -> 2), high: (5 -> 5)
;; slice vector_int: low: (2 -> 4), high: (3 -> 5)
;; 5
;; FREE VECTOR: 7ff7b4baeec0
;; FREE RC: 0x6000025d0040 0x6000025d0050 6000025d0040
;; FREE RC: counter: 4
;; FREE VECTOR: 7ff7b4baeec0
;; FREE RC: 0x6000025d0040 0x6000025d0050 6000025d0040
;; FREE RC: counter: 3
;; FREE VECTOR: 7ff7b4baeec0
;; FREE RC: 0x6000025d0040 0x6000025d0050 6000025d0040
;; FREE RC: counter: 2
;; FREE VECTOR: 7ff7b4baeea0
;; FREE RC: 0x6000025d0040 0x6000025d0050 6000025d0040
;; FREE RC: counter: 1
;; FREE ARR: 6000027d5200

;; NEW VECTOR: vector_int 50
;; NEW ARR: array_int 600001cd4000 50
;; NEW RC: 0x6000025d0050 6000025d0040 6000025d0050
;;   (nth rc checksum: 24500000000)
;; FREE VECTOR: 7ff7b4baee48
;; FREE RC: 0x6000025d0050 0x6000025d0040 6000025d0050
;; FREE RC: counter: 1
;; FREE ARR: 600001cd4000
;;   nth rc (bounds-checked) 1000000000 times: 408 ms

;; (nth rc) bench result:
;; Cicili 408 404 410 406 413
;; Rust   456 467 459 455 465

;; (slice) bench result:
;; Cicili 0 0 0 0 0
;; Rust   0 0 0 0 0


;; fn bench_a_nth_rc(n: usize) -> u128 {
;;     let v: Rc<RefCell<Vec<i32>>> = Rc::new(RefCell::new((0..50).collect()));
;;     let mut sum: i64 = 0;
;;     let start = Instant::now();
;;     for i in 0..n {
;;         if let Some(&val) = v.borrow().get(i % 50) {
;;             sum = sum.wrapping_add(val as i64);
;;         }
;;     }
;;     let elapsed = start.elapsed().as_millis();
;;     println!("  (nth rc checksum: {})", sum);  // after timer — forces liveness
;;     elapsed
;; }
