;;;; builtins includes many useful macros for cicili

;;; main simple form
(DEFMACRO main (&REST body)
  `(func main () (out int) ,@body))

;;; default char buffer for format out char * use nil as fd
(DEFVAR +FORMAT-STRING-DEFAULT-BUFFER-SIZE+ 1024)
;;; use format lisp clause insted of printf
;;; fd file descriptor
;;; #t short for stdout
;;; #t short for stderr
(DEFMACRO format (fd fmt &REST args)
  (COND ((EQ fd '#t) (SETQ fd 'stdout))
        ((EQ fd '#f) (SETQ fd 'stderr)))
  `(fprintf ,fd ,fmt ,@args))

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

;;;; loops over any indexable constant structures in C for each item []
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
