;;;; C++ language macros

(DEFMACRO t<> (name &REST templates)
  (LET* ((tmps templates)
         (parts (LOOP FOR r IN tmps
                      WITH l = (1- (LENGTH tmps))
                      FOR i FROM 0 TO l
                      COLLECT (LET ((p (IF (AND (LISTP r) (EQL (CAR r) '$$))
                                           (MACROEXPAND `($$ ,@(CDR r)))
                                           r)))
                                (IF (< i l) (LIST p ",") (LIST p))))))
    `(code '{ ,name #\< (code ',(APPLY #'APPEND parts)) #\> })))

(DEFMACRO $$ (&REST resolution)
  (LET* ((res resolution)
         (parts (LOOP FOR r IN res
                      WITH l = (1- (LENGTH res))
                      FOR i FROM 0 TO l
                      COLLECT (LET ((p (IF (AND (LISTP r) (EQL (CAR r) 't<>))
                                           (MACROEXPAND `(t<> ,@(CDR r)))
                                           r)))
                                (IF (< i l) (LIST p "::") (LIST p))))))
    `(code ',(APPLY #'APPEND parts))))

(DEFMACRO using (namespace &REST resolution)
  (LET ((res (MACROEXPAND `($$ ,@resolution))))
    (IF (EQL namespace 'namespace)
        `(code '{ using ,namespace ,res ";" })
        `(code '{ using 'namespace ,res ";" }))))

(DEFMACRO extern-c (&REST body)
  `((code '{ extern ,(FORMAT NIL "~S" "C") })
    (block ,@body)))
