(in-package :cicili)

(defun specify-expr (def)
  (setq def (expand-macros def))
  (set-ast-obj def
    (cond ((key-eq def '|nil|) (specify-nil-expr  def))
          ((atom   def)        (specify-atom-expr def))
          (t (let ((func (car def)))
               (if (symbolp func)
	               (cond ((key-eq func 'QUASIQUOTE)
                          (specify-expr (eval (car (macroexpand `(,(cadr def) ,@(cddr def)))))))
                         ((key-eq func '|code|)   (specify-code-expr def))
                         ((key-eq func 'FUNCTION) (specify-call-expr (cadr def)))
		                 ((key-eq func 'QUOTE)
                          (let ((quoted (cadr def)))
                            (cond ((key-eq (car quoted) '|closure|) ; nested function gcc extension
                                   (let* ((lname (GENSYM "__ciciliC_"))
                                          (progn-spec (specify-progn
                                                          (list '|progn|
                                                                (append (list '|func| lname) (cdr quoted))
                                                                lname))))
                                     progn-spec))

                                  ((key-eq (car quoted) '|closure*|) ; nested function gcc extension, named-closure
                                   (let* ((lname (expand-macros (cadr quoted)))
                                          (progn-spec (specify-progn
                                                          (list '|progn|
                                                                (append (list '|func| lname) (cddr quoted))
                                                                lname))))
                                     progn-spec))

                                  ((key-eq (car quoted) '|lambda|) ; annonymous lambda
                                   (let* ((lname (gensym "__ciciliL_"))
                                          (func-spec (specify-function (append (list '|lambda| lname) (cdr quoted)) '())))
                                     (unless *type-infer-time-lambda*
                                       (add-inner func-spec (if *function-spec* *function-spec* *variable-spec*))
                                       )
                                     (let* ((fname (name func-spec))
                                            (name (if (listp fname)
                                                      (intern (make-shared-name (car fname) (cdr fname)))
                                                      fname)))
                                       (specify-symbol-expr (if *module-path* (free-name *module-path* lname) name)))))
                                  
                                  ((key-eq (car quoted) '|lambda*|) ; named lambda 
                                   (let* ((func-spec (specify-function quoted '())))
                                     (unless *type-infer-time-lambda*
                                       (add-inner func-spec (if *function-spec* *function-spec* *variable-spec*))
                                       )
                                     (let* ((fname (name func-spec))
                                            (name (if (listp fname)
                                                      (intern (make-shared-name (car fname) (cdr fname)))
                                                      fname)))
                                       (specify-symbol-expr (if *module-path* (free-name *module-path* name) name)))))

                                  ((key-eq (car quoted) '|def-closure*|) ; def-closure*
                                   (let ((struct-spec (specify-struct (cadr quoted) '())))
                                     (add-inner struct-spec (if *function-spec* *function-spec* *variable-spec*))
                                     (specify-expr (caddr quoted))))
                                  
                                  (t (specify-list-expr quoted)))))   ; list
		                 ((and (> (length def) 2) (key-eq func '\|) (key-eq (cadr def) '\|))
		                  (specify-operator-expr (push '\|\| (cddr def))))
		                 ((and (> (length def) 2) (key-eq func '\|)) (specify-operator-expr def))
		                 ((and (= (length def) 2) (find func *unaries*   :test #'key-eq)) (specify-unary-expr def))
		                 ((and (> (length def) 2) (find func *operators* :test #'key-eq)) (specify-operator-expr def))
		                 ((key-eq func '|nth|)    (specify-nth-expr    def))
		                 ((key-eq func '|?|)      (specify-?-expr      def)) 
		                 ((key-eq func '|cast|)   (specify-cast-expr   def))
                         ;; the C++ named casts. `cast' stays the C cast, which
                         ;; is what it means everywhere else in the language.
                         ((key-eq func '|static-cast|)
                          (specify-cppcast-expr def '|static_cast|))
                         ((key-eq func '|dynamic-cast|)
                          (specify-cppcast-expr def '|dynamic_cast|))
                         ((key-eq func '|const-cast|)
                          (specify-cppcast-expr def '|const_cast|))
                         ((key-eq func '|reinterpret-cast|)
                          (specify-cppcast-expr def '|reinterpret_cast|))
                         ((key-eq func '|try|)    (specify-try         def))
                         ;; a::b::c -- one name, resolved as one. It is NOT a
                         ;; code escape any more: it interns to the symbol
                         ;; a::b::c, so a declaration binding for it makes it a
                         ;; type that `$' and `->' can see through, and without
                         ;; one it is still emitted verbatim for C++ to judge.
                         ((or (string= (symbol-name func) "$$")
                              (string= (symbol-name func) "t<>"))
                          (let ((qn (name-form< def)))
                            (if (*gets* qn)
                                (specify-symbol-expr qn)
                                ;; No declaration for it, so it is somebody
                                ;; else's name -- emitted as written, and C++
                                ;; decides whether it exists. Declare it with a
                                ;; binding to get a type and member resolution;
                                ;; erroring here instead would make every C++
                                ;; library unusable until it was fully bound.
                                ;; typed as ITSELF, which is right for the
                                ;; common case: std::string("x") constructs a
                                ;; std::string. It also gives `auto' something
                                ;; to infer, so (letin* ((s (std::string "x"))))
                                ;; declares std::string rather than nothing.
                                (make-specifier '|@SYMBOL| '|@ATOM| nil qn nil nil nil qn '()))))
                         ((key-eq func '|$|)      (specify-$-expr      def)) ; member access operator
                         ((key-eq func '|-->|)    (specify-->-expr     def   t)) ; method name access operator
                         ((key-eq func '|->|)     (specify-->-expr     def nil)) ; method access operator
                         ((key-eq func '|=>|)     (specify-=>-expr     def)) ; member function access operator
                         ((key-eq func '|sizeof|) (specify-sizeof-expr def))
                         ((key-eq func '|typeof|) (specify-typeof-expr def))

                         ((key-eq func '|macrolet|) (specify-macrolet      def)) 
		                 ((key-eq func '|let|)      (specify-let           def)) 
		                 ((key-eq func '|letn|)     (specify-let           def t)) 
		                 ((key-eq func '|block|)    (specify-block         def)) 
		                 ((key-eq func '|progn|)    (specify-progn         def)) 
		                 ((key-eq func '|set|)      (specify-set-expr      def))
		                 ((key-eq func '|return|)   (specify-return-expr   def))
		                 ((key-eq func '|break|)    (specify-symbol-expr   (car def)))
		                 ((key-eq func '|continue|) (specify-symbol-expr   (car def)))
		                 ((key-eq func '|if|)       (specify-if            def)) 
		                 ((key-eq func '|switch|)   (specify-switch        def)) 
		                 ((key-eq func '|while|)    (specify-while         def)) 
		                 ((key-eq func '|do|)       (specify-do            def)) 
		                 ((key-eq func '|for|)      (specify-for           def)) 
		                 ((key-eq func '|cond|)     (specify-cond          def))

                         ((key-eq func '|include|) (specify-include     def '()))
		                 ((key-eq func '|typedef|) (specify-typedef     def '()))
                         ((key-eq func '|var|)     (specify-variable    def '()))
		                 ((key-eq func '|func|)    (specify-function    def '()))
		                 ((key-eq func '|method|)  (specify-function    def '()))
		                 ((key-eq func '|enum|)    (specify-enum        def '()))
		                 ((key-eq func '|struct|)  (specify-struct      def '()))
		                 ((key-eq func '|union|)   (specify-union       def '()))
		                 ((key-eq func '|guard|)   (specify-guard       def '()))
		                 ((key-eq func '|module|)  (specify-module      def '()))
		                 ((key-eq func '|cicili|)
                          (compile-ast (cdr def) (or *load-truename* *compile-file-truename*)))
                         (t (let ((bd (expand-macros def)))
                              (if (eq bd def)
                                  (if (symbolp bd)
                                      bd
                                      (if (and (listp bd) (key-eq (car bd) '$$$))
                                          (specify-body (cdr bd))
                                          (specify-call-expr bd)))
                                  (if (symbolp bd)
                                      bd
                                      (if (and (listp bd) (key-eq (car bd) '$$$))
                                          (specify-body (cdr bd))
                                          (specify-expr bd)))))))
                   (specify-call-expr def)))))))

(defun specify-body (def)
  (set-ast-obj def
    (let ((body-specifier (make-specifier (gensym "body") '@|BODY| nil nil nil nil nil nil nil))
          (lbody '())
          (attributes '()))
      (dolist (form def)
        (let ((res
               (cond ((key-eq  form '|nil|) (specify-nil-expr  form))
                     ((atom    form)        (specify-atom-expr form))
	                 (t (let ((func (car form)))
                          (cond ((and (symbolp func) (find (char (symbol-name func) 0) "@#"))
		                         (specify-preprocessor form '()))
                                ((and (= (length form) 2) (find func *unaries*     :test #'key-eq))
                                 (specify-unary-expr form))
		                        ((and (= (length form) 3) (find func *assignments* :test #'key-eq))
                                 (specify-assignment-expr form))
                                
		                        ((key-eq func '|macrolet|)  (specify-macrolet      form)) 
		                        ((key-eq func '|let|)       (specify-let           form)) 
		                        ((key-eq func '|letn|)      (specify-let           form t)) 
		                        ((key-eq func '|block|)     (specify-block         form)) 
		                        ((key-eq func '|progn|)     (specify-progn         form)) 
		                        ((key-eq func '|set|)       (specify-set-expr      form))
		                        ((key-eq func '|return|)    (specify-return-expr   form))
		                        ((key-eq func '|break|)     (specify-symbol-expr   (car form)))
		                        ((key-eq func '|continue|)  (specify-symbol-expr   (car form)))
		                        ((key-eq func '|if|)        (specify-if            form)) 
		                        ((key-eq func '|switch|)    (specify-switch        form)) 
		                        ((key-eq func '|while|)     (specify-while         form)) 
		                        ((key-eq func '|do|)        (specify-do            form)) 
		                        ((key-eq func '|for|)       (specify-for           form)) 
		                        ((key-eq func '|cond|)      (specify-cond          form))
                                
                                ((find func *attributes* :test #'key-eq) (push form attributes) nil)

                                (t (let ((out-res
                                             (cond ((key-eq func '|include|) (specify-include     form attributes))
		                                           ((key-eq func '|typedef|) (specify-typedef     form attributes))
                                                   ((key-eq func '|var|)     (specify-variable    form attributes))
		                                           ((key-eq func '|func|)    (specify-function    form attributes))
		                                           ((key-eq func '|method|)  (specify-function    form attributes))
		                                           ((key-eq func '|enum|)    (specify-enum        form attributes))
		                                           ((key-eq func '|struct|)  (specify-struct      form attributes))
		                                           ((key-eq func '|union|)   (specify-union       form attributes))
		                                           ((key-eq func '|guard|)   (specify-guard       form attributes))
		                                           ((key-eq func '|module|)  (specify-module      form attributes))
		                                           ((key-eq func '|cicili|)
                                                    (compile-ast (cdr form) (or *load-truename* *compile-file-truename*)))
                                                   ((and (or (key-eq func '|defmacro|) (key-eq func '|DEFMACRO|)) (listp (cadr form)))
                                                    (specify-body (list (append (list '|DEFMACRO| (expand-macros (cadr form))) (cddr form)))))
                                                   (t (let ((bd (expand-macros form)))
                                                        (if (eq bd form)
                                                            (specify-expr bd)
                                                            (if (symbolp bd) bd
                                                                (if (and (listp bd) (eql (car bd) '$$$))
                                                                    (specify-body (cdr bd))
                                                                    (specify-expr bd)))))))))
                                     (setq attributes '())
                                     out-res))))))))
          
          (unless (symbolp res) (push res lbody)))) ; any macro produce macro
      (setf (body body-specifier) (reverse lbody))
      body-specifier)))

(defun compile-form (spec lvl globals parent-spec &key from-body)
  (when spec
    (case (construct spec)
          ('|@NIL|     t)
          ('|@SYMBOL|  (compile-atom         spec lvl globals spec))
          ('|@ATOM|    (compile-atom         spec lvl globals spec))
          ('|@CODE|    (compile-code         spec lvl globals spec))
          ('|@LIST|    (compile-list         spec lvl globals spec))
          ('|@UNARY|   (compile-unary        spec lvl globals spec))
          ('|@OPR|     (compile-operator     spec lvl globals spec))
          ('|@NTH|     (compile-nth          spec lvl globals spec))
          ('|@?|       (compile-?            spec lvl globals spec))
          ('|@CAST|    (compile-cast         spec lvl globals spec))
          ('|@CPPCAST| (compile-cppcast      spec lvl globals spec))
          ('|@$|       (compile-$            spec lvl globals spec))      
          ('|@-->|     (compile-->           spec lvl globals spec   t))
          ('|@->|      (compile-->           spec lvl globals spec nil))
          ('|@=>|      (compile-=>           spec lvl globals spec))
          ('|@SIZEOF|  (compile-sizeof       spec lvl globals spec))
          ('|@TYPEOF|  (compile-typeof       spec lvl globals spec))
          ;; ('|@LET|     (compile-let          spec lvl globals spec))
          ('|@LETN|    (compile-let          spec (1+ lvl) globals spec t))
          ;; ('|@BLOCK|   (compile-block        spec lvl globals spec))
          ('|@PROGN|   (compile-progn        spec (1+ lvl) globals spec))
          
          ('|@PREPROC| (compile-preprocessor spec lvl globals spec)) ; from inside macros 
	      ('|@INCLUDE| (compile-include      spec lvl globals spec))
          ('|@TYPEDEF| (compile-typedef      spec lvl globals spec)) 
          ('|@VAR|     (compile-variable     spec lvl globals spec))
          ('|@PARAM|   (compile-variable     spec lvl globals spec))
          ('|@FUNC|    (compile-function     spec lvl globals spec)) 
          ('|@METHOD|  (compile-function     spec lvl globals spec)) 
          ('|@ENUM|    (compile-enum         spec lvl globals spec :nested (or (key-eq '|@STRUCT| (construct parent-spec))
                                                                               (key-eq '|@UNION|  (construct parent-spec))))) 
          ('|@STRUCT|  (compile-struct       spec lvl globals spec :nested (or (key-eq '|@STRUCT| (construct parent-spec))
                                                                               (key-eq '|@UNION|  (construct parent-spec))))) 
          ('|@UNION|   (compile-union        spec lvl globals spec :nested (or (key-eq '|@STRUCT| (construct parent-spec))
                                                                               (key-eq '|@UNION|  (construct parent-spec)))))
          ('|@GUARD|   (compile-guard        spec lvl globals spec :nested (key-eq '|@GUARD| (construct parent-spec))
                                             :from-body from-body)) 
          ('|@MODULE|  (compile-module       spec lvl globals spec :nested (key-eq '|@MODULE| (construct parent-spec))
                                             :from-body from-body))  ; down here for inside macros 
          ('|@CALL|    (compile-call         spec lvl globals spec))
          ('|@BODY|    (compile-body         spec lvl globals parent-spec))
          (t (error (format nil "expr syntax error ~A" spec))))))

(defun compile-body-form (form lvl globals parent-spec)
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
        ('|@TRY|     (compile-try          form (1+ lvl) globals parent-spec))
        ('|@DO|      (compile-do           form      lvl globals parent-spec))
        ('|@BODY|    (compile-body         form      lvl globals parent-spec))
        (t           (compile-form         form      lvl globals parent-spec :from-body t))))

;; @TRY is here so no `;' is appended to it -- it ends in a brace, like @IF.
;; @CATCH is here because its body is a list of STATEMENTS, and this list is
;; what says a construct's inner forms each get an indent and a `;'.
(defvar *parent-bodies* (list '|@CICILI| '|@TARGET| '|@FUNC| '|@METHOD| '|@TRY| '|@CATCH|
                              '|@LET| '|@LETN| '|@BLOCK| '|@PROGN| '|@STRUCT| '|@UNION|
                              '|@DO| '|@WHILE| '|@FOR| '|@IF| '|@COND| '|@SWITCH|
                              '|@CASE| '|@DEFAULT| '|@GUARD| '|@MODULE|))

(defun compile-body-list (body lvl globals parent-spec)
  (let ((is-parent-bodies (find (construct parent-spec) *parent-bodies* :test #'key-eq)))
    (loop for form in body
          do (progn
               (when (and is-parent-bodies
                          (not (find (construct form)
                                     (list '|@BODY| '|@INCLUDE| '|@PREPROC| '|@TYPEDEF|
                                           '|@ENUM| '|@STRUCT| '|@UNION| '|@FUNC| '|@METHOD|)
                                     :test #'key-eq)))
                 (output "~&~A" (indent lvl)))
               
               (compile-body-form form
                 (if (find (construct form) (list '|@BODY| '|@GUARD| '|@MODULE|) :test #'key-eq)
                     lvl (1+ lvl))
                 globals parent-spec)
               
               (unless (key-eq '|@BODY| (construct form))
                 (if (and is-parent-bodies
                          (not (find (construct form) (list '|@INCLUDE| '|@PREPROC|) :test #'key-eq))
                          (or (find (construct form) (list '|@LETN| '|@PROGN|) :test #'key-eq) ; container with ;
                              (not (find (construct form) *parent-bodies* :test #'key-eq))))
                     ;; In a C++ target @CODE carries its own punctuation:
                     ;; `namespace X' or `template <...>' followed by a `;' does
                     ;; not compile, and `using' already writes its own. In a C
                     ;; target nothing needed that, so nothing changes there.
                     (if (and *cpp* (key-eq (construct form) '|@CODE|))
                         (output "~%")
                         (output ";~%"))
                     (unless (find (construct form) (list '|@IF| '|@GUARD| '|@MODULE| '|@CALL| '|@CAST|)
                                   :test #'key-eq) ; no ;~%
                       (output "~%"))))))))

(defun compile-body (spec lvl globals parent-spec)
  (unless (key-eq '|@BODY| (construct spec)) (error (format nil "non-body for compile body ~A" spec)))
  (compile-body-list (body spec) lvl globals parent-spec))

(defun compile-body-map (inners lvl globals parent-spec)
  (let ((is-parent-bodies (find (construct parent-spec) *parent-bodies* :test #'key-eq)))
    (maphash #'(lambda (in-name form)
                 (when (and is-parent-bodies
                            (not (find (construct form)
                                       (list '|@BODY| '|@INCLUDE| '|@PREPROC| '|@TYPEDEF|
                                             '|@ENUM| '|@STRUCT| '|@UNION| '|@FUNC| '|@METHOD|)
                                       :test #'key-eq)))
                   (output "~&~A" (indent lvl)))
                 
                 (compile-body-form form
                   (if (find (construct form) (list '|@BODY| '|@GUARD| '|@MODULE|) :test #'key-eq)
                       lvl (1+ lvl))
                   globals parent-spec)

                 (unless (key-eq '|@BODY| (construct form))
                   (if (and is-parent-bodies
                            (not (find (construct form) (list '|@INCLUDE| '|@PREPROC|) :test #'key-eq))
                            (or (find (construct form) (list '|@LETN| '|@PROGN|) :test #'key-eq) ; container with ;
                                (not (find (construct form) *parent-bodies* :test #'key-eq))))
                       ;; see compile-body-list: C++ only
                       (if (and *cpp* (key-eq (construct form) '|@CODE|))
                           (output "~%")
                           (output ";~%"))
                       (unless (find (construct form) (list '|@IF| '|@GUARD| '|@MODULE| '|@CALL| '|@CAST|)
                                     :test #'key-eq) ; no ;~%
                         (output "~%")))))
	         inners)))
