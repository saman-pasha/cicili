;;;; FILE like dynamic size stream

(generic decl-StringBuffer
  (a ; char or any buffer item
   is-const)

  (decl-data (StringBuffer (<> StringBuffer a))
    (= Buffered  (<> MakeStringBuffer a) `(IF is-const '(const a * buffer) '(a * buffer)) (size_t cursor) (size_t size) (size_t step))
    (= Freed     (<> FreedStringBuffer a))
    (func print  (((<> StringBuffer a) sb) (const a * data) (size_t len)) (out (<> StringBuffer a)))
    (func put    (((<> StringBuffer a) sb) (const a data)) (out (<> StringBuffer a)))
    (func copy   (((<> StringBuffer a) sb)) (out (<> StringBuffer a)))
    (func copySlice   (((<> StringBuffer a) sb) (size_t cursor) (size_t size)) (out (<> StringBuffer a)))
    (func newCapacity ((size_t capacity) (size_t step)) (out (<> StringBuffer a)))
    (func new    ((size_t step)) (out (<> StringBuffer a)))
    (func resize (((<> StringBuffer a) sb) (size_t size)) (out (<> StringBuffer a))))

  ) ; decl-StringBuffer

(generic impl-StringBuffer
  (a
   nullt
   is-const)

  ;; private constants
  ;; inside generic default atom values should set with ` or QUASIQUOTE
  (var bool (<> null_terminated (<> StringBuffer a)) . (QUASIQUOTE (IF nullt '#t '#f)))
  (var bool (<> is_constant (<> StringBuffer a)) . (QUASIQUOTE (IF is-const '#t '#f)))
  
  (impl-data (StringBuffer (<> StringBuffer a))
    (= Buffered (<> MakeStringBuffer a) `(IF is-const '(const a * buffer) '(a * buffer)) (size_t cursor) (size_t size) (size_t step))
    (= Freed    (<> FreedStringBuffer a))
    
    (func print (((<> StringBuffer a) sb) (const a * data) (size_t len))
          (out (<> StringBuffer a))
          `(IF is-const
               '(return ((<> FreedStringBuffer a)))
               '(return (match sb
                          (Buffered buffer cursor size step
                                    (letn ((size_t blen . #'(* len (sizeof a))))
                                      (when (< (- size cursor) len)
                                        (set size (* step (+ (/ (+ cursor len) step) 1)))
                                        (let ((a * new_buffer . #'(realloc buffer (* `(IF nullt '(+ size 1) 'size) (sizeof a)))))
                                          (set buffer new_buffer)))
                                      (memcpy (+ buffer cursor) data blen)
                                      `(WHEN nullt '(set (cof (+ buffer cursor len)) (cast a (cof (cast (a *) "\0")))))
                                      ((<> MakeStringBuffer a) buffer (+ cursor len) size step)))
                          (default ((<> FreedStringBuffer a)))))))

    (func put (((<> StringBuffer a) sb) (const a data))
          (out (<> StringBuffer a))
          (return ((<> print StringBuffer a) sb (aof data) 1)))
    
    (func copy (((<> StringBuffer a) sb))
          (out (<> StringBuffer a))
          `(IF is-const
               '(return (match sb
                          (Buffered buffer cursor ((<> MakeStringBuffer a) buffer cursor cursor 0))
                          (default ((<> FreedStringBuffer a)))))
               '(return (match sb
                          (Buffered buffer cursor size step
                                    (letn (((<> StringBuffer a) new_sb .
                                            #'((<> newCapacity StringBuffer a) size step)))
                                      ((<> print StringBuffer a) new_sb buffer cursor)))
                          (default ((<> FreedStringBuffer a)))))))
    
    (func copySlice (((<> StringBuffer a) sb) (size_t pos) (size_t len))
          (out (<> StringBuffer a))
          `(IF is-const
               '(return (match sb
                          (Buffered buffer cursor ((<> MakeStringBuffer a)
                                                   (case (<= (+ pos len) cursor) (+ buffer pos)
                                                         (<= pos cursor)         (+ buffer pos)
                                                         otherwise               (+ buffer cursor))
                                                   (case (<= (+ pos len) cursor) len
                                                         (<= pos cursor)         (- cursor pos)
                                                         otherwise               0)
                                                   (case (<= (+ pos len) cursor) len
                                                         (<= pos cursor)         (- cursor pos)
                                                         otherwise               0)
                                                   0))
                          (default ((<> FreedStringBuffer a)))))
               '(return (match sb
                          (Buffered buffer cursor _size step
                                    (letn (((<> StringBuffer a) new_sb .
                                            #'((<> newCapacity StringBuffer a) len step)))
                                      (case (<= (+ pos len) cursor)
                                            ((<> print StringBuffer a) new_sb (+ buffer pos) len)
                                            otherwise ((<> print StringBuffer a)
                                                       new_sb (+ buffer pos)
                                                       (case (<= pos cursor) (- cursor pos) otherwise 0)))))
                          (default ((<> FreedStringBuffer a)))))))

    (func newCapacity ((size_t capacity) (size_t step))
          (out (<> StringBuffer a))
          `(IF is-const
               '(return ((<> FreedStringBuffer a)))
               '(return (letn ((a * buffer . #'(malloc (* `(IF nullt '(+ capacity 1) 'capacity) (sizeof a))))
                               ((<> StringBuffer a) sb . #'((<> MakeStringBuffer a) buffer 0 capacity step)))
                          `(WHEN nullt '(set (cof buffer) (cast a (cof (cast (a *) "\0")))))
                          sb))))

    (func new ((size_t step))
          (out (<> StringBuffer a))
          (return ((<> newCapacity StringBuffer a) step step)))

    (func resize (((<> StringBuffer a) sb) (size_t len))
          (out (<> StringBuffer a))
          `(IF is-const
               '(return ((<> FreedStringBuffer a)))          
               '(return (match sb
                          (Buffered buffer cursor _size step
                                    (letn ((a * new_buffer . #'(realloc buffer (* `(IF nullt '(+ len 1) 'len)(sizeof a))))
                                           (size_t new_cursor . #'(? (< cursor len) cursor len)))
                                      `(WHEN nullt '(set (cof (+ new_buffer new_cursor)) (cast a (cof (cast (a *) "\0")))))
                                      ((<> MakeStringBuffer a) new_buffer new_cursor len step)))
                          (default ((<> FreedStringBuffer a)))))))
    
    (free `(UNLESS is-const
             '(io this
               (* Buffered buffer
                (block
                  (free buffer)
                  (set (cof this) ((<> FreedStringBuffer a))))))))
    
    ) ; impl-data

  ) ; impl-StringBuffer

(generic import-StringBuffer
  (a)

  ) ; import-StringBuffer
