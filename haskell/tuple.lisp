
;; Tuple
;; (a, b, c)
;; use as variable type
;; (var (Tuple int char) tu . '{ 2 #\c })
(DEFMACRO Tuple (&REST elements)
  (LET ((members ()))
    (DOTIMES (i (LENGTH elements))
      (PUSH (LIST (NTH i elements) (make-data-h-member-name i)) members))
    `'{ ,@(REVERSE members) }))

;; helper for tuple passing by value
(DEFMACRO cast-tuple (type value)
  `(cast ,type (cof (cast (,type *) (aof ,value)))))
