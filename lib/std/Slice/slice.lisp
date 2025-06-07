;;;; Cicili standard safe Slice struct macro (IN-PACKAGE :CL-USER)

;;; Slice template macro
;;; name: Slice name
;;; element Slice element type
;;; step growth amount added to the capacity every time Slice gets full
;;; header-body custom functionalities in header file
;;; source-body custom functionalities in source file

(DEFMACRO SliceScope (&REST body)
  `(LET ((header-file  (STRING-DOWNCASE (FORMAT NIL "~Acicili_~A.h" path name)))
         (guard-label  (INTERN (STRING-UPCASE (FORMAT NIL "CICILI_~A_H_" name))))
         (growth-step  (INTERN (STRING-UPCASE (FORMAT NIL "~A_GROWTH_STEP" name))))
         (elem-type    (INTERN (STRING-DOWNCASE (FORMAT NIL "~A_elem_t" name)))))
     ,@body))

(DEFMACRO BasicSliceHeader (path name element step include-body members-body header-body)
  (SliceScope
      `(ghost
           (guard ,guard-label

             (include <stddef.h>)
             ,@include-body
             
             ;; amount each time the capacity will be grown
             (@define ,growth-step (code ,(FORMAT NIL "~A" step)))
             
             ;; element type of the array
             (typedef ,@(IF (LISTP element) element (LIST element)) ,elem-type)

             ;; Designed to be safe, fast and optimal with copy-on-write solution
             (struct ,name
               (member size_t len)
               (member size_t cap)
               (member ,elem-type arr [])
               ,@members-body)

             ;; Cicili struct constructors begin with new keyword and aren't methods
             ;; They don't get this pointer and their out type always is pointer of the struct
             ;; Slice constructors
             (decl) (func (,name . newEmpty)      ((size_t len)))
             (decl) (func (,name . newFromArray)  ((const ,elem-type * arr) (size_t len)))
             (decl) (func (,name . newCopy)       ((const ,name * other)))

             ;; C compatibility
             (decl) (method (,name . deref)       () (out ,@(IF (LISTP element) element (LIST element)) *))
             
             ;; Collection of useful Slice methods
             (decl) (method (,name . clone)       () (out ,name *))
             (decl) (method (,name . cloneArray)  () (out ,elem-type *))
             (decl) (method (,name . appendNew)   ((const ,name * other)) (out ,name *))
             (decl) (method (,name . append)      ((const ,name * other)) (out '{ (,name * out) (bool newp) }))
             
             (decl) (method (,name . free)        ())
             (decl) (method (,name . push)        ((,elem-type val)) (out '{ (,name * out) (bool newp) }))
             (decl) (method (,name . pop)         () (out '{ (,elem-type out) (bool outp) }))
             (decl) (method (,name . shrink)      () (out ,name *))
             (decl) (method (,name . insert)      ((size_t index) (,elem-type val)) (out ,name *))
             (decl) (method (,name . removeAt)    ((size_t index)) (out ,name *))
             
             ,@header-body))))

(DEFMACRO BasicSliceSource (path name element step source-body)
  (SliceScope
      `(ghost
           (include <ctype.h> <stdarg.h>)

         (static)
         (func (,name . calcCap) ((size_t len)) (out '{ (size_t capLen) (size_t size) })
               (let ((size_t capLen . #'(? (> (% len ,growth-step) 0)
                                           (+ (/ len ,growth-step) 1)
                                           (/ len ,growth-step))))
                 (return '{ capLen (* (sizeof ,elem-type) capLen) })))

         ;; Creates a new Slice instance with allocated cap size
         (func (,name . newEmpty) ((size_t len))
               (let ((auto cap . #'(-> ,name calcCap len))
                     (,name * slice . #'(malloc (+ (sizeof ,name) ($ cap size)))))
                 (set ($ slice len) len)
                 (set ($ slice cap) ($ cap capLen))
                 (return slice)))

         ;; Initializes a new Slice and hard copy of array memory allocated
         (func (,name . newFromArray) ((const ,elem-type * arr) (size_t len))
               (let ((,name * slice . #'(-> ,name newEmpty len)))
                 (memcpy ($ slice arr) arr (* (sizeof ,elem-type) len))
                 (return slice)))

         ;; Initializes a hard copy of a Slice memory allocated
         (func (,name . newCopy) ((const ,name * other))
               (let ((,name * slice . #'(-> ,name newEmpty ($ other len))))
                 (memcpy ($ slice arr) ($ other arr) (* (sizeof ,elem-type) ($ other len)))
                 (return slice)))

         ;; returns address of first item for using as C array (element *)
         (method (,name . deref) () (out ,@(IF (LISTP element) element (LIST element)) *)
                 (return ($ this arr)))

         ;; Uses newCopy constructor but as a method
         (method (,name . clone) () (out ,name *)
                 (return (-> ,name newCopy this)))

         ;; Clones only the arr
         (method (,name . cloneArray) () (out ,elem-type *)
                 (let ((size_t size . #'(* (sizeof ,elem-type) ($ this len)))
                       (,elem-type * arr . #'(malloc size)))
                   (memcpy arr ($ this arr) size)
                   (return arr)))

         ;; Creates a new instance and appends both this and other arrs to created instance and returns that
         ;; this and other remain unmodified
         (method (,name . appendNew) ((const ,name * other)) (out ,name *)
                 (let ((size_t totalLen . #'(+ ($ this len) ($ other len))))
                   (let ((,name * slice . #'(-> ,name newEmpty totalLen)))
                     (memcpy ($ slice arr) ($ this arr) (* (sizeof ,elem-type) ($ this len)))
                     (memcpy (+ ($ slice arr) ($ this len)) ($ other arr) (* (sizeof ,elem-type) ($ other len)))
                     (return slice))))

         ;; Appends other arr at the end of current instance (if has cap) and returns this
         ;; other remains unmodified
         (method (,name . append) ((const ,name * other)) (out '{ (,name * out) (bool newp) })
                 (let ((size_t totalLen . #'(+ ($ this len) ($ other len))))
                   (if (<= totalLen ($ this cap))
                       (block
                           (memcpy (+ ($ this arr) ($ this len))
                             ($ other arr) (* (sizeof ,elem-type) ($ other len)))
                         (return '{ this #f }))
                       (return '{ (-> this appendNew other) #t }))))

         ;; Frees the Slice instance
         (method (,name . free) ()
                 (free this))

         ;; Pushes a new element to the end of the Slice. Grows if needed.
         (method (,name . push) ((,elem-type val)) (out '{ (,name * out) (bool newp) })
                 (if (== ($ this len) ($ this cap))
                     ;; Need to reallocate with more capacity
                     (block
                         (let ((size_t newLen . #'(+ ($ this len) 1)))
                           (let ((,name * newSlice . #'(-> ,name newEmpty newLen)))
                             (memcpy ($ newSlice arr) ($ this arr) (* (sizeof ,elem-type) ($ this len)))
                             (set ($ newSlice len) newLen)
                             (set (nth ($ this len) ($ newSlice arr)) val)
                             (-> this free)
                             (return '{ newSlice #t }))))
                     ;; Enough capacity, insert directly
                     (block
                         (set (nth ($ this len) ($ this arr)) val)
                       (++ ($ this len))
                       (return '{ this #f }))))

         ;; Pops the last element and stores it in *out. Returns true if successful.
         (method (,name . pop) () (out '{ (,elem-type out) (bool outp) })
                 (if (== ($ this len) 0)
                     (return '{ (nth 0 ($ this arr)) #f })
                     (block
                         (-- ($ this len))
                       (return '{ (nth ($ this len) ($ this arr)) #t }))))

         ;; Shrinks allocated memory to current length, freeing unused capacity.
         (method (,name . shrink) () (out ,name *)
                 (let ((,name * newSlice . #'(-> ,name newEmpty ($ this len))))
                   (memcpy ($ newSlice arr) ($ this arr) (* (sizeof ,elem-type) ($ this len)))
                   (-> this free)
                   (return newSlice)))

         ;; Inserts val at index. If index > len, appends to the end. Grows if needed.
         (method (,name . insert) ((size_t index) (,elem-type val)) (out ,name *)
                 (let ((size_t safeIndex . #'(? (> index ($ this len)) ($ this len) index)))
                   (if (== ($ this len) ($ this cap))
                       ;; Grow Slice
                       (let ((,name * newSlice . #'(-> ,name newEmpty (+ ($ this len) 1))))
                         ;; Copy before index
                         (memcpy ($ newSlice arr) ($ this arr) (* (sizeof ,elem-type) safeIndex))
                         ;; Insert element
                         (set (nth safeIndex ($ newSlice arr)) val)
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
                         (set (nth safeIndex ($ this arr)) val)
                         (++ ($ this len))
                         (return this)))))

         ;; Removes element at index and shifts remaining elements left. Returns this.
         (method (,name . removeAt) ((size_t index)) (out ,name *)
                 (if (>= index ($ this len))
                     (return this) ;; Index out of bounds, do nothing
                     (block
                         (memmove (+ ($ this arr) index)
                           (+ ($ this arr) (+ index 1))
                           (* (sizeof ,elem-type) (- ($ this len) (+ index 1))))
                       (-- ($ this len))
                       (return this))))

         ,@source-body)))

(DEFMACRO BasicSlice (path name element step include-body members-body header-body source-body)
  (SliceScope
      `(cicili
           (header ,header-file () ;; header file
                   (BasicSliceHeader ,path ,name ,element ,step ,include-body ,members-body ,header-body))
         
         ;; source file
         (source ,(STRING-DOWNCASE (FORMAT NIL "cicili_~A~A.c" path name)) (:std #t :compile #t :link #f)
                 (include ,header-file)
                 (BasicSliceSource ,path ,name ,element ,step ,source-body)))))

(DEFMACRO Slice (path name element step include-body members-body header-body source-body)
  (SliceScope
      `(BasicSlice ,path ,name ,element ,step
                   ( ; includes
                    ,@include-body)
                   ( ; members
                    ,@members-body)
                   ( ; header
                    (decl) (method (,name . contains)    ((,elem-type val)) (out bool))
                    (decl) (method (,name . indexOf)     ((,elem-type val)) (out size_t))
                    (decl) (method (,name . lastIndexOf) ((,elem-type val)) (out size_t))
                    (decl) (method (,name . count)       ((,elem-type val)) (out size_t))
                    ,@header-body)
                   ( ; source
                    ;; Returns true if the Slice contains the given value
                    (method (,name . contains) ((,elem-type val)) (out bool)
                            (for ((size_t i . 0)) (< i ($ this len)) ((++ i))
                                 (when (== (nth i ($ this arr)) val) (return #t)))
                            (return #f))

                    ;; Returns index of the given value, or len if not found
                    (method (,name . indexOf) ((,elem-type val)) (out size_t)
                            (for ((size_t i . 0)) (< i ($ this len)) ((++ i))
                                 (when (== (nth i ($ this arr)) val) (return i)))
                            ;; Not found: return len (similar to C-style idiom)
                            (return ($ this len)))

                    ;; Returns the index of the last occurrence of val, or len if not found
                    (method (,name . lastIndexOf) ((,elem-type val)) (out size_t)
                            (for ((size_t i . #'(- ($ this len) 1))) (>= 0 i) ((-- i))
                                 (when (== (nth i ($ this arr)) val) (return i)))
                            (return ($ this len)))

                    ;; Returns how many times val appears in the slice
                    (method (,name . count) ((,elem-type val)) (out size_t)
                            (let ((size_t c . 0))
                              (for ((size_t i . 0)) (< i ($ this len)) ((++ i))
                                   (when (== (nth i ($ this arr)) val) (++ c)))
                              (return c)))

                    ,@source-body))))
