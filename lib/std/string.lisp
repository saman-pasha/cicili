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
               ,@members-body)
              ( ; header
                 (decl) (func   ,(make-method-name name 'new) ((const ,elem-type * cstr)))
                 (decl) (method ,(make-method-name name 'substring) ((size_t start) (size_t length)) (out ,name *))
                 (decl) (method ,(make-method-name name 'concat) ((const ,name * other)) (out ,name *))
                 (decl) (method ,(make-method-name name 'find) ((char ch)) (out size_t))
                 (decl) (method ,(make-method-name name 'equals) ((const ,name * other)) (out bool))
                 (decl) (method ,(make-method-name name 'format) ((const char * fmt) ($$$)) (out ,name *)) ; ($$$) var-args
                 (decl) (method ,(make-method-name name 'toUpper) () (out ,name *))
                 (decl) (method ,(make-method-name name 'toLower) () (out ,name *))
               ,@header-body)
              ( ; source
               ;; copies the content of cstr into new String cstr
               (func ,(make-method-name name 'new) ((const ,elem-type * cstr))
                     (let ((size_t len . #'(strlen cstr))
                           (,name * str . #'(malloc (+ (sizeof ,name) (* (sizeof ,elem-type) (+ len 1))))))
                       (strncpy ($ str arr) cstr len)
                       (set (nth len ($ str arr)) #\Null)
                       (return str)))
               
               ;; Extracts a substring as a new String
               (method ,(make-method-name name 'substring) ((size_t start) (size_t length)) (out ,name *)
                       (if (>= (+ start length) ($ this len))
                           (return #'(-> String new "")))
                       (let ((,name * sub . #'(-> String newEmpty length)))
                         (strncpy ($ sub arr) (+ ($ this arr) start) length)
                         (set (nth length ($ sub arr)) #\Null)
                         (return sub)))

               ;; Concatenates another string and returns a new instance
               (method ,(make-method-name name 'concat) ((const ,name * other)) (out ,name *)
                       (return #'(-> this appendNew other)))

               ;; Finds the first occurrence of a character, returns index or -1
               (method ,(make-method-name name 'find) ((,elem-type ch)) (out size_t)
                       (let ((,elem-type * pos . #'(strchr ($ this arr) ch)))
                         (return (? (!= pos nil) (- pos ($ this arr)) -1))))

               ;; Compares two strings for equality
               (method ,(make-method-name name 'equals) ((const ,name * other)) (out bool)
                       (return (== (strcmp ($ this arr) ($ other arr)) 0)))
              
               ;; New formatting method - formats a string using C-style format string and varargs.
               (method ,(make-method-name name 'format) ((const char * fmt) ($$$)) (out ,name *)
                       (let ((,elem-type buffer [4096]) ; fixed buffer size for demonstration
                             (va_list va_args))
                         (va_start va_args fmt)
                         (vsnprintf buffer 4096 fmt va_args) ; pseudo-code to handle varargs
                         (va_end va_args)
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
               
               ,@source-body))))
