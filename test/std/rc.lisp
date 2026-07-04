
;;; test cicili std rc
(source "rc.c"
  (make :std #t
        :compile ("-O3" "-ffast-math" "-c" "rc.c")
        :link ("-lrc.o" "-o" "rc_test"))

  (decl-array array^int int)
  (import-array array^int int)

  (decl-rc rc^array^int array^int)
  (import-rc rc^array^int array^int)

  
  (main
    (let ((defer () (free^rc^array^int (aof rc01)))
          (rc^array^int rc01 . #'(new^rc^array^int '{ 1 2 3 4 5 }))
          ) ; decls

      (let^rc^array^int (arr rc01)
        (printf "1 rc01 arr len: %zu\n" (len^array^int arr)))

      (let^rc^array^int (* arr rc01)
        (printf "2 rc01 arr len: %zu\n" (len^array^int (cof arr)))
        ;; uncomment error: shouldn't free an object where ordered to be used inside Rc: array^int
        ;; (free^array^int arr)
        )

      (printf "3 rc01 arr len: %zu\n"
        (letn^rc^array^int (arr rc01 -1)
          (len^array^int arr)))

      ;; (take^rc^array^int (arr (clone^rc^array^int rc01))
      ;;   (printf "4 rc01 arr len: %zu\n" (len^array^int arr))
      ;;   ;; uncomment cause segfault, use-after-free interior arr
      ;;   ;; (force^free^array^int (aof arr)) ; needed for taken rc
      ;;   )

      (let ((auto cloned . #'(clone^rc^array^int rc01)))
        (free^rc^array^int (aof cloned)))
      
      (taken^rc^array^int
          (* arr rc01
             (printf "5 rc01 arr len: default path\n")) ; default path
        (printf "5 rc01 arr len: %zu\n" (len^array^int (cof arr)))
        (force^free^array^int arr))

      ) ; let
    )) ; rc.c


;; NEW RC: 600001dcc050 600001dcc040
;; 1 rc01 arr len: 5
;; 2 rc01 arr len: 5
;; 3 rc01 arr len: 5
;; FREE RC: 600001dcc040 600001dcc040
;; FREE RC: counter: 2
;; TAKEN RC: 600001dcc040 600001dcc040
;; 5 rc01 arr len: 5
;; FREE ARR: 600001fc9200
