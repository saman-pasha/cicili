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

;;;; UTF8String: An extension of the Slice struct for UTF-8 strings.
;;;; This macro builds on the Slice macro and adds UTF-8–specific methods.
;;;; New methods added:
;;;;   • 'isValidUTF8' returns a bool indicating if the string is valid UTF-8.
;;;;   • 'toUTF16' converts the UTF8String into a newly allocated UTF-16 buffer.
(DEFMACRO UTF8String (path name element step members-body header-body source-body)
  (Slice-Scope
    `(Slice ,path ,name ,element ,step
       ( ; members: optionally add any UTF-8 specific members here
         ,@members-body
       )
       ( ; header: declare constructors plus additional UTF-8 methods
         (decl)
         (func ,(make-method-name name 'new) ((const ,elem-type * cstr)))
         (decl) (method ,(make-method-name name 'codePointCount) () (out size_t))
         (decl) (method ,(make-method-name name 'utf8Substring) ((size_t startCP) (size_t cpCount)) (out ,name *))
         (decl) (method ,(make-method-name name 'isValidUTF8) () (out bool))
         (decl) (method ,(make-method-name name 'toUTF16) () (out uint16_t *))
         ,@header-body
       )
       ( ; source: implement constructors and new UTF-8 methods
         ;; Constructor: new() creates a new UTF8String from a C-string.
         (func ,(make-method-name name 'new) ((const ,elem-type * cstr))
           (let ((size_t len . #'(strlen cstr))
                 (,name * str . #'(malloc (+ (sizeof ,name) (* (sizeof ,elem-type) (+ len 1))))))
             (strncpy ($ str arr) cstr len)
             (set (nth len ($ str arr)) #\Null)
             (return str)))

         ;; Method: codePointCount - counts Unicode codepoints.
         (method ,(make-method-name name 'codePointCount) () (out size_t)
           (let ((size_t count . 0)
                 (size_t i . 0)
                 (size_t total . ($ this len)))
             (while (< i total)
               (let ((char ch . (nth i ($ this arr))))
                 ;; Count the byte if it's not a continuation (10xxxxxx).
                 (if (not (and (>= ch #x80) (< ch #xC0)))
                     (set count (+ count 1)))
                 (set i (+ i 1)))
             (return count)))
         
         ;; Method: utf8Substring - extracts a substring specified in codepoint indices.
         (method ,(make-method-name name 'utf8Substring) ((size_t startCP) (size_t cpCount)) (out ,name *)
           (let ((size_t currentCP . 0)
                 (size_t startByte . 0)
                 (size_t endByte . 0)
                 (size_t i . 0)
                 (size_t total . ($ this len)))
             ;; Find byte offset corresponding to startCP.
             (while (and (< i total) (< currentCP startCP))
               (let ((char ch . (nth i ($ this arr))))
                 (if (not (and (>= ch #x80) (< ch #xC0)))
                     (set currentCP (+ currentCP 1)))
                 (set i (+ i 1)))
             (set startByte i)
             ;; Continue until cpCount codepoints are traversed.
             (while (and (< i total) (< currentCP (+ startCP cpCount)))
               (let ((char ch . (nth i ($ this arr))))
                 (if (not (and (>= ch #x80) (< ch #xC0)))
                     (set currentCP (+ currentCP 1)))
                 (set i (+ i 1)))
             (set endByte i)
             (let ((size_t subLen . (- endByte startByte)))
               (let ((,name * subStr . #'(-> ,name newEmpty subLen)))
                 (strncpy ($ subStr arr) (+ ($ this arr) startByte) subLen)
                 (set (nth subLen ($ subStr arr)) #\Null)
                 (return subStr)))))

         ;; Method: isValidUTF8 - checks if the byte sequence is valid UTF-8.
         (method ,(make-method-name name 'isValidUTF8) () (out bool)
           (let ((size_t i . 0)
                 (size_t total . ($ this len)))
             (while (< i total)
               (let ((char ch . (nth i ($ this arr))))
                 (cond
                   ((< ch #x80)
                    (set i (+ i 1)))
                   ((and (>= ch #xC2) (<= ch #xDF))
                    (if (or (>= (+ i 1) total)
                            (not (and (>= (nth (+ i 1) ($ this arr)) #x80)
                                      (< (nth (+ i 1) ($ this arr)) #xC0)))
                            )
                        (return false))
                    (set i (+ i 2)))
                   ((and (>= ch #xE0) (<= ch #xEF))
                    (if (or (>= (+ i 2) total)
                            (not (and (>= (nth (+ i 1) ($ this arr)) #x80)
                                      (< (nth (+ i 1) ($ this arr)) #xC0)))
                            (not (and (>= (nth (+ i 2) ($ this arr)) #x80)
                                      (< (nth (+ i 2) ($ this arr)) #xC0)))
                            )
                        (return false))
                    (set i (+ i 3)))
                   ((and (>= ch #xF0) (<= ch #xF4))
                    (if (or (>= (+ i 3) total)
                            (not (and (>= (nth (+ i 1) ($ this arr)) #x80)
                                      (< (nth (+ i 1) ($ this arr)) #xC0)))
                            (not (and (>= (nth (+ i 2) ($ this arr)) #x80)
                                      (< (nth (+ i 2) ($ this arr)) #xC0)))
                            (not (and (>= (nth (+ i 3) ($ this arr)) #x80)
                                      (< (nth (+ i 3) ($ this arr)) #xC0)))
                            )
                        (return false))
                    (set i (+ i 4)))
                   (t (return false)))))
             (return true)))

         ;; Method: toUTF16 - converts this UTF8String to a UTF-16 encoded buffer.
         ;; NOTE: This implementation assumes that all codepoints lie in the BMP.
         (method ,(make-method-name name 'toUTF16) () (out uint16_t *)
           (let ((size_t count . (-> this codePointCount))
                 (uint16_t * buf . (malloc (* (sizeof uint16_t) (+ count 1))))) ; allocate count+1 entries
             (let ((size_t i . 0) (size_t idx . 0) (size_t total . ($ this len)))
               (while (< i total)
                 (let ((char ch . (nth i ($ this arr))))
                   (if (and (>= ch #x80) (< ch #xC0))
                       ;; Skip continuation bytes.
                       (set i (+ i 1))
                     ;; For simplicity, assume ASCII or BMP.  For multi-byte sequences,
                     ;; a proper implementation would decode the full Unicode codepoint.
                     (set (nth idx buf) (uint16_t ch))
                     (set idx (+ idx 1))
                     (set i (+ i 1)))))
               (set (nth idx buf) 0))  ; null terminate the UTF16 buffer.
             (return buf)))
         
         ,@source-body
       )
    )
  )
)
