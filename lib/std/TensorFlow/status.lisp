
(DEFMACRO status-header ()
  `(ghost
       (struct Status
         (member TF_Status * ptr))

     (decl) (func Status->new ())
     (decl) (method Status->free ())
     (decl) (method Status->code () (out TF_Code))
     (decl) (method Status->message () (out const char *))
     (decl) (method Status->ok () (out bool))
     ))

(DEFMACRO status-source ()
  `(ghost
       (func Status->new ()
             (let ((Status * status . #'(malloc (sizeof Status))))
               (set ($ status ptr) (TF_NewStatus))
               (return status)))

     (method Status->free ()
             (TF_DeleteStatus ($ this ptr))
             (free this))

     (method Status->code () (out TF_Code)
             (return (TF_GetCode ($ this ptr))))

     (method Status->message () (out const char *)
             (return (TF_Message ($ this ptr))))

     (method Status->ok () (out bool)
             (return (== (TF_GetCode ($ this ptr)) TF_OK)))
     ))

