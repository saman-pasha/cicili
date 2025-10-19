
;; Reference Counting
;; Multiple ownership
;; a could be an object or a pointer
(generic decl-Rc (a)

         (decl) (struct (<> __h Rc a class t))
         (typedef (struct (<> __h Rc a class t)) * (<> Rc a))
         
         (decl) (func (<> free Rc a) (((<> Rc a) * this)))
         (decl) (func (<> deref Rc a) (((<> Rc a) rc)) (out (<> Maybe a)))
         (decl) (func (<> clone Rc a) (((<> Rc a) rc)) (out (<> Rc a)))
         (decl) (func (<> new Rc a Pure) ((a pointer)) (out (<> Rc a)))
         
         ) ; decl-Rc

(generic define-Rc (a)

         ;; Rc is non-copyable so its definition should be hidden
         (decl-class (Rc (<> Rc a))
           (= Keep (<> Keep Rc a)
              (a pointer)
              (size_t authority) ; who owns the pointer and is accounted
              (int * count)        ; shared variable between instances should be a pointer
              (func destructor ((a * pointer)))))

         (decl) (func (<> deref Rc a) (((<> Rc a) rc)) (out (<> Maybe a)))
         (decl) (func (<> clone Rc a) (((<> Rc a) rc)) (out (<> Rc a)))
         (decl) (func (<> new Rc a Pure) ((a pointer)) (out (<> Rc a)))

         (define-class (Rc (<> Rc a))
           (= Keep (<> Keep Rc a)
            (a pointer)
            (size_t authority) ; who owns the pointer and is accounted
            (int * count)      ; shared variable between instances should be a pointer
            (func destructor ((a * pointer))))
           (free  (progn
                    (printf "destructuring Rc: %p\n" this)
                    (io this
                      (* _ pointer authority count destructor
                         (when (== (cast (size_t) this) authority)
                           (printf "destructuring authorized Rc: %p , %d\n" this (cof count))
                           (case (== (cof count) 1) (progn
                                                      (destructor (aof pointer))
                                                      (free count)
                                                      (free this))
                                 otherwise          (progn
                                                      (-- (cof count))
                                                      (free this)))))))))
         
         (func (<> deref Rc a) (((<> Rc a) rc))
               (out (<> Maybe a))
               (return
                 (match rc
                   (* _ pointer authority count destructor
                      (case (and (== (cast (size_t) rc) authority) (>= (cof count) 1)) ((<> Just a) pointer)
                            otherwise ((<> Nothing a))))
                   (default ((<> Nothing a))))))
               
         (func (<> clone Rc a) (((<> Rc a) rc))
               (out (<> Rc a))
               (return
                 (match rc
                   (* _ pointer authority count destructor
                      (case (== (cast (size_t) rc) authority)
                        (progn
                          (++ (cof count))
                          (letn ((auto cloned_rc . #'($> (<> Keep Rc a) pointer 0 count destructor)))
                            (set ($ (-> cloned_rc __h_data) Keep __h_1_mem) (cast (size_t) cloned_rc))
                            (io cloned_rc (* _ _ authority count
                                             (printf "inside Clone rc: %p, %zx, %d\n" cloned_rc authority (cof count))))
                            cloned_rc))
                        otherwise rc))
                   (default rc))))
         
         (func (<> new Rc a Pure) ((a pointer))
               (out (<> Rc a))
               (return
                 (letn ((auto count . #'(cast (int *) (malloc (sizeof int)))))
                   (set (cof count) 1)
                   (letn ((auto cloned_rc . #'($> (<> Keep Rc a) pointer 0 count (<> free a))))
                     (set ($ (-> cloned_rc __h_data) Keep __h_1_mem) (cast (size_t) cloned_rc))
                     (io cloned_rc (* _ _ authority count
                                      (printf "inside Ctor rc: %p, %zx, %d\n" cloned_rc authority (cof count))))
                     cloned_rc))))

         ) ; define-Rc

(generic import-Rc (a)

         ) ; define-Rc
