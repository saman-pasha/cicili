
;;; test Cicili std rc
(source "rc.c"
  (make :std #t
        :compile ("-O3" "-ffast-math" "-c" "rc.c")
        :link ("-lrc.o" "-o" "rc_test"))

  (decl-array int)
  (decl-rc array^int)
  
  (main
    (letin ((rc01 (new rc array (cast (const int []) '{ 1 2 3 4 5 })))
            ) ; decls

      (let^rc (arr_ptr rc01)
        (printf "1. rc01 arr len: %zu\n" (len^array (cof arr_ptr))))

      (printf "2. rc01 arr len: %zu\n"
        (letn^rc (arr_ptr rc01 -1)
          (len^array arr_ptr)))

      ;; could not take because of counter is 2
      (letin ((cl01 (clone^rc rc01)))
        (take^rc (arr cl01)
          (printf "3. rc01 arr len: %zu\n" (len^array arr))))

      (taken^rc (arr rc01
                  (printf "4. default value is strict\n"))
        (printf "4. rc01 arr len: %zu\n" (len^array arr)))

      ) ; letin
    )) ; rc.c


;; sbcl --script cicili.lisp --syslog ./test/std/rc.lisp
;; ./test/std/rc_test

;; NEW ARR: const int * 0x600000be11e0 5
;; NEW RC CTX: 0x6000009e4050
;; NEW CELL: 0x6000009e4040
;; 1. rc01 arr len: 5
;; 2. rc01 arr len: 5
;; FREE CELL: 0x0
;; FREE CELL: 0x0
;; 4. default value is strict
;; 4. rc01 arr len: 5
;; FREE RC CTX: 0x6000009e4050
;; FREE CELL: 0x6000009e4040
;; FREE RC CTX: 0x0
;; FREE CELL: 0x0
