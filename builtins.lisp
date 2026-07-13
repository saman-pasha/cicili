;;;; builtins includes many useful macros for cicili

(DEFUN import (file-name &OPTIONAL pack init-args)
  (CICILI:LOAD-MACRO-FILE file-name pack init-args (OR *LOAD-TRUENAME* *COMPILE-FILE-TRUENAME*)))

(DEFMACRO make (&KEY (std '#f) (cpp '#f) (haskell '#f) (compile '#f) (link '#f))
  (LET ((std std)
        (cpp cpp)
        (compile compile)
        (link link))
    `(,@(IF std (LIST ':std std) (LIST '#f))
        ,@(IF std (LIST ':cpp cpp) (LIST '#f))
        ,@(IF haskell (LIST ':haskell haskell) (LIST '#f))
        ,@(IF compile (LIST ':compile compile) (LIST '#f))
        ,@(IF link (LIST ':link link) (LIST '#f)))))

;;; main simple forms
(DEFMACRO main (&REST body)
  `(func main () (out int) ,@body))

(DEFMACRO main* (&REST body)
  `(func main ((int argc) (char * argv [])) (out int) ,@body))

;; 4 levels debugging facility
(DEFMACRO syslog! (&REST body)
  (IF (> CICILI::*DEBUG-WARNINGS* 3)
      `(progn ,@body)
      `($$$ )))

;; 3 levels debugging facility
(DEFMACRO debug! (&REST body)
  (IF (> CICILI::*DEBUG-WARNINGS* 2)
      `(progn ,@body)
      `($$$ )))

(DEFMACRO warn! (&REST body)
  (IF (> CICILI::*DEBUG-WARNINGS* 1)
      `(progn ,@body)
      `($$$ )))

(DEFMACRO info! (&REST body)
  (IF (> CICILI::*DEBUG-WARNINGS* 0)
      `(progn ,@body)
      `($$$ )))

;; prints everythings to stderr instead of stdout temporary
(DEFMACRO error! (&REST body)
  `(letn ((auto tmp_stdout . stdout))
     (set stdout stderr)
     ,@body
     (set stdout tmp_stdout)))

(DEFMACRO analyze! (name pointer)
  (IF (AND CICILI::*DEBUG-ANALYZE*
        (NOT (STR:CONTAINSP"__h_StackItem" (SYMBOL-NAME name))))
      `(__h_stack_push ,pointer)
      pointer))

(DEFMACRO analyze-data! (&REST body)
  (IF CICILI::*DEBUG-ANALYZE*
      `(let ((char * __h_stack_buffer . #'(calloc 2048 (sizeof char)))
             (CFile __h_stack_out . #'(fmemopen __h_stack_buffer 2048 "w+")))
         ,@body
         (fclose __h_stack_out)
         (__h_stack_push_data __h_stack_buffer)
         (__h_stack_push_separator))
      `($$$ )))

(DEFMACRO <> (&REST body)
  (INTERN (FORMAT NIL "~{~A~^^~}"
                  (MAPCAR #'(LAMBDA (reso)
                              (IF (SYMBOLP reso)
                                  reso
                                  (MACROEXPAND reso)))
                          body))))

;; ;; accepts all variables if the 3rd argument specified, will use it as destructor
;; (DEFMACRO letin* (var-list &REST body)
;;   `(letn ,(APPLY 'APPEND
;;                  (MAP 'LIST #'(LAMBDA (var)
;;                                 (WHEN (OR (< (LENGTH var) 2) (> (LENGTH var) 3))
;;                                   (ERROR (FORMAT NIL "wrong letin* variable definition: ~A" var)))
;;                                 (IF (= (LENGTH var) 2)
;;                                     `((auto ,(CAR var) . (FUNCTION ,(CADR var))))
;;                                     `((defer () ,(CADDR var)) (auto ,(CAR var) . (FUNCTION ,(CADR var))))))
;;                       var-list))
;;      ,@body))

;; accepts all variables inferene type to find destructor
(DEFMACRO letin (var-list &REST body)
  `(letn ,(APPLY 'APPEND
                 (MAP 'LIST #'(LAMBDA (var)
                                (WHEN (/= (LENGTH var) 2)
                                  (ERROR (FORMAT NIL "wrong letin variable definition: ~A" var)))
                                (LET ((type (CICILI:INFER-TYPE (CADR var))))
                                  (WHEN (> (LENGTH type) 1) (ERROR (FORMAT NIL "letin gets invalid type ~A for~%  ~A" type var)))
                                  `((defer () (<> free ,@type)) (,@type ,(CAR var) . (FUNCTION ,(CADR var))))))
                      var-list))
     ,@body))

(DEFMACRO generic (macro types &REST body)
  `(DEFMACRO ,macro (&REST args)
     (LET ((types ',types)
           (body ',body))
       (UNLESS (= (LENGTH args) (LENGTH types))
         (ERROR (FORMAT NIL "unmatch generic parameters and arguments: ~A ~A" (QUOTE ,macro) args)))
       (DOTIMES (i (LENGTH types))
         (LET ((arg (NTH i args)))
           (SETQ body (SUBST (IF (AND (LISTP arg) (EQUAL (CAR arg) '<>)) (MACROEXPAND arg) arg)
                        (NTH i types) body))))
       `($$$ ,@body)))) ; $$$ for replace extracted

(DEFMACRO inline-generic (args body)
  (LET ((body body))
    (DOLIST (arg args)
      (LET ((dst (CAR arg))
            (src (CADR arg)))
        (SETQ body (SUBST (IF (AND (LISTP src) (EQUAL (CAR src) '<>)) (MACROEXPAND src) src) dst body))))
    body))

(DEFMACRO shared-func-name (struct method)
  (INTERN (FORMAT NIL "~A_s_~A" struct method)))

(DEFMACRO method-func-name (struct method)
  (INTERN (FORMAT NIL "~A_m_~A" struct method)))

(DEFMACRO constant (a const_val)
  (LET ((a a))
    `('(lambda ()
        (out const ,a * const)
        (static) (var const ,a constant_value . (FUNCTION ,const_val)) 
        (return (aof constant_value))))))

;;; each struct which implements string can write itself to a FILE *
;;; notice inline methods won't be resolved and -> is point to, not method access
(DEFMACRO IString (struct)
  `((decl) (method (,struct . toString) ((FILE * file)))))

;;; use format lisp clause insted of printf
;;; f  FILE *
;;; #t short for stdout
;;; #f short for stderr
(DEFMACRO format (f fmt &REST args)
  (COND ((EQ f '#t) (SETQ f 'stdout))
        ((EQ f '#f) (SETQ f 'stderr)))
  `(fprintf ,f ,fmt ,@args))

(DEFMACRO when (cond &REST body)
  `(if ,cond (block ,@body)))

(DEFMACRO unless (cond &REST body)
  `(if (not ,cond) (block ,@body)))

;;; loops over any indexable structures in C for each item []
;; name of counter variable
;; name of iterator pointer
;; array to be traveresed or pointer to its one of items
;; length of array or count of loop should go through
;; what to do each turn
(DEFMACRO for-each (counter item array length &REST body)
  `(let (((typeof (nth 0 ,array)) * ,item . ,(IF (LISTP array) `(FUNCTION ,array) array)))
     (for ((int ,counter . 0))
       (< ,counter ,length)
       ((++ ,item)
        (++ ,counter))
       ,@body)))

;;; loops over any indexable constant structures in C for each item []
;; name of counter variable
;; name of iterator pointer
;; array to be traveresed or pointer to its one of items
;; length of array or count of loop should go through
;; what to do each turn
(DEFMACRO for-each-const (counter item array length &REST body)
  `(let ((const (typeof (nth 0 ,array)) * ,item . ,(IF (LISTP array) `(FUNCTION ,array) array)))
     (for ((int ,counter . 0))
       (< ,counter ,length)
       ((++ ,item)
        (++ ,counter))
       ,@body)))

;;; defers execution at end of current scope
;;; var list is lamda parameters and works to get and store this values or pointers to use in defer execution
;;; usage:
;;; (defer* ((FILE * file) (char * message))
;;;   (format file "%s\n" message)
;;;   (fclose file))
(DEFMACRO defer* (var-list &REST body)
  (LET* ((name (GENSYM "ciciliDefer"))
         (pname (INTERN (FORMAT NIL "~A_ptr" name))))
    `($$$
       (defer ()
         ,@(MAP 'LIST #'(LAMBDA (var)
                          (MULTIPLE-VALUE-BIND (const type modifier const-ptr variable array-def)
                              (CICILI:SPECIFY-TYPE< var)
                            `(var ,@var . (FUNCTION (-> ,pname ,variable)))))
                var-list)
         ,@body)
       (var '(,@var-list) ,name . 
            '(,@(MAP 'LIST #'(LAMBDA (var)
                               (MULTIPLE-VALUE-BIND (const type modifier const-ptr variable array-def)
                                   (CICILI:SPECIFY-TYPE< var)
                                 variable))
                     var-list))))))

;;; copies capture list to context, use pointer to keep access to context along the process
;;; don't free pointers copied into context if the closure is alive
;;; (def-closure (capture list)
;;;     '(lambda (parameter list)
;;;         body))
(DEFMACRO def-closure (var-list lambda)
  (LET* ((captures (MAP 'LIST #'(LAMBDA (var) (MULTIPLE-VALUE-LIST (CICILI:SPECIFY-TYPE-VALUE< var))) var-list))
         (sname    (GENSYM "__ciciliC_Context_"))
         (lname    (GENSYM "__ciciliC_Routine_"))
         (values   (MAP 'LIST #'(LAMBDA (var1)
                                  (DESTRUCTURING-BIND (const type modifier const-ptr variable array-def default) var1
                                    (IF (NULL default) variable default)))
                        captures))
         (vars     (MAP 'LIST #'(LAMBDA (var2)
                                  (DESTRUCTURING-BIND (const type modifier const-ptr variable array-def default) var2
                                    `(var ,@(REMOVE NIL (LIST const type modifier const-ptr variable array-def)) .
                                          (FUNCTION ($ (-> context context) ,variable)))))
                        captures))
         (members  (MAP 'LIST #'(LAMBDA (var3)
                                  (DESTRUCTURING-BIND (const type modifier const-ptr variable array-def default) var3
                                    `(member ,@(REMOVE NIL (LIST const type modifier const-ptr variable array-def)))))
                        captures))
         (body     (LET ((lm (CADR lambda)))
                     (IF (EQL (CAADDR lm) 'out)
                         (APPEND (LIST (CADDR lm)) vars (CDDDR lm))
                         (APPEND vars (CDDR lm))))))
    `'(def-closure* (struct ,sname
                            (member func routine (((struct ,sname) * context) ,@(CADADR lambda))
                                    ,(IF (EQL (CAR (CAR body)) 'out) (CAR body) (LIST 'out 'void)))
                            (struct ,@members (declare context)))
       (cast (struct ,sname) '{ '(lambda* (<> ,sname ,lname)
                                  (((struct ,sname) * context) ,@(CADADR lambda)) ,@body)
             '{ ,@values } }))))

;; way to execute closure routine
(DEFMACRO exec-closure (closure &REST args)
  `((($ ,closure routine) (aof ,closure) ,@args)))

;;; asycronous clauses
;;; declare a handle in a header for global access or
;;; define over main entry by async-main | async-main*
(DEFMACRO async-handle-decl ()
  `((static) (thread-local)
    (var Coordinator __ciciliA_Coordinator_)))

(DEFMACRO async-handle-def ()
  `((static) (thread-local)
    (var Coordinator __ciciliA_Coordinator_ . '{ nil nil #f })))

(DEFMACRO async-main (&REST body)
  `((async-handle-def)
    (main ,@body
          (-> __ciciliA_Coordinator_ loop))))

(DEFMACRO async-main* (&REST body)
  `((async-handle-def)
    (main* ,@body
           (-> __ciciliA_Coordinator_ loop))))

;;; non-local exits: done, yield, error
;;; done calls done_callback and returns from function
;;; yield calls done_callback without returning
;;; error calls error_callback and returns
(DEFMACRO async (var-list &REST body)
  (LET ((cls  (GENSYM "cls"))
        (name (GENSYM "task"))
        (body body))
    
    `(macrolet ((yield (callback &REST args)
                  `(block
                     (,callback ,@args)
                     (longjmp ($ __ciciliA_Coordinator_ main) -1)))
                (done (callback &REST args)
                  `(block
                     (,callback ,@args)
                     (return 0)))
                (error (callback &REST args)
                  `(block
                     (,callback ,@args)
                     (return 0)))
                )

       (letn ((Coroutine * ,name . #'(malloc (sizeof Coroutine)))
              (auto ,cls . #'(def-closure ,var-list
                               '(lambda ((Coroutine * __ciciliA_Context_)) (out int)
                                 (defer* ((void * context))
                                   (free context))
                                 ,@body
                                 (longjmp ($ __ciciliA_Coordinator_ main) -1))))
              (void * data . #'(malloc (sizeof ,cls))))
         (memcpy data (aof ,cls) (sizeof ,cls))
         (set (-> ,name status)  0)
         (set (-> ,name args)    data)
         (set (-> ,name routine) (cast (func _ ((void * args) (Coroutine * coroutine)) (out int)) ($ ,cls routine)))
         (set (-> ,name next)    nil)
         (-> __ciciliA_Coordinator_ reg_task ,name)))))

;;; optional helper macro will auto defer all vars
(DEFMACRO defer-let (var-list &REST body)
  `(block ,@(MAP 'LIST #'(LAMBDA (var)
                           `((defer #t) (var ,@var)))
                 var-list)
          ,@body))

;;; list should have a len member
(DEFMACRO dolist (vars &REST body)
  (LET ((var     (FIRST  vars))
        (list    (SECOND vars))
        (array   (GENSYM "ciciliArr"))
        (len     (GENSYM "ciciliLen"))
        (counter (GENSYM "ciciliCounter")))
    `(let ((auto ,array . ,(IF (LISTP list) `(FUNCTION ,list) list))
           ((typeof (nth 0 ,array)) * ,var . ,array)
           (size_t ,len . #'($ ,array len)))
       (for ((int ,counter . 0))
         (< ,counter ,len)
         ((++ ,var)
          (++ ,counter))
         ,@body))))

(DEFMACRO dotimes (vars &REST body)
  (LET ((var   (CAR  vars))
        (count (CADR vars)))
    `(for ((int ,var . 0))
       (< ,var ,count)
       ((++ ,var))
       ,@body)))

(DEFMACRO null (value)
  `(== ,value nil))

;; compile-time symbol to C "constant string"
(DEFMACRO symbol-name (symb)
  (LET ((symb (CICILI::EXPAND-MACROS symb)))
    (IF (LISTP symb)
        (LET ((symbs (STR:JOIN " " (MAP 'LIST #'(LAMBDA (psymb) (SUBSTITUTE #\_ #\^ (SYMBOL-NAME psymb))) symb))))
          `,symbs)
        `(QUASIQUOTE (SUBSTITUTE #\_ #\^ (SYMBOL-NAME ',symb))))))

(DEFUN find-subseq (itm lst &OPTIONAL &KEY (test #'EQUAL))
  (DO* ((lst (CDR lst) (CDR lst))
        (elm (CAR lst) (IF (LISTP lst) (CAR lst) lst)))
       ((OR (ATOM lst) (NULL elm)) (FUNCALL test itm elm))
    (IF (LISTP elm)
        (LET ((res (find-subseq itm elm :test test)))
          (IF res (RETURN-FROM find-subseq T) NIL))
        (WHEN (FUNCALL test itm elm)
          (RETURN-FROM find-subseq T)))))

(DEFMACRO closure ((name &REST captures) &REST body)
  (LET ((captures captures)
        (params (LOOP FOR (param value) ON captures BY #'CDDR
                      COLLECT (CICILI:INFER-TYPE value :WITH-NAME param)))
        (args (LOOP FOR (_ value) ON captures BY #'CDDR COLLECT value)))
    `('(lambda* ,name ,params ,@body) ,@args)))
