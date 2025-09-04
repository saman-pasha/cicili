(in-package :cicili)

(defun format-type-value (const typeof modifier const-ptr name array-def default anonymous
                                lvl globals parent-spec &optional defer)
  (when anonymous (setq name (format nil "/* ~A */" name)))
  (let ((ns (multiple-value-list
                (format-type const typeof modifier const-ptr name array-def anonymous lvl globals parent-spec))))

    (when defer
      (output " ")
      (set-ast-line (output "__attribute__(("))
      (set-ast-line (output "__cleanup__("))
      (compile-form defer (1+ lvl) globals parent-spec)
      (set-ast-line (output ")))")))
    
    (when (and (not (null default)) (not (key-eq (construct default) '|@NIL|)))
      (output " ")
      (set-ast-line (output "= "))

      (let* ((line-n   (nth 0 ns))
             (col-n    (nth 1 ns))
             (ast      (prev-ast-by-key< (gethash 'key-def (keys default))))
             (info     (getf ast 'info))
             ;; (dump     (reverse (getf ast 'dump)))
             (spec-key (ast-key< line-n col-n))
             (res      (gethash 'res-def (keys default))))
        (setf (gethash 'key-def (keys default)) spec-key)
        (when *debug-resolve*
          (display "resolving def:" line-n col-n "RES:" res "INFO:" info #\Newline)) ; dump #\Newline
        
        (cond ((null ast)
	           (compile-form default (1+ lvl) globals parent-spec))
              (res
               (set-ast-line (output "~A" res))
               (set-ast-line (output "("))
               (compile-form default (1+ lvl) globals parent-spec)
               (output ")"))
              ((str:containsp "incompatible pointer types" info)
               (let* ((result (multiple-value-list (ppcre:scan-to-strings *trait-regex* info)))
                      (matches (cadr result)))
                 (let ((resu (find-trait (elt matches 1) (elt matches 0))))
                   (if resu
                       (progn
                         (setf (gethash 'res-def (keys default)) resu)
                         (set-ast-line (output "~A" resu))
                         (set-ast-line (output "("))
                         (compile-form default (1+ lvl) globals parent-spec)
                         (output ")"))
                       (error (format nil "undefined trait: ~A for ~A"
                                      (format nil "to~A or to_~A" (elt matches 0) (elt matches 0)) result))))))
              ((str:containsp "format specifies type" info)
               (let* ((result (multiple-value-list (ppcre:scan-to-strings *trait-regex* info)))
                      (matches (cadr result)))
                 (let ((resu (find-trait (elt matches 0) (elt matches 1))))
                   (if (gethash (intern resu) *globals*)
                       (progn
                         (setf (gethash 'res-def (keys default)) resu)
                         (set-ast-line (output "~A" resu))
                         (set-ast-line (output "("))
                         (compile-form default (1+ lvl) globals)
                         (output ")"))
                       (error (format nil "undefined trait: ~A for ~A"
                                      (format nil "to~A or to_~A" (elt matches 1) (elt matches 1)) default))))))
              (t (compile-form default (1+ lvl) globals parent-spec)))))))

(defun compile-symbol (spec symbol)
  (let* ((line-n   (funcall *line-num* 0))
         (col-n    (funcall *col-num* 0))
         (ast      (prev-ast-by-key< (gethash 'key-sym (keys spec))))
         (info     (getf ast 'info))
         (spec-key (ast-key< line-n col-n))
         (res      (gethash 'res-sym (keys spec)))
         (sym-name  (symbol-name symbol))
         (has-slash (and (> (length sym-name) 1) (str:starts-with-p "/" sym-name))))
    
    ;; removes / form begining of global resolution
    (when has-slash (setq symbol (intern (str:substring 1 t sym-name))))
    
    (setf (gethash 'key-sym (keys spec)) spec-key)
    (when *debug-resolve*
      (display "resolving symbol:" line-n col-n "RES:" res "INFO:" info #\Newline))
    (if (null ast)
        (let ((m-name (unique spec)))
          (if (and (null has-slash) (gethash m-name *globals*))
              (progn
                (set-ast-line (output "~A " m-name))
                (setf (gethash 'res-sym (keys spec)) (format nil "~A " m-name)))
              (set-ast-line (output "~A " symbol))))
        (if info
            (cond ((str:containsp "take the address with &" info)
                   (setf *more-run* t)
                   (let ((resu (format nil "\&~A" symbol)))
                     (setf (gethash 'res-sym (keys spec)) resu)
                     (set-ast-line (output resu))))
                  ((str:containsp "passing 'typeof ((" info)
                   (let ((resu (format nil "\&~A" symbol)))
                     (setf (gethash 'res-sym (keys spec)) resu)
                     (set-ast-line (output resu))))
                  ((str:containsp "__ciciliL_" info)
                   (let ((resu (format nil "\&~A" symbol)))
                     (setf (gethash 'res-sym (keys spec)) resu)
                     (set-ast-line (output resu))))
                  ((str:containsp "expression result unused" info)
                   (let ((resu (format nil "~A " symbol)))
                     (setf (gethash 'res-sym (keys spec)) resu)
                     (set-ast-line (output resu))))
                  ((str:containsp "member reference type" info)
                   (let ((resu (format nil "~A " symbol)))
                     (setf (gethash 'res-sym (keys spec)) resu)
                     (set-ast-line (output resu))))
                  ((str:containsp "no member named" info)
                   (set-ast-line (output "~A " symbol))) ; ignore for ->
                  ((str:containsp "format specifies type" info)
                   (set-ast-line (output "~A " symbol))) ; ignore for arg
                  ((str:containsp "incompatible pointer types" info)
                   (set-ast-line (output "~A " symbol))) ; ignore for arg
                  ((str:containsp "expected identifier" info)
                   (set-ast-line (output "~A " symbol))) ; ignore for ->
                  ((str:containsp "use of undeclared identifier" info)
                   (let ((m-name (unique spec)))
                     (if (gethash m-name *globals*)
                         (progn
                           (set-ast-line (output "~A " m-name))
                           (setf (gethash 'res-sym (keys spec)) (format nil "~A " m-name)))
                         (error (format nil "cicili: symbol: ~A. ~A~%~A" spec-key info spec)))))
                  ((str:containsp "call to undeclared function" info)
                   (let ((m-name (unique spec)))
                     (if (gethash m-name *globals*)
                         (progn
                           (set-ast-line (output "~A " m-name))
                           (setf (gethash 'res-sym (keys spec)) (format nil "~A " m-name)))
                         (error (format nil "cicili: symbol: ~A. ~A~%~A" spec-key info spec)))))
                  (t (error (format nil "cicili: atom: ~A. ~A~%~A" spec-key info spec))))
            (if (null res)
                (let ((m-name (unique spec)))
                  (if (and (null has-slash) (gethash m-name *globals*))
                      (progn
                        (set-ast-line (output "~A " m-name))
                        (setf (gethash 'res-sym (keys spec)) (format nil "~A " m-name)))
                      (set-ast-line (output "~A " symbol))))
                (set-ast-line (output res)))))))

(defun compile-$ (spec lvl globals parent-spec)
  (with-slots ((receiver name) (member default)) spec
    (let* ((line-n     (funcall *line-num* 0))
           (col-n      (funcall *col-num* 0))
           (begin-ast  (prev-ast-by-key< (gethash 'key-$ (keys spec))))        ; --
           (ptr-ast    (prev-ast-by-key< (getf begin-ast 'ptr)))
           (mtd-ast    (prev-ast-by-key< (getf begin-ast 'mtd)))
           (end-ast    (prev-ast-by-key< (getf begin-ast 'end)))
           (begin-info (getf begin-ast 'info)) ; --
           ;; (begin-dump (reverse (getf begin-ast 'dump))) ; --
           
           (ptr-info   (getf ptr-ast   'info))
           (mtd-info   (getf mtd-ast   'info))
           (end-info   (getf end-ast   'info))
           (spec-key   (ast-key< line-n col-n))
           (res        (gethash 'res-$ (keys spec))))
      (setf (gethash 'key-$ (keys spec)) spec-key)
      (when *debug-resolve*
        (display "resolving .:" line-n col-n "RES:" res "INFO:"
                 begin-info ptr-info mtd-info end-info #\Newline)) ; begin-dump #\Newline
      
      (cond (res
             (set-ast-line (output "("))
             (compile-form receiver (1+ lvl) globals spec)
             (set-ast-line (output res))
             (compile-form member (1+ lvl) globals spec)
             (output ")"))

            ((or (null *resolve*) ; function without resolver (inline in header or attr resolve #f)
               (null begin-ast)  ; access member by instance default for first run
               (and (null begin-info) (null ptr-info) (null mtd-info) (null end-info)))
             (set-ast-line (output "("))
             (compile-form receiver (1+ lvl) globals spec)
             (setf (getf (gethash (ast-key< line-n col-n) (nth 0 *ast-lines*)) 'ptr)
                   (ast-key< (funcall *line-num* 0) (funcall *col-num* 0)))
             (set-ast-line (output ". "))
             (setf (getf (gethash (ast-key< line-n col-n) (nth 0 *ast-lines*)) 'mtd)
                   (ast-key< (funcall *line-num* 0) (funcall *col-num* 0)))
             (compile-form member (1+ lvl) globals spec)
             (setf (getf (gethash (ast-key< line-n col-n) (nth 0 *ast-lines*)) 'end)
                   (ast-key< (funcall *line-num* 0) (funcall *col-num* 0)))
             (output ")"))

            ((and ptr-info (str:containsp "member reference type" ptr-info) (str:containsp "is a pointer" ptr-info))
             (let ((resu "->"))
               (setf *more-run* t)
               (setf (gethash 'res-$ (keys spec)) resu)
               (set-ast-line (output "("))
               (compile-form receiver (1+ lvl) globals spec)
               (set-ast-line (output resu))
               (compile-form member (1+ lvl) globals spec)
               (output ")")))

            ((and mtd-info (str:containsp "expected identifier" mtd-info))
             (error (format nil "cicili\: bad member naming (c keywords are reserved, const, register, ...) ~A. ~A~%~A"
                            spec-key (or mtd-info ptr-info begin-info) spec)))
            
            (t (error (format nil "cicili\: unresolved member reference type ~A. ~A~%~A"
                              spec-key (or mtd-info ptr-info begin-info) spec)))))))

(defun compile--> (spec lvl globals parent-spec)
  (with-slots ((receiver name) (method default) (args body)) spec
    (let* ((line-n     (funcall *line-num* 0))
           (col-n      (funcall *col-num* 0))
           (begin-ast  (prev-ast-by-key< (gethash 'key--> (keys spec))))        ; --
           (ptr-ast    (prev-ast-by-key< (getf begin-ast 'ptr)))
           (mtd-ast    (prev-ast-by-key< (getf begin-ast 'mtd)))
           (end-ast    (prev-ast-by-key< (getf begin-ast 'end)))
           (begin-info (getf begin-ast 'info)) ; --
           ;; (begin-dump (reverse (getf begin-ast 'dump))) ; --
           
           (ptr-info   (getf ptr-ast   'info))
           (mtd-info   (getf mtd-ast   'info))
           (end-info   (getf end-ast   'info))
           (spec-key   (ast-key< line-n col-n))
           (res        (gethash 'res--> (keys spec))))
      (setf (gethash 'key--> (keys spec)) spec-key)
      (when *debug-resolve*
        (display "resolving ->:" line-n col-n "RES:" res "INFO:" 
                 begin-info ptr-info mtd-info end-info #\Newline)) ; begin-dump #\Newline
      
      (cond (res
             (if (or (str:starts-with-p
                         (str:replace-first "\\(.*" "" (make-shared-name (name receiver) "") :regex t)
                       res)
                   (str:starts-with-p
                       (str:replace-first "\\(.*" "" (make-shared-name (unique receiver) "") :regex t)
                     res)); was shared or method
                 (progn
                   (set-ast-line (output res))
                   (output "(")
                   (compile-args (default args) lvl globals spec nil)
                   (setf (getf (gethash (ast-key< line-n col-n) (nth 0 *ast-lines*)) 'end)
                         (ast-key< (funcall *line-num* 0) (funcall *col-num* 0)))
                   (output ")"))
                 (progn
                   (set-ast-line (output res))
                   (output "(")
                   (compile-form receiver (1+ lvl) globals spec)
                   (compile-args (default args) lvl globals spec t)
                   (setf (getf (gethash (ast-key< line-n col-n) (nth 0 *ast-lines*)) 'end)
                         (ast-key< (funcall *line-num* 0) (funcall *col-num* 0)))
                   (output ")"))))
            
            ((or (null *resolve*) ; function without resolver (inline in header or attr resolve #f)
               (null begin-ast)  ; access member by pointer default for first run
               (and (null begin-info) (null ptr-info) (null mtd-info) (null end-info)))
             (set-ast-line (output "("))
             (compile-form receiver (1+ lvl) globals spec)
             (setf (getf (gethash (ast-key< line-n col-n) (nth 0 *ast-lines*)) 'ptr)
                   (ast-key< (funcall *line-num* 0) (funcall *col-num* 0)))
             (set-ast-line (output "-> "))
             (setf (getf (gethash (ast-key< line-n col-n) (nth 0 *ast-lines*)) 'mtd)
                   (ast-key< (funcall *line-num* 0) (funcall *col-num* 0)))
             (compile-form method (1+ lvl) globals spec)
             (compile-args (default args) lvl globals spec t :sep "-> ")
             (setf (getf (gethash (ast-key< line-n col-n) (nth 0 *ast-lines*)) 'end)
                   (ast-key< (funcall *line-num* 0) (funcall *col-num* 0)))
             (output ")"))
            
            ((and ptr-info (str:containsp "expected ')'" ptr-info))
             (let ((resu (make-shared-name (name receiver) (name method))))
               (if (gethash (intern resu) *globals*)
                   (progn
                     (setf *more-run* t)
                     (setf (gethash 'res--> (keys spec)) resu)
                     (set-ast-line (output "~A" resu))
                     (output "(")
                     (compile-args (default args) lvl globals spec nil)
                     (output ")"))
                   (let ((m-name (make-shared-name (unique receiver) (name method))))
                     (if (gethash (intern m-name) *globals*)
                         (progn
                           (setf *more-run* t)
                           (setf (gethash 'res--> (keys spec)) m-name)
                           (set-ast-line (output "~A" m-name))
                           (output "(")
                           (compile-args (default args) lvl globals spec nil)
                           (output ")"))
                         (error (format nil "undefined function: ~A" spec)))))))
            
            ;; ((and ptr-info (str:containsp "member reference type" ptr-info) (str:containsp "is not a pointer" ptr-info))
            ;;  (setf *more-run* t)
            ;;  (set-ast-line (output "("))
            ;;  (compile-form receiver (1+ lvl) globals spec)
            ;;  (setf (getf (gethash (ast-key< line-n col-n) (nth 0 *ast-lines*)) 'ptr)
            ;;        (ast-key< (funcall *line-num* 0) (funcall *col-num* 0)))
            ;;  (set-ast-line (output ". "))
            ;;  (setf (getf (gethash (ast-key< line-n col-n) (nth 0 *ast-lines*)) 'mtd)
            ;;        (ast-key< (funcall *line-num* 0) (funcall *col-num* 0)))
            ;;  (compile-form method (1+ lvl) globals spec)
            ;;  (compile-args (default args) lvl globals spec t :sep ". ")
            ;;  (setf (getf (gethash (ast-key< line-n col-n) (nth 0 *ast-lines*)) 'end)
            ;;        (ast-key< (funcall *line-num* 0) (funcall *col-num* 0)))
            ;;  (output ")"))
            
            ((and ptr-info (str:containsp "expected expression" ptr-info))
             (if (key-eq (construct receiver) '|@ATOM|) 
                 (let ((resu (make-method-name (name receiver) (name method))))
                   (if (gethash (intern resu) *globals*)
                       (progn
                         (setf *more-run* t)               
                         (setf (gethash 'res--> (keys spec)) resu)
                         (set-ast-line (output resu))
                         (output "(")
                         (compile-form receiver (1+ lvl) globals spec)
                         (compile-args (default args) lvl globals spec t)
                         (output ")"))
                       (let ((m-name (make-method-name (unique receiver) (name method))))
                         (if (gethash (intern m-name) *globals*)
                             (progn
                               (setf *more-run* t)               
                               (setf (gethash 'res--> (keys spec)) m-name)
                               (set-ast-line (output m-name))
                               (output "(")
                               (compile-form receiver (1+ lvl) globals spec)
                               (compile-args (default args) lvl globals spec t)
                               (output ")"))
                             (error (format nil "undefined function: ~A" spec))))))
                 (progn
                   (set-ast-line (output "("))
                   (compile-form receiver (1+ lvl) globals spec)
                   (setf (getf (gethash (ast-key< line-n col-n) (nth 0 *ast-lines*)) 'ptr)
                         (ast-key< (funcall *line-num* 0) (funcall *col-num* 0)))
                   (set-ast-line (output "->"))
                   (setf (getf (gethash (ast-key< line-n col-n) (nth 0 *ast-lines*)) 'mtd)
                         (ast-key< (funcall *line-num* 0) (funcall *col-num* 0)))
                   (compile-form method (1+ lvl) globals spec)
                   (compile-args (default args) lvl globals spec t)
                   (setf (getf (gethash (ast-key< line-n col-n) (nth 0 *ast-lines*)) 'end)
                         (ast-key< (funcall *line-num* 0) (funcall *col-num* 0)))
                   (output ")"))))
            
            ((and end-info (str:containsp "too few arguments" end-info))
             (error (format nil "cicili\: call: ~A" end-info)))
            
            ((and mtd-info (str:containsp "no member named" mtd-info))
             (let* ((matches     (ppcre:all-matches-as-strings "'(struct\\s+)?\\w+'" mtd-info))
                    (method      (car matches))
                    (parts       (str:split #\Space (cadr matches)))
                    (resu        (make-method-name (string-right-trim "'" (cadr parts)) (string-trim "'" method))))
               (if (string-equal (car parts) "'struct")
                   (if (gethash (intern resu) *globals*)
                       (progn
                         (setf *more-run* t)               
                         (setf (gethash 'res--> (keys spec)) resu))
                       (error (format nil "undefined function: ~A" spec)))
                   (error (format nil "cicili\: nnn unresolved method reference type ~A. ~A~%~A"
                                  spec-key (or mtd-info ptr-info begin-info) spec)))
               (set-ast-line (output "~A" resu))
               (output "(")
               (compile-form receiver lvl globals spec)
               (compile-args (default args) lvl globals spec t)
               (output ")")))
            
            ((and mtd-info (str:containsp "expected identifier" mtd-info))
             (error (format nil "cicili\: bad method naming (c keywords are reserved, const, register, ...) ~A. ~A~%~A"
                            spec-key (or mtd-info ptr-info begin-info) spec)))
            (t (error (format nil "cicili\: unresolved method reference type ~A. ~A~%~A"
                              spec-key (or mtd-info ptr-info begin-info) spec)))))))

(defun compile-=> (spec lvl globals parent-spec)
  (with-slots ((receiver name) (member default) (args body)) spec
    (let* ((line-n     (funcall *line-num* 0))
           (col-n      (funcall *col-num* 0))
           (begin-ast  (prev-ast-by-key< (gethash 'key-$ (keys spec))))        ; --
           (ptr-ast    (prev-ast-by-key< (getf begin-ast 'ptr)))
           (mtd-ast    (prev-ast-by-key< (getf begin-ast 'mtd)))
           (end-ast    (prev-ast-by-key< (getf begin-ast 'end)))
           (begin-info (getf begin-ast 'info)) ; --
           ;; (begin-dump (reverse (getf begin-ast 'dump))) ; --
           
           (ptr-info   (getf ptr-ast   'info))
           (mtd-info   (getf mtd-ast   'info))
           (end-info   (getf end-ast   'info))
           (spec-key   (ast-key< line-n col-n))
           (res        (gethash 'res-$ (keys spec))))
      (setf (gethash 'key-$ (keys spec)) spec-key)
      (when *debug-resolve*
        (display "resolving =>:" line-n col-n "RES:" res "INFO:"
                 begin-info ptr-info mtd-info end-info #\Newline)) ; begin-dump #\Newline
      
      (cond (res
             (set-ast-line (output "("))
             (compile-form receiver (1+ lvl) globals spec)
             (set-ast-line (output res))
             (compile-form member (1+ lvl) globals spec)
             (output ")"))
            ((or (null *resolve*) ; function without resolver (inline in header or attr resolve #f)
               (null begin-ast)  ; access member by instance default for first run
               (and (null begin-info) (null ptr-info) (null mtd-info) (null end-info)))
             (set-ast-line (output "("))
             (compile-form receiver (1+ lvl) globals spec)
             (setf (getf (gethash (ast-key< line-n col-n) (nth 0 *ast-lines*)) 'ptr)
                   (ast-key< (funcall *line-num* 0) (funcall *col-num* 0)))
             (set-ast-line (output ". "))
             (setf (getf (gethash (ast-key< line-n col-n) (nth 0 *ast-lines*)) 'mtd)
                   (ast-key< (funcall *line-num* 0) (funcall *col-num* 0)))
             (compile-form member (1+ lvl) globals spec)
             (set-ast-line (output "("))
             (compile-args (default args) lvl globals spec nil)
             (setf (getf (gethash (ast-key< line-n col-n) (nth 0 *ast-lines*)) 'end)
                   (ast-key< (funcall *line-num* 0) (funcall *col-num* 0)))
             (output "))"))
            ((and (str:containsp "member reference type" ptr-info) (str:containsp "is a pointer" ptr-info))
             (let ((resu "->"))
               (setf *more-run* t)
               (setf (gethash 'res-$ (keys spec)) resu)
               (set-ast-line (output "("))
               (compile-form receiver (1+ lvl) globals spec)
               (set-ast-line (output resu))
               (compile-form member (1+ lvl) globals spec)
               (set-ast-line (output "("))
               (compile-args (default args) lvl globals spec nil)
               (output "))")))
            (t (error (format nil "cicili\: unresolved member function type ~A. ~A~%~A"
                              spec-key (or mtd-info ptr-info begin-info) spec)))))))

(defun compile-args (args lvl globals parent-spec comma-first &key (no-comma nil) (sep ", "))
  (when (and (null no-comma) comma-first (> (length args) 0)) (output sep))
  (loop for arg in args
        with l = (1- (length args))
        for i from 0 to l
        do (progn
             (let* ((line-n   (funcall *line-num* 0))
                    (col-n    (funcall *col-num* 0))
                    (ast      (prev-ast-by-key< (gethash 'key-arg (keys arg))))
                    (info     (getf ast 'info))
                    ;; (dump     (reverse (getf ast 'dump)))
                    (spec-key (ast-key< line-n col-n))
                    (res      (gethash 'res-arg (keys arg))))
               (setf (gethash 'key-arg (keys arg)) spec-key)
               (when *debug-resolve*
                 (display "resolving arg:" line-n col-n "RES:" res "INFO:" info #\Newline)) ; dump #\Newline
               
               (cond ((null ast)
	                  (compile-form arg lvl globals parent-spec))
                     (res
                      (set-ast-line (output "~A" res))
                      (set-ast-line (output "("))
                      (compile-form arg lvl globals parent-spec)
                      (output ")"))
                     ((str:containsp "incompatible pointer types" info)
                      (let* ((result (multiple-value-list (ppcre:scan-to-strings *trait-regex* info)))
                             (matches (cadr result)))
                        (if matches
                            (let ((resu (find-trait (elt matches 0) (elt matches 1))))
                              (if resu
                                  (progn
                                    (setf (gethash 'res-arg (keys arg)) resu)
                                    (set-ast-line (output "~A" resu))
                                    (set-ast-line (output "("))
                                    (compile-form arg lvl globals parent-spec)
                                    (output ")"))
                                  (error (format nil "undefined trait: ~A for ~A"
                                                 (format nil "to~A or to_~A" (elt matches 1) (elt matches 1)) arg))))
                            (compile-form arg lvl globals parent-spec))))
                     ((str:containsp "format specifies type" info)
                      (let* ((result (multiple-value-list (ppcre:scan-to-strings *trait-regex* info)))
                             (matches (cadr result)))
                        (if matches
                            (let ((resu (find-trait (elt matches 1) (elt matches 0))))
                              (if resu
                                  (progn                                
                                    (setf (gethash 'res-arg (keys arg)) resu)
                                    (set-ast-line (output "~A" resu))
                                    (set-ast-line (output "("))
                                    (compile-form arg lvl globals parent-spec)
                                    (output ")"))
                                  (error (format nil "undefined trait: ~A for ~A"
                                                 (format nil "to~A or to_~A" (elt matches 0) (elt matches 0)) arg))))
                            (compile-form arg lvl globals parent-spec))))
                     ((str:containsp "member reference type" info)
                      (compile-form arg lvl globals parent-spec))
                     (t (compile-form arg lvl globals parent-spec))))
             (when (and (null no-comma) (< i l)) (output sep)))))

(defun compile-set (spec lvl globals parent-spec)
  (let ((items (default spec)))
    (loop for item in items
          with l = (length items)
          for i from 1 to l
          do (progn
               (compile-form (nth 0 item) (1+ lvl) globals spec)
               (output " ")

               (let* ((line-n   (funcall *line-num* 0))
                      (col-n    (funcall *col-num* 0))
                      (ast      (prev-ast-by-key< (gethash 'key-set (keys (nth 1 item)))))
                      (info     (getf ast 'info))
                      ;; (dump     (reverse (getf ast 'dump)))
                      (spec-key (ast-key< line-n col-n))
                      (res      (gethash 'res-set (keys (nth 1 item)))))
                 (setf (gethash 'key-set (keys (nth 1 item))) spec-key)
                 (when *debug-resolve*
                   (display "resolving set:" line-n col-n "RES:" res "INFO:" info #\Newline)) ; dump #\Newline
                 
                 (cond ((null ast)
                        (set-ast-line (output "= "))
	                    (compile-form (nth 1 item) (1+ lvl) globals spec))
                       (res
                        (set-ast-line (output "= "))
                        (set-ast-line (output "~A" res))
                        (set-ast-line (output "("))
                        (compile-form (nth 1 item) (1+ lvl) globals spec)
                        (output ")"))
                       ((str:containsp "incompatible pointer types" info)
                        (let* ((result (multiple-value-list (ppcre:scan-to-strings *trait-regex* info)))
                               (matches (cadr result)))
                          (let ((resu (find-trait (elt matches 1) (elt matches 0))))
                            (if resu
                                (progn
                                  (setf (gethash 'res-set (keys (nth 1 item))) resu)
                                  (set-ast-line (output "= "))
                                  (set-ast-line (output "~A" resu))
                                  (set-ast-line (output "("))
                                  (compile-form (nth 1 item) (1+ lvl) globals spec)
                                  (output ")"))
                                (error (format nil "undefined trait: ~A for ~A"
                                               (format nil "to~A or to_~A" (elt matches 0) (elt matches 0)) spec))))))
                       ((str:containsp "format specifies type" info)
                        (let* ((result (multiple-value-list (ppcre:scan-to-strings *trait-regex* info)))
                               (matches (cadr result)))
                          (let ((resu (find-trait (elt matches 0) (elt matches 1))))
                            (if resu
                                (progn
                                  (setf (gethash 'res-set (keys (nth 1 item))) resu)
                                  (set-ast-line (output "= "))
                                  (set-ast-line (output "~A" resu))
                                  (set-ast-line (output "("))
                                  (compile-form (nth 1 item) (1+ lvl) globals spec)
                                  (output ")"))
                                (error (format nil "undefined trait: ~A for ~A"
                                               (format nil "to~A or to_~A" (elt matches 1) (elt matches 1)) spec))))))
                       (t (set-ast-line (output "= "))
	                      (compile-form (nth 1 item) (1+ lvl) globals spec)))))

          (when (< i l)
            (output ";~%")
            (output "~&~A" (indent (- lvl 2)))))))

(defun find-trait (from to)
  (let ((resu (make-shared-name from (format nil "to~A" to))))
    (if (gethash (intern resu) *globals*)
        resu
        (progn
          (setq resu (make-shared-name from (format nil "to_~A" to)))
          (if (gethash (intern resu) *globals*)
              resu
              nil)))))
