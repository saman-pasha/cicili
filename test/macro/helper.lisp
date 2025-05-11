;;;; use these macros without namespace prefix
(IN-PACKAGE :CL-USER)

;;; init functions will be called per macro file when imported and receives import arguments
(DEFUN init (a-list)
  (FORMAT T "sample helper loaded at compile time: ~A~%" a-list))

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

;;; QUOTED cicili forms allow to compile source or header targets during loading macro file
'(header "charlist.h" (:std #f :compile #f :link #f)
  (struct CharList
    (member char arr [30]))

  (interface-string CharList
    (format file "inside string interface %.*s" 30 (-> this arr))))

'(source "charlist.c" (:std #t :compile #t :link "-o charlist -L{$CWD} -lcharlist.o")
  (include "charlist.h")
  
  (main
   (let ((CharList cl . '{ "CICILI INTERFACE MECHANISM\n" }))
     (-> cl toString stdout))))
   
;;; dynamic inclusion by macro
(DEFMACRO include-helpers-files ()
  `(include "charlist.h"))
