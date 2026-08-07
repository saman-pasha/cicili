# Emacs support for Cicili

`cicili-mode.el` is the Emacs major mode for Cicili source. It replaces the older
top-level `mode.lisp`, which has been removed.

## Install

```elisp
(add-to-list 'load-path "/path/to/cicili/emacs")
(require 'cicili-mode)
```

`.cicili` files then open in `cicili-mode` automatically. To try it without touching
your init file: `M-x eval-buffer` in `cicili-mode.el`, then `M-x cicili-mode` in a
Cicili buffer.

## Recommended: Cicili fences in Markdown

Every Cicili code block in this project's documentation is tagged ```` ```cicili ````. With
[markdown-mode](https://jblevins.org/projects/markdown-mode/) installed, this makes those
blocks fontify with `cicili-mode` instead of rendering as flat text:

```elisp
(with-eval-after-load 'markdown-mode
  (setq markdown-fontify-code-blocks-natively t)
  (dolist (lang '("cicili" "lisp"))
    (add-to-list 'markdown-code-lang-modes (cons lang 'cicili-mode))))
```

`lisp` is mapped too, because Cicili blocks were tagged ```` ```lisp ```` before the
`.cicili` extension existed and older documents still use it. The cost is that a genuine
Common Lisp fence in some unrelated document also opens in `cicili-mode` — which is mild,
since `cicili-mode` derives from `lisp-mode` and only adds faces on top. Drop `"lisp"` from
the list if you read a lot of Common Lisp in Markdown.

`markdown-fontify-code-blocks-natively` is not optional here: it defaults to `nil`, so the
language-to-mode entries do nothing on their own — you get correctly mapped modes that are
never asked to fontify anything. `C-c C-x C-f` toggles native fontification per buffer, to
check it is working or to turn it off in a large file.

`with-eval-after-load` matters too: `markdown-code-lang-modes` is defined *by*
markdown-mode, so a bare `add-to-list` at top level fails with a void-variable error
whenever markdown-mode has not been loaded yet.

## What it gives you

`define-derived-mode cicili-mode lisp-mode`, autoloaded onto `\.cicili\'`.

Every face group and indent rule from the old `mode.lisp` is carried over:

| group | face |
|---|---|
| types — `int`, `size_t`, `i64`, `List`, `Maybe`, `move`, `ref`, ... | `font-lock-type-face` |
| clauses — `func`, `let`, `struct`, `switch`, `match`, `go`, `lock`, ... | `font-lock-keyword-face` |
| attributes — `static`, `decl`, `inline`, `defer`, `non-copy`, ... | `font-lock-warning-face` |
| allocation and logging — `alloc`, `malloc`, `syslog!`, `debug!`, ... | `font-lock-warning-face` |
| preprocessor — `(@define ...)`, `(guard NAME)`, `(generic NAME)` | `font-lock-preprocessor-face` |
| definition names after `func`, `method`, `fn`, `member` | `font-lock-function-name-face` |
| type names after `struct`, `union`, `enum` | `font-lock-type-face` |
| generic instantiation `(<> rc a context)` | `cicili-generic-face` |

Plus a few things `mode.lisp` did not have:

- the output file name in `(source "main.c" ...)` and `(header "x.h" ...)`
- target feature keywords (`:std`, `:compile`, `:link`, `:cpp`) and the `#t` / `#f` literals
- an imenu index: targets, functions, methods, types, generics, `DEFMACRO`s
- `|` set to punctuation in the syntax table. Cicili's reader turns `|` off as a
  multiple-escape character (see `set-macro-character` in `compiler.lisp`), so leaving
  Emacs' Lisp meaning in place makes everything after a lone `|` fontify as one
  runaway symbol.

## Why it is not just mode.lisp renamed

`mode.lisp` set indentation with `(put 'name 'lisp-indent-function N)`. That is a
**global** symbol property: it changed indentation in every Lisp buffer you opened,
including real Common Lisp and Emacs Lisp, for every name Cicili shares with them —
`let`, `format`, `not`, `and`, `or`, `member`, `append`, `push`, `pop`, `last`, `init`,
`class`, `data`, `error`, `assert`. It added its font-lock to `lisp-mode` for the same
reason, so Cicili's colours bled into ordinary `.lisp` files.

`cicili-mode.el` keeps the rules in `cicili-indent-table` (a hash table) and installs a
buffer-local `cicili-indent-function` — a copy of `lisp-indent-function` whose only
change is consulting that table before falling back to the symbol's own properties.
Font-lock is registered with `(font-lock-add-keywords 'cicili-mode ...)`. Nothing
escapes a Cicili buffer.

## Adding a keyword

The tables at the top of the file are alists of `(NAME . INDENT)`, where `INDENT` is
the number of distinguished arguments — the same meaning an integer
`lisp-indent-function` property has. Add to `cicili-types`, `cicili-keywords`,
`cicili-attributes`, `cicili-type-attributes` or `cicili-warnings` and both the face
and the indent rule follow; `cicili-indent-table` and the font-lock regexps are built
from those lists at load time.

`cicili-common-lisp-forms` is indent-only, no face. Cicili macro files are read by
SBCL, so a `.cicili` file may hold real Common Lisp (`DEFMACRO`, `LET*`,
`MULTIPLE-VALUE-BIND`) around its Cicili forms.

---

# The `.cicili` extension

Cicili sources use the `.cicili` extension. 135 of the project's 148 `.lisp` files
were renamed; 13 stayed `.lisp` because `cicili.asd` names its components without an
extension and ASDF assumes `.lisp`:

`authority backend body cicili compiler config core mode module package specifier
target`  (`resolver` has since been folded into `backend`)

`builtins` and `cpp` *did* convert — they are macro files loaded through
`load-macro-file`, not ASDF components. `cicili.lisp` stayed put, so the run command
is unchanged:

```
sbcl --script cicili.lisp yourfile.cicili
```

`find-import-file` (`core.lisp`) does not append an extension — it takes whatever the
import string says — so the compiler itself needed no change. What moved with the
rename: every `(import "./x.lisp")` string, `cicili.lisp`'s four `load-macro-file`
calls, `.gitignore`, and the docs. The `quicklisp/setup.lisp` path in `cicili.lisp` is
not a Cicili file and was deliberately left alone.

## Known pre-existing breakage

One thing fails in `draft/` and did so before the rename — confirmed by diffing
against the git blobs, not introduced here:

- `test/macro/sample` did not balance its parens; it went to `_to_delete/` with the
  rest of the old test folders.

The rest of what this section used to list lived in `draft/in-progress`
(TensorFlow, DB, File, types), which has since been dropped as off the mainstream
path: 5 dangling imports and 7 more unbalanced files went with it.
