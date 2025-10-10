;; cicili Customization
(defun cicili-add-types (face-name keyword-rules)
  (let* ((keyword-list (mapcar #'(lambda (x)
				   (symbol-name (cdr x)))
			       keyword-rules))
	 (keyword-regexp (concat "[ \t\n(]\\("
				 (regexp-opt keyword-list)
				 "\\)[ \t\n)]")))
    (font-lock-add-keywords 'lisp-mode
			    `((,keyword-regexp 1 ',face-name))))
  (mapc #'(lambda (x)
	    (put (cdr x)
		 'lisp-indent-function
		 (car x)))
	keyword-rules))
 
(cicili-add-types
 'font-lock-type-face
 '((1 . main)
   (1 . const)
   (1 . func)
   (1 . this)
   (1 . void)
   (1 . unsigned)
   (1 . char)
   (1 . uchar)
   (1 . short)
   (1 . ushort)
   (1 . int)
   (1 . uint)
   (1 . long)
   (1 . ulong)
   (1 . llong)
   (1 . ullong)
   (1 . float)
   (1 . double)
   (1 . real)
   (1 . int8_t)
   (1 . uint8_t)
   (1 . int16_t)
   (1 . uint16_t)
   (1 . int32_t)
   (1 . uint32_t)
   (1 . int64_t)
   (1 . uint64_t)
   (1 . int_least8_t)
   (1 . uint_least8_t)
   (1 . int_least16_t)
   (1 . uint_least16_t)
   (1 . int_least32_t)
   (1 . uint_least32_t)
   (1 . int_least64_t)
   (1 . uint_least64_t)
   (1 . int_fast8_t)
   (1 . uint_fast8_t)
   (1 . int_fast16_t)
   (1 . uint_fast16_t)
   (1 . int_fast32_t)
   (1 . uint_fast32_t)
   (1 . int_fast64_t)
   (1 . uint_fast64_t)
   (1 . __int128)
   (1 . i8)
   (1 . u8)
   (1 . i16)
   (1 . u16)
   (1 . i32)
   (1 . u32)
   (1 . i64)
   (1 . u64)
   (1 . i128)
   (1 . u128)
   (1 . intmax_t)
   (1 . intptr_t)
   (1 . bool)
   (1 . true)
   (1 . false)
   (1 . nil)
   (1 . auto)
   (1 . size_t)
   (1 . namespace)
   (1 . null)
   (1 . byte)
   (1 . ubyte)
   (1 . timestamp)
   (1 . text)
   (1 . vector)
   (1 . $)
   (1 . =>)
   (1 . Maybe)
   (1 . Nothing)
   (1 . Just)
   (1 . Empty)
   (1 . Cons)
   (1 . otherwise)
   (1 . String)
   (1 . List)
   (1 . Range)
   ))

(defun cicili-add-keywords (face-name keyword-rules)
  (let* ((keyword-list (mapcar #'(lambda (x)
				   (symbol-name (cdr x)))
			       keyword-rules))
	 (keyword-regexp (concat "(\\("
				 (regexp-opt keyword-list)
				 "\\)[ \t\n]*")))
    (font-lock-add-keywords 'lisp-mode
			    `((,keyword-regexp 1 ',face-name))))
  (mapc #'(lambda (x)
	    (put (cdr x)
		 'lisp-indent-function
		 (car x)))
	keyword-rules))
 
(cicili-add-keywords
 'font-lock-keyword-face
 '((1 . cicili)
   (1 . main)
   (1 . main*)
   (1 . generic)
   (1 . format)
   (1 . code)
   (1 . header)
   (1 . source)
   (1 . guard)
   (1 . ghost)
   (1 . module)
   (1 . include)
   (1 . var)
   (1 . lambda)
   (1 . func)
   (1 . out)
   (1 . enum)
   (1 . struct)
   (1 . union)
   (1 . member)
   (1 . method)
   (1 . declare)
   (1 . typedef)
   (1 . set)
   (1 . nth)
   (1 . not)
   (1 . and)
   (1 . or)
   (1 . bitand)
   (1 . bitor)
   (1 . xor)
   (1 . cof)
   (1 . aof)
   (1 . sizeof)
   (1 . typeof)
   (1 . cast)
   (1 . switch)
   (1 . case)
   (1 . default)
   (1 . while)
   (1 . for)
   (1 . for-each)
   (1 . for-each-const)
   (1 . new)
   (1 . printf)
   (1 . scanf)
   (1 . free)
   (1 . $)
   (1 . ->)
   (1 . import)
   (1 . letn)
   (1 . defer-let)
   (1 . using)
   (1 . $$)
   (1 . =>)
   (1 . <>)
   (1 . t<>)
   (1 . closure)
   (1 . go)
   (1 . self)
   (1 . detach)
   (1 . join)
   (1 . cancel)
   (1 . exit)
   (1 . async)
   (1 . yield)
   (1 . done)
   (1 . async-main)
   (1 . async-main*)
   (1 . $$$)
   (1 . fn)
   (1 . \\)
   (1 . letin)
   (1 . where)
   (1 . $>)
   (1 . data)
   (1 . match)
   (1 . tuple)
   (1 . cast-tuple)
   (1 . \,)
   (1 . \:)
   (1 . class)
   (1 . show)
   (1 . io)
   (1 . Maybe)
   (1 . Nothing)
   (1 . Just)
   (1 . len)
   (1 . !>)
   (1 . nthcdr)
   (1 . push)
   (1 . \:)
   (1 . head)
   (1 . tail)
   (1 . append)
   (1 . ++)
   (1 . take)
   (1 . drop)
   (1 . !!)
   ))

(defun cicili-add-attributes (face-name keyword-rules)
  (let* ((keyword-list (mapcar #'(lambda (x)
				   (symbol-name (cdr x)))
			       keyword-rules))
	 (keyword-regexp (concat "(\\("
				 (regexp-opt keyword-list)
				 "\\)[ \t\n]*")))
    (font-lock-add-keywords 'lisp-mode
			    `((,keyword-regexp 1 ',face-name))))
  (mapc #'(lambda (x)
	    (put (cdr x)
		 'lisp-indent-function
		 (car x)))
	keyword-rules))
 
(cicili-add-attributes
 'font-lock-preprocessor-face
 '((1 . static)
   (1 . decl)
   (1 . inline)
   (1 . extern)
   (1 . register)
   (1 . volatile)
   (1 . auto)
   (1 . defer)
   (1 . defer*)
   (1 . resolve)
   (1 . thread-local)
   (1 . define)
   ))

(font-lock-add-keywords
 'lisp-mode
 '(("(\\(@\\(\\sw\\|\\s_\\)+\\)[ \t\n]*"
    (1 'font-lock-preprocessor-face))))

(font-lock-add-keywords
 'lisp-mode
 '(("(guard[ \t\n]+\\(\\(\\sw\\|\\s_\\)+\\)[ \t\n]*"
    (1 'font-lock-preprocessor-face))))

(font-lock-add-keywords
 'lisp-mode
 '(("(generic[ \t\n]+\\(\\(\\sw\\|\\s_\\)+\\)[ \t\n]*"
    (1 'font-lock-preprocessor-face))))

(font-lock-add-keywords
 'lisp-mode
 '(("(func[ \t\n]+(?\\(\\(\\sw\\|\\s_\\)+\\)[ \t\n]*"
    (1 'font-lock-function-name-face))))

(font-lock-add-keywords
 'lisp-mode
 '(("(method[ \t\n]+(\\(\\(\\sw\\|\\s_\\)+\\)[ \t\n]*"
    (1 'font-lock-function-name-face))))

(font-lock-add-keywords
 'lisp-mode
 '(("(member[ \t\n]+\\(\\(\\sw\\|\\s_\\)+\\)[ \t\n]*"
    (1 'font-lock-function-name-face))))

(font-lock-add-keywords
 'lisp-mode
 '(("(enum[ \t\n]+\\(\\(\\sw\\|\\s_\\)+\\)[ \t\n]*"
    (1 'font-lock-type-face))))

(font-lock-add-keywords
 'lisp-mode
 '(("(struct[ \t\n]+\\(\\(\\sw\\|\\s_\\)+\\)[ \t\n]*"
    (1 'font-lock-type-face))))

(font-lock-add-keywords
 'lisp-mode
 '(("(union[ \t\n]+\\(\\(\\sw\\|\\s_\\)+\\)[ \t\n]*"
    (1 'font-lock-type-face))))

(font-lock-add-keywords
 'lisp-mode
 '(("(fn[ \t\n]+(?\\(\\(\\sw\\|\\s_\\)+\\)[ \t\n]*"
    (1 'font-lock-function-name-face))))

(font-lock-add-keywords
 'lisp-mode
 '(("(data[ \t\n]+(?\\(\\(\\sw\\|\\s_\\)+\\)[ \t\n]*"
    (1 'font-lock-function-name-face))))
