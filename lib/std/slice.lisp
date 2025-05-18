;;;; Cicili standard safe Slice struct macro
(IN-PACKAGE :CL-USER)

;;; Slice template macro
;;; name: Slice name
;;; element Slice element type
;;; step growth amount added to the capacity every time Slice gets full
;;; header-body custom functionalities in header file
;;; source-body custom functionalities in source file
(DEFMACRO Slice-Scope (&REST body)
  `(LET ((header-file         (STRING-DOWNCASE (FORMAT NIL "cicili_~A~A.h"  path name)))
         (guard-label (INTERN (STRING-UPCASE   (FORMAT NIL "__CICILI_~A_H_" name))))
         (growth-step (INTERN (STRING-UPCASE   (FORMAT NIL "~A_GROWTH_STEP" name))))
         (elem-type   (INTERN (STRING-DOWNCASE (FORMAT NIL "~A_elem_t"      name)))))
     ,@body))

(DEFMACRO Slice (path name element step members-body header-body source-body)
  (Slice-Scope
      `(cicili
         ;; header file
         (header ,header-file ()
                 (guard ,guard-label
                   
                   (include <stddef.h>)

                   ;; amount each time the capacity will be grown
                   (var const size_t ,growth-step . ,step)
                   
                   ;; element type of the array
                   (typedef ,element ,elem-type)
                   
                   ;; Designed to be safe, fast and optimal with copy-on-write solution
                   (struct ,name
                     (member size_t len)
                     (member size_t cap)
                     (member ,elem-type arr [])
                     ,@members-body)

                   ;; Cicili struct constructors begin with new keyword and aren't method
                   ;; they didn't get this pointer and their out type always is pointer of the struct
                   ;; Slice constructors
                   (decl) (func ,(make-method-name name 'newEmpty)     ((size_t xcap)))
                   (decl) (func ,(make-method-name name 'newFromArray) ((const ,elem-type * xarr) (size_t xlen)))
                   (decl) (func ,(make-method-name name 'newCopy)      ((const ,name * other)))
                   ;; collention of useful Slice methods
                   (decl) (method ,(make-method-name name 'clone)      () (out ,name *))
                   (decl) (method ,(make-method-name name 'cloneArray) () (out ,elem-type *))
                   (decl) (method ,(make-method-name name 'appendNew)  ((const ,name * other)) (out ,name *))
                   (decl) (method ,(make-method-name name 'append)     ((const ,name * other)) (out ,name *))

                 ,@header-body))

       ;; source file
       (source ,(STRING-DOWNCASE (FORMAT NIL "cicili_~A~A.c" path name)) (:std #t :compile #t :link #f)

               (include <ctype.h> <stdarg.h> ,header-file)

               (static)
               (func ,(make-method-name name 'calcCap) ((size_t xcap)) (out '{ (size_t len) (size_t size) })
                     (let ((size_t len . #'(? (> (% xcap ,growth-step) 0)
                                             (+ (/ xcap ,growth-step) 1)
                                             (/ xcap ,growth-step))))
                       (return '{ len (* (sizeof ,elem-type) len) })))

               ;; creates a new Slice instance with allocated cap size
               (func ,(make-method-name name 'newEmpty) ((size_t xlen))
                     (let ((auto ccap . #'(-> ,name calcCap xlen))
                           (,name * slc . #'(malloc (+ (sizeof ,name) ($ ccap size)))))
                       (set ($ slc len) xlen)
                       (set ($ slc cap) ($ ccap len))
                       (return slc)))
               
               ;; initilizes a new Slice and hard copy of array memoty allocated
               (func ,(make-method-name name 'newFromArray) ((const ,elem-type * xarr) (size_t xlen))
                     (let ((,name * slc . #'(-> ,name newEmpty xlen)))
                       (memcpy ($ slc arr) xarr (* (sizeof ,elem-type) xlen))
                       (return slc)))

               ;; initilizes a hard copy of a Slice memoty allocated
               (func ,(make-method-name name 'newCopy) ((const ,name * other))
                     (let ((,name * slc . #'(-> ,name newEmpty ($ other len))))
                       (memcpy ($ slc arr) ($ other arr) (* (sizeof ,elem-type) ($ other len)))
                       (return slc)))

               ;; uses newCopy constructor but as a method 
               (method ,(make-method-name name 'clone) () (out ,name *)
                       (return (-> ,name newCopy this)))

               ;; clones only the arr
               (method ,(make-method-name name 'cloneArray) () (out ,elem-type *)
                       (let ((size_t xsize . #'(* (sizeof ,elem-type) ($ this len)))
                             (,elem-type * xarr . #'(malloc xsize)))
                         (memcpy xarr ($ this arr) xsize)
                         (return xarr)))

               ;; creates a new instance and appends both and other arrs to created instance and returns that
               ;; this and other remain no modification
               (method ,(make-method-name name 'appendNew) ((const ,name * other)) (out ,name *)
                       (let ((size_t tlen . #'(+ ($ this len) ($ other len))))
                         (let ((,name * slc . #'(-> ,name newEmpty tlen)))
                           (memcpy ($ slc arr) ($ this arr) (* (sizeof ,elem-type) ($ this len)))
                           (memcpy (+ ($ slc arr) ($ this len)) ($ other arr) (* (sizeof ,elem-type) ($ other len)))
                           (return slc))))

               ;; appends other arr at the end of current instance (if has cap) and returns this
               ;; other remains no modification
               (method ,(make-method-name name 'append) ((const ,name * other)) (out ,name *)
                       (let ((size_t tlen . #'(+ ($ this len) ($ other len))))
                         (if (<= tlen ($ this cap))
                             (block
                                 (memcpy (+ ($ this arr) ($ this len))
                                   ($ other arr) (* (sizeof ,elem-type) ($ other len)))
                               (return this))
                             (return (-> this appendNew other)))))
               
               ,@source-body))))
