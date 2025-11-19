;;; sample code
;;; writes many sentences to a temporary file
;;; reads file part by part
;;; stores them in a list of strings
;;; iterate over all parts
;;; count the words in each part separated by space or newline character
(source "word_count_bench.c" (:std #t :compile #t
                                   :link "-L{$CCL} -lhaskell.o -L{$CWD} word_count_bench.o -o word_count_bench")
        (include "../haskell.h")
        (include <errno.h>)
        (include <time.h>)
        
        (typedef char * cstr_t)
        (typedef FILE * cfile_t)

        (decl-Either String cfile_t) ; for header file
        (impl-Either String cfile_t) ; for source file
        
        ;; https://en.cppreference.com/w/c/io/fgets
        (func writeTmpFile ()
              (out Either^String^cfile_t) ; Haskell error handling model in Cicili

              (let ((FILE * tmpf . #'(tmpfile)))

                (when (== tmpf nil)
                  (Left^String^cfile_t (strerror errno))) ; on failure returns error number
                
                (fputs "Alan Turing\n"      tmpf)
                (fputs "John von Neumann\n" tmpf)
                (fputs "Alonzo Church\n"    tmpf)

                ;; ((<> Right String^cfile_t) tmpf) ! Notice ^ works as (<>) clause
                (return (Right^String^cfile_t tmpf)))) ; on success returns FILE*

        ;; a helper to safely read a file as List of String s
        (func safeReadFile ((FILE * file))
              (out List^String) ; List^String defined in prelude
              (return
                (case (== file nil) (Empty^String)
                      otherwise     (letn ((char buf [8]) ; letn returns last clause
                                           (size_t count . 0))
                                      (set count (fread buf (sizeof char) (sizeof buf) file))
                                      (case (== count 0)           (Empty^String)
                                            (< count (sizeof buf)) (Cons^String (new^String buf count) (Empty^String))
                                            otherwise              (Cons^String (new^String buf count) (safeReadFile file)))
                                      ))))
        
        ;; split by #\Space or #\Newline
        (func count_words ((String text))
              (out int)
              (return (match text
                        (* Cons ch (= tail * Cons) ; if there is another character
                           (case (or (== ch #\Space) (== ch #\Newline)) (+ 1 (count_words tail))
                                 otherwise (count_words tail)))
                        (default 1)))) ; means Empty, but all matchs need default case

        ;; Iterate over list and Count words in each String
        (func iter_words ((List^String list))
              (io list
                (* Cons str tail
                   (progn
                     (show^String str)
                     (printf " Word count: %d\n" (count_words str))
                     (iter_words tail)
                     (free^String (aof str))))
                ;; last element of a list is rcgallocated too
                ;; = in io and match makes an alias for whole object
                (= empty_str default (free^String (aof empty_str)))))

        ;; to auto deferment file close
        (func file_close ((FILE ** file_ptr))
              (printf "file closed deferred\n")
              (fclose (cof file_ptr)))
        
        (main
            (let ((auto start . #'(time nil)))
              
              (for ((int i . 0)) (< i 1000000) ((++ i))
                   
                   (letin* ((tmpf (writeTmpFile)))
                     (io tmpf
                       (Left  error (letin* ((error error free^String))
                                      (printf "File opening error: ")
                                      (show^String error)
                                      (putchar #\Newline)))
                       (Right file
                              (letin* ((file file file_close))
                                (rewind file)
                                (io (safeReadFile file)
                                  (* Empty (printf "Error: nothing to read\n"))
                                  (= first_cons * Cons
                                     (progn
                                       (printf "File loaded successfully!\n")
                                       (iter_words first_cons))))))))

                   ) ; for
              
              (format #t "%lu seconds elapsed\n" (cast ulong (- (time nil) start))))))
