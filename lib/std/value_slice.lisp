;;;; ValueSlice Macro
;;;; This macro defines a Slice for which all operations produce a new struct value.
;;;; (It is designed for “immutable” style usage where no pointer is returned.)
(DEFMACRO ValueSlice (path name element step members-body header-body source-body)
  (Slice-Scope
    `(Slice ,path ,name ,element ,step
       ( ; MEMBERS: extra fields can be added here.
         ,@members-body
       )
       ( ; HEADER: declare constructors and methods that return value (of type ,name).
         (decl)
         ;; Constructor: Create a new slice from a provided array.
         (func ,(make-method-name name 'new) ((const ,element * xarr) (size_t xlen)) (out ,name))
         ;; Constructor: Create a new empty slice with given capacity.
         (func ,(make-method-name name 'newEmpty) ((size_t xcap)) (out ,name))
         ;; Constructor: Create a copy (deep copy) of an existing slice.
         (func ,(make-method-name name 'newCopy) ((const ,name x)) (out ,name))
         ;; Clone: Returns a copy of self.
         (func ,(make-method-name name 'clone) ((,name self)) (out ,name))
         ;; appendNew: Combines self and other into a new slice.
         (func ,(make-method-name name 'appendNew) ((,name self) (const ,name other)) (out ,name))
         ;; append: Convenience method that returns self appended with other.
         (func ,(make-method-name name 'append) ((,name self) (const ,name other)) (out ,name))
         ,@header-body
       )
       ( ; SOURCE: Implementations for value‐based operations.
         ;; new: Constructs a slice from an array of elements.
         (func ,(make-method-name name 'new) ((const ,element * xarr) (size_t xlen)) (out ,name)
           (let ((,name s))
             (set s.len xlen)
             (set s.cap xlen)
             ;; Perform a deep copy of xarr into s.arr.
             (memcpy s.arr xarr (* (sizeof ,element) xlen))
             (return s)))

         ;; newEmpty: Creates a slice with length 0 and capacity xcap.
         (func ,(make-method-name name 'newEmpty) ((size_t xcap)) (out ,name)
           (let ((,name s))
             (set s.len 0)
             (set s.cap xcap)
             ;; Initialize the memory to zero (or leave "undefined" if preferred).
             (memset s.arr 0 (* (sizeof ,element) xcap))
             (return s)))

         ;; newCopy: Makes a deep copy of a given slice.
         (func ,(make-method-name name 'newCopy) ((const ,name x)) (out ,name)
           (let ((,name s))
             (set s.len x.len)
             (set s.cap x.cap)
             (memcpy s.arr x.arr (* (sizeof ,element) x.len))
             (return s)))

         ;; clone: Simply calls newCopy.
         (func ,(make-method-name name 'clone) ((,name self)) (out ,name)
           (return (-> ,name newCopy self)))

         ;; appendNew: Returns a new slice that contains the contents of self followed by other.
         (func ,(make-method-name name 'appendNew) ((,name self) (const ,name other)) (out ,name)
           (let ((size_t newLen . (+ self.len other.len))
                 (,name result))
             (if (> newLen self.cap)
                 ;; If needed, create a new slice with an increased capacity.
                 (set result (-> ,name newEmpty (+ self.cap ,step)))
                 (set result self))
             ;; Copy self's data (already present in result) and then append other's data.
             (memcpy (+ result.arr self.len) other.arr (* (sizeof ,element) other.len))
             (set result.len newLen)
             (return result)))
         
         ;; append: A convenience function that returns the result of appendNew.
         (func ,(make-method-name name 'append) ((,name self) (const ,name other)) (out ,name)
           (return (-> self appendNew other)))
         
         ,@source-body
       )
    )
  )
)
