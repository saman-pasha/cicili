
(import "haskell/monad.lisp")

(source "monadic.c" (:std #t :compile #t :link "-L{$CCL} -lhaskell.o -L{$CWD} monadic.o -o main")
        (include "../../haskell.h")

        (typedef (Tuple String int int) Employee)

        (decl-Either String String)
        (impl-Either String String)

        ;; bind Either String String for name >>= Employee
        (decl-Monad-Either (<> Either String String Employee) String String Employee)
        (impl-Monad-Either (<> Either String String Employee) String String Employee
                           ((<> Left String Employee) (Empty^char)))
                
        ;; bind Either String int for id and salary >>= Employee
        (decl-Monad-Either (<> Either String int Employee) String int Employee)
        (impl-Monad-Either (<> Either String int Employee) String int Employee
                           ((<> Left String Employee) (Empty^char)))

        (main

            (where ((validate-id (\\ id (case (and (> id 0) (< id 100)) (Right^String^int id)
                                              otherwise (Left^String^int (new^String "wrong id!")))))
                    
                    (validate-name (\\ name (letin* ((len ((\.+ len String) name)))
                                              (case (and (> len 5) (< len 15)) (Right^String^String name)
                                                    otherwise (Left^String^String (new^String "wrong name!"))))))

                    (validate-salary (\\ salary (case (and (>= salary 1000) (<= salary 5000)) (Right^String^int salary)
                                                      otherwise (Left^String^int (new^String "wrong salary!"))))))

              (letin* ((name (new^String "Jon Doe"))
                       (messi (get^Monad^Either^String^String^Employee)))
                (io ((\. bind messi) (validate-name name)
                     '(lambda ((String wName))
                       (out (<> Either^String^Employee))
                       (letin* ((mesii (get^Monad^Either^String^int^Employee)))
                         (return ((\. bind mesii) (validate-id 10)
                                  '(lambda ((int wId))
                                    (out (<> Either^String^Employee))
                                    (letin* ((mesie (get^Monad^Either^String^int^Employee)))
                                      (return ((\. bind mesie) (validate-salary 3000)
                                               '(lambda ((int wSalary))
                                                 (out (<> Either^String^Employee))
                                                 (return (Right^String^Employee
                                                             (cast Employee
                                                               '{ wName wId wSalary })))))))))))))
                  (Right ((\, name id salary))
                         (progn
                           (printf "name is:")
                           (show^String name)
                           (putchar #\Newline)
                           (printf "id is: %d\n" id)
                           (printf "salary is: %d\n" salary)))
                  (Left err (progn
                              (printf "make Employee error: ")
                              (show^String err)
                              (putchar #\Newline))))

                (io ((\. bind messi) (validate-name name)
                     '(lambda ((String wName))
                       (out (<> Either^String^Employee))
                       (letin* ((mesii (get^Monad^Either^String^int^Employee)))
                         (return ((\. bind mesii) (validate-id 10)
                                  '(lambda ((int wId))
                                    (out (<> Either^String^Employee))
                                    (letin* ((mesie (get^Monad^Either^String^int^Employee)))
                                      (return ((\. bind mesie) (validate-salary 6000)
                                               '(lambda ((int wSalary))
                                                 (out (<> Either^String^Employee))
                                                 (return (Right^String^Employee
                                                             (cast Employee
                                                               '{ wName wId wSalary })))))))))))))
                  (Right ((\, name id salary))
                         (progn
                           (printf "name is:")
                           (show^String name)
                           (putchar #\Newline)
                           (printf "id is: %d\n" id)
                           (printf "salary is: %d\n" salary)))
                  (Left err (progn
                              (printf "make Employee error: ")
                              (show^String err)
                              (putchar #\Newline))))

                )) ; letin*
          
          )) ; monadic.c

;;; thanks the God, it was a long journey to be here
