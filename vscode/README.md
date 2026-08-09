# Cicili for VSCode

Syntax highlighting and editor basics for `.cicili` files.

## What it knows

The token lists are ported from `../emacs/cicili-mode.el`, where the same names
drive both font-lock and indentation. They live as plain arrays in
`tools/build-grammar.mjs` so they can be diffed against that file by eye.

## What it does that the Emacs mode does not

Six things, each of them a real gap rather than a matter of taste:

1. **`{ }` and `[ ]` are real brackets.** `compiler.lisp`'s reader defines them
   as `read-delimited-list` macro characters; `cicili-mode.el` makes them symbol
   constituents, so `'{ 1 2 3 }` has no matching and no folding there. (The
   indenter below is the one place that follows Emacs instead and reads them as
   symbol constituents, because that is how the corpus is written — see the note
   in `src/indent.js`.)
2. **`#\Newline` and friends** are character literals. Unfaced in Emacs.
3. **`#'`** is the function quote. Unfaced in Emacs.
4. **`=>`, `\.`, `\.*`, `\.+`, `\,`, `\:`, `\<>`** are operators. Absent from
   every Emacs list; `\.` and `\.*` alone occur 51 times in the corpus.
5. **Case-sensitive.** Cicili reads with `readtable-case :preserve`
   (`core.lisp:516`), so `LIST` is not `List`. `cicili-mode` inherits
   `font-lock-keywords-case-fold-search t` from `lisp-mode` and highlights it as
   the type.
6. **Adjacent tokens both highlight.** The Emacs matcher consumes the delimiter
   its neighbour needed, so the second `int` in `(f (int a) -> int)` loses its
   face. This uses lookarounds instead.

Clause names win in head position and types win elsewhere, which is what the two
lists mean — Emacs applies types first and earlier faces win there, so `func`
renders as a type despite being a keyword.

## Indentation

Highlighting is declarative. Indentation is not, and cannot be.

A VSCode language configuration indents with one lever: `increaseIndentPattern`
puts the next line a level in, `decreaseIndentPattern` puts this line a level
out. Lisp indentation is not levels — it is a lookup. The head of the enclosing
form is found in an arity table; its distinguished arguments take four columns
from the open paren, the first body form takes two, and everything else lines up
with the sibling above it. `(let ((x 1))` and `(list a` do different things with
the same brackets.

Measured over every `.cicili` file in the tree — 11,547 indented code lines,
each predicted from the text above it (`node test/indent.mjs`):

| model | mispredicted | |
|---|---|---|
| the increase/decrease pair this extension used to ship | **47.0 %** | |
| shipping no `indentationRules` at all | 50.5 % | VSCode's bracket default |
| `src/indent.js` | **4.6 %** | what ships now |
| the best any table-driven indenter could do | 4.9 % | the corpus's own floor |

The regex pair was barely better than the editor's own default and nowhere near
useful, so it is gone; `language-configuration.json` ships no `indentationRules`
and `src/indent.js` does the work, wired up in `src/extension.js` as on-type
(`Enter`, `)`), range and document formatting providers. `formatOnType` is off by
default in VSCode, so the manifest turns it on under `[cicili]` only.

`src/indent.js` is a port of Emacs' `calculate-lisp-indent` plus
`lisp-indent-specform`, not a reimplementation from the idea of them — the two
halves are not separable, and an earlier version that ported only the table
lookup sat at 9.7%. It is checked against Emacs itself:

```sh
emacs -Q --batch -l tools/probe.el ../emacs \
      $(cd .. && git ls-files '*.cicili' | grep -v '^draft/' | sed 's|^|../|')
```

where `tools/probe.el` re-indents each line, records the answer and puts the
line straight back, so no line's answer shifts the next line's input. Across 13,533
code lines the port and `cicili-mode` differ on **2**, and on one of those two the
file agrees with the port. Comment lines are excluded on purpose: Emacs sends a
lone `;` to `comment-column` 40, which is a rule worth not porting.

### One table, two front ends

The arity table is `../emacs/cicili-mode.el`'s. `tools/build-indent-table.mjs`
reads its six alists and writes `src/indent-table.json`; `test/indent.mjs` fails
if the two have drifted, the same guard the Parsi grammar has against
`patterns.conf`.

Every number in those alists was checked against the corpus rather than chosen.
`CICILI_INDENT_VOTES=func,letin*` prints, per form and argument position, which
column the files actually use — which is how `func`, `for`, `cast`, `make`, the
`Maybe`/`Either` constructors and `COND` turned out to have no indent rule at
all, `IF` turned out to be Common Lisp style rather than Emacs Lisp style, and
`if`, `cond`, `case`, `progn`, `do`, `try`, `return`, `when`, `unless`,
`letin*`, `matchn`, `macrolet`, `lambda*` and `closure*` turned out to be
missing from the tables entirely. Those fixes are in the Emacs mode too.

## Working on it

```sh
npm install
npm run build     # regenerate syntaxes/cicili.tmLanguage.json + src/indent-table.json
npm test          # tokenize the real corpus and assert scopes; then indentation
```

The tokenizer test runs the grammar through vscode-textmate — the same tokenizer
VSCode uses — over `builtins.cicili`, the haskell layer and the persistent
B-Tree, so what passes there is what the editor does. Both JSON artefacts are
generated and committed; edit `tools/build-grammar.mjs` and
`../emacs/cicili-mode.el`, not the JSON.
