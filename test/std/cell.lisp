
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
    (letin ((cell01 (new cell array (cast (int []) '{ 1 2 3 4 5 }))) 
            ) ; decls
      (let ((int aInt . 10)) ; to capture
        (let^cell (arr cell01)
          (printf "1. cell01 arr len: %zu\n" (len^array arr)))
        
        ;; default value used in case of DEAD cell
        ;; -1 as default_value presented in letn scope
        (printf "2. cell01 arr len + over: %zu\n"
          (letn^cell (arr cell01 -1 :over aInt)
            (+ (len^array arr) over)))

        (take^cell (arr_ptr cell01)
          (printf "3. cell01 arr len: %zu\n" (len^array (cof arr_ptr)))
          (force^free^array^int arr_ptr)) ; needed for taken cell

        ;; (free^cell (aof cell01))
        
        (taken^cell (arr_ptr cell01
                      (printf "4 cell01 arr len: default path\n")) ; default path
          (printf "4. cell01 arr len: %zu\n" (len^array (cof arr_ptr))))

        )) ; letin
    )) ; cell.c


;; sbcl --script cicili.lisp --syslog ./test/std/cell.lisp
;; arr_test

;; NEW ARR: int * 0x600000c311e0 5
;; NEW CELL: 600000e34050
;; 1. cell01 arr len: 5
;; 2. cell01 arr len + over: 15
;; TAKE CELL: 600000e34040
;; 3. cell01 arr len: 5
;; FREE ARR: 0x600000c311e0
;; 4 cell01 arr len: default path
;; FREE CELL: 0
