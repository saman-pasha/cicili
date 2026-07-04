;;;; Cicili std array
;;; contigous memory allocation
;;; uses 16-bit address free space beside 47-bit virtual memory
;;; most minimal performant indexable array
;;; arrays with max length of (2^16 - 1) 65535
(generic decl-array
  (type a)

  (struct type
          (member uintptr_t arr)
          (member size_t    len))

  (inline)
  (func (<> free type) ((type * array))
        (syslog! (printf "FREE ARR: %zx\n" (-> array arr)))
        (free (cast (void *) (-> array arr)))
        (set (-> array arr) 0))

  ) ; decl-array


(generic import-array
  (type a)

  (DEFMACRO (<> new type) (arr &OPTIONAL len)
    (LET* ((arr arr)
           (len len)
           (arr-len (IF len len (IF (STRINGP arr) (LENGTH arr) (IF (LISTP arr) (LENGTH (CADR arr)) -1))))
           (arr-name (GENSYM "tmp_arr")))
      (IF len
          `(letn ((a * ,arr-name . (FUNCTION (calloc ,arr-len (sizeof a)))))
             (memcpy ,arr-name (cast (a []) ,arr) (* ,arr-len (sizeof a)))
             (cast type '{ (cast uintptr_t ,arr-name) (cast size_t ,arr-len) }))
          (IF (STRINGP arr)
              `(letn ((a * ,arr-name . (FUNCTION (calloc ,arr-len (sizeof a)))))
                 (memcpy ,arr-name (cast (a []) ,arr) (* ,arr-len (sizeof a)))
                 (cast type '{ (cast uintptr_t ,arr-name) (cast size_t ,arr-len) }))
              (IF (AND (LISTP arr) (EQUAL (CAR arr) 'QUOTE))
                  `(letn ((a * ,arr-name . (FUNCTION (calloc ,arr-len (sizeof a)))))
                     (memcpy ,arr-name (cast (a []) ,arr) (* ,arr-len (sizeof a)))
                     (cast type '{ (cast uintptr_t ,arr-name) (cast size_t ,arr-len) }))
                  (ERROR (FORMAT NIL "new^~A len required for dynamic array input: ~A" (symbol-name type) arr)))))))


  (DEFMACRO (<> len type) (array)
    `($ ,array len))


  ;; there are two path Safe and Unsafe
  ;; Safe with default to check bounds
  ;; Unsafe without default and check bounds
  (DEFMACRO (<> nth type) (index array &KEY unchecked default)
    (LET ((index index)
          (array array)
          (unchecked unchecked)
          (default default)
          (arr-name (GENSYM "acc_arr"))
          (arr-idx (GENSYM "acc_arr_idx")))
      (WHEN (AND (NULL unchecked) (NULL default)) (ERROR (FORMAT NIL "checked nth of array needs default value ~A" array)))
      (IF unchecked
          `(nth ,index (cast (a *) ($ ,array arr)))
          `(letn ((uintptr_t ,arr-name . (FUNCTION ($ ,array arr)))
                  (const size_t ,arr-idx . (FUNCTION ,index)))
             (? (< ,arr-idx ($ ,array len))
               (nth ,arr-idx (cast (a *) ,arr-name))
               ,default)))))

  
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
