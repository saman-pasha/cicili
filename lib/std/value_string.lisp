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


;;;; ValueUtf8String Macro
;;;; This macro defines an immutable UTF-8 string type using value semantics.
;;;; All operations return a new ValueUtf8String (a struct value) rather than a pointer.
(DEFMACRO ValueUtf8String (path name step members-body header-body source-body)
  (ValueSlice path name char step
    ( ; MEMBERS: add any extra members if needed.
      ,@members-body
    )
    ( ; HEADER: declare constructors and UTF-8–specific methods.
      (decl)
      ;; Constructor: create a new ValueUtf8String from a C-string.
      (func ,(make-method-name name 'new) ((const char * cstr)) (out ,name))
      ;; Returns the number of Unicode codepoints.
      (func ,(make-method-name name 'codePointCount) ((,name self)) (out size_t))
      ;; Extract a substring specified by codepoint indices.
      (func ,(make-method-name name 'utf8Substring) ((,name self) (size_t startCP) (size_t cpCount)) (out ,name))
      ;; Check whether the stored UTF-8 sequence is valid.
      (func ,(make-method-name name 'isValidUTF8) ((,name self)) (out bool))
      ,@header-body
    )
    ( ; SOURCE: implementations for each method.
      ;; new: Constructs a ValueUtf8String from a C-string.
      (func ,(make-method-name name 'new) ((const char * cstr)) (out ,name)
        (let ((size_t len . (strlen cstr))
              (,name s))
          (set s.len len)
          (set s.cap len)
          ;; Copy the content from cstr into the internal array.
          (strncpy s.arr cstr len)
          (set (nth len s.arr) #\Null)
          (return s)))
      
      ;; codePointCount: Count the number of Unicode codepoints.
      (func ,(make-method-name name 'codePointCount) ((,name self)) (out size_t)
        (let ((size_t count . 0)
              (size_t i . 0)
              (size_t total . self.len))
          (while (< i total)
            (let ((char ch . (nth i self.arr)))
              ;; In UTF-8, continuation bytes have the form 10xxxxxx.
              ;; Count a codepoint if the byte is not a continuation.
              (if (not (and (>= ch #x80) (< ch #xC0)))
                  (set count (+ count 1)))
              (set i (+ i 1)))
          (return count)))
      
      ;; utf8Substring: Extracts a new ValueUtf8String containing cpCount Unicode
      ;; codepoints starting at codepoint index startCP.
      (func ,(make-method-name name 'utf8Substring) ((,name self) (size_t startCP) (size_t cpCount)) (out ,name)
        (let ((size_t currentCP . 0)
              (size_t startByte . 0)
              (size_t endByte . 0)
              (size_t i . 0)
              (size_t total . self.len))
          ;; Advance until we reach the start codepoint.
          (while (and (< i total) (< currentCP startCP))
            (let ((char ch . (nth i self.arr)))
              (if (not (and (>= ch #x80) (< ch #xC0)))
                  (set currentCP (+ currentCP 1)))
              (set i (+ i 1)))
          (set startByte i)
          ;; Continue until we have advanced cpCount codepoints.
          (while (and (< i total) (< currentCP (+ startCP cpCount)))
            (let ((char ch . (nth i self.arr)))
              (if (not (and (>= ch #x80) (< ch #xC0)))
                  (set currentCP (+ currentCP 1)))
              (set i (+ i 1)))
          (set endByte i)
          (let ((size_t subLen . (- endByte startByte))
                (,name sub))
            (set sub.len subLen)
            (set sub.cap subLen)
            (strncpy sub.arr (+ self.arr startByte) subLen)
            (set (nth subLen sub.arr) #\Null)
            (return sub))))
      
      ;; isValidUTF8: Check whether the UTF-8 sequence in self.arr is valid.
      (func ,(make-method-name name 'isValidUTF8) ((,name self)) (out bool)
        (let ((size_t i . 0)
              (size_t total . self.len))
          (while (< i total)
            (let ((char ch . (nth i self.arr)))
              (cond
                ((< ch #x80)
                 (set i (+ i 1)))
                ((and (>= ch #xC2) (<= ch #xDF))
                 (if (or (>= (+ i 1) total)
                         (not (and (>= (nth (+ i 1) self.arr) #x80)
                                   (< (nth (+ i 1) self.arr) #xC0))))
                     (return false))
                 (set i (+ i 2)))
                ((and (>= ch #xE0) (<= ch #xEF))
                 (if (or (>= (+ i 2) total)
                         (not (and (>= (nth (+ i 1) self.arr) #x80)
                                   (< (nth (+ i 1) self.arr) #xC0)))
                         (not (and (>= (nth (+ i 2) self.arr) #x80)
                                   (< (nth (+ i 2) self.arr) #xC0))))
                     (return false))
                 (set i (+ i 3)))
                ((and (>= ch #xF0) (<= ch #xF4))
                 (if (or (>= (+ i 3) total)
                         (not (and (>= (nth (+ i 1) self.arr) #x80)
                                   (< (nth (+ i 1) self.arr) #xC0)))
                         (not (and (>= (nth (+ i 2) self.arr) #x80)
                                   (< (nth (+ i 2) self.arr) #xC0)))
                         (not (and (>= (nth (+ i 3) self.arr) #x80)
                                   (< (nth (+ i 3) self.arr) #xC0))))
                     (return false))
                 (set i (+ i 4)))
                (t (return false)))))
          (return true)))
      
      ,@source-body
    )
  )
)
