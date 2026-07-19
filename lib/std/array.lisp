;;;; Cicili std array
;;; contigous memory allocation
;;; most minimal performant indexable array

(generic decl-array
  (type a)

  (non-copy)
  (struct type
          (member a * const arr)
          (member size_t len))

  (typedef a (<> type item_t))

  (inline)
  (func (<> free type) ((type * array))
        (syslog! (printf "FREE ARR: %p\n" (-> array arr)))
        (free (-> array arr)))

  ) ; decl-array


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
           (return (letn ((,elem * new_arr . #'(calloc len (sizeof ,elem))))
                     (syslog! (printf "NEW ARR: %s %p %zu\n" (symbol-name ,type) new_arr (cast size_t len)))
                     (memcpy new_arr arr (* len (sizeof ,elem)))
                     (cast (<> array ,elem) '{ new_arr len }))))
        (ERROR (FORMAT NIL "new^~A len required for dynamic array input: ~A" (symbol-name type) arr)))))


(DEFMACRO len^array (array)
  `($ ,array len))

(DEFMACRO nth^array (index array &KEY unchecked default)
  (LET ((index index)
        (array array)
        (unchecked unchecked)
        (default default))
    (WHEN (AND (NULL unchecked) (NULL default)) (ERROR (FORMAT NIL "checked nth of array needs default value ~A" array)))
    (MULTIPLE-VALUE-BIND (_ full-type) (CICILI:INFER-TYPE array)
      (LET ((type-name (NTH 1 full-type)))
        (IF unchecked
            `(nth ,index ($ ,array arr))
            `(closure ((<> nth ,type-name ,(GENSYM))
                       :index (cast size_t ,index)
                       :array (aof ,array)
                       :default_value ,default)
               (out (<> ,type-name item_t))
               (return (? (< index (-> array len))
                         (nth index (-> array arr))
                         default_value))))))))

(DEFMACRO let^array ((arr len array &REST captures) &REST body)
  (LET* ((array array))
    (MULTIPLE-VALUE-BIND (_ full-type) (CICILI:INFER-TYPE array :WITH-NAME T :COPY-NAME T)
      (LET ((type-name (NTH 1 full-type)))
        `(closure ((<> let ,type-name ,(GENSYM)) ,(NTH 4 full-type) ,array ,@captures)
           (let (((<> ,type-name item_t) * ,arr . (FUNCTION ($ ,(NTH 4 full-type) arr)))
                 (size_t ,len . (FUNCTION ($ ,(NTH 4 full-type) len))))
             ,@body))))))

(DEFMACRO letn^array ((arr len array &REST captures) &REST body)
  (LET* ((array array)
         (body body))
    (MULTIPLE-VALUE-BIND (_ full-type) (CICILI:INFER-TYPE array :WITH-NAME T :COPY-NAME T)
      (LET ((type-name (NTH 1 full-type)))
        `(closure ((<> letn ,type-name ,(GENSYM)) ,(NTH 4 full-type) ,array ,@captures)
           (out auto)
           (return (letn (((<> ,type-name item_t) * ,arr . (FUNCTION ($ ,(NTH 4 full-type) arr)))
                          (size_t ,len . (FUNCTION ($ ,(NTH 4 full-type) len))))
                     ,@body)))))))
