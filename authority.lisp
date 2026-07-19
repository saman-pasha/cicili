(in-package :cicili)

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
