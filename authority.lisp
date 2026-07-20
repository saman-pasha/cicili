(in-package :cicili)

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
                      nil))
         (ptr-mod (cond
                    ((null mod-val) nil)
                    ((key-eq '|move| mod-val) nil)
                    ((key-eq '|ref|  mod-val) nil)
                    (t (const-ptr spec)))))
    (let ((full-type (if with-name
                         (if copy-name (list (const     spec)
	                                         (typeof    spec)
	                                         (if arr-val arr-val mod-val)
                                             ptr-mod
	                                         (name      spec))
                             (list (const     spec)
	                               (typeof    spec)
	                               (if arr-val arr-val mod-val)
                                   ptr-mod
	                               with-name))
                         (list (const     spec)
	                           (typeof    spec)
	                           (if arr-val arr-val mod-val)
                               ptr-mod
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
                                                (let* ((mod-val (cond
                                                                  ((key-eq '|ref| modifier) '|move|)
                                                                  ((key-eq '|***| modifier) '|**|)
                                                                  ((key-eq '|**|  modifier) '|*|)
                                                                  ((key-eq '|*|   modifier) nil)
                                                                  (t (error (format nil "'cof not allowed for: ~A~%  in: ~A" ty clause)))))
                                                       (ptr-mod (cond
                                                                  ((null mod-val) nil)
                                                                  ((key-eq '|move| mod-val) nil)
                                                                  ((key-eq '|ref|  mod-val) nil)
                                                                  (t const-ptr)))
                                                       (ty-def (list const typeof ptr-mod variable array)))
                                                  (format t "RRRRR5 ~A~%" ty-def)
                                                  (values (remove nil ty-def) ty-def))))))
                                         ((and (= (length clause) 2) (find func *unaries* :test #'key-eq))
                                          (return-from infer-type (infer-type (cadr clause)
                                                                    :with-name with-name :copy-name copy-name)))
                                         ((and (> (length clause) 2) (find func *operators* :test #'key-eq))
                                          (return-from infer-type (infer-type (cadr clause)
                                                                    :with-name with-name :copy-name copy-name)))
                                         ((key-eq func '$)
                                          (let ((struct (NTH-VALUE 1 (infer-type (cadr clause)
                                                                       :with-name with-name :copy-name copy-name))))
                                            (format t "SSSSSS ~A~%" struct)
                                            (when struct
                                              (format t "STRUCTTTT1II ~A~%" struct)
                                              (let ((end-type (deep-typeof (NTH 1 struct))))
                                                (unless end-type (error "unknown struct type: ~A~%  accessed in: ~A~%" struct clause))
                                                (format t "STRUCTTTT2II ~A~%" end-type)
                                                (return-from infer-type
                                                  (infer-type-spec
                                                      ""
                                                    (*gets* (intern (format nil "~A/~A"  (caddr clause) (name end-type))))))))))
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

(defun find-attr (spec attr)
  (let ((atts (attrs spec)))
    (find attr atts :test #'(lambda (at kv) (when (key-eq at (car kv)) kv)))))

(defun is-non-copy (id)
  (let ((origin (deep-typeof id)))
    (when (and origin (key-eq (construct origin) '|@STRUCT|) (find-attr origin '|non-copy|))
      t)))

(defun is-inside-loop ()
  (dolist (lex-id *lexemes-id*)
    (when (or (str:starts-with-p "for"   lex-id)
              (str:starts-with-p "while" lex-id)
              (str:starts-with-p "do"    lex-id))
      (return-from is-inside-loop t))))

(defun assign-check (spec left right)
  (let ((initializing (when (find (construct spec) '(|@VAR| |@LET| |@LETN| |@FUNC|)) t))
        (left-type (deep-typeof "" left)))
    (format t "CHECKLEFT ~A   ~A~%" initializing left-type)
    (if left-type
        (unless (or (and initializing (modifier left-type))
                    (and (modifier left-type) (not (key-eq (modifier left-type) '|move|))))
          (let ((left-origin (deep-typeof (typeof left-type))))
            (when (and left-origin (key-eq (construct left-origin) '|@STRUCT|) (find-attr left-origin '|non-copy|))
              (error (format nil "non-copy struct assignment for: ~A~%  by: ~A~%  inside: ~A~%" left right spec )))))
        (when right
          (let ((right-type (deep-typeof "" right)))
            (format t "CHECKRIGHT ~A   ~A~%" initializing right-type)
            (when right-type
              (unless (or (and initializing (modifier left-type))
                          (and (modifier right-type) (not (key-eq (modifier right-type) '|move|))))
                (let ((right-origin (deep-typeof (typeof right-type))))
                  (when (and right-origin (key-eq (construct right-origin) '|@STRUCT|) (find-attr right-origin '|non-copy|))
                    (error (format nil "non-copy struct assignment for: ~A~%  by: ~A~%  inside: ~A~%" left right spec )))))))))))

(defun move-var (spec inside)
  (let ((origin (deep-storageof "" spec))) ; check for moved vars
    (format t "CCCCCCCCCCCCCCCCCCC1 ~A~%  SPECCCC ~A~%" origin spec)
    (if (and origin
             (find (construct origin) '(|@VAR| |@PARAM|))
             (or (key-eq (modifier origin) '|move|)
                 (key-eq (modifier origin) '|ref|)))
        (progn
          (format t "CCCCCCCCCCCCCCCCCCC2 ~A~%" (is-moved origin))
          (if (is-moved origin)
              (error (format nil "trying to move already moved var: ~A~%  in call: ~A"
                             origin inside))
              (if (and (key-eq (modifier origin) '|move|) (is-inside-loop))
                  (error (format nil "using 'move var: ~A~%  inside loop~%  in call: ~A"
                                 origin inside))
                  (if (key-eq (modifier origin) '|move|)
                      (let* ((moved-name (GENSYM "moved_var"))
                             (moved-var (make-specifier moved-name '|@VAR| nil '|auto| nil nil nil spec '()))
                             (call-var (make-specifier (specify-symbol-expr '|memset|) '|@CALL| nil nil nil nil nil
                                                       (list (make-specifier '|&| '|@UNARY| nil nil nil nil nil spec '())
                                                             (make-specifier 0 '|@ATOM| nil '|@NUMBER| nil nil nil nil '())
                                                             (make-specifier nil '|@SIZEOF| nil nil nil nil nil spec '()))
                                                       '()))
                             (let-var (make-specifier (GENSYM "letnmove") '|@LETN| nil nil nil nil nil nil '()))
                             (body-var (make-specifier (GENSYM "bodymove") '|@BODY| nil nil nil nil nil nil '())))
                        (setf (is-moved origin) t)
                        (add-param moved-var let-var)
                        (setf (body body-var) (list call-var (make-specifier moved-name '|@ATOM| nil '|@SYMBOL| nil nil nil nil '())))
                        (setf (body let-var) body-var)
                        let-var
                        ) ; copy, set zero moved arg, pass 
                      spec))))
        spec)))
