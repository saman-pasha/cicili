(in-package :cicili)

;;;; specifier
(defclass sp ()
  ((name          :initarg :name      :accessor name)
   (construct     :initarg :construct :accessor construct)
   (const         :initarg :const     :accessor const)
   (typeof        :initarg :typeof    :accessor typeof)
   (modifier      :initarg :modifier  :accessor modifier)
   (const-ptr     :initarg :const-ptr :accessor const-ptr)
   (array-def     :initarg :array-def :accessor array-def)
   (default       :initarg :default   :accessor default)
   (keys          :initform nil :accessor keys)
   (module        :initform nil :accessor module)
   (unique        :initform nil :accessor unique)
   (attrs         :initarg :attrs     :accessor attrs)
   (anonymous     :initarg :anonymous :initform nil :accessor anonymous)
   (body          :initform nil :accessor body)
   (params        :initform nil :accessor params)
   (lambdas       :initform nil :accessor lambdas)
   (inners        :initform nil :accessor inners)
   (is-moved      :initform nil :accessor is-moved) ; compile-time 'move modifier helper
   (bases         :initform nil :accessor bases)    ; C++ base classes, from (inherits ...)
   (ctor-init     :initform nil :accessor ctor-init); C++ member-initializer list, from (init ...)
   )) ; sp

(defun make-specifier (name construct const typeof modifier const-ptr array-def default attrs &optional (anonymous nil))
  (let ((instance (make-instance 'sp
				                 :name      name
				                 :construct construct
				                 :const     const
				                 :typeof    typeof
				                 :modifier  modifier
				                 :const-ptr const-ptr
				                 :array-def array-def
				                 :default   default
				                 :attrs     attrs
				                 :anonymous anonymous)))
    (setf (keys instance) (make-hash-table :test 'eql))
    
    (cond ((eql construct '|@ATOM|)
           (when (and (module-mangles<) (eql typeof '|@SYMBOL|))
             (setf (module instance) *module-path*)
             (setf (unique instance) (free-name *module-path* name)))
 	       (setf (inners  instance)     (make-hash-table :test 'eql))) ; contains type inline struct
          ((eql construct '|@TYPEDEF|)
           (setf (inners  instance)     (make-hash-table :test 'eql))) ; contains type inline struct
          ((eql construct '|@VAR|)
           (when (module-mangles<)
             (setf (module instance) *module-path*)
             (setf (unique instance) (free-name *module-path* name)))
 	       (setf (inners  instance)     (make-hash-table :test 'eql))) ; contains type inline struct
          ((eql construct '|@LET|)
	       (setf (params  instance)     (make-hash-table :test 'eql)))
          ((eql construct '|@LETN|)
	       (setf (params  instance)     (make-hash-table :test 'eql)))
	      ((eql construct '|@FOR|)
	       (setf (params  instance)     (make-hash-table :test 'eql)))
	      ((eql construct '|@FUNC|)
           (when (module-mangles<)
             (setf (module instance) *module-path*)
             (setf (unique instance)
                   (if (symbolp name)
                       (free-name *module-path* name)
                       (intern (make-shared-name (symbol-name (free-name *module-path* (car name))) (cdr name))))))
	       (setf (params  instance)     (make-hash-table :test 'eql))
 	       (setf (inners  instance)     (make-hash-table :test 'eql))) ; contains lambdas
	      ((eql construct '|@METHOD|)
           (when (module-mangles<)
             (setf (module instance) *module-path*)
             (setf (unique instance)
                   (intern (make-method-name (symbol-name (free-name *module-path* (car name))) (cdr name)))))
	       (setf (params  instance)     (make-hash-table :test 'eql))
 	       (setf (inners  instance)     (make-hash-table :test 'eql))) ; contains lambdas
	      ((eql construct '|@ENUM|)
           (when (module-mangles<)
             (setf (module instance) *module-path*)
             (setf (unique instance) (free-name *module-path* name)))
 	       (setf (inners  instance)     (make-hash-table :test 'eql)))
	      ((eql construct '|@STRUCT|)
           (when (module-mangles<)
             (setf (module instance) *module-path*)
             (setf (unique instance) (free-name *module-path* name)))
	       (setf (params  instance)     (make-hash-table :test 'eql))
	       (setf (inners  instance)     (make-hash-table :test 'eql)))
	      ((eql construct '|@UNION|)
           (when (module-mangles<)
             (setf (module instance) *module-path*)
             (setf (unique instance) (free-name *module-path* name)))
	       (setf (params  instance)     (make-hash-table :test 'eql))
	       (setf (inners  instance)     (make-hash-table :test 'eql)))
	      ((eql construct '|@GUARD|)
	       (setf (inners  instance)     (make-hash-table :test 'eql)))
	      ((eql construct '|@MODULE|)
           (when (module-mangles<)
             (setf (module instance) *module-path*)
             (setf (unique instance) (free-name *module-path* name)))
           (setf (inners  instance)     (make-hash-table :test 'eql)))
	      ((eql construct '|@TARGET|)
	       (setf (inners  instance)     (make-hash-table :test 'eql)))
	      (t t))
    instance))

(defun add-param (spec parent)
  (if (gethash (name spec) (params parent))
      (error (format nil "paramter exists: ~A for ~A" spec parent))
      (setf (gethash (name spec) (params parent)) spec)))

(defun add-inner (spec parent)
  (let ((name (name spec)))
    (when (find-if #'(lambda (attr) (if (key-eq '|decl| (car attr)) t nil)) (attrs spec))
      (setq name (intern (format nil "~A-~A" '|decl| (name spec)))))
    (if (gethash name (inners parent))
        (error (format nil "inner exists: ~A in ~A" spec parent))
        (setf (gethash name (inners parent)) spec)
        )
    ))

;;;; print specifier
(defmethod print-object ((spec sp) stream)
  (print-unreadable-object (spec stream :type nil :identity nil)
    (princ
     (cond ((or (eql (construct spec) '|@LET|)
                (eql (construct spec) '|@LETN|))
            (remove nil (list (construct spec) (name spec)
                              (let ((lkv '()))
                                (maphash #'(lambda (k v)
                                             (push v lkv))
                                         (params spec))
                                lkv)
                              (when (body spec) (last (body (body spec)))))))
           (t (remove nil (list (construct spec)
                                (when (const spec) (list "c:" (const spec)))
                                (when (typeof spec) (list "t:" (typeof spec)))
                                (when (modifier spec) (list "m:" (modifier spec)))
                                (when (const-ptr spec) (list "p:" (const-ptr spec)))
                                (when (name spec) (list "n:" (name spec)))
                                (array-def spec)
                                (when (default spec) (list "=" (default spec))) (attrs spec)))))
     stream)))

(defun copy-specifiers (table)
  (if (null table)
      (make-hash-table)
      (let ((new-table (make-hash-table
                        :test (hash-table-test table)
                        :size (hash-table-size table)
		                :rehash-size (hash-table-rehash-size table)
		                :rehash-threshold (hash-table-rehash-threshold table))))
        (maphash #'(lambda(key value)
                     (setf (gethash key new-table) value))
                 table)
        new-table)))

(defun print-specifier (spec &optional (lvl 0))
  (format t
    "~A~A ~A ~:[~A ~;~*~]~:[~A ~;~*~]~:[~A ~;~*~]~:[~A ~;~*~]~:[~{~A~} ~;~*~]~:[= ~A ~;~*~]~:[{~{~A~^ ~}}~;~*~]~:[~;A~]~%"
	(indent lvl) (construct spec) (name spec) (null (const spec)) (const spec) (null (typeof spec)) (typeof spec)
	(null (modifier spec)) (modifier spec) (null (const-ptr spec)) (const-ptr spec)
	(null (array-def spec)) (array-def spec) (null (default spec)) (default spec)
	(null (attrs spec)) (attrs spec) (anonymous spec))
  (let ((params  (params  spec))
	    (inners  (inners  spec)))
    (when params  (print-specifiers params  (+ 1 lvl)))
    (when inners  (print-specifiers inners  (+ 1 lvl)))))

(defun print-specifiers (table &optional (lvl 0))
  (maphash #'(lambda (k v) (print-specifier v lvl)) table))

(defun specify-decl-name< (name)
  (let ((name (intern (substitute #\_ #\^ (symbol-name name)))))
    (if (is-decl-name name) name
        (error (format nil "wrong declaration name ~S" name)))))

;; Register the `declare' tag of an anonymous struct/union in the symbol table as
;; an ordinary member of the ENCLOSING aggregate, typed with the anonymous one:
;;
;;
;;   tag/Employee          -> type ciciliUnion102   (this entry)
;;   tag_id/ciciliUnion102 -> int                   (the union's own member)
;;
;; so ($ e tag tag_id) can walk in, and the tag is reachable by name the way any
;; other member is. This is a lookup-only entry: `emitted' keeps a blank typeof,
;; because the backend prints the anonymous body in front of the tag and must not
;; also print a type name.
(defun put-declare-tag< (emitted anon-spec enclosing-spec)
  (let ((*struct-spec* enclosing-spec))
    (*puts* (name emitted)
      (make-specifier (name emitted) '|@VAR| (const emitted) (name anon-spec)
                      (modifier emitted) (const-ptr emitted) (array-def emitted)
                      nil (attrs emitted)))))

(defun specify-name< (name)
  ;; for incomplete type error, field of its own type
  (let ((name (expand-macros name)))
    (if (listp name)
        (if (or (key-eq '|struct| (car name)) (key-eq '|union| (car name)))
            (let* ((ty (expand-macros (cadr name)))
                   (na (intern (substitute #\_ #\^ (symbol-name ty)))))
              (if (is-name na)
                  (list (car name) na)
                  (error (format nil "wrong name ~S" name))))
            (specify-typeof< name)) ; use for typeof
        (let ((name (intern (substitute #\_ #\^ (symbol-name name)))))
          (if (is-name name)
              (specify-typeof< name)
              (error (format nil "wrong name ~S" name)))))))

(defun specify-receiver< (name)
  (let ((parts (str:split "->" (string name))))
    (unless (= (length parts) 2) (error (format nil "wrong receiver ~S" name)))
    (let ((receiver (intern (nth 0 parts)))
          (method (intern (nth 1 parts))))
      (if (and (is-name receiver) (is-symbol method))
          (cons (specify-name< receiver) (specify-name< method))
          (error (format nil "wrong receiver ~S" name))))))

(defun specify-type-name< (name)
  (cond ((key-eq name '|uchar|)  "unsigned char")
	    ((key-eq name '|ushort|) "unsigned short")
	    ((key-eq name '|uint|)   "unsigned int")
	    ((key-eq name '|ulong|)  "unsigned long")
	    ((key-eq name '|llong|)  "long long")
	    ((key-eq name '|ullong|) "unsigned long long")
	    ((key-eq name '|i8|)     "int8_t")
	    ((key-eq name '|u8|)     "uint8_t")
	    ((key-eq name '|i16|)    "int16_t")
	    ((key-eq name '|u16|)    "uint16_t")
	    ((key-eq name '|i32|)    "int32_t")
	    ((key-eq name '|u32|)    "uint32_t")
	    ((key-eq name '|i64|)    "int64_t")
	    ((key-eq name '|u64|)    "uint64_t")
	    ((key-eq name '|i128|)   "__int128")
	    ((key-eq name '|u128|)   "unsigned __int128")
	    ((key-eq name '|real|)   "long double")
	    ((key-eq name '|auto|)   "__auto_type")
	    (t (specify-name< name))))

(defun specify-name-with-module< (symbol)
  (let* ((str-name (symbol-name symbol))
         (count$ (str:count-substring "/" str-name)))
    (cond ((str:starts-with-p "/" str-name)
           (intern str-name))
          ((> count$ 0) (free-name (map 'list #'intern (str:split "/" str-name)) nil))
          (t symbol))))

;;; type part of any declaration
(defun specify-typeof< (type)
  (if (atom type)
      (if (typep type 'sp)
          (progn
            (setf (name type) (specify-name-with-module< (name type)))
            type)
          (specify-name-with-module< type))
      (let ((ty (car type)))
        (cond ((or (key-eq '|struct| ty) (key-eq '|union| ty)) ; for incomplete type error, field of its own type
               (let ((xpnd (expand-macros (cadr type))))
                 (if (listp xpnd)
                     (list ty (specify-typeof< xpnd))
                     (list ty (specify-name-with-module< xpnd)))))
              ((key-eq '|typeof| ty) (specify-typeof-expr type))
              ((key-eq '|t<>| ty)    (specify-expr type))
              ((key-eq '$$ ty)       (specify-expr type))
              ((key-eq '|code| ty)   (specify-expr type))
              ;; The three sites below name an anonymous struct, and the name
              ;; has to be unique across everything that may be linked together
              ;; -- these carry external linkage. It used to be seeded with
              ;; (get-universal-time), which is not a uniquifier at all: it has
              ;; one-second resolution, so two translation units compiled in
              ;; the same second collided, and it changed on every rebuild, so
              ;; every regenerated .c differed from the committed one in names
              ;; only. *target-file* + the gensym counter is both stronger and
              ;; stable: the counter is reset per target (compiler.lisp), so
              ;; the pair is unique within a unit and the file name separates
              ;; the units.
              ((and (null *function-spec*) *typedef-spec* (key-eq 'QUOTE ty)) ; inline struct global typedef
               (let* ((sname (free-name (list *target-file*) (gensym "__ciciliS_")))
                      (struct-spec (specify-struct (append (list '|struct| sname) (cadr type)) '() :inline t)))
                 (add-inner struct-spec *typedef-spec*)
                 (if *module-path* (free-name *module-path* sname) sname)))
              ((and (null *function-spec*) *variable-spec* (key-eq 'QUOTE ty)) ; inline struct global var
               (let* ((sname (free-name (list *target-file*) (gensym "__ciciliS_")))
                      (struct-spec (specify-struct (append (list '|struct| sname) (cadr type)) '() :inline t)))
                 (add-inner struct-spec *variable-spec*)
                 (list '|struct| (if *module-path* (free-name *module-path* sname) sname))))
              ((and *function-outp* *function-spec* (key-eq 'QUOTE ty)) ; inline struct as function out type
               (let* ((fname (name *function-spec*))
                      (cname (if (listp fname) (make-method-name (car fname) (cdr fname)) (symbol-name fname)))
                      (sname (if (str:starts-with-p "__ciciliS_" cname)
                                 (intern (format nil "~A_" cname))
                                 (intern (format nil "__ciciliS_~A_" cname))))
                      (struct-spec (specify-struct (append (list '|struct| sname) (cadr type)) '() :inline t)))
                 (setf (default struct-spec) t) ; means struct as out type
                 (add-inner struct-spec *function-spec*)
                 (list '|struct| (if *module-path* (free-name *module-path* sname) sname))))
              ((and *function-spec* (key-eq 'QUOTE ty)) ; inline struct inside function body
               (let* ((sname (free-name (list *target-file*) (gensym "__ciciliS_")))
                      (struct-spec (specify-struct (append (list '|struct| sname) (cadr type)) '() :inline t)))
                 (add-inner struct-spec *function-spec*)
                 (list '|struct| (if *module-path* (free-name *module-path* sname) sname))))
              (t (let ((bd (expand-macros type)))
                   (if (eq bd type)
                       type
                       (specify-typeof< bd))))
              ))))

(defun specify-type< (def)
  (set-ast-vals def
    (let* ((desc (expand-macros def))
           (len (if (listp desc) (length desc) 1))
	       (const nil)
	       (type nil)
	       (modifier nil)
	       (const-ptr nil)
	       (variable nil)
	       (array nil)
           ;; the [] of an ARRAY of function pointers, kept apart from `array'
           ;; because for a func type `array' already carries the function spec
           (func-array nil)
	       (status 0))
      ;; A qualified name is ONE type name wherever it appears, so it is folded
      ;; into its symbol before the descriptor is read positionally -- otherwise
      ;; ($$ std string) is a three-element list and the reader takes `std' for
      ;; the type and `string' for the variable.
      (when (name-form-p< desc)
        (setq desc (name-form< desc))
        (setq len 1))
      ;; walked by hand rather than with mapcar: a variable descriptor is a
      ;; DOTTED list -- (auto s . #'(...)) -- and mapcar drops the tail, which
      ;; took the type with it and emitted `s = ...' with no declaration
      (when (consp desc)
        (setq desc (let ((walk desc) (acc '()))
                     (loop while (consp walk)
                           do (progn (push (name-form< (car walk)) acc)
                                     (setq walk (cdr walk))))
                     (let ((head (nreverse acc)))
                       (if walk (append head walk) head)))))
      ;; code has unextractable content
      (when (and (listp desc) (key-eq (car desc) '|code|))
        (return-from specify-type< (set-ast-vals def (values nil (specify-code-expr desc) nil nil nil nil))))

      (let ((nth-0-desc (expand-macros (nth 0 desc)))
            (nth-1-desc (expand-macros (nth 1 desc)))
            (nth-2-desc (expand-macros (nth 2 desc)))
            (nth-3-desc (expand-macros (nth 3 desc)))
            (nth-4-desc (expand-macros (nth 4 desc)))
            (nth-5-desc (expand-macros (nth 5 desc))))
        (cond ((symbolp desc) (setq type desc))
	          ((= len 1) (setq type nth-0-desc))
	          ((= len 2) (if (key-eq nth-0-desc '|const|)
			                 (progn
			                   (setq const nth-0-desc)
			                   (setq type nth-1-desc))
		                     (if (find nth-1-desc *modifiers* :test #'key-eq)
			                     (progn
			                       (setq type nth-0-desc)
			                       (setq modifier nth-1-desc))
			                     (if (is-array nth-1-desc)
			                         (progn
			                           (setq type nth-0-desc)
			                           (setq array nth-1-desc))
			                         (progn
			                           (setq type nth-0-desc)
			                           (setq variable nth-1-desc))))))
	          ((= len 3) (if (key-eq nth-0-desc '|func|)
                             (progn
                               (setq type nth-0-desc)
		                       (setq modifier '|*|)
                               (setq variable nth-1-desc)
				               (setq array (specify-function desc (list '(|decl|)))))
                             (if (key-eq nth-0-desc '|const|)
			                     (if (find nth-2-desc *modifiers* :test #'key-eq) 
			                         (progn
			                           (setq const nth-0-desc)
			                           (setq type nth-1-desc)
			                           (setq modifier nth-2-desc))
			                         (if (is-array nth-2-desc)
			                             (progn
				                           (setq const nth-0-desc)
				                           (setq type nth-1-desc)
				                           (setq array nth-2-desc))
			                             (progn
			                               (setq const nth-0-desc)
			                               (setq type nth-1-desc)
			                               (setq variable nth-2-desc))))
		                         (if (find nth-1-desc *modifiers* :test #'key-eq)
			                         (if (or (key-eq nth-2-desc '|const|) (key-eq nth-2-desc '|restrict|))
			                             (progn
				                           (setq type nth-0-desc)
				                           (setq modifier nth-1-desc)
				                           (setq const-ptr nth-2-desc))
			                             (if (is-array nth-2-desc)
				                             (progn
				                               (setq type nth-0-desc)
				                               (setq modifier nth-1-desc)
				                               (setq array nth-2-desc))
			                                 (progn
				                               (setq type nth-0-desc)
				                               (setq modifier nth-1-desc)
				                               (setq variable nth-2-desc))))
			                         (progn
			                           (setq type nth-0-desc)
			                           (setq variable nth-1-desc)
			                           (setq array nth-2-desc))))))
	          ((= len 4) (if (key-eq nth-0-desc '|func|)
                             ;; the [] sits after the NAME, before the parameters,
                             ;; the same as any other variable:
                             ;;   (func ops [] ((int a) (int b)))
                             (if (is-array nth-2-desc)
                                 (progn
                                   (setq type nth-0-desc)
		                           (setq modifier '|*|)
                                   (setq variable nth-1-desc)
                                   (setq func-array nth-2-desc)
                                   (setq array (specify-function
                                                   (list nth-0-desc nth-1-desc nth-3-desc)
                                                   (list '(|decl|)))))
                                 (progn
                                   (setq type nth-0-desc)
		                           (setq modifier '|*|)
                                   (setq variable nth-1-desc)
				                   (setq array (specify-function desc (list '(|decl|))))))
                             (if (key-eq nth-0-desc '|const|)
                                 (if (key-eq nth-1-desc '|func|)
                                     (progn
                                       (setq const nth-0-desc)
                                       (setq type nth-1-desc)
		                               (setq modifier '|*|)
                                       (setq variable nth-2-desc)
				                       (setq array (specify-function (cdr desc) (list '(|decl|)))))
                                     (if (find nth-2-desc *modifiers* :test #'key-eq)
			                             (if (or (key-eq nth-3-desc '|const|) (key-eq nth-3-desc '|restrict|))
				                             (progn
				                               (setq const nth-0-desc)
				                               (setq type nth-1-desc)
				                               (setq modifier nth-2-desc)
				                               (setq const-ptr nth-3-desc))
			                                 (if (is-array nth-3-desc)
				                                 (progn
				                                   (setq const nth-0-desc)
				                                   (setq type nth-1-desc)
				                                   (setq modifier nth-2-desc)
				                                   (setq array nth-3-desc))
				                                 (progn
				                                   (setq const nth-0-desc)
				                                   (setq type nth-1-desc)
				                                   (setq modifier nth-2-desc)
				                                   (setq variable nth-3-desc))))
		                                 (if (or (key-eq nth-2-desc '|const|) (key-eq nth-2-desc '|restrict|))
			                                 (if (is-array nth-3-desc)
			                                     (progn
				                                   (setq type nth-0-desc)
				                                   (setq modifier nth-1-desc)
				                                   (setq const-ptr nth-2-desc)
				                                   (setq array nth-3-desc))
			                                     (progn
			                                       (setq type nth-0-desc)
			                                       (setq modifier nth-1-desc)
			                                       (setq const-ptr nth-2-desc)
			                                       (setq variable nth-3-desc)))
                                             (if (is-array nth-3-desc)
			                                     (progn
                                                   (setq const nth-0-desc)
				                                   (setq type nth-1-desc)
				                                   (setq variable nth-2-desc)
                                                   (setq array nth-3-desc))
			                                     (progn
			                                       (setq type nth-0-desc)
			                                       (setq modifier nth-1-desc)
			                                       (setq variable nth-2-desc)
			                                       (setq array nth-3-desc))))))
                                 (if (find nth-1-desc *modifiers* :test #'key-eq)
			                         (if (or (key-eq nth-2-desc '|const|) (key-eq nth-2-desc '|restrict|))
			                             (if (is-array nth-3-desc)
				                             (progn
				                               (setq type nth-0-desc)
				                               (setq modifier nth-1-desc)
				                               (setq const-ptr nth-2-desc)
                                               (setq array nth-3-desc))
				                             (progn
				                               (setq type nth-0-desc)
				                               (setq modifier nth-1-desc)
				                               (setq const-ptr nth-2-desc)
                                               (setq variable nth-3-desc)))
                                         (progn
                                           (setq type nth-0-desc)
				                           (setq modifier nth-1-desc)
				                           (setq variable nth-2-desc)
                                           (setq array nth-3-desc)))
                                     (progn
                                       (setq type nth-0-desc)
				                       (setq variable nth-1-desc)
                                       (setq array (list nth-2-desc nth-3-desc)))))))
	          ((= len 5) (if (and (key-eq nth-0-desc '|func|) (is-array nth-2-desc))
                             ;; (func ops [] ((int a) (int b)) (out int))
                             (progn
                               (setq type nth-0-desc)
		                       (setq modifier '|*|)
                               (setq variable nth-1-desc)
                               (setq func-array nth-2-desc)
                               (setq array (specify-function
                                               (list nth-0-desc nth-1-desc nth-3-desc nth-4-desc)
                                               (list '(|decl|)))))
                         (if (key-eq nth-0-desc '|const|)
                             (if (key-eq nth-1-desc '|func|)
                                 (progn
                                   (setq const nth-0-desc)
                                   (setq type nth-1-desc)
		                           (setq modifier '|*|)
		                           (setq variable nth-2-desc)
				                   (setq array (specify-function (cdr desc) (List '(|decl|)))))
                                 (if (is-array nth-4-desc)
                                     (if (is-array nth-3-desc)
			                             (progn
                                           (setq const nth-0-desc)
                                           (setq type nth-1-desc)
				                           (setq variable nth-2-desc)
                                           (setq array (list nth-3-desc nth-4-desc)))
                                         (progn
                                           (setq const nth-0-desc)
			                               (setq type nth-1-desc)
			                               (setq modifier nth-2-desc)
			                               (setq variable nth-3-desc)
                                           (setq array nth-4-desc)))
                                     (progn
			                           (setq const nth-0-desc)
			                           (setq type nth-1-desc)
			                           (setq modifier nth-2-desc)
			                           (setq const-ptr nth-3-desc)
			                           (setq variable nth-4-desc))))
			                 (progn
			                   (setq type nth-0-desc)
			                   (setq modifier nth-1-desc)
			                   (setq const-ptr nth-2-desc)
                               (setq variable nth-3-desc)
			                   (setq array nth-4-desc)))))
	          ((= len 6) (progn
		                   (setq const nth-0-desc)
		                   (setq type nth-1-desc)
		                   (setq modifier nth-2-desc)
		                   (setq const-ptr nth-3-desc)
		                   (setq variable nth-4-desc)
		                   (setq array nth-5-desc)))
	          (t (setq status -1))))

      (setq type (specify-typeof< type))
      
      (unless (or (null const) (key-eq const '|const|)) (setq status -2))
      (unless (or (null modifier)
                  (key-eq modifier '&)
                  (key-eq modifier '&&)   ; C++ rvalue reference
                  (key-eq modifier '*)
                  (key-eq modifier '**)
                  (key-eq modifier '***)
                  (key-eq modifier '|move|)
                  (key-eq modifier '|ref|))
        (setq status -3))
      (unless (or (null const-ptr) (key-eq const-ptr '|const|) (key-eq const-ptr '|restrict|)) (setq status -4))
      (unless (or (null const-ptr)
                  (key-eq modifier '*)
                  (key-eq modifier '**)
                  (key-eq modifier '***))
        (setq status -5))
      ;; (when noVar (unless (null variable) (setq status -6)))
      (if (key-eq type '|func|) ; func type
          (progn
            (when (null array) (setq status -7))
            ;; (<func spec> . <array dims>) -- the backend takes the function from
            ;; the car and the dimensions, if any, from the cdr
            (setq array (cons array
                              (when func-array
                                (if (= (length func-array) 3)
                                    (list (specify-expr (nth 1 func-array)))
                                    (list (specify-expr (nth 1 (car func-array)))
                                          (specify-expr (nth 1 (cadr func-array)))))))))
          (if (and (= (length array) 2) (is-array (car array)) (is-array (cadr array)))
              (setq array (list (specify-expr (nth 1 (car array))) (specify-expr (nth 1 (cadr array)))))
              (when (= (length array) 3)
                (setq array (list (specify-expr (nth 1 array)))))))
      (when (< status 0) (error (format nil "wrong type descriptor ~D ~A" status desc)))
      ;; A type written as a (code ...) escape -- which is what `cref', `mref',
      ;; `rref', `$$' and `t<>' all expand to -- reaches here as a raw list.
      ;; specify-name< cannot name it and the back end prints nothing for it,
      ;; so ((cref int) n) came out as `NIL n'. Turned into a @CODE specifier it
      ;; is a type the back end already knows how to emit verbatim.
      (when (and (listp type) (symbolp (car type)) (key-eq (car type) '|code|))
        (setq type (specify-code-expr type)))
      (values const (if type (if (typep type 'sp) type (specify-name< type)) type)
              modifier const-ptr (when variable (specify-name< variable)) array))))

;; The (lambda ...) / (lambda* ...) form directly inside a ' quote, or NIL.
;; A CALL of a quoted lambda -- ('(lambda ...) arg) -- is deliberately not
;; matched: there the value is whatever the lambda returns, not the lambda.
(defun quoted-lambda< (value)
  (let ((value (expand-macros value)))
    (when (and (listp value) (= (length value) 2) (key-eq (car value) 'QUOTE))
      (let ((quoted (cadr value)))
        (when (and (listp quoted) (symbolp (car quoted))
                   (or (key-eq (car quoted) '|lambda|) (key-eq (car quoted) '|lambda*|)))
          quoted)))))

;; Descriptor for a variable BOUND TO a quoted lambda: (func <name> <params>
;; (out <ret>)), i.e. a pointer to that function -- exactly what a user writes by
;; hand, so it goes through specify-type< unchanged.
;; `ret-spec' is the already-specified value, used only when the lambda's own out
;; clause is itself `auto' and the return type has to be read back off the lifted
;; function.
(defun lambda-func-desc< (quoted variable ret-spec)
  (let* ((starred (key-eq (car quoted) '|lambda*|))
         (params  (nth (if starred 2 1) quoted))
         (out     (nth (if starred 3 2) quoted)))
    (if (and (listp out) (key-eq (car out) '|out|))
        (let ((ret (expand-macros (cadr out))))
          (if (key-eq ret '|auto|)
              (let ((typ (deep-typeof "" ret-spec)))
                (list '|func| variable params (list '|out| (if typ (typeof typ) '|void|))))
              (list '|func| variable params out)))
        ;; no out clause means the lambda returns void
        (list '|func| variable params))))

(defun specify-type-value< (desc)
  (set-ast-vals desc
    (let ((l (cdr (last desc)))
	      (wl (without-last desc)))
      (cond ((and (listp l) (> (length desc) 2) (key-eq (nth (- (length desc) 2) desc) 'FUNCTION)) ; #' function initializer
	         (setq l (nth (- (length desc) 1) desc))
	         (multiple-value-bind (const type modifier const-ptr variable array)
		         (specify-type< (without-last wl))
               (values const type modifier const-ptr variable array l)))

            ;; ' list, lambda and closure initializer
            ((and (listp l) (> (length desc) 2) (key-eq (nth (- (length desc) 2) desc) 'QUOTE))
             (let* ((def (nthcdr (- (length desc) 2) desc))
                    (quoted (cadr def)))
               (cond ((key-eq (car quoted) '|closure|) ; closure initializer
                      (multiple-value-bind (const type modifier const-ptr variable array)
		                  (specify-type< (without-last wl))
		                (values const type modifier const-ptr variable array def)))

                     ((key-eq (car quoted) '|closure*|) ; closure* initializer (has name)
                      (multiple-value-bind (const type modifier const-ptr variable array)
		                  (specify-type< (without-last wl))
		                (values const type modifier const-ptr variable array def)))
                     
                     ((key-eq (car quoted) '|lambda|) ; lambda initializer
                      (multiple-value-bind (const type modifier const-ptr variable array)
		                  (specify-type< (without-last wl))
		                (values const type modifier const-ptr variable array def)))
                     
                     ((key-eq (car quoted) '|lambda*|) ; lambda* initializer (has name)
                      (multiple-value-bind (const type modifier const-ptr variable array)
		                  (specify-type< (without-last wl))
		                (values const type modifier const-ptr variable array def)))
                     
                     ((key-eq (car quoted) '|def-closure*|) ; def-closure* initializer (has struct name) for def-closure
                      (multiple-value-bind (const type modifier const-ptr variable array)
		                  (specify-type< (without-last wl))
		                (values const type modifier const-ptr variable array def)))
                     
                     (t ; list initializer
	                  (setq l (nthcdr (- (length desc) 2) desc))
		              (multiple-value-bind (const type modifier const-ptr variable array)
		                  (specify-type< (without-last wl))
		                (values const type modifier const-ptr variable array l))))))
            
            ((and (listp l) (> (length desc) 2) (key-eq (nth (- (length desc) 2) desc) 'QUASIQUOTE))
             (let* ((def (nthcdr (- (length desc) 2) desc))
                    (evaluated-def (eval (car (macroexpand `(,(cadr def) ,@(cddr def)))))))
               (multiple-value-bind (const type modifier const-ptr variable array)
		           (specify-type< (without-last wl))
		         (values const type modifier const-ptr variable array evaluated-def))))
            
	        ((listp l) ; without default 'NIL'
             (multiple-value-bind (const type modifier const-ptr variable array)
                 (specify-type< desc)
               (values const type modifier const-ptr variable array nil)))
            
	        (t (multiple-value-bind (const type modifier const-ptr variable array)
	               (specify-type< wl)
	             (values const type modifier const-ptr variable array l)))))))

(defun specify-nil-expr (def)
  (set-ast-obj def (make-specifier '|@SYMBOL| '|@ATOM| nil '|void| '|*| nil nil '|NULL| '())))

(defun specify-number-expr (def)
  ;; a literal with a fraction is a double, as in C -- typing every literal `int'
  ;; made (let ((auto d . 2.5))) come out as `const int d = 2.5'
  (make-specifier '|@NUMBER| '|@ATOM| '|const| (if (floatp def) '|double| '|int|)
                  nil nil nil def '()))

(defun specify-character-expr (def)
  (if (eql def #\Null)
      (set-ast-obj def (make-specifier '|@CHAR| '|@ATOM| nil '|char| nil nil nil "\\0" '()))
      (set-ast-obj def (make-specifier '|@CHAR| '|@ATOM| nil '|char| nil nil nil def   '()))))

(defun specify-string-expr (def)
  (set-ast-obj def (make-specifier '|@STRING| '|@ATOM| '|const| '|char| '|*| nil nil (format nil "\"~A\"" def) '())))

(defun specify-symbol-expr (def)
  (set-ast-obj def (let* ((symb (specify-name< def))
                          (type (*gets* symb)))
                     (if type
                         (make-specifier '|@SYMBOL| '|@ATOM| (const type) (typeof type) (modifier type)
                                         (const-ptr type) (array-def type) symb '())
                         (if (or (find symb *unaries* :test #'key-eq)
                                 (find symb *operators* :test #'key-eq)
                                 (find symb *assignments* :test #'key-eq))
                             (make-specifier '|@OPERATOR| '|@ATOM| nil nil nil nil nil symb '())
                             ;; break / continue name nothing, they are emitted verbatim.
                             ;; Covers both spellings: the bare symbol and (break) / (continue),
                             ;; since body.lisp routes the list form here too.
                             (if (find symb *keywords* :test #'key-eq)
                                 (make-specifier '|@SYMBOL| '|@ATOM| nil nil nil nil nil symb '())
                                 (error (format nil "unknown symbol: ~A~%  inside function: ~A~%"
                                                def *function-spec*))))))))

(defun specify-atom-expr (def)
  (set-ast-obj def
    (cond ((null       def) (make-specifier nil '|@NIL| nil nil nil nil nil nil '())) ; ignore nil values like ([ NIL ])
          ((key-eq     def '|nil|) (specify-nil-expr def))
          ((numberp    def)        (specify-number-expr def))
	      ((characterp def)        (specify-character-expr def))
	      ((stringp    def)        (specify-string-expr def))
          ;; a $-prefixed name inside a '{ } list is a designated initializer:
          ;; '{ $id 1 } -> { .id = 1 }, and $tag$tag_id nests. It names nothing,
          ;; so it must not go through the symbol table. compile-list looks for
          ;; exactly this shape -- the symbol in `name', @SYMBOL in `typeof'.
          ((and (symbolp def) (> (length (symbol-name def)) 1)
                (eql (char (symbol-name def) 0) #\$))
           (make-specifier def '|@ATOM| nil '|@SYMBOL| nil nil nil nil '()))
          ((and (symbolp def) (is-symbol def))
	       (if (eql (char (symbol-name def) 0) #\0) ; 0x12af..
	           (specify-number-expr def)
               (specify-symbol-expr def))) ; name
          ((symbolp def) (specify-symbol-expr def)) ; operators
	      (t (error (format nil "syntax error \"~A\"" def))))))

(defun specify-code-expr (def)
  (unless (= (length def) 2) (error (format nil "wrong code form ~A" def)))
  (set-ast-obj def
    (let ((pure (cadr def))
          (code-name (gensym "code")))
      (cond ((atom pure)
             (make-specifier code-name '|@CODE| nil nil nil nil nil pure '()))
	        ((key-eq (car pure) 'QUOTE)
             (make-specifier code-name '|@CODE| nil nil nil nil nil
                             (loop for item in (cadr pure)
                                   collect (if (atom item)
                                               (make-specifier code-name '|@CODE| nil nil nil nil nil item '())
                                               (if (key-eq (car item) '<>)
                                                   (make-specifier code-name '|@CODE| nil nil nil nil nil
                                                                   (intern (format nil "~{~A~^_~}" (cdr item))) '())
                                                   ;; A nested (code ...) stays verbatim; anything else is
                                                   ;; an ORDINARY EXPRESSION and is specified as one. Without
                                                   ;; this a code escape could only splice atoms, so
                                                   ;; (throw* (($$ std runtime_error) "x")) emitted the words
                                                   ;; and dropped the call, and every macro that wraps an
                                                   ;; expression in punctuation -- throw*, delete*, new* --
                                                   ;; worked for literals only.
                                                   (if (and (symbolp (car item)) (key-eq (car item) '|code|))
                                                       (specify-code-expr item)
                                                       (specify-expr (expand-macros item))))))
                             '()))
            ((key-eq (car pure) '|code|)
             (specify-code-expr pure))
            (t (error (format nil "wrong code form ~A" def)))))))

(defun specify-list-expr (def)
  ;; (set-ast-obj def
  (make-specifier nil '|@LIST| nil nil nil nil nil
                  (loop for item in def collect (specify-expr (expand-macros item))) '()))
;; )

(defun specify-unary-expr (def)
  (unless (= (length def) 2) (error (format nil "wrong unary form ~A" def)))
  (set-ast-obj def
    (let* ((oprt (car def))
	       (name (symbol-name oprt))
	       (is-postfix nil))
      (cond ((key-eq oprt '|not|) (setq oprt '|!|))
	        ((key-eq oprt '|cof|) (setq oprt '|*|))
            ((key-eq oprt '|aof|) (setq oprt '|&|))
            ((key-eq oprt '|1+|)  (setq oprt '|++|) (setq is-postfix t))
	        ((key-eq oprt '|1-|)  (setq oprt '|--|) (setq is-postfix t)))
      (if is-postfix
          (make-specifier oprt '|@UNARY| nil nil t   nil nil (specify-expr (cadr def)) '()) ; 1+ 1-
          (make-specifier oprt '|@UNARY| nil nil nil nil nil (specify-expr (cadr def)) '())))))

(defun specify-operator-expr (def)
  (when (< (length def) 3) (error (format nil "wrong operator form ~A" def)))
  (set-ast-obj def
    (let ((opr (car def))
	      (oprnds '()))
      (cond ((key-eq opr '|and|)    (setq opr '|&&|))
	        ((key-eq opr '|or|)     (setq opr '|\|\||))
	        ((key-eq opr '|bitand|) (setq opr '|&|))
	        ((key-eq opr '|bitor|)  (setq opr '|\||))
	        ((key-eq opr '|xor|)    (setq opr '|^|)))
      (dolist (oprnd (cdr def))
        (push opr oprnds)
        (push oprnd oprnds))
      (make-specifier opr '|@OPR| nil nil nil nil nil
                      (loop for frm in (cdr (reverse oprnds))
                            for i from 0 to (length oprnds)
                            collect (if (= (mod i 2) 0)
                                        (specify-expr frm)
                                        (make-specifier '|@SYMBOL| '|@ATOM| nil '|void| nil nil nil frm '()))) '()))))

(defun specify-assignment-expr (def)
  (unless (= (length def) 3) (error (format nil "wrong assignment form ~A" def)))
  (set-ast-obj def
    (let ((opr (car def))
	      (oprnds '()))
      (dolist (oprnd (cdr def))
        (push opr oprnds)
        (push oprnd oprnds))
      (make-specifier opr '|@ASSIGN| nil nil nil nil nil
                      (loop for frm in (cdr (reverse oprnds))
                            collect (specify-expr frm))'()))))

(defun specify-nth-expr (def)
  (unless (= (length def) 3) (error (format nil "wrong nth form ~A" def)))
  (set-ast-obj def
    (make-specifier (specify-expr (nth 1 def)) '|@NTH| nil nil nil nil nil (specify-expr (nth 2 def)) '())))

(defun specify-?-expr (def)
  (unless (= (length def) 4) (error (format nil "wrong ? form ~A" def)))
  (set-ast-obj def
    (make-specifier (specify-expr (nth 1 def)) '|@?| nil nil nil nil nil
                    (list (specify-expr (nth 2 def)) (specify-expr (nth 3 def))) '())))

(defun specify-cast-expr (def)
  (unless (= (length def) 3) (error (format nil "wrong cast form ~A" def)))
  (set-ast-obj def
    (let* (;; a qualified name or template-id in the cast's type slot is
           ;; ONE name, folded before the descriptor is read positionally
           (ty (name-form< (expand-macros (nth 1 def))))
           ;; (struct X) / (union X) / (enum X) is ONE type, not a descriptor.
           ;; Everything else that arrives as a list -- (int *), (const char *),
           ;; (a []) -- is a descriptor and specify-type< reads it positionally.
           ;; Handing it a tagged type unwrapped made it read the tag as the type
           ;; and the tag's name as a variable name, so (cast (struct S) …) came
           ;; out typed plain `struct'. That is what left def-closure's context
           ;; variable with (t: struct) and failed later as
           ;; "unknown struct type: struct".
           (tagged (and (listp ty) (or (key-eq '|struct| (car ty))
                                       (key-eq '|union|  (car ty))
                                       (key-eq '|enum|   (car ty)))))
           ;; still routed through specify-typeof<, which is what resolves the
           ;; tag's name against the module path
           (desc (specify-typeof< (if (listp ty)
                                      (if (key-eq '|typeof| (car ty))
                                          (list ty)
                                          ty)
                                      (list ty)))))
      (multiple-value-bind (const type modifier const-ptr variable array)
	      (specify-type< (if tagged (list desc) desc))
        (make-specifier nil '|@CAST|
                        const type modifier const-ptr array (specify-expr (expand-macros (nth 2 def))) '())))))

;;; The four C++ named casts. Same shape as `cast' -- the type is specified, so
;;; the result HAS that type and (-> (dynamic-cast (Shape *) p) area) resolves
;;; -- and the operand is an ordinary expression, so (cof p) survives, which it
;;; did not when these were code escapes splicing text.
;;;
;;; The kind rides in attrs rather than in `name': compile-spec-type emits the
;;; specifier's name after the type, which is right for a declaration and would
;;; put "static_cast" after the type here.
(defun specify-cppcast-expr (def kind)
  (unless (= (length def) 3) (error (format nil "wrong ~A form ~A" kind def)))
  (set-ast-obj def
    (let* (;; a qualified name or template-id in the cast's type slot is
           ;; ONE name, folded before the descriptor is read positionally
           (ty (name-form< (expand-macros (nth 1 def))))
           (tagged (and (listp ty) (or (key-eq '|struct| (car ty))
                                       (key-eq '|union|  (car ty))
                                       (key-eq '|enum|   (car ty)))))
           (desc (specify-typeof< (if (listp ty)
                                      (if (key-eq '|typeof| (car ty)) (list ty) ty)
                                      (list ty)))))
      (multiple-value-bind (const type modifier const-ptr variable array)
	      (specify-type< (if tagged (list desc) desc))
        (declare (ignore variable))
        (make-specifier nil '|@CPPCAST|
                        const type modifier const-ptr array
                        (specify-expr (expand-macros (nth 2 def)))
                        (list (cons '|kind| kind)))))))

;;; (try BODY (catch (PARAM) BODY…) … )
;;;
;;; A body construct, like `if' and `while', and its catch clause DECLARES its
;;; variable the way `for' declares an induction variable -- so the handler can
;;; use it. A catch with no parameter is `catch (...)'.
(defun specify-try (def)
  (when (< (length def) 3) (error (format nil "wrong try form ~A" def)))
  (set-ast-obj def
    (let ((try-var (make-specifier (gensym "try") '|@TRY| nil nil nil nil nil nil '())))
      (setf (body try-var) (specify-body (list (nth 1 def))))
      (setf (default try-var)
            (loop for clause in (nthcdr 2 def)
                  collect (progn
                            (unless (and (consp clause) (key-eq (car clause) '|catch|))
                              (error (format nil "try takes catch clauses, got ~A" clause)))
                            (let ((catch-var (let ((cv (make-specifier (*push* (gensym "catch"))
                                                                       '|@CATCH| nil nil nil nil nil nil '())))
                                               ;; make-specifier gives a params
                                               ;; table only to the constructs it
                                               ;; knows; a catch declares one
                                               ;; variable and needs somewhere
                                               ;; to put it
                                               (setf (params cv) (make-hash-table :test 'eql))
                                               cv))
                                  ;; the parameter list has the same shape as a
                                  ;; function's, so the catch-all is () and one
                                  ;; parameter is ((T e)). C++ allows exactly
                                  ;; one; a second is its error to report.
                                  (param (car (nth 1 clause))))
                              (when (and param (listp param))
                                (multiple-value-bind (const typeof modifier const-ptr variable array)
                                    (specify-type< param)
                                  (let ((var-name (specify-decl-name< variable)))
                                    (add-param
                                        (*puts* var-name
                                          (make-specifier var-name '|@VAR| const typeof modifier
                                                          const-ptr array nil '()))
                                      catch-var))))
                              (setf (body catch-var) (specify-body (nthcdr 2 clause)))
                              (*pop* catch-var)))))
      try-var)))

(defun specify-$-expr (def)
  (set-ast-obj def
    (let ((len (length def))
          ;; a member may be a TEMPLATE-ID -- ($ t (t<> item float)) is
          ;; t.item<float> -- and that is one member name, folded to one symbol
          (member (name-form< (expand-macros (car (last def))))))
      (unless (>= len 3) (error (format nil "wrong access member $ form: ~A" def)))
      (unless (is-symbol member) (error (format nil "wrong access member name: ~A" def)))
      (make-specifier (if (> len 3)
                          (specify-expr (without-last def))
                          (specify-expr (car (last (without-last def)))))
        '|@$| nil nil nil nil nil
        member '()))))

(defun specify-->-expr (def no-call)
  (if no-call ; -->
      (unless (= (length def) 3) (error (format nil "wrong access method name --> form: ~A" def)))
      (when   (< (length def) 3) (error (format nil "wrong access method -> form: ~A" def))))
  (set-ast-obj def
    (let* ((struct (specify-expr (expand-macros (nth 1 def))))
           (storage (deep-storageof "" struct))
           ;; as in specify-$-expr: a template-id is one member name
           (member (name-form< (expand-macros (nth 2 def)))))
      (unless storage (error (format nil "pointer storage not found: ~A~%  in: ~A~%" struct def)))
      (unless (is-symbol member) (error (format nil "wrong access member name: ~A" def)))
      (*push* (name storage))
      (let ((method-var (make-specifier struct (if no-call '|@-->| '|@->|) nil nil nil nil nil member '())))
        (setf (body method-var) (specify-list-expr (nthcdr 3 def)))
        (*pop* method-var)))))

(defun specify-=>-expr (def)
  (when (< (length def) 3) (error (format nil "wrong access member function => form: ~A" def)))
  ;; (unless (is-symbol (nth 2 def)) (error (format nil "wrong access method name ~A" def)))
  (set-ast-obj def
    (let* ((obj (specify-expr (nth 1 def)))
           (holder (deep-storageof "" obj))
           ;; The member is scoped to the object's TYPE -- (typeof holder), not
           ;; (name holder). deep-storageof hands back the storage itself, whose
           ;; name is the variable or member (`duty'); its type is the aggregate
           ;; the member lives in (`Role').
           (scope (when holder (peel-type-tag< (typeof holder))))
           (scope-name (when scope (if (typep scope 'sp) (name scope) scope))))
      (unless scope-name
        (error (format nil "type of the object not found: ~A~%  in: ~A~%" (nth 1 def) def)))
      ;; *lexemes-id* is BOUND rather than pushed. *gets* joins the id with the
      ;; whole path and then walks up by dropping from the FRONT, so a pushed
      ;; scope is the first thing discarded -- describe/Role was never tried on
      ;; its own and every => raised "unknown symbol: <member>". Binding the path
      ;; to just the type makes the first lookup describe/Role, with the bare
      ;; global name as the only fallback.
      (let ((method-var
                (make-specifier obj '|@=>| nil nil nil nil nil
                  (let ((*lexemes-id* (list (symbol-name scope-name))))
                    (specify-expr (nth 2 def)))
                  '())))
        ;; the arguments belong to the CALLER's scope, so they are specified
        ;; outside that binding
        (setf (body method-var) (specify-list-expr (nthcdr 3 def)))
        method-var))))

(defun specify-sizeof-expr (def)
  (when (< (length def) 2) (error (format nil "sizeof syntax error ~A" def)))
  (set-ast-obj def
    (if (listp (second def))
        (make-specifier nil '|@SIZEOF| nil nil nil nil nil (specify-expr (expand-macros (second def))) '())
        (multiple-value-bind (const type modifier const-ptr variable array)
            (specify-type< (cdr def))
          (make-specifier (specify-decl-name< variable) '|@SIZEOF| const type modifier const-ptr array nil '())))))

(defun specify-typeof-expr (def)
  (when (< (length def) 2) (error (format nil "typeof syntax error ~A" def)))
  (set-ast-obj def
    (make-specifier nil '|@TYPEOF| nil nil nil nil nil (specify-expr (expand-macros (cadr def))) '())))

;; a_b
;; (a_b 1)
;; if returns a_b_0
;; then       (a_b_0 2) ; curry lambda call form
;; else       (a_b 1 2)

;; p1
(defun specify-call-expand (def)
  (let ((def (expand-macros def)))
    (if (atom def)
        def
        (let ((expr (let ((symb (nth 0 def)))
                      (if (symbolp symb)
                          (if (key-eq symb 'QUASIQUOTE)
                              (eval (car (macroexpand `(,(car def) ,@(cdr def)))))
                              (if (> (length def) 1)
                                  (let ((app (expand-macros (list symb (nth 1 def)))))
                                    (if (symbolp app)
                                        (if (> (length def) 2)
                                            (specify-call-expand (append (list app) (nthcdr 2 def))))
                                        app)
                                    def)
                                  def))
                          def)
                      (let ((app (specify-call-expand symb)))
                        (if (eql app symb)
                            def
                            (specify-call-expand (append (list app) (nthcdr 1 def))))))))
          (let ((result (expand-macros expr)))
            (if (eql expr result)
                result
                (specify-call-expand result)))))))

(defun specify-call-expr (def) ; consumes all args whether output of a lambda or a fn specification be another macro
  (when (key-eq (car def) '|aof|) (error (format nil "'address of' aka 'aof' takes only one argument ~A" def)))
  (set-ast-obj def
    (let ((app (specify-call-expand def)))
      (if (eql app def)
          (if (symbolp app)
              (error (format nil "invalid call ~A from ~A" app def))
              (make-specifier (specify-expr (nth 0 app)) '|@CALL| nil nil nil nil nil
                              (if (> (length app) 1)
                                  (loop for item in (nthcdr 1 app)
                                        collect (move-var (specify-expr (expand-macros item)) app))
                                  nil)
                              '()))
          (specify-expr app)))))

;; var clause only allowed as global vars but inside macros for complex situation
;; use let clause instead
(defun specify-variable (def attrs)
  (set-ast-obj def
    (let* ((is-register nil)
	       (is-volatile nil)
	       (is-thread-l nil) ; thread-local
	       (is-static   nil)
           (is-declare  nil)
	       (is-extern   nil)
           (is-alloc    nil)
           (is-atomic   nil)
           (has-defer   nil)
	       (type  (cdr def)))

      (dolist (attr attrs)
        (let ((name (car attr)))
	      (cond ((key-eq name '|register|)     (setq is-register t))
	            ((key-eq name '|volatile|)     (setq is-volatile t))
	            ((key-eq name '|thread-local|) (setq is-thread-l t))
	            ((key-eq name '|static|)       (setq is-static   t))
	            ((key-eq name '|decl|)         (setq is-declare  t))
	            ((key-eq name '|extern|)       (setq is-extern   t))
	            ((key-eq name '|atomic|)       (setq is-atomic   t))
                ((key-eq name '|defer|)
                 (let ((quoted (cadr attr)))
                   (if (null quoted)
                       (setq has-defer (cddr attr))
                       (if (and (key-eq '|true| quoted) (null (cddr attr)))
                           (setq has-defer t)
                           (error (format nil "wrong defer definition ~A, #t means pure free" attr))))))
	            (t (error (format nil "unknown variable attribute ~A" attr))))))
      
      (let ((tmp-variable-spec *variable-spec*)
            (var-spec (make-specifier nil '|@VAR| nil nil nil nil nil nil ()))) ; name and unique name further be replaced
        (setf *variable-spec* var-spec)
        (multiple-value-bind (const typeof modifier const-ptr variable array value)
		    (specify-type-value< type)
          (setf (name var-spec) (specify-decl-name< variable))
          (if *module-path* (setf (unique var-spec) (free-name *module-path* (name var-spec))))
          (setf (const var-spec) const)
          (setf (typeof var-spec) typeof)
          (setf (modifier var-spec) modifier)
          (setf (const-ptr var-spec) const-ptr)
          (setf (array-def var-spec) array)
          (when (and (listp value) (key-eq (first value) '|alloc|))
            (setq is-alloc t)
		    (when (or (= (length value) 1) (> (length value) 3))
		      (error (format nil "wrong alloc form ~A" value)))
		    (if (= (length value) 2)
		        (setq value (list '|cast| (remove nil (list const typeof modifier const-ptr))
					              (list '|malloc| (nth 1 value))))
		        (setq value (list '|cast| (remove nil (list const typeof modifier const-ptr))
				                  (list '|calloc| (nth 1 value) (nth 2 value))))))
          (setf (default var-spec) (if (null value)
                                       nil
                                       (move-var (specify-expr (expand-macros value)) value)))
          
	      (let ((attributes '()))
	        (when is-extern   (push (cons '|extern|       t) attributes))
		    (when is-static   (push (cons '|static|       t) attributes))
		    (when is-declare  (push (cons '|decl|         t) attributes))
		    (when is-register (push (cons '|register|     t) attributes))
		    (when is-volatile (push (cons '|volatile|     t) attributes))
		    (when is-thread-l (push (cons '|thread-local| t) attributes))
		    (when is-atomic   (push (cons '|atomic|       t) attributes))
		    (when (or (eq has-defer t) (and is-alloc (null has-defer)))
              (push (cons '|alloc| t) attributes)
              (when (or (null has-defer) (eq has-defer t)) ; auto deferment
                (push (cons '|defer| 
                            (specify-expr
                                `'(|lambda|
                                   (,(remove nil
                                             `(,const ,typeof
                                                ,(cond
                                                   ((key-eq '|auto| typeof) '|*|)
                                                   ((key-eq '|*|  modifier) '|**|)
                                                   ((key-eq '|**| modifier) '|***|)
                                                   (t '|*|))
                                                ,const-ptr ,variable ,array)))
                                   (|free| (|cast| (|void| *) (|cof| ,variable))))))
                  attributes)))
		    (when has-defer
              (let ((symb (if (listp has-defer) (expand-macros (car has-defer)) nil)))
                (when (and (key-eq '|auto| typeof) (listp symb))
                  (error (format nil "auto type variable can't have lambda destructor, only defined function ~%~A" def)))
                (if (symbolp symb)
                    (push (cons '|defer| (specify-expr symb)) attributes)
                    (let ((ptr-name (intern (format nil "~A" variable)))) ; ~A_ptr
                      (push (cons '|defer|
                                  (specify-expr
                                      `'(|lambda|
                                         (,(remove nil
                                                   `(,const ,typeof
                                                      ,(cond
                                                         ((null  modifier) '|*|)
                                                         ((key-eq '|auto| typeof) '|*|)
                                                         ((key-eq '|*|  modifier) '|**|)
                                                         ((key-eq '|**| modifier) '|***|)
                                                         (t '|*|))
                                                      ,const-ptr ,ptr-name ,array)))
                                         ,@has-defer)))
                        attributes)))))          
            (setf (attrs var-spec) attributes)

            ;; 'auto type inference -- see the matching comment in specify-let:
            ;; the quoted lambda ITSELF gives a pointer to that function, a CALL
            ;; of one gives what the call returns
            (when (key-eq '|auto| (typeof var-spec))
              (let ((quoted (quoted-lambda< value)))
                (if quoted
                    (multiple-value-bind (l-const l-type l-mod l-cptr l-var l-array)
                        (specify-type<
                            (lambda-func-desc< quoted variable (default var-spec)))
                      (declare (ignore l-var))
                      (setf (const var-spec) l-const)
                      (setf (typeof var-spec) l-type)
                      (setf (modifier var-spec) l-mod)
                      (setf (const-ptr var-spec) l-cptr)
                      (setf (array-def var-spec) l-array))
                    (let ((typ (deep-typeof "" (default var-spec))))
                      (when typ
                        (setf (const var-spec) (const typ))
                        (setf (typeof var-spec) (typeof typ))
                        (setf (modifier var-spec) (modifier typ))
                        (setf (const-ptr var-spec) (const-ptr typ))
                        (setf (array-def var-spec) (array-def typ)))))))

            (assign-check var-spec var-spec (default var-spec)) ; authority check
            
            (setf *variable-spec* tmp-variable-spec)
            (if *type-infer-time-var*
                var-spec
                (*puts* (name var-spec) var-spec))))))))

(defun specify-let (def &optional as-expr)
  (when (or (< (length def) 2) (not (listp (nth 1 def)))) (error (format nil "wrong let form ~A" def)))
  (set-ast-obj def
    (let ((let-var (make-specifier (*push* (gensym (if as-expr "letn" "let")))
                     (if as-expr '|@LETN| '|@LET|) nil nil nil nil nil nil '())))
      (let ((is-static   nil)
            (is-register nil)
            (is-volatile nil)
	        (is-thread-l nil)
            (is-alloc    nil)
            (is-atomic   nil)
            (has-defer   nil))
        (dolist (type-desc (nth 1 def))
          (unless (and (not (null type-desc)) (listp type-desc))
            (error (format nil "wrong variable definition form ~A" type-desc)))
	      (cond ((and (key-eq (car type-desc) '|register|)     (= (length (cdr type-desc)) 0)) (setq is-register t))
                ((and (key-eq (car type-desc) '|volatile|)     (= (length (cdr type-desc)) 0)) (setq is-volatile t))
                ((and (key-eq (car type-desc) '|thread-local|) (= (length (cdr type-desc)) 0)) (setq is-thread-l t))
	            ((and (key-eq (car type-desc) '|static|)       (= (length (cdr type-desc)) 0)) (setq is-static   t))
	            ((and (key-eq (car type-desc) '|atomic|)       (= (length (cdr type-desc)) 0)) (setq is-atomic   t))
	            ((key-eq (car type-desc) '|defer|)
                 (let ((quoted (cadr type-desc)))
                   (if (null quoted)
                       (setq has-defer (cddr type-desc))
                       (if (and (key-eq '|true| quoted) (null (cddr type-desc)))
                           (setq has-defer t)
                           (error (format nil "wrong defer definition ~A, #t means pure free" type-desc))))))
                (t (multiple-value-bind (const typeof modifier const-ptr variable array value)
		               (specify-type-value< type-desc)
                     (setq value (expand-macros value))
                     (when (key-eq typeof '|var|) (error (format nil "var keyword as a type ~A" type-desc)))

		             (let ((attributes '())
                           (has-atsign (and (symbolp typeof) (equal (char (symbol-name typeof) 0) #\@))))
                       (when has-atsign (setq typeof (intern (str:replace-first "@" "" (symbol-name typeof)))))
		               (when (and (listp value) (key-eq (first value) '|alloc|))
                         (setq is-alloc t)
		                 (when (or (= (length value) 1) (> (length value) 3))
		                   (error (format nil "wrong alloc form ~A" value)))
		                 (if (= (length value) 2)
		                     (setq value (list '|cast| (remove nil (list const typeof modifier const-ptr))
					                           (list '|malloc| (nth 1 value))))
		                     (setq value (list '|cast| (remove nil (list const typeof modifier const-ptr))
				                               (list '|calloc| (nth 1 value) (nth 2 value))))))
		               (when is-static   (push (cons '|static|       t) attributes))
		               (when is-register (push (cons '|register|     t) attributes))
		               (when is-volatile (push (cons '|volatile|     t) attributes))
		               (when is-thread-l (push (cons '|thread-local| t) attributes))
		               (when is-atomic   (push (cons '|atomic|       t) attributes))
		               (when (or has-atsign (eq has-defer t) (and is-alloc (null has-defer)))
                         (push (cons '|alloc| t) attributes)
                         (when (or has-atsign (null has-defer) (eq has-defer t)) ; auto deferment
                           (push (cons '|defer| 
                                       (specify-expr
                                           `'(|lambda|
                                              (,(remove nil
                                                        `(,const ,typeof
                                                           ,(cond
                                                              ((key-eq '|auto| typeof) '|*|)
                                                              ((key-eq '|*|  modifier) '|**|)
                                                              ((key-eq '|**| modifier) '|***|)
                                                              (t '|*|))
                                                           ,const-ptr ,variable ,array)))
                                              ,(if has-atsign
                                                   (if (key-eq '|auto| typeof)
                                                       `(|->|        ,variable  |free|)
                                                       `(|->| (|cof| ,variable) |free|))
                                                   `(|free| (|cast| (|void| *) (|cof| ,variable)))))))
                             attributes)))
		               (when has-defer
                         (let ((symb (if (listp has-defer) (expand-macros (car has-defer)) nil)))
                           (when (and (key-eq '|auto| typeof) (listp symb))
                             (error (format nil "auto type variable can't have lambda destructor, only defined function ~%~A" type-desc)))
                           (if (symbolp symb)
                               (push (cons '|defer| (specify-expr symb)) attributes)
                               (let ((ptr-name (intern (format nil "~A" variable)))) ; "~A_ptr" here
                                 (push (cons '|defer|
                                             (specify-expr
                                                 `'(|lambda|
                                                    (,(remove nil
                                                              `(,const ,typeof
                                                                 ,(cond
                                                                    ((null  modifier) '|*|)
                                                                    ((key-eq '|auto| typeof) '|*|)
                                                                    ((key-eq '|*|  modifier) '|**|)
                                                                    ((key-eq '|**| modifier) '|***|)
                                                                    (t '|*|))
                                                                 ,const-ptr ,ptr-name ,array)))
                                                    ;; cof variable assign to variable name if pointer assign to ~A_ptr above
                                                    ;; ,(remove nil `(|var| ,const ,typeof ,modifier ,const-ptr
                                                    ;;                      ,variable ,array . #'(|cof| ,ptr-name)))
                                                    ,@has-defer)))
                                   attributes)))))

                       (add-param
                           (let* ((var-name (specify-decl-name< variable))
                                  (param-spec (*puts* var-name
                                                (make-specifier var-name '|@VAR| const typeof modifier const-ptr array
                                                                (if (null value)
                                                                    nil
                                                                    (move-var (specify-expr (expand-macros value)) value))
                                                                attributes))))

                             ;; 'auto type inference
                             ;; Bound to a quoted lambda/lambda* ITSELF -> the type
                             ;; is a pointer to that function. Bound to a CALL of
                             ;; one -> the type is what the call returns, which is
                             ;; the deep-typeof path below. Without the split,
                             ;; (auto square . '(lambda ((int n)) (out int) ...))
                             ;; took the lambda's return type and emitted
                             ;; `int square = __ciciliL_138;'.
                             (when (key-eq '|auto| (typeof param-spec))
                               (let ((quoted (quoted-lambda< value)))
                                 (if quoted
                                     (multiple-value-bind (l-const l-type l-mod l-cptr l-var l-array)
                                         (specify-type<
                                             (lambda-func-desc< quoted variable (default param-spec)))
                                       (declare (ignore l-var))
                                       (setf (const param-spec) l-const)
                                       (setf (typeof param-spec) l-type)
                                       (setf (modifier param-spec) l-mod)
                                       (setf (const-ptr param-spec) l-cptr)
                                       (setf (array-def param-spec) l-array))
                                     (let ((typ (deep-typeof "" (default param-spec))))
                                       (when typ
                                         (setf (const param-spec) (const typ))
                                         (setf (typeof param-spec) (typeof typ))
                                         (setf (modifier param-spec) (modifier typ))
                                         (setf (const-ptr param-spec) (const-ptr typ))
                                         (setf (array-def param-spec) (array-def typ)))))))

                             (assign-check let-var param-spec (default param-spec)) ; authority check
                             param-spec)
                         let-var))
                     (setq is-static   nil)
                     (setq is-register nil)
                     (setq is-volatile nil)
                     (setq is-thread-l nil)
                     (setq is-alloc    nil)
                     (setq is-atomic   nil)
                     (setq has-defer   nil))))))
      (setf (body let-var) (specify-body (nthcdr 2 def)))
      (*pop* let-var))))

(defun specify-block (def)
  (set-ast-obj def
    (let ((block-var (make-specifier (*push* (gensym "block")) '|@BLOCK| nil nil nil nil nil nil '())))
      (setf (body block-var) (specify-body (cdr def)))
      (*pop* block-var))))

(defun specify-progn (def)
  (set-ast-obj def
    (let ((progn-var (make-specifier (*push* (gensym "progn")) '|@PROGN| nil nil nil nil nil nil '())))
      (setf (body progn-var) (specify-body (cdr def)))
      (*pop* progn-var))))

(defun specify-set-expr (def)
  (when (= (rem (length (cdr def)) 2) 1) (error (format nil "wrong set form ~A" def)))
  (set-ast-obj def
    (let* ((set-spec (make-specifier nil '|@SET| nil nil nil nil nil nil '()))
           (len (length (cdr def)))
           (items (loop for i from 0 to (1- len)
                        for (x y) on (cdr def)
                        when (and (= (mod i 2) 0) (not (null y)))
                        collect (let ((left-spec (specify-expr x))
                                      (right-spec (specify-expr y)))
                                  (assign-check set-spec left-spec right-spec) ; authority check
                                  (list left-spec right-spec)))))
      (setf (default set-spec) items)
      set-spec)))

(defun specify-return-expr (def)
  (when (> (length def) 2) (error (format nil "wrong return form ~A" def)))
  (set-ast-obj def
    (let ((current-spec
              (let ((output (expand-macros (nth 1 def))))
                (cond ((and *function-spec* (or (listp (typeof *function-spec*))
                                                (and (listp output) (key-eq (car output) '|QUOTE|))))
                       (let ((clause (if (and (listp output) (listp (cadr output))) (caadr output) nil)))
                         (if (or (key-eq clause '|closure|) (key-eq clause '|lambda|))
                             (let ((out (if (null output) nil (specify-expr output))))
                               (when (and (listp output)
                                          (key-eq (car output) '|def-closure|)
                                          *function-spec* (key-eq (typeof *function-spec*) '|auto|))
                                 (setf (typeof *function-spec*) (list '|struct| (name (car (body out))))))
                               (make-specifier nil '|@RETURN| nil nil nil nil nil out '()))
                             (make-specifier nil '|@RETURN| nil nil nil nil nil
                                             (specify-cast-expr (list '|cast|
                                                                      (remove nil (list
                                                                                   (const *function-spec*)
                                                                                   (typeof *function-spec*)
                                                                                   (modifier *function-spec*)
                                                                                   (const-ptr *function-spec*)
                                                                                   (array-def *function-spec*)))
                                                                      output)) '()))))
                      ((and (listp output)
                            (key-eq (car output) '|def-closure|)
                            *function-spec* (key-eq (typeof *function-spec*) '|auto|))
                       (setf (typeof *function-spec*) (list '|struct| (name (car (body (specify-expr output)))))))
                      ;; tries to infer output type from return expression
                      ((and *function-spec* (key-eq (typeof *function-spec*) '|auto|))
                       (let* ((out (specify-expr output))
                              (typ (deep-typeof "" out)))
                         (when typ
                           (setf (const *function-spec*) (const typ))
                           (setf (typeof *function-spec*) (typeof typ))
                           (setf (modifier *function-spec*) (modifier typ))
                           (setf (const-ptr *function-spec*) (const-ptr typ))
                           (setf (array-def *function-spec*) (array-def typ)))
                         (make-specifier nil '|@RETURN| nil nil nil nil nil out '())))
                      (t (make-specifier nil '|@RETURN| nil nil nil nil nil (specify-expr output) '()))))))
      (setf (default current-spec) (move-var (default current-spec) def)) ; move check
      ;; (assign-check current-spec (default current-spec) nil) ; authority check
      current-spec)))

(defun specify-if (def)
  (when (or (< (length def) 3) (> (length def) 4)) (error (format nil "wrong if form ~A" def)))
  (set-ast-obj def
    (let* ((condition (specify-if-condition (nth 1 def)))
           (if-var (make-specifier (*push* (gensym "if")) '|@IF| condition nil nil nil nil nil '())))
      (setf (default if-var) (specify-body (list (nth 2 def))))
      (when (> (length def) 3)
        (setf (body if-var) (specify-body (list (nth 3 def)))))
      (*pop* if-var))))

(defun specify-switch (def)
  (when (< (length def) 2) (error (format nil "wrong switch form ~A" def)))
  (set-ast-obj def
    (let* ((expre (specify-expr (nth 1 def)))
           (switch-var (make-specifier (*push* (gensym "switch")) '|@SWITCH| expre nil nil nil nil nil '()))
           (cases '()))
      (dolist (ch-form (nthcdr 2 def))
        (cond ((key-eq (car ch-form) '|case|)
               (setq expre (specify-expr (cadr ch-form)))
               (let ((case-var (make-specifier (*push* (gensym "case")) '|@CASE| expre nil nil nil nil nil '())))
                 (setf (body case-var) (specify-body (nthcdr 2 ch-form)))
                 (push (*pop* case-var) cases)))
	          ((key-eq (car ch-form) '|default|)
               (let ((case-var (make-specifier (*push* (gensym "case")) '|@DEFAULT| nil nil nil nil nil nil '())))
                 (setf (body case-var) (specify-body (nthcdr 1 ch-form)))
                 (push (*pop* case-var) cases)))
	          (t (error (format nil "only case or default form ~A" ch-form)))))
      (setf (default switch-var) (reverse cases))
      (*pop* switch-var))))

(defun specify-while (def)
  (when (< (length def) 2) (error (format nil "wrong while form ~A" def)))
  (set-ast-obj def
    (let* ((condition (specify-expr (nth 1 def)))
           (while-var (make-specifier (*push* (gensym "while")) '|@WHILE| condition nil nil nil nil nil '())))
      (setf (body while-var) (specify-body (nthcdr 2 def)))
      (*pop* while-var))))

(defun specify-do (def)
  (when (< (length def) 2) (error (format nil "wrong while form ~A" def)))
  (set-ast-obj def
    (let* ((condition (specify-expr (car (last def))))
           (do-var (make-specifier (*push* (gensym "do")) '|@DO| condition nil nil nil nil nil '())))
      (setf (body do-var) (specify-body (cdr (without-last def))))
      (*pop* do-var))))

(defun specify-for (def)
  (when (or (< (length def) 3) (not (listp (nth 1 def)))) (error (format nil "wrong for form ~A" def)))
  (set-ast-obj def
    (let* ((is-register nil)
           (for-var (make-specifier (*push* (gensym "for")) '|@FOR| nil nil nil nil nil nil '())))
      (dolist (type-desc (nth 1 def))
        (unless (and (not (null type-desc)) (listp type-desc))
          (error (format nil "wrong variable definition form ~A" type-desc)))
        (cond ((and (key-eq (car type-desc) '|register|) (= (length (cdr type-desc)) 0)) (setq is-register t))
	          (t (multiple-value-bind (const typeof modifier const-ptr variable array value)
		             (specify-type-value< type-desc)
		           (let ((attributes '()))
		             (when is-register (push (cons '|register| t) attributes))
                     (add-param
                         (let ((var-name (if (null variable) (specify-decl-name< typeof) (specify-decl-name< variable))))
                           (*puts* var-name
                             (if (null variable)
                                 (make-specifier var-name '|@VAR| const variable modifier const-ptr array
                                                 (if (null value) nil (specify-expr value)) attributes)
                                 (make-specifier var-name '|@VAR| const typeof modifier const-ptr array
                                                 (if (null value) nil (specify-expr value)) attributes))))
                       for-var))))))
      (setf (const for-var) (specify-expr (nth 2 def)))   ; condition
      (setf (default for-var) (specify-body (nth 3 def))) ; steps
      (setf (body for-var) (specify-body (nthcdr 4 def)))
      (*pop* for-var))))

(defun specify-if-condition (cond)
  (if (atom cond)
      (specify-expr cond)
      (if (atom (car cond))
          (specify-expr cond)
          (loop for c in cond
                collect (if (key-eq (car cond) '|var|)
                            (specify-expr (cdr c) '())
                            (specify-expr c))))))

(defun specify-cond (def)
  (when (< (length def) 2) (error (format nil "wrong cond form ~A" def)))
  (set-ast-obj def
    (let ((cond-var (make-specifier (*push* (gensym "cond")) '|@COND| nil nil nil nil nil nil '()))
          (nodes (loop for node in (cdr def)
                       collect (list (specify-if-condition (car node)) (specify-body (cdr node))))))
      (setf (body cond-var) nodes)
      (*pop* cond-var))))

(defun specify-macrolet (def)
  (when (< (length def) 2) (error (format nil "wrong macrolet form ~A" def)))
  (dolist (macro (nth 1 def))
    (let* ((mdef (push 'DEFMACRO macro))
           (symb (eval mdef)))
      (add-macro (symbol-name symb) symb)))
  (let ((body (specify-body (nthcdr 2 def))))
    (dolist (macro (nth 1 def))
      (unintern (car macro)))
    body))

(defun specify-function-name< (name)
  ;; a qualified head -- (func torch::randn …) -- is one name, not a
  ;; (receiver . method) pair, so it is folded before anything else looks at it
  (when (name-form-p< name) (setq name (name-form< name)))
  (if (listp name) ; method or shared
      (let ((recv (car name))
            (mthd (cdr name)))

        (if (and (symbolp recv) (key-eq recv '<>))
            (specify-decl-name< (if (listp mthd) (expand-macros (append (list '<>) mthd)) mthd))
            (progn
              (when (listp recv)
                (if (key-eq (car recv) '<>)
                    (setq recv (expand-macros recv))
                    (error (format nil "generic names are produced by '<>', ~A" name))))
              (when (and (listp mthd) (key-eq (car mthd) '<>))
                (setq mthd (expand-macros mthd)))
              (cons (specify-decl-name< recv) (specify-decl-name< mthd)))))
      (specify-decl-name< name)))

(defun specify-function (def attrs)
  (set-ast-obj def
    (let* ((name (specify-function-name< (nth 1 def)))
           (is-static  (if (key-eq name '|main|) t nil))
	       (is-declare  nil)
	       (is-inline   nil)
	       (is-extern   nil)
	       (is-volatile nil)
	       (is-auto     nil)
	       (is-virtual  nil)
	       (is-override nil)
	       (is-const-m  nil)
	       (is-explicit nil)
	       (is-noexcept nil)
	       (is-ctor     nil)
	       (is-dtor     nil)
	       (is-method (if (key-eq (car def) '|method|) t nil))
           (is-shared (and (listp name) (not is-method)))
           ;; a constructor and a destructor have no return type at all -- not
           ;; void, none -- so `returns' has to stay nil rather than default
           (is-structor (and (find-if #'(lambda (a) (or (key-eq (car a) '|ctor|)
                                                        (key-eq (car a) '|dtor|)))
                                      attrs)
                             t))
	       (params (nth 2 def))
	       (r-out (nth 3 def))
	       (has-out (and (consp r-out) (key-eq (car r-out) '|out|)))
	       (returns (if is-structor nil
                    (if is-shared
                        (if (str:starts-with-p "new" (string-downcase (symbol-name (cdr name))))
                            (if has-out
                                (error (format nil "constructor has out: ~A" def))
                                (list '|out| (car name) '|*|))
                            (if has-out r-out '(|out| |void|)))
                        (if has-out r-out
		                    (if (key-eq name '|main|) '(|out| |int|) '(|out| |void|))))))
	       (body (if has-out (nthcdr 4 def) (nthcdr 3 def)))
           (function-specifier nil))

      (when (or (key-eq (car def) '|lambda|) (key-eq (car def) '|lambda*|))
        (setq is-inline t))
      
      (dolist (attr attrs)
        (let ((name (car attr)))
	      (cond ((key-eq name '|static|)   (setq is-static   t))
	            ((key-eq name '|decl|)     (setq is-declare  t))
	            ((key-eq name '|inline|)   (setq is-inline   t))
	            ((key-eq name '|extern|)   (setq is-extern   t))
	            ((key-eq name '|volatile|) (setq is-volatile t))
	            ((key-eq name '|auto|)     (setq is-auto     t))
                ;; C++ member-function qualifiers. They are carried through to
                ;; the back end untouched -- the specifier has no opinion about
                ;; them, they only change how the signature is written.
                ((key-eq name '|virtual|)  (setq is-virtual  t))
                ((key-eq name '|override|) (setq is-override t))
                ((key-eq name '|const|)    (setq is-const-m  t))
                ((key-eq name '|explicit|) (setq is-explicit t))
                ((key-eq name '|noexcept|) (setq is-noexcept t))
                ((key-eq name '|ctor|)     (setq is-ctor     t))
                ((key-eq name '|dtor|)     (setq is-dtor     t))
	            (t (error (format nil "unknown function attribute ~A" attr))))))
      (when (and is-declare is-inline) (error (format nil "inline functions should be defined ~A" def)))
      (when (< (length def) 3) (error (format nil "wrong function definition ~A" def)))
      (when (and is-declare body)
        (error (format nil "function declaration with body, may be 'out' missed '~A' ~A" name (first body))))
      (let ((attributes    '())
            (tmp-specifier nil)
            (tmp-outp      nil))
	    (when is-extern   (push (cons '|extern|   t) attributes))
	    (when is-volatile (push (cons '|volatile| t) attributes))
	    (when is-inline   (push (cons '|inline|   t) attributes))
	    (when is-static   (push (cons '|static|   t) attributes))
	    (when is-auto     (push (cons '|auto|     t) attributes))
	    (when is-declare  (push (cons '|decl|     t) attributes))
	    (when is-virtual  (push (cons '|virtual|  t) attributes))
	    (when is-override (push (cons '|override| t) attributes))
	    (when is-const-m  (push (cons '|const|    t) attributes))
	    (when is-explicit (push (cons '|explicit| t) attributes))
	    (when is-noexcept (push (cons '|noexcept| t) attributes))
	    (when is-ctor     (push (cons '|ctor|     t) attributes))
	    (when is-dtor     (push (cons '|dtor|     t) attributes))
        ;; guard *function-spec* for inline structs and lambdas
        ;;
        ;; A constructor is NOT registered under its name, and neither is a
        ;; destructor. A constructor's name is the struct's name, so putting it
        ;; in the table shadows the struct itself: every ($ this member) in a
        ;; sibling method then resolved `Shape' to the constructor and died with
        ;; "unknown struct type: Shape". Nothing looks a constructor up by name
        ;; anyway -- it is reached through the type.
        (setq function-specifier
              (let ((fs (make-specifier name (if is-method '|@METHOD| '|@FUNC|)
                                        nil nil nil nil nil nil attributes)))
                (if (or is-ctor is-dtor) fs (*puts* name fs)))) ;; for specify out
        (*push* name)
        (setq tmp-specifier *function-spec*)
        (setq tmp-outp      *function-outp*)
        (setf *function-spec* function-specifier)
        (setf *function-outp* t)      

        ;; a ctor/dtor has no return type to specify -- `returns' is nil and
        ;; specify-type< of nothing is not a question with an answer
        (if returns
            (multiple-value-bind (const type modifier const-ptr variable array)
	            (specify-type< (cdr returns))
              (setf *function-outp* tmp-outp)
              (setf (const function-specifier) const)
              (setf (typeof function-specifier) type)
              (setf (modifier function-specifier) modifier)
              (setf (const-ptr function-specifier) const-ptr)
              (setf (array-def function-specifier) array))
            (setf *function-outp* tmp-outp))

	    (when is-method
          (if (listp name)
              ;; the C-style method: Struct_m_name with `this' passed in
              (add-param
                  (let ((var-name (specify-decl-name< '|this|)))
                    (*puts* var-name
                      (make-specifier var-name '|@PARAM| nil
                                      (if *module-path*
                                          (free-name *module-path* (car name))
                                          (car name))
                                      '|*| nil nil nil '())))
                function-specifier)
              ;; the C++ member function: `this' belongs to the language and is
              ;; NOT a parameter. It still goes in the symbol table, because
              ;; ($ this w) has to resolve to a member of the enclosing struct
              ;; for inference to work -- it is a binding without a declaration.
              (when *method-struct*
                (let ((var-name (specify-decl-name< '|this|)))
                  (*puts* var-name
                    (make-specifier var-name '|@VAR| nil (name *method-struct*)
                                    '|*| nil nil nil '()))))))
        (loop for param in params
              for i from 0 to (length params)
              do (let ((is-anonymous nil))
                   (unless (listp param) (error (format nil "parameter should be a list ~A for ~A" param def)))

	               (multiple-value-bind (const type modifier const-ptr variable array)
	                   (specify-type< param)
	                 (when (key-eq '_ variable) (setq variable nil))
                     (when (key-eq '$$$ type)   (setq type '|...|))

                     ;; functoin pointer params become volatile too
                     (when (and is-volatile (key-eq type '|func|))
                       (setf (attrs (car array)) (push (cons '|volatile| t) (attrs (car array))))
                       (loop for func-prm being the hash-value of (params (car array))
                             do (setf (attrs func-prm) (push (cons '|volatile| t) (attrs func-prm)))))
                     
                     (add-param
                         (let* ((var-name (specify-decl-name< variable))
                                (param-spec (*puts* var-name
                                              (make-specifier var-name
                                                '@|PARAM| const type modifier const-ptr array nil
                                                (if is-volatile (list (cons '|volatile| t)) nil) is-anonymous))))
                           (assign-check function-specifier param-spec nil) ; authority check
                           ;; auto destructor for 'move modifier
                           (when (key-eq modifier '|move|)
                             (push (list '|code| (list 'quote (list type #\*
                                                                    (format nil "__moved_~A" var-name)
                                                                    "__attribute__((__cleanup__("
                                                                    (format nil "free_~A_pointer))) = (&" type type)
                                                                    (format nil "~A)" var-name))))
                               body))
                           
                           param-spec)
                       function-specifier)
                     )))

        ;; A constructor may open with (init (member expr ...) (Base expr ...)),
        ;; which is the member-initializer list -- the only place a base class
        ;; or a member without a default constructor can be given its value,
        ;; and libtorch is full of both. It is specified HERE rather than in
        ;; specify-struct because its expressions see the constructor's
        ;; parameters, which do not exist until this point.
        (when (and is-ctor body (consp (car body)) (key-eq (caar body) '|init|))
          (setf (ctor-init function-specifier)
                (mapcar #'(lambda (entry)
                            (unless (and (consp entry) (symbolp (car entry)))
                              (error (format nil "wrong init entry ~A in ~A" entry name)))
                            ;; the target is a NAME to print -- a member of this
                            ;; struct or a base class -- not an expression to
                            ;; resolve and not a type to specify
                            (cons (car entry)
                                  (mapcar #'specify-expr (cdr entry))))
                        (cdar body)))
          (setq body (cdr body)))

        (setf (body function-specifier) (specify-body body))

        (when (and (typeof *function-spec*) (key-eq (typeof *function-spec*) '|auto|))
          (error (format nil "function: '~A with 'auto return type but without return statement" name)))
        (setf *function-spec* tmp-specifier)) ; end of guard, revert *function-spec*
      (*pop* function-specifier))))

(defun specify-preprocessor (def attrs)
  (when (> (length attrs) 0) (error (format nil "wrong attributes ~A" attrs)))
  (when (> (length def) 3) (error (format nil "wrong preprocessor definition ~A" def)))
  (set-ast-obj def
    ;; The directive names nothing, so it is kept as a plain symbol with its
    ;; leading @ swapped for # and printed verbatim by compile-preprocessor.
    ;; specify-symbol-expr used to be called on it, which could only fail
    ;; ("unknown symbol: @define"); worse, the line below it then rewrote the
    ;; first character of the returned spec's name IN PLACE -- and that name is
    ;; the interned marker @SYMBOL, shared by every atom in the program.
    (let ((preproc-specifier
              (make-specifier (gensym "cicili#PreProc")
                '|@PREPROC|
                (intern (concatenate 'string "#" (subseq (symbol-name (car def)) 1)))
                nil nil nil nil nil nil)))
      (unless (null (cadr  def)) (setf (typeof  preproc-specifier) (specify-expr (cadr  def))))
      (unless (null (caddr def)) (setf (default preproc-specifier) (specify-expr (caddr def))))
      preproc-specifier)))

(defun specify-include (def attrs)
  (when (> (length attrs) 0) (error (format nil "wrong attributes ~A" attrs)))
  (when (< (length def) 2) (error (format nil "wrong include definition ~A" def)))
  (set-ast-obj def
    (let ((heads (cdr def))
          (include-var (make-specifier (gensym "cicili#Include") '|@INCLUDE| nil nil nil nil nil nil nil)))
      (dolist (head heads)
        (unless (or (symbolp head) (stringp head)) (error "wrong inclusion")))
      (setf (params include-var) heads)
      include-var)))

(defun specify-typedef (def attrs)
  (when (> (length attrs) 0) (error (format nil "wrong attributes ~A" attrs)))
  (when (< (length def) 3) (error (format nil "syntax error ~A" def)))
  (set-ast-obj def
    (let ((tmp-typedef-spec *typedef-spec*)
          (typedef-spec (make-specifier nil '|@TYPEDEF| nil nil nil nil nil nil nil)))
      (setf *typedef-spec* typedef-spec)
      (multiple-value-bind (const type modifier const-ptr variable array)
          (specify-type< (nthcdr 1 def))
	    (when (null variable) (error (format nil "syntax error ~A" def)))
        (setf (name typedef-spec) (specify-decl-name< (expand-macros variable)))
        (if *module-path* (setf (unique typedef-spec) (free-name *module-path* (name typedef-spec))))
        (setf (const typedef-spec) const)
        (setf (typeof typedef-spec) type)
        (setf (modifier typedef-spec) modifier)
        (setf (const-ptr typedef-spec) const-ptr)
        (setf (array-def typedef-spec) array)
        (setf *typedef-spec* tmp-typedef-spec)
        (*puts* (name typedef-spec) typedef-spec)))))

(defun specify-enum (def attrs &key ((:nested is-nested) nil))
  (when (> (length attrs) 0) (error (format nil "wrong attributes ~A" attrs)))
  (set-ast-obj def
    (let* ((is-anonymous (or (= (length def) 1) (not (symbolp (nth 1 def)))))
	       (name (specify-decl-name< (if is-anonymous (gensym "ciciliEnum") (nth 1 def))))
	       (constants (if is-anonymous (nthcdr 1 def) (nthcdr 2 def)))
	       (enum-specifier (*puts* name (make-specifier name '|@ENUM| nil name nil nil nil nil nil))))
      (setf (anonymous enum-specifier) is-anonymous)
      ;; An enum's constants live at FILE scope in C, however deeply the enum is
      ;; nested -- so they are registered with no enum name pushed, no enclosing
      ;; struct and an empty lexeme path. Previously the enum name was pushed
      ;; first, keying them RED/Colors, and a nested enum picked up the struct,
      ;; keying them SENIOR/Employee; either way a reference from a function died
      ;; with "unknown symbol: RED".
      (let ((*struct-spec* nil)
            (*lexemes-id* '()))
        (loop for const in constants
	          with l = (length constants)
	          for i from 0 to l
	          do (progn
	               (unless (and (consp const) (symbolp (car const))) (error (format nil "syntax error ~A" const)))
	               (let ((key (car const))
		                 (value (cdr const)))
		             (unless (or (null value) (numberp value) (symbolp value)) (error (format nil "syntax error ~A" const)))
		             (add-inner
                         ;; the constant's name is being DECLARED here, so it goes
                         ;; through specify-decl-name< like any other declarator.
                         ;; specify-expr tried to resolve it and every enum died
                         ;; with "unknown symbol: <first constant>".
                         (let ((var-name (specify-decl-name< key)))
                           (*puts* var-name
                             (make-specifier var-name '|@VAR| nil nil nil nil nil
                                             (if (null value) nil (specify-expr value)) nil)))
                       enum-specifier)))))
      enum-specifier)))

;;; Specify a C++ member function.
;;;
;;; *struct-spec* has to be nil for the duration. While it is set, every *puts*
;;; keys its specifier as `name/Struct' rather than by the lexeme path -- which
;;; is right for members and wrong for everything inside a method body, where
;;; the locals are not members. It also stops the struct's own name resolving:
;;; *gets* walks up by dropping from the front of *lexemes-id* and never tries
;;; the bare key, so `Square' was invisible from inside Square's own method.
;;;
;;; What the body actually needs from the struct is the type of `this', and
;;; that goes in *method-struct* instead.
(defun specify-method< (clause attrs struct-specifier)
  (let ((tmp-struct  *struct-spec*)
        (tmp-method  *method-struct*))
    (setq *struct-spec*  nil)
    (setq *method-struct* struct-specifier)
    (unwind-protect (specify-function clause attrs)
      (setq *struct-spec*  tmp-struct)
      (setq *method-struct* tmp-method))))

(defun specify-struct (def attrs &key ((:nested is-nested) nil) ((:inline is-inline) nil))
  (when (and is-nested (> (length attrs) 0)) (error (format nil "wrong attributes ~A" attrs)))
  (set-ast-obj def
    (let* ((is-static   nil)
	       (is-declare  nil)
	       (is-non-copy nil)
           ;; a qualified head -- (struct torch::Tensor …) -- is a NAME, and is
           ;; folded to one here. Without this it is a list that is not a <>
           ;; form, which reads as an anonymous struct.
           (def (if (and (> (length def) 1) (name-form-p< (nth 1 def)))
                    (cons (car def) (cons (name-form< (nth 1 def)) (cddr def)))
                    def))
           (is-anonymous (or (= (length def) 1)
                             (not (or (and (listp (nth 1 def)) (key-eq (car (nth 1 def)) '<>))
                                      (symbolp (nth 1 def))))))
	       (name (specify-decl-name< (if is-anonymous
                                         (gensym "ciciliStruct")
                                         (if (and (listp (nth 1 def)) (key-eq (car (nth 1 def)) '<>))
                                             ;; (apply '<> (cdr (nth 1 def)))
                                             (expand-macros (nth 1 def))
                                             (nth 1 def)))))
	       (clauses (if is-anonymous (nthcdr 1 def) (nthcdr 2 def)))
	       (struct-specifier (make-specifier name '|@STRUCT| nil name nil nil nil nil nil))
           (tmp-struct-spec *struct-spec*))
      
      (setq *struct-spec* struct-specifier)
      (*puts* name struct-specifier)
      (*push* name)
      (when (and is-anonymous (not is-nested)) (error (format nil "only nested structs could be anonymous")))
      ;; (when (and (not is-anonymous) is-nested) (error (format nil "nested structs should be anonymous")))
      (setf (anonymous struct-specifier) is-anonymous)

      (dolist (attr attrs)
        (let ((name (car attr)))
	      (cond ((key-eq name '|static|)   (setq is-static   t))
	            ((key-eq name '|decl|)     (setq is-declare  t))
	            ((key-eq name '|non-copy|) (setq is-non-copy t))
	            (t (error (format nil "unknown struct attribute ~A" attr))))))

      (let ((struct-attrs '())
            (attributes '())
	        (declares '()))

        (when is-static   (push (cons '|static|   t) struct-attrs))
	    (when is-declare  (push (cons '|decl|     t) struct-attrs))
	    (when is-non-copy (push (cons '|non-copy| t) struct-attrs))
        (setf (attrs struct-specifier) struct-attrs)
        
        (dolist (clause clauses)
	      (if (consp clause)
	          (let ((construct (car clause)))
	            (cond (is-inline ; inline structs dont have any other inners types but type definitions
                          (multiple-value-bind (const type modifier const-ptr variable array default)
	                          (specify-type-value< clause)
                            (let ((param-spec
                                      (make-specifier
                                          (specify-decl-name< variable)
                                        '@|PARAM| const type modifier const-ptr array default attributes is-anonymous)))
                              (setq attributes '())
	                          (add-inner (*puts* (name param-spec) param-spec) struct-specifier))))
                      
                      ((find (char (symbol-name construct) 0) "@#")
		               (add-inner (specify-preprocessor clause attributes) struct-specifier)
		               (setq attributes '()))
                      ((find construct *attributes* :test #'key-eq) (push clause attributes))
                      ;; compatibility
                      ((key-eq construct '|code|) (add-inner (specify-code-expr clause) struct-specifier))
                      ;; members
		              ((key-eq construct '|member|)
                       (multiple-value-bind (const type modifier const-ptr variable array default)
	                       (specify-type-value< (cdr clause))

                         (let ((param-spec
                                   (make-specifier
                                       (specify-decl-name< variable)
                                     '@|PARAM| const type modifier const-ptr array default nil))
                               (attrs '()))

                           (let ((is-volatile nil))
                             (dolist (attr attributes)
                               (when (key-eq (car attr) '|volatile|) (setq is-volatile t))
                               (push (cons (car attr) t) attrs))
                             (setf (attrs param-spec) attrs)
                             
                             ;; functoin pointer params become volatile too
                             (when (and is-volatile (key-eq type '|func|))
                               (setf (attrs (car array)) (push (cons '|volatile| t) (attrs (car array))))
                               (loop for func-prm being the hash-value of (params (car array))
                                     do (setf (attrs func-prm) (push (cons '|volatile| t) (attrs func-prm))))))
                           
                           (setq attributes '())
	                       (add-inner (*puts* (name param-spec) param-spec) struct-specifier))))
                      
		              ((key-eq construct '|enum|)
		               (add-inner (specify-enum     clause attributes :nested t) struct-specifier) (setq attributes '()))
		              ((key-eq construct '|struct|)
		               (add-inner (specify-struct   clause attributes :nested t) struct-specifier) (setq attributes '()))
		              ((key-eq construct '|union|)
		               (add-inner (specify-union    clause attributes :nested t) struct-specifier) (setq attributes '()))
		              ((key-eq construct '|declare|)
		               (when (= (length clause) 1)
		                 (error (format nil "declare needs a name of variable for anonymous struct")))
		               (push clause declares))

                      ;; ---- C++ ----------------------------------------
                      ;; (inherits Base ...) -- every base is public, because a
                      ;; struct's are, and that is the whole reason this is a
                      ;; struct and not a class: there is no access specifier to
                      ;; write and none to forget.
                      ((key-eq construct '|inherits|)
                       (unless *cpp*
                         (error (format nil "inherits needs a C++ target (:cpp #t) in struct ~A" name)))
                       (setf (bases struct-specifier)
                             (append (bases struct-specifier)
                                     (mapcar #'(lambda (b) (specify-typeof< b)) (cdr clause))))
                       (setf (gethash name *struct-bases*)
                             (mapcar #'(lambda (b) (if (typep b 'sp) (name b) b))
                                     (bases struct-specifier))))

                      ;; (method name (params) [(out T)] body...) -- a real
                      ;; member function, `this' implicit. specify-function
                      ;; already knows `method'; what is new is that the name is
                      ;; a bare symbol rather than a (Struct . name) cons, which
                      ;; is what tells the back end to emit it inside the struct
                      ;; instead of as Struct_m_name.
		              ((key-eq construct '|method|)
                       (unless *cpp*
                         (error (format nil "method in a struct needs a C++ target (:cpp #t) in ~A" name)))
		               (add-inner (specify-method< clause attributes struct-specifier) struct-specifier)
                       (setq attributes '()))

                      ;; (ctor (params) [(init (m expr) ...)] body...) and
                      ;; (dtor () body...). Both are methods whose name C++
                      ;; fixes for them, so it is filled in here rather than
                      ;; written out -- renaming the struct cannot leave a
                      ;; constructor behind under the old name.
		              ((or (key-eq construct '|ctor|) (key-eq construct '|dtor|))
                       (unless *cpp*
                         (error (format nil "~A needs a C++ target (:cpp #t) in struct ~A" construct name)))
                       (let* ((is-dtor (key-eq construct '|dtor|))
                              (bare    (let ((n (symbol-name name)))
                                         (subseq n (1+ (or (position #\^ n :from-end t) -1)))))
                              (mname   (intern (if is-dtor (format nil "~~~A" bare) bare))))
                         (add-inner (specify-method<
                                        (append (list '|method| mname) (cdr clause))
                                      (cons (cons (if is-dtor '|dtor| '|ctor|) t) attributes)
                                      struct-specifier)
                                    struct-specifier)
                         (setq attributes '())))

		              (t (error (format nil "unknown clause ~A in struct ~A" construct name)))))
	          (error (format nil "syntax error ~A" clause))))
        (when (and (not is-anonymous) (> (length declares) 0))
	      (error (format nil "declare must be inside anonymous struct ~A" name)))
        (*pop* struct-specifier)
        (dolist (decl (reverse declares))
          (let ((var-spec (specify-variable (push '|var| decl) '())))
            (setf (construct var-spec) '|@DECLARE|)
	        (add-param var-spec struct-specifier)
            (setf (typeof var-spec) '||)
            (put-declare-tag< var-spec struct-specifier tmp-struct-spec))))

      (setq *struct-spec* tmp-struct-spec)
      struct-specifier)))

(defun specify-union (def attrs &key ((:nested is-nested) nil))
  (when (and is-nested (> (length attrs) 0)) (error (format nil "wrong attributes ~A" attrs)))
  (set-ast-obj def
    (let* ((is-anonymous (or (= (length def) 1) (not (symbolp (nth 1 def)))))
	       (name (specify-decl-name< (if is-anonymous (gensym "ciciliUnion") (nth 1 def))))
	       (clauses (if is-anonymous (nthcdr 1 def) (nthcdr 2 def)))
	       (union-specifier (make-specifier name '|@UNION| nil name nil nil nil nil nil))
           (tmp-struct-spec *struct-spec*))
      ;; Scope this union to itself before registering it, the way specify-struct
      ;; does. Left alone, an anonymous union nested in a struct inherited that
      ;; struct as *struct-spec*, so the union landed under ciciliUnion102/Employee
      ;; and its members under tag_id/Employee -- nothing could walk into it.
      ;; *puts* keys a spec under its own bare name when it IS *struct-spec*.
      ;; For a named union at top level every key is unchanged.
      (setq *struct-spec* union-specifier)
      (*puts* name union-specifier)
      (*push* name)
      (when (and is-anonymous (not is-nested)) (error (format nil "only nested unions could be anonymous")))
      (setf (anonymous union-specifier) is-anonymous)
      (let ((attributes '())
	        (declares '()))
        (dolist (clause clauses)
	      (if (consp clause)
	          (let ((construct (car clause)))
	            (cond ((find (char (symbol-name construct) 0) "@#")
		               (add-inner (specify-preprocessor clause attributes) union-specifier) (setq attributes '()))
                      ;; compatibility
                      ((key-eq construct '|code|) (add-inner (specify-code-expr clause) union-specifier))
                      ;; members
		              ((key-eq construct '|member|)
                       (let ((var-spec (specify-variable clause attributes)))
                         ;; just the member name: *puts* qualifies it with
                         ;; *lexemes-id*, which already carries this union's name
                         ;; from the *push* above. Pre-joining it here produced
                         ;; i/Mixed/Mixed, so ($ m i) could not find the member
                         ;; and died with "unknown struct type: Mixed".
		                 (add-inner (*puts* (name var-spec) var-spec) union-specifier)
                           (setq attributes '())))
		              ((key-eq construct '|struct|)
		               (add-inner (specify-struct   clause attributes :nested t) union-specifier) (setq attributes '()))
		              ((key-eq construct '|union|)
		               (add-inner (specify-union    clause attributes :nested t) union-specifier) (setq attributes '()))
		              ((key-eq construct '|declare|)
		               (when (= (length clause) 1)
		                 (error (format nil "declare needs a name of variable for anonymous union")))
		               (push clause declares))
		              (t (error (format nil "unknown clause ~A in union ~A" construct name)))))
	          (error (format nil "syntax error ~A" clause))))
        (when (and (not is-anonymous) (> (length declares) 0))
	      (error (format nil "declare must be inside anonymous union ~A" name)))
        (*pop* union-specifier)
        (dolist (decl (reverse declares))
          (let ((var-spec (specify-variable (push '|var| decl) '())))
            (setf (construct var-spec) '|@DECLARE|)
	        (add-param var-spec union-specifier)
            (setf (typeof var-spec) '||)
            (put-declare-tag< var-spec union-specifier tmp-struct-spec))))
      (setq *struct-spec* tmp-struct-spec)
      union-specifier)))

(defun specify-guard (def attrs)
  (when (> (length attrs) 0) (error (format nil "wrong attributes ~A" attrs)))
  (set-ast-obj def
    (let* ((name (specify-decl-name< (expand-macros (nth 1 def))))
	       (clauses (nthcdr 2 def))
	       (guard-specifier (make-specifier name '|@GUARD| nil nil nil nil nil nil nil)))
      (let ((attributes '()))
        (dolist (clause clauses)
	      (if (consp clause)
	          (let ((construct (car clause)))
	            (cond ((find (char (symbol-name construct) 0) "@#")
		               (add-inner (specify-preprocessor clause attributes) guard-specifier)
		               (setq attributes '()))
                      ((find construct *attributes* :test #'key-eq) (push clause attributes))
		              ((key-eq construct '|include|)
		               (add-inner (specify-include  clause attributes) guard-specifier) (setq attributes '()))
		              ((key-eq construct '|var|)
		               (add-inner (specify-variable clause attributes) guard-specifier) (setq attributes '()))
		              ((key-eq construct '|func|)
		               (add-inner (specify-function clause attributes) guard-specifier) (setq attributes '()))
		              ((key-eq construct '|method|)
		               (add-inner (specify-function clause attributes) guard-specifier) (setq attributes '()))
		              ((key-eq construct '|enum|)
		               (add-inner (specify-enum     clause attributes) guard-specifier) (setq attributes '()))
		              ((key-eq construct '|struct|)
		               (add-inner (specify-struct   clause attributes) guard-specifier) (setq attributes '()))
		              ((key-eq construct '|union|)
		               (add-inner (specify-union    clause attributes) guard-specifier) (setq attributes '()))
		              ((key-eq construct '|typedef|)
		               (add-inner (specify-typedef  clause attributes) guard-specifier) (setq attributes '()))
		              ((key-eq construct '|guard|)
		               (add-inner (specify-guard    clause attributes) guard-specifier) (setq attributes '()))
		              ((key-eq construct '|module|)
		               (add-inner (specify-module   clause attributes) guard-specifier) (setq attributes '()))
		              (t (add-inner (specify-expr   clause) guard-specifier))))
	          (error (format nil "syntax error ~A" clause)))))
      guard-specifier)))
