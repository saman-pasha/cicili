(in-package :cicili)

;; IR Intermediate Representation
(defun create-globals (ir &optional (globals (make-hash-table :test 'eql)))
  (maphash #'(lambda (name spec)
	           (case (construct spec)
		         (|@VAR|      (setf (gethash name globals) spec))
		         (|@FUNC|     (setf (gethash name globals) spec))
		         (|@METHOD|   (setf (gethash name globals) spec))
		         (|@TYPEDEF|  (setf (gethash name globals) spec))
		         (|@ENUM|
		          (unless (anonymous spec) (setf (gethash name globals) spec))
		          (maphash #'(lambda (k v) (setf (gethash k globals) v)) (inners spec)))
		         (|@STRUCT|
		          (setf (gethash name globals) spec)
		          (maphash #'(lambda (k v)
			                   (when (eql (construct v) '|@DECLARE|) (setf (gethash k globals) v)))
			               (inners spec)))
		         (|@UNION|
		          (setf (gethash name globals) spec)
		          (maphash #'(lambda (k v)
			                   (when (eql (construct v) '|@DECLARE|) (setf (gethash k globals) v)))
			               (inners spec)))
		         (|@GUARD| (create-globals spec globals))
		         (otherwise nil)))
	       (inners ir))
  globals)

;;;; AST Abstract Syntax Tree
(defun compile-ast (targets)
  (setf *gensym-counter* 100)
  (dolist (target targets)
    (let* ((tname   (car target))
	       (ir      nil)
           (macro (if (symbolp tname) (gethash (symbol-name tname) *macros*) nil)))
      (cond ((key-eq tname '|import|) (load-macro-file (cadr target) (caddr target) (cadddr target)))
            ((key-eq tname '|cicili|)
             (compile-ast (cdr target)))
            
            ((key-eq tname '|DEFMACRO|)
             (let ((symb (eval target)))
               (add-macro (symbol-name symb) symb)))

            ((or (key-eq tname '|header|) (key-eq tname '|source|))
	         (cond ((or (key-eq tname '|source|) (key-eq tname '|header|)) ; target
                    (setf *target-header* (key-eq tname '|header|))
                    (setf *target-source* (key-eq tname '|source|))

                    (unless *only-link* (setq ir (specify-target target)))
                    (setf *target-spec* ir)
                    (setf *target-file* (file-namestring (nth 1 target)))
                    (setf *cpp* (and (getf (nth 2 target) ':|cpp|) (key-eq (getf (nth 2 target) ':|cpp|) '|true|)))

                    (let ((file (nth 1 target))
                          (globals nil)
                          (reached-translation-unit nil)
                          (reached-file nil)
                          (stdout nil)
                          (stderr nil)
                          (has-error t))
                      
                      ;; clear IR
                      (setq *ast-lines* '())
                      (push (make-hash-table :test 'equal) *ast-lines*)
                      (setq *ast-run* 0)
                      (do ((run 0 (1+ run))) ; resolver runs
                          ((or (null has-error)
                             *only-link*
                             (= run (if (key-eq tname '|header|) 1
                                        (if (and *more-run* (= run (1+ *ast-total-runs*)))
                                            (setq *ast-total-runs* (1+ *ast-total-runs*))
                                            *ast-total-runs*)))))
                        (setf *more-run* nil)
                        (push *next-ast-line* *ast-lines*)
                        (setf *next-ast-line* (make-hash-table :test 'equal))

                        ;; clear GC
                        (when (> (length *ast-lines*) 2)
                          (clrhash (nth 2 *ast-lines*))
                          (setf (nth 2 *ast-lines*) (make-hash-table :test 'equal)))
                        
	                    (setq globals (create-globals ir))
                        (setq *ast-run* (1+ run))
                        (when (and *debug-runs* (key-eq tname '|source|)) ;; --separate
                          (setq file (format nil "~A.run~D.~A" (nth 1 target) *ast-run* (pathname-type (nth 1 target)))))
                        (setq stdout  (make-string-output-stream))
                        (setq stderr  (make-string-output-stream))
                        
                        ;; manipulate ast
                        (setq has-error nil)
                        (let ((start-time (get-universal-time)))
	                      (compile-target file (nth 2 target) ir globals stdout stderr t (key-eq tname '|header|))
                          (display "C compiling time:" (- (get-universal-time) start-time) "s" #\Newline))
                        
                        ;; iterate over errors
                        (let ((info "")
                              (ast-key "")
                              (start-time (get-universal-time)))
                          (with-input-from-string (err-stream (get-output-stream-string stderr))
                            (do ((s (read-line err-stream nil nil) (read-line err-stream nil nil)))
                                ((eql s nil))
                              (if (str:starts-with-p file s)
                                  (let* ((err-line (str:split #\: s :limit 5)))
                                    ;; logs on current last run hash table
                                    (if (or (string-equal (nth 3 err-line) " error")
                                          (string-equal (nth 3 err-line) " warning"))
                                        (progn
                                          (setf (getf (gethash ast-key (nth 0 *ast-lines*)) 'info) info)
                                          (setq ast-key (ast-key< (parse-integer (nth 1 err-line))
                                                          (parse-integer (nth 2 err-line)) :file *target-file*))
                                          (setq info s))
                                        (progn
                                          (setq info (concatenate 'string info '(#\NewLine) s)))))
                                  (setq info (concatenate 'string info '(#\NewLine) s)))
                              (display "run err" *ast-run* ">" (replace-module-names s) #\NewLine)
                              (setq has-error t)))
                          (setf (getf (gethash ast-key (nth 0 *ast-lines*)) 'info) info)
                        
                        ;; extracts ast infos from dumped Translation Units
                        (let ((d-file  "TranslationUnitDecl")
                              (d-line  "-1")
                              (d-col   "0")
                              (ast-key "")
                              (object-sym nil)
                              (object-val nil)
                              (object-fld '())
                              (s-unit   (ppcre:create-scanner
                                            "(^[\\| ]*?[\\|`]-)([\\w<>]+)(?:\\s.+?<(.+?):(\\d+)(?::(\\d+))?[,>])?"))
                              (s-func   (ppcre:create-scanner "\\s(\\w+?)\\s'(.+?)'"))
                              (s-record (ppcre:create-scanner "(struct|union)\\s(\\w+?)\\sdefinition"))
                              (s-field  (ppcre:create-scanner "\\s(\\w+?)\\s('.+')")))

                          (with-input-from-string (out-stream (get-output-stream-string stdout))
                            (do ((s (read-line out-stream nil nil) (read-line out-stream nil nil)))
                                ((eql s nil))
                              (when *debug-dump* (display s #\NewLine))
                              
                              ;; (unless (or (string= s "") (char= (char s 0) #\Newline))
                              ;;   (setf (gethash (intern s) *globals*) t))))
                          
                              (let* ((result (multiple-value-list (ppcre:scan-to-strings s-unit s)))
                                     (matches (cadr result))
                                     (elt-2 (if matches (str:replace-first "<invalid sloc>, " "" (elt matches 2)) nil)))

                                (cond ((null matches)
                                       (setq ast-key (ast-key< (parse-integer d-line)
                                                       (parse-integer d-col) :file d-file)))
                                      ((string= elt-2 "col")
                                       (setq d-col (elt matches 3))
                                       (setq ast-key (ast-key< (parse-integer d-line)
                                                       (parse-integer d-col) :file d-file)))
                                      
                                      ((string= elt-2 "line")
                                       (setq d-line (elt matches 3))
                                       (setq ast-key (ast-key< (parse-integer d-line)
                                                       (parse-integer (elt matches 4)) :file d-file)))
                                      
                                      (elt-2
                                       (setq d-file (car (str:split "\\.run\\d+\\." (elt matches 2) :regex t)))
                                       (setq ast-key (ast-key< (parse-integer (elt matches 3))
                                                       (parse-integer (elt matches 4)) :file d-file))))
                                
                                (when (and (> (length matches) 0) (elt matches 0))
                                  ;; (push (cons matches s) (getf (gethash ast-key (nth 0 *ast-lines*)) 'dump))

                                  (when (and object-sym (string/= (elt matches 1) "FieldDecl"))
                                    (setf (gethash object-sym *globals*) `(list ,@object-val ,(reverse object-fld)))
                                    (setq object-sym nil)
                                    (setq object-val nil)
                                    (setq object-fld '()))

                                  (cond ((string= (elt matches 1) "FunctionDecl")
                                         (let* ((resultDecl (multiple-value-list (ppcre:scan-to-strings s-func s)))
                                                (matchesDecl (cadr resultDecl)))
                                           (when (and (> (length matchesDecl) 0) (elt matchesDecl 0))
                                             (setf (gethash (intern (elt matchesDecl 0)) *globals*)
                                                   (list (elt matches 1) (elt matchesDecl 1) s)))))
                                        
                                        ((string= (elt matches 1) "RecordDecl")
                                         (let* ((resultDecl (multiple-value-list (ppcre:scan-to-strings s-record s)))
                                                (matchesDecl (cadr resultDecl)))
                                           (when (and (> (length matchesDecl) 0) (elt matchesDecl 0))
                                             (setq object-sym (intern (elt matchesDecl 1)))
                                             (setq object-val (list (elt matches 1) (elt matchesDecl 0) s))
                                             )))

                                        ((string= (elt matches 1) "FieldDecl")
                                         (let* ((resultDecl (multiple-value-list (ppcre:scan-to-strings s-field s)))
                                                (matchesDecl (cadr resultDecl)))
                                           (when (and (> (length matchesDecl) 0) (elt matchesDecl 0))
                                             (push (list (elt matchesDecl 0) (elt matchesDecl 1)) object-fld)
                                             )))

                                        ((string= (elt matches 1) "VarDecl")
                                         (let* ((resultDecl (multiple-value-list (ppcre:scan-to-strings s-func s)))
                                                (matchesDecl (cadr resultDecl)))
                                           (when (and (> (length matchesDecl) 0) (elt matchesDecl 0))
                                             (setf (gethash (intern (elt matchesDecl 0)) *globals*)
                                                   (list (elt matches 1) (elt matchesDecl 1) s)))))
                                        ))))) ; close with

                          (display "Cicili compiling run" *ast-run* "time:"
                                   (- (get-universal-time) start-time) "s" #\Newline))))

                      ;; compile ast
                      (when (key-eq tname '|source|)
                        (push (make-hash-table :test 'equal) *ast-lines*)
                        (setq *ast-run* (1+ *ast-run*))
                        (setq stdout  (make-string-output-stream))
                        (setq stderr  (make-string-output-stream))
                        (setf *gensym-counter* 100)

	                    (compile-target (nth 1 target) (nth 2 target) ir globals stdout stderr nil nil)

                        (with-input-from-string (out-stream (get-output-stream-string stdout))
                            (do ((s (read-line out-stream nil nil) (read-line out-stream nil nil)))
                                ((eql s nil))
                              (display (replace-module-names s) #\NewLine)
                              ))
                        )))
	               (t (error (format nil "header or source form is missing for ~A" tname)))))
            ((or macro (and (symbolp tname) (macro-function tname)))
             (let ((tmp-expantion *macroexpand*)
                   (id (gensym "me:"))
                   (result nil))
               (when *debug-macroexpand* (format t "~A ~A~%" id target))
               (setf *macroexpand* t)
               (if (key-eq tname '|generic|)
                   (let ((symb (eval (macroexpand target))))
                     (setq result (specify-guard (LIST '|ghost|) () t)))
                   (let ((expr (if macro (macroexpand `(,macro ,@(cdr target))) (macroexpand target))))
                     (when *debug-macroexpand* (format t "~A ~A~%" id expr))
                     (setq result (if (listp expr)
                                      (specify-body (list expr))
                                      (specify-expr expr)))))
               (setf *macroexpand* tmp-expantion)
               result))
            (t (eval target))))))

(defun compile-cicili-file (file-name)
  (let ((file-path (make-pathname :directory (pathname-directory file-name)))
        (rt (copy-readtable nil)))
    (ensure-directories-exist file-path)
    (uiop:with-current-directory (file-path)
      (multiple-value-bind (function non-terminating-p)
          (get-macro-character #\| rt)
        (set-macro-character #\| nil nil)
        (compile-ast (read-file (file-namestring file-name)))
        (set-macro-character #\| function non-terminating-p)))))

;;;; a file contains many cicili macro definitions will be loaded into CL-USER PACKAGE
(defun load-macro-file (file-name &optional pack init-args)
  (when (key-eq pack '|nil|) (setq pack nil))
  (let ((file-path (make-pathname :directory (pathname-directory file-name)))
        (rt (copy-readtable nil)))
    (ensure-directories-exist file-path)
    (uiop:with-current-directory (file-path)
      (let ((targets (read-file (file-namestring file-name))))
        (multiple-value-bind (function non-terminating-p)
            (get-macro-character #\| rt)
          (set-macro-character #\| nil nil)
          (let ((*readtable* (copy-readtable)))
		    (setf (readtable-case *readtable*) :preserve)
            (CL:LOAD FILE-NAME))
          (set-macro-character #\| function non-terminating-p))
        (format t "macro file: ~A loaded inside ~A package with init args: ~A~%" file-name pack init-args)
        (dolist (target targets)
          (let ((tname (car target)))
            (cond ((key-eq tname '|DEFUN|)
                   (when (key-eq (cadr target) '|init|)
                     (funcall (if (null pack) (cadr target)
                                  (intern (symbol-name (cadr target)) pack)) init-args)))
                  ((key-eq tname '|DEFMACRO|)
                   (let ((symb (eval target)))
                     (add-macro (if (null pack) (symbol-name symb)
                                    (format nil "~A.~A" pack (symbol-name symb))) symb)))
                  ((key-eq tname '|cicili|)
                   (compile-ast (cdr target))))))))))

(set-dispatch-macro-character
    #\# #\t #'(lambda (stream char1 char2)
		        (declare (ignore stream char1 char2))
		        (read-from-string "true")))

(set-dispatch-macro-character
    #\# #\f #'(lambda (stream char1 char2)
		        (declare (ignore stream char1 char2))
		        (read-from-string "false")))

(set-macro-character
    #\{ #'(lambda (stream char)
	        (declare (ignore char))
	        (read-delimited-list #\} stream t)))

(set-macro-character #\} (get-macro-character #\)) nil)

(set-macro-character
    #\[ #'(lambda (stream char)
	        (declare (ignore char))
	        (list (intern "[") (car (read-delimited-list #\] stream t)) (intern "]"))))

(set-macro-character #\] (get-macro-character #\)) nil)

(set-macro-character
    #\" #'(lambda (stream char)
	        (declare (ignore char))
            (let ((prev-char nil))
	          (with-output-to-string (out)
		        (do ((char (read-char stream nil nil) (read-char stream nil nil)))
			        ((and (char= char #\") (or (null prev-char) (not (char= prev-char #\\)))) nil)
			      (write char :stream out :escape nil)
                  (setq prev-char char))))))
