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
   constituents, so `'{ 1 2 3 }` has no matching, no folding and no indentation
   there.
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

## Working on it

```sh
npm install
node tools/build-grammar.mjs   # regenerate syntaxes/cicili.tmLanguage.json
node test/tokenize.mjs         # tokenize the real corpus and assert scopes
```

The test runs the grammar through vscode-textmate — the same tokenizer VSCode
uses — over `builtins.cicili`, the haskell layer and the persistent B-Tree, so
what passes here is what the editor does. The grammar JSON is generated and
committed; edit the lists in `tools/build-grammar.mjs`, not the JSON.
