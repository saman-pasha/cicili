;;; test control forms
(source "control.c" (:std #t :compile #t :link #t)
        
        (func main ()
              (let ((int x . 1)
                    (int y . 5)
                    (bool next . true)
                    (int digits [] . '{ 1 3 5 7 }))
                
                (while (== #t next) ; condition
                  (printf "please enter a digit: ")
                  (scanf "%d" (aof x))
                  (if (> x y)
                      (printf "x is bigger than y\n")
                      (printf "x is smaller than y\n"))
                  (printf "try another? [1/0] ")
                  (scanf "%d" (aof x))
                  (set next (? x true false)))

                (do
                  (printf "please enter two digit: ")
                  (scanf "%d %d" (aof x) (aof y))
                  (printf "product of x by y is: %d\n" (* x y))
                  (printf "try another? [1/0] ")
                  (scanf "%d" (aof x))
                  (set next (? x true false))
                  (!= #f next)) ; condition

                (for ((int i . 0)
                      (x . 1)) ; start
                  (> x i)      ; continue-test
                  ((1+ i)      ; advance
                   (1+ y))

                  (printf "i is: %d and smaller than x, enter another x: " i)
                  (scanf "%d" (aof x))
                  continue)

                (for ((int i . 1)) (< i 5) ((++ i))
                     (switch (nth i digits)
                       (case 1 (printf "digit One\n")   break)
                       (case 2 (printf "digit Two\n")   break)
                       (case 3 (printf "digit Three\n") break)
                       (case 4 (printf "digit Four\n")  break)
                       (case 5 (printf "digit Five\n")  break)
                       (default (printf "unknown digit\n"))))
                
                )))

                
