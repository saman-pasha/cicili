;;;; FILE like dynamic size stream

(generic decl-StringBuffer
  (a) ; char or any buffer item

  (decl-data (StringBuffer (<> StringBuffer a))
    (= Bufferred      (<> MakeStringBuffer a)         (a * buffer) (int cursor) (int size) (int step))
    (= NullTerminated (<> MakeNullTerminatedBuffer a) (a * buffer) (int cursor) (int size) (int step))
    (= Freed          (<> FreedStringBuffer a))
    (func print (((<> StringBuffer a) sb) (a * data) (int len)) (out (<> StringBuffer a)))
    (func put   (((<> StringBuffer a) sb) (a data)) (out (<> StringBuffer a)))
    (func new   ((int step) (bool null_terminated)) (out (<> StringBuffer a))))

  ) ; decl-StringBuffer

(generic impl-StringBuffer
  (a)
  
  (impl-data (StringBuffer (<> StringBuffer a))
    (= Bufferred      (<> MakeStringBuffer a)         (a * buffer) (int cursor) (int size) (int step))
    (= NullTerminated (<> MakeNullTerminatedBuffer a) (a * buffer) (int cursor) (int size) (int step))
    (= Freed          (<> FreedStringBuffer a))
    
    (func print (((<> StringBuffer a) sb) (a * data) (int len))
          (out (<> StringBuffer a))
          (return (match sb
                    (Bufferred buffer cursor size step
                               (letn ((int blen . #'(* len (sizeof a))))
                                 (when (< (- size cursor) len)
                                   (set size (* step (+ (/ (+ cursor len) step) 1)))
                                   (let ((a * new_buffer . #'(realloc buffer (* size (sizeof a)))))
                                     (set buffer new_buffer)))
                                 (memcpy (+ buffer cursor) data blen)
                                 ((<> MakeStringBuffer a) buffer (+ cursor len) size step)))
                    (NullTerminated buffer cursor size step
                                    (letn ((int blen . #'(* len (sizeof a))))
                                      (when (< (- size cursor) len)
                                        (set size (* step (+ (/ (+ cursor len) step) 1)))
                                        (let ((a * new_buffer . #'(realloc buffer (* (+ size 1) (sizeof a)))))
                                          (set buffer new_buffer)))
                                      (memcpy (+ buffer cursor) data blen)
                                      (set (cof (+ buffer cursor len)) (cast a #\Null))
                                      ((<> MakeNullTerminatedBuffer a) buffer (+ cursor len) size step)))
                    (default ((<> FreedStringBuffer a))))))

    (func put (((<> StringBuffer a) sb) (a data))
          (out (<> StringBuffer a))
          (return ((<> print StringBuffer a) sb (aof data) 1)))
    
    (func new ((int step) (bool null_terminated))
          (out (<> StringBuffer a))
          (return (case null_terminated
                        (letn ((a * buffer . #'(malloc (* (+ step 1) (sizeof a))))
                               ((<> StringBuffer a) sb . #'((<> MakeNullTerminatedBuffer a) buffer 0 step step)))
                          (set (cof buffer) (cast a #\Null))
                          sb)
                        otherwise
                        (letn ((a * buffer . #'(malloc (* step (sizeof a))))
                               ((<> StringBuffer a) sb . #'((<> MakeStringBuffer a) buffer 0 step step)))
                          sb))))
    
    (free (io this
            (* Bufferred ~ NullTerminated buffer
               (block
                 (free buffer)
                 (set (cof this) ((<> FreedStringBuffer a)))))))
    
    ) ; impl-data

  ) ; impl-StringBuffer
