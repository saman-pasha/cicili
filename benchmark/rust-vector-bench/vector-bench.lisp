(import "draft/collection/vector.lisp")

(source "vec_bench.c"
  (make :std #t
        :haskell #t
        :compile ("-O3" "-march=native" "-flto" "vec_bench.c" "-o" "vec_bench")
        :link #t)

  (include <time.h>)

  ;; prevent dependency repetition
  (@define __Maybe_int__H_IMPL__)
  (@define __Maybe_char__H_IMPL__)

  (decl-Vector Vector^int int NIL)
  (impl-Vector Vector^int int (\\ -f -v (fprintf -f "%d" -v)) " " NIL NIL)
  (import-Vector Vector^int int NIL new^Vector^int)

  (decl-Vector Str char T)
  (impl-Vector Str char (\\ -f -v (fprintf -f "%c" -v)) "" T T)
  (import-Vector Str char T new^Str)

  ;; -------------------------------------------------------------------------
  ;; timer helpers
  ;; -------------------------------------------------------------------------

  (func ms_now ()
        (out long)
        (let ((struct timespec ts))
          (clock_gettime CLOCK_MONOTONIC (aof ts))
          (return (+ (* (-> ts tv_sec) 1000)
                     (/ (-> ts tv_nsec) 1000000)))))

  (var int N     . 1000000) ; total operations
  (var int STEP  . 1000)    ; elements per epoch

  ;; -------------------------------------------------------------------------
  ;; Benchmark A — Raw Vector^int, no live clones during mutation
  ;; mirrors Rust: plain Vec<i32>
  ;; -------------------------------------------------------------------------

  ;; A1: push N elements in N/STEP epochs of STEP pushes each
  ;; mirrors: bench_a_push
  (func bench_a_push ()
        (out long)
        (let ((long t0 . #'(ms_now)))
          (for ((int epoch . 0)) (< epoch (/ N STEP)) ((++ epoch))
               (letin ((v (pure^Vector^int STEP)))
                 (for ((int i . 0)) (< i STEP) ((++ i))
                      (set v (push^Vector^int (+ (* epoch STEP) i) v)))))
          (return (- (ms_now) t0))))

  ;; A2: nth (bounds-checked indexed access) N times
  ;; mirrors: bench_a_nth using Vec::get
  ;; Cicili — correct approach
  (func bench_a_nth ()
        (out long)
        (letin ((v (new^Vector^int ... 50)))
          (let ((long sum . 0)
                (long t0 . #'(ms_now)))
            (for ((int i . 0)) (< i N) ((++ i))
                 (io ((<> nth Vector int) (% i 50) v)
                   (Just val (set sum (+ sum val)))
                   (default (block))))
            (let ((long elapsed . #'(- (ms_now) t0)))
              (printf "  (nth checksum: %ld)\n" sum)  ; after timer — forces liveness
              (return elapsed)))))

  ;; A3: zero-copy slice/drop N times
  ;; mirrors: bench_a_slice using &v[2..]
  ;; NOTE: Cicili Slice clones the Rc (increments count) — small overhead
  ;;       vs Rust &[T] which is compile-time zero cost
  (func bench_a_slice ()
        (out long)
        (letin ((v (new^Vector^int (cast (const int [])
                                        '{ 0 1 2 3 4 5 6 7 8 9
                                           10 11 12 13 14 15 16 17 18 19 })
                                   20)))
          (let ((long t0 . #'(ms_now))
                (volatile long total_len . 0))
            (for ((int i . 0)) (< i N) ((++ i))
                 (letin ((s (drop^Vector^int 2 v)))   ; Rc clone + Slice, O(1)
                   (set total_len (+ total_len (len^Vector^int s)))))
            (printf "  (slice checksum: %ld)\n" total_len)
            (return (- (ms_now) t0)))))

  ;; A4: forward iteration over N total elements
  ;; mirrors: bench_a_iterate using v.iter()
  (func bench_a_iterate ()
        (out long)
        (letin ((v (new^Vector^int (cast (const int [])
                                        '{ 0 1 2 3 4 5 6 7 8 9
                                           10 11 12 13 14 15 16 17 18 19 })
                                   20)))
          (let ((long t0 . #'(ms_now))
                (volatile long sum . 0))
            (for ((int epoch . 0)) (< epoch (/ N STEP)) ((++ epoch))
                 (iterate (beg end v)
                   (set sum (+ sum (cof beg)))))
            (printf "  (iterate checksum: %ld)\n" sum)
            (return (- (ms_now) t0)))))

  ;; A5: reverse iteration over N total elements
  ;; mirrors: bench_a_iterate_reverse using v.iter().rev()
  (func bench_a_iterate_reverse ()
        (out long)
        (letin ((v (new^Vector^int (cast (const int [])
                                        '{ 0 1 2 3 4 5 6 7 8 9
                                           10 11 12 13 14 15 16 17 18 19 })
                                   20)))
          (let ((long t0 . #'(ms_now))
                (volatile long sum . 0))
            (for ((int epoch . 0)) (< epoch (/ N STEP)) ((++ epoch))
                 (iterate (beg end v :reverse T)
                   (set sum (+ sum (cof end)))))
            (printf "  (iterate checksum: %ld)\n" sum)
            (return (- (ms_now) t0)))))

  ;; A6: COW slice mutation — drop then push
  ;; mirrors: bench_a_cow_slice: slice.to_vec() + push
  ;; Cicili: Slice → copySlice (alloc+memcpy) + push
  (func bench_a_cow_slice ()
        (out long)
        (letin ((v (new^Vector^int (cast (const int [])
                                        '{ 0 1 2 3 4 5 6 7 8 9
                                           10 11 12 13 14 15 16 17 18 19 })
                                   20)))
          (let ((long t0 . #'(ms_now)))
            (for ((int epoch . 0)) (< epoch (/ N STEP)) ((++ epoch))
                 (letin ((s  (drop^Vector^int 2 v))      ; Slice (Rc clone, zero copy)
                         (s2 (push^Vector^int epoch s)))  ; COW: copySlice + push
                   (block)))
            (return (- (ms_now) t0)))))

  ;; -------------------------------------------------------------------------
  ;; Benchmark B — Vector^int with live clones
  ;; mirrors Rust: Rc<RefCell<Vec<i32>>>
  ;; -------------------------------------------------------------------------

  ;; B1: clone + nth (Rc liveness check + indexed access)
  ;; mirrors: bench_b_clone_and_get: Rc::clone + RefCell::borrow + get
  (func bench_b_clone_and_get ()
        (out long)
        (letin ((v (new^Vector^int (cast (const int [])
                                        '{ 0 1 2 3 4 5 6 7 8 9
                                           10 11 12 13 14 15 16 17 18 19 })
                                   20)))
          (let ((long t0 . #'(ms_now))
                (volatile long sum . 0))
            (for ((int i . 0)) (< i N) ((++ i))
                 (letin ((c (clone^Box^Vector^int v)))   ; Rc clone (count++)
                   (io ((<> nth Vector int) (% i 20) c) ; liveness check + get
                     (Just val (set sum (+ sum val)))
                     (default (block)))))                ; count-- on scope exit
            (printf "  (iterate checksum: %ld)\n" sum)
            (return (- (ms_now) t0)))))

  ;; B2: exclusive push — only succeeds when count==1
  ;; mirrors: bench_b_exclusive_push: Rc::get_mut succeeds only when unique
  (func bench_b_exclusive_push ()
        (out long)
        (let ((long t0 . #'(ms_now)))
          (for ((int epoch . 0)) (< epoch (/ N STEP)) ((++ epoch))
               (letin ((v (pure^Vector^int STEP)))
                 (for ((int i . 0)) (< i STEP) ((++ i))
                      ;; count==1 here: push succeeds (exclusive guard passes)
                      (set v (push^Vector^int (+ (* epoch STEP) i) v)))))
          (return (- (ms_now) t0))))

  ;; B3: COW push with a live clone (count==2 → exclusive guard blocks → COW)
  ;; mirrors: bench_b_cow_with_live_clone:
  ;;   Rc clone alive → get_mut fails → Vec::clone() + push
  (func bench_b_cow_with_live_clone ()
        (out long)
        (letin ((v (new^Vector^int (cast (const int [])
                                        '{ 0 1 2 3 4 5 6 7 8 9
                                           10 11 12 13 14 15 16 17 18 19 })
                                   20)))
          (let ((long t0 . #'(ms_now)))
            (for ((int epoch . 0)) (< epoch (/ N STEP)) ((++ epoch))
                 (letin ((c  (clone^Box^Vector^int v))   ; live clone (count==2)
                         (v2 (push^Vector^int epoch v))) ; exclusive guard fails →
                                                         ; v is Buffer but count==2
                                                         ; returns None
                   ;; v2 is None because clone c is alive
                   ;; to actually COW: push on a Slice of v instead
                   (letin ((s  (drop^Vector^int 0 v))    ; Slice (clone, count==3)
                           (s2 (push^Vector^int epoch s)));COW: copySlice + push
                     (block))))                          ; c,s,s2 freed on exit
            (return (- (ms_now) t0)))))

  ;; -------------------------------------------------------------------------
  ;; const Vector — zero-allocation C string wrapping
  ;; No Rust equivalent in Benchmark A/B — this is unique to Cicili
  ;; Included to show the cost of the const path vs mutable
  ;; -------------------------------------------------------------------------

  ;; C1: wrap C string literal + drop (zero allocation throughout)
  (func bench_c_const_slice ()
        (out long)
        (let ((long t0 . #'(ms_now))
              (volatile long total_len . 0))
          (for ((int i . 0)) (< i N) ((++ i))
               (letin ((cv  (new^Str "abcdefghijklmnopqrst"))  ; zero alloc wrap
                       (cvs (drop^Str 2 cv)))                  ; zero alloc Slice
                 (set total_len (+ total_len (len^Str cvs)))))
          (printf "  (slice checksum: %ld)\n" total_len)
          (return (- (ms_now) t0))))

  ;; C2: iterate over const Str
  (func bench_c_const_iterate ()
        (out long)
        (letin ((cv (new^Str "abcdefghijklmnopqrst")))
          (let ((long t0 . #'(ms_now))
                (volatile long sum . 0))
            (for ((int epoch . 0)) (< epoch (/ N STEP)) ((++ epoch))
                 (iterate (beg end cv)
                   (set sum (+ sum (cof beg)))))
            (printf "  (iterate checksum: %ld)\n" sum)
            (return (- (ms_now) t0)))))

  ;; -------------------------------------------------------------------------
  ;; main
  ;; -------------------------------------------------------------------------

  (main

    (printf "Cicili Vector vs Rust Vec<T> — %d operations each\n\n" N)

    (printf "=== Benchmark A: Vector^int (no live clones during mutation) ===\n")
    (printf "  (mirrors Rust: plain Vec<i32>)\n\n")

    (printf "  push %d elements (%d epochs of %d): %ld ms\n"
            N (/ N STEP) STEP (bench_a_push))

    (printf "  nth (bounds-checked) %d times: %ld ms\n"
            N (bench_a_nth))

    (printf "  slice/drop (Rc clone + Slice) %d times: %ld ms\n"
            N (bench_a_slice))

    (printf "  forward iterate (%d epochs x %d elements): %ld ms\n"
            (/ N STEP) STEP (bench_a_iterate))

    (printf "  reverse iterate (%d epochs x %d elements): %ld ms\n"
            (/ N STEP) STEP (bench_a_iterate_reverse))

    (printf "  COW slice mutation (copySlice+push) %d times: %ld ms\n\n"
            (/ N STEP) (bench_a_cow_slice))

    (printf "=== Benchmark B: Vector^int with live clones ===\n")
    (printf "  (mirrors Rust: Rc<RefCell<Vec<i32>>>)\n\n")

    (printf "  clone + nth (Rc liveness check) %d times: %ld ms\n"
            N (bench_b_clone_and_get))

    (printf "  exclusive push (count==1 guard) %d elements: %ld ms\n"
            N (bench_b_exclusive_push))

    (printf "  COW push with live clone %d times: %ld ms\n\n"
            (/ N STEP) (bench_b_cow_with_live_clone))

    (printf "=== Benchmark C: Const Str (zero-allocation C string wrapping) ===\n")
    (printf "  (no direct Rust equivalent -- unique to Cicili)\n\n")

    (printf "  const wrap + drop %d times: %ld ms\n"
            N (bench_c_const_slice))

    (printf "  const iterate (%d epochs x 20 chars): %ld ms\n\n"
            (/ N STEP) (bench_c_const_iterate))

    (printf "Notes:\n")
    (printf "  A3 slice: Cicili Rc clone has small overhead vs Rust zero-cost &[T].\n")
    (printf "  B2 exclusive push: Cicili count==1 guard mirrors Rust Rc::get_mut.\n")
    (printf "  B3 COW: both Cicili copySlice and Rust Vec::clone alloc + memcpy.\n")
    (printf "  C:  const Str wraps a C literal pointer, zero alloc -- Rust &str equivalent.\n")

    (return 0))

  ) ; vec_bench.c
