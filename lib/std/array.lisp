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
    (WHEN (OR (/= (LENGTH type) 2) (NOT (EQL (CADR type) '*))) (ERROR (FORMAT NIL "free array got invalid type ~A for ~A" type array)))
    `((<> free ,(CAR type)) ,array)))

(DEFMACRO new^array (arr &OPTIONAL len)
  (LET* ((arr arr)
         (type (CICILI:INFER-TYPE arr))
         (elem (IF (AND (= (LENGTH type) 2) (EQL (NTH 1 type) '*))
                   (CAR type)
                   (IF (AND (= (LENGTH type) 3) (EQL (CAR type) 'const) (EQL (NTH 2 type) '*))
                       (CADR type)
                       (ERROR (FORMAT NIL "new array got invalid type ~A of ~A" type arr)))))
         (len (IF len len
                  (LET ((value (IF (EQL (CAR arr) 'cast) (CADDR arr) NIL)))
                    (IF (AND value (LISTP value) (EQUAL (CAR value) 'QUOTE))
                        (LENGTH (CADR value))
                        (ERROR (FORMAT NIL "new array can't infer length ~A" arr)))))))
    (IF len
        `(closure ((<> new array ,elem ,(GENSYM)) :arr ,arr :len ,len)
           (out (<> array ,elem))
           (return (letn ((,elem * new_arr .  #'(calloc len (sizeof ,elem))))
                     (syslog! (printf "NEW ARR: %s %p %zu\n" (symbol-name ,type) new_arr (cast size_t len)))
                     (memcpy new_arr arr (* len (sizeof ,elem)))
                     (cast (<> array ,elem) '{ new_arr len }))))
        (ERROR (FORMAT NIL "new^~A len required for dynamic array input: ~A" (symbol-name type) arr)))))

(DEFMACRO len^array (array)
  `($ ,array len))

(DEFMACRO nth^array (index array &KEY unchecked default)
  (LET ((index index)
        (array array)
        (type (CICILI:INFER-TYPE array))
        (unchecked unchecked)
        (default default))
    (WHEN (> (LENGTH type) 1) (ERROR (FORMAT NIL "nth of array got invalid type ~A for ~A" type array)))
    (WHEN (AND (NULL unchecked) (NULL default)) (ERROR (FORMAT NIL "checked nth of array needs default value ~A" array)))
    (IF unchecked
        `(nth ,index ($ ,array arr))
        `(closure ((<> nth ,@type ,(GENSYM)) :index ,index :array ,array :default_value ,default)
           (out (<> ,@type item_t))
           (return (? (< index ($ array len))
                     (nth index ($ array arr))
                     default_value))))))

(DEFMACRO let^array ((arr len array &REST captures) &REST body)
  (LET* ((array array)
         (type (CICILI:INFER-TYPE array))
         (arr-name (GENSYM "acc_arr")))
    (WHEN (> (LENGTH type) 1) (ERROR (FORMAT NIL "let array got invalid type ~A for ~A" type array)))
    `(closure ((<> let ,@type ,(GENSYM)) ,arr-name ,array ,@captures)
       (let (((<> ,@type item_t) * ,arr . (FUNCTION ($ ,arr-name arr)))
             (size_t ,len . (FUNCTION ($ ,arr-name len))))
         ,@body))))

(DEFMACRO letn^array ((arr len array &REST captures) &REST body)
  (LET* ((array array)
         (body body)
         (type (CICILI:INFER-TYPE array))
         (arr-name (GENSYM "acc_arr")))
    (WHEN (> (LENGTH type) 1) (ERROR (FORMAT NIL "letn array got invalid type ~A for ~A" type array)))
    `(closure ((<> letn ,@type ,(GENSYM)) ,arr-name ,array ,@captures)
       (out auto)
       (return (letn (((<> ,@type item_t) * ,arr . (FUNCTION ($ ,arr-name arr)))
                      (size_t ,len . (FUNCTION ($ ,arr-name len))))
                 ,@body)))))
