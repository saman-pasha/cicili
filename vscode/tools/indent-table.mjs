// The indentation arity table, DERIVED FROM ../../emacs/cicili-mode.el rather
// than transcribed from it.
//
// cicili-mode.el's six tables carry a `("name" . N)' per entry, where N is the
// number of distinguished arguments -- exactly what an integer
// `lisp-indent-function' property means. cicili-indent-table merges them in a
// fixed order with later groups winning; this reproduces that merge, so a rule
// changed in the Emacs mode cannot silently disagree with what the tests here
// measure.
import { readFileSync } from 'node:fs';
import { dirname, join } from 'node:path';
import { fileURLToPath } from 'node:url';

const here = dirname(fileURLToPath(import.meta.url));
const el = readFileSync(join(here, '..', '..', 'emacs', 'cicili-mode.el'), 'utf8');

// cicili-indent-table's dolist order. Later groups win on collision -- `func'
// is 1 in both cicili-types and cicili-keywords, but `main' is 0 in each and
// `impl' is 1 as a keyword and 1 as a type-attribute, so the order matters
// less than it looks; it is preserved anyway because the Emacs mode has it.
export const GROUPS = [
  'cicili-types',
  'cicili-keywords',
  'cicili-attributes',
  'cicili-type-attributes',
  'cicili-warnings',
  'cicili-common-lisp-forms',
];

/** The body of `(defconst NAME '( ... ) "docstring")', up to the docstring. */
function groupBody(name) {
  const at = el.indexOf(`(defconst ${name}`);
  if (at < 0) throw new Error(`${name} is not in cicili-mode.el`);
  // stop at the docstring, which is the first `"' at the start of a line's
  // content -- the entries themselves quote names, so a plain indexOf('"')
  // would stop at the very first entry.
  const rest = el.slice(at);
  const end = rest.search(/\n {2}"/);
  return end < 0 ? rest : rest.slice(0, end);
}

// name -> number of distinguished arguments, or null for "no indent rule, so
// arguments line up under the first one". A name ABSENT from the map is a
// different thing again: nothing is known about it.
export const ARITY = new Map();
for (const g of GROUPS) {
  for (const m of groupBody(g).matchAll(/\("((?:[^"\\]|\\.)*)"(?:\s*\.\s*(\d+))?\)/g)) {
    // ("\\" . 1) in elisp source is the one-character name \
    ARITY.set(m[1].replace(/\\(.)/g, '$1'), m[2] === undefined ? null : Number(m[2]));
  }
}

if (ARITY.size < 200)
  throw new Error(`only ${ARITY.size} indent entries parsed from cicili-mode.el`);
