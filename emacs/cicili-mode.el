;;; cicili-mode.el --- Major mode for the Cicili language -*- lexical-binding: t; -*-

;; Author: Saman Heidarzadeh Pasha <saman.h.pasha@gmail.com>
;; Keywords: languages, lisp, c
;; Package-Requires: ((emacs "26.1"))
;; License: GPL-3.0-or-later

;;; Commentary:

;; Syntax highlighting and indentation for Cicili source files (`.cicili').
;;
;; Cicili is s-expression syntax that transpiles to C, so this mode derives from
;; `lisp-mode' and layers Cicili's own keywords, types, attributes and indent
;; rules on top.  Everything here is scoped to `cicili-mode': ordinary .el and
;; .lisp buffers keep Emacs' own faces and indentation.  (This supersedes the
;; old top-level mode.lisp, which patched `lisp-mode' globally.)
;;
;; Install:
;;
;;   (add-to-list 'load-path "/path/to/cicili/emacs")
;;   (require 'cicili-mode)
;;
;; `.cicili' files then open in `cicili-mode' automatically.

;;; Code:

(require 'lisp-mode)
(require 'font-lock)

;; Bound dynamically by `calculate-lisp-indent' around the call to
;; `lisp-indent-function'; declared here to keep the byte-compiler quiet.
(defvar calculate-lisp-indent-last-sexp)

(defgroup cicili nil
  "Major mode for editing Cicili source."
  :group 'languages
  :prefix "cicili-")

(defface cicili-generic-face
  '((t :inherit font-lock-constant-face))
  "Face for Cicili generic instantiation names, i.e. the head of a `<>' form."
  :group 'cicili)


;;;; ---------------------------------------------------------------------
;;;; Keyword tables
;;;;
;;;; Each entry is (NAME . INDENT).  INDENT is the number of distinguished
;;;; arguments, the same meaning `lisp-indent-function' gives an integer
;;;; `lisp-indent-function' symbol property.
;;;; ---------------------------------------------------------------------

(defconst cicili-types
  '(("main" . 0) ("const" . 1) ("restrict" . 1) ("function" . 1) ("block" . 0)
    ("func" . 1) ("this" . 1) ("void" . 1) ("integer" . 1) ("unsigned" . 1)
    ("char" . 1) ("uchar" . 1) ("short" . 1) ("ushort" . 1) ("int" . 1)
    ("uint" . 1) ("long" . 1) ("ulong" . 1) ("llong" . 1) ("ullong" . 1)
    ("float" . 1) ("double" . 1) ("real" . 1)
    ("int8_t" . 1) ("uint8_t" . 1) ("int16_t" . 1) ("uint16_t" . 1)
    ("int32_t" . 1) ("uint32_t" . 1) ("int64_t" . 1) ("uint64_t" . 1)
    ("int_least8_t" . 1) ("uint_least8_t" . 1) ("int_least16_t" . 1)
    ("uint_least16_t" . 1) ("int_least32_t" . 1) ("uint_least32_t" . 1)
    ("int_least64_t" . 1) ("uint_least64_t" . 1)
    ("int_fast8_t" . 1) ("uint_fast8_t" . 1) ("int_fast16_t" . 1)
    ("uint_fast16_t" . 1) ("int_fast32_t" . 1) ("uint_fast32_t" . 1)
    ("int_fast64_t" . 1) ("uint_fast64_t" . 1)
    ("__int128" . 1)
    ("i8" . 1) ("u8" . 1) ("i16" . 1) ("u16" . 1) ("i32" . 1) ("u32" . 1)
    ("i64" . 1) ("u64" . 1) ("i128" . 1) ("u128" . 1)
    ("intmax_t" . 1) ("intptr_t" . 1) ("uintptr_t" . 1) ("size_t" . 1)
    ("boolean" . 1) ("symbol" . 1) ("error" . 1) ("true" . 1) ("false" . 1)
    ("nil" . 1) ("auto" . 1) ("namespace" . 1) ("null" . 1)
    ("byte" . 1) ("ubyte" . 1) ("timestamp" . 1) ("text" . 1) ("vector" . 1)
    ("$" . 1) ("!" . 1) ("->" . 1)
    ("Maybe" . 1) ("Nothing" . 1) ("Just" . 1) ("Empty" . 1) ("Cons" . 1)
    ("otherwise" . 1) ("String" . 1) ("List" . 1) ("array" . 1) ("object" . 1)
    ("Range" . 1) ("Either" . 1) ("Left" . 1) ("Right" . 1)
    ("Cell" . 1) ("Rc" . 1) ("Arc" . 1) ("show" . 1)
    ("Monoid" . 1) ("Functor" . 1) ("Applicative" . 1) ("Monad" . 1)
    ("default" . 1) ("<!>" . 1) ("~" . 1) ("Thunk" . 1)
    ("move" . 1) ("ref" . 1))
  "Cicili type names, highlighted with `font-lock-type-face'.")

(defconst cicili-keywords
  '(("cicili" . 1) ("main" . 0) ("main*" . 0) ("generic" . 1) ("format" . 1)
    ("code" . 1) ("header" . 1) ("source" . 1) ("make" . 1) ("guard" . 1)
    ("ghost" . 1) ("module" . 1) ("include" . 1) ("var" . 1) ("lambda" . 1)
    ("function" . 1) ("block" . 0) ("func" . 1) ("out" . 1)
    ("enum" . 0) ("struct" . 0) ("union" . 0)
    ("member" . 1) ("method" . 1) ("declare" . 1) ("typedef" . 1)
    ("set" . 1) ("nth" . 1) ("not" . 1) ("and" . 0) ("or" . 0)
    ("bitand" . 0) ("bitor" . 0) ("xor" . 1)
    ("cof" . 1) ("aof" . 1) ("sizeof" . 1) ("typeof" . 1) ("cast" . 1)
    ("switch" . 1) ("default" . 1) ("while" . 1) ("break" . 1)
    ("continue" . 1) ("for" . 1) ("for-each" . 1) ("for-each-const" . 1)
    ("new" . 1) ("pure" . 1) ("printf" . 1) ("scanf" . 1) ("free" . 0)
    ("$" . 1) ("->" . 1) ("import" . 1)
    ("let" . 1) ("letn" . 1) ("defer-let" . 1) ("using" . 1)
    ("$$" . 1) ("<>" . 1) ("t<>" . 1) ("closure" . 1)
    ("go" . 1) ("self" . 1) ("detach" . 1) ("join" . 1) ("cancel" . 1)
    ("exit" . 1) ("exit_self" . 1) ("abort" . 1) ("assert" . 1)
    ("async" . 1) ("yield" . 1) ("done" . 1)
    ("async-main" . 0) ("async-main*" . 0) ("$$$" . 0)
    ("fn" . 1) ("\\" . 1) ("letin" . 1) ("where" . 1) ("$>" . 1)
    ("data" . 1) ("match" . 1) ("tuple" . 0) ("cast-tuple" . 1)
    ("," . 1) (":" . 1) ("class" . 1) ("show" . 1) ("io" . 1)
    ("Maybe" . 1) ("Nothing" . 1) ("Just" . 1)
    ("len" . 1) ("!>" . 1) ("nthcdr" . 1) ("push" . 1) ("pop" . 1)
    ("head" . 1) ("tail" . 1) ("append" . 1) ("++" . 1)
    ("take" . 1) ("drop" . 1) ("!!" . 1) ("init" . 1) ("last" . 1)
    ("hasLen" . 1) ("copy" . 1) ("fmap" . 1)
    ("Either" . 1) ("Left" . 1) ("Right" . 1) ("rc" . 1) ("impl" . 1)
    ("List" . 1) ("Empty" . 1) ("Cons" . 1)
    ("const" . 1) ("constant" . 1) ("dead" . 1)
    ("lock" . 0) ("lockn" . 0) ("Buffer" . 0) ("Slice" . 0) ("None" . 0)
    ("force" . 0) ("lazy" . 0) ("iterate" . 1))
  "Cicili clause names, highlighted with `font-lock-keyword-face'.")

(defconst cicili-attributes
  '(("static" . 1) ("decl" . 1) ("inline" . 1) ("extern" . 1)
    ("register" . 1) ("volatile" . 1) ("auto" . 1)
    ("defer" . 1) ("defer*" . 1) ("resolve" . 1) ("thread-local" . 1)
    ("define" . 1) ("atomic" . 0) ("non-copy" . 0))
  "Cicili declaration attributes, highlighted with `font-lock-warning-face'.")

(defconst cicili-type-attributes
  '(("decl" . 1) ("impl" . 1) ("import" . 1) ("<>" . 1))
  "Cicili attributes that read as types, highlighted with `font-lock-type-face'.")

(defconst cicili-warnings
  '(("alloc" . 1) ("malloc" . 1) ("calloc" . 1) ("realloc" . 1)
    ("syslog!" . 1) ("debug!" . 1) ("warn!" . 1) ("info!" . 1)
    ("error!" . 1) ("analyze!" . 1) ("analyze-data!" . 1))
  "Allocation and logging forms, highlighted with `font-lock-warning-face'.

These deserve to stand out: every one of them either takes ownership of
memory or disappears entirely depending on the debug level.")

(defconst cicili-common-lisp-forms
  '(("DEFMACRO" . 2) ("DEFUN" . 2) ("LET" . 1) ("LET*" . 1)
    ("MULTIPLE-VALUE-BIND" . 2) ("DESTRUCTURING-BIND" . 2)
    ("LAMBDA" . 1) ("WHEN" . 1) ("UNLESS" . 1) ("IF" . 2) ("DOLIST" . 1)
    ("LOOP" . 0) ("PROGN" . 0) ("COND" . 0) ("CASE" . 0))
  "Common Lisp forms that appear in Cicili macro files, for indentation only.

Cicili macro files are read by SBCL, so a `.cicili' file may hold real
Common Lisp around its Cicili forms.  These get the CL indent rule but no
special face.")


;;;; ---------------------------------------------------------------------
;;;; Indentation
;;;;
;;;; The predecessor mode.lisp put `lisp-indent-function' properties directly
;;;; on symbols, which is global: it changed how Emacs indents every Lisp
;;;; buffer.  Here the rules live in a table consulted by a buffer-local indent
;;;; function, so they apply to Cicili buffers only.
;;;; ---------------------------------------------------------------------

(defconst cicili-indent-table
  (let ((table (make-hash-table :test 'equal)))
    (dolist (group (list cicili-types
                         cicili-keywords
                         cicili-attributes
                         cicili-type-attributes
                         cicili-warnings
                         cicili-common-lisp-forms))
      (dolist (entry group)
        (puthash (car entry) (cdr entry) table)))
    table)
  "Maps a Cicili form name to its number of distinguished arguments.

Later groups win, matching the order the rules were applied in mode.lisp.")

(defun cicili-indent-function (indent-point state)
  "Cicili counterpart of `lisp-indent-function'.

INDENT-POINT and STATE are as for `lisp-indent-function'.  Identical to it
except that the indent rule is looked up in `cicili-indent-table' before
falling back to the symbol's own properties, so Cicili's rules never leak
into other Lisp buffers."
  (let ((normal-indent (current-column)))
    (goto-char (1+ (elt state 1)))
    (parse-partial-sexp (point) calculate-lisp-indent-last-sexp 0 t)
    (if (and (elt state 2)
             (not (looking-at "\\sw\\|\\s_")))
        ;; The head of the form is not a symbol: line up under the list, or
        ;; under the first sexp on the same line as the last complete sexp.
        (progn
          (unless (> (save-excursion (forward-line 1) (point))
                     calculate-lisp-indent-last-sexp)
            (goto-char calculate-lisp-indent-last-sexp)
            (beginning-of-line)
            (parse-partial-sexp (point) calculate-lisp-indent-last-sexp 0 t))
          (backward-prefix-chars)
          (current-column))
      (let* ((function (buffer-substring (point)
                                         (progn (forward-sexp 1) (point))))
             (method (or (gethash function cicili-indent-table)
                         (function-get (intern-soft function)
                                       'lisp-indent-function)
                         (get (intern-soft function) 'lisp-indent-hook))))
        (cond ((or (eq method 'defun)
                   (and (null method)
                        (> (length function) 3)
                        (string-match-p "\\`\\(def\\|DEF\\)" function)))
               (lisp-indent-defform state indent-point))
              ((integerp method)
               (lisp-indent-specform method state indent-point normal-indent))
              (method
               (funcall method indent-point state)))))))


;;;; ---------------------------------------------------------------------
;;;; Font lock
;;;; ---------------------------------------------------------------------

(defun cicili--names (group)
  "Return the names in GROUP, an alist of (NAME . INDENT)."
  (mapcar #'car group))

(defun cicili--head-matcher (group)
  "Regexp matching any name in GROUP in head-of-form position."
  (concat "(\\(" (regexp-opt (cicili--names group)) "\\)[ \t\n]*"))

(defun cicili--token-matcher (group)
  "Regexp matching any name in GROUP as a standalone token.

Types show up in argument position too -- `(int x)', `(const char * s)' --
so unlike clauses they cannot be anchored to an opening paren."
  (concat "[ \t\n(]\\(" (regexp-opt (cicili--names group)) "\\)[ \t\n)]"))

(defconst cicili-font-lock-keywords
  `(;; types, anywhere a token can appear
    (,(cicili--token-matcher cicili-types) 1 font-lock-type-face)
    ;; clauses, attributes and allocation/logging forms, in head position
    (,(cicili--head-matcher cicili-keywords) 1 font-lock-keyword-face)
    (,(cicili--head-matcher cicili-attributes) 1 font-lock-warning-face)
    (,(cicili--head-matcher cicili-type-attributes) 1 font-lock-type-face)
    (,(cicili--head-matcher cicili-warnings) 1 font-lock-warning-face)
    ;; preprocessor forms: (@define ...) (@ifdef ...) (@else) (@endif)
    ("(\\(@\\(?:\\sw\\|\\s_\\)+\\)[ \t\n]*" 1 font-lock-preprocessor-face)
    ;; the name introduced by a guard or a generic
    ("(guard[ \t\n]+\\(\\(?:\\sw\\|\\s_\\)+\\)" 1 font-lock-preprocessor-face)
    ("(generic[ \t\n]+\\(\\(?:\\sw\\|\\s_\\)+\\)" 1 font-lock-preprocessor-face)
    ;; definition names
    ("(func[ \t\n]+(?\\(\\(?:\\sw\\|\\s_\\)+\\)" 1 font-lock-function-name-face)
    ("(method[ \t\n]+(\\(\\(?:\\sw\\|\\s_\\)+\\)" 1 font-lock-function-name-face)
    ("(fn[ \t\n]+(?\\(\\(?:\\sw\\|\\s_\\)+\\)" 1 font-lock-function-name-face)
    ("(member[ \t\n]+\\(\\(?:\\sw\\|\\s_\\)+\\)" 1 font-lock-function-name-face)
    ("(enum[ \t\n]+\\(\\(?:\\sw\\|\\s_\\)+\\)" 1 font-lock-type-face)
    ("(struct[ \t\n]+\\(\\(?:\\sw\\|\\s_\\)+\\)" 1 font-lock-type-face)
    ("(union[ \t\n]+\\(\\(?:\\sw\\|\\s_\\)+\\)" 1 font-lock-type-face)
    ;; generic instantiation: (<> rc a context)
    ("(<>[ \t\n]+(?\\(\\(?:\\sw\\|\\s_\\)+\\)" 1 'cicili-generic-face)
    ;; targets name their output file: (source "main.c" ...) (header "x.h" ...)
    ("(\\(?:source\\|header\\)[ \t\n]+\\(\"[^\"]*\"\\)" 1 font-lock-constant-face)
    ;; target features: (:std #t :compile #t :link "...")
    ("\\_<\\(:[a-zA-Z][a-zA-Z0-9-]*\\)" 1 font-lock-builtin-face)
    ;; the #t / #f feature literals
    ("\\(#[tf]\\)\\_>" 1 font-lock-constant-face))
  "Font lock rules for `cicili-mode'.")


;;;; ---------------------------------------------------------------------
;;;; Syntax table
;;;; ---------------------------------------------------------------------

(defvar cicili-mode-syntax-table
  (let ((table (make-syntax-table lisp-mode-syntax-table)))
    ;; Cicili's reader turns off `|' as a multiple-escape character
    ;; (see `set-macro-character' in compiler.lisp), so a bare `|' here is
    ;; punctuation, not the start of a |quoted symbol|.  Leaving it as an
    ;; escape makes everything after a lone `|' fontify as one long symbol.
    (modify-syntax-entry ?| "." table)
    ;; `^' joins names in generic instantiations: new^rc^context
    (modify-syntax-entry ?^ "_" table)
    table)
  "Syntax table for `cicili-mode'.")


;;;; ---------------------------------------------------------------------
;;;; Imenu
;;;; ---------------------------------------------------------------------

(defconst cicili-imenu-generic-expression
  '(("Targets"  "^\\s-*(\\(?:source\\|header\\)[ \t\n]+\"\\([^\"]+\\)\"" 1)
    ("Functions" "^\\s-*{?[^\n]*}?\\s-*(func[ \t\n]+(?\\([^ \t\n()]+\\)" 1)
    ("Methods"  "^\\s-*(method[ \t\n]+(\\([^ \t\n()]+\\)" 1)
    ("Types"    "^\\s-*(\\(?:struct\\|union\\|enum\\)[ \t\n]+\\([^ \t\n()]+\\)" 1)
    ("Generics" "^\\s-*(generic[ \t\n]+\\([^ \t\n()]+\\)" 1)
    ("Macros"   "^\\s-*(DEFMACRO[ \t\n]+\\([^ \t\n()]+\\)" 1))
  "Imenu index for `cicili-mode'.")


;;;; ---------------------------------------------------------------------
;;;; The mode
;;;; ---------------------------------------------------------------------

;;;###autoload
(define-derived-mode cicili-mode lisp-mode "Cicili"
  "Major mode for editing Cicili source files.

Cicili is s-expression syntax that transpiles to C, so this mode derives
from `lisp-mode' and adds Cicili's clauses, types, attributes and indent
rules on top.  Everything is buffer-local: other Lisp buffers are
unaffected.

\\{cicili-mode-map}"
  :syntax-table cicili-mode-syntax-table
  (setq-local lisp-indent-function #'cicili-indent-function)
  (setq-local indent-tabs-mode nil)
  (setq-local comment-start ";")
  (setq-local comment-add 1)
  (setq-local imenu-generic-expression cicili-imenu-generic-expression))

;; Registered against the mode rather than a buffer, and against `cicili-mode'
;; rather than `lisp-mode': Cicili's faces never reach an ordinary Lisp buffer.
(font-lock-add-keywords 'cicili-mode cicili-font-lock-keywords)

;;;###autoload
(add-to-list 'auto-mode-alist '("\\.cicili\\'" . cicili-mode))

(provide 'cicili-mode)

;;; cicili-mode.el ends here
