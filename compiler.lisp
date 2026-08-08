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
(defun compile-ast (targets ast-file-name)
  (setf *gensym-counter* 100)
  (dolist (target targets)
    (let* ((tname (car target))
	       (ir    nil)
           (macro (if (symbolp tname) (gethash (symbol-name tname) *macros*) nil))
           (args  (expand-macros (nth 2 target))))
      (cond ;; already honoured by read-file, as the forms were read -- evaluating
            ;; it here would only change *package* for whatever is read next, and
            ;; leak that change into the rest of the process
            ((key-eq tname '|IN-PACKAGE|) t)

            ((key-eq tname '|import|)
             (load-macro-file (cadr target) (caddr target) (cadddr target) ast-file-name))

            ((key-eq tname '|cicili|)
             (compile-ast (cdr target) ast-file-name))
            
            ((key-eq tname '|DEFMACRO|)
             (let ((symb (eval target)))
               (add-macro (symbol-name symb) symb)))

            ((or (key-eq tname '|header|) (key-eq tname '|source|))
	         (cond ((or (key-eq tname '|source|) (key-eq tname '|header|)) ; target
                    (setf *target-header* (key-eq tname '|header|))
                    (setf *target-source* (key-eq tname '|source|))

                    (setf *module-path* nil)
                    ;; BEFORE specifying, not after -- both of these. They used
                    ;; to be assigned below the specify-target call, which meant
                    ;; specification ran with the PREVIOUS target's values:
                    ;;
                    ;;   *target-file* names anonymous structs and lambdas after
                    ;;   the translation unit they land in, and tags every
                    ;;   ast-key< with the file a diagnostic belongs to;
                    ;;   *cpp* decides whether `inherits' and in-struct `method'
                    ;;   are even legal, and nothing in a first C++ target could
                    ;;   see it.
                    (setf *target-file* (file-namestring (nth 1 target)))
                    (setf *cpp* (and (getf args ':|cpp|) (key-eq (getf args ':|cpp|) '|true|)))
                    (unless *only-link* (setq ir (specify-target target)))
                    (setf *target-spec* ir)

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
                      ;; *ast-total-runs* passes in all, of which this loop does every
                      ;; one but the last -- the final run below is the last. The
                      ;; resolver used to extend the count on demand, re-reading the C
                      ;; compiler's diagnostics until the output stopped changing; that
                      ;; is gone and the count is fixed. Letting the loop run the final
                      ;; pass too is what made an error land in <target>.run<N>.<ext>
                      ;; and leave the real <target> unwritten.
                      (do ((run 0 (1+ run)))
                          ((or (null has-error)
                             *only-link*
                             (= run (if (key-eq tname '|header|) 1 (1- *ast-total-runs*)))))
                        (push *next-ast-line* *ast-lines*)
                        (setf *next-ast-line* (make-hash-table :test 'equal))

                        ;; clear GC
                        (when (> (length *ast-lines*) 2)
                          (clrhash (nth 2 *ast-lines*))
                          (setf (nth 2 *ast-lines*) (make-hash-table :test 'equal)))
                        
	                    (setq globals (create-globals ir))
                        (setq *ast-run* (1+ run))
                        ;; --separate keeps every pass of this loop in its own
                        ;; <target>.run<N>.<ext>; the real <target> is written by the
                        ;; final run below, after the loop.
                        ;;
                        ;; `file' must be reassigned on EVERY pass, not only when the
                        ;; rename applies. It used to keep the previous pass's name, so
                        ;; pass 2 wrote over <target>.run1.<ext> -- run1 never held pass
                        ;; 1's output -- and nothing in the loop ever wrote <target>.
                        ;; When an error stopped pass 2 the result was a half-written
                        ;; run1 and no <target> at all.
                        (setq file (if (and *debug-runs* (key-eq tname '|source|))
                                       (format nil "~A.run~D.~A" (nth 1 target)
                                               *ast-run* (pathname-type (nth 1 target)))
                                       (nth 1 target)))
                        (setq stdout  (make-string-output-stream))
                        (setq stderr  (make-string-output-stream))
                        
                        ;; manipulate ast
                        (setq has-error nil)
                        (let ((start-time (get-universal-time)))
	                      (compile-target file args ir globals stdout stderr t (key-eq tname '|header|))
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
                              (setq has-error t)
                              (setf (getf (gethash ast-key (nth 0 *ast-lines*)) 'info) info)))
                        
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

	                    (compile-target (nth 1 target) args ir globals stdout stderr nil nil)

                        (with-input-from-string (err-stream (get-output-stream-string stderr))
                            (do ((s (read-line err-stream nil nil) (read-line err-stream nil nil)))
                                ((eql s nil))
                              (display (replace-module-names s) #\NewLine)
                              ))
                        
                        (with-input-from-string (out-stream (get-output-stream-string stdout))
                            (do ((s (read-line out-stream nil nil) (read-line out-stream nil nil)))
                                ((eql s nil))
                              (display (replace-module-names s) #\NewLine)
                              ))
                        )))
	               (t (error (format nil "header or source form is missing for ~A" tname)))))
            ((or macro (and (symbolp tname) (macro-function tname)))
             (let ((bd (expand-macros target)))
               (if (eq bd target)
                   (if (symbolp bd)
                       bd
                       (if (and (listp bd) (key-eq (car bd) '$$$))
                           (specify-body (cdr bd))
                           (specify-call-expr bd)))
                   (if (symbolp bd)
                       bd
                       (if (and (listp bd) (key-eq (car bd) '$$$))
                           (specify-body (cdr bd))
                           (specify-expr bd))))))
            (t (eval target))))))

(defun compile-cicili-file (file-name)
  (let* ((file-name (find-import-file file-name))
         (file-path (make-pathname :directory (pathname-directory file-name)))
         (rt (copy-readtable nil)))
    (ensure-directories-exist file-path)
    (uiop:with-current-directory (file-path)
      (multiple-value-bind (function non-terminating-p)
          (get-macro-character #\| rt)
        (set-macro-character #\| nil nil)
        (compile-ast (read-file (file-namestring file-name)) (file-namestring file-name))
        (set-macro-character #\| function non-terminating-p)))))

;;;; a file contains many cicili macro definitions will be loaded into CL-USER PACKAGE
(defun load-macro-file (file-name pack init-args ast-file-name)
  (when (key-eq pack '|nil|) (setq pack nil))
  (let* ((file-name (find-import-file file-name))
         (file-path (make-pathname :directory (pathname-directory file-name)))
         (rt (copy-readtable nil)))
    (uiop:with-current-directory (file-path)
      ;; The namespace package is made BEFORE the file is read: read-file honours
      ;; a top-level (IN-PACKAGE …), so a macro file naming its own namespace
      ;; would otherwise be read before that package exists.
      ;;
      ;; It inherits COMMON-LISP. Without a use list a file that switches into
      ;; this package reads DEFUN, FORMAT and T as fresh symbols of its own, and
      ;; the first definition dies with "the variable init is unbound".
      ;;
      ;; A LIBRARY MAY DECLARE ITS OWN INSTEAD, with a top-level DEFPACKAGE that
      ;; read-file evaluates as it reads. That is the only way to name a macro
      ;; after a Common Lisp symbol -- CLASS, TYPE and SEQUENCE are three of
      ;; Parsi's seven object kinds -- because the package made here inherits
      ;; COMMON-LISP and (DEFMACRO CLASS …) in it is a lock violation on
      ;; CL:CLASS. A DEFPACKAGE carrying (:shadow "CLASS") settles it in one
      ;; declaration, and it applies to a package already made here.
      ;;
      ;; NIL is not a namespace. An import with no prefix registers its macros
      ;; under their bare names and wants no package of its own; making one
      ;; produced a package literally called "NIL", and a library declaring its
      ;; own could not be imported unprefixed at all.
      (when (and pack (not (find-package pack)))
        (make-package pack :use '("COMMON-LISP")))
      (let ((targets (read-file (file-namestring file-name))))
        (when *debug-macros*
          (format t "macro file: ~A imported inside: '~A' package, from file: ~A, with init args: ~A~%"
                  file-name pack ast-file-name init-args))
        
        ;; The CL:LOAD honours the file's own IN-PACKAGE, so the definitions
        ;; land where the file said they should. There used to be a
        ;; (use-package pack) around this and a (use-package *package*) after
        ;; it; both were inert -- a prefix package is made empty here and never
        ;; exports anything, and the second used the current package in itself.
        ;; Once a library entered a package of its own the second one started
        ;; announcing "std also uses the following packages: (std)" on every
        ;; import, which is how it was noticed.
        (progn
          (multiple-value-bind (function non-terminating-p)
              (get-macro-character #\| rt)
            (set-macro-character #\| nil nil)
            (let ((*readtable* (copy-readtable)))
	          (setf (readtable-case *readtable*) :preserve)
              ;; from the pre-passed text, not the file: this reads the same
              ;; source a second time to evaluate its Lisp definitions, and raw
              ;; `::' in it would be read as a package qualifier
              (with-input-from-string (src (read-source-text< (file-namestring file-name)))
                (CL:LOAD src)))
            (set-macro-character #\| function non-terminating-p)))

        ;; A LIBRARY'S OWN LISP API, brought in by an import that took no
        ;; prefix. Macros need none of this -- they are registered by name and
        ;; interned into the importing file's package below -- but a library
        ;; may also export a plain function for the importer to call, the way
        ;; lib/cpp/memory exports (shared-ptr< 'Net) for an init-macro to
        ;; splice. Now that a library owns a package, that function lives in
        ;; it, and an importer in CL-USER cannot see it without being told.
        ;;
        ;; NO PREFIX IS THE CONDITION, and it is the whole distinction: an
        ;; import that names one is asking for the library's names to stay
        ;; behind it, and can still reach the function as `memory:shared-ptr<'.
        ;; An import that names none is asking for them bare, and takes on
        ;; whatever a bare name collides with -- which is why a library exports
        ;; its Lisp API and not its macro names.
        ;;
        ;; THE DEFINITION IS COPIED ONTO THE IMPORTER'S OWN SYMBOL, rather than
        ;; the package being USE-PACKAGEd, and the reading order is what forces
        ;; that. A file is read whole before any of it runs, so by the time this
        ;; import is reached the importer's (shared-ptr< 'Net) has ALREADY
        ;; interned |shared-ptr<| in the importing package -- and the forms in
        ;; hand hold that symbol, not the library's. USE-PACKAGE fails outright
        ;; on it ("causes name-conflicts"), and SHADOWING-IMPORT would succeed
        ;; while changing nothing, because the symbol already read is the symbol
        ;; that will be called. Defining the function on it is the one move that
        ;; reaches the form that exists.
        (when (null pack)
          (let ((own (some #'in-package-form< targets)))
            (when (and own (not (eq own *package*)))
              (do-external-symbols (s own)
                (let ((here (intern (symbol-name s) *package*)))
                  (unless (eq here s)
                    (cond ((macro-function s)
                           (setf (macro-function here) (macro-function s)))
                          ((fboundp s)
                           (setf (symbol-function here) (symbol-function s))))
                    (when (boundp s)
                      (setf (symbol-value here) (symbol-value s)))))))))

        (dolist (target targets)
          (let ((tname (car target)))
            
            (cond ((key-eq tname '|DEFUN|)
                   (when (key-eq (cadr target) '|init|)
                     ;; THE SYMBOL AS READ FIRST, and the prefix's only as a
                     ;; fallback. The CL:LOAD above defined `init' on whatever
                     ;; symbol the file's own package gave it, so the symbol
                     ;; sitting in `target' is the one that is fbound -- always,
                     ;; and whatever prefix the importing file chose.
                     ;;
                     ;; Interning the name in the prefix package instead was
                     ;; right only while a library had no package of its own,
                     ;; where the two coincided. A library that declares one and
                     ;; is imported under any other prefix -- (import "…" :zz)
                     ;; against a file in :parsi -- died with "the function
                     ;; |zz|::|init| is undefined", which made the prefix a name
                     ;; the library dictated rather than one the importer picks.
                     (let* ((s-name (cadr target))
                            (fn (if (fboundp s-name)
                                    s-name
                                    (and pack (intern (symbol-name s-name) pack)))))
                       (when fn (funcall fn init-args)))))
                  
                  ((key-eq tname '|DEFMACRO|)
                   (let* ((s-name (nth 1 target))
                          (m-name (if (null pack)
                                      (symbol-name s-name)
                                      (format nil "~A.~A" pack (symbol-name s-name)))))
                     (if (key-eq s-name '|init-macro|) ; init macro should return $$$
                         (let ((bd (macroexpand (LIST (eval (macroexpand target))))))
                           (if (and (listp bd) (key-eq (car bd) '$$$))
                               (specify-body (cdr bd))
                               (specify-call-expr bd)))
                         (progn
                           ;; Interned HERE, in the importing file's package,
                           ;; which is what makes a macro reachable from plain
                           ;; Lisp: compile-ast evaluates a top-level form it
                           ;; does not recognise, and CL:EVAL resolves a name by
                           ;; symbol identity rather than through *macros*.
                           ;;
                           ;; The exception is a bare name Common Lisp already
                           ;; owns. An UNPREFIXED import registers names as they
                           ;; are written, and (DEFMACRO CLASS …) in CL-USER is
                           ;; a lock violation on CL:CLASS -- so those go to the
                           ;; library's own package, which shadowed them. They
                           ;; are still reachable inside a target, where dispatch
                           ;; is by symbol NAME and the package never mattered;
                           ;; they are not reachable from a bare Lisp form.
                           ;; Import with a prefix to get those.
                           ;; :inherited is the test, rather than a list of
                           ;; package names. CLASS comes from COMMON-LISP and
                           ;; ENUM from SB-ALIEN -- CL-USER inherits from
                           ;; several implementation packages, and all of them
                           ;; are locked. Asking whether the name arrived from
                           ;; somewhere else catches every one without naming
                           ;; any.
                           (setf (nth 1 target)
                                 (multiple-value-bind (symb status) (intern m-name)
                                   (if (eq status :inherited)
                                       (intern m-name (or (symbol-package s-name) *package*))
                                       symb)))
                           (let ((symb (eval (macroexpand target))))
                             (add-macro (symbol-name symb) symb))))))
                  
                  ((key-eq tname '|cicili|)
                   (compile-ast (cdr target) (file-namestring file-name)))

                  ((key-eq tname '|import|) t)
                  ;; (load-macro-file (cadr target) (caddr target) (cadddr target) (file-namestring file-name)))
                  
                  ;; A generic expands into a DEFMACRO, which the CL:LOAD above
                  ;; already evaluated -- on the symbol the LIBRARY'S package
                  ;; gave it. Registering that symbol under the macro's name is
                  ;; what makes it reachable from a file that does not share the
                  ;; package, and every other macro is already reached that way.
                  ;;
                  ;; It used to need no registration at all, because a macro
                  ;; file had no package and (generic decl-vector …) defined
                  ;; CL-USER's `decl-vector' -- the same symbol the importing
                  ;; file read. A library with a package of its own defines its
                  ;; own, and without this the importer died with "unknown
                  ;; symbol: decl-vector".
                  ;;
                  ;; The prefix is applied to the registered NAME, exactly as it
                  ;; is for DEFMACRO, so (import "…" :std) reaches this one as
                  ;; `std.decl-vector'.
                  ((key-eq tname '|generic|)
                   (let ((s-name (nth 1 target)))
                     (add-macro (if (null pack)
                                    (symbol-name s-name)
                                    (format nil "~A.~A" pack (symbol-name s-name)))
                                s-name)))

                  ;; read-file honoured it while reading `targets', and the CL:LOAD
                  ;; above honoured it for the definitions -- nothing left to do
                  ((key-eq tname '|IN-PACKAGE|) t)

                  ;; A library declaring its own namespace: what it uses, and
                  ;; what it shadows. read-file evaluated it while reading, so
                  ;; the IN-PACKAGE below it had a package to enter; the CL:LOAD
                  ;; evaluated it again on its own pass. Nothing left to do.
                  ;;
                  ;; (:shadow "CLASS" …) is what lets a namespace name a macro
                  ;; after a Common Lisp symbol. A macro file's package inherits
                  ;; COMMON-LISP (see above), so (DEFMACRO CLASS …) in it is a
                  ;; lock violation on CL:CLASS however the macro is prefixed --
                  ;; the prefix is applied to the REGISTERED name below, not to
                  ;; the symbol the file defines.
                  ((key-eq tname '|DEFPACKAGE|) t)

                  ;; The imperative form of the same thing, for a file that has
                  ;; no DEFPACKAGE. Already run by the CL:LOAD, which reads and
                  ;; evaluates one form at a time, so it took effect for
                  ;; everything below it.
                  ((key-eq tname '|SHADOW|) t)

                  ;; State a macro file keeps between calls -- a namespace, a
                  ;; counter. Evaluated by the CL:LOAD like everything else.
                  ((or (key-eq tname '|DEFVAR|)
                       (key-eq tname '|DEFPARAMETER|)
                       (key-eq tname '|DEFCONSTANT|)) t)

                  (t (error (format nil "unknown form ~A" tname))))))))))

(set-dispatch-macro-character
    #\# #\Space #'(lambda (stream char1 char2)
		            (declare (ignore stream char1 char2))
		            (read-from-string ":EOL")))

(set-dispatch-macro-character
    #\# #\Tab #'(lambda (stream char1 char2)
		          (declare (ignore stream char1 char2))
		          (read-from-string ":EOL")))

(set-dispatch-macro-character
    #\# #\Linefeed #'(lambda (stream char1 char2)
		               (declare (ignore stream char1 char2))
		               (read-from-string ":EOL")))

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

;;                      nil)
