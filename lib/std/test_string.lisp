(import "slice.lisp" ())
(import "utf8string.lisp" ())

(IN-PACKAGE :CL-USER)

;; The main function to test all String and UTF8String functionalities.
(func main () (out int)
  (format #t "\n--- Testing String Functionality ---\n")
  ;; Create a new String instance.
  (let ((String * s1 . (-> String new "Hello, Cicili!")))
    (format #t "s1: %s\n" ($ s1 arr))
    
    ;; Test clone
    (let ((String * s2 . (-> s1 clone)))
      (format #t "s2 (clone of s1): %s\n" ($ s2 arr))
      (if (-> s1 equals s2)
          (format #t "s1 equals s2: Yes\n")
          (format #t "s1 equals s2: No\n")))
    
    ;; Test substring (extract a substring starting at byte index 7 for 8 bytes)
    (let ((String * sub . (-> s1 substring 7 8)))
      (format #t "s1 substring (index 7, len 8): %s\n" ($ sub arr)))
    
    ;; Test concatenation: concatenate s1 with another string.
    (let ((String * s3 . (-> String new " World")))
      (let ((String * concatStr . (-> s1 concat s3)))
        (format #t "Concat (s1 + s3): %s\n" ($ concatStr arr))))
    
    ;; Test find: get the index of character 'C'
    (let ((size_t pos . (-> s1 find #\C)))
      (format #t "Index of 'C' in s1: %d\n" pos))
    
    ;; Test format: build a new string via format.
    (let ((String * formatted . (-> String format "Name: %s, Score: %d" "Alice" 95)))
      (format #t "Formatted String: %s\n" ($ formatted arr)))
    
    ;; Test toUpper: convert s1 to uppercase.
    (let ((String * upper . (-> s1 toUpper)))
      (format #t "Uppercase s1: %s\n" ($ upper arr)))
    
    ;; Test toLower: convert s1 to lowercase.
    (let ((String * lower . (-> s1 toLower)))
      (format #t "Lowercase s1: %s\n" ($ lower arr)))
    
    ;; Test encodeBase64: (note that the actual base64 encoding implementation is pseudo-code).
    (let ((String * b64 . (-> s1 encodeBase64)))
      (format #t "Base64 encoded s1: %s\n" ($ b64 arr))))
  
  (format #t "\n--- Testing UTF8String Functionality ---\n")
  ;; Create a new UTF8String instance with mixed-language content.
  (let ((UTF8String * ustr . (-> UTF8String new "Héllo, 世界!")))
    (format #t "UTF8String: %s\n" ($ ustr arr))
    
    ;; Test codePointCount
    (let ((size_t cpCount . (-> ustr codePointCount)))
      (format #t "CodePoint Count: %d\n" cpCount))
    
    ;; Test isValidUTF8
    (if (-> ustr isValidUTF8)
        (format #t "UTF8String is valid UTF-8.\n")
        (format #t "UTF8String is NOT valid UTF-8!\n"))
    
    ;; Test utf8Substring: extract 5 codepoints starting from index 2.
    (let ((UTF8String * uSub . (-> ustr utf8Substring 2 5)))
      (format #t "UTF8Substring (5 cp starting at cp index 2): %s\n" ($ uSub arr)))
    
    ;; Test toUTF16: convert UTF8String to UTF-16.
    (let ((uint16_t * utf16buf . (-> ustr toUTF16)))
      (format #t "UTF16 Buffer (hex): ")
      (let ((size_t i . 0)
            (size_t cp . (-> ustr codePointCount)))  ; number of codepoints inserted
        (while (< i cp)
          (format #t "%04X " (nth i utf16buf))
          (set i (+ i 1)))
        (format #t "\n")))
    )
  
  (return 0))
