(import "slice.lisp" ())

(IN-PACKAGE :CL-USER)

;;;; Cicili standard String struct inherits from Slice struct
;;; What is the optimal StringBuffer initial capacity for inputs with drastically varying lengths?
;;; 60% of the time, it is only (exactly) 7 characters.
;;; 39% of the time, it is (roughly) 3500 characters.
;;; 1% of the time, it is roughly 20k characters.
(DEFMACRO String (path name element step members-body header-body source-body)
  (Slice-Scope
      `(Slice ,path ,name ,element ,step
              ( ; members
               ,@members-body
               )
              ( ; header
               (decl)
               (func ,(make-method-name name 'new) ((const ,elem-type * cstr)))
               (decl) (method ,(make-method-name name 'substring) ((size_t start) (size_t length)) (out ,name *))
               (decl) (method ,(make-method-name name 'concat) ((const ,name * other)) (out ,name *))
               (decl) (method ,(make-method-name name 'find) ((char ch)) (out size_t))
               (decl) (method ,(make-method-name name 'equals) ((const ,name * other)) (out bool))
               (decl) (method ,(make-method-name name 'format) ((const char * fmt) ...) (out ,name *))
               (decl) (method ,(make-method-name name 'toUpper) () (out ,name *))
               (decl) (method ,(make-method-name name 'toLower) () (out ,name *))
               (decl) (method ,(make-method-name name 'encodeBase64) () (out ,name *))
               ,@header-body
               )
              ( ; source
               ;; copies the content of cstr into new String cstr
               (func ,(make-method-name name 'new) ((const ,elem-type * cstr))
                     (let ((size_t len . #'(strlen cstr))
                           (,name * str . #'(malloc (+ (sizeof ,name) (* (sizeof ,elem-type) (+ len 1))))))
                       (strncpy ($ str arr) cstr len)
                       (set (nth len ($ str arr)) #\Null)
                       (return str)))
               
               ;; Existing Slice constructors
               (func ,(make-method-name name 'newEmpty) ((size_t xlen))
                     (let ((auto ccap . #'(-> ,name calcCap xlen))
                           (,name * slc . #'(malloc (+ (sizeof ,name) ($ ccap size)))))
                       (set ($ slc len) xlen)
                       (set ($ slc cap) ($ ccap len))
                       (return slc)))
               
               (func ,(make-method-name name 'newFromArray) ((const ,elem-type * xarr) (size_t xlen))
                     (let ((,name * slc . #'(-> ,name newEmpty xlen)))
                       (memcpy ($ slc arr) xarr (* (sizeof ,elem-type) xlen))
                       (return slc)))
               
               (func ,(make-method-name name 'newCopy) ((const ,name * other))
                     (let ((,name * slc . #'(-> ,name newEmpty ($ other len))))
                       (memcpy ($ slc arr) ($ other arr) (* (sizeof ,elem-type) ($ other len)))
                       (return slc)))
               
               (method ,(make-method-name name 'clone) () (out ,name *)
                       (return (-> ,name newCopy this)))
               
               (method ,(make-method-name name 'cloneArray) () (out ,elem-type *)
                       (let ((size_t xsize . #'(* (sizeof ,elem-type) ($ this len)))
                             (,elem-type * xarr . #'(malloc xsize)))
                         (memcpy xarr ($ this arr) xsize)
                         (return xarr)))
               
               (method ,(make-method-name name 'appendNew) ((const ,name * other)) (out ,name *)
                       (let ((size_t tlen . #'(+ ($ this len) ($ other len))))
                         (let ((,name * slc . #'(-> ,name newEmpty tlen)))
                           (memcpy ($ slc arr) ($ this arr) (* (sizeof ,elem-type) ($ this len)))
                           (memcpy (+ ($ slc arr) ($ this len)) ($ other arr) (* (sizeof ,elem-type) ($ other len)))
                           (return slc))))
               
               (method ,(make-method-name name 'append) ((const ,name * other)) (out ,name *)
                       (let ((size_t tlen . #'(+ ($ this len) ($ other len))))
                         (if (<= tlen ($ this cap))
                             (block
                               (memcpy (+ ($ this arr) ($ this len))
                                       ($ other arr) (* (sizeof ,elem-type) ($ other len)))
                               (return this))
                             (return (-> this appendNew other)))))
               
               ;; New formatting method - formats a string using C-style format string and varargs.
               (method ,(make-method-name name 'format) ((const char * fmt) ...) (out ,name *)
                       (let ((char buffer [4096]))  ; fixed buffer size for demonstration
                         (vsnprintf buffer 4096 fmt (GET-VARARGS))  ; pseudo-code to handle varargs
                         (return (-> ,name new buffer))))
               
               ;; New toUpper method - returns a new String in uppercase.
               (method ,(make-method-name name 'toUpper) () (out ,name *)
                       (let ((,name * strCopy . #'(-> ,name newCopy this)))
                         (let ((size_t i . 0))
                           (while (< i ($ strCopy len))
                             (set (nth i ($ strCopy arr)) 
                                  (toupper (nth i ($ strCopy arr))))
                             (set i (+ i 1))))
                         (return strCopy)))
               
               ;; New toLower method - returns a new String in lowercase.
               (method ,(make-method-name name 'toLower) () (out ,name *)
                       (let ((,name * strCopy . #'(-> ,name newCopy this)))
                         (let ((size_t i . 0))
                           (while (< i ($ strCopy len))
                             (set (nth i ($ strCopy arr))
                                  (tolower (nth i ($ strCopy arr))))
                             (set i (+ i 1))))
                         (return strCopy)))
               
               ;; New encodeBase64 method - returns a new String with Base64 encoded contents.
               ;; (Assume base64_encode is a provided function, or replace with your implementation.)
               (method ,(make-method-name name 'encodeBase64) () (out ,name *)
                       (let ((,name * encoded . #'(-> ,name newEmpty ($ this len))))  ; starting capacity = current len
                         (base64_encode ($ this arr) ($ this len) ($ encoded arr)) ; pseudo-code call
                         (set ($ encoded len) (strlen ($ encoded arr)))
                         (return encoded)))
               
               ,@source-body))))
