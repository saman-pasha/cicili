;;;; Cicili std array
;;; contigous memory allocation
;;; most minimal performant indexable array
(generic decl-array
  (type a)

  (struct type
          (member a *    arr)
          (member size_t len))

  (inline)
  (func (<> free type) ((type * array))
        (syslog! (printf "FREE ARR: %p\n" (-> array arr)))
        (free (-> array arr))
        (set (-> array arr) 0))

  ) ; decl-array


(generic impl-array
  (type a)

  ) ; impl-array


(generic import-array
  (type a)

  (DEFMACRO (<> new type) (arr &OPTIONAL len)
    (LET* ((len (IF len len
                    (IF (STRINGP arr) (LENGTH arr)
                        (IF (AND (LISTP arr) (EQUAL (CAR arr) 'QUOTE)) (LENGTH (CADR arr))
                            NIL))))
           (arr (IF (AND (LISTP arr) (EQUAL (CAR arr) 'QUOTE)) `(cast (a []) ,arr) arr)))
      (IF len
          `('(lambda* (<> new type ,(GENSYM)) ((const size_t len))
              (out type)
              (return (letn ((a * new_arr .  #'(calloc len (sizeof a))))
                        (syslog! (printf "NEW ARR: %s %p %zu\n" (symbol-name type) new_arr len))
                        (memcpy new_arr ,arr (* len (sizeof a)))
                        (cast type '{ new_arr len }))))
             ,len)
          (ERROR (FORMAT NIL "new^~A len required for dynamic array input: ~A" (symbol-name type) arr)))))


  (DEFMACRO (<> len type) (array)
    `($ ,array len))


  ;; there are two path Safe and Unsafe
  ;; Safe with default to check bounds
  ;; Unsafe without default and check bounds
  (DEFMACRO (<> nth type) (index array &KEY unchecked default)
    (LET ((index index)
          (array array)
          (unchecked unchecked)
          (default default))
      (WHEN (AND (NULL unchecked) (NULL default)) (ERROR (FORMAT NIL "checked nth of array needs default value ~A" array)))
      (IF unchecked
          `(nth ,index ($ ,array arr))
          `('(lambda* (<> nth type ,(GENSYM)) ((const size_t index) (const type * array))
              (out a)
              (return (? (< index (-> array len))
                        (nth index (-> array arr))
                        ,default)))
             ,index (aof ,array)))))

  
  (DEFMACRO (<> let type) ((arr len array) &REST body)
    (LET ((arr-name (GENSYM "acc_arr")))
      `(let ((type ,arr-name . (FUNCTION ,array))
             (a * ,arr . (FUNCTION ($ ,arr-name arr)))
             (size_t ,len . (FUNCTION ($ ,arr-name len))))
         ,@body)))
  

  (DEFMACRO (<> letn type) ((arr len array) &REST body)
    (LET ((arr-name (GENSYM "acc_arr")))
      `(letn ((type ,arr-name . (FUNCTION ,array))
              (a * ,arr . (FUNCTION ($ ,arr-name arr)))
              (size_t ,len . (FUNCTION ($ ,arr-name len))))
         ,@body)))

  ) ; import-array
