;;;; Cicili std array
;;; contigous memory allocation
;;; most minimal performant indexable array
(generic decl-array
  (type a)

  (struct type
          (member uintptr_t arr)
          (member size_t    len))

  ) ; decl-array


(generic impl-array
  (type a)

  (func (<> new type impl) ((a * arr) (const size_t len))
        (out type)
        (return (letn ((a * new_arr .  #'(calloc len (sizeof a))))
                  (syslog! (printf "NEW ARR: %s %zx %zu\n" (symbol-name type) (cast size_t arr) len))
                  (memcpy new_arr arr (* len (sizeof a)))
                  (cast type '{ (cast uintptr_t new_arr) len }))))
  
  (func (<> nth type impl) ((const size_t index) (type array) (const a * default_))
        (out a)
        (return (? (< index ($ array len))
                   (nth index (cast (a *) ($ array arr)))
                   (cof default_))))

  (func (<> free type) ((type * array))
        (syslog! (printf "FREE ARR: %zx\n" (-> array arr)))
        (free (cast (void *) (-> array arr)))
        (set (-> array arr) 0))

  ) ; impl-array


(generic import-array
  (type a)

  (DEFMACRO (<> new type) (arr &OPTIONAL len)
    (LET* ((arr arr)
           (len len)
           (cal-len (IF len len
                        (IF (STRINGP arr) (LENGTH arr)
                            (IF (AND (LISTP arr) (EQUAL (CAR arr) 'QUOTE)) (LENGTH (CADR arr))
                                NIL)))))
      (IF cal-len
          `((<> new type impl) (cast (a []) ,arr) ,cal-len)
          (ERROR (FORMAT NIL "new^~A len required for dynamic array input: ~A" (symbol-name type) arr)))))


  (DEFMACRO (<> len type) (array)
    `($ ,array len))


  ;; there are two path Safe and Unsafe
  ;; Safe with default to check bounds
  ;; Unsafe without default and check bounds
  ;; default should be pointer or a constant
  (DEFMACRO (<> nth type) (index array &KEY unchecked default)
    (LET ((index index)
          (array array)
          (unchecked unchecked)
          (default default))
      (WHEN (AND (NULL unchecked) (NULL default)) (ERROR (FORMAT NIL "checked nth of array needs default value ~A" array)))
      (IF unchecked
          `(nth ,index (cast (a *) ($ ,array arr)))
          `((<> nth type impl) ,index ,array ,default))))

  
  (DEFMACRO (<> let type) ((arr len array) &REST body)
    (LET ((arr-name (GENSYM "acc_arr")))
      `(let ((type ,arr-name . (FUNCTION ,array))
             (a * ,arr . (FUNCTION (cast (a *) ($ ,arr-name arr))))
             (size_t ,len . (FUNCTION ($ ,arr-name len))))
         ,@body)))
  

  (DEFMACRO (<> letn type) ((arr len array) &REST body)
    (LET ((arr-name (GENSYM "acc_arr")))
      `(letn ((type ,arr-name . (FUNCTION ,array))
              (a * ,arr . (FUNCTION (cast (a *) ($ ,arr-name arr))))
              (size_t ,len . (FUNCTION ($ ,arr-name len))))
         ,@body)))

  ) ; import-array
