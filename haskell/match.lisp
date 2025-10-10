
;; pattern matching
;; data type and arguments expansion
;; needs default case as default return value
;; all cases after default case will be ignored
;; each match can has a guard with => a condition
;; access by path mode
;; * means Cons char ctor returns a pointer beacause Lists are classes
;; = str at first of any case makes an alias for whole object
;; ^ opr only inside cases can be used separated,
;; note in other cicili clauses ^ must be mixed whithout any space
;; _ for types with only one ctor
(DEFUN match-case-h-details (match-id data case)
  (LET* ((parts (partition-h-data case '^))
         (result (REDUCE #'(LAMBDA (x y)
                             (APPEND
                              (REVERSE (CDR (REVERSE x)))
                              (LIST (MACROEXPAND `(<> ,(CAR (LAST x)) ,(CAR y))))
                              (CDR y)))
                   parts))) ;; to mix names separated with ^
    (SETQ case result)
    
    (LET* ((has-alias (AND (LISTP case) (EQUAL (CAR case) '=)))
           (data-name (IF has-alias (CADR case) (IF (LISTP data) (GENSYM "__h_data") data)))
           (case (IF has-alias (CDDR case) case))
           (symb (MACROEXPAND (CAR case)))
           (tail (CDR case))
           (defs ())
           (assigns ())
           (args ())
           (conds ())
           (=>found NIL)
           (is-ptr NIL))

      (WHEN (AND (ATOM symb) (EQUAL symb '*))
        (SETQ is-ptr T)
        (SETQ case (CDR case))
        (SETQ symb (MACROEXPAND (CAR case)))
        (SETQ tail (CDR case)))

      (COND ((AND (LISTP symb) (EQUAL (CAR symb) '\,)) ; tuple \,
             (WHEN (OR has-alias (NOT (EQL data data-name)))
               (PUSH `(auto ,data-name . ,(IF (LISTP data) `(FUNCTION ,data) data)) defs))
             ;; (PUSH `(set ,data-name ,data) assigns))
             
             (DOTIMES (i (1- (LENGTH symb))) 
               (LET ((arg (MACROEXPAND (NTH (1+ i) symb))))
                 (UNLESS (EQUAL arg '_)
                   (LET ((arg-name (make-match-h-arg-name match-id i))
                         (mem-name (LIST '$ data-name (make-data-h-member-name i))))
                     (IF (ATOM arg)
                         (PROGN
                           (PUSH `(const auto ,arg . (FUNCTION ,mem-name)) defs)
                           (SETF (GETF args arg) (INTERN (FORMAT NIL "PREV_CASE_~A" arg))))
                         (LET ((match-id (GENSYM "match")))
                           (PUSH `(auto ,arg-name . (FUNCTION ,mem-name)) defs)
                           (MULTIPLE-VALUE-BIND (in-data-name in-symb in-tail in-defs in-assigns in-args in-conds)
                               (match-case-h-details match-id arg-name (APPEND arg (LIST NIL)))
                             (SETQ defs (APPEND in-defs defs))
                             (SETQ assigns (APPEND in-assigns assigns))
                             (SETQ args (APPEND in-args args))
                             (WHEN in-conds (SETQ conds (IF conds `(and ,conds ,in-conds) in-conds))))))))))
             (IF (EQUAL (CAR tail) '=>)
                 (PROGN
                   (SETQ =>found T)
                   (SETQ conds (IF conds `(and ,conds ,(NTH 1 tail)) (NTH 1 tail))))
                 (SETQ conds (IF conds conds 'true))))

            ((AND (LISTP symb) (EQUAL (CAR symb) '\:)) ; list \:
             (WHEN (OR has-alias (NOT (EQL data data-name)))
               (PUSH `(auto ,data-name . ,(IF (LISTP data) `(FUNCTION ,data) data)) defs))
             ;;  (PUSH `(set ,data-name ,data) assigns))
             ;; (PUSH `((typeof ,data) ,data-name) defs)
             ;; (PUSH `(set ,data-name ,data) assigns))

             (LET ((el-type (CADR symb)))
               (PUSH `(auto __h_has_len .
                            (FUNCTION ((<> has len List ,el-type) ,data-name ,(1- (LENGTH (CDDR symb))))))
                 defs)
               ;; (PUSH `((typeof ((<> has len List ,el-type) ,data-name ,(1- (LENGTH (CDDR symb))))) __h_has_len) defs)
               ;; (PUSH `(set __h_has_len ((<> has len List ,el-type) ,data-name ,(1- (LENGTH (CDDR symb))))) assigns)
               (SETQ conds `(== __h_has_len ,(- (LENGTH symb) 3)))
               (DOTIMES (i (- (LENGTH symb) 2))
                 (LET ((arg (MACROEXPAND (NTH (+ i 2) symb))))
                   (UNLESS (EQUAL arg '_)
                     (LET ((arg-name (make-match-h-arg-name match-id i))
                           (mem-name (IF (< i (- (LENGTH symb) 3))
                                         (LIST '$ `((<> nth List ,el-type) ,i ,data-name)
                                               '__h_data
                                               'Just
                                               (make-data-h-member-name 0))
                                         `((<> drop List ,el-type) ,i ,data-name))))
                       (IF (ATOM arg)
                           (PROGN
                             (PUSH `((typeof ,mem-name) ,arg) defs)
                             (PUSH `(set ,arg ,mem-name) assigns)
                             (SETF (GETF args arg) (INTERN (FORMAT NIL "PREV_CASE_~A" arg))))
                           (LET ((match-id (GENSYM "match")))
                             (PUSH `((typeof ,mem-name) ,arg-name) defs)
                             (PUSH `(set ,arg-name ,mem-name) assigns)
                             (MULTIPLE-VALUE-BIND (in-data-name in-symb in-tail in-defs in-assigns in-args in-conds)
                                 (match-case-h-details match-id arg-name (APPEND arg (LIST NIL)))
                               (SETQ defs (APPEND in-defs defs))
                               (SETQ assigns (APPEND in-assigns assigns))
                               (SETQ args (APPEND in-args args))
                               (WHEN in-conds (SETQ conds (IF conds `(and ,conds ,in-conds) in-conds))))))))))
               (IF (EQUAL (CAR tail) '=>)
                   (PROGN
                     (SETQ =>found T)
                     (SETQ conds (IF conds `(and ,conds ,(NTH 1 tail)) (NTH 1 tail))))
                   (SETQ conds (IF conds conds 'true)))))

            (T (WHEN (OR has-alias (NOT (EQL data data-name)))
                 (PUSH `(auto ,data-name . ,(IF (LISTP data) `(FUNCTION ,data) data)) defs))
               ;; (PUSH `(set ,data-name ,data) assigns))

               (DOTIMES (i (1- (LENGTH tail))) ; data type
                 (LET ((arg (MACROEXPAND (NTH (1+ i) case))))
                   (UNLESS =>found
                     (IF (EQUAL arg '=>)
                         (PROGN
                           (SETQ =>found T)
                           (SETQ conds (IF conds `(and ,conds ,(NTH (+ i 2) case)) (NTH (+ i 2) case))))
                         (UNLESS (EQUAL arg '_)
                           (LET ((arg-name (make-match-h-arg-name match-id i))
                                 (mem-name (LIST '$
                                                 (LIST (IF is-ptr '-> '$) data-name '__h_data)
                                                 symb
                                                 (make-data-h-member-name i))))
                             (IF (ATOM arg)
                                 (PROGN
                                   ;; (PUSH `((typeof ,mem-name) ,arg) defs)
                                   ;; (PUSH `(set ,arg ,mem-name) assigns)
                                   (PUSH `(auto ,arg . ,(IF (LISTP mem-name) `(FUNCTION ,mem-name) mem-name)) defs)

                                   (SETF (GETF args arg) (INTERN (FORMAT NIL "PREV_CASE_~A" arg))))
                                 (LET ((match-id (GENSYM "match")))
                                   ;; (PUSH `((typeof ,mem-name) ,arg-name) defs)
                                   ;; (PUSH `(set ,arg-name ,mem-name) assigns)
                                   (PUSH `(auto ,arg-name . ,(IF (LISTP mem-name) `(FUNCTION ,mem-name) mem-name)) defs)

                                   (MULTIPLE-VALUE-BIND (in-data-name in-symb in-tail in-defs in-assigns in-args in-conds)
                                       (match-case-h-details match-id arg-name (APPEND arg (LIST NIL)))
                                     (SETQ defs (APPEND in-defs defs))
                                     (SETQ assigns (APPEND in-assigns assigns))
                                     (SETQ args (APPEND in-args args))
                                     (WHEN in-conds (SETQ conds (IF conds `(and ,conds ,in-conds) in-conds))))))
                             ))))))))
      
      (WHEN (OR (AND =>found (LISTP symb) (/= (LENGTH case) 4))
              (AND =>found (ATOM symb) (< (LENGTH case) 4))
              (AND (NULL =>found) (LISTP symb) (/= (LENGTH case) 2))
              (AND (NULL =>found) (ATOM symb) (< (LENGTH case) 2)))
        (ERROR (FORMAT NIL "match case wrong definition: ~A" case)))

      (UNLESS (EQUAL symb 'default)
        (WHEN (ATOM symb)
          (SETQ conds (IF (AND conds (EQUAL conds 'true))
                          `(== (,(IF is-ptr '-> '$) ,data-name __h_ctor) ,(make-data-h-type-name symb))
                          (IF conds
                              `(and (== (,(IF is-ptr '-> '$) ,data-name __h_ctor) ,(make-data-h-type-name symb)) ,conds)
                              `(== (,(IF is-ptr '-> '$) ,data-name __h_ctor) ,(make-data-h-type-name symb)))))))

      (VALUES data-name symb tail defs assigns args conds))))

(DEFMACRO match* (data cases is-io prev-args)
  (IF (NULL cases)
      `($$$)
      (LET* ((match-id (GENSYM "match"))
             (case (CAR cases)))
        (MULTIPLE-VALUE-BIND (data-name symb tail defs assigns args conds)
            (match-case-h-details match-id data case)

          ;; (LET ((filtered-prev-args ()))
          ;;   (DOTIMES (i (LENGTH args))
          ;;     (WHEN (= 0 (REM i 2)) (REMF prev-args (NTH i args))))
          ;;   (DOTIMES (i (LENGTH prev-args))
          ;;     (WHEN (= 0 (REM i 2))
          ;;       (PUSH (LIST (NTH i prev-args) (GETF prev-args (NTH i prev-args))) filtered-prev-args)))
          
          `(,(IF is-io 'let 'letn) ,(REVERSE defs)
             ,(IF (AND assigns conds)
                  (LET ((ctor-cond (CAR conds)))
                    (IF (AND (SYMBOLP ctor-cond) (EQUAL ctor-cond 'and))
                        `(if ,(CADR conds) (block ,@(REVERSE assigns)))
                        `(if ,conds (block ,@(REVERSE assigns)))))
                  `(block ,@(REVERSE assigns)))
             ;; (where ,(REVERSE filtered-prev-args)
             ,(IF conds
                  `(letn ((bool __h_case_result . (FUNCTION ,conds)))
                     ,(APPEND
                       `(,(IF is-io 'if '?) __h_case_result ,(CAR (LAST case)))
                       (IF (CDR cases)
                           `((match* ,data-name ,(CDR cases) ,is-io ,args))
                           '())))
                  (CAR (LAST case))))))))

;; match with required default value or void
(DEFMACRO match (data &REST cases)
  `(match* ,data ,cases NIL NIL))

;; match with optional default case
(DEFMACRO io (data &REST cases)
  `(match* ,data ,cases T NIL))
