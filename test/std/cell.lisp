
;;; test Cicili std cell
(source "cell.c"
  (make :std #t
        :compile ("-O3" "-ffast-math" "-c" "cell.c")
        :link ("-lcell.o" "-o" "cell_test"))

  (decl-array array^int int)
  (decl-cell cell^array^int array^int)
  
  (main
    ;; new array call inside new cell call
    ;; pass type which has (<> new type) and (<> free type) interface and args
    (letin ((cell01 (new cell array (cast (int []) '{ 1 2 3 4 }))) 
            (cell02 (new cell array (cast (int []) '{ 1 2 3 4 5 }))) 
            ) ; decls
      (let ((int aInt . 10)) ; to capture
        
        (let^cell (arr cell01)
          (printf "1. cell01 arr len: %zu\n" (len^array arr)))
        
        ;; default value used in case of DEAD cell
        ;; -1 as default_value presented in letn scope
        (printf "2. cell02 arr len + over: %zu\n"
          (letn^cell (arr cell02 -1 :over aInt)
            (+ (len^array arr) over)))

        (take^cell (arr cell01)
          (printf "3. cell01 arr len: %zu\n" (len^array arr)))

        (taken^cell (arr cell02
                      (printf "4. default value is strict\n"))
          (printf "4. cell02 arr len: %zu\n" (len^array arr)))

        )) ; letin
    )) ; cell.c


;; sbcl --script cicili.lisp --syslog ./test/std/cell.lisp
;; arr_test

;; result without those two take
;; NEW ARR: int * 0x600002d58050 4
;; NEW CELL: 600002d58040
;; NEW ARR: int * 0x600002f5d200 5
;; NEW CELL: 600002d58060
;; 1. cell01 arr len: 4
;; 2. cell02 arr len + over: 15
;; FREE CELL: 600002d58060
;; FREE ARR: 0x600002f5d200
;; FREE CELL: 600002d58040
;; FREE ARR: 0x600002d58050


;; result with those two take
;; NEW ARR: int * 0x600000f6c050 4
;; NEW CELL: 600000f6c040
;; NEW ARR: int * 0x600000d69200 5
;; NEW CELL: 600000f6c060
;; 1. cell01 arr len: 4
;; 2. cell02 arr len + over: 15
;; 3. cell01 arr len: 4
;; FREE CELL: 600000f6c040
;; FREE ARR: 0x600000f6c050
;; 4. default value is strict
;; 4. cell02 arr len: 5
;; FREE CELL: 600000f6c060
;; FREE ARR: 0x600000d69200
;; FREE CELL: 0
;; FREE CELL: 0
