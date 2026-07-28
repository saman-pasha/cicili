
(header "generic.h" ()
        
        (struct Employee
          (member int id)
          (member char name [10]))

        (generic __TEST1_G_ (ID PRNT)
                 (method (Employee . (<> print ID)) ()
                         (PRNT "employee! ID: %d\n" ($ this id))))

        (generic __TEST2_G_ (ID PRNT)
                 (struct (<> Employee ID)
                   (member ID id)
                   (member char name [12]))
                 
                 (method ((<> Employee ID) . (<> print ID)) ((char * name))
                         (PRNT "employee ID: %ld, a name:%s\n" ($ this id) name)))
        )

(source "generic.c" (:std #t :compile #t :link #t)

        (include "generic.h")
        
        (__TEST1_G_ int printf)
        (__TEST2_G_ long printf)

        (main
            (let ((Employee emp1 . '{ 10 "Jon Doe" })
                  (Employee_long emp2 . '{ 12 "Saman Pasha" }))
              (-> emp1 print_int)
              (-> emp2 print_long "Jon")
              (-> emp1 (<> print int))
              (-> emp2 (<> print long) "Doe")
              )))
