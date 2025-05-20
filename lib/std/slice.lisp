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

                 ,@source-body))))

