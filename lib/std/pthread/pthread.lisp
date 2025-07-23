;;;; macors easing use of pthread in Cicili

;;; creates a new thread
;;; closure style pthread functionalities
;;; context has auto deferment
(DEFMACRO go* (tid var-list detach &REST body)
  (LET* ((cls (GENSYM "cls"))
         (body body)
         (out (IF (AND (LISTP (CAR body)) (EQL (CAAR body) 'out)) (LIST (CAR body)) (LIST))))
    (SETQ body (IF (NULL out) body (CDR body)))
    `(letn ((auto ,cls . #'(closure ,var-list '(lambda () ,@out
                                                (defer* ((void * context))
                                                  (free context))
                                                ,@body)))
            (void * data . #'(malloc (sizeof ,cls)))
            (pthread_t ,tid))
       (memcpy data (aof ,cls) (sizeof ,cls))
       (pthread_create (aof ,tid) nil
                       (cast (func _ ((void * _)) (out void *)) ($ ,cls routine))
                       data)
       ,(WHEN detach `(pthread_detach ,tid))
       ,tid)))

(DEFMACRO go (var-list &REST body)
  (LET* ((tid (GENSYM "tid")))
    `(go* ,tid ,var-list NIL ,@body)))

(DEFMACRO detach (var-list &REST body)
  (LET* ((tid (GENSYM "tid")))
    `(go* ,tid ,var-list T ,@body)))

(DEFMACRO self () `(pthread_self))

(DEFMACRO join (id &OPTIONAL out-type)
  (LET ((out out-type))
    (IF (NULL out)
        `(pthread_join ,id nil)
        (MULTIPLE-VALUE-BIND (const type modifier const-ptr variable array)
          (CICILI:SPECIFY-TYPE< out)
          `((var ,@out)
            (pthread_join ,id (cast (void **) (aof ,variable))))))))

(DEFMACRO exit (ret-val)
  `(pthread_exit ,ret-val))

(DEFMACRO cancel (id)
  `(pthread_cancel ,id))
