(in-package :cicili)

(defun find-attr (spec attr)
  (let ((atts (attrs spec)))
    (find attr atts :test #'(lambda (at kv) (when (key-eq at (car kv)) kv)))))

(defun assign-check (left right)
  (let ((left-type (deep-typeof "" left)))
    (format t "CHECKLEFT ~A~%" left-type)
    (if left-type
        (unless (modifier left-type) 
          (let ((left-origin (deep-typeof (typeof left-type))))
            (when (and left-origin (key-eq (construct left-origin) '|@STRUCT|) (find-attr left-origin '|non-copy|))
              (error (format nil "non-copy struct assignment for: ~A~%  by: ~A~%  inside: ~A~%" left right *function-spec*)))))
        (when right
          (let ((right-type (deep-typeof "" right)))
            (format t "CHECKRIGHT ~A~%" right-type)
            (when right-type
              (unless (modifier right-type) 
                (let ((right-origin (deep-typeof (typeof right-type))))
                  (when (and right-origin (key-eq (construct right-origin) '|@STRUCT|) (find-attr right-origin '|non-copy|))
                    (error (format nil "non-copy struct assignment for: ~A~%  by: ~A~%  inside: ~A~%" left right *function-spec*)))))))))))
