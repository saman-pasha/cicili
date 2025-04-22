(in-package :lcc)

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

;; AST Abstract Syntax Tree
(defun compile-ast (targets)
  (dolist (target targets)
    (let ((name    (car target))
	      (ir      (specify-target target)))
      (setf *target-spec* ir)
      (setf *target-file* (file-namestring (name ir)))
	  (cond ((or (key-eq name '|source|) (key-eq name '|header|)) ; target
             (let ((file (name ir))
                   (globals nil)
                   (reached-translation-unit nil)
                   (reached-file nil)
                   (stdout nil)
                   (stderr nil))
               ;; clear ir
               (setq *ast-lines* '())
               (push (make-hash-table :test 'equal) *ast-lines*)
               (setq *ast-run* 0)
               (dotimes (run (if (key-eq name '|header|) 1 3)) ; resolver runs
                 (push (make-hash-table :test 'equal) *ast-lines*)
	             (setq globals (create-globals ir))
                 (setq *ast-run* (1+ run))
                 (unless (key-eq name '|header|)
                   (setq file (format nil "~A.run~D.~A" (name ir) *ast-run* (pathname-type (name ir)))))
                 (setq stdout  (make-string-output-stream))
                 (setq stderr  (make-string-output-stream))
                 (setf *gensym-counter* 100)
                 ;; manipulate ast
	             (compile-target file ir globals stdout stderr t (key-eq name '|header|))
                   ;; iterate over errors
                   (with-input-from-string (err-stream (get-output-stream-string stderr))
                     (do ((s (read-line err-stream nil nil) (read-line err-stream nil nil)))
                         ((eql s nil))
                       (when (str:starts-with-p file s)
                         (let* ((err-line (str:split #\: s :limit 4))
                                (ast-key (ast-key< (parse-integer (nth 1 err-line))
                                           (parse-integer (nth 2 err-line)) :file *target-file*)))
                           (setf (getf (gethash ast-key (nth 0 *ast-lines*)) 'info) (nth 3 err-line))
                           (display "run" *ast-run* ">" ast-key
                                    (getf (gethash ast-key (nth 0 *ast-lines*)) 'info) #\NewLine))))))
               ;; iterate over ast lines
               ;; (with-input-from-string (out-stream (get-output-stream-string stdout))
               ;;   (do ((s (read-line out-stream nil nil) (read-line out-stream nil nil)))
               ;;       ((eql s nil))
               ;;     (if reached-translation-unit
               ;;         (if reached-file
               ;;             (display "1>" s #\NewLine)  
               ;;             (when (str:containsp file s)
               ;;               (setq reached-file t)
               ;;               (display "d>" s #\NewLine)))
               ;;         (when (str:containsp "TranslationUnitDecl" s) (setq reached-translation-unit t)))
               ;;     ))
               ;; compile ast
               (when (key-eq name '|source|)
                 (push (make-hash-table :test 'equal) *ast-lines*)
                 (setq *ast-run* (1+ *ast-run*))
                 (setf *gensym-counter* 100)
	             (compile-target *target-file* ir globals *standard-output* *error-output* nil nil))
               ))
	        (t (error (format nil "header or source form is missing for ~A" name)))))))

(defun compile-lcc-file (file-name)
  (let ((file-path (make-pathname :directory (pathname-directory file-name)))
        (rt (copy-readtable nil)))
    (ensure-directories-exist file-path)
    ;; (uiop:chdir file-path)
    (uiop:with-current-directory (file-path)
      (multiple-value-bind (function non-terminating-p)
          (get-macro-character #\| rt)
        (set-macro-character #\| nil nil)
        (compile-ast (read-file (file-namestring file-name)))
        (set-macro-character #\| function non-terminating-p)))))

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
	     (with-output-to-string (out)
		   (do ((char (read-char stream nil nil) (read-char stream nil nil)))
			   ((char= char #\") nil)
			 (write char :stream out :escape nil)))))
