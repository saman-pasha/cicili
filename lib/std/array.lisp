;;;; Cicili std array
;;; contigous memory allocation
;;; most minimal performant indexable array
(generic decl-array
  (type a)

  (struct type
          (member a *    arr)
          (member size_t len))

  (typedef a (<> type item_t))

  (inline)
  (func (<> free type) ((type * array))
        (syslog! (printf "FREE ARR: %p\n" (-> array arr)))
        (free (-> array arr))
        (set (-> array arr) 0))

  ) ; decl-array

(DEFMACRO free^array (array)
  (LET ((array array)
        (type (CICILI:INFER-TYPE array)))
    (WHEN (> (LENGTH type) 1) (ERROR (FORMAT NIL "free array gets invalid type ~A for ~A" type array)))
    `((<> free ,type (aof ,array)))))

(DEFMACRO new^array (arr &OPTIONAL len)
  (LET* ((arr arr)
         (type (CICILI:INFER-TYPE arr))
         (elem (IF (AND (= (LENGTH type) 2) (EQL (CADR type) '*))
                   (CAR type)
                   (IF (AND (= (LENGTH type) 3) (EQL (CAR type) 'const) (EQL (CADDR type) '*))
                       (CADR type)
                       (ERROR (FORMAT NIL "new array gets invalid type ~A of ~A" type arr)))))
         (len (IF len len
                  (LET ((value (IF (EQL (CAR arr) 'cast) (CADDR arr) NIL)))
                    (IF (AND value (LISTP value) (EQUAL (CAR value) 'QUOTE))
                        (LENGTH (CADR value))
                        (ERROR (FORMAT NIL "new array can't infer length ~A" arr)))))))
    (IF len
        `('(lambda* (<> new array ,elem ,(GENSYM)) ((const size_t len))
            (out (<> array ,elem))
            (return (letn ((,elem * new_arr .  #'(calloc len (sizeof ,elem))))
                      (syslog! (printf "NEW ARR: %s %p %zu\n" (symbol-name type) new_arr len))
                      (memcpy new_arr ,arr (* len (sizeof ,elem)))
                      (cast (<> array ,elem) '{ new_arr len }))))
           ,len)
        (ERROR (FORMAT NIL "new^~A len required for dynamic array input: ~A" (symbol-name type) arr)))))

(DEFMACRO len^array (array)
  `($ ,array len))

(DEFMACRO nth^array (index array &KEY unchecked default)
  (LET ((index index)
        (array array)
        (type (CICILI:INFER-TYPE array))
        (unchecked unchecked)
        (default default))
    (WHEN (> (LENGTH type) 1) (ERROR (FORMAT NIL "nth of array gets invalid type ~A for ~A" type array)))
    (WHEN (AND (NULL unchecked) (NULL default)) (ERROR (FORMAT NIL "checked nth of array needs default value ~A" array)))
    (IF unchecked
        `(nth ,index ($ ,array arr))
        `('(lambda* (<> nth ,@type ,(GENSYM)) ((const size_t index) (const ,@type * array))
            (out (<> ,@type item_t))
            (return (? (< index (-> array len))
                      (nth index (-> array arr))
                      ,default)))
           ,index (aof ,array)))))

(DEFMACRO let^array ((arr len array) &REST body)
  (LET* ((array array)
         (type (CICILI:INFER-TYPE array))
         (arr-name (GENSYM "acc_arr")))
    (WHEN (> (LENGTH type) 1) (ERROR (FORMAT NIL "let array gets invalid type ~A for ~A" type array)))
    `(let ((,@type ,arr-name . (FUNCTION ,array))
           ((<> ,@type item_t) * ,arr . (FUNCTION ($ ,arr-name arr)))
           (size_t ,len . (FUNCTION ($ ,arr-name len))))
       ,@body)))

(DEFMACRO letn^array ((arr len array) &REST body)
  (LET* ((array array)
         (type (CICILI:INFER-TYPE array))
         (arr-name (GENSYM "acc_arr")))
    (WHEN (> (LENGTH type) 1) (ERROR (FORMAT NIL "let array gets invalid type ~A for ~A" type array)))
    `(letn ((,@type ,arr-name . (FUNCTION ,array))
            ((<> ,@type item_t) * ,arr . (FUNCTION ($ ,arr-name arr)))
            (size_t ,len . (FUNCTION ($ ,arr-name len))))
       ,@body)))
