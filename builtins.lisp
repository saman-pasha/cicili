;;;; main simple form
(DEFMACRO main (&REST body)
  `(func main () (out int) ,@body))

(DEFMACRO when (cond &REST body)
  `(if ,cond (block ,@body)))

(DEFMACRO unless (cond &REST body)
  `(if (not ,cond) (block ,@body)))

;;;; loops over any indexable structures in C for each item []
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
