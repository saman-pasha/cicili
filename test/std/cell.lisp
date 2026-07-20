
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
        
        (let^cell (arr_ref cell01)
          (printf "1. cell01 arr len: %zu\n" (len^array (cof arr_ref))))
        
        ;; default value used in case of DEAD cell
        ;; -1 as default_value presented in letn scope
        (printf "2. cell02 arr len + over: %zu\n"
          (letn^cell (arr_ref cell02 -1 :over aInt)
            (+ (len^array (cof arr_ref)) over)))

        (take^cell (arr cell01)
          (printf "3. cell01 arr len: %zu\n" (len^array arr)))

        (taken^cell (arr cell02
                      (printf "4. default value is strict\n"))
          (printf "4. cell02 arr len: %zu\n" (len^array arr)))

        )) ; letin
    )) ; cell.c


;; sbcl --script cicili.lisp --syslog ./test/std/cell.lisp
;; arr_test

;; NEW ARR: int * 0x600001604050 4
;; NEW CELL: 0x600001604040
;; NEW ARR: int * 0x600001401200 5
;; NEW CELL: 0x600001604060
;; 1. cell01 arr len: 4
;; 2. cell02 arr len + over: 15
;; 3. cell01 arr len: 4
;; FREE ARR: 0x600001604050
;; FREE CELL: 0x600001604040
;; FREE ARR: 0x0
;; 4. default value is strict
;; 4. cell02 arr len: 5
;; FREE ARR: 0x600001401200
;; FREE CELL: 0x600001604060
;; FREE ARR: 0x0
;; FREE CELL: 0x0
;; FREE CELL: 0x0
