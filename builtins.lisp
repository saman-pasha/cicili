;;;; builtins includes many useful macros for cicili

(DEFUN import (file-name &OPTIONAL pack init-args)
  (CICILI:LOAD-MACRO-FILE file-name pack init-args))

;;; main simple forms
(DEFMACRO main (&REST body)
  `(func main () (out int) ,@body))

(DEFMACRO main* (&REST body)
  `(func main ((int argc) (char * argv [])) (out int) ,@body))

(DEFMACRO generic (macro types &REST body)
  `(DEFMACRO ,macro (&REST args)
     (LET ((types ',types)
           (body (COPY-LIST ',body)))
       (DOTIMES (i (LENGTH args))
         (SETQ body (SUBST (NTH i args) (NTH i types) body)))
       `(ghost ,@body))))

(DEFMACRO shared-func-name (struct method)
  (INTERN (FORMAT NIL "~A_s_~A" struct method)))

(DEFMACRO method-func-name (struct method)
  (INTERN (FORMAT NIL "~A_m_~A" struct method)))

(DEFMACRO <> (name &REST body)
  (INTERN (FORMAT NIL "~A_~{~A~}" name body)))

;;; each struct which implements string can write itself to a FILE *
;;; notice inline methods won't be resolved and -> is point to, not method access
(DEFMACRO IString (struct)
  `(ghost (decl) (method (,struct . toString) ((FILE * file)))))

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
(DEFMACRO for-each (counter      ; name of counter variable
                    item         ; name of iterator pointer
                    array        ; array to be traveresed or pointer to its one of items
                    length       ; length of array or count of loop should go through
                    &REST body)  ; what to do each turn
  `(let (((typeof (nth 0 ,array)) * ,item . ,(IF (LISTP array) `(FUNCTION ,array) array)))
     (for ((int ,counter . 0))
       (< ,counter ,length)
       ((++ ,item)
        (++ ,counter))
       ,@body)))

;;; loops over any indexable constant structures in C for each item []
(DEFMACRO for-each-const (counter      ; name of counter variable
                          item         ; name of iterator pointer
                          array        ; array to be traveresed or pointer to its one of items
                          length       ; length of array or count of loop should go through
                          &REST body)  ; what to do each turn
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
    `(ghost
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
;;; (closure (capture list)
;;;     '(lambda (parameter list)
;;;         body))
(DEFMACRO closure (var-list lambda)
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
    `'(closure* (struct ,sname
                  (member func routine (((struct ,sname) * context) ,@(CADADR lambda))
                          ,(IF (EQL (CAR (CAR body)) 'out) (CAR body) (LIST 'out 'void)))
                  (struct ,@members (declare context)))
       (cast (struct ,sname) '{ '(lambda* (,sname . ,lname)
                                  (((struct ,sname) * context) ,@(CADADR lambda)) ,@body)
             '{ ,@values } }))))

;;; way to execute closure routine
(DEFMACRO exec (closure &REST args)
  `(($ ,closure routine) (aof ,closure) ,@args))

;;; asycronous clauses
;;; define in a header for global access
;;; declare over main entry
(DEFMACRO async-handle ()
  `(var jmp_buf __ciciliAsync_main)) 

(DEFMACRO async-main (&REST body)
  `(main ,@body))

(DEFMACRO async-main* (&REST body)
  `(main* ,@body))

;; (DEFMACRO async ()
;;   `(if (setjpm __ciciliAsync_main
;;; optional helper macro will auto defer all vars
(DEFMACRO defer-let (var-list &REST body)
  `(block ,@(MAP 'LIST #'(LAMBDA (var)
                            `(ghost (defer #t) (var ,@var)))
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
