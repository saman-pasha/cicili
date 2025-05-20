;;;; Cicili standard safe Slice struct macro (IN-PACKAGE :CL-USER)

;;; Slice template macro
;;; name: Slice name
;;; element Slice element type
;;; step growth amount added to the capacity every time Slice gets full
;;; header-body custom functionalities in header file
;;; source-body custom functionalities in source file

(DEFMACRO Slice-Scope (&REST body)
  `(LET ((header-file  (STRING-DOWNCASE (FORMAT NIL "~Acicili_~A.h" path name)))
         (guard-label  (INTERN (STRING-UPCASE (FORMAT NIL "CICILI_~A_H_" name))))
         (growth-step  (INTERN (STRING-UPCASE (FORMAT NIL "~A_GROWTH_STEP" name))))
         (elem-type    (INTERN (STRING-DOWNCASE (FORMAT NIL "~A_elem_t" name)))))
     ,@body))

(DEFMACRO Slice (path name element step members-body header-body source-body)
  (Slice-Scope
      `(cicili
           (header ,header-file () ;; header file
                   (guard ,guard-label

                     (include <stddef.h>)

                     ;; amount each time the capacity will be grown
                     (@define ,growth-step (code ,(FORMAT NIL "~A" step)))
                     
                     ;; element type of the array
                     (typedef ,element ,elem-type)

                     ;; Designed to be safe, fast and optimal with copy-on-write solution
                     (struct ,name
                       (member size_t len)
                       (member size_t cap)
                       (member ,elem-type arr [])
                       ,@members-body)

                     ;; Cicili struct constructors begin with new keyword and aren't methods
                     ;; They don't get this pointer and their out type always is pointer of the struct
                     ;; Slice constructors
                     (decl) (func ,(make-method-name name 'newEmpty)     ((size_t len)))
                     (decl) (func ,(make-method-name name 'newFromArray) ((const ,elem-type * arr) (size_t len)))
                     (decl) (func ,(make-method-name name 'newCopy)      ((const ,name * other)))

                     ;; Collection of useful Slice methods
                     (decl) (method ,(make-method-name name 'clone)      () (out ,name *))
                     (decl) (method ,(make-method-name name 'cloneArray) () (out ,elem-type *))
                     (decl) (method ,(make-method-name name 'appendNew)  ((const ,name * other)) (out ,name *))
                     (decl) (method ,(make-method-name name 'append)     ((const ,name * other)) (out ,name *))
                     (decl) (method ,(make-method-name name 'free)       ())

                   (decl) (method ,(make-method-name name 'push)   ((,elem-type val)) (out ,name *))
(decl) (method ,(make-method-name name 'pop)    ((,elem-type * out)) (out bool))
(decl) (method ,(make-method-name name 'shrink) () (out ,name *))
                   (decl) (method ,(make-method-name name 'insert)   ((size_t index) (,elem-type val)) (out ,name *))
(decl) (method ,(make-method-name name 'removeAt) ((size_t index)) (out ,name *))
                   (decl) (method ,(make-method-name name 'contains) ((,elem-type val)) (out bool))
(decl) (method ,(make-method-name name 'indexOf)  ((,elem-type val)) (out size_t))
                   (decl) (method ,(make-method-name name 'lastIndexOf) ((,elem-type val)) (out size_t))
(decl) (method ,(make-method-name name 'count)       ((,elem-type val)) (out size_t))
                   
                     ,@header-body))

         ;; source file
         (source ,(STRING-DOWNCASE (FORMAT NIL "cicili_~A~A.c" path name)) (:std #t :compile #t :link #f)

                 (include <ctype.h> <stdarg.h> ,header-file)

                 (static)
                 (func ,(make-method-name name 'calcCap) ((size_t len)) (out '{ (size_t capLen) (size_t size) })
                       (let ((size_t capLen . #'(? (> (% len ,growth-step) 0)
                                                  (+ (/ len ,growth-step) 1)
                                                  (/ len ,growth-step))))
                         (return '{ capLen (* (sizeof ,elem-type) capLen) })))

                 ;; Creates a new Slice instance with allocated cap size
                 (func ,(make-method-name name 'newEmpty) ((size_t len))
                       (let ((auto cap . #'(-> ,name calcCap len))
                             (,name * slice . #'(malloc (+ (sizeof ,name) ($ cap size)))))
                         (set ($ slice len) len)
                         (set ($ slice cap) ($ cap capLen))
                         (return slice)))

                 ;; Initializes a new Slice and hard copy of array memory allocated
                 (func ,(make-method-name name 'newFromArray) ((const ,elem-type * arr) (size_t len))
                       (let ((,name * slice . #'(-> ,name newEmpty len)))
                         (memcpy ($ slice arr) arr (* (sizeof ,elem-type) len))
                         (return slice)))

                 ;; Initializes a hard copy of a Slice memory allocated
                 (func ,(make-method-name name 'newCopy) ((const ,name * other))
                       (let ((,name * slice . #'(-> ,name newEmpty ($ other len))))
                         (memcpy ($ slice arr) ($ other arr) (* (sizeof ,elem-type) ($ other len)))
                         (return slice)))

                 ;; Uses newCopy constructor but as a method
                 (method ,(make-method-name name 'clone) () (out ,name *)
                         (return (-> ,name newCopy this)))

                 ;; Clones only the arr
                 (method ,(make-method-name name 'cloneArray) () (out ,elem-type *)
                         (let ((size_t size . #'(* (sizeof ,elem-type) ($ this len)))
                               (,elem-type * arr . #'(malloc size)))
                           (memcpy arr ($ this arr) size)
                           (return arr)))

                 ;; Creates a new instance and appends both this and other arrs to created instance and returns that
                 ;; this and other remain unmodified
                 (method ,(make-method-name name 'appendNew) ((const ,name * other)) (out ,name *)
                         (let ((size_t totalLen . #'(+ ($ this len) ($ other len))))
                           (let ((,name * slice . #'(-> ,name newEmpty totalLen)))
                             (memcpy ($ slice arr) ($ this arr) (* (sizeof ,elem-type) ($ this len)))
                             (memcpy (+ ($ slice arr) ($ this len)) ($ other arr) (* (sizeof ,elem-type) ($ other len)))
                             (return slice))))

                 ;; Appends other arr at the end of current instance (if has cap) and returns this
                 ;; other remains unmodified
                 (method ,(make-method-name name 'append) ((const ,name * other)) (out ,name *)
                         (let ((size_t totalLen . #'(+ ($ this len) ($ other len))))
                           (if (<= totalLen ($ this cap))
                               (block
                                   (memcpy (+ ($ this arr) ($ this len))
                                     ($ other arr) (* (sizeof ,elem-type) ($ other len)))
                                 (return this))
                               (return (-> this appendNew other)))))

                 ;; Frees the Slice instance
                 (method ,(make-method-name name 'free) ()
                         (free this))

                 ;; Pushes a new element to the end of the Slice. Grows if needed.
(method ,(make-method-name name 'push) ((,elem-type val)) (out ,name *)
  (if (== ($ this len) ($ this cap))
      ;; Need to reallocate with more capacity
      (block
        (let ((size_t newLen . #'(+ ($ this len) 1)))
          (let ((,name * newSlice . #'(-> ,name newEmpty newLen)))
            (memcpy ($ newSlice arr) ($ this arr) (* (sizeof ,elem-type) ($ this len)))
            (set ($ newSlice len) newLen)
            (set ($ newSlice arr [$ this len]) val)
            (-> this free)
            (return newSlice))))
      ;; Enough capacity, insert directly
      (block
        (set ($ this arr [$ this len]) val)
        (++ ($ this len))
        (return this))))

;; Pops the last element and stores it in *out. Returns true if successful.
(method ,(make-method-name name 'pop) ((,elem-type * out)) (out bool)
  (if (== ($ this len) 0)
      (return #f)
      (block
        (-- ($ this len))
        (if out (set (* out) ($ this arr [$ this len])))
        (return #t))))

;; Shrinks allocated memory to current length, freeing unused capacity.
(method ,(make-method-name name 'shrink) () (out ,name *)
  (let ((,name * newSlice . #'(-> ,name newEmpty ($ this len))))
    (memcpy ($ newSlice arr) ($ this arr) (* (sizeof ,elem-type) ($ this len)))
    (-> this free)
    (return newSlice)))

;; Inserts val at index. If index > len, appends to the end. Grows if needed.
(method ,(make-method-name name 'insert) ((size_t index) (,elem-type val)) (out ,name *)
  (let ((size_t safeIndex . #'(? (> index ($ this len)) ($ this len) index))))
    (if (== ($ this len) ($ this cap))
        ;; Grow Slice
        (let ((,name * newSlice . #'(-> ,name newEmpty (+ ($ this len) 1))))
          ;; Copy before index
          (memcpy ($ newSlice arr) ($ this arr) (* (sizeof ,elem-type) safeIndex))
          ;; Insert element
          (set ($ newSlice arr [safeIndex]) val)
          ;; Copy after index
          (memcpy (+ ($ newSlice arr) (+ safeIndex 1))
                  (+ ($ this arr) safeIndex)
                  (* (sizeof ,elem-type) (- ($ this len) safeIndex)))
          (set ($ newSlice len) (+ ($ this len) 1))
          (-> this free)
          (return newSlice))
        ;; No grow needed
        (block
          (memmove (+ ($ this arr) (+ safeIndex 1))
                   (+ ($ this arr) safeIndex)
                   (* (sizeof ,elem-type) (- ($ this len) safeIndex)))
          (set ($ this arr [safeIndex]) val)
          (++ ($ this len))
          (return this)))))

;; Removes element at index and shifts remaining elements left. Returns this.
(method ,(make-method-name name 'removeAt) ((size_t index)) (out ,name *)
  (if (>= index ($ this len))
      (return this) ;; Index out of bounds, do nothing
      (block
        (memmove (+ ($ this arr) index)
                 (+ ($ this arr) (+ index 1))
                 (* (sizeof ,elem-type) (- ($ this len) (+ index 1))))
        (-- ($ this len))
        (return this))))

;; Returns true if the Slice contains the given value
(method ,(make-method-name name 'contains) ((,elem-type val)) (out bool)
  (for ((size_t i 0) (< i ($ this len)) (++ i))
    (if (== ($ this arr [i]) val)
        (return #t)))
  (return #f))

;; Returns index of the given value, or len if not found
(method ,(make-method-name name 'indexOf) ((,elem-type val)) (out size_t)
  (for ((size_t i 0) (< i ($ this len)) (++ i))
    (if (== ($ this arr [i]) val)
        (return i)))
  ;; Not found: return len (similar to C-style idiom)
  (return ($ this len)))

;; Returns the index of the last occurrence of val, or len if not found
(method ,(make-method-name name 'lastIndexOf) ((,elem-type val)) (out size_t)
  (for ((size_t i (- ($ this len) 1)) (>= 0 i) (-- i))
    (if (== ($ this arr [i]) val)
        (return i)))
  (return ($ this len)))

;; Returns how many times val appears in the slice
(method ,(make-method-name name 'count) ((,elem-type val)) (out size_t)
  (let ((size_t c 0))
    (for ((size_t i 0) (< i ($ this len)) (++ i))
      (if (== ($ this arr [i]) val)
          (++ c)))
    (return c)))

                 ,@source-body))))

