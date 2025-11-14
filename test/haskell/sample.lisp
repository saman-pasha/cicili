
;;; gemini sample
;;; --- Monadic Data Validation in Cicili ---
(source "sample.c" (:std #t :compile #t :link "-L{$CCL} -lhaskell.o -L{$CWD} sample.o -o main")
        (include "../../haskell.h")

        ;; Define a simple User type
        (typedef (Tuple String int) User)

        ;; bind (<> Either String String) for name >>= User
        (decl-Monad-Either (<> Either String String User) String String User)
        (impl-Monad-Either (<> Either String String User) String String User
                           ((<> Left String User) (Empty^char)))
        
        ;; bind (<> Either String int) for id  >>= User
        (decl-Monad-Either (<> Either String int User) String int User)
        (impl-Monad-Either (<> Either String int User) String int User
                           ((<> Left String User) (Empty^char)))

        ;; --- Validation Functions ---
        ;; All functions return (Either ErrorString SuccessValue)

        (func validate_name ((String name))
              (out Either^String^String)
              ;; (\.* len name) calls the 'len' method from the String's V-Table
              (if (>= ((\.* len name) name) 5)
                  (return (Right^String^String name))
                  (return (Left^String^String (new^String "Error: Name must be >= 5 chars")))))

        (func validate_id ((int id))
              (out Either^String^int)
              (if (> id 100)
                  (return (Right^String^int id))
                  (return (Left^String^int (new^String "Error: ID must be > 100")))))

        ;; --- Main Execution ---
        (main
            (where ((run-pipeline (\\ name-str id-int
                                      ;; 'letin' ensures 'name_input' is auto-freed when this block ends
                                      (letin ((* name_input (new^String name-str)))
                                        
                                        ;; 'io' block will pattern match on the *final* result
                                        (io 
                                            ;; This is the monadic chain, like Haskell's 'do' notation.
                                            ;; 'bind^Either^String^String^User' is the (>>=) operator.
                                            ($> bind^Either^String^String^User (validate_name name_input)
                                              
                                              ;; 1. The 'closure' for the *first* success
                                              '(lambda ((String valid_name))
                                                (out Either^String^User)
                                                ;; 2. The second step in the chain
                                                (return ($> bind^Either^String^int^User (validate_id id-int)
                                                          
                                                          ;; 3. The 'closure' for the *second* success
                                                          '(lambda ((int valid_id))
                                                            (out Either^String^User)
                                                            ;; 4. All steps passed. 'return' (pure) the final User.
                                                            (return (Right^String^User 
                                                                        (cast User '{ valid_name valid_id }))))))))
                                          
                                          ;; --- Pattern match on the result of the *entire* chain ---
                                          (Right ((\, name id))
                                                 (progn
                                                   (printf "--- SUCCESS ---\nUser Name: ")
                                                   (show^String name)
                                                   (printf "\nUser ID:   %d\n\n" id)))
                                          
                                          (Left err
                                                (progn
                                                  (printf "--- FAILED ---\nError: ")
                                                  (show^String err)
                                                  (printf "\n\n")
                                                  ;; We also manage the error string's memory
                                                  (free^String (aof err))))
                                          )))))
              (progn
                ;; Test 1: Success
                ($> run-pipeline "ValidUsername" 200)
                
                ;; Test 2: Fails on Name (short-circuits)
                ($> run-pipeline "Bad" 300)
                
                ;; Test 3: Fails on ID (short-circuits after name)
                ($> run-pipeline "AnotherValidName" 50))
              
              ))) ; source
