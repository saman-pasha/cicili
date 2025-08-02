(in-package :cicili)

(defun compile-name (name lvl globals parent-spec)
  (if (symbolp name)
      (let ((sym-name (symbol-name name)))
        (when (str:starts-with-p "/" sym-name)
          (setq sym-name (str:substring 1 t sym-name)))
        (set-ast-line (output sym-name)))
      (if (typep name 'sp)
          (cond ((key-eq '|@TYPEOF| (construct name))
                 (compile-typeof name lvl globals parent-spec))
                ((key-eq '|@BODY| (construct name))
                 (compile-form (car (body name)) lvl globals parent-spec))
                (t (error (format nil "wrong complex name: ~A" name))))
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

(defun format-type (const typeof modifier const-ptr name array-def anonymous lvl globals parent-spec)
  (when anonymous (setq name (format nil "/* ~A */" name)))
  (when const     (set-ast-line (output "const ")))
  (unless (null typeof) (compile-type-name typeof lvl globals parent-spec))
  (when modifier  (output " ") (set-ast-line (output "~A" modifier)))
  (when const-ptr (output " ") (set-ast-line (output "const" const-ptr)))
  (let ((line-n   -1)
        (col-n    -1))
    (when name      (output " ")
          (setq line-n   (funcall *line-num* 0))
          (setq col-n    (funcall *col-num* 0))
          (set-ast-line (output "~A "(if (str:starts-with-p "_ciciliParam_" (symbol-name name)) " " name))))
    (compile-array array-def lvl globals parent-spec)
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
          ((key-eq typeof '|@CHAR|) (set-ast-line (output "'~A'" value))) 
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
    (compile-form value (1+ lvl) globals spec)
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

(defun compile-form (spec lvl globals parent-spec &key from-body)
  (with-slots (construct) spec
    (case construct
      ('|@NIL|    t)
      ('|@SYMBOL| (compile-atom       spec lvl globals spec))
      ('|@ATOM|   (compile-atom       spec lvl globals spec))
      ('|@CODE|   (compile-code       spec lvl globals spec))
      ('|@LIST|   (compile-list       spec lvl globals spec))
      ('|@UNARY|  (compile-unary      spec lvl globals spec))
      ('|@OPR|    (compile-operator   spec lvl globals spec))
      ('|@NTH|    (compile-nth        spec lvl globals spec))
      ('|@?|      (compile-?          spec lvl globals spec))
      ('|@CAST|   (compile-cast       spec lvl globals spec))
      ('|@$|      (compile-$          spec lvl globals spec))      
      ('|@->|     (compile-->         spec lvl globals spec))
      ('|@=>|     (compile-=>         spec lvl globals spec))
      ('|@SIZEOF| (compile-sizeof     spec lvl globals spec))
      ('|@TYPEOF| (compile-typeof     spec lvl globals spec))
      ('|@LET|    (compile-let        spec lvl globals spec))
      ('|@LETN|   (compile-let        spec lvl globals spec t))
      ('|@BLOCK|  (compile-block      spec lvl globals spec))
      ('|@PROGN|  (compile-progn      spec lvl globals spec))
      ('|@INCLUDE|(compile-include    spec 0   globals spec)) ; from inside macros 
      ('|@VAR|    (compile-variable   spec 0   globals spec))
      ('|@FUNC|   (compile-function   spec 0   globals spec)) 
      ('|@METHOD| (compile-function   spec 0   globals spec)) 
      ('|@ENUM|   (compile-enum       spec 0   globals spec)) 
      ('|@STRUCT| (compile-struct     spec 0   globals spec)) 
      ('|@UNION|  (compile-union      spec 0   globals spec)) 
      ('|@TYPEDEF|(compile-typedef    spec 0   globals spec)) 
      ('|@GUARD|  (compile-guard      spec 0   globals spec   :from-body from-body)) 
      ('|@GHOST|  (compile-guard      spec 0   globals spec t :from-body from-body)) 
      ('|@MODULE| (compile-module     spec 0   globals spec   :from-body from-body)) ; down here for inside macros 
      ('|@CALL|   (compile-call       spec lvl globals spec))
      ('|@BODY|   (compile-body       spec lvl globals parent-spec))
      (t (error (format nil "expr syntax error ~A" spec))))))

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
                 (if (key-eq '|@STRUCT| (construct los)) ; default t means is multi-output
                     (when (or (and (null is-static) *target-header*) (and is-static *target-source*))
                       (compile-struct los 0 globals spec :no-typedef t))
                     (progn ; lambdas
                       (push (cons '|static| t) (attrs los))
                       (compile-function los lvl globals spec)
                       (pop (attrs los)))))))

    (output "~&~A" (indent lvl))
    (when is-extern   (set-ast-line (output "extern ")))
    (when is-static   (set-ast-line (output "static ")))
    (when is-register (set-ast-line (output "register ")))
    (unless (key-eq (typeof spec) '|func|) (when is-volatile (set-ast-line (output "volatile "))))
    (when is-thread-l (set-ast-line (output "__thread ")))
    (compile-spec-type-value spec lvl globals parent-spec has-defer)))

(defvar *parent-bodies* (list '|@CICILI| '|@TARGET| '|@FUNC| '|@METHOD|
                              '|@LET| '|@LETN| '|@BLOCK| '|@PROGN| '|@STRUCT|
                              '|@DO| '|@WHILE| '|@FOR| '|@IF| '|@COND| '|@SWITCH|
                              '|@CASE| '|@DEFAULT| '|@GUARD| '|@GHOAT|))
(defun compile-body (spec lvl globals parent-spec)
  (let ((is-parent-bodies (find (construct parent-spec) *parent-bodies* :test #'key-eq)))
    ;; (display "BODY" spec #\Newline "PARENT" parent-spec #\Newline)

    (loop for form in (body spec)
          do (progn
               ;; (display "FORM" form #\Newline "PARENT" parent-spec #\Newline)

               (when (and (not (key-eq '|@BODY| (construct form)))
                       is-parent-bodies)
                 (output "~&~A" (indent lvl)))
               
               (case (construct form)
		         ('|@PREPROC| (compile-preprocessor form (1+ lvl) globals parent-spec))
                 ('|@ASSIGN|  (compile-assignment   form (1+ lvl) globals parent-spec))
                 ('|@CALL|    (compile-call         form (1+ lvl) globals parent-spec))
                 ('|@VAR|     (compile-variable     form (1+ lvl) globals parent-spec))
                 ('|@LET|     (compile-let          form (1+ lvl) globals parent-spec))
                 ('|@LETN|    (compile-let          form (1+ lvl) globals parent-spec t))
                 ('|@BLOCK|   (compile-block        form      lvl globals parent-spec))
                 ('|@PROGN|   (compile-progn        form (1+ lvl) globals parent-spec))
                 ('|@SET|     (compile-set          form (1+ lvl) globals parent-spec))
                 ('|@RETURN|  (compile-return       form (1+ lvl) globals parent-spec))
                 ('|@IF|      (compile-if           form (1+ lvl) globals parent-spec))
                 ('|@SWITCH|  (compile-switch       form (1+ lvl) globals parent-spec))
                 ('|@WHILE|   (compile-while        form (1+ lvl) globals parent-spec))
                 ('|@FOR|     (compile-for          form (1+ lvl) globals parent-spec))
                 ('|@COND|    (compile-cond         form (1+ lvl) globals parent-spec))
                 ('|@DO|      (compile-do           form      lvl globals parent-spec))
                 ('|@BODY|    (compile-body         form (1+ lvl) globals parent-spec))
                 (t           (compile-form         form (1+ lvl) globals parent-spec :from-body t)))
               
               (if (and is-parent-bodies
                       (not (key-eq '|@BODY| (construct form)))
                       (or (find (construct form) (list '|@LETN| '|@PROGN|) :test #'key-eq)
                         (not (find (construct form) *parent-bodies* :test #'key-eq))))
                   (output ";~%")
                   (progn
                     ;; (display "DDD" (construct form) is-parent-bodies
                     ;;          (key-eq '|@BODY| (construct form))
                     ;;          (find (construct form) (list '|@LETN| '|@PROGN|) :test #'key-eq)
                     ;;          (find (construct form) *parent-bodies* :test #'key-eq)
                     ;;          #\Newline)
                     (output "~%")))))))

(defun compile-let (spec lvl globals parent-spec &optional is-n) ; is-n means letn - > scope is statement
  (let ((dynamics    '())
	    (locals      (copy-specifiers globals))
        (in-progn    (key-eq (construct parent-spec) '|@PROGN|)))
    (when (or in-progn is-n) (output "("))
    (output "{ /* ~A */~%" (name spec))
    (loop for var being the hash-value of (params spec)
          do (progn
               (compile-variable var (1+ lvl) locals var)
               (output ";~%")
               (when (find '|alloc| (attrs var) :test #'key-eq) (push (name var) dynamics))))
    (compile-body (body spec) (1+ lvl) locals spec)
    (output "~&~A" (indent lvl))
    (output "}")
    (when (or in-progn is-n) (output ")"))))

(defun compile-block (spec lvl globals parent-spec)
  (let ((locals      (copy-specifiers globals)))
    (output "{ /* ~A */~%" (name spec))
    (compile-body (body spec) (1+ lvl) locals spec)
    (output "~&~A" (indent lvl))
    (output "} /* ~A */~%" (name spec))))

(defun compile-progn (spec lvl globals parent-spec)
  (let ((locals      (copy-specifiers globals)))
    (output "({ /* ~A */~%" (name spec))
    (compile-body (body spec) (1+ lvl) locals spec)
    (output "~&~A" (indent lvl))
    (output "})" (name spec))))

(defun compile-return (spec lvl globals parent-spec)
  (set-ast-line (output "return "))
  (when (default spec) (compile-form (default spec) (1+ lvl) globals spec)))

(defun compile-if (spec lvl globals parent-spec)
  (let ((locals (copy-specifiers globals))
        (add-braces (key-eq (construct parent-spec) '|@IF|)))
    
    (if add-braces
        (progn
          (set-ast-line (output "{~%"))
          (output "~&~A" (indent lvl))
          (set-ast-line (output "if ")))
        (set-ast-line (output "if ")))
    
    (let* ((cond-const (construct (name spec)))
           (is-atom (find cond-const (list '|@ATOM| '|@CALL| '|@->| '|@=>|) :test #'key-eq)))
      (when is-atom (output "("))
      (compile-form (name spec) lvl globals (name spec)) ; condition
      (when is-atom (output ")")))
    (set-ast-line (output " ~%"))
    (compile-body (default spec) (1+ lvl) locals spec)
    (let ((else-body (body spec))
          (locals (copy-specifiers globals)))
      (if (null else-body)
          (if add-braces
              (progn
                (output "~&~A" (indent lvl))
                (set-ast-line (output "}")))
              (output "~%"))
          
          (progn
            (output "~&~A" (indent lvl))
            (set-ast-line (output "else~%"))
            (compile-body else-body (1+ lvl) locals spec)
            (when add-braces
              (output "~&~A" (indent lvl))
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
             (compile-form (name ch-form) (1+ lvl) globals spec)
             (output ":~%")
             (compile-body (body ch-form) (+ lvl 2) globals spec))
	        ((key-eq constr '|@DEFAULT|)
             (output "~&~A" (indent lvl))
             (set-ast-line (output "default:~%" (indent (+ lvl 1))))
	         (compile-body (body ch-form) (+ lvl 2) globals spec))
	        (t (error (format nil "only case or default form ~A" spec))))))
  (output "~&~A}~%" (indent lvl)))

(defun compile-while (spec lvl globals parent-spec)
  (let ((locals (copy-specifiers globals)))
    (set-ast-line (output "while ("))
    (compile-form (name spec) lvl locals spec) ; condition
    (set-ast-line (output ") {~%"))
    (compile-body (body spec) (1+ lvl) locals spec)
    (output "~&~A" (indent lvl))
    (output "}~%")))

(defun compile-do (spec lvl globals parent-spec)
  (let ((locals (copy-specifiers globals)))
    (set-ast-line (output "do { ~%"))
    (compile-body (body spec) (1+ lvl) locals spec)
    (output "~&~A" (indent lvl))
    (output "} while (")
    (compile-form (name spec) lvl globals spec) ; condition
    (set-ast-line (output ")"))))

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
    (compile-body (body spec) (1+ lvl) locals spec)
    (output "~&~A" (indent lvl))
    (output "} ~%")))

(defun compile-cond (spec lvl globals parent-spec)
  (let ((locals (copy-specifiers globals))
        (nodes (body spec)))
    (loop for node in nodes
          for i from 0 to (length nodes)
          do (let ((condition (car node))
                   (body (cadr node)))
               (set-ast-line (if (= i 0) (output "if ") (output "else if ")))
               (let ((is-atom (key-eq '|@ATOM| condition)))
                (when is-atom (output "("))
                (compile-form condition lvl globals spec) ; each condition
                (when is-atom (output ")")))
               (set-ast-line (output " ~%"))
               (compile-body body lvl locals spec)))))

(defun compile-function (spec lvl globals parent-spec &key ((:type as-type) nil))
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
                 (if (key-eq '|@STRUCT| (construct los)) ; inline structs
                     (when (or (null (default los))
                             (and (null is-static) *target-header*)
                             (and is-static *target-source*))
                       (compile-struct los 0 globals spec :no-typedef t))
                     (progn ; lambdas
                       (push (cons '|static| t) (attrs los))
                       (compile-function los lvl globals spec)
                       (pop (attrs los)))))))

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
        (output "~&~A" (indent lvl))
        (when is-extern   (set-ast-line (output "extern ")))
        (when is-inline   (set-ast-line (output "__attribute__((weak)) ")))
        (when (and is-static (not (key-eq name '|main|))) (set-ast-line (output "static ")))
        (format-type (const spec) (typeof spec) (modifier spec) nil (const-ptr spec) (array-def spec) nil
                     lvl locals parent-spec)
        (output " ")

        (if (and as-type (key-eq name '_))
            (if is-volatile (set-ast-line (output "(* volatile)")) (set-ast-line (output "(*)")))
            (set-ast-line (output "~A " (if is-unique
                                            (unique spec)
                                            (if (or is-method is-shared)
                                                (if as-type
                                                    (if is-volatile
                                                        (format nil "(* volatile ~A)"
                                                                (if is-method
                                                                    (make-method-name (car name) (cdr name))
                                                                    (make-shared-name (car name) (cdr name))))
                                                        (format nil "(*~A)" (if is-method
                                                                                (make-method-name (car name) (cdr name))
                                                                                (make-shared-name (car name) (cdr name)))))
                                                    (if is-method
                                                        (make-method-name (car name) (cdr name))
                                                        (make-shared-name (car name) (cdr name))))
                                                (if as-type
                                                    (if is-volatile
                                                        (format nil "(* volatile ~A)" name)
                                                        (format nil "(*~A)" name))
                                                    name))))))
        
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
        
        (if is-declare
            (unless as-type (output ";~%"))
            (progn
              (output " ")
              (output "{~%")))
        (unless is-declare
          (progn
	        (compile-body body (1+ lvl) locals spec)
	        (output "~&~A" (indent lvl))
            (output "}~%"))))))
  (setq *resolve* t))

(defun compile-preprocessor (spec lvl globals parent-spec)
  (with-slots ((directive const) (name typeof) (macro default)) spec
    (compile-form directive lvl globals spec)
    (when name (compile-form name lvl globals spec))
    (when macro (compile-form macro (1+ lvl) globals spec))
    (output "~%")))

(defun compile-include (spec lvl globals parent-spec)
  (with-slots ((headers params)) spec
    (dolist (header headers)
      (cond ((symbolp header)
             (set-ast-line (output "~&#include "))
             (set-ast-line (output "~A~%" header)))
	        ((stringp header)
             (set-ast-line (output "~&#include "))
             (set-ast-line (output "~S~%" header)))
	        (t (error "wrong inclusion"))))))

(defun compile-typedef (spec lvl globals parent-spec)
  (set-ast-line (output "~&typedef "))
  (compile-spec-type spec lvl globals parent-spec)
  (output ";~%"))

(defun compile-enum (spec lvl globals parent-spec &key ((:nested is-nested) nil))
  (let ((name         (name spec))
	    (is-anonymous (anonymous spec))
	    (counter      1)
	    (count        (hash-table-count (inners spec)))
	    (locals       (copy-specifiers globals))
        (is-unique    (unique spec)))
    (maphash #'(lambda (in-name in-spec)
		         (case (construct in-spec)
		           ('|@VAR| (setf (gethash in-name locals) in-spec))
		           (otherwise nil)))
	         (inners spec))
    (output "~&~A" (indent lvl))
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
                    (output "~&~A" (indent (+ 1 lvl)))
		            (set-ast-line (output "~A" (if is-unique (unique in-spec) (name in-name))))
                    (unless (null (default in-spec))
                      (set-ast-line (output " = "))
                      (compile-form (default in-spec) (1+ lvl) locals spec))
                    (when (< counter count) (output ","))
                    (output "~%"))
		           (otherwise (error (format nil "unknown clause ~A inside ~A" in-name in-spec))))
		         (incf counter))
	         (inners spec))
    (output "~&}")
    (unless is-anonymous
      (output " ")
      (set-ast-line (output "~A" (if is-unique (unique spec) name))))
    (output ";~%")))

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

    (unless is-declare
      (maphash #'(lambda (in-name in-spec)
		           (case (construct in-spec)
		             ('|@PARAM| (setf (gethash in-name locals) in-spec))
		             ('|@FUNC| (setf (gethash in-name locals) in-spec))
		             ('|@PREPROC|  t)
		             ('|@ENUM|
		              (unless (anonymous spec) (setf (gethash in-name locals) in-spec))
		              (maphash #'(lambda (k v) (setf (gethash k locals) v)) (inners in-spec)))
		             ('|@STRUCT|
		              (setf (gethash in-name locals) in-spec)
		              (maphash #'(lambda (k v) (setf (gethash k locals) v)) (params in-spec)))
		             ('|@UNION|
		              (setf (gethash in-name locals) in-spec)
		              (maphash #'(lambda (k v) (setf (gethash k locals) v)) (params in-spec)))
		             (otherwise (error (format nil "unknown clause ~A inside ~A" (construct in-spec) in-spec)))))
	           (inners spec)))
    
    (output "~&~A" (indent lvl))
    (when is-static (set-ast-line (output "static ")))
    (if (or is-anonymous no-typedef)
        (progn
          (set-ast-line (output "struct "))
          (set-ast-line (output "~A " (if is-unique (unique spec) name))))
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
      (maphash #'(lambda (in-name in-spec)
		           (case (construct in-spec)
		             ('|@PARAM|    (compile-variable     in-spec (+ 1 lvl) locals spec) (output ";~%"))
		             ('|@FUNC|     (compile-function     in-spec (+ 1 lvl) locals spec))
		             ('|@PREPROC|  (compile-preprocessor in-spec (+ 1 lvl) locals spec))
		             ('|@ENUM|     (compile-enum         in-spec (+ 1 lvl) locals spec :nested t))
		             ('|@STRUCT|   (compile-struct       in-spec (+ 1 lvl) locals spec :nested t))
		             ('|@UNION|    (compile-union        in-spec (+ 1 lvl) locals spec :nested t))
		             (otherwise nil)))
	           (inners spec))
      (output "~&~A" (indent lvl))
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
    (output ";~%")))

(defun compile-union (spec lvl globals parent-spec &key ((:nested is-nested) nil))
  (let ((name         (name spec))
	    (is-anonymous (anonymous spec))
	    (declares     (params spec))
	    (locals       (copy-specifiers globals))
        (is-unique    (unique spec)))
    (maphash #'(lambda (in-name in-spec)
		         (case (construct in-spec)
		           ('|@VAR| (setf (gethash in-name locals) in-spec))
		           ('|@PREPROC|  t)
		           ('|@STRUCT|
		            (setf (gethash in-name locals) in-spec)
		            (maphash #'(lambda (k v) (setf (gethash k locals) v)) (params in-spec)))
		           ('|@UNION|
		            (setf (gethash in-name locals) in-spec)
		            (maphash #'(lambda (k v) (setf (gethash k locals) v)) (params in-spec)))
		           (otherwise (error (format nil "unknown clause ~A inside ~A" in-name in-spec)))))
	         (inners spec))
    (output "~&~A" (indent lvl))
    (if is-anonymous
        (set-ast-line (output "union "))
        (progn
          (set-ast-line (output "typedef "))
          (set-ast-line (output "union "))
          (set-ast-line (output "~A " (if is-unique (unique spec) name)))))
    (if is-anonymous
        (output "{ /* ~A */~%" name)
        (output "{~%"))
    (maphash #'(lambda (in-name in-spec)
		         (case (construct in-spec)
		           ('|@VAR|      (compile-variable     in-spec (+ 1 lvl) locals spec))
		           ('|@PREPROC|  (compile-preprocessor in-spec (+ 1 lvl) locals spec))
		           ('|@STRUCT|   (compile-struct       in-spec (+ 1 lvl) locals spec :nested t))
		           ('|@UNION|    (compile-union        in-spec (+ 1 lvl) locals spec :nested t))
		           (otherwise nil)))
	         (inners spec))
    (output "~&~A" (indent lvl))
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
    (output ";~%")))

(defun compile-guard (spec lvl globals parent-spec &optional is-ghost &key from-body ((:nested is-nested) nil))
  (let ((name (name spec)))
    (unless is-ghost
      (set-ast-line (output "~&#ifndef ~A~%" name))
      (set-ast-line (output "~&#define ~A~%" name)))
    (maphash #'(lambda (in-name in-spec)
		         (case (construct in-spec)
		           ('|@VAR|      (compile-variable     in-spec lvl globals spec) (output ";~%"))
                                 ;; (unless from-body (output ";~%"))
		           ('|@FUNC|     (compile-function     in-spec lvl globals spec))
		           ('|@METHOD|   (compile-function     in-spec lvl globals spec))
		           ('|@PREPROC|  (compile-preprocessor in-spec lvl globals spec))
		           ('|@INCLUDE|  (compile-include      in-spec lvl globals spec))
		           ('|@TYPEDEF|  (compile-typedef      in-spec lvl globals spec))
		           ('|@ENUM|     (compile-enum         in-spec lvl globals spec))
		           ('|@STRUCT|   (compile-struct       in-spec lvl globals spec))
		           ('|@UNION|    (compile-union        in-spec lvl globals spec))
		           ('|@GUARD|    (compile-guard        in-spec lvl globals spec nil :nested t :from-body from-body))
		           ('|@GHOST|    (compile-guard        in-spec lvl globals spec t   :nested t :from-body from-body))
		           ('|@MODULE|   (compile-module       in-spec lvl globals spec               :from-body from-body))
		           (otherwise    (compile-form         in-spec lvl globals spec)
                                 (output "~%"))))
	         (inners spec))
    (unless is-ghost (set-ast-line (output "~&#endif /* ~A */ ~%" name)))))
