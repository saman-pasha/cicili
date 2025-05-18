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
               (decl) (func ,(make-method-name name 'new) ((const ,elem-type * cstr)))
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
               ,@source-body
               ))))

(String "" String char 256 () () ())
