;;;; C++ language macros

(DEFMACRO using (namespace &REST resolution)
  (IF (EQL namespace 'namespace)
      `(code '{ using ,namespace
             (code ,(FORMAT NIL "~{~A~^::~}" resolution))
             (code ";") })
      `(code '{ using
             (code ,(FORMAT NIL "~A::~{~A~^::~}" namespace resolution))
             (code ";") })))

(DEFMACRO $$ (&REST resolution)
  `(code ,(FORMAT NIL "~{~A~^::~}" resolution)))

(DEFMACRO t<> (name &REST templates)
  `(code '{ ,name (code ,(FORMAT NIL "<~{~A~^, ~}>"
                                 (MAPCAR #'(LAMBDA (x)
                                             (IF (AND (LISTP x) (EQL (CAR x) '$$))
                                                 (FORMAT NIL "~{~A~^::~}" (CDR x))
                                                 x))
                                         templates)))
         }))
