(IN-PACKAGE :CL-USER)

;;;; init functions will be called per macro file when imported and receives import arguments
(DEFUN init (a-list)
  (FORMAT T "sample helper loaded at compile time: ~A~%" a-list))

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
