(in-package :cicili)

(defvar *output* t)

(defvar *unaries* '(|+| |-| |++| |1+| |--| |1-| |~| |not| |cof| |aof| |symbolize| |stringize|))
(defvar *operators* '(|+| |-| |*| |/| |%| |==| |!=| |>| |<| |>=| |<=| |^| |<<| |>>| |xor| |and| |or| |bitand| |bitor|))
(defvar *assignments* '(|+=| |-=| |*=| |/=| |%=| |<<=| |>>=|))
(defvar *modifiers* '(|&| |*| |**| |***|))

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
(defparameter *ast-total-runs* 3)
;; stores whether resolver needs another run run number
(defparameter *more-run* nil)                 
;; stores names symbols of all loaded macros 
(defvar *macros* (make-hash-table :test 'equal))
;; whether cicili is during macro expantion
(defparameter *macroexpand* (make-hash-table :test 'equal))
;; holds the params name appended to each func, struct, union
(defparameter *generic* nil)
;; holds the generic names and its arguements
(defparameter *specific* nil)

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

(defmacro warning! (&rest rest)
  `(format t ,@rest))

(defparameter *line-num* (let ((count 1)
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

(defparameter *col-num* (let ((count 1)
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
  (format nil "~A:~D:~D" *target-file* line-n col-n))

;; reads log from second hash table, previous run
(defun prev-ast< (&optional (plus-line 0) (plus-col 0))
  (let* ((line-n  (funcall *line-num* 0))
         (col-n   (funcall *col-num* 0))
         (ast-key (ast-key< (+ line-n plus-line) (+ col-n plus-col))))
    (when *debug* (display "M:" ast-key (gethash ast-key (nth 1 *ast-lines*)) #\NewLine))
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
       (when *debug* (display "set-run" *ast-run* ">" (ast-key< ,line-n ,col-n) ""))
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
  ;; (when *generic* (setq ctrl (str:replace-all "~%" " \\~%" ctrl)))
  ;; (when (and *specific* *generic*)
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
      (when *debug* (display result #\NewLine))
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

(defun <> (name &rest body)
  (intern (format nil "~A_~{~A~}" name body)))

(defun make-generic-name (name generic)
  (format nil "~A ## _ ~A" name generic))

(defun make-method-name (struct method)
  (if *generic*
      (format nil "~A ## _m_ ## ~A" struct method)
      (format nil "~A_m_~A" struct method)))

(defun make-shared-name (struct method)
  (if *generic*
      (format nil "~A ## _s_ ## ~A" struct method)
      (format nil "~A_s_~A" struct method)))

(defun is-name (name) (symbolp name))

(defun is-decl-name (name)
  (let ((name (symbol-name name)))
    (if *generic*
        (cond ((string= name "const") nil)
	          ((not (find (char name 0) "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ_")) nil)
	          (t (progn
	               (dotimes (i (- (length name) 1))
		             (unless (find (char name (+ i 1)) "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ_1234567890 #!")
		               (return-from is-decl-name nil)))
	               t)))
        (cond ((string= name "const") nil)
	          ((not (find (char name 0) "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ_")) nil)
	          (t (progn
	               (dotimes (i (- (length name) 1))
		             (unless (find (char name (+ i 1)) "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ_1234567890")
		               (return-from is-decl-name nil)))
	               t))))))

(defun is-symbol (name)
  (let ((name (symbol-name name)))
    (cond ((string= name "const") nil)
	      (t (progn
	           (dotimes (i (length name))
		         (unless (find (char name i) "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ_1234567890_")
		           (return-from is-symbol nil)))
	           t)))))

(defun key-eq (symbol1 symbol2)
  (and (symbolp symbol1) (symbolp symbol2) (string-equal (symbol-name symbol1) (symbol-name symbol2))))

(defun is-array (desc)
  (when (and (listp desc) (key-eq (first desc) (intern "[")) (key-eq (car (last desc)) (intern "]"))) t))

(defun replace-args< (name-values args)
  (dolist (nv name-values)
    (return-from replace-args<
      (loop for arg in args
            when (or (symbolp arg) (> (length arg) 0))
            collect (str:replace-all (car nv) (uiop:native-namestring (cadr nv))
                                     (if (symbolp arg) (symbol-value arg) arg))))))

(defun free-name (path name)
  ;; (when (listp name) (error (format nil "wrong object name inside module: ~A ~A" path name)))
  (intern
   (format nil "cicili~A"
           (str:replace-all "[=+/]" "_"
                            (sha1:sha1-base64
                                (format nil "~{~A~}"
                                        (map 'list #'(lambda (x) (if (typep x 'sp) (symbol-name (name x))
                                                                     (symbol-name x)))
                                             (append path (if (listp name) name (list name)))))
                              #'base64:base64-encode)
                            :regex t))))
