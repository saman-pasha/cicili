;;;; FILE like dynamic size stream

(generic decl-StringBuffer
  (a) ; char or any buffer item

  (decl-data (StringBuffer (<> StringBuffer a))
    (= Bufferred (<> MakeStringBuffer a) (a * buffer) (int cursor) (int size) (int step))
    (= Freed     (<> FreedStringBuffer a))
    (func print (((<> StringBuffer a) sb) (a * data) (int len)) (out (<> StringBuffer a)))
    (func put   (((<> StringBuffer a) sb) (a data)) (out (<> StringBuffer a)))
    (func new   ((int size)) (out (<> StringBuffer a))))

  ) ; decl-StringBuffer

(generic impl-StringBuffer
  (a)
  
  (impl-data (StringBuffer (<> StringBuffer a))
    (= Bufferred (<> MakeStringBuffer a) (a * buffer) (int cursor) (int size) (int step))
    (= Freed     (<> FreedStringBuffer a))
    
    (func print (((<> StringBuffer a) sb) (a * data) (int len))
          (out (<> StringBuffer a))
          (return (match sb
                    (Bufferred buffer cursor size step
                       (progn
                         (when (< (- size cursor) len)
                           (set size (+ (* step (+ (/ (+ cursor len) step) 1)) 1))
                           (let ((a * new_buffer . #'(calloc size (sizeof a))))
                             (memcpy new_buffer buffer cursor)
                             (free buffer)
                             (set buffer new_buffer)))
                         (memcpy (+ buffer cursor) data len)
                         (set (cof (+ buffer cursor len 1)) #\Null)
                         ((<> MakeStringBuffer a) buffer (+ cursor len) size step)))
                    (default ((<> FreedStringBuffer a))))))

    (func put (((<> StringBuffer a) sb) (a data))
          (out (<> StringBuffer a))
          (return ((<> print StringBuffer char) sb (aof data) 1)))
    
    (func new ((int step))
          (out (<> StringBuffer a))
          (return ((<> MakeStringBuffer a) (calloc (+ step 1) (sizeof a)) 0 step step)))
    
    (free (io this
            (* Bufferred buffer (block (free buffer)
                                  (set (cof this) ((<> FreedStringBuffer a)))))))
                    
    ) ; impl-data

  ) ; impl-StringBuffer
