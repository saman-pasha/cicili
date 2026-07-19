
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

  ;; if uncomment function, compile-time error:
  ;; non-copy struct assignment for: #<SP @PARAM arr array_int  {12037AAC33}>
  ;; by: NIL
  ;; inside: #<SP @FUNC a_func_copy_array void  {12037AA8D3}>
  ;; (func a_func_copy_array ((array^int arr))
  ;;       (format #t "length of copied array %zu\n" (len^array arr)))

  ;; but allows to use 'move instance modifier
  (func a_func_move_array ((array^int move arr))
        (format #t "length of moved array %zu\n" (len^array arr))
        ((<> free array^int) (aof arr)))

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

            ;; if try to call v instead of by ref causes
            ;; using 'move var: #<SP @VAR v array_int move = #<SP @CALL #<SP @ATOM new_array_int_G127 @SYMBOL  {12022CEBF3}> = ...
            ;; inside loop
            ;; in call: ('(lambda* (<> nth array_int G145) ...
            (for ((int i . 0)) (< i N) ((++ i))
                 ;; (+= sum ((<> nth array) (% i 50) v :unchecked T)))
                 (+= sum ((<> nth array) (% i 50) v :default 0)))
            
            (let ((llong elapsed . #'(- (ms_now) t0)))
              (printf "  (nth checksum: %lld)\n" sum)  ; after timer — forces liveness
              (return elapsed)))))
  
  ;; and also allows 'ref instance modifier
  ;; references are pointers
  (func a_func_referenced_array ((array^int ref referred_arr))
        (format #t "length of referenced array %zu\n" (len^array (cof referred_arr)))
        ;; new ctor return type is 'copy but Cicili rejects to assign to a 'copy instance happend by 'cof
        ;; non-copy struct assignment for: #<SP @UNARY * = #<SP @ATOM referred_arr @SYMBOL  {120235DD13}>  {120235DDC3}>
        ;; by: #<SP @CALL #<SP @ATOM new_array_int_G124 @SYMBOL  {12023884F3}> = (#<SP @CAST const int #<SP @NIL  {12023885A3}> ...
        ;; inside: #<SP @SET  {120235DC63}>
        ;; (set (cof referred_arr) (new array (cast (const int []) '{ 1 2 3 })))
        )

  (main
    (printf "sizeof %s: %zu\n" (symbol-name (<> array int)) (sizeof (<> array int)))

    ;; example to ues new generic constructor
    (let ((int * iarr . #'(alloc 2 (sizeof int))) ; alloc is auto free allocation
          ;; try to get copy instance of a 'non-copy struct fails with:
          ;; non-copy struct assignment for: #<SP @VAR copyarr array_int = #<SP @CAST array_int = #<SP @CALL #<SP @ATOM iarr @SYMBOL ...
          ;; by: #<SP @CAST array_int = #<SP @CALL #<SP @ATOM iarr @SYMBOL  {120389DE53}> = (#<SP @ATOM 2 @NUMBER  {120389DF03}>) ...
          ;; inside: #<SP @FUNC main int {(static . T)} {1203887623}>
          ;; (array^int copyarr . #'(cast array^int { iarr 2 }))
          ) ; decls
      
      ;; letin use 'move instance modifier for 'non-copy structs variables
      (letin ((arr01 (new array (cast (const int []) '{ 1 2 3 4 5 })))
              (arr02 (new array iarr 2))
              ) ; decls

        (printf "arr01 len: %zu\n" (len^array arr01))
        (printf "arr02 len: %zu\n" (len^array arr02))

        (a_func_referenced_array (aof arr02))
        (a_func_referenced_array (aof arr02))
        (a_func_move_array arr02)
        ;; cause moving moved object error
        ;; trying to move already moved var: #<SP @VAR arr02 array_int ref  {1205476273}>
        ;; in call: (a_func_referenced_array (aof arr02))
        ;; (a_func_referenced_array (aof arr02))
        
        ;; using unchecked does not consume arr01
        (printf "print int array using Unsafe nth: ")
        (for ((size_t i . 0)) (< i (len^array arr01)) ((++ i))
             (printf "%d" (nth^array i arr01 :unchecked T)))
        (putchar #\Newline)

        ;; with default arr01 is consumed by nth
        (printf "print int array using Safe nth: ")
        (for ((size_t i . 0)) (< i 7) ((++ i))
             (printf "%d" (nth^array i arr01 :default 0)))
        (putchar #\Newline)
        
        (let ((i64 sum . 0))
          (printf "letn sum1: %lld\n"
            (letn^array (arr len arr01 :sum (aof sum))
              (cast void len)
              (for ((int i . 0)) (< i N) ((++ i))
                   (+= (cof sum) (nth (% i 5) arr)))
              ((<> free array^int) (aof arr01)) ; arr01 referred to movedin param in letn no local in main
              (cof sum)))

          ;; trying to move already moved var: #<SP @VAR arr01 array_int move = #<SP @CALL #<SP @ATOM new_array_int_G176 @SYMBOL ...
          ;; in call: ('(lambda* (<> letn array_int G229)
          ;; (printf "letn sum2: %lld\n"
          ;;   (letn^array (arr len arr01 :sum (aof sum))
          ;;     (cast void len)
          ;;     (for ((int i . 0)) (< i N) ((++ i))
          ;;          (+= (cof sum) (nth (% i 5) arr)))
          ;;     (cof sum)))
          ) ; let sum
        
        )) ; let

    (printf "  nth (bounds-checked) %d times: %ld ms\n" N (bench_a_nth))

    )) ; array.c

;; sbcl --script cicili.lisp --syslog ./test/std/array.lisp
;; arr_test

;; sizeof array_int: 16
;; NEW ARR: const int * 0x600001cc1200 5
;; NEW ARR: int * 0x600001ec4040 2
;; arr01 len: 5
;; arr02 len: 2
;; length of referenced array 2
;; length of referenced array 2
;; length of moved array 2
;; FREE ARR: 0x600001ec4040
;; print int array using Unsafe nth: 12345
;; print int array using Safe nth: 1234500
;; FREE ARR: 0x600001cc1200
;; letn sum1: 3000000000
;; FREE ARR: 0x0
;; FREE ARR: 0x0
;; NEW ARR: const int * 0x6000027c0000 50
;;   (nth checksum: 24500000000)
;; FREE ARR: 0x6000027c0000
;;   nth (bounds-checked) 1000000000 times: 464 ms

;; (nth) bench result:
;; Cicili 418 417 413 418 418
;; Rust   439 435 437 439 436
