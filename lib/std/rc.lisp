;;;; Cicili std rc
(generic decl-rc
  (type a)

  (struct type
          (member uintptr_t ptr)
          (member size_t    adr))
  
  (inline)
  (func (<> free type) ((type * rc))
        (when (and (-> rc ptr) (== (cof (cast (size_t *) (-> rc ptr))) (-> rc adr))) ; liveness
          (syslog! (printf "FREE RC: %p %p %zx\n" (cof (cast (size_t **) (-> rc ptr))) (cast (void *) (-> rc ptr)) (-> rc adr)))
          (let ((size_t counter . (FUNCTION (cof (cast (size_t *) (+ (cast (uintptr_t *) (-> rc ptr)) 1))))))
            (syslog! (printf "FREE RC: counter: %zu\n" counter))
            (if (> counter 1)
                (-- (cof (cast (size_t *) (+ (cast (uintptr_t *) (-> rc ptr)) 1))))
                (when (== counter 1)
                  ((<> free a) (cof (cast (a **) (-> rc ptr))))
                  (free (cof (cast (void **) (-> rc ptr))))
                  (set (cof (cast (uintptr_t **) (-> rc ptr))) 0)
                  (free (cast (void *) (-> rc ptr)))
                  (set (-> rc ptr) 0))))))

  (inline)
  (func (<> force free a) ((a * obj))
        ((<> free a) obj))
  
  ) ; decl-rc


(generic import-rc
  (type a)
  
  ;; interior guard
  (DEFMACRO (<> free a) (obj)
    (ERROR (FORMAT NIL "shouldn't free an object where ordered to be used inside Rc: ~A" 'a)))
  
  
  (DEFMACRO (<> new type) (&REST args)
    (LET* ((args args)
           (ptr-name (GENSYM "tmp_ptr"))
           (dptr-name (GENSYM "tmp_rc_ptr")))
      `(letn ((a * ,ptr-name . (FUNCTION (malloc (sizeof a))))
              (uintptr_t * ,dptr-name . (FUNCTION (malloc (+ (sizeof uintptr_t) (sizeof size_t))))))
         (set (cof ,ptr-name) ((<> new a) ,@args))
         (set (cof ,dptr-name) (cast uintptr_t ,ptr-name))
         (set (cof (cast (size_t *) (+ ,dptr-name 1))) 1UL)
         (syslog! (printf "NEW RC: %p %zx %zx\n" ,ptr-name (cast uintptr_t ,dptr-name) (cof (cast (size_t *) ,dptr-name))))
         (cast type '{ (cast uintptr_t ,dptr-name) (cof (cast (size_t *) ,dptr-name)) }))))


  (DEFMACRO (<> clone type) (rc)
    (LET* ((rc rc)
           (rc-acc (GENSYM "acc_rc"))
           (rc-ptr (GENSYM "acc_rc_ptr")))
      `(letn ((type ,rc-acc . (FUNCTION ,rc))
              (a ** ,rc-ptr . (FUNCTION (cast (a **) ($ ,rc-acc ptr)))))
         (when (and ,rc-ptr (== (cof (cast (size_t *) ,rc-ptr)) ($ ,rc-acc adr)))
           (++ (cof (cast (size_t *) (+ (cast (uintptr_t *) ,rc-ptr) 1)))))
         ,rc-acc)))


  (DEFMACRO (<> let type) ((obj rc &OPTIONAL is-ptr) &REST body)
    (LET* ((ptrs obj)
           (is-ptr is-ptr)
           (obj (IF is-ptr rc ptrs))
           (rc (IF is-ptr `(FUNCTION ,is-ptr) `(FUNCTION ,rc)))
           (rc-acc (GENSYM "acc_rc"))
           (rc-ptr (GENSYM "acc_rc_ptr"))
           (obj-val (IF is-ptr `(FUNCTION (cof ,rc-ptr)) `(FUNCTION (cof (cof ,rc-ptr))))))
      (WHEN is-ptr
        (UNLESS (EQUAL ptrs '*)
          (ERROR (FORMAT NIL "rc let: pointer should be '* in ~A" (LIST ptrs obj rc is-ptr)))))
      `(let ((type ,rc-acc . ,rc)
             (a ** ,rc-ptr . (FUNCTION (cast (a **) ($ ,rc-acc ptr)))))
         (when (and ,rc-ptr (== (cof (cast (size_t *) ,rc-ptr)) ($ ,rc-acc adr)))
           (let ((auto ,obj . ,obj-val))
             ,@body)))))


  (DEFMACRO (<> letn type) ((obj rc default &OPTIONAL is-ptr) &REST body)
    (LET* ((ptrs obj)
           (is-ptr is-ptr)
           (obj (IF is-ptr rc ptrs))
           (rc (IF is-ptr `(FUNCTION ,default) `(FUNCTION ,rc)))
           (default (IF is-ptr is-ptr default))
           (rc-acc (GENSYM "acc_rc"))
           (rc-ptr (GENSYM "acc_rc_ptr"))
           (obj-val (IF is-ptr `(FUNCTION (cof ,rc-ptr)) `(FUNCTION (cof (cof ,rc-ptr))))))
      (WHEN is-ptr
        (UNLESS (EQUAL ptrs '*)
          (ERROR (FORMAT NIL "rc letn: pointer should be '* in ~A" (LIST ptrs obj rc default is-ptr)))))
      `(letn ((type ,rc-acc . ,rc)
              (a ** ,rc-ptr . (FUNCTION (cast (a **) ($ ,rc-acc ptr)))))
         (? (and ,rc-ptr (== (cof (cast (size_t *) ,rc-ptr)) ($ ,rc-acc adr)))
           (letn ((auto ,obj . ,obj-val))
             ,@body)
           ,default))))


  (DEFMACRO (<> take type) ((obj rc is-ptr) &REST body)
    (LET* ((ptrs obj)
           (is-ptr is-ptr)
           (obj (IF is-ptr rc ptrs))
           (rc (IF is-ptr `(FUNCTION ,is-ptr) `(FUNCTION ,rc)))
           (rc-acc (GENSYM "acc_rc"))
           (rc-ptr (GENSYM "acc_rc_ptr"))
           (obj-val (IF is-ptr `(FUNCTION (cof ,rc-ptr)) `(FUNCTION (cof (cof ,rc-ptr))))))
      (WHEN is-ptr
        (UNLESS (EQUAL ptrs '*)
          (ERROR (FORMAT NIL "rc take: pointer should be '* in ~A" (LIST ptrs obj rc is-ptr)))))
      `(let ((type ,rc-acc . ,rc)
             (a ** ,rc-ptr . (FUNCTION (cast (a **) ($ ,rc-acc ptr)))))
         (when (and ,rc-ptr (== (cof (cast (size_t *) ,rc-ptr)) ($ ,rc-acc adr))
                    (== (cof (cast (size_t *) (+ (cast (uintptr_t *) ($ ,rc-acc ptr)) 1))) 1))
           (let ((auto ,obj . ,obj-val))
             (syslog! (printf "TAKE RC: %zx %zx\n" (cof (cast (size_t *) ,rc-ptr)) ($ ,rc-acc adr)))
             (free (cast (void *) ($ ,rc-acc ptr)))
             (set ($ ,rc-acc ptr) 0)
             ,@body)))))
  

  (DEFMACRO (<> taken type) ((obj rc default is-ptr) &REST body)
    (LET* ((ptrs obj)
           (is-ptr is-ptr)
           (obj (IF is-ptr rc ptrs))
           (rc (IF is-ptr `(FUNCTION ,default) `(FUNCTION ,rc)))
           (default (IF is-ptr is-ptr default))
           (rc-acc (GENSYM "acc_rc"))
           (rc-ptr (GENSYM "acc_rc_ptr"))
           (obj-val (IF is-ptr `(FUNCTION (cof ,rc-ptr)) `(FUNCTION (cof (cof ,rc-ptr))))))
      (WHEN is-ptr
        (UNLESS (EQUAL ptrs '*)
          (ERROR (FORMAT NIL "rc taken: pointer should be '* in ~A" (LIST ptrs obj rc default is-ptr)))))
      `(letn ((type ,rc-acc . ,rc)
              (a ** ,rc-ptr . (FUNCTION (cast (a **) ($ ,rc-acc ptr)))))
         (? (and ,rc-ptr (== (cof (cast (size_t *) ,rc-ptr)) ($ ,rc-acc adr))
                 (== (cof (cast (size_t *) (+ (cast (uintptr_t *) ($ ,rc-acc ptr)) 1))) 1))
           (letn ((auto ,obj . ,obj-val))
             (syslog! (printf "TAKEN RC: %zx %zx\n" (cof (cast (size_t *) ,rc-ptr)) ($ ,rc-acc adr)))
             (free (cast (void *) ($ ,rc-acc ptr)))
             (set ($ ,rc-acc ptr) 0)
             ,@body)
           ,default))))
  
  ) ; import-rc
