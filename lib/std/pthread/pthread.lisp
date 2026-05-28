;;;; macors easing use of pthread in Cicili

;;; creates a new thread
;;; closure style pthread functionalities
;;; context has auto deferment
(DEFMACRO go* (tid var-list detach &REST body)
  (LET* ((cls (GENSYM "closure"))
         (body body)
         (out (IF (AND (LISTP (CAR body)) (EQL (CAAR body) 'out)) (LIST (CAR body)) (LIST))))
    (SETQ body (IF (NULL out) body (CDR body)))
    `(letn ((auto ,cls . #'(def-closure ,var-list
                             '(lambda () ,@out
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
  (LET* ((tid (GENSYM "thread")))
    `(go* ,tid ,var-list NIL ,@body)))

(DEFMACRO detach (var-list &REST body)
  (LET* ((tid (GENSYM "thread")))
    `(go* ,tid ,var-list T ,@body)))

(DEFMACRO self () `(pthread_self))

(DEFMACRO join (id &OPTIONAL out-type)
  (LET ((out out-type))
    (IF (NULL out)
        `(pthread_join ,id nil)
        (MULTIPLE-VALUE-BIND (const type modifier const-ptr variable array)
          (CICILI:SPECIFY-TYPE< out)
          `($$$ (var ,@out)
             (pthread_join ,id (cast (void **) (aof ,variable))))))))

;; to not be confused with "exit" program function
(DEFMACRO exit-self (ret-val)
  `(pthread_exit ,ret-val))

(DEFMACRO cancel (id)
  `(pthread_cancel ,id))


;;; Thread locking
(DEFMACRO define-mutex (mutex &KEY init)
  (IF init
      `(var pthread_mutex_t ,mutex . (FUNCTION PTHREAD_MUTEX_INITIALIZER))
      `(var pthread_mutex_t ,mutex)))

(DEFMACRO init-mutex-recursive (mutex)
  `(let ((pthread_mutexattr_t attr))
     (pthread_mutexattr_init (aof attr))
     (pthread_mutexattr_settype (aof attr) PTHREAD_MUTEX_RECURSIVE)
     (pthread_mutex_init ,mutex (aof attr))))

(DEFMACRO define-cond (cond)
  `(var pthread_cond_t ,cond (FUNCTION PTHREAD_COND_INITIALIZER)))

;;; NIL means free lock
(DEFMACRO lock (mutex &REST body)
  (LET ((mutex mutex))
    (IF mutex
        `(block (pthread_mutex_lock ,mutex)
           ,@body
           (pthread_mutex_unlock ,mutex))
        (LET ((lock-id (GENSYM "lock")))
          `(let ((pthread_mutex_t ,lock-id))
             (pthread_mutex_init (aof ,lock-id) nil) ; mutexattr
             (pthread_mutex_lock (aof ,lock-id))
             ,@body
             (pthread_mutex_unlock (aof ,lock-id))
             (pthread_mutex_destroy (aof ,lock-id)))))))

(DEFMACRO lockn (mutex &REST body)
  (LET ((mutex mutex))
    (IF mutex
        `(progn
           (pthread_mutex_lock ,mutex)
           (var auto lock_result . #'(progn ,@body))
           (pthread_mutex_unlock ,mutex)
           lock_result)
        (LET ((lock-id (GENSYM "lock")))
          `(letn ((pthread_mutex_t ,lock-id))
             (pthread_mutex_init (aof ,lock-id) nil) ; mutexattr
             (pthread_mutex_lock (aof ,lock-id))
             (var auto lock_result . #'(progn ,@body))
             (pthread_mutex_unlock (aof ,lock-id))
             (pthread_mutex_destroy (aof ,lock-id))
             lock_result)))))
