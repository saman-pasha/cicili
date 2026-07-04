
;;; test cicili std cell
(source "cell.c"
  (make :std #t
        :compile ("-O3" "-ffast-math" "-c" "cell.c")
        :link ("-lcell.o" "-o" "cell_test"))

  (decl-array array^int int)
  (import-array array^int int)

  (decl-cell cell^array^int array^int)
  (import-cell cell^array^int array^int)

  
  (main
    (let ((defer () (free^cell^array^int (aof cell01)))
          (cell^array^int cell01 . #'(new^cell^array^int '{ 1 2 3 4 5 }))
          ) ; decls

      (let^cell^array^int (arr cell01)
        (printf "1 cell01 arr len: %zu\n" (len^array^int arr)))

      (let^cell^array^int (* arr cell01)
        (printf "2 cell01 arr len: %zu\n" (len^array^int (cof arr)))
        ;; uncomment error: shouldn't free an object where ordered to be used inside Cell: array^int
        ;; (free^array^int arr)
        )

      (printf "3 cell01 arr len: %zu\n"
        (letn^cell^array^int (arr cell01 -1)
          (len^array^int arr)))

      (take^cell^array^int (arr cell01)
        (printf "4 cell01 arr len: %zu\n" (len^array^int arr))
        (force^free^array^int (aof arr))) ; needed for taken cell

      ;; (free^cell^array^int (aof cell01))
      
      (taken^cell^array^int
          (* arr cell01
             (printf "5 cell01 arr len: default path\n")) ; default path
        (printf "5 cell01 arr len: %zu\n" (len^array^int (cof arr))))

      ) ; let
    )) ; cell.c


;; NEW CELL: 600001db4050 600001db4040
;; 1 cell01 arr len: 5
;; 2 cell01 arr len: 5
;; 3 cell01 arr len: 5
;; TAKE CELL: 600001db4040 600001db4040
;; 4 cell01 arr len: 5
;; FREE ARR: 600001fb1200
;; 5 cell01 arr len: default path
