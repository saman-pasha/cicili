(import "vector.lisp" NIL NIL)

(IN-PACKAGE :CL-USER)

(DEFMACRO String (path name element step include-body members-body header-body source-body)
  (VectorScope
      `(Vector ,path ,name ,element ,step
              ( ; includes
               ,@include-body)
              
              ( ; members
               ,@members-body)
              
              ( ; header
               (decl) (func   (,name . new) ((const ,elem-type * cstr)))
               (decl) (func   (,name . newFormat) ((const char * fmt) ($$$)))
               (decl) (method (,name . substring) ((size_t start) (size_t length)) (out ,name *))
               (decl) (method (,name . concat) ((const ,name * other)) (out ,name *))
               (decl) (method (,name . find) ((char ch)) (out size_t))
               (decl) (method (,name . equals) ((const ,name * other)) (out bool))
               (decl) (method (,name . toUpper) () (out ,name *))
               (decl) (method (,name . toLower) () (out ,name *))
               (decl) (method (,name . trim) () (out ,name *))
               (decl) (method (,name . replace) ((char oldch) (char newch)) (out ,name *))
               (decl) (method (,name . startsWith) ((const ,name * prefix)) (out bool))
               (decl) (method (,name . endsWith) ((const ,name * suffix)) (out bool))

               ;; literal c (element *) to String
               (decl) (func (,element . toString) ((const ,element * cstr)) (out String *))
               ;; String to c (element *)
               (decl) (func (,name . ,(INTERN (FORMAT NIL "to~A" element))) ((,name * str)) (out ,element *))
               
               ,@header-body)
              
              ( ; source
               (func (,name . new) ((const ,elem-type * cstr))
                     (let ((size_t len . #'(strlen cstr))
                           (,name * str . #'(-> ,name newEmpty (+ len 1))))
                       (strncpy ($ str arr) cstr len)
                       (set (nth len ($ str arr)) #\Null)
                       (set ($ str len) len)
                       (return str)))
               
               (func (,name . newFormat) ((const char * fmt) ($$$))
                       (let ((,elem-type buffer [4096])
                             (va_list va_args))
                         (va_start va_args fmt)
                         (vsnprintf buffer 4096 fmt va_args)
                         (va_end va_args)
                         (return (-> ,name new buffer))))
               
               (method (,name . substring) ((size_t start) (size_t length)) (out ,name *)
                       (if (> (+ start length) ($ this len))
                           (return #'(-> ,name new "")))
                       (let ((,name * sub . #'(-> ,name newEmpty (+ length 1))))
                         (strncpy ($ sub arr) (+ ($ this arr) start) length)
                         (set (nth length ($ sub arr)) #\Null)
                         (set ($ sub len) length)
                         (return sub)))

               (method (,name . concat) ((const ,name * other)) (out ,name *)
                       (let ((size_t len . #'(+ ($ this len) ($ other len)))
                             (,name * str . #'(-> ,name newEmpty (+ len 1))))
                         (strncpy ($ str arr) ($ this arr) ($ this len))
                         (strncpy (+ ($ str arr) ($ this len)) ($ other arr) len)
                         (set (nth len ($ str arr)) #\Null)
                         (set ($ str len) len)
                         (return str)))

               (method (,name . find) ((,elem-type ch)) (out size_t)
                       (let ((,elem-type * pos . #'(strchr ($ this arr) ch)))
                         (return (? (!= pos nil) (- pos ($ this arr)) -1))))

               (method (,name . equals) ((const ,name * other)) (out bool)
                       (return (== (strcmp ($ this arr) ($ other arr)) 0)))
               
               (method (,name . toUpper) () (out ,name *)
                       (let ((,name * strCopy . #'(-> ,name newCopy this))
                             (size_t i . 0))
                         (while (< i ($ strCopy len))
                           (set (nth i ($ strCopy arr)) (toupper (nth i ($ strCopy arr))))
                           (set i (+ i 1)))
                         (return strCopy)))
               
               (method (,name . toLower) () (out ,name *)
                       (let ((,name * strCopy . #'(-> ,name newCopy this))
                             (size_t i . 0))
                         (while (< i ($ strCopy len))
                           (set (nth i ($ strCopy arr)) (tolower (nth i ($ strCopy arr))))
                           (set i (+ i 1)))
                         (return strCopy)))

               (method (,name . trim) () (out ,name *)
                       (let ((char * start . #'($ this arr))
                             (char * end . #'(+ ($ this arr) (- ($ this len) 1))))
                         (while (and (< (- start ($ this arr)) ($ this len)) (isspace (* start)))
                           (set start (+ start 1)))
                         (while (and (>= end start) (isspace (* end)))
                           (set end (- end 1)))
                         (let ((size_t newlen . #'(+ 1 (- end start))))
                           (return #'(-> ,name newFromArray start newlen)))))

               (method (,name . replace) ((char oldch) (char newch)) (out ,name *)
                       (let ((,name * strCopy . #'(-> ,name newCopy this))
                             (size_t i . 0))
                         (while (< i ($ strCopy len))
                           (if (== (nth i ($ strCopy arr)) oldch)
                               (set (nth i ($ strCopy arr)) newch))
                           (set i (+ i 1)))
                         (return strCopy)))

               (method (,name . startsWith) ((const ,name * prefix)) (out bool)
                       (if (< ($ this len) ($ prefix len))
                           (return false))
                       (return (== (strncmp ($ this arr) ($ prefix arr) ($ prefix len)) 0)))

               (method (,name . endsWith) ((const ,name * suffix)) (out bool)
                       (if (< ($ this len) ($ suffix len))
                           (return false))
                       (let ((size_t offset . #'(- ($ this len) ($ suffix len))))
                         (return (== (strncmp (+ ($ this arr) offset) ($ suffix arr) ($ suffix len)) 0))))

               (func (,element . toString) ((const ,element * cstr)) (out String *)
                     (return (-> String new cstr)))

               (func (,name . ,(INTERN (FORMAT NIL "to~A" element))) ((,name * str)) (out ,element *)
                     (return (-> str deref)))

               ,@source-body))))
