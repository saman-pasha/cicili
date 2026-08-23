(in-package :cicili)

;; Peel a type down to the bare name used as the "<member>/<type>" symbol-table
;; key. A type reaches here in several shapes:
;;   Mixed                          a plain symbol, already the name
;;                                  inline struct behind a multi-value return
;;                                  arrives
;; Anything else -- a specifier in particular -- is handed back untouched for the
;; caller to resolve further.
(defun peel-type-tag< (ty)
  (loop while (and ty (listp ty) (not (typep ty 'sp))) do
    (setq ty (if (and (cdr ty) (symbolp (car ty))
                      (or (key-eq (car ty) '|struct|) (key-eq (car ty) '|union|)))
                 (cadr ty)
                 (car ty))))
  ty)

;; deeply traverse spec tree to find lexeme id for a storage
;;; A member of a C++ base class, looked up by walking the bases.
;;;
;;; Members are keyed `member/Type', so an inherited one is simply under a
;;; different type than the one the expression names: ($ this w) inside Square
;;; asks for w/Square and the answer is w/Shape. This walks (bases) in
;;; declaration order, depth first, which is the order C++ itself resolves in
;;; -- the first base that has the member wins, and an ambiguous member in two
;;; bases is a C++ error to report rather than one to guess at here.
(defun member-in-bases< (member-name type-name)
  (when (symbolp type-name)
    (loop for base in (gethash type-name *struct-bases*)
          do (let ((hit (*gets* (intern (format nil "~A/~A" member-name base)))))
               (when hit (return hit))
               (let ((deeper (member-in-bases< member-name base)))
                 (when deeper (return deeper)))))))

(defun deep-storageof (id &optional spec)
  (let ((spec (if spec spec (*gets* id))))
    (if spec
        (let ((const-val (construct spec)))
          (cond ((eql const-val '|@ATOM|)
                 (if (key-eq (name spec) '|@SYMBOL|)
                     (*gets* (peel-type-tag< (default spec)))
                     spec))
                ((eql const-val '|@VAR|)   spec)
                ((eql const-val '|@PARAM|) spec)
                ((eql const-val '|@FUNC|)  spec)
                ((eql const-val '|@UNARY|)
                 (cond ((eql (name spec) '&) nil)
                       ((eql (name spec) '*)
                        (let ((ty (deep-storageof id (default spec))))
                          (if ty
                              ;; The key carries the type as well as the name. A
                              ;; bare "cof/<name>" collided across every struct
                              ;; with a member of that name -- (cof ($ cell ptr))
                              ;; and (cof ($ ctx ptr)) came back as one storage,
                              ;; so moving one reported the other as moved.
                              (let* ((ty-type (peel-type-tag< (typeof ty)))
                                     (storage-id (intern (format nil "cof/~A/~A" (name ty)
                                                                 (if (typep ty-type 'sp) (name ty-type) ty-type))))
                                     (storage (*gets* storage-id)))
                                (if storage
                                    storage
                                    ;; The pointer can live on the TYPE rather than the variable:
                                    ;; (typedef a ref RefMaybe_int) leaves a RefMaybe_int variable
                                    ;; with no modifier of its own, and (cof it) is still a
                                    ;; dereference. combine-types folds the typedef's modifier into
                                    ;; the variable's -- deep-typeof alone would drop it.
                                    (let* ((ty-def (let ((n (peel-type-tag< (typeof ty))))
                                                     (when (symbolp n) (*gets* n))))
                                           (modifier
                                            (cond
                                              ;; combine only against a TYPEDEF that carries a modifier
                                              ;; of its own -- combining against the @STRUCT every other
                                              ;; type resolves to is an invalid combination
                                              ((and ty-def (eql (construct ty-def) '|@TYPEDEF|) (modifier ty-def))
                                               (modifier (combine-types ty-def ty)))
                                              ((modifier ty) (modifier ty))
                                              ;; A TYPE MAY BE AN EXPRESSION RATHER THAN A NAME, and then
                                              ;; the modifier is on whatever it resolves to. `match'
                                              ;; declares every binding it makes as
                                              ;; ((typeof ($ ($ v __h_data) Ctor __h_0_mem)) name), so a
                                              ;; field declared (a * pointer) gives a binding with no
                                              ;; modifier of its own and a star one step away. Without
                                              ;; this, (cof pointer) on such a binding fell through every
                                              ;; branch to "'cof not allowed" -- which is what the whole
                                              ;; haskell Arc does inside its lock.
                                              (t (let ((n (peel-type-tag< (typeof ty))))
                                                   (when (typep n 'sp)
                                                     (let ((resolved (deep-typeof "" n)))
                                                       (when resolved (modifier resolved))))))))
                                           (mod-val (cond
                                                      ;; a `ref' is a borrow. Dereferencing one YIELDS a
                                                      ;; move only when the pointee cannot be copied --
                                                      ;; the `*' case one line down already said so, and
                                                      ;; (cof p) on a ref-to-int is a read, not a move.
                                                      ((key-eq '|ref| modifier)  (when (is-non-copy (typeof ty)) '|move|))
                                                      ((key-eq '|***| modifier)  '|**|)
                                                      ((key-eq '|**|  modifier)  '|*|)
                                                      ((key-eq '|*|   modifier)  (when (is-non-copy (typeof ty)) '|move|))
                                                      ((is-non-copy (typeof ty)) '|move|)
                                                      (t (error (format nil "'cof not allowed for: ~A~%  in: ~A" ty spec)))))
                                           (ptr-mod (cond
                                                      ((null mod-val) nil)
                                                      ((key-eq '|move| mod-val) nil)
                                                      ((key-eq '|ref|  mod-val) nil)
                                                      (t (const-ptr ty))))
                                           (new-storage (make-specifier (name ty) (construct ty) (const ty) (typeof ty)
                                                                        mod-val ptr-mod (array-def ty)
                                                                        (default ty) (attrs ty))))
                                      (*puts* storage-id new-storage))))
                              nil)))
                       (t nil)))
                ((or (eql const-val '|@$|) (eql const-val '|@->|))
                 (let ((struct (deep-storageof id (name spec))))
                   (when struct
                     (let* ((ty (peel-type-tag< (typeof struct)))
                            (storage-id (intern (format nil "~A/~A" (default spec) ty)))
                            (storage (*gets* storage-id)))
                       (cond
                         (storage storage)
                         ;; a member of a C++ base class is under the BASE's
                         ;; name, not the one the expression used
                         ((member-in-bases< (default spec) (if (typep ty 'sp) (name ty) ty)))
                         (t
                          (let ((end-type (if (typep ty 'sp)
                                              (deep-typeof "" ty)
                                              (deep-typeof ty))))
                            (unless end-type (error "unknown struct type: ~A~%  accessed in: ~A~%" ty spec))
                            (setq storage-id (intern (format nil "~A/~A" (default spec)
                                                            (peel-type-tag< (typeof end-type)))))
                            (setq storage (*gets* storage-id))
                            ;; If the member still is not in the table, say so.
                            ;; Falling through to (construct nil) raised
                            ;; "no applicable method for CONSTRUCT (NIL)", which
                            ;; named neither the member nor the type.
                            (unless storage
                              (error "unknown member: ~A of type: ~A~%  accessed in: ~A~%"
                                     (default spec) (typeof end-type) spec))
                            (let ((new-storage (make-specifier storage-id (construct storage) (const storage) (typeof storage)
                                                               (modifier storage) (const-ptr storage) (array-def storage)
                                                               (default storage) (attrs storage))))
                              (*puts* storage-id new-storage)))))))))
                ;; a cast's STORAGE is its operand's -- the cast changes the
                ;; type, not what is being named. Both spellings behave alike.
                ((eql const-val '|@CAST|)    (deep-storageof id (default spec)))
                ((eql const-val '|@CPPCAST|) (deep-storageof id (default spec)))
                ((eql const-val '|@RETURN|) (deep-storageof id (default spec)))
                ((eql const-val '|@TYPEOF|)
                 (deep-storageof id  (default spec))
                 ;; (combine-types (deep-storageof-name id (cons (name spec) full-name) (default spec)) spec)
                 )
                (t nil)))
        nil)))

;; deeply traverse spec tree to find lexeme id for a type
;; type inference back-end
;; The function typedef behind a callee, or NIL when it is not one.
;;
;; A CALL THROUGH A FUNCTION POINTER IS NOT A CALL TO A FUNCTION. Calling a name
;; resolves to the @FUNC, whose `typeof' is already the return type. Calling a
;; variable, or a struct member holding a pointer, resolves to the thing that
;; HOLDS the pointer -- and its type is the pointer's typedef, which is what
;; (let ((auto r . #'(g 7)))) used to infer where it meant `long'.
;;
;; The test is on SHAPE, not on construct, because the same function-pointer
;; type arrives wearing three different ones: as the @TYPEDEF itself, as a
;; struct member that carries the typedef expanded inline, and as a variable
;; merely typed by it. Anything whose `typeof' is func and whose array-def holds
;; an @FUNC is one, whatever declared it -- and that @FUNC carries the return
;; type. Requiring @TYPEDEF here answered correctly for a function-pointer
;; VARIABLE and still wrongly for a table of them, which is the case that
;; matters: every haskell data type reaches its functions through one.
(defun func-typedef-of< (callee)
  (flet ((fn-shaped-p (s)
           (and s
                (not (eql (construct s) '|@FUNC|))
                (key-eq (typeof s) '|func|)
                (let ((inner (car (array-def s))))
                  (and (typep inner 'sp) (eql (construct inner) '|@FUNC|))))))
    (cond ((null callee) nil)
          ((eql (construct callee) '|@FUNC|) nil)
          ((fn-shaped-p callee) callee)
          (t (let ((c (*gets* (peel-type-tag< (typeof callee)))))
               (when (fn-shaped-p c) c))))))

(defun deep-typeof (id &optional spec too-deep)
  (let ((deep-res 
            (let* ((id (if (and (listp id) (key-eq (car id) '|struct|)) (cadr id) id))
                   ;; A TYPE SLOT MAY HOLD A SPECIFIER RATHER THAN A NAME, and
                   ;; every caller here passes a `typeof' straight back in. A
                   ;; variable declared (typeof X) carries an @TYPEOF in that
                   ;; slot -- lib/std/haskell/match.cicili declares its
                   ;; destructured bindings that way, ((typeof (\$ d __h_data
                   ;; Just __h_0_mem)) arg) -- and peel-type-tag< says so in as
                   ;; many words: a specifier is handed back untouched for the
                   ;; caller to resolve further. This was the one caller that
                   ;; did not, and looked it up instead: (*gets* <specifier>)
                   ;; asks SYMBOL-NAME of it and dies "is not of type SYMBOL".
                   ;;
                   ;; Resolving it is just recognising it -- the @TYPEOF branch
                   ;; below already knows what to do with one.
                   (spec (cond (spec spec)
                               ((typep id 'sp) id)
                               (t (*gets* id)))))
              (if spec
                  (let ((const-val (construct spec)))
                    (cond ((eql const-val '|@ATOM|) spec)
                          ;; an auto var or param resolves through what
                          ;; initialised it -- and one that has NOTHING there
                          ;; must answer "unknown" rather than ask itself
                          ;; again: (*gets* id) hands the same auto spec back,
                          ;; and the recursion has no floor. Found by a member
                          ;; call on a value of an undeclared template
                          ;; instance, where the receiver's type never
                          ;; resolved and the stack died in place of an error
                          ;; naming the member.
                          ((key-eq (typeof spec) '|auto|)
                           (if (default spec) (deep-typeof id (default spec)) nil)) ; var or param
                          ((eql const-val '|@CALL|)
                           (let* ((name-val (name spec))
                                  (callee (if (typep name-val 'sp)
                                              (deep-typeof id name-val)
                                              (*gets* name-val))))
                             ;; A CALL THROUGH A FUNCTION POINTER IS NOT A CALL
                             ;; TO A FUNCTION. Calling a name resolves to the
                             ;; @FUNC, whose `typeof' is already the return
                             ;; type. Calling a variable or a struct member
                             ;; resolves to the thing that HOLDS the pointer,
                             ;; and its type is the pointer's typedef -- so
                             ;; (let ((auto r . #'(g 7)))) inferred `getter_t'
                             ;; where it meant `long', and a table of function
                             ;; pointers -- which is what every haskell data
                             ;; type carries -- could not be called at all:
                             ;; "unknown struct type: func".
                             ;;
                             ;; A function typedef is `typeof' func with the
                             ;; @FUNC in its array-def, and that @FUNC carries
                             ;; the return type. One more step is the whole fix.
                             (let ((td (func-typedef-of< callee)))
                               (if (and td (car (array-def td)))
                                   (or (deep-typeof (typeof (car (array-def td)))) callee)
                                   callee))))
                          ((eql const-val '|@VAR|) spec)
                          ((eql const-val '|@PARAM|) spec)
                          ((eql const-val '|@FUNC|) spec)
                          ((eql const-val '|@LETN|)
                           (*push* (name spec))
                           (*pop* (deep-typeof id (car (last (body (body spec)))))))
                          ((eql const-val '|@PROGN|)
                           (*push* (name spec))
                           (*pop* (deep-typeof id (car (last (body (body spec)))))))
                          ((eql const-val '|@?|) (deep-typeof id (car (default spec))))
                          ((eql const-val '|@UNARY|)
                           (let ((ty (deep-storageof id spec)))
                             (if ty
                                 (cond ((eql (name spec) '&) ty)
                                       ;;   new_spec))
                                       ((eql (name spec) '*) ty)
                                       ;;   new_spec))
                                       (t ty))
                                 nil)))
                          ((eql const-val '|@OPR|) (deep-typeof id (car (default spec))))
                          ;; `-->' joins them. It reaches a member exactly as
                          ;; `->' does and only declines to call it, so the
                          ;; member's declaration is the answer for both -- and
                          ;; it was missing here, which left every (--> x m)
                          ;; with no type at all. The layer that needs it is
                          ;; lib/std/haskell, where (\. f d) NAMES a function
                          ;; for the call site to call.
                          ;; `=>' joins them too, and then takes one more step.
                          ;; All four reach a member of an aggregate and resolve
                          ;; to its declaration; `=>' additionally CALLS what it
                          ;; found, so where the others answer with the member,
                          ;; it answers with what the member returns. That is
                          ;; the whole difference, and it is why (=> obj m a b)
                          ;; had no type at all before: this branch knew @$ and
                          ;; @-> only, so a member holding a function could be
                          ;; called but never bound, inferred or returned.
                          ((or (eql const-val '|@$|)
                               (eql const-val '|@->|)
                               (eql const-val '|@-->|)
                               (eql const-val '|@=>|))
                           (let ((struct (deep-typeof id (name spec))))
                             (when struct
                               (let ((end-type (deep-typeof (typeof struct))))
                                 (unless end-type (error "unknown struct type: ~A~%  accessed in: ~A~%" (typeof struct) spec))
                                 ;; `=>' keeps its member as a SPECIFIED
                                 ;; expression rather than a bare symbol -- it
                                 ;; is resolved inside the receiver's scope
                                 ;; (specifier.lisp:993) -- so the name has to
                                 ;; be taken back out of it. The other three
                                 ;; hold the symbol itself.
                                 (let* ((mem (default spec))
                                        (mem-name (if (typep mem 'sp) (default mem) mem))
                                        ;; THE FIRST TYPE REACHED IS NOT ALWAYS
                                        ;; THE ONE HOLDING THE MEMBER. Members
                                        ;; are keyed `member/Type', and the type
                                        ;; a receiver resolves to may be a
                                        ;; typedef standing in front of the
                                        ;; struct that declares them -- a
                                        ;; haskell class is `X' typedef'd to
                                        ;; `class_X *', and every member lives
                                        ;; on class_X. One lookup answered for
                                        ;; the receivers that land on the struct
                                        ;; directly and silently returned NIL
                                        ;; for the rest, which is how a whole
                                        ;; member chain came back untyped with
                                        ;; nothing said about why.
                                        ;;
                                        ;; deep-storageof has walked the chain
                                        ;; like this all along (see its `t'
                                        ;; branch); this is the same walk. The
                                        ;; step count is a backstop against a
                                        ;; typedef cycle, not a real limit --
                                        ;; nothing legitimate is eight typedefs
                                        ;; deep.
                                        (member-spec
                                         (let ((ty (typeof end-type)))
                                           (loop repeat 8
                                                 for key = (peel-type-tag< ty)
                                                 for hit = (unless (typep key 'sp)
                                                             (*gets* (intern (format nil "~A/~A" mem-name key))))
                                                 when hit return hit
                                                 do (let ((next (if (typep key 'sp)
                                                                    (deep-typeof "" key)
                                                                    (deep-typeof key))))
                                                      (when (or (null next) (equal (typeof next) ty))
                                                        (return nil))
                                                      (setq ty (typeof next)))))))
                                   (if (eql const-val '|@=>|)
                                       (let ((td (func-typedef-of< member-spec)))
                                         (if (and td (car (array-def td)))
                                             (or (deep-typeof (typeof (car (array-def td)))) member-spec)
                                             member-spec))
                                       member-spec))))))
                          ((eql const-val '|@TYPEDEF|)
                           ;; Deliberately DISCARDS the typedef's own modifier.
                           ;; Combining it here instead -- the commented line --
                           ;; is what you want for (typedef a ref RefMaybe_int),
                           ;; but it changes every typedef in the library at
                           ;; once and reds cell, rc and array. Callers that
                           ;; need the modifier combine it themselves; see the
                           ;; `cof' case in deep-storageof.
                           (deep-typeof (typeof spec))
                           ;; (combine-types (deep-typeof (typeof spec)) spec)
                           )
                          ;; a union is an aggregate exactly like a struct here --
                          ;; without the @UNION case ($ m i) on a union value fell
                          ;; through to nil and raised "unknown struct type"
                          ((or (eql const-val '|@STRUCT|) (eql const-val '|@UNION|)) spec)
                          ;; a cast's TYPE is the cast's own -- that is the
                          ;; whole point of writing one
                          ((eql const-val '|@CAST|) spec)
                          ((eql const-val '|@CPPCAST|) spec)
                          ((eql const-val '|@RETURN|) (deep-typeof id (default spec)))
                          ((eql const-val '|@TYPEOF|)
                           (deep-typeof id (default spec))
                           ;; (combine-types (deep-typeof id (default spec)) spec)
                           )
                          (t nil)))
                  nil))))
    ;; (if (or too-deep (and deep-res (key-eq (construct deep-res) '|@TYPEOF|)))
    (if too-deep
        (if (and spec deep-res)
            (if (or (eql deep-res spec) (key-eq (typeof deep-res) (typeof spec)))
                deep-res
                (deep-typeof (typeof deep-res)))
            (if (and deep-res (not (or (eql (construct deep-res) '|@STRUCT|)
                                       (eql (construct deep-res) '|@UNION|))))
                (deep-typeof (typeof deep-res))
                deep-res))
        deep-res)))


(defun combine-modifiers (base type bm tm)
  (cond
    ((and (null bm) (null tm)) tm)
    ((and (null bm) (not (key-eq '|ref| tm)) tm))
    ((and bm (null tm)) bm)
    ((and (key-eq '|move| bm) (key-eq '|move| tm)) '|move|)
    ((and (key-eq '|move| bm) (key-eq '|ref| tm)) tm)
    ((and (or (key-eq '|ref| bm) (key-eq '|*| bm)) (key-eq '|*|  tm))  '|**|)
    ;; THE MIRROR OF THE LINE ABOVE, and it was missing. A star on the typedef
    ;; and a `ref' on the variable is the same arrangement seen from the other
    ;; side -- a borrow of a type that is itself a pointer -- and it arises
    ;; wherever a haskell class is borrowed, since a class IS `class_T *'. Only
    ;; the ref/star pairing needs saying: star over star is the case above.
    ((and (key-eq '|*| bm) (key-eq '|ref| tm)) '|**|)
    ((and (or (key-eq '|ref| bm) (key-eq '|*| bm)) (key-eq '|**| tm)) '|***|)
    ((and (key-eq '|**| bm)) (key-eq '|*|  tm) '|***|)
    (t (error (format nil "invalid type combination for: ~A~%  base: ~A" type base)))))

(defun combine-types (base type)
  (if base
      (let ((def-spec (if (typep type 'sp)
                          (make-specifier (name type) (construct type) (or (const base) (const type)) (typeof base)
                                          (combine-modifiers base type (modifier base) (modifier type))
                                          (const-ptr type) (array-def type) (default type) (attrs type))
                          (make-specifier (nth 4 type) '|@VAR| (or (const base) (nth 0 type)) (typeof base)
                                          (combine-modifiers base type (modifier base) (nth 2 type))
                                          (nth 3 type) nil nil '()))))
        def-spec)
      type))



;;;; ---------------------------------------------------------------------
;;;; Type ancestry
;;;;
;;;; 'type-root and 'type-origin are exported for use inside macros, so both
;;;; take and return *names*, never 'sp objects.  Input may be a symbol
;;;; written either way round -- array^int^item_t or array_int_item_t -- a
;;;; (<> ...) form, a (struct X) / (union X) list, or an 'sp; output is
;;;; always the underscore-joined symbol *symbols* is keyed by.
;;;; ---------------------------------------------------------------------

;; normalizes anything that denotes a type into the symbol *symbols* is keyed by
;; never recurses into a nested 'sp, so it cannot loop on a cyclic spec tree
(defun type-name< (ty)
  (let ((ty (if (typep ty 'sp) ty (expand-macros ty))))
    (cond ((null ty) nil)
          ((typep ty 'sp)
           (let* ((resolved (or (deep-typeof "" ty t) ty))
                  (candidate (cond ((and (typeof resolved) (not (typep (typeof resolved) 'sp)))
                                    (typeof resolved))
                                   (t (name resolved)))))
             (unless (typep candidate 'sp) (type-name< candidate))))
          ((symbolp ty) (intern (substitute #\_ #\^ (symbol-name ty))))
          ((listp ty)
           (when (and (cdr ty) (or (key-eq (car ty) '|struct|) (key-eq (car ty) '|union|)))
             (type-name< (cadr ty))))
          (t nil))))

;; walks the @TYPEDEF chain nearest first: the type asked about, then every
;; typedef it resolves through, ending at the first non-typedef -- its origin
;; a name that resolves to nothing still ends the walk as its own origin
(defun type-chain< (ty)
  (let ((name (type-name< ty))
        (chain '())
        (seen  (make-hash-table :test 'equal)))
    (loop while name do
      (if (gethash (symbol-name name) seen)
          (setq name nil) ; typedef cycle
          (progn
            (setf (gethash (symbol-name name) seen) t)
            (push name chain)
            (let ((spec (*gets* name)))
              (setq name (when (and spec (eql (construct spec) '|@TYPEDEF|))
                           (type-name< (typeof spec))))))))
    (nreverse chain)))

;; every type name from the origin down to the specific type, origin first
(defun type-root (ty)
  (reverse (type-chain< ty)))

;; the opaque super type declared by the nearest step of the chain carrying a
;; `<name>^type_t' typedef, or NIL when no step declares one
(defun type-origin (ty)
  (dolist (step (type-chain< ty) nil)
    (let ((marker (*gets* (intern (format nil "~A_type_t" (symbol-name step))))))
      (when (and marker (eql (construct marker) '|@TYPEDEF|) (typeof marker))
        (let ((origin (type-name< (typeof marker))))
          (when origin (return (car (type-root origin)))))))))


;; (type inference) tries to infer from lexeme id or throw error
;; without :with-name presence: compiles type without name
;; with :with-name presence but NIL: compiles with name of the spec
;; with :with-name presence non NIL: compiles with the specified name
(defun infer-type-spec (id spec &key with-name copy-name)
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
	                                         (if (and (typep (typeof spec) 'sp) (or (key-eq (construct (typeof spec)) '|@TYPEDEF|)
                                                                                    (key-eq (construct (typeof spec)) '|@TYPEOF|)))
                                                 (infer-type-spec id (deep-typeof id (typeof spec))
                                                                  :with-name with-name :copy-name copy-name)
                                                 ;; (deep-typeof id (typeof spec))
                                                 (typeof spec))
	                                         (if arr-val arr-val mod-val)
                                             ptr-mod
	                                         (name      spec))
                             (list (const     spec)
	                               (if (and (typep (typeof spec) 'sp) (or (key-eq (construct (typeof spec)) '|@TYPEDEF|)
                                                                          (key-eq (construct (typeof spec)) '|@TYPEOF|)))
                                       (infer-type-spec id (deep-typeof id (typeof spec))
                                                        :with-name with-name :copy-name copy-name)
                                       ;; (deep-typeof id (typeof spec))
                                       (typeof spec))
	                               (if arr-val arr-val mod-val)
                                   ptr-mod
	                               with-name))
                         (list (const     spec)
	                           (if (and (typep (typeof spec) 'sp) (or (key-eq (construct (typeof spec)) '|@TYPEDEF|)
                                                                      (key-eq (construct (typeof spec)) '|@TYPEOF|)))
                                   (infer-type-spec id (deep-typeof id (typeof spec))
                                                    :with-name with-name :copy-name copy-name)
                                   ;; (deep-typeof id (typeof spec))
                                   (typeof spec))
	                           (if arr-val arr-val mod-val)
                               ptr-mod
                               nil))))
      (values (remove nil full-type) full-type))))

;; type inference front-end, exported
(defun infer-type (id &key with-name copy-name)
  (let* ((id (expand-macros id))
         (spec (cond ((numberp id) (specify-expr id))
                     ((stringp id) (specify-cast-expr (list '|cast| (list '|const| '|char| '[]) id)))
                     ((listp id) (let* ((clause (expand-macros id))
                                        (func (expand-macros (car clause))))
                                   (setq clause (expand-macros (append (list func) (cdr clause))))
                                   (setq func (expand-macros (car clause)))
                                   (cond ((key-eq func '|cast|)
                                          (let ((expr (specify-cast-expr clause)))
                                            expr))
                                         ((and (listp func) (eql (car func) '|QUOTE|))
                                          (let ((func (cadr func)))
                                            (if (key-eq (car func) '|lambda|)
                                                (let ((out (nth 2 func)))
                                                  (if (key-eq (car out) '|out|)
                                                      (let ((out-ext (expand-macros (cadr out))))
                                                        (if (key-eq out-ext '|auto|)
                                                            (let ((ret-val (find-clause '|return| (nthcdr 2 func)))
                                                                  (tmp-type-infer-time (prog1 *type-infer-time-lambda*
                                                                                         (setq *type-infer-time-lambda* t)))
                                                                  (lamb-spec (specify-function func '())))
                                                              (setq *type-infer-time-lambda* tmp-type-infer-time)
                                                              (return-from infer-type
                                                                (infer-type-spec "" lamb-spec
                                                                                 :with-name with-name :copy-name copy-name)))
                                                            (return-from infer-type
                                                              (infer-type out-ext
                                                                :with-name with-name :copy-name copy-name))))
                                                      (list '|void|)))
                                                (if (key-eq (car func) '|lambda*|)
                                                    (let ((out (nth 3 func)))
                                                      (if (key-eq (car out) '|out|)
                                                          (let ((out-ext (expand-macros (cadr out))))
                                                            (if (key-eq out-ext '|auto|)
                                                                (let ((ret-val (find-clause '|return| (nthcdr 3 func)))
                                                                      (tmp-type-infer-time (prog1 *type-infer-time-lambda*
                                                                                             (setq *type-infer-time-lambda* t)))
                                                                      (lamb-spec (specify-function func '())))
                                                                  (setq *type-infer-time-lambda* tmp-type-infer-time)
                                                                  (return-from infer-type
                                                                    (infer-type-spec "" lamb-spec
                                                                                     :with-name with-name :copy-name copy-name)))
                                                                (return-from infer-type
                                                                  (infer-type out-ext
                                                                    :with-name with-name :copy-name copy-name))))
                                                          (list '|void|)))))))
                                         ((key-eq func '|letn|)
                                          (let ((tmp-type-infer-time (prog1 *type-infer-time-lambda*
                                                                       (setq *type-infer-time-lambda* t)))
                                                (letn-spec (specify-let clause)))
                                            (setq *type-infer-time-lambda* tmp-type-infer-time)
                                            (*push* (name letn-spec))
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
                                            (let ((ty (multiple-value-list (infer-type (expand-macros (car (last clause)))
                                                                             :with-name with-name :copy-name copy-name))))
                                              (*pop* ty)
                                              (return-from infer-type (values-list ty)))))
                                         ((key-eq func '|aof|)
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
                                          (return-from infer-type
                                            (let ((ty (infer-type (expand-macros (cadr clause))
                                                        :with-name with-name :copy-name copy-name)))
                                              (multiple-value-bind (const typeof modifier const-ptr variable)
		                                          (specify-type< ty)
                                                (let* ((mod-val (cond
                                                                  ((key-eq '|ref| modifier) '|move|)
                                                                  ((key-eq '|***| modifier) '|**|)
                                                                  ((key-eq '|**|  modifier) '|*|)
                                                                  ((key-eq '|*|   modifier)  (when (is-non-copy typeof) '|move|))
                                                                  ((is-non-copy typeof '|move|))
                                                                  ((key-eq '|*|   modifier) nil)
                                                                  (t (error (format nil "'cof not allowed for: ~A~%  in: ~A" ty clause)))))
                                                       (ptr-mod (cond
                                                                  ((null mod-val) nil)
                                                                  ((key-eq '|move| mod-val) nil)
                                                                  ((key-eq '|ref|  mod-val) nil)
                                                                  (t const-ptr)))
                                                       (ty-def (list const typeof mod-val ptr-mod variable)))
                                                  (values (remove nil ty-def) ty-def))))))

                                         ((key-eq func '|nth|)
                                          (format t "NTH1 ~A~%" clause)
                                          (return-from infer-type
                                            (let ((ty (infer-type (expand-macros (nth 2 clause))
                                                                  :with-name with-name :copy-name copy-name)))
                                              (format t "NTH2 ~A~%" ty)
                                              (multiple-value-bind (const typeof modifier const-ptr variable array)
		                                          (specify-type< ty)
                                                (let ((ty-def (list const typeof nil const-ptr variable array)))
                                                  (values (remove nil ty-def) ty-def))))))
                                         
                                         ((and (= (length clause) 2) (find func *unaries* :test #'key-eq))
                                          (return-from infer-type (infer-type (cadr clause)
                                                                    :with-name with-name :copy-name copy-name)))
                                         ((and (> (length clause) 2) (find func *operators* :test #'key-eq))
                                          (return-from infer-type (infer-type (cadr clause)
                                                                    :with-name with-name :copy-name copy-name)))
                                         ((key-eq func '->)
                                          (format t "->1 ~A~%" clause)
                                          (let ((struct (nth-value 1 (infer-type (cadr clause)
                                                                       :with-name with-name :copy-name copy-name))))
                                            (when struct
                                              (let ((end-type (if (typep (nth 1 struct) 'sp)
                                                                  (deep-typeof id (nth 1 struct))
                                                                  (deep-typeof (nth 1 struct)))))
                                                (unless end-type (error "unknown struct type: ~A~%  accessed in: ~A~%" struct clause))
                                                (format t "->2 ~A~%" end-type)
                                                (return-from infer-type
                                                  (infer-type-spec
                                                      ""
                                                      (let ((field (*gets* (intern (format nil "~A/~A" (caddr clause) (typeof end-type))))))
                                                        (if field field (error (format nil "struct: ~A does not have field: ~A~%  in: ~A"
                                                                                       (typeof end-type) (caddr clause) clause))))
                                                      :with-name with-name :copy-name copy-name))))))
                                         ((key-eq func '$)
                                          (let ((struct (nth-value 1 (infer-type (cadr clause)
                                                                       :with-name with-name :copy-name copy-name))))
                                            (when struct
                                              (let ((end-type (if (typep (nth 1 struct) 'sp)
                                                                  (deep-typeof id (nth 1 struct))
                                                                  (deep-typeof (nth 1 struct)))))
                                                (unless end-type (error "unknown struct type: ~A~%  accessed in: ~A~%" struct clause))
                                                (return-from infer-type
                                                  (infer-type-spec
                                                   ""
                                                   (let ((field (*gets* (intern (format nil "~A/~A" (caddr clause) (typeof end-type))))))
                                                     (if field field (error (format nil "struct: ~A does not have field: ~A~%  in: ~A"
                                                                                    (typeof end-type) (caddr clause) clause))))
                                                   :with-name with-name :copy-name copy-name))))))
                                         ((key-eq func '|return|) (return-from infer-type
                                                                    (infer-type (cadr clause)
                                                                      :with-name with-name :copy-name copy-name)))
                                         ((key-eq func '?) (return-from infer-type
                                                             (infer-type (caddr clause)
                                                               :with-name with-name :copy-name copy-name)))
                                         ((symbolp func) ; a function call or type descriptor
                                          (let ((ty (*gets* func)))
                                            (cond ((key-eq (construct ty) '|@FUNC|) ty)
                                                  ((key-eq (construct ty) '|@STRUCT|)
                                                   (multiple-value-bind (const typeof modifier const-ptr variable array)
		                                               (specify-type< clause)
                                                     (let ((ty-def (list const typeof modifier const-ptr variable array)))
                                                       (return-from infer-type (values (remove nil ty-def) ty-def)))))
                                                  (t ty))))
                                         ) ; cond
                                   ))
                     (t (deep-typeof id)))))
    (if spec
        (infer-type-spec id spec :with-name with-name :copy-name copy-name)
        (error (format nil "type inference failed for: ~A" id)))))

(defun find-clause (func tree)
  (if (atom tree)
      nil
      (if (and (symbolp (car tree)) (key-eq (car tree) func))
          tree
          (dolist (node tree)
            (let ((ret-val (find-clause func node))) 
              (when ret-val (return-from find-clause ret-val)))))))

(defun find-attr (spec attr)
  (let ((atts (attrs spec)))
    (find attr atts :test #'(lambda (at kv) (when (key-eq at (car kv)) kv)))))

(defun is-non-copy (id)
  (let ((origin (if (typep id 'sp) (deep-typeof "" id) (deep-typeof id))))
    (when (and origin (key-eq (construct origin) '|@STRUCT|) (find-attr origin '|non-copy|))
      t)))

(defun is-inside-loop ()
  (dolist (lex-id *lexemes-id*)
    (when (or (str:starts-with-p "for"   lex-id)
              (str:starts-with-p "while" lex-id)
              (str:starts-with-p "do"    lex-id))
      (return-from is-inside-loop t))))

;; THE MODIFIER CAN LIVE ON THE TYPE RATHER THAN THE VARIABLE.
;;
;; assign-check below asks whether what it is about to copy is a pointer, and it
;; used to ask the variable's own `modifier' alone. A typedef can carry the star
;; instead -- a haskell class is `T' typedef'd to `class_T *', and
;; lib/std/rc.cicili's rcbox is `Rc_T' typedef'd to `rc_T *' -- and then the
;; variable has no modifier of its own while the value it holds is still a
;; pointer. Copying a non-copy struct is refused, and rightly; copying a POINTER
;; to one is how a container holds it and must be allowed.
;;
;; combine-types is what folds the two together, and asking it is the whole
;; answer here. deep-storageof's `cof' branch has done exactly this all along,
;; for the same reason and against the same kind of typedef.
;;
;; The fold stops as soon as the accumulated type HAS a modifier: there is
;; nothing further to learn then, and combining two of them is
;; combine-modifiers' business rather than this one's -- it raises on the pairs
;; it has no answer for, and this is not the place to find that out. The step
;; count is a backstop against a typedef cycle, not a real limit.
(defun effective-type< (ty)
  (let ((acc ty))
    (dotimes (step 8 acc)
      (when (modifier acc) (return acc))
      (let* ((key (peel-type-tag< (typeof acc)))
             (def (when (symbolp key) (*gets* key))))
        (unless (and def (eql (construct def) '|@TYPEDEF|)) (return acc))
        (setq acc (combine-types def acc))))))

;; A `non-copy' declared ON A TYPEDEF, which is how a type that must be a C
;; pointer says it is nonetheless not to be copied: a std file is `FILE *' so
;; the C library accepts it, and (non-copy) so it is closed once. Saying so
;; beats inferring copyability from the star, so this wins over the fold above
;; in both directions -- it defeats the skip AND raises on its own.
(defun typedef-non-copy< (ty)
  (dolist (step (type-chain< ty) nil)
    (let ((spec (*gets* step)))
      (when (and spec (eql (construct spec) '|@TYPEDEF|) (find-attr spec '|non-copy|))
        (return t)))))

;; IS THE VALUE BEING HANDED OVER RATHER THAN COPIED?
;;
;; move-var answers a LETNMOVECAST when it consumes a `move' variable: the value
;; is copied out, the source is zeroed and marked spent, and using it again
;; raises. That is a transfer of ownership, not a duplication, and it is exactly
;; what a non-copy type permits -- refusing it leaves an author who owns a std
;; string with no way at all to store it.
;;
;; Only move-var can produce one, and only from a variable the author declared
;; `move', so this cannot be reached by writing an ordinary copy.
(defun moved-in< (right)
  (when right (key-eq (name right) '|LETNMOVECAST|)))

(defun assign-check (spec left right)
  (let ((initializing (when (find (construct spec) '(|@VAR| |@PARAM| |@LET| |@LETN| |@FUNC|)) t))
        (left-type (deep-typeof "" left)))
    (if left-type
        (let* ((declared (typedef-non-copy< (typeof left-type)))
               (mod (modifier (effective-type< left-type))))
          (unless (or (moved-in< right)
                      (and (not declared)
                           (or (and initializing mod)
                               (and mod (not (key-eq mod '|move|))))))
            (let ((left-origin (if (typep (typeof left-type) 'sp)
                                   (deep-typeof "" (typeof left-type))
                                   (deep-typeof (typeof left-type)))))
              (when (or declared
                        (and left-origin
                             (key-eq (construct left-origin) '|@STRUCT|) (find-attr left-origin '|non-copy|)))
                (error (format nil "non-copy struct assignment for: ~A~%  by: ~A~%  inside: ~A~%" left right spec ))))))
        (when right
          (let ((right-type (deep-typeof "" right)))
            (when right-type
              (let* ((declared (typedef-non-copy< (typeof right-type)))
                     (mod (modifier (effective-type< right-type))))
                (unless (or (moved-in< right)
                            (and (not declared)
                                 (or (and initializing (modifier left-type))
                                     (and mod (not (key-eq mod '|move|))))))
                  (let ((right-origin (if (typep (typeof right-type) 'sp)
                                          (deep-typeof "" (typeof right-type))
                                          (deep-typeof (typeof right-type)))))
                    (when (or declared
                              (and right-origin
                                   (key-eq (construct right-origin) '|@STRUCT|) (find-attr right-origin '|non-copy|)))
                      (error (format nil "non-copy struct assignment for: ~A~%  by: ~A~%  inside: ~A~%" left right spec ))))))))))))

(defun move-var (spec inside)
  (let ((origin (deep-storageof "" spec))) ; check for moved vars
    (if (and origin
             (find (construct origin) '(|@VAR| |@PARAM|) :test #'key-eq)
             (or (key-eq (modifier origin) '|move|)
                 (key-eq (modifier origin) '|ref|)))
        (progn
          (if (is-moved origin)
              (error (format nil "trying to move already moved var: ~A~%  in call: ~A~%  moved before here: ~A~%"
                             origin inside (is-moved origin)))
              (if (and (key-eq (modifier origin) '|move|) (is-inside-loop))
                  (error (format nil "using 'move var: ~A~%  inside loop~%  in call: ~A" origin inside))
                  (if (key-eq (modifier origin) '|move|)
                      (let* ((moved-name (GENSYM "moved_var"))
                             (moved-var (make-specifier moved-name '|@VAR| nil (typeof origin) nil nil nil spec '()))
                             (call-var (make-specifier (specify-symbol-expr '|memset|) '|@CALL| nil nil nil nil nil
                                                       (list (make-specifier '|&| '|@UNARY| nil nil nil nil nil spec '())
                                                             (make-specifier '|@NUMBER| '|@ATOM| nil '|int| nil nil nil 0 '())
                                                             (make-specifier nil '|@SIZEOF| nil nil nil nil nil spec '()))
                                                       '()))
                             (let-var (make-specifier (GENSYM "letnmove") '|@LETN| nil nil nil nil nil nil '()))
                             (body-var (make-specifier (GENSYM "bodymove") '|@BODY| nil nil nil nil nil nil '())))
                        (setf (is-moved origin) inside)
                        (add-param moved-var let-var)
                        (setf (body body-var) (list call-var (make-specifier '|@SYMBOL| '|@ATOM| (const origin) (typeof origin)
                                                                             (modifier origin) (const-ptr origin) (array-def origin)
                                                                             moved-name '())))
                        (setf (body let-var) body-var)
                        (make-specifier '|LETNMOVECAST| '|@CAST| nil (typeof origin) '|move| nil nil let-var '())
                        ) ; copy, set zero moved arg, pass 
                      spec))))
        spec)))

;; a way to make DEFMACRO statically typed
(defun type-check (value &key const typeof modifier const-ptr has-name with-name copy-name)
  (let ((value (expand-macros value)))
    (multiple-value-bind (desc-type full-type) (infer-type value :with-name with-name :copy-name copy-name)
      (when const
        (when (atom const) (setq const (list const)))
        (unless (find (nth 0 full-type) const :test #'key-eq)
          (error (format nil "type-check: invalid const value: ~A~%  of: ~A~%  for: ~A" const full-type value))))
      (when typeof
        (when (typep (nth 1 full-type) 'sp)
          (multiple-value-setq (desc-type full-type) (infer-type-spec ""
                                                       (combine-types (nth 1 full-type) full-type)
                                                       :with-name with-name :copy-name copy-name)))
        (when (atom typeof) (setq typeof (list typeof)))
        (setq typeof (loop for symb in typeof
                           collect (intern (substitute #\_ #\^ (symbol-name (expand-macros symb))))))
        (let ((origin (type-origin (nth 1 full-type))))
          (unless (and origin (find origin typeof :test #'key-eq))
            (error (format nil "type-check: invalid type value: ~A~%  of: ~A~%  for: ~A" typeof full-type value)))))
      (when modifier
        (when (atom modifier) (setq modifier (list modifier)))
        (unless (find (if (nth 2 full-type) (nth 2 full-type) '|nil|) modifier :test #'key-eq)
          (error (format nil "type-check: invalid modifier value: ~A~%  of: ~A~%  for: ~A" modifier full-type value))))
      (when const-ptr
        (when (atom const-ptr) (setq const-ptr (list const-ptr)))
        (unless (find (nth 3 full-type) const-ptr :test #'key-eq)
          (error (format nil "type-check: invalid const-ptr value: ~A~%  of: ~A~%  for: ~A" const-ptr full-type value))))
      (when has-name
        (unless (nth 4 full-type)
          (error (format nil "type-check: missing name of: ~A~%  for: ~A" full-type value))))
      (let ((cur-type (nth 1 full-type)))
        (values desc-type full-type (type-root cur-type) (type-origin cur-type))))))
