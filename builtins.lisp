;;;; builtins includes many useful macros for cicili

;;; main simple forms
(DEFMACRO main (&REST body)
  `(func main () (out int) ,@body))

(DEFMACRO main* (&REST body)
  `(func main ((int argc) (char * argv [])) (out int) ,@body))

(DEFUN make-method-name (struct method)
  (INTERN (FORMAT NIL "~A->~A" struct method)))

;;; each struct which implements string can write itself to a FILE *
;;; notice inline methods won't be resolved and -> is point to, not method access
(DEFMACRO interface-string (struct &REST body)
  `{inline} `(method ,(make-method-name struct 'toString) ((FILE * file)) ,@body))

;;; default char buffer for format out char * use nil as fd
(DEFVAR +FORMAT-STRING-DEFAULT-BUFFER-SIZE+ 1024)
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
  (UNLESS (AND (SYMBOLP counter)
            (SYMBOLP item)
            (SYMBOLP array)
            (NUMBERP length))
    (ERROR (FORMAT T "for-each invalid input: ~A ~A ~A ~A~%" counter item array length)))
  `(let (((typeof (nth 0 ,array)) * ,item . ,array))
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
  (UNLESS (AND (SYMBOLP counter)
            (SYMBOLP item)
            (SYMBOLP array)
            (NUMBERP length))
    (ERROR (FORMAT T "for-each invalid input: ~A ~A ~A ~A~%" counter item array length)))
  `(let ((const (typeof (nth 0 ,array)) * ,item . ,array))
     (for ((int ,counter . 0))
       (< ,counter ,length)
       ((++ ,item)
        (++ ,counter))
       ,@body)))

;;; defers execution at end of current scope
;;; var list is lamda parameters and works to get and store this values or pointers to use in defer execution
;;; usage:
;;; (defer ((FILE * file) (char * message))
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
                              `(var ,@var . (FUNCTION ($ ,pname ,variable)))))
                  var-list)
           ,@body) 
       (var '(,@var-list) ,name . 
            '(,@(MAP 'LIST #'(LAMBDA (var)
                                    (MULTIPLE-VALUE-BIND (const type modifier const-ptr variable array-def)
                                        (CICILI:SPECIFY-TYPE< var)
                                      variable))
                          var-list))))))
