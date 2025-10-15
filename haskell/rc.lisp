
;; Reference Counting
;; Multiple ownership
(generic decl-Rc (a)

         (decl-data (Rc (<> Rc a))
           ((<> Keep Rc a)
            (a * pointer)
            (int * count)
            (func destructor ((a * pointer)))))

         (func (<> clone Rc a) ((<> Rc a) rc)
               (out (<> Rc a))
               (match rc
                 (_ _ count _ (progn
                                (++ (cof count))
                                rc))
                 (default rc)))
         
         (func (<> free Rc a) ((<> Rc a) * rc_ptr)
               (io rc_ptr
                 (* _ pointer count destructor
                    (case (== (cof count) 1) (progn
                                               (destructor pointer)
                                               (free count))
                          otherwise          (-- (cof count))))))

         (func (<> new Rc a) ((a * pointer) (func destructor ((a * pointer))))
               (out (<> Rc a))
               (letin ((count (malloc (sizeof int))))
                 (set (cof count) 0)
                 (return ((<> Keep Rc a) pointer count destructor))))

         ) ; decl-Rc
