// Indentation for Cicili, ported from calculate-lisp-indent.
//
// A VSCode language configuration cannot indent an s-expression language: its
// increase/decrease pair says "a level in, a level out", and Lisp indentation
// is not levels. It is a lookup -- the head of the enclosing form is found in
// an arity table, its distinguished arguments take four columns from the open
// paren, the first body form takes two, and everything else lines up with the
// sibling above it. test/indent.mjs measures both against the corpus; the
// regex pair misses 47% of lines, this misses about 3%.
//
// The port follows Emacs' own two-step shape, because the pieces are not
// separable: calculate-lisp-indent first walks to a position -- `normal
// indent' -- and only then asks the indent function, which is free to answer
// "no rule" and get that position back. Reimplementing only the table lookup
// and guessing at the rest is what took the earlier attempt to 9.7%.
//
// The arity table itself is cicili-mode.el's, read by tools/indent-table.mjs,
// so the Emacs mode and this stay one table with two front ends.

/** Is a form's opening paren at column 0, i.e. does a defun start here? */
const startsDefun = (line) => /^\(/.test(line);

/** The column of the first non-blank character. */
const indentOf = (line) => (line.match(/^[ \t]*/) || [''])[0].length;

/**
 * Walk `lines` from `from` up to (not including) `to`, and return the paren
 * stack as it stands at the start of line `to`.
 *
 * Each frame carries what calculate-lisp-indent reads out of a parse state:
 *
 *   col          column of the open paren -- (elt state 1)
 *   headCol      column of the form's first element, which is col + 1 unless
 *                whitespace follows the paren
 *   head         text of the first element, or null when it is itself a list
 *   wsAfterOpen  whether whitespace follows the open paren
 *   headLine     line the first element starts on
 *   done         complete sexps in this form, the first element included --
 *                nil-ness of (elt state 2) is `done === 0'
 *   args         complete sexps excluding the first element
 *   firstArgCol  column of the first argument when it starts on headLine
 *   lastLine     line the LAST COMPLETE sexp starts on, which is the line
 *                Emacs lines a continuation up with
 *   lastColonCol column of the last `:option' token seen on lastLine
 */
function scan(lines, from, to) {
  const stack = [];
  let inString = false;
  let strLine = 0, strCol = 0; // a string may span lines; its START is what counts

  const complete = (startLine, startCol, text, symbolic) => {
    const top = stack[stack.length - 1];
    if (!top) return;
    top.done++;
    top.lastLine = startLine;
    if (top.done === 1) {
      top.head = text; // null when the first element is a list
      // cicili-indent-function only consults the table when the first element
      // is a word or symbol.  A list, a string, or anything behind a reader
      // prefix takes the other branch and lines up instead.
      top.headSymbol = !!symbolic;
      top.headCol = startCol;
      top.headLine = startLine;
      return;
    }
    top.args++;
    if (top.args === 1 && startLine === top.headLine) top.firstArgCol = startCol;
  };

  for (let ln = from; ln < to; ln++) {
    const line = lines[ln];
    let prefix = null; // column of a pending ' ` #' -- backward-prefix-chars

    for (let i = 0; i < line.length; i++) {
      const c = line[i];
      if (inString) {
        if (c === '\\') i++;
        else if (c === '"') { inString = false; complete(strLine, strCol, '"', false); }
        continue;
      }
      if (c === ';') break; // line comment
      if (c === ' ' || c === '\t') continue;

      const at = prefix !== null ? prefix : i;

      if (c === '"') {
        inString = true;
        strLine = ln;
        strCol = at;
        prefix = null;
        continue;
      }
      // #\( and #\) are character literals, not parens
      if (c === '#' && line[i + 1] === '\\') {
        const m = line.slice(i + 2).match(/^[^\s()"';]*/);
        i += 2 + Math.max(1, m[0].length) - 1;
        complete(ln, at, '#\\', false);
        prefix = null;
        continue;
      }
      if (c === "'" || c === '`' || c === ',') {
        if (prefix === null) prefix = i;
        if (c === ',' && line[i + 1] === '@') i++;
        continue;
      }
      if (c === '#' && line[i + 1] === "'") { if (prefix === null) prefix = i; i++; continue; }

      if (c === '(') {
        const ws = /^[ \t]/.test(line.slice(i + 1));
        stack.push({
          col: i,
          startLine: ln,
          startCol: at,
          open: c,
          wsAfterOpen: ws,
          head: null,
          headCol: i + 1,
          headLine: ln,
          done: 0,
          args: 0,
          firstArgCol: null,
          lastLine: ln,
          lastColonCol: null,
        });
        prefix = null;
        continue;
      }
      if (c === ')') {
        const f = stack.pop();
        if (f) complete(f.startLine, f.startCol, null, false); // a list has no head
        prefix = null;
        continue;
      }

      const tok = line.slice(i).match(/^[^\s()"';`',]+/);
      const text = tok ? tok[0] : c;
      // `\' is an escape character in the Lisp syntax table, not a symbol
      // constituent, so a form headed by `\.' or `\\' takes the not-a-symbol
      // branch and lines up under its head -- which is what the corpus does
      // with the composition operators, and why the ("\\" . 1) entry in
      // cicili-mode.el has never actually applied to anything.
      complete(ln, at, text, prefix === null && text[0] !== '\\');
      const top = stack[stack.length - 1];
      if (top && text[0] === ':' && top.lastLine === ln) top.lastColonCol = at;
      i += text.length - 1;
      prefix = null;
    }
  }
  return { stack, inString };
}

/**
 * The column line `n` should be indented to, given lines[0..n-1] as they are.
 * `arity` maps a form name to its number of distinguished arguments, to null
 * for "no rule -- line up under the first argument", or is missing the name
 * entirely.
 *
 * Returns null when the line is inside a string, meaning leave it alone.
 */
function indentFor(lines, n, arity) {
  let from = 0;
  for (let i = n - 1; i >= 0; i--)
    if (startsDefun(lines[i])) { from = i; break; }

  const { stack, inString } = scan(lines, from, n);
  if (inString) return null;
  if (!stack.length) return 0; // top level
  const f = stack[stack.length - 1];

  // Nothing complete inside the form yet: the line follows the open paren
  // directly, and calculate-lisp-indent answers without asking the hook.
  if (f.done === 0) return f.col + 1;

  // The first element is not a word or symbol -- a list, a string, a quoted
  // form.  There is no name to look up, so the form lines up under its first
  // element, or under the first thing on the line the last complete sexp
  // started on.
  if (!f.headSymbol)
    return f.lastLine === f.headLine ? f.headCol : indentOf(lines[f.lastLine]);

  // --- normal indent: the position calculate-lisp-indent walks to ----------
  let ni;
  if (f.lastLine === f.headLine) {
    // the first line to start within this form
    ni =
      f.done === 1 || f.wsAfterOpen
        ? f.headCol // nothing here but the first element
        : f.firstArgCol !== null
          ? f.firstArgCol
          : f.headCol;
  } else {
    ni = indentOf(lines[f.lastLine]);
  }

  // A line that begins an option keyword lines up under the preceding one:
  //   (make :std #t
  //         :compile #f)
  // Emacs walks back to the FIRST sexp of the previous line to do this, not to
  // the nearest keyword on it, which is why (make :std #t :compile #f) spread
  // over two lines aligns on the `:std' and not on the `:compile'.
  const cur = lines[n];
  if (
    cur !== undefined &&
    /^[ \t]*:/.test(cur) &&
    f.lastLine !== f.headLine &&
    /^[ \t]*:/.test(lines[f.lastLine])
  )
    return indentOf(lines[f.lastLine]);

  // --- and now the indent function ----------------------------------------
  const method = arity.get(f.head);
  if (method === undefined) {
    // lisp-indent-defform, which cicili-indent-function keeps for def... forms
    if (f.head.length > 3 && /^(def|DEF)/.test(f.head)) return f.col + 2;
    return ni; // unknown name: the hook answers nil, so normal indent stands
  }
  if (method === null) return ni; // known, and known to have no rule

  // lisp-indent-specform. `count' is what its loop has left after skipping the
  // arguments that precede this line; the first two distinguished arguments
  // take two body indents, a third or later one falls back to normal indent,
  // and only the FIRST undistinguished argument gets the single body indent --
  // the ones after it line up with it, which is why they hold their column
  // through a form of any length.
  const body = f.col + 2;
  const count = method - f.args;
  if (count > 0) return method - count <= 1 ? f.col + 4 : ni;
  if (count === 0 && (method === 0 || body <= ni)) return body;
  return ni;
}

/** Indent every line of `text`, each against the ORIGINAL lines before it. */
function indentAll(text, arity) {
  const lines = text.split(/\r?\n/);
  return lines.map((line, n) =>
    line.trim() === '' ? indentOf(line) : indentFor(lines, n, arity)
  );
}

// CommonJS: the VSCode extension host requires this, and test/indent.mjs
// pulls it in through createRequire.
module.exports = { scan, indentFor, indentAll, indentOf };
