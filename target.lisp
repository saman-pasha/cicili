(in-package :cicili)

;;; `-lNAME.o' is the house spelling for "the libtool object NAME.lo" -- every
;;; :link in test/, benchmark/ and example/ is written that way, and it is what
;;; the `make' macro produces.
;;;
;;; IT ONLY MEANS THAT TO APPLE'S LIBTOOL. GNU libtool does not recognise the
;;; .o suffix inside a -l, so it hands `-lNAME.o' straight to ld, which goes
;;; looking for libNAME.o.so and libNAME.o.a, finds neither, and fails. The
;;; result was that on Linux EVERY target with a :link failed to link -- the
;;; whole of test/c, test/std and test/cpp, not a subset -- and the suite could
;;; not be run on the platform at all. It reported "C linking failed: 1" with
;;; ld's message underneath, which reads like a missing library rather than a
;;; spelling the linker was never going to understand.
;;;
;;; So resolve it here, where the argument list is already assembled: if a
;;; -lNAME.o has a matching NAME.lo under one of the -L directories or the
;;; working directory, pass that file instead. Handing libtool a .lo directly
;;; is ordinary libtool usage and means the same thing on both platforms, so
;;; this is not a Linux branch -- macOS takes the same path and the same file.
;;; A -lNAME.o with no .lo anywhere is left exactly as written, because then it
;;; is a real library the user is naming and not our business.
(defun resolve-libtool-objects< (args)
  (let ((dirs (list (namestring (uiop/os:getcwd)))))
    (dolist (a args)
      (when (and (stringp a) (> (length a) 2) (string= "-L" (subseq a 0 2)))
        (push (subseq a 2) dirs)))
    (mapcar
     (lambda (a)
       (if (and (stringp a) (> (length a) 4)
                (string= "-l" (subseq a 0 2))
                (string= ".o" (subseq a (- (length a) 2))))
           (let* ((stem (concatenate 'string (subseq a 2 (- (length a) 2)) ".lo"))
                  (hit  (loop for d in dirs
                              for path = (merge-pathnames
                                          stem
                                          (pathname (if (and (plusp (length d))
                                                             (char= (char d (1- (length d))) #\/))
                                                        d
                                                        (concatenate 'string d "/"))))
                              when (probe-file path) return path)))
             (if hit (namestring hit) a))
           a))
     args)))

(defun specify-target (target)
  (set-ast-obj target
    (let* ((name    (nth 1 target))
	       (args    (expand-macros (nth 2 target)))
	       (clauses (nthcdr 3 target))
	       (target-specifier (make-specifier name '|@TARGET| nil nil nil nil nil nil args)))
      (format t "-------------------- cicili: specifying target ~A~%" name)
      (unless (zerop (mod (length args) 2)) (error (format nil "wrong target features ~A" args)))
      (let ((attributes '()))
        (dolist (clause clauses)
	      (if (consp clause)
	          (let ((construct (car clause)))
	            (cond ((find (char (symbol-name construct) 0) "@#")
		               (add-inner (specify-preprocessor clause attributes) target-specifier)
		               (setq attributes '()))
                      ((find construct *attributes* :test #'key-eq) (push clause attributes))
		              ((key-eq construct '|include|)
		               (add-inner (specify-include  clause attributes) target-specifier) (setq attributes '()))
                      ;; `import' inside a target, not only above it. A
                      ;; declaration binding is read with the TARGET's settings
                      ;; in effect -- which matters, because a C++ binding uses
                      ;; clauses that are errors in a C target, and *cpp* is a
                      ;; property of the target rather than of the file.
                      ((key-eq construct '|import|)
                       (load-macro-file (cadr clause) (caddr clause) (cadddr clause) *target-file*)
                       (setq attributes '()))
		              ((key-eq construct '|var|)
		               (add-inner (specify-variable clause attributes) target-specifier) (setq attributes '()))
		              ((key-eq construct '|func|)
		               (add-inner (specify-function clause attributes) target-specifier) (setq attributes '()))
		              ((key-eq construct '|method|)
		               (add-inner (specify-function clause attributes) target-specifier) (setq attributes '()))
		              ((key-eq construct '|enum|)
		               (add-inner (specify-enum     clause attributes) target-specifier) (setq attributes '()))
		              ((key-eq construct '|struct|)
		               (add-inner (specify-struct   clause attributes) target-specifier) (setq attributes '()))
		              ((key-eq construct '|union|)
		               (add-inner (specify-union    clause attributes) target-specifier) (setq attributes '()))
		              ((key-eq construct '|typedef|)
		               (add-inner (specify-typedef  clause attributes) target-specifier) (setq attributes '()))
		              ((key-eq construct '|guard|)
		               (add-inner (specify-guard    clause attributes) target-specifier) (setq attributes '()))
                      ((key-eq construct '|module|)
		               (add-inner (specify-module   clause attributes) target-specifier) (setq attributes '()))
                      ((or (key-eq construct '|defmacro|) (key-eq construct '|DEFMACRO|))
                       (let ((symb (eval clause)))
                         (add-macro (symbol-name symb) symb)))
		              (t (let ((bd (expand-macros clause))) ; any macro which produces another macro
                           (if (eq bd clause)
                               (add-inner (specify-expr bd) target-specifier)
                               (unless (symbolp bd)
                                 (add-inner
                                     (if (and (listp bd) (key-eq (car bd) '$$$))
                                         (specify-body (cdr bd))
                                         (specify-expr bd))
                                   target-specifier)))
                           (setq attributes '())))))
	          (error (format nil "syntax error ~A" clause))))
        target-specifier))))

(defun compile-target (file args spec globals stdout stderr dump header &key from-body)
  (let ((args (if spec (attrs spec) args))
        (has-haskell nil))
    (if (stringp file)
        (progn
          (ensure-directories-exist file)
          (unless *only-link*
            (setq *output*
		          (open file
			            :direction :output
			            :if-does-not-exist :create
			            :if-exists :supersede))))
        (error (format t "target should be a file path")))
    (unless *only-link*
      (if (and dump (not header))
          (format t "-------------------- cicili: resolving target ~A~%" file)
          (format t "-------------------- cicili: compiling target ~A~%" file)))
    (unwind-protect
         (handler-case 
	         (progn
               (unless *only-link*
                 (funcall *line-num* 0 :reset 1)
                 (funcall *col-num* 0 :reset 1)
                 (funcall *line-num* 0 :reset 1 :actual t)
                 (funcall *col-num* 0 :reset 1 :actual t)
	             (dotimes (i (length args))
	               (when (zerop (mod i 2))
	                 (if (key-eq (nth i args) ':|std|)
		                 (let ((custom (nth (+ i 1) args)))
		                   (when (key-eq custom '|true|)
                             (if *cpp*
                                 (progn
                                   (set-ast-line (output "~&#include ")) (set-ast-line (output "<string>~%"))
                                   (set-ast-line (output "~&#include ")) (set-ast-line (output "<iostream>~%"))
                                   )
                                 (progn
                                   (set-ast-line (output "~&#include ")) (set-ast-line (output "<stdio.h>~%"))
                                   (set-ast-line (output "~&#include ")) (set-ast-line (output "<stddef.h>~%"))
                                   (set-ast-line (output "~&#include ")) (set-ast-line (output "<stdint.h>~%"))
                                   (set-ast-line (output "~&#include ")) (set-ast-line (output "<stdlib.h>~%"))
                                   (set-ast-line (output "~&#include ")) (set-ast-line (output "<string.h>~%"))
                                   (set-ast-line (output "~&#include ")) (set-ast-line (output "<stdbool.h>~%"))
                                   ))))
                         (when (key-eq (nth i args) ':|haskell|)
		                   (let ((custom (nth (+ i 1) args)))
		                     (when (key-eq custom '|true|)
                               (setq has-haskell t)
                               (set-ast-line (output "~&#include ")) (set-ast-line (output "\"haskell.h\"~%"))))))))
                 (compile-body-map (inners spec) 0 globals spec)
	             (close *output*))
               (when header (return-from compile-target t))
               (let ((is-compiled (if *only-link* t nil))
                     (exit-status nil))
	             (dotimes (i (length args))
	               (when (zerop (mod i 2))
	                 (when (and (not *only-link*) (key-eq (nth i args) ':|compile|))
                       (unless (key-eq (nth (+ i 1) args) '|false|)
                         (display (if *cpp* "compiler set for C++" "compiler set for C") #\Newline)
                         
		                 (let* ((dumper    (if *cpp* (getf (configs<) 'cpp-dumper) (getf (configs<) 'dumper)))
                                (command   (if *cpp* (getf (configs<) 'cpp-compiler) (getf (configs<) 'compiler)))
		                        (program   (car command))
		                        (arguments (cdr command))
		                        (custom    (nth (+ i 1) args)))
		                   (if (key-eq custom '|true|)
                               (setq custom (if has-haskell (list "-I{$CCL}" "-c" file) (list "-c" file)))
                               (progn
                                 (if (stringp custom)
                                     (setq custom (str:split "\\s+"
                                                    (if has-haskell (concatenate 'string "-I{$CCL} " custom) custom) :regex t))
                                     (setq custom `("-I{$CCL}" ,@custom)))
                                 (let ((found nil)
                                       (cset nil))
                                   (loop for carg in custom
                                         for i from 0 to (length custom)
                                         do (if (or (string-equal carg "-c") (string-equal carg "--compile"))
                                                (setq found t)
                                                (when found
                                                  (setq cset t)
                                                  (setf (nth i custom) file)
                                                  (return))))
                                   (unless (and found cset)
                                     (error (format nil "custom compilation missed -c or --compile flag: ~A" custom))))))
                           (setq custom (map 'list #'(lambda (c) (expand-macros c)) custom))
                           (let ((ccl       *cicili-path*)
                                 (cwd       (uiop/os:getcwd))
                                 (args      `(,program ,@arguments ,@custom))
                                 (dump-args `(,program ,@arguments ,@dumper ,@custom)))
                             (setq args      (replace-args< `(("{$CCL}" ,ccl) ("{$CWD}" ,cwd)) args))
                             (setq dump-args (replace-args< `(("{$CCL}" ,ccl) ("{$CWD}" ,cwd)) dump-args))
                             (display "cicili compile:" (if dump dump-args args) #\Newline)

                             (setq exit-status
                                   (multiple-value-list
                                       (if dump
                                           (uiop:run-program dump-args :ignore-error-status t
                                                             :input nil :output stdout :error-output stderr)
		                                   (uiop:run-program args :ignore-error-status t
                                                             :input nil :output stdout :error-output stderr))))
                             ;; Reported on the FINAL pass, so the first one can run the
                             ;; compiler and gather everything first. Fatal: the old guard
                             ;; was (> *ast-run* *ast-total-runs*), which the loop never
                             ;; lets happen, so a C error was silently swallowed and
                             ;; cicili still exited 0.
                             (when (and (not (equal (nth 2 exit-status) 0))
                                        (>= *ast-run* *ast-total-runs*))
                               (error (format nil "cicili: C compilation failed: ~A~%~A~%"
                                              (nth 2 exit-status)
                                              (get-output-stream-string stderr))))))
                         (setq is-compiled t)))
	                 (when (and (equal (nth 2 exit-status) 0) (not dump) (not header) (key-eq (nth i args) ':|link|))
                       (if is-compiled
		                   (let* ((command   (if *cpp* (getf (configs<) 'cpp-linker) (getf (configs<) 'linker)))
		                          (program   (car command))
		                          (arguments (cdr command))
		                          (custom    (nth (+ i 1) args)))
		                     (unless (key-eq custom '|false|)
                               (format t "-------------------- cicili: linking target ~A~%" file)
                               (if (key-eq custom '|true|)
                                   (setq custom (if has-haskell
                                                    (list file "-I{$CCL}" "-L{$CCL}"
                                                          (if *debug-analyze* "-lhaskell_analyze.o" "-lhaskell.o") "-o" "main")
                                                    (list file "-o" "main")))
                                   (when (stringp custom)
                                     (setq custom (str:split " " custom))))
                               (setq custom `("-L{$CWD}" ,@custom))
                               (when has-haskell
                                 (setq custom `("-L{$CCL}" ,(if *debug-analyze* "-lhaskell_analyze.o" "-lhaskell.o") ,@custom)))
                               (setq custom (map 'list #'(lambda (c) (expand-macros c)) custom))
                               (let ((ccl       *cicili-path*)
                                     (cwd       (uiop/os:getcwd))
                                     (args      `(,program ,@arguments ,@custom)))
                                 (setq args (replace-args< `(("{$CCL}" ,ccl) ("{$CWD}" ,cwd)) args))
                                 (setq args (resolve-libtool-objects< args))
                                 (display "cicili link:" args #\Newline)

		                         (let ((exit-status
                                           (multiple-value-list
                                               (uiop:run-program args :ignore-error-status t
                                                                 :input nil :output stdout :error-output stderr))))
                                   (when (and (not (equal (nth 2 exit-status) 0))
                                              (>= *ast-run* *ast-total-runs*))
                                     (error (format nil "cicili: C linking failed: ~A~%~A~%"
                                                    (nth 2 exit-status)
                                                    (get-output-stream-string stderr))))))))
                           (error (format nil ":link without :compile, compilation is required"))))))))
           (uiop/run-program:subprocess-error (e) (error (format nil "~A~%" e))))
      (unless *only-link*
	    (close *output*)))))
