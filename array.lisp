;;;; contigous memory allocation
;;; 64-bit OS only
;;; uses 17-bit address space after 47-bit virtual memory
;;; most minimal performant indexable array
;;; arrays with max length of 131072
(generic decl-array
  (type a)

  (typedef a * type)

  ) ; decl-array


(generic import-array
  (type a)

  (DEFMACRO (<> new type) (arr &OPTIONAL len)
    (LET* ((arr arr)
           (len len)
           (arr-lenn (IF len len (IF (STRINGP arr) (LENGTH arr) (LENGTH (CADR arr)))))
           (arr-name (GENSYM "tmp_arr")))
      (IF len
          `(letn ((type ,arr-name . (FUNCTION (calloc ,arr-lenn (sizeof a)))))
             (memcpy ,arr-name (cast (a []) ,arr) (* ,arr-lenn (sizeof a)))
             (cast type (bitor (cast uintptr_t ,arr-name) (<< (cast size_t ,arr-lenn) 47))))
          (IF (STRINGP arr)
              `(letn ((type ,arr-name . (FUNCTION (calloc ,arr-lenn (sizeof a)))))
                 (memcpy ,arr-name (cast (a []) ,arr) (* ,arr-lenn (sizeof a)))
                 (cast type (bitor (cast uintptr_t ,arr-name) (<< (cast size_t ,arr-lenn) 47))))
              (IF (AND (LISTP arr) (EQUAL (CAR arr) 'QUOTE))
                  `(letn ((type ,arr-name . (FUNCTION (calloc ,arr-lenn (sizeof a)))))
                     (memcpy ,arr-name (cast (a []) ,arr) (* ,arr-lenn (sizeof a)))
                     (cast type (bitor (cast uintptr_t ,arr-name) (<< (cast size_t ,arr-lenn) 47))))
                  (ERROR (FORMAT NIL "new^array len required for dynamic array input: ~A" arr)))))))


  (DEFMACRO (<> len type) (array)
    (LET ((array array))
      `(cast size_t (bitand (>> (cast uintptr_t ,array) 47) SIZE_MAX))))


  ;; there are two path Safe and Unsafe
  ;; Safe with default to check bounds
  ;; Unsafe without default and check bounds
  (DEFMACRO (<> nth type) (index array &KEY unchecked default)
    (LET ((index index)
          (array array)
          (unchecked unchecked)
          (default default)
          (arr-name (GENSYM "acc_arr"))
          (arr-indx (GENSYM "acc_arr_idx")))
      (WHEN (AND (NULL unchecked) (NULL default)) (ERROR (FORMAT NIL "checked nth of array needs default value ~A" array)))
      (IF unchecked
          `(nth ,index (cast type (bitand (cast uintptr_t ,array) 0x7FFFFFFFFFFFL)))
          `(letn ((uintptr_t ,arr-name . (FUNCTION (cast uintptr_t ,array)))
                  (const size_t ,arr-indx . (FUNCTION ,index)))
             (? (< ,arr-indx (cast size_t (>> ,arr-name 47)))
                (nth ,arr-indx (cast type (bitand ,arr-name 0x7FFFFFFFFFFFL)))
                ,default)))))

  
  (DEFMACRO (<> let type) ((arr len array) &REST body)
    (LET ((arr arr)
          (len len)
          (array array)
          (arr-name (GENSYM "acc_arr")))
      `(let ((uintptr_t ,arr-name . (FUNCTION (cast uintptr_t ,array)))
             (type ,arr . (FUNCTION (cast type (bitand ,arr-name 0x7FFFFFFFFFFFL))))
             (size_t ,len . (FUNCTION (cast size_t (>> ,arr-name 47)))))
         ,@body)))
  

  (DEFMACRO (<> letn type) ((arr len array) &REST body)
    (LET ((arr arr)
          (len len)
          (array array)
          (arr-name (GENSYM "acc_arr")))
      `(letn ((uintptr_t ,arr-name . (FUNCTION (cast uintptr_t ,array)))
              (type ,arr . (FUNCTION (cast type (bitand ,arr-name 0x7FFFFFFFFFFFL))))
              (size_t ,len . (FUNCTION (cast size_t (>> ,arr-name 47)))))
         ,@body)))


  (DEFMACRO (<> free type) (array)
    (LET ((array array))
      `(free (cast (void *) (bitand (cast uintptr_t ,array) 0x7FFFFFFFFFFF)))))


  ) ; import-array

