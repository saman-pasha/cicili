(in-package :cicili)

;;; Register a module member under its qualified name as well as its own, so
;;; that geom::Point resolves from outside the module. The alias is keyed flat
;;; -- *gets* walks up the lexeme path and tries the bare key last, which is
;;; exactly where a fully qualified name should be found. C++ only: in C the
;;; name is mangled and there is nothing to qualify.
;;; The alias is a COPY carrying the qualified name, not the original. A
;;; reference from outside says geom::Point and everything downstream of it --
;;; the declaration it infers, the member it looks up -- has to say geom::Point
;;; too, because that is the name C++ knows outside the namespace. Sharing the
;;; original would resolve and then emit `Point p', which does not compile.
;;;
;;; Members are keyed member/Type, so the qualified type needs its own set of
;;; member keys, and its own entry in *struct-bases* so inherited members are
;;; still found through it.
(defun alias-in-module< (spec)
  (when (and *cpp* *module-path* spec (typep spec 'sp) (symbolp (name spec)))
    (let* ((qname (qualified-name< (append *module-path* (list (name spec)))))
           (alias (make-specifier qname (construct spec) (const spec)
                                  (if (eql (typeof spec) (name spec)) qname (typeof spec))
                                  (modifier spec) (const-ptr spec) (array-def spec)
                                  (default spec) (attrs spec))))
      (setf (inners alias) (inners spec))
      (setf (params alias) (params spec))
      (setf (body   alias) (body   spec))
      (setf (bases  alias) (bases  spec))
      (setf (gethash (symbol-name qname) *symbols*) alias)
      (when (hash-table-p (inners spec))
        (loop for m being the hash-value of (inners spec)
              do (when (and (typep m 'sp) (symbolp (name m)))
                   (setf (gethash (format nil "~A/~A" (name m) qname) *symbols*) m))))
      (when (gethash (name spec) *struct-bases*)
        (setf (gethash qname *struct-bases*) (gethash (name spec) *struct-bases*)))))
  spec)

(defun specify-module (def attrs)
  (when (> (length attrs) 0) (error (format nil "wrong attributes ~A" attrs)))
  (let* ((name (specify-decl-name< (nth 1 def)))
	     (clauses (nthcdr 2 def))
	     (module-specifier (make-specifier name '|@MODULE| nil nil nil nil nil nil nil))
         (tmp-module-spec *module-spec*)
         (tmp-module-path *module-path*))
    (setq *module-spec* module-specifier)
    (setq *module-path* (append *module-path* (list (name module-specifier))))
    (let ((attributes '()))
      (dolist (clause clauses)
	    (if (consp clause)
	        (let ((construct (car clause)))
	          (cond ((find (char (symbol-name construct) 0) "@#")
		             (add-inner (specify-preprocessor clause attributes) module-specifier)
		             (setq attributes '()))
                    ((find construct *attributes* :test #'key-eq) (push clause attributes))
		            ((key-eq construct '|include|)  (setq attributes '()))
		            ((key-eq construct '|var|)
		             (add-inner (alias-in-module< (specify-variable clause attributes)) module-specifier)
		             (setq attributes '()))
		            ((key-eq construct '|func|)
		             (add-inner (alias-in-module< (specify-function clause attributes)) module-specifier)
		             (setq attributes '()))
		            ((key-eq construct '|method|)
		             (add-inner (alias-in-module< (specify-function clause attributes)) module-specifier)
		             (setq attributes '()))
		            ((key-eq construct '|enum|)
		             (add-inner (specify-enum     clause attributes) module-specifier)
		             (setq attributes '()))
		            ((key-eq construct '|struct|)
		             (add-inner (alias-in-module< (specify-struct   clause attributes)) module-specifier)
		             (setq attributes '()))
		            ((key-eq construct '|union|)
		             (add-inner (specify-union    clause attributes) module-specifier)
		             (setq attributes '()))
		            ((key-eq construct '|guard|)
		             (add-inner (specify-guard    clause attributes) module-specifier)
                     (setq attributes '()))
		            ((key-eq construct '|module|)
		             (add-inner (specify-module   clause attributes) module-specifier)
		             (setq attributes '()))
		            (t (let ((bd (expand-macros   clause))) ; any macro produce other macro
                         (if (eq bd clause)
                             (add-inner (specify-expr bd) module-specifier)
                             (unless (symbolp bd)
                               (add-inner
                                   (if (and (listp bd) (key-eq (car bd) '$$$))
                                       (specify-body (cdr bd))
                                       (specify-expr bd))
                                 module-specifier)))
                         (setq attributes '()))
                       (setq attributes '()))))
	        (error (format nil "syntax error ~A" clause)))))
    (setq *module-path* tmp-module-path)
    (setq *module-spec* tmp-module-spec)
    module-specifier))

;;; A module is a NAMED SCOPE, and each language has its own way of being one.
;;;
;;; In C there is no such thing, so the module is a naming convention: nothing
;;; is emitted around it and every name inside is run through free-name, which
;;; is what keeps one module's `init' apart from another's.
;;;
;;; In C++ there is such a thing, so the module IS it -- `namespace X { … }' --
;;; and the names inside stay exactly as written, because the language is doing
;;; the separating. That is also what makes X::thing mean something: a mangled
;;; name has nothing for a qualified reference to name.
;;;
;;; One clause, two lowerings. There is no separate `namespace' construct for
;;; the same reason there is no `cref': the language already had the idea.
(defun compile-module (spec lvl globals parent-spec &key from-body ((:nested is-nested) nil))
  (let ((name (name spec)))
    (if *cpp*
        (progn
          (output "~&~A" (indent (max 0 (- lvl 1))))
          (set-ast-line (output "namespace "))
          (set-ast-line (output "~A" (symbol-name name)))
          (output " {~%")
          (compile-body-map (inners spec) lvl globals spec)
          (output "~&~A" (indent (max 0 (- lvl 1))))
          (set-ast-line (output "}"))
          (output "~%"))
        (compile-body-map (inners spec) lvl globals spec))))
