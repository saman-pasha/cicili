(in-package :cicili)

(defvar *unaries* '(|+| |-| |++| |1+| |--| |1-| |~| |not| |cof| |aof|))
(defvar *operators* '(|+| |-| |*| |/| |%| |==| |!=| |>| |<| |>=| |<=| |^| |<<| |>>| |xor| |and| |or| |bitand| |bitor|))
(defvar *assignments* '(|=| |+=| |-=| |*=| |/=| |%=| |<<=| |>>=|))
(defvar *modifiers* '(|&| |*| |**| |***| |move| |ref|))
;; C keywords that stand alone as a statement and name nothing in the symbol
;; table, so 'specify-symbol-expr must emit them rather than resolve them
(defvar *keywords* '(|break| |continue|))
(defvar *attributes* '(|static| |decl|         |inline|  |register| |extern| |volatile|
                       |auto|   |thread-local| |atomic|   |defer|   |non-copy|
                       ;; C++ member functions. `const' is here and not in
                       ;; *modifiers* because it qualifies the method, not a
                       ;; type -- (const) before a method is `T f () const'.
                       |virtual| |override| |const| |explicit| |noexcept|))
(defvar *globals* (make-hash-table :test 'eql))

;; Symbol Table
(defparameter *symbols* (make-hash-table :test 'equal))
;; Lex Id, push and pop to create id segments
(defvar *lexemes-id* '())
;; distinct type inference time macro expantion from real specifying time
(defparameter *type-infer-time-var* nil)
(defparameter *type-infer-time-lambda* nil)
;; AST Table, keeps metadata attached to any ast object
(defparameter *ast-table* (make-hash-table :test 'eq))
;; keeps expanded version if any for any ast object
(defparameter *expanded-table* (make-hash-table :test 'eq))


;; cicili script path
(defvar *cicili-path* (uiop/os:getcwd))
;; current output file
(defvar *output* t)
;; current target spec during target specifying
(defparameter *target-spec* nil)
;; storing file name during compiling
(defparameter *target-file* "main.c")
;; current target is header
(defparameter *target-header* nil)
;; current target is source
(defparameter *target-source* nil)
;; current module spec during module compiling
(defparameter *module-spec* nil)
;; current module spec during module compiling
(defparameter *module-path* nil)

;; The struct a C++ member function is being specified inside. It is NOT
;; *struct-spec*: that one has to be nil while a method body is specified, or
;; every local in the body gets keyed as `local/Struct' and the struct's own
;; name stops resolving. This carries only what `this' needs -- its type.
(defparameter *method-struct* nil)

;; struct name -> its C++ base names, from (inherits ...). Flat and global on
;; purpose: an inherited member is looked up while the derived struct is still
;; being specified, from inside one of its own methods, and the scoped symbol
;; table is the wrong instrument for that -- it answers by lexeme path, and the
;; path in there is the method's.
(defvar *struct-bases* (make-hash-table :test 'eql))
;; all object names inside modules
(defvar *module-names* (make-hash-table :test 'equal))
;; current typedef spec during type inline struct compiling
(defparameter *typedef-spec* nil)
;; current variable spec during type inline struct compiling
(defparameter *variable-spec* nil)
;; current function spec during function compiling
(defparameter *function-spec* nil)
;; current function out part is compiling
(defparameter *function-outp* nil)
;; current struct spec during struct compiling
(defparameter *struct-spec* nil)
;; resolve current function
;; storing line num and col num of target's ASTs
(defparameter *ast-lines* '())
;; storing the next hash table for *ast-lines*
(defparameter *next-ast-line* (make-hash-table :test 'equal))
;; stores current resolver run number
;; A first pass and a final pass. The first runs the C compiler and gathers its
;; diagnostics; the final one is where a failure is reported, so it is shown with
;; everything the first pass collected rather than part way through it.
;;
;; The pass loop in compile-ast runs (1- *ast-total-runs*) of these; the final
;; one is the separate run after the loop, the one that writes the real
;; <target>. --separate depends on the split: every pass in the loop goes to
;; <target>.run<N>.<ext> and only the final one to <target>. So a failure leaves
;; run1 holding the whole C that the compiler complained about, and <target>
;; half written at the point the error was raised.
(defparameter *ast-total-runs* 2)
(defparameter *ast-run* 0)
;; stores total resolver run number
;; stores whether resolver needs another run run number
;; stores names symbols of all loaded macros 
(defvar *macros* (make-hash-table :test 'equal))
;; whether cicili is during macro expantion
(defparameter *macroexpand* nil)
;; whether target uses :cpp key #t
(defparameter *cpp* nil)

;; pushes a segment to lexemes id path
(defun *push* (id)
  (let ((segment (if (symbolp id) (symbol-name id) id)))
    (push segment *lexemes-id*)
    id))
;; pops a segment from lexemes id path
(defun *pop* (spec)
  (pop *lexemes-id*)
  spec)
;; puts id and its def to *symbols* by creating id from *lexemes-id*
(defun *puts* (id def)
  (let ((lex-id (if *struct-spec*
                    (if (eq def *struct-spec*)
                        (symbol-name id)
                        (str:join "/" (append (list (substitute #\_ #\^ (symbol-name id)))
                                              (list (symbol-name (name *struct-spec*))))))
                    (str:join "/" (append (list (substitute #\_ #\^ (symbol-name id))) *lexemes-id*)))))
    (setf (gethash lex-id *symbols*) def)))
;; 'gets and 'gets-of helper get def by id from *symbols* by creating id from *lexemes-id*
(defun *gets-from* (id lexemes-id &optional default)
  (let ((lex-id (str:join "/" (append (list (substitute #\_ #\^ (symbol-name id))) lexemes-id))))
    (let ((def (gethash lex-id *symbols*)))
      (if def def (if lexemes-id (*gets-from* id (cdr lexemes-id) default) nil)))))
;; *gets* front-end
(defun *gets* (id &optional default)
  (let* ((id (expand-macros id))
         (lex-id (str:join "/" (append (list (substitute #\_ #\^ (symbol-name id))) *lexemes-id*))))
    (let ((def (gethash lex-id *symbols*)))
      (if def def (if *lexemes-id* (*gets-from* id (cdr *lexemes-id*) default) nil)))))

;; relative files from target directory or cicili directory
;; if begins with . (./ ../) from target path
;; or / (/usr/...) from unix path
;; or anything (lib/std/...) from cicili path
(defun find-import-file (file-name)
  (if (find (char file-name 0) "./")
      file-name
      (format nil "~A~A" *cicili-path* file-name)))

;; expands all defined macros
;; for type specification only
(defun expand-macros (def)
  (let ((cached (gethash def *expanded-table*)))
    (if cached
        cached
        (setf (gethash def *expanded-table*)
              (if (atom def) def
                  (let* ((func (car def))
                         (macro (if (symbolp func) (gethash (symbol-name func) *macros*) nil)))
                    (if (and (symbolp func) (key-eq func 'QUASIQUOTE))
                        (eval (car (macroexpand `(,(cadr def) ,@(cddr def)))))
                        (if (or macro (and (symbolp func) (macro-function func)))
                            (let ((tmp-expantion *macroexpand*)
                                  (id (gensym "ME:"))
                                  (result nil))
                              (when *debug-macroexpand* (format t "~A ~A~%" id def))
                              (setf *macroexpand* t)
                              (setq result (if macro (macroexpand `(,macro ,@(cdr def))) (macroexpand def)))
                              (when (and (listp result) (listp (cadr result)) (key-eq (caadr result) 'EVAL-WHEN)) ; outputs macro
                                (setq result (eval result)))
                              (when *debug-macroexpand* (format t "~A macro: ~A result: ~A~%" id macro result))
                              (setf *macroexpand* tmp-expantion)
                              result)
                            def))))))))

(defparameter *macro-counter*
  (let ((count 100))
    #'(lambda ()
        (setq count (1+ count)))))

;; adds a macro to macros list *macros*
(defun add-macro (macro symbol)
  (when *debug-macros* (format t "macro: ~A~%" macro))
  (setf (gethash macro *macros*) symbol))

(defun reving (list result)
  (cond ((consp list) (reving (cdr list) (cons (car list) result)))
        ((null list) result)
        (t (cons list result))))

(defun without-last(list)
  (reving (cdr (reving list '())) '()))

(defun set-nth (list n val)
  (if (> n 0)
      (cons (car list)
            (set-nth (cdr list) (1- n) val))
      (cons val (cdr list))))

(defun replace-all (string part replacement &key (test #'char=))
  (with-output-to-string (out)
	(loop with part-length = (length part)
		  for old-pos = 0 then (+ pos part-length)
		  for pos = (search part string
						    :start2 old-pos
						    :test test)
		  do (write-string string out
						   :start old-pos
						   :end (or pos (length string)))
		  when pos do (write-string replacement out)
		  while pos)))

(defparameter *line-num*
  (let ((count 1)
        (actual-count 1))
    #'(lambda (step &key reset actual)
        (if reset
            (if actual
                (setf actual-count reset)
                (setf count reset))
            (progn
              (setf count (+ count step))
              (setf actual-count (+ actual-count step))))
        (if actual actual-count count))))

(defparameter *col-num*
  (let ((count 1)
        (actual-count 1))
    #'(lambda (step &key reset actual)
        (if reset
            (if actual
                (setf actual-count reset)
                (setf count reset))
            (progn
              (setf count (+ count step))
              (setf actual-count (+ actual-count step))))
        (if actual actual-count count))))

(defun ast-key< (line-n col-n &key (file *target-file*))
  (format nil "~A:~D:~D" file line-n col-n))

;; reads log from second hash table, previous run
(defun prev-ast< (&optional (plus-line 0) (plus-col 0))
  (let* ((line-n  (funcall *line-num* 0))
         (col-n   (funcall *col-num* 0))
         (ast-key (ast-key< (+ line-n plus-line) (+ col-n plus-col))))
    (when *debug-ast* (display "M:" ast-key (gethash ast-key (nth 1 *ast-lines*)) #\NewLine))
    (gethash ast-key (nth 1 *ast-lines*))))

(defun prev-ast-by-key< (ast-key)
  (gethash ast-key (nth 1 *ast-lines*)))

;; Maps a C compiler message back to the Cicili form that wrote it.
;;
;; set-ast-line records the line and column every printed symbol lands on. After
;; the first pass the compiler's `file:line:col: error: ...' lines are filed under
;; those same positions, so on the final pass each spec asks: did a message land
;; where I wrote last time? If one did, the error can name the Cicili form instead
;; of leaving the user to map a C line number back by hand.
;;
;; KEY-NAME separates the several positions one spec may write (a symbol, a `.',
;; an argument, ...). Returns the whole record filed at that position -- the
;; message under 'info and the compile path under 'bt -- or NIL when no message
;; landed there, and records this pass's position for the next one.
;;
;; Returning the record rather than the bare message is what lets ast-error<
;; print the path: by the time it runs, the key has already been overwritten
;; with this pass's position and the record could not be found again.
(defun ast-info< (spec key-name)
  (let ((record (prev-ast-by-key< (gethash key-name (keys spec)))))
    (setf (gethash key-name (keys spec))
          (ast-key< (funcall *line-num* 0) (funcall *col-num* 0)))
    (when (getf record 'info) record)))

;; The chain of compile- calls that was on the stack when this position was
;; written, outermost last: the target, the function, the body, down to the form
;; that printed the symbol the C compiler complained about. Depth is bounded and
;; each frame is printed shallowly -- a whole spec tree per frame would bury the
;; message it is there to explain.
(defun compile-path< (bt &optional (depth 12))
  (let ((*print-level* 3)      ; a whole spec tree per frame buries the message
        (*print-length* 6)
        (*print-pretty* nil)   ; one frame, one line
        (shown 0))
    (with-output-to-string (out)
      (dolist (frame bt)
        (when (and (listp frame) (symbolp (car frame))
                   (let ((n (symbol-name (car frame))))
                     (or (str:starts-with-p "COMPILE-" n)
                         (str:starts-with-p "SPECIFY-" n))))
          (incf shown)
          (cond ((<= shown depth)
                 ;; a frame often carries the same spec as both subject and
                 ;; parent -- print it once
                 (format out "~%    ~A~{ ~A~}" (car frame)
                         (remove-duplicates
                          (remove-if-not #'(lambda (a) (typep a 'sp)) (cdr frame))
                          :test #'eq)))
                ((= shown (1+ depth))
                 (format out "~%    ..."))))))))

;; signalled on the final pass, with the Cicili form the message belongs to
;; and the compile path that produced it
(defun ast-error< (what record spec)
  (let ((path (compile-path< (getf record 'bt))))
    (error (format nil "cicili: ~A: ~A~&  in: ~A~@[~&  compiled through:~A~]~%"
                   what (replace-module-names (getf record 'info)) spec
                   (when (string/= path "") path)))))

;; logs on last pushed hash table, first, current run
(defmacro set-ast-line (out)
  (let ((line-n (gensym))
        (col-n  (gensym))
        (result (gensym))
        (item   (gensym)))
    `(let* ((,line-n (funcall *line-num* 0))
            (,col-n  (funcall *col-num* 0))
            (,item   (gethash (ast-key< ,line-n ,col-n) (nth 0 *ast-lines*)))
            (,result ,out))
       (when *debug-ast* (display "set-run" *ast-run* ">" (ast-key< ,line-n ,col-n) ""))
       (setf (getf ,item 'line-n) ,line-n)
       (setf (getf ,item 'col-n) ,col-n)
       (setf (getf ,item 'res) ,result)
       (unless (getf ,item 'bt)
         (setf (getf ,item 'bt)  (cdr (backtrace))))
       (setf (gethash (ast-key< ,line-n ,col-n) (nth 0 *ast-lines*)) ,item))))

;; The stack from here up to COMPILE-TARGET, one list per frame -- it used to be
;; appended flat, which lost the frame boundaries compile-path< reads. The head
;; entry is the invocation itself; set-ast-line stores (cdr …), the frames alone.
;; A trailing hash table is the globals table and is dropped: it is the same
;; object in every frame and printing it buries everything else.
(defun backtrace ()
  (let ((bt (list (list (or *compile-file-truename* *load-truename*)
                        (uiop:command-line-arguments)))))
    (dolist (trace (nthcdr 1 (sb-debug:list-backtrace)))
      (setq bt (append bt (list (if (hash-table-p (car (last trace)))
                                    (without-last trace)
                                    trace))))
      (when (eq (car trace) 'COMPILE-TARGET) (return t)))
    bt))


(defun print-trace ()
  (format t "~A" (sb-debug:list-backtrace)))

(defun display (&rest args)
  (format t "~{~A~^ ~}" args))

(defvar *new-line* (format nil "~%"))

(defun output (ctrl &rest rest)
  (let ((result (apply 'format (append (list nil ctrl) rest))))
    ;; write it literally: `result' is finished text, not a control string. Passing
    ;; it as one made any ~ in the generated C -- a "~/path" literal, a printf of
    ;; a tilde -- blow up as an unknown format directive.
    (format *output* "~A" result)
    (let* ((index (search *new-line* result :from-end t))
           (line-count (str:count-substring *new-line* result)))
      (funcall *line-num* line-count)
      (if index (progn
                  (let ((last-line (str:substring (1+ index) t result)))
                    (funcall *col-num* 0 :reset 1)
                    (funcall *col-num* 0 :reset 1 :actual t)
                    (funcall *col-num* (1- (- (length result) index)))))
          (funcall *col-num* (length result)))
      (when *debug-ast* (display result #\NewLine))
      result)))

;; The package a top-level (IN-PACKAGE …) selects, or NIL if TARGET is not one.
;; The designator is looked up as written first, because read-file reads with
;; :preserve case -- (IN-PACKAGE :CL-USER) gives :|CL-USER|, which matches, while
;; a lower case (in-package :cl-user) needs the upcase.
(defun in-package-form< (target)
  (when (and (listp target) (cdr target) (key-eq (car target) '|IN-PACKAGE|))
    (let* ((name (cadr target))
           (designator (if (symbolp name) (symbol-name name) (string name))))
      (or (find-package designator)
          (find-package (string-upcase designator))
          (error (format nil "in-package: there is no package named ~A" designator))))))

;; Reads every top-level form of a file.
;;
;; IN-PACKAGE is honoured HERE, as the forms are read, which is the only place it
;; can mean anything: a symbol is interned when it is read, so switching packages
;; after the whole file is in memory changes nothing. That is why the form used to
;; fall through to compile-ast's `(eval target)' and appear to do nothing --
;; everything after it had already been interned in the previous package.
;;
;; *package* is rebound for the duration, so the switch dies with the file, the
;; same as CL:LOAD.
(defun read-file (path)
  (let ((targets '()))
    (with-open-file (file path)
	  (let ((*readtable* (copy-readtable))
            (*package* *package*))
		(setf (readtable-case *readtable*) :preserve)
		(DO ((target (READ file NIL NIL) (READ file NIL NIL)))
			((NULL target) T)
          (let ((pack (in-package-form< target)))
            (when pack (setq *package* pack)))
		  (PUSH target targets))))
    (reverse targets)))

(defun indent (lvl)
  (make-string (* lvl 2) :initial-element #\Space))


(defun make-generic-name (name generic)
  (format nil "~A ## _ ~A" name generic))

(defun make-method-name (struct method)
  (format nil "~A_m_~A" struct method))

(defun make-shared-name (struct method)
  (format nil "~A_s_~A" struct method))

(defun is-name (name) (symbolp name))

(defun is-decl-name (name)
  ;; A C++ destructor is named ~Type, and the tilde is part of the name rather
  ;; than an operator -- there is nowhere else for it to live. It is accepted
  ;; only in the leading position, and only in a C++ target.
  (let ((name (let ((n (symbol-name name)))
                (if (and *cpp* (> (length n) 1) (char= (char n 0) #\~)) (subseq n 1) n))))
    (cond ((string= name "const") nil)
          ((zerop (length name)) nil)
	      ((not (find (char name 0) "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ_")) nil)
	      (t (progn
	           (dotimes (i (- (length name) 1))
		         (unless (find (char name (+ i 1)) "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ_1234567890")
		           (return-from is-decl-name nil)))
	           t)))))

(defun is-symbol (name)
  (let ((name (symbol-name name)))
    (cond ((string= name "const") nil)
	      (t (progn
	           (dotimes (i (length name))
		         (unless (find (char name i) "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ_1234567890_^")
		           (return-from is-symbol nil)))
	           t)))))

(defun key-eq (symbol1 symbol2)
  (and (symbolp symbol1) (symbolp symbol2) (equal (symbol-name symbol1) (symbol-name symbol2))))

(defun is-array (desc)
  (when (and (listp desc) (key-eq (first desc) (intern "[")) (key-eq (car (last desc)) (intern "]"))) t))

(defun replace-args< (name-values args)
  (dolist (nv name-values)
    (setq args
          (loop for arg in args
                when (or (symbolp arg) (> (length arg) 0))
                collect (str:replace-all
                            "[^/]+?/\\.\\./" "" 
                            (str:replace-all
                                "[^/]+?/\\.\\./" "" 
                                (str:replace-all
                                    "[^/]+?/\\.\\./" "" 
                                    (str:replace-all
                                        "[^/]+?/\\.\\./" "" 
                                        (str:replace-all (car nv) (uiop:native-namestring (cadr nv))
                                                         (if (symbolp arg) (symbol-value arg) arg))
                                        :regex t)
                                    :regex t)
                                :regex t)
                            :regex t))))
  args)

(defun free-name (path name)
  (let* ((r-name (format nil "~{~A~^/~}"
                         (map 'list #'(lambda (x) (if (typep x 'sp)
                                                      (symbol-name (name x))
                                                      (if (stringp x)
                                                          x
                                                          (symbol-name x))))
                              (append path (if (listp name) name (list name))))))
         (m-name (intern
                  (format nil "cicili~A"
                          (str:replace-all "[=+/]" "_"
                                           (sha1:sha1-base64
                                               r-name
                                             #'base64:base64-encode)
                                           :regex t)))))
    (setf (gethash m-name *module-names*) r-name)
    m-name))

(defun replace-module-names (msg)
  (cl-ppcre:regex-replace-all
      "cicili[\\d\\w_]{28}" msg
      (lambda (&rest match)
        (let* ((m-name (str:substring (nth 3 match) (nth 4 match) (nth 0 match)))
               (r-name (gethash (intern m-name) *module-names*)))
          (if r-name
              r-name
              m-name)
          ))))

(defun lvl-value (lvl)
  (if (listp lvl) (car lvl) lvl))

(defmacro set-ast-obj (def spec)
  (let ((def def))
    `,spec))
    ;; `(let ((saved-spec (gethash ,def *ast-table*)))
    ;;    (if saved-spec
    ;;        saved-spec
    ;;        (setf (gethash ,def *ast-table*) ,spec)))))

(defmacro set-ast-vals (def vals)
  (let ((def def))
    `,vals))
    ;; `(let ((saved-spec (gethash ,def *ast-table*)))
