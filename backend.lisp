(in-package :cicili)

(defun compile-name (name lvl globals parent-spec)
  (if (symbolp name)
      (let ((sym-name (symbol-name name)))
        (when (str:starts-with-p "/" sym-name)
          (setq sym-name (str:substring 1 t sym-name)))
        (set-ast-line (output sym-name)))
      (if (typep name 'sp)
          (progn
            (cond ((key-eq '|@TYPEOF| (construct name))
                   (compile-typeof name lvl globals parent-spec))
                  ((key-eq '|@BODY| (construct name))
                   (compile-form (car (body name)) lvl globals parent-spec))
                  (t (error (format nil "wrong complex name: ~A" name)))))
          (let ((type (car name)))
            (cond ((or (key-eq '|struct| type) (key-eq '|union| type))
                   (set-ast-line (output (symbol-name type)))
                   (output " ")
                   (set-ast-line (output (symbol-name (cadr name)))))
                  ((key-eq '|typeof| type)
                   (set-ast-line (output "typeof("))
                   (compile-form (cadr name) (1+ lvl) globals parent-spec)
                   (set-ast-line (output ")")))
                  (t (error (format nil "wrong name: ~A" name))))))))

(defun compile-type-name (name lvl globals parent-spec)
  (cond ((key-eq name '|uchar|)  (set-ast-line (output "unsigned char")))
	    ((key-eq name '|ushort|) (set-ast-line (output "unsigned short")))
	    ((key-eq name '|uint|)   (set-ast-line (output "unsigned int")))
	    ((key-eq name '|ulong|)  (set-ast-line (output "unsigned long")))
	    ((key-eq name '|llong|)  (set-ast-line (output "long long")))
	    ((key-eq name '|ullong|) (set-ast-line (output "unsigned long long")))
	    ((key-eq name '|i8|)     (set-ast-line (output "int8_t")))
	    ((key-eq name '|u8|)     (set-ast-line (output "uint8_t")))
	    ((key-eq name '|i16|)    (set-ast-line (output "int16_t")))
	    ((key-eq name '|u16|)    (set-ast-line (output "uint16_t")))
	    ((key-eq name '|i32|)    (set-ast-line (output "int32_t")))
	    ((key-eq name '|u32|)    (set-ast-line (output "uint32_t")))
	    ((key-eq name '|i64|)    (set-ast-line (output "int64_t")))
	    ((key-eq name '|u64|)    (set-ast-line (output "uint64_t")))
	    ((key-eq name '|i128|)   (set-ast-line (output "__int128")))
	    ((key-eq name '|u128|)   (set-ast-line (output "unsigned __int128")))
	    ((key-eq name '|real|)   (set-ast-line (output "long double")))
	    ((key-eq name '|auto|)   (set-ast-line (output "__auto_type")))
	    ((key-eq name '|$$$|)    (set-ast-line (output "...")))
	    (t (compile-name name lvl globals parent-spec))))

(defun compile-array (desc lvl globals parent-spec)
  (cond ((null desc) t) ; empty
        ((= (length desc) 1)
         (set-ast-line (output "["))
         (let ((amount (nth 0 desc)))
           (unless (key-eq '|NULL| (name amount)) (compile-form (nth 0 desc) (1+ lvl) globals parent-spec)))
         (set-ast-line (output "]")))
        ((= (length desc) 2)
         (set-ast-line (output "["))
         (let ((amount (nth 0 desc)))
           (unless (key-eq '|NULL| (name amount)) (compile-form (nth 0 desc) (1+ lvl) globals parent-spec)))
         (set-ast-line (output "]"))
         (set-ast-line (output "["))
         (let ((amount (nth 1 desc)))
           (unless (key-eq '|NULL| (name amount)) (compile-form (nth 1 desc) (1+ lvl) globals parent-spec)))
         (set-ast-line (output "]")))
        (t (error (format nil "wrong array description, maybe #' missed for function initializer ~A" desc)))))

(defun format-type (const typeof modifier const-ptr name array-def anonymous lvl globals parent-spec &key (func-out nil))
  (let ((line-n   -1)
        (col-n    -1))
    (if (key-eq typeof '|func|)
        (progn
          (when const (set-ast-line (output "const ")))
          (compile-function (car array-def) lvl globals parent-spec :type t :func-out func-out))
        (progn
          (when anonymous (setq name (format nil "/* ~A */" name)))
          (when const     (set-ast-line (output "const ")))
          (when typeof    (compile-type-name typeof lvl globals parent-spec))
          (when modifier  (output " ") (set-ast-line (output "~A" modifier)))
          (when const-ptr (output " ") (set-ast-line (output "const" const-ptr)))
          (when name      (output " ")
                (setq line-n   (funcall *line-num* 0))
                (setq col-n    (funcall *col-num* 0))
                (set-ast-line (output "~A "(if (str:starts-with-p "_ciciliParam_" (symbol-name name)) " " name))))
          (compile-array array-def lvl globals parent-spec)))
    (values line-n col-n)))

(defun compile-spec-type (spec lvl globals parent-spec)
  (let ((const     (const      spec))
	    (typeof    (typeof     spec))
	    (modifier  (modifier   spec))
	    (const-ptr (const-ptr  spec))
	    (name      (name       spec))
	    (array-def (array-def  spec))
	    (anonymous (anonymous  spec)))
    (if (key-eq typeof '|func|)
        (progn
          (when const (set-ast-line (output "const ")))
          (compile-function (car array-def) lvl globals spec :type t))
        (format-type const typeof modifier const-ptr name array-def anonymous lvl globals parent-spec))))

(defun compile-spec-type-value (spec lvl globals parent-spec &optional defer &key ((:unique is-unique) nil))
  (let ((const     (const      spec))
	    (typeof    (typeof     spec))
	    (modifier  (modifier   spec))
	    (const-ptr (const-ptr  spec))
	    (name      (name       spec))
	    (array-def (array-def  spec))
	    (default   (default    spec))
	    (anonymous (anonymous  spec))
        (is-unique (unique spec)))
    (if (key-eq typeof '|func|)
        (progn
          (when const (set-ast-line (output "const ")))
          (compile-function (car array-def) lvl globals spec :type t)
          (when (and (not (null default)) (not (key-eq (construct default) '|@NIL|)))
            (output " ")
            (set-ast-line (output "= "))
            (set-ast-line (output "~A" (if is-unique (unique default) (name default))))))
        (format-type-value const typeof modifier const-ptr
                           (if is-unique (unique spec) name)
                           array-def default anonymous lvl globals parent-spec defer))))

(defun compile-atom (spec lvl globals parent-spec)
  (with-slots (construct (value name) typeof) spec
    (unless (or (key-eq construct '|@ATOM|) (key-eq construct '|@SYMBOL|))
      (error (format nil "atom syntax error \"~A\"" spec)))
    (cond ((and (key-eq typeof '|@SYMBOL|) (string= (symbol-name value) "this"))
           (set-ast-line (output "~A " '|this|)))
          ((key-eq typeof '|@SYMBOL|)
           (compile-symbol spec value))
          ((key-eq typeof '|@CHAR|)
           (set-ast-line (output "'~A'" (case value
                                          (#\Null      "\\0")
                                          (#\Space     " ")
                                          (#\Newline   "\\n")
                                          (#\Tab       "\\t")
                                          (#\Page      "\\v")
                                          (#\Rubout    "")
                                          (#\Linefeed  "\\n")
                                          (#\Return    "\\r")
                                          (#\Backspace "\\b")
                                          (otherwise value))))) 
          (t (set-ast-line (output "~A" value))))))

(defun compile-code (spec lvl globals parent-spec)
  (with-slots ((content default)) spec
    (cond ((and (typep content 'sp) (eql (construct content) '|@CODE|))
           (compile-code content lvl globals spec))
          ((and (typep content 'sp) (eql (construct content) '|@ATOM|))
           (set-ast-line (output "~A " (name content))))
          ((atom content)
           (set-ast-line (output "~A " content)))
          ((listp content)
           (dolist (item content)
             (compile-code item lvl globals spec)))
          (t (error (format nil "wrong code clause list item ~A" content))))))

(defun compile-list (spec lvl globals parent-spec)
  (with-slots ((items default)) spec
    (let ((ast (prev-ast<)))
      (if (null ast)
	      (set-ast-line (output "{ "))
          (let ((info (getf ast 'info)))
            (if info
                (error (format nil "cicili: list: ~A" info))
                (set-ast-line (output "{ "))))))
    (let ((l (length items))
          (m-init nil))
      (loop for i from 1 to l
            for item in (default spec)
            do (progn
                 (if (or (key-eq '|@SYMBOL| (construct item))
                       (and (key-eq '|@ATOM| (construct item)) (key-eq '|@SYMBOL| (typeof item))
                          (equal (str:s-first (symbol-name (name item))) "$")))
                     (progn
                       (setq m-init t)
                       (set-ast-line (output "~A " (str:replace-all "$" "." (symbol-name (name item))))))
                     (progn
                       (when m-init (set-ast-line (output "= ")))
                       (compile-form item (1+ lvl) globals spec)
                       (setq m-init nil)))
                 (when (and (not m-init) (< i l)) (output ", ")))))
    (set-ast-line (output "}"))))

(defun compile-unary (spec lvl globals parent-spec)
  (with-slots ((oprt name) (is-postfix modifier) (oprnd default)) spec
    (output "(")
    (let ((ast (prev-ast<)))
      (unless (null ast)
        (let ((info (getf ast 'info)))
          (when info
            (error (format nil "cicili: unary: ~A" info))))))
    (if is-postfix
        (progn
          (compile-form oprnd (1+ lvl) globals spec)
	      (set-ast-line (output "~A"  oprt)))
        (progn
          (set-ast-line (output "~A" oprt))
          (compile-form oprnd (1+ lvl) globals spec)))
    (output ")")))

(defun compile-operator (spec lvl globals parent-spec)
  (with-slots ((opr name) (seq default)) spec
    (output "(")
    (let ((ast (prev-ast<)))
      (unless (null ast)
        (let ((info (getf ast 'info)))
          (when info
            (cond ((and info (str:containsp "use of undeclared identifier" info)) t)
                  (t (error (format nil "cicili: operator: ~A" info))))))))
    (dolist (frm seq)
      (compile-form frm (1+ lvl) globals spec)
      (output " "))
    (output ")")))

(defun compile-assignment (spec lvl globals parent-spec)
  (with-slots ((opr name) (seq default)) spec
    (dolist (frm seq)
      (compile-form frm (1+ lvl) globals spec)
      (output " "))))

(defun compile-nth (spec lvl globals parent-spec)
  (with-slots ((index name) (array default)) spec
    (compile-form array (1+ lvl) globals spec)
    (output "[")
    (compile-form index (1+ lvl) globals spec)
    (output "]")))

(defun compile-? (spec lvl globals parent-spec)
  (with-slots ((condition name) (exprs default)) spec
    (output "((")
    (compile-form condition (1+ lvl) globals spec)
    (output ") ? ")
    (compile-form (nth 0 exprs) (1+ lvl) globals spec)
    (output " \: ")
    (compile-form (nth 1 exprs) (1+ lvl) globals spec)
    (output ")")))

(defun compile-cast (spec lvl globals parent-spec)
  (with-slots (typeof (value default)) spec
    (output "((")
    (if (and (typep typeof 'sp) (key-eq (construct typeof) '|@CODE|))
        (compile-code typeof lvl globals spec)
        (compile-spec-type spec lvl globals spec))
    (output ")")
    (compile-form value lvl globals spec)
    (output ")")))

(defun compile-sizeof (spec lvl globals parent-spec)
  (set-ast-line (output "sizeof("))
  (let ((ast (prev-ast<)))
    (unless (null ast)
      (let ((info (getf ast 'info)))
        (when info
          (error (format nil "cicili: unary: ~A" info))))))
  (if (default spec)
      (compile-form (default spec) lvl globals spec)
      (compile-spec-type spec lvl globals spec))
  (output ")"))

(defun compile-typeof (spec lvl globals parent-spec)
  (set-ast-line (output "typeof("))
  (compile-form (default spec) (1+ lvl) globals spec)
  (output ")"))

(defun compile-call (spec lvl globals parent-spec)
  (with-slots ((func name) (args default)) spec
    (compile-form func (1+ lvl) globals spec)
    (output "(")
    (unless (null args) (compile-args args lvl globals spec nil))
    (let ((ast (prev-ast<)))
      (if (null ast)
	      (set-ast-line (output ")"))
          (let ((info (getf ast 'info)))
            (cond ((and info (str:containsp "expected expression" info))
                   (set-ast-line (output ")")))
                  (info (error (format nil "cicili: call: ~A" info)))
                  (t (set-ast-line (output ")")))))))))

(defun compile-variable (spec lvl globals parent-spec)
  (let ((is-register nil)
	    (is-volatile nil)
	    (is-thread-l nil)
	    (is-static   nil)
	    (is-declare  nil)
	    (is-extern   nil)
        (is-alloc    nil)
        (has-defer   nil)
        (is-unique   (unique spec)))
    
    (dolist (attr (attrs spec))
      (cond ((key-eq (car attr) '|register|)     (setq is-register t))
	        ((key-eq (car attr) '|volatile|)     (setq is-volatile t))
	        ((key-eq (car attr) '|thread-local|) (setq is-thread-l t))
	        ((key-eq (car attr) '|static|)       (setq is-static   t))
	        ((key-eq (car attr) '|decl|)         (setq is-declare  t))
	        ((key-eq (car attr) '|extern|)       (setq is-extern   t))
            ((key-eq (car attr) '|alloc|)        (setq is-alloc    t))
            ((key-eq (car attr) '|defer|)        (setq has-defer   (cdr attr)))
            (t (error (format nil "unknown variable attribute ~A for ~A" attr spec)))))

    (when (key-eq (construct spec) '|@VAR|) ; '|@PARAM| for struct members, function parameters
      (loop for los being the hash-value of (inners spec)
            do (progn
                 (cond ((key-eq '|@STRUCT| (construct los)) ; default t means is multi-output
                        (when (or (and (null is-static) *target-header*) (and is-static *target-source*))
                          (compile-struct los lvl globals spec) ; :no-typedef t
                          (output "~%")))
                       ((key-eq '|@FUNC| (construct los)) ; lambdas
                        (push (cons '|static| t) (attrs los))
                        (compile-function los lvl globals spec)
                        (output "~%")
                        (pop (attrs los)))
                       (t (compile-expr los))))))
    
    (when is-extern   (set-ast-line (output "extern ")))
    (when is-static   (set-ast-line (output "static ")))
    (when is-register (set-ast-line (output "register ")))
    (unless (key-eq (typeof spec) '|func|) (when is-volatile (set-ast-line (output "volatile "))))
    (when is-thread-l (set-ast-line (output "__thread ")))
    (compile-spec-type-value spec lvl globals parent-spec has-defer)))

(defun compile-let (spec lvl globals parent-spec &optional is-n) ; is-n means letn - > scope is statement
  (let ((dynamics    '())
	    (locals      (copy-specifiers globals)))

    (when is-n (output "("))
    (output "{ /* ~A */~%" (name spec))
    (loop for var being the hash-value of (params spec)
          do (progn
               (output "~&~A" (indent (- lvl 1)))
               (compile-variable var (- lvl 1) locals var)
               (output ";~%")
               (when (find '|alloc| (attrs var) :test #'key-eq) (push (name var) dynamics))))
    (output "~&~A" (indent (- lvl 1)))
    (output "// ----------~%")
    (compile-body (body spec) (- lvl 1) locals spec)
    (output "~&~A" (indent (- lvl 2)))
    (output "}")
    (when is-n (output ")"))))

(defun compile-block (spec lvl globals parent-spec)
  (if (> (length (body (body spec))) 0)
    (let ((locals      (copy-specifiers globals)))
      (output "{ /* ~A */~%" (name spec))
      (compile-body (body spec) lvl locals spec)
      (output "~&~A" (indent (- lvl 1)))
      (output "}"))
    (output "/* ~A */" (name spec))))

(defun compile-progn (spec lvl globals parent-spec)
  (let ((locals      (copy-specifiers globals)))
    (output "({ /* ~A */~%" (name spec))
    (compile-body (body spec) (- lvl 1) locals spec)
    (output "~&~A" (indent (- lvl 2)))
    (output "})")))

(defun compile-return (spec lvl globals parent-spec)
  (set-ast-line (output "return "))
  (when (default spec) (compile-form (default spec) lvl globals spec)))

(defun compile-if (spec lvl globals parent-spec)
  (let ((locals (copy-specifiers globals))
        (add-braces (key-eq (construct parent-spec) '|@IF|)))
    
    (if add-braces
        (progn
          (set-ast-line (output "{~%"))
          (output "~&~A" (indent (- lvl 2)))
          (set-ast-line (output "if ")))
        (set-ast-line (output "if ")))

    (let* ((cond-const (construct (name spec)))
           (is-atom (find cond-const (list '|@ATOM| '|@SYMBOL| '|@CALL| '|@-->| '|@->| '|@=>|) :test #'key-eq)))
      (when is-atom (output "("))
      (compile-form (name spec) lvl globals (name spec)) ; condition
      (when is-atom (output ")")))
    (set-ast-line (output "~%"))
    (compile-body (default spec) (- lvl 1) locals spec)
    
    (let ((else-body (body spec))
          (locals (copy-specifiers globals)))
      (if (null else-body)
          (if add-braces
              (progn
                (output "~&~A" (indent (- lvl 1)))
                (set-ast-line (output "}"))))
          
          (progn
            (output "~&~A" (indent (- lvl 2)))
            (set-ast-line (output "else~%"))
            (compile-body else-body (- lvl 1) locals spec)
            (when add-braces
              (output "~&~A" (indent (- lvl 2)))
              (set-ast-line (output "}"))))))))

(defun compile-switch (spec lvl globals parent-spec)
  (set-ast-line (output "switch ("))
  (compile-form (name spec) lvl globals spec)
  (set-ast-line (output ") {~%"))
  (dolist (ch-form (default spec))
    (let ((constr (construct ch-form)))
      (cond ((key-eq constr '|@CASE|)
             (output "~&~A" (indent lvl))
             (set-ast-line (output "case "))
             (compile-form (name ch-form) lvl globals spec)
             (output ":~%")
             (compile-body (body ch-form) (+ lvl 1) globals spec))
	        ((key-eq constr '|@DEFAULT|)
             (output "~&~A" (indent lvl))
             (set-ast-line (output "default:~%" (indent (+ lvl 1))))
	         (compile-body (body ch-form) (+ lvl 1) globals spec))
	        (t (error (format nil "only case or default form ~A" spec))))))
  (output "~&~A}" (indent (- lvl 2))))

(defun compile-while (spec lvl globals parent-spec)
  (let ((locals (copy-specifiers globals)))
    (set-ast-line (output "while ("))
    (compile-form (name spec) lvl locals spec) ; condition
    (set-ast-line (output ") {~%"))
    (compile-body (body spec) lvl locals spec)
    (output "~&~A" (indent (- lvl 2)))
    (output "}")))

(defun compile-do (spec lvl globals parent-spec)
  (let ((locals (copy-specifiers globals)))
    (set-ast-line (output "do { ~%"))
    (compile-body (body spec) lvl locals spec)
    (output "~&~A" (indent (- lvl 1)))
    (output "} while (")
    (compile-form (name spec) lvl globals spec) ; condition
    (set-ast-line (output ");"))))

(defun compile-for (spec lvl globals parent-spec)
  (let ((params (params spec))
        (locals (copy-specifiers globals)))
    (set-ast-line (output "for ("))
    (loop for var being the hash-value of params
          with lc = (1- (hash-table-count params))
          for i from 0 to lc
          do (progn
               (compile-spec-type-value var lvl locals spec)
               (when (< i lc) (output ", "))))
    (output "; ")
    (compile-form (name spec) lvl locals spec) ; condition
    (set-ast-line (output "; "))
    (let ((forms (body (default spec))))
      (loop for form in forms
            with lc = (1- (length forms))
            for i from 0 to lc
            do (progn
                 (case (construct form)
                   ('|@ATOM|   (compile-atom       form lvl locals spec))
                   ('|@UNARY|  (compile-unary      form lvl locals spec))
                   ('|@ASSIGN| (compile-assignment form lvl locals spec))
                   ('|@CALL|   (compile-call       form lvl locals spec))
                   ('|@SET|    (compile-set        form lvl locals spec))
                   (t (error (format nil "unsupported form inside advance part of for loop ~A" spec))))
                 (when (< i lc) (output ", ")))))
    (set-ast-line (output ") {~%"))
    (compile-body (body spec) lvl locals spec)
    (output "~&~A" (indent (- lvl 2)))
    (output "}")))

(defun compile-cond (spec lvl globals parent-spec)
  (let ((locals (copy-specifiers globals))
        (nodes (body spec)))
    (loop for node in nodes
          with l = (- (length nodes) 1)
          for i from 0 to (length nodes)
          do (let ((condition (car node))
                   (vars-cond (car node))
                   (body (cadr node)))
               
               (when (listp condition) ; has variable definition
                 (setq condition (car (last condition))))
                 
               (if (= i 0)
                   (set-ast-line (output "if "))
                   (progn
                     (output "~&~A" (indent (- lvl 2)))
                     (set-ast-line (output "else if "))))
               (let ((is-atom (or (listp vars-cond)
                                (find (construct condition) (list '|@ATOM| '|@SYMBOL| '|@CALL| '|@-->| '|@->| '|@=>|)
                                    :test #'key-eq))))
                 (when is-atom (output "("))

                 (when (listp vars-cond) ; has variable definition
                   (dotimes (i (length vars-cond))
                     (let ((vari (nth i vars-cond)))
                       (if (eql vari condition)
                           (output "; ")
                           (progn
                             (compile-form vari lvl globals spec)
                             (when (< i (- (length vars-cond) 2)) (output ", ")))))))
                 
                 
                 (compile-form condition lvl globals spec) ; each condition
                 (when is-atom (output ")")))
               (set-ast-line (output " {~%"))
               (compile-body body lvl locals spec)
               (output "~&~A" (indent (- lvl 2)))
               (if (< i l)
                   (set-ast-line (output "}~%"))
                   (set-ast-line (output "}")))))))

(defun compile-function (spec lvl globals parent-spec &key ((:type as-type) nil) (func-out nil))
  ;; resolve ?
  (let ((is-static   nil)
	    (is-declare  as-type)
	    (is-inline   nil)
	    (is-extern   nil)
	    (is-volatile nil)
        (do-resolve  nil)
        (is-unique  (unique spec)))
    (dolist (attr (attrs spec))
      (case (car attr)
	    ('|static|   (setq is-static   t))
	    ('|decl|     (setq is-declare  t))
	    ('|inline|   (setq is-inline   t))
	    ('|extern|   (setq is-extern   t))
	    ('|volatile| (setq is-volatile t))
        ('|resolve|  (setq do-resolve  (cdr attr)))))
    (when (and (> *ast-run* 1) (key-eq '|false| do-resolve)) (setq *resolve* nil))

    ;; compile lambdas and inline structs before function
    (unless as-type
      (loop for los being the hash-value of (inners spec)
            do (progn
                 (cond ((key-eq '|@STRUCT| (construct los)) ; inline structs
                        (when (or (null (default los))
                                (and (null is-static) *target-header*)
                                (and is-static *target-source*))
                          (compile-struct los lvl globals spec) ; :no-typedef t
                          (output "~%")))
                       ((key-eq '|@FUNC| (construct los)) ; lambdas
                        ;; (push (cons '|static| t) (attrs los))
                        (compile-function los lvl globals spec)
                        (output "~%")
                        (pop (attrs los)))
                       (t (compile-expr los))))))

    ;; compile function
    (let* ((name       (name   spec))
	       (is-method  (if (key-eq (construct spec) '|@METHOD|) t nil))
	       (is-shared  (and (listp name) (not is-method)))
	       (params     (params spec))
	       (body       (body   spec))
	       (locals     (copy-specifiers globals)))
      (let ((cparams '()))
        (maphash #'(lambda (in-name in-spec)
		             (case (construct in-spec)
		               ('|@PARAM| (setf (gethash in-name locals) in-spec)
                                  (push in-spec cparams))
		               (otherwise nil)))
	             params)

        (output "~&~A" (indent (- lvl 1)))
        (when is-extern   (set-ast-line (output "extern ")))
        (when is-inline   (set-ast-line (output "__attribute__((weak)) ")))
        (when (and is-static (not (key-eq name '|main|))) (set-ast-line (output "static ")))

        ;; if a function returns another function
        ;; the parameters of the function and returning one should be swapped
        ;; remind to add and remove (struct * this) if the function is METHOD
        (if (key-eq (typeof spec) '|func|)
            (progn
              (setf (construct (car (array-def spec))) (construct spec))
              (setf (name (car (array-def spec))) name)
              (format-type (const spec) (typeof spec) (modifier spec) (const-ptr spec) nil (array-def spec) nil
                           lvl locals parent-spec :func-out t))
            (format-type (const spec) (typeof spec) (modifier spec) (const-ptr spec) nil (array-def spec) nil
                         lvl locals parent-spec :func-out nil))
        
        (output " ")

        (cond ((key-eq (typeof spec) '|func|) t)
              ((and as-type (key-eq name '_))
               (if is-volatile (set-ast-line (output "(* volatile)")) (set-ast-line (output "(*)"))))
              (t (when func-out (output "(")) 
                 (set-ast-line
                     (output "~A " (if is-unique
                                       (unique spec)
                                       (if (or is-method is-shared)
                                           (if as-type
                                               (if is-volatile
                                                   (format nil (if func-out "* volatile ~A" "(* volatile ~A)")
                                                           (if is-method
                                                               (make-method-name (car name) (cdr name))
                                                               (make-shared-name (car name) (cdr name))))
                                                   (format nil (if func-out "*~A" "(*~A)") (if is-method
                                                                           (make-method-name (car name) (cdr name))
                                                                           (make-shared-name (car name) (cdr name)))))
                                               (if is-method
                                                   (make-method-name (car name) (cdr name))
                                                   (make-shared-name (car name) (cdr name))))
                                           (if as-type
                                               (if is-volatile
                                                   (format nil (if func-out "* volatile ~A" "(* volatile ~A)") name)
                                                   (format nil (if func-out "*~A" "(*~A)") name))
                                               name)))))))
        
        (output "(")
        (loop for param being the hash-value of params
              with lc = (1- (hash-table-count params))
              for i from 0 to lc
              do (progn
                   (compile-variable param lvl locals spec)
                   (when (< i lc) (output ", "))))
        
        (let ((ast (prev-ast<)))
          (unless (null ast)
            (let ((info (getf ast 'info)))
              (when info
                (error (format nil "cicili: function: ~A" info))))))
        (set-ast-line (output ")"))
        (when func-out (output ")"))
        
        (if is-declare
            (unless as-type (output ";"))
            (progn
              (output " ")
              (output "{~%")))
        (unless is-declare
          (progn
	        (compile-body body lvl locals spec)
            (output "~&~A" (indent (- lvl 1)))
            (output "}"))))))
  (setq *resolve* t))

(defun compile-preprocessor (spec lvl globals parent-spec)
  (with-slots ((directive const) (name typeof) (macro default)) spec
    (compile-form directive lvl globals spec)
    (when name (compile-form name lvl globals spec))
    (when macro (compile-form macro (1+ lvl) globals spec))))

(defun compile-include (spec lvl globals parent-spec)
  (loop for header in (params spec)
        with l = (length (params spec))
        for i from 1 to l
        do (cond ((symbolp header)
                  (set-ast-line (output "~&#include "))
                  (if (< i l)
                      (set-ast-line (output "~A~%" header))
                      (set-ast-line (output "~A" header))))
	             ((stringp header)
                  (set-ast-line (output "~&#include "))
                  (if (< i l)
                      (set-ast-line (output "~S~%" header))
                      (set-ast-line (output "~S" header))))
	             (t (error "wrong inclusion")))))

(defun compile-typedef (spec lvl globals parent-spec)
  (loop for los being the hash-value of (inners spec)
        do (progn
             (cond ((key-eq '|@STRUCT| (construct los)) ; default t means is multi-output
                    (compile-struct los lvl globals spec) ; :no-typedef t
                    (output "~%"))
                   ((key-eq '|@FUNC| (construct los)) ; lambdas
                    (push (cons '|static| t) (attrs los))
                    (compile-function los lvl globals spec)
                    (output "~%")
                    (pop (attrs los)))
                   (t (compile-expr los)))))

  (set-ast-line (output "~&typedef "))
  (compile-spec-type spec lvl globals parent-spec))

(defun compile-enum (spec lvl globals parent-spec &key ((:nested is-nested) nil))
  (let ((name         (name spec))
	    (is-anonymous (anonymous spec))
	    (counter      1)
	    (count        (hash-table-count (inners spec)))
	    (locals       (copy-specifiers globals))
        (is-unique    (unique spec)))

    (when is-nested (output "~&~A" (indent (- lvl 1))))
    (if is-anonymous
        (set-ast-line (output "enum "))
        (if is-nested
            (progn
              (set-ast-line (output "enum "))
              (set-ast-line (output "~A " (if is-unique (unique spec) name))))
            (progn
              (set-ast-line (output "typedef "))
              (set-ast-line (output "enum "))
              (set-ast-line (output "~A " (if is-unique (unique spec) name))))))
    (if is-anonymous
        (output "{ /* ~A */~%" name)
        (output "{~%"))
    (maphash #'(lambda (in-name in-spec)
		         (case (construct in-spec)
		           ('|@VAR|
                    (output "~&~A" (indent lvl))
		            (set-ast-line (output "~A" (if is-unique (unique in-spec) (name in-name))))
                    (unless (null (default in-spec))
                      (set-ast-line (output " = "))
                      (compile-form (default in-spec) (1+ lvl) locals spec))
                    (when (< counter count) (output ","))
                    (output "~%"))
		           (otherwise (error (format nil "unknown clause ~A inside ~A" in-name in-spec))))
		         (incf counter))
	         (inners spec))
    (when is-nested (output "~&~A" (indent (- lvl 1))))
    (output "}")
    (unless is-anonymous
      (output " ")
      (set-ast-line (output "~A" (if is-unique (unique spec) name))))))

(defun compile-struct (spec lvl globals parent-spec &key ((:nested is-nested) nil) no-typedef)
  (let ((name         (name spec))
	    (is-anonymous (anonymous spec))
	    (is-static    nil)
	    (is-declare   nil)
	    (declares     (params spec))
	    (locals       (copy-specifiers globals))
        (is-unique    (unique spec)))
    (dolist (attr (attrs spec))
      (case (car attr)
	    ('|static|  (setq is-static  t))
	    ('|decl|    (setq is-declare t))))
    
    (when is-nested (output "~&~A" (indent (- lvl 1))))
    (when is-static (set-ast-line (output "static ")))
    (if (or is-anonymous is-nested no-typedef)
        (progn
          (set-ast-line (output "struct "))
          (unless is-anonymous
            (set-ast-line (output "~A " (if is-unique (unique spec) name)))))
        (progn
          (set-ast-line (output "typedef "))
          (set-ast-line (output "struct "))
          (set-ast-line (output "~A " (if is-unique (unique spec) name)))
          (when is-declare
            (set-ast-line (output "~A " (if is-unique (unique spec) name))))))
    (unless is-declare
      (if is-anonymous
          (output "{ /* ~A */~%" name)
          (output "{~%"))
      (compile-body-map (inners spec) lvl globals spec)
      (when is-nested (output "~&~A" (indent (- lvl 1))))
      (output "}")
      (if is-anonymous
          (when (> (hash-table-count declares) 0)
            (loop for dec being the hash-values of declares
                  with l = (1- (hash-table-count declares))
                  for i from 0 to l
                  do (progn
                       (compile-spec-type dec lvl globals spec)
                       (when (< i l) (output ",")))))
          (unless no-typedef
            (output " ")
            (set-ast-line (output "~A" (if is-unique (unique spec) name))))))
    (output ";")))

(defun compile-union (spec lvl globals parent-spec &key ((:nested is-nested) nil))
  (let ((name         (name spec))
	    (is-anonymous (anonymous spec))
	    (declares     (params spec))
	    (locals       (copy-specifiers globals))
        (is-unique    (unique spec)))
    (when is-nested (output "~&~A" (indent (- lvl 1))))
    (if is-anonymous
        (set-ast-line (output "union "))
        (progn
          (set-ast-line (output "typedef "))
          (set-ast-line (output "union "))
          (set-ast-line (output "~A " (if is-unique (unique spec) name)))))
    (if is-anonymous
        (output "{ /* ~A */~%" name)
        (output "{~%"))
    (compile-body-map (inners spec) lvl globals spec)
    (when is-nested (output "~&~A" (indent (- lvl 1))))
    (output "}")
    (if is-anonymous
        (when (> (hash-table-count declares) 0)
          (loop for dec being the hash-values of declares
                with l = (1- (hash-table-count declares))
                for i from 0 to l
                do (progn
                     (compile-spec-type dec lvl globals spec)
                     (when (< i l) (output ",")))))
        (progn
          (output " ")
          (set-ast-line (output "~A" name))))
    (output ";")))

(defun compile-guard (spec lvl globals parent-spec &key from-body ((:nested is-nested) nil))
  (let ((name (name spec)))
    (set-ast-line (output "~&#ifndef ~A~%" name))
    (set-ast-line (output "~&#define ~A~%" name))
    (compile-body-map (inners spec) lvl globals spec)
    (set-ast-line (output "~&#endif /* ~A */ ~%" name))))
