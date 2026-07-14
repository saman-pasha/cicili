
;;; test Cicili std rc
(source "rc.c"
  (make :std #t
        :compile ("-O3" "-ffast-math" "-c" "rc.c")
        :link ("-lrc.o" "-o" "rc_test"))

  (decl-array array^int int)
  (decl-rc rc^array^int array^int)
  
  (main
    (letin ((rc01 (new rc array (cast (const int []) '{ 1 2 3 4 5 })))
            ) ; decls

      (let^rc (arr rc01)
        (printf "1. rc01 arr len: %zu\n" (len^array arr)))

      (printf "2. rc01 arr len: %zu\n"
        (letn^rc (arr rc01 -1)
          (len^array arr)))

      ;; could not take because of counter is 2
      (take^rc (arr_ptr (clone^rc rc01))
        (printf "3. rc01 arr len: %zu\n" (len^array (cof arr_ptr)))
        (force^free^array^int arr_ptr)) ; needed for taken rc

      (letin ((week_copy rc01))
        (free^rc (aof week_copy))) ; two free: one by free call, second by letin deferal free call
      
      (taken^rc (arr_ptr rc01
                  (printf "5 rc01 arr len: default path\n")) ; default path
        (printf "5 rc01 arr len: %zu\n" (len^array (cof arr_ptr))))

      ) ; letin
    )) ; rc.c


;; sbcl --script cicili.lisp --syslog ./test/std/rc.lisp
;; rc_test

;; NEW ARR: const int * 0x6000034f51e0 5
;; NEW RC: 0x6000036f0040 6000036f0050 6000036f0040
;; 1. rc01 arr len: 5
;; 2. rc01 arr len: 5
;; FREE RC: 0x6000036f0040 0x6000036f0050 6000036f0040
;; FREE RC: counter: 2
;; FREE RC: 0x6000036f0040 0x6000036f0050 6000036f0040
;; FREE RC: counter: 1
;; FREE ARR: 0x6000034f51e0
;; 5 rc01 arr len: default path
