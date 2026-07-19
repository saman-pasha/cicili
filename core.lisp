(in-package :cicili)

(defvar *unaries* '(|+| |-| |++| |1+| |--| |1-| |~| |not| |cof| |aof| |stringize|))
(defvar *operators* '(|+| |-| |*| |/| |%| |==| |!=| |>| |<| |>=| |<=| |^| |<<| |>>| |xor| |and| |or| |bitand| |bitor|))
(defvar *assignments* '(|=| |+=| |-=| |*=| |/=| |%=| |<<=| |>>=|))
(defvar *modifiers* '(|&| |*| |**| |***| |move| |ref|))
(defvar *attributes* '(|static| |decl|         |inline|  |register| |extern| |volatile|
                       |auto|   |thread-local| |resolve| |atomic|   |defer|  |non-copy|))
(defvar *trait-regex* "'(?:\\w+?\\s)?(\\w+?)(?:\\[\\d*\\]|\\s\\*)?'.*'(?:\\w+?\\s)?(\\w+?)(?:\\[\\d*\\]|\\s\\*)?'")
(defvar *globals* (make-hash-table :test 'eql))

;; Symbol Table
(defparameter *symbols* (make-hash-table :test 'equal))
;; Lex Id, push and pop to create id segments
(defvar *lexemes-id* '())
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
  (let ((lex-id (str:join "/" (append (list (substitute #\_ #\^ (symbol-name id))) *lexemes-id*))))
    ;; (format t "LEEEEXPUTS ~A~%" lex-id)
    (setf (gethash lex-id *symbols*) def)))
;; 'gets and 'gets-of helper get def by id from *symbols* by creating id from *lexemes-id*
(defun *gets-from* (id lexemes-id &optional default)
  (let ((lex-id (str:join "/" (append (list (substitute #\_ #\^ (symbol-name id))) lexemes-id))))
    (let ((def (gethash lex-id *symbols*)))
      (if def def (if lexemes-id (*gets-from* id (cdr lexemes-id) default) nil)))))
(defun *gets* (id &optional default)
  (let ((lex-id (str:join "/" (append (list (substitute #\_ #\^ (symbol-name id))) *lexemes-id*))))
    (format t "LEEEEEXXXXXXXX ~A~%" lex-id)
    (let ((def (gethash lex-id *symbols*)))
      (if def def (if *lexemes-id* (*gets-from* id (cdr *lexemes-id*) default) nil)))))
;; distinct type inference time macro expantion from real specifying time
(defparameter *type-infer-time-var* nil)
(defparameter *type-infer-time-lambda* nil)
;; deeply traverse spec tree to find lexeme id
;; type inference back-end
(defun deep-typeof (id &optional spec)
  (let* ((id (if (and (listp id) (key-eq (car id) '|struct|)) (cadr id) id))
         (spec (if spec spec (*gets* id))))
    (format t "TYPEOF REQUESTED: ~A~%" spec)
    (if spec
        (let ((const-val (construct spec)))
          (cond ((eql const-val '|@ATOM|)
                 (cond ((eql (typeof spec) '|@SYMBOL|) (*gets* (name spec)))
                       (t spec)))
                ((key-eq (typeof spec) '|auto|) (deep-typeof id (default spec)))
                ((eql const-val '|@CALL|)
                 (let ((name-val (name spec)))
                   (if (typep name-val 'sp) (deep-typeof id name-val) (*gets* name-val))))
                ((eql const-val '|@VAR|) spec)
                ((eql const-val '|@PARAM|) spec)
                ((eql const-val '|@FUNC|) spec)
                ((eql const-val '|@LETN|)
                 (*push* (name spec))
                 (*pop* (deep-typeof id (car (last (body (body spec)))))))
                ((eql const-val '|@PROGN|)
                 (*push* (name spec))
                 (*pop* (deep-typeof id (car (last (body (body spec)))))))
                ((eql const-val '|@?|) (deep-typeof id (car (default spec))))
                ((eql const-val '|@UNARY|)
                 (let ((ty (deep-typeof id (default spec))))
                   (cond ((eql (name spec) '&)
                          (let ((tmp-type-infer-time (prog1 *type-infer-time-var*
                                                           (setq *type-infer-time-var* t)))
                                (new_spec (specify-variable (append (list '|var|)
                                                              (infer-type (list '|aof| (name ty)) :with-name (name ty))) '())))
                            (setq *type-infer-time-var* tmp-type-infer-time)
                            (setf (is-moved new_spec) (is-moved ty))
                            new_spec))
                         ((eql (name spec) '*)
                          (let ((tmp-type-infer-time (prog1 *type-infer-time-var*
                                                           (setq *type-infer-time-var* t)))
                                (new_spec (specify-variable (append (list '|var|)
                                                              (infer-type (list '|cof| (name ty)) :with-name (name ty))) '())))
                            (setq *type-infer-time-var* tmp-type-infer-time)
                            (setf (is-moved new_spec) (is-moved ty))
                            new_spec))
                         (t ty))))
                ((eql const-val '|@OPR|) (deep-typeof id (car (default spec))))
                ((or (eql const-val '|@$|) (eql const-val '|@->|))
                 (let ((struct (deep-typeof id (name spec))))
                   (when struct
                     (format t "STRUCTTTT1 ~A   ~A~%" (typeof struct) struct)
                     (let ((end-type (deep-typeof (typeof struct))))
                       (unless end-type (error "unknown struct type: ~A~%  accessed in: ~A~%" (typeof struct) spec))
                       (format t "STRUCTTTT2 ~A~%" end-type)
                       (*gets* (intern (format nil "~A/~A"  (name (default spec)) (name end-type))))))))
                ((eql const-val '|@TYPEDEF|) (deep-typeof (typeof spec)))
                ((eql const-val '|@STRUCT|) spec)
                ((eql const-val '|@CAST|) spec)
                ((eql const-val '|@RETURN|) (deep-typeof id (default spec)))
                (t nil)))
        nil)))
;; (type inference) tries to infer from lexeme id or throw error
;; without :with-name presence: compiles type without name
;; with :with-name presence but NIL: compiles with name of the spec
;; with :with-name presence non NIL: compiles with the specified name
(defun infer-type-spec (id spec &key with-name copy-name)
  (format t "INFER SPEC REQUESTED: ~A  ~A~%   WITH:~A~%" id spec with-name)
  (let* ((mod-val (modifier spec))
         (arr-val (if (array-def spec)
                      (cond
                        ((key-eq '|*|  mod-val) '|**|)
                        ((key-eq '|**| mod-val) '|***|)
                        (t '|*|))
                      nil)))
    (let ((full-type (if with-name
                         (if copy-name (list (const     spec)
	                                         (typeof    spec)
	                                         (if arr-val arr-val mod-val)
                                             (const-ptr spec)
	                                         (name      spec))
                             (list (const     spec)
	                               (typeof    spec)
	                               (if arr-val arr-val mod-val)
                                   (const-ptr spec)
	                               with-name))
                         (list (const     spec)
	                           (typeof    spec)
	                           (if arr-val arr-val mod-val)
                               (const-ptr spec)
                               nil))))
      (values (remove nil full-type) full-type))))
;; type inference front-end, exported
(defun infer-type (id &key with-name copy-name)
  (format t "INFER REQUESTED: ~A    WITH:~A~%" id with-name)
  (let* ((id (expand-macros id))
         (spec (cond ((numberp id) (return-from infer-type
                                     (values (list '|const| '|int| with-name)
                                             (list '|const| '|int| NIL NIL with-name))))
                     ((stringp id) (specify-cast-expr (list '|cast| (list '|const| '|char| '[]) id)))
                     ((listp id) (let* ((clause (expand-macros id))
                                        (func (expand-macros (car clause))))
                                   (setq clause (expand-macros (append (list func) (cdr clause))))
                                   (setq func (expand-macros (car clause)))
                                   (format t "TTTTT ~A   of    ~A~%" func clause)
                                   (cond ((key-eq func '|cast|)
                                          (let ((expr (specify-cast-expr clause)))
                                            (format t "EEEEE ~A~%" expr)
                                            expr))
                                         ((and (listp func) (eql (car func) '|QUOTE|))
                                          (let ((func (cadr func)))
                                            (if (key-eq (car func) '|lambda|)
                                                (let ((out (nth 2 func)))
                                                  (if (key-eq (car out) '|out|)
                                                      (return-from infer-type
                                                        (infer-type (expand-macros (cdr out))
                                                          :with-name with-name :copy-name copy-name))
                                                      (list '|void|)))
                                                (if (key-eq (car func) '|lambda*|)
                                                    (let ((out (nth 3 func)))
                                                      (if (key-eq (car out) '|out|)
                                                          (return-from infer-type
                                                            (infer-type (expand-macros (cdr out))
                                                              :with-name with-name :copy-name copy-name))
                                                          (list '|void|)))))))
                                         ((key-eq func '|letn|)
                                          (let ((tmp-type-infer-time (prog1 *type-infer-time-lambda*
                                                                           (setq *type-infer-time-lambda* t)))
                                                (letn-spec (specify-let clause)))
                                            (setq *type-infer-time-lambda* tmp-type-infer-time)
                                            (*push* (name letn-spec))
                                            (format t "RRRRR1 ~A~%" (expand-macros (car (last clause))))
                                            (let ((ty (multiple-value-list (infer-type (expand-macros (car (last clause)))
                                                                             :with-name with-name :copy-name copy-name))))
                                              (*pop* ty)
                                              (return-from infer-type (values-list ty)))))
                                         ((key-eq func '|progn|)
                                          (let ((tmp-type-infer-time (prog1 *type-infer-time-lambda*
                                                                           (setq *type-infer-time-lambda* t)))
                                                (progn-spec (specify-progn clause)))
                                            (setq *type-infer-time-lambda* tmp-type-infer-time)
                                            (*push* (name progn-spec))
                                            (format t "RRRRR2 ~A~%" (expand-macros (car (last clause))))
                                            (let ((ty (multiple-value-list (infer-type (expand-macros (car (last clause)))
                                                                             :with-name with-name :copy-name copy-name))))
                                              (*pop* ty)
                                              (return-from infer-type (values-list ty)))))
                                         ((key-eq func '|aof|)
                                          (format t "RRRRR3 ~A~%" (expand-macros (cadr clause)))
                                          (return-from infer-type
                                            (let ((ty (infer-type (expand-macros (cadr clause))
                                                        :with-name with-name :copy-name copy-name)))
                                              (multiple-value-bind (const typeof modifier const-ptr variable array)
		                                          (specify-type< ty)
                                                (let ((ty-def (list const typeof
                                                                    (cond
                                                                      ((null modifier)           '|*|)
                                                                      ((key-eq '|*|    modifier) '|**|)
                                                                      ((key-eq '|**|   modifier) '|***|)
                                                                      ((key-eq '|move| modifier) '|ref|)
                                                                      (t (error (format nil "'aof not allowed for: ~A~%  in ~A" ty clause))))
                                                                    const-ptr variable array)))
                                                  (values (remove nil ty-def) ty-def))))))
                                         ((key-eq func '|cof|)
                                          (format t "RRRRR4 ~A~%" (expand-macros (cadr clause)))
                                          (return-from infer-type
                                            (let ((ty (infer-type (expand-macros (cadr clause))
                                                        :with-name with-name :copy-name copy-name)))
                                              (multiple-value-bind (const typeof modifier const-ptr variable array)
		                                          (specify-type< ty)
                                                (let ((ty-def (list const typeof
                                                                    (cond
                                                                      ((key-eq '|ref| modifier) '|move|)
                                                                      ((key-eq '|***| modifier) '|**|)
                                                                      ((key-eq '|**|  modifier) '|*|)
                                                                      ((key-eq '|*|   modifier) nil)
                                                                      (t (error (format nil "'cof not allowed for: ~A~%  in: ~A" ty clause))))
                                                                    const-ptr variable array)))
                                                  (format t "RRRRR5 ~A~%" ty-def)
                                                  (values (remove nil ty-def) ty-def))))))
                                         ((and (= (length clause) 2) (find func *unaries* :test #'key-eq))
                                          (return-from infer-type (infer-type (cadr clause)
                                                                    :with-name with-name :copy-name copy-name)))
                                         ((and (> (length clause) 2) (find func *operators* :test #'key-eq))
                                          (return-from infer-type (infer-type (cadr clause)
                                                                    :with-name with-name :copy-name copy-name)))
                                         ((key-eq func '$) (let ((struct (infer-type (cadr clause)
                                                                           :with-name with-name :copy-name copy-name)))
                                                             (format t "SSSSSS ~A~%" struct)
                                                             (return-from infer-type struct)))
                                         ((key-eq func '|return|) (return-from infer-type
                                                                    (infer-type (cadr clause)
                                                                      :with-name with-name :copy-name copy-name)))
                                         ((key-eq func '?) (return-from infer-type
                                                             (infer-type (cadr clause)
                                                               :with-name with-name :copy-name copy-name)))
                                         ((symbolp func) ; a function call or type descriptor
                                          (let ((ty (*gets* func)))
                                            (cond ((key-eq (construct ty) '|@FUNC|) ty)
                                                  ((key-eq (construct ty) '|@STRUCT|)
                                                   (multiple-value-bind (const typeof modifier const-ptr variable array)
		                                               (specify-type< clause)
                                                     (let ((ty-def (list const typeof modifier const-ptr variable array)))
                                                       (format t "RRRRR6 ~A~%" ty-def)
                                                       (return-from infer-type (values (remove nil ty-def) ty-def)))))
                                                  (t ty))))
                                         ) ; cond
                                   ))
                     (t (deep-typeof id)))))
    (if spec
        (infer-type-spec id spec :with-name with-name :copy-name copy-name)
        (error (format nil "type inference failed for: ~A" id)))))

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
;; resolve current function
(defparameter *resolve* t)
;; storing line num and col num of target's ASTs
(defparameter *ast-lines* '())
;; storing the next hash table for *ast-lines*
(defparameter *next-ast-line* (make-hash-table :test 'equal))
;; stores current resolver run number
(defparameter *ast-run* 0)
;; stores total resolver run number
(defparameter *ast-total-runs* 1) ; 3 for resolver
;; stores whether resolver needs another run run number
(defparameter *more-run* nil)                 
;; stores names symbols of all loaded macros 
(defvar *macros* (make-hash-table :test 'equal))
;; whether cicili is during macro expantion
(defparameter *macroexpand* nil)
;; whether target uses :cpp key #t
(defparameter *cpp* nil)

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
                def)))))

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

(defun backtrace ()
  (let ((bt (list (or *compile-file-truename* *load-truename*) (uiop:command-line-arguments))))
    (dolist (trace (nthcdr 1 (sb-debug:list-backtrace)))
      (setq bt (append bt
                       (if (hash-table-p (car (last trace)))
                           (without-last trace)
                           trace)))
      (when (eq (car trace) 'COMPILE-TARGET) (return t)))
    bt))

;; (setf sb-ext:*invoke-debugger-hook*
;;       #'(lambda (&rest args)
;;           (format *error-output* ";~%")
;;           (format *error-output* "; cicili error:~%")
;;           (format *error-output* ";~%")
;;           (format *error-output* "; ~A~%" (car args))
;;           (format *error-output* ";~%")
;;           (format *error-output* "; compiling ~S ~A ~%" (or *compile-file-truename* *load-truename*) (uiop:command-line-arguments))
;;           (format *error-output* ";~%")
;;           (format *error-output* "Backtrace:~%")
;;           (let ((counter 0))
;;             (setq *print-pretty* nil)
;;             (dolist (trace (sb-debug:list-backtrace))
;;               (format *error-output* "[~A] ~A~%" counter
;;                       (if (hash-table-p (car (last trace))) (without-last trace) trace))
;;               (when (eq (car trace) 'COMPILE-TARGET) (return t))
;;               (setq counter (1+ counter)))
;;             (setq *print-pretty* t))
;;           (sb-ext:exit)))

(defun print-trace ()
  (format t "~A" (sb-debug:list-backtrace)))

(defun display (&rest args)
  (format t "~{~A~^ ~}" args))

(defvar *new-line* (format nil "~%"))

(defun output (ctrl &rest rest)
  (let ((result (apply 'format (append (list nil ctrl) rest))))
    (apply 'format (list *output* result))
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

(defun read-file (path)
  (let ((targets '()))
    (with-open-file (file path)
	  (let ((*readtable* (copy-readtable)))
		(setf (readtable-case *readtable*) :preserve)
		(DO ((target (READ file) (READ file NIL NIL)))
			((NULL target) T)
		  (PUSH target targets))))
    (reverse targets)))

(defun indent (lvl)
  (make-string (* lvl 2) :initial-element #\Space))

;; (defun <> (name &rest body)
;;   (intern (format nil "~{~A~^_~}" name body)))

(defun make-generic-name (name generic)
  (format nil "~A ## _ ~A" name generic))

(defun make-method-name (struct method)
  (format nil "~A_m_~A" struct method))

(defun make-shared-name (struct method)
  (format nil "~A_s_~A" struct method))

(defun is-name (name) (symbolp name))

(defun is-decl-name (name)
  (let ((name (symbol-name name)))
    (cond ((string= name "const") nil)
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
