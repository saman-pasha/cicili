;;;; ValueString Macro
;;;; This macro extends ValueSlice to implement an immutable string type.
;;;; All methods use value semantics (i.e. they produce a new ValueString struct).
(DEFMACRO ValueString (path name step members-body header-body source-body)
  (ValueSlice path name char step
    ( ; MEMBERS: extra members may be defined here (if needed)
      ,@members-body
    )
    ( ; HEADER: declare constructors and methods returning a value (of type ,name)
      (decl)
      ;; Constructor: Create a new ValueString from a C-string.
      (func ,(make-method-name name 'new) ((const char * cstr)) (out ,name))
      ;; Constructor: Create a new empty ValueString with a specified capacity.
      (func ,(make-method-name name 'newEmpty) ((size_t cap)) (out ,name))
      ;; Constructor: Make a deep copy of a given ValueString.
      (func ,(make-method-name name 'newCopy) ((,name src)) (out ,name))
      ;; Clone: Return a copy of a given ValueString.
      (func ,(make-method-name name 'clone) ((,name self)) (out ,name))
      ;; substring: Extract a substring starting at index 'start' of length 'len'.
      (func ,(make-method-name name 'substring) ((,name self) (size_t start) (size_t sublen)) (out ,name))
      ;; append: Return a new ValueString which is the concatenation of self and other.
      (func ,(make-method-name name 'append) ((,name self) (const ,name other)) (out ,name))
      ;; toUpper: Produce a new ValueString with all characters converted to uppercase.
      (func ,(make-method-name name 'toUpper) ((,name self)) (out ,name))
      ;; toLower: Produce a new ValueString with all characters converted to lowercase.
      (func ,(make-method-name name 'toLower) ((,name self)) (out ,name))
      ;; equals: Compare two ValueString values for equality.
      (func ,(make-method-name name 'equals) ((,name self) (const ,name other)) (out bool))
      ,@header-body
    )
    ( ; SOURCE: Implement the methods using value semantics.
      ;; new: Constructs a ValueString from a C-string.
      (func ,(make-method-name name 'new) ((const char * cstr)) (out ,name)
         (let ((size_t len . (strlen cstr))
               (,name s))
           (set s.len len)
           (set s.cap len)
           ;; Copy the C-string into s.arr.
           (strncpy s.arr cstr len)
           ;; Null-terminate s.arr.
           (set (nth len s.arr) #\Null)
           (return s)))
      
      ;; newEmpty: Creates an empty ValueString with capacity 'cap'.
      (func ,(make-method-name name 'newEmpty) ((size_t cap)) (out ,name)
         (let ((,name s))
           (set s.len 0)
           (set s.cap cap)
           (memset s.arr 0 (* (sizeof char) cap))
           (return s)))
      
      ;; newCopy: Returns a deep copy of a given ValueString.
      (func ,(make-method-name name 'newCopy) ((,name src)) (out ,name)
         (let ((,name s))
           (set s.len src.len)
           (set s.cap src.cap)
           (memcpy s.arr src.arr (* (sizeof char) src.len))
           (return s)))
      
      ;; clone: Simply returns newCopy(self).
      (func ,(make-method-name name 'clone) ((,name self)) (out ,name)
         (return (-> ,name newCopy self)))
      
      ;; substring: Extracts a substring starting at 'start' with length 'sublen'.
      (func ,(make-method-name name 'substring) ((,name self) (size_t start) (size_t sublen)) (out ,name)
         (if (>= start self.len)
             (return (-> ,name new "")))  ; return empty if start out-of-bound.
         (let ((size_t realLen . (if (> (+ start sublen) self.len)
                                       (- self.len start)
                                       sublen))
               (,name sub))
           (set sub.len realLen)
           (set sub.cap realLen)
           (strncpy sub.arr (+ self.arr start) realLen)
           (set (nth realLen sub.arr) #\Null)
           (return sub)))
      
      ;; append: Concatenates self and other into a new ValueString.
      (func ,(make-method-name name 'append) ((,name self) (const ,name other)) (out ,name)
         (let ((size_t totalLen . (+ self.len other.len))
               (,name res))
           (if (> totalLen self.cap)
               (set res (-> ,name newEmpty totalLen))
               (set res self))
           (memcpy (+ res.arr self.len) other.arr (* (sizeof char) other.len))
           (set res.len totalLen)
           (return res)))
      
      ;; toUpper: Returns a new ValueString with all characters in uppercase.
      (func ,(make-method-name name 'toUpper) ((,name self)) (out ,name)
         (let ((,name s . (-> ,name clone self))
               (size_t i . 0))
           (while (< i s.len)
             (set (nth i s.arr) (toupper (nth i s.arr)))
             (set i (+ i 1)))
           (return s)))
      
      ;; toLower: Returns a new ValueString with all characters in lowercase.
      (func ,(make-method-name name 'toLower) ((,name self)) (out ,name)
         (let ((,name s . (-> ,name clone self))
               (size_t i . 0))
           (while (< i s.len)
             (set (nth i s.arr) (tolower (nth i s.arr)))
             (set i (+ i 1)))
           (return s)))
      
      ;; equals: Compares two ValueString values for equality.
      (func ,(make-method-name name 'equals) ((,name self) (const ,name other)) (out bool)
         (return (== (strcmp self.arr other.arr) 0)))
      
      ,@source-body
    )
  )
)
