;;;; Cicili std array
;;; contigous memory allocation
;;; most minimal performant indexable array
(generic decl-array
  (a)

  (non-copy)
  (struct (<> array a)
          (member a * const arr)
          (member size_t len))

  (typedef a (<> array a item_t))

  ;; super type declaration to use in 'type-check
  (guard __ARRAY_TYPE_H_
    (decl) (struct (<> std array)))
  (typedef (<> std array) (<> array a type_t))

  (decl) (func (<> free array a) (((<> array a) ref array)))
  (decl) (func (<> free array a pointer) (((<> array a) ** array)))
  (decl) (func (<> new array a) ((const a * arr) (size_t len)) (out (<> array a)))
  (decl) (func (<> len array a) (((<> array a) ref array)) (out size_t))
  (decl) (func (<> nth array a) ((size_t index) ((<> array a) ref array) (a default_value)) (out a))

  ) ; decl-array

(generic impl-array
  (a)
  
  (inline)
  (func (<> free array a) (((<> array a) ref array))
        (syslog! (printf "FREE ARR: %p\n" (-> array arr)))
        (free (-> array arr)))

  (inline)
  (func (<> free array a pointer) (((<> array a) ** array))
        ((<> free array a) (cof array)))

  (func (<> new array a) ((const a * arr) (size_t len))
        (out (<> array a))
        (return (letn ((a * new_arr . #'(calloc len (sizeof a))))
                  (syslog! (printf "NEW ARR: %s %p %zu\n" (symbol-name (<> array a)) new_arr len))
                  (memcpy new_arr arr (* len (sizeof a)))
                  (cast (<> array a) '{ new_arr len }))))

  (func (<> len array a) (((<> array a) ref array))
        (out size_t)
        (return (-> array len)))
  
  (func (<> nth array a) ((size_t index) ((<> array a) ref array) (a default_value))
        (out a)
        (return (? (< index (-> array len))
                  (nth index (-> array arr))
                  default_value)))
  
  ) ; impl-array

(DEFMACRO free^array (array)
  (LET ((array array)
        (full-type (NTH-VALUE 1 (CICILI:TYPE-CHECK array :TYPEOF :std^array :MODIFIER '(move ref)))))
    (IF (EQL (NTH 2 full-type) 'move)
        `((<> free ,(NTH 1 full-type)) (aof ,array))
        `((<> free ,(NTH 1 full-type)) ,array))))

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
                        (IF (STRINGP value)
                            (LENGTH value)
                            (ERROR (FORMAT NIL "new array can't infer length ~A" arr))))))))
    (IF len
        `((<> new array ,elem) ,arr ,len)
        (ERROR (FORMAT NIL "new^~A len required for dynamic array input: ~A" type arr)))))

(DEFMACRO len^array (array)
  (LET ((array array))
    (MULTIPLE-VALUE-BIND (_ full-type) (CICILI:TYPE-CHECK array :TYPEOF :std^array :MODIFIER '(move ref))
      `($ ,(IF (EQL (NTH 2 full-type) 'ref) `((<> len array a) ,array) array) len))))

(DEFMACRO nth^array (index array &KEY unchecked default)
  (LET ((index index)
        (array array)
        (unchecked unchecked)
        (default default))
    (WHEN (AND (NULL unchecked) (NULL default)) (ERROR (FORMAT NIL "checked nth of array needs default value ~A" array)))
    (IF unchecked
        (MULTIPLE-VALUE-BIND (_ full-type) (CICILI:TYPE-CHECK array :TYPEOF :std^array :MODIFIER :move)
          (LET ((type-name (NTH 1 full-type)))
            `(nth ,index ($ ,array arr))))
        (MULTIPLE-VALUE-BIND (_ full-type) (CICILI:TYPE-CHECK array :TYPEOF :std^array :MODIFIER '(move ref))
          (LET ((type-name (NTH 1 full-type)))
            `((<> nth ,type-name) ,index (aof ,array) ,default))))))

(DEFMACRO let^array ((arr len array &REST captures) &REST body)
  (LET ((arr arr)
        (len len)
        (array array))
    (MULTIPLE-VALUE-BIND (_ full-type) (CICILI:TYPE-CHECK array :TYPEOF :std^array :MODIFIER :move)
      (LET ((type-name (NTH 1 full-type)))
        `(closure ((<> let ,type-name ,(GENSYM)) :array (aof ,array) ,@captures)
           (let (((<> ,type-name item_t) * ,arr . (FUNCTION (-> array arr)))
                 (size_t ,len . (FUNCTION (-> array len))))
             ,@body))))))

(DEFMACRO letn^array ((arr len array &REST captures) &REST body)
  (LET ((arr arr)
        (len len)
        (array array)
        (body body))
    (MULTIPLE-VALUE-BIND (_ full-type) (CICILI:TYPE-CHECK array :TYPEOF :std^array :MODIFIER :move)
      (LET ((type-name (NTH 1 full-type)))
        `(closure ((<> letn ,type-name ,(GENSYM)) :array (aof ,array) ,@captures)
           (out auto)
           (return (letn (((<> ,type-name item_t) * ,arr . (FUNCTION (-> array arr)))
                          (size_t ,len . (FUNCTION (-> array len))))
                     ,@body)))))))

(DEFMACRO take^array ((arr len array &REST captures) &REST body)
  (LET ((arr arr)
        (len len)
        (array array))
    (MULTIPLE-VALUE-BIND (_ full-type) (CICILI:TYPE-CHECK array :TYPEOF :std^array :MODIFIER :move)
      (LET ((type-name (NTH 1 full-type)))
        `(closure ((<> take ,type-name ,(GENSYM)) :array ,array ,@captures)
           (let (((<> ,type-name item_t) * ,arr . (FUNCTION ($ array arr)))
                 (size_t ,len . (FUNCTION ($ array len))))
             ,@body))))))

(DEFMACRO taken^array ((arr len array &REST captures) &REST body)
  (LET ((arr arr)
        (len len)
        (array array)
        (body body))
    (MULTIPLE-VALUE-BIND (_ full-type) (CICILI:TYPE-CHECK array :TYPEOF :std^array :MODIFIER :move)
      (LET ((type-name (NTH 1 full-type)))
        `(closure ((<> taken ,type-name ,(GENSYM)) :array ,array ,@captures)
           (out auto)
           (return (letn (((<> ,type-name item_t) * ,arr . (FUNCTION ($ array arr)))
                          (size_t ,len . (FUNCTION ($ array len))))
                     ,@body)))))))
