
(header "generic.h" ()
        
        (struct Employee
          (member int id)
          (member char name [10]))

        (generic __TEST1_G_ (ID PRNT)
                 ;; with '!' means the struct is not generic itself and only function is generic
                 (method (Employee! . print) ()
                         (PRNT "employee! ID: %s\n" (stringize ID))))

        (generic __TEST2_G_ (ID PRNT)
                 (struct Employee
                   (member ID id)
                   (member char name [12]))
                 
                 ;; without '!' means the struct is generic too, inside the same generic as function
                 (method (Employee . print) ((char * name))
                         (PRNT "employee ID: %s, a name:%s\n" (stringize ID) name)))
        )

(source "generic.c" (:std #t :compile #t :link #t)

        (include "generic.h")
        
        (__TEST1_G_ int printf)
        (__TEST2_G_ long printf)

        (main
            (let ((Employee emp1 . '{ 10 "Jon Doe" })
                  (Employee_longprintf emp2 . '{ 12 "Saman Pasha" }))
              (-> emp1 print_intprintf)
              (-> emp2 print_longprintf "Jon")
              (-> emp1 (<> print int printf))
              (-> emp2 (<> print long printf) "Doe")
              )))
