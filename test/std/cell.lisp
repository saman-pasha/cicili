
;;; test Cicili std cell
(source "cell.c"
  (make :std #t
        :compile ("-O3" "-ffast-math" "-c" "cell.c")
        :link ("-lcell.o" "-o" "cell_test"))

  (decl-array array^int int)
  (decl-cell cell^array^int array^int)
  
  (main
    ;; new array call inside new cell call
    ;; pass constructor and args
    (letin ((cell01 (new^cell new^array (cast (int []) '{ 1 2 3 4 5 }))) 
            ) ; decls

      (let^cell (arr cell01)
        (printf "1. cell01 arr len: %zu\n" (len^array arr)))

      (printf "2. cell01 arr len: %zu\n"
        (letn^cell (arr cell01 -1)
          (len^array arr)))

      (take^cell (arr_ptr cell01)
        (printf "3. cell01 arr len: %zu\n" (len^array (cof arr_ptr)))
        (force^free^array^int arr_ptr)) ; needed for taken cell

      (free^cell (aof cell01))
      
      (taken^cell (arr_ptr cell01
                    (printf "4 cell01 arr len: default path\n")) ; default path
        (printf "4. cell01 arr len: %zu\n" (len^array (cof arr_ptr))))

      ) ; letin
    )) ; cell.c


;; sbcl --script cicili.lisp --syslog ./test/std/cell.lisp
;; arr_test

;; NEW ARR: int * 0x6000033d5200 5
;; NEW CELL: 6000031d0050 6000031d0040
;; 1. cell01 arr len: 5
;; 2. cell01 arr len: 5
;; TAKE CELL: 6000031d0040 6000031d0040
;; 3. cell01 arr len: 5
;; FREE ARR: 0x6000033d5200
;; 4 cell01 arr len: default path
