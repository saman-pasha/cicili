(IN-PACKAGE :CL-USER)

(DEFMACRO FileBuffer (path name header-body source-body)
  (LET ((header-file (STRING-DOWNCASE (FORMAT NIL "cicili_~A~A.h" path name)))
        (guard-label (INTERN (STRING-UPCASE (FORMAT NIL "__CICILI_~A_H_" name)))))
    `(CICILI

      ;; Header
      (HEADER ,header-file ()
        (GUARD ,guard-label
          (INCLUDE <stdio.h> <stdbool.h> <stddef.h>)

          (STRUCT ,name
            (MEMBER FILE * handle)
            (MEMBER bool isOpen)
            (MEMBER size_t size)
            ,@header-body)

          ;; Constructors
          (DECL) (FUNC ,(make-method-name name 'openRead)  ((const char * path)))
          (DECL) (FUNC ,(make-method-name name 'openWrite) ((const char * path)))
          (DECL) (FUNC ,(make-method-name name 'openAppend)((const char * path)))

          ;; Methods
          (DECL) (METHOD ,(make-method-name name 'readAll)    () (OUT char *))
          (DECL) (METHOD ,(make-method-name name 'writeStr)   ((const char * str)) (OUT void))
          (DECL) (METHOD ,(make-method-name name 'flush)      () (OUT void))
          (DECL) (METHOD ,(make-method-name name 'close)      () (OUT void))
          (DECL) (METHOD ,(make-method-name name 'getSize)    () (OUT size_t))
          (DECL) (METHOD ,(make-method-name name 'isOpened)   () (OUT bool))))

      ;; Source
      (SOURCE ,(STRING-DOWNCASE (FORMAT NIL "cicili_~A~A.c" path name)) (:STD #T :COMPILE #T :LINK #F)
        (INCLUDE ,header-file)

        ;; Open for read
        (FUNC ,(make-method-name name 'openRead) ((const char * path))
          (LET ((,name * fb . #'(malloc (sizeof ,name))))
            (SET ($ fb handle) (fopen path "r"))
            (SET ($ fb isOpen) (!= ($ fb handle) NULL))
            (IF ($ fb isOpen)
                (BLOCK
                  (fseek ($ fb handle) 0 SEEK_END)
                  (SET ($ fb size) (ftell ($ fb handle)))
                  (rewind ($ fb handle))))
            (RETURN fb)))

        ;; Open for write
        (FUNC ,(make-method-name name 'openWrite) ((const char * path))
          (LET ((,name * fb . #'(malloc (sizeof ,name))))
            (SET ($ fb handle) (fopen path "w"))
            (SET ($ fb isOpen) (!= ($ fb handle) NULL))
            (SET ($ fb size) 0)
            (RETURN fb)))

        ;; Open for append
        (FUNC ,(make-method-name name 'openAppend) ((const char * path))
          (LET ((,name * fb . #'(malloc (sizeof ,name))))
            (SET ($ fb handle) (fopen path "a+"))
            (SET ($ fb isOpen) (!= ($ fb handle) NULL))
            (SET ($ fb size) 0)
            (RETURN fb)))

        ;; Read all
        (METHOD ,(make-method-name name 'readAll) () (OUT char *)
          (IF (! ($ this isOpen)) (RETURN NULL))
          (LET ((char * buffer . #'(malloc (+ ($ this size) 1))))
            (fread buffer 1 ($ this size) ($ this handle))
            (SET (nth ($ this size) buffer) #\Null)
            (RETURN buffer)))

        ;; Write string
        (METHOD ,(make-method-name name 'writeStr) ((const char * str)) (OUT void)
          (IF ($ this isOpen)
              (fprintf ($ this handle) "%s" str)))

        ;; Flush
        (METHOD ,(make-method-name name 'flush) () (OUT void)
          (IF ($ this isOpen) (fflush ($ this handle))))

        ;; Close
        (METHOD ,(make-method-name name 'close) () (OUT void)
          (IF ($ this isOpen)
              (BLOCK
                (fclose ($ this handle))
                (SET ($ this isOpen) #f))))

        ;; Size getter
        (METHOD ,(make-method-name name 'getSize) () (OUT size_t)
          (RETURN ($ this size)))

        ;; Check if open
        (METHOD ,(make-method-name name 'isOpened) () (OUT bool)
          (RETURN ($ this isOpen)))

        ,@source-body))))
