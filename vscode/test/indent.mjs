// Does the extension indent Cicili the way Cicili is written?
//
// Cicili is s-expression syntax, and what indents s-expressions is
// lisp-indent-function: the head of the enclosing form is looked up in an
// arity table, its distinguished arguments take four columns from the open
// paren, the first body form takes two, and everything else lines up with the
// sibling above it. A VSCode language configuration cannot express any of
// that -- its increase/decrease pair knows one thing, "a level in, a level
// out" -- which is why this extension indents in code (src/indent.js) and
// ships no indentationRules at all.
//
// Every line of every .cicili file in the tree is predicted from the text
// above it, under four models:
//
//   rules     the increase/decrease pair this extension USED to ship. Kept
//             here, not in language-configuration.json, so the number that
//             justified removing it stays reproducible.
//   none      what VSCode does with no indentationRules: Enter after a line
//             ending in an open bracket indents, otherwise the new line keeps
//             the previous line's indent. The baseline any rule must beat.
//   lisp      src/indent.js, which is what the extension actually does.
//   oracle    the best a table-driven Lisp indenter could possibly do here.
//             For each (form name, argument position) it is told, for free,
//             which of the four candidate columns the corpus most often uses.
//             Whatever this one still misses is the corpus disagreeing with
//             itself, and no rule can recover it -- so it is the floor.
//
// src/indent.js is also checked against Emacs directly, which is a stronger
// test than any of these and does not fit in a .mjs file; see README.md for
// the batch command and its result (2 lines out of 13,533).
//
// Run: node test/indent.mjs
import { readFileSync, globSync } from 'node:fs';
import { dirname, join } from 'node:path';
import { fileURLToPath } from 'node:url';
import { createRequire } from 'node:module';
import { ARITY } from '../tools/indent-table.mjs';

const require = createRequire(import.meta.url);
const { indentFor } = require('../src/indent.js');
const shipped = require('../src/indent-table.json');

const here = dirname(fileURLToPath(import.meta.url));
const root = join(here, '..');
const repo = join(root, '..');

const cfg = JSON.parse(readFileSync(join(root, 'language-configuration.json'), 'utf8'));
const indentOf = (line) => (line.match(/^ */) || [''])[0].length;
const blank = (line) => line.trim() === '';

let failed = 0;
const check = (what, got, want) => {
  const ok = got === want;
  if (!ok) failed++;
  console.log(
    `${ok ? 'ok  ' : 'FAIL'} ${what.padEnd(56)} ${ok ? got : `got ${got} want ${want}`}`
  );
};

// ------------------------------------------- 1. the table has not drifted

// src/indent-table.json is generated from emacs/cicili-mode.el by
// tools/build-indent-table.mjs. If someone edits the Emacs mode's arity for a
// form and does not regenerate, VSCode and Emacs silently disagree.
const fresh = Object.fromEntries([...ARITY.keys()].sort().map((k) => [k, ARITY.get(k)]));
const drifted = [...new Set([...Object.keys(fresh), ...Object.keys(shipped)])].filter(
  (k) => fresh[k] !== shipped[k] || (k in fresh) !== (k in shipped)
);
if (drifted.length)
  console.log(`     run: node tools/build-indent-table.mjs   (${drifted.slice(0, 8).join(' ')})`);
check('src/indent-table.json matches cicili-mode.el', drifted.length, 0);
check('the table is not empty', Object.keys(shipped).length > 200, true);

// -------------------------------------- 2. no indentation rules are shipped

// The measurement below is why. A pair that loses to the editor's own default
// is worse than none, because it overrides the default with something wrong.
check('language-configuration.json ships no indentationRules',
  cfg.indentationRules === undefined, true);

// ------------------------------------------------- 3. against the corpus

// what language-configuration.json used to say
const inc = /^((?![^()]*\)).)*\([^()]*$/;
const dec = /^\s*\)/;
// VSCode's OnEnterSupport builds its bracket defaults from `brackets': a line
// whose last non-space character opens a pair indents the next line.
const opens = new RegExp(
  '(?:' + cfg.brackets.map(([o]) => o.replace(/[.*+?^${}()|[\]\\]/g, '\\$&')).join('|') + ')\\s*$'
);

/** the four columns any table-driven Lisp indenter chooses between */
const candidates = (f) => [
  f.col + 4, // a distinguished argument
  f.col + 2, // a body form
  f.firstArgCol !== null ? f.firstArgCol : f.col + 1, // under the first argument
  f.col + 1, // under the head
];

/** Enough of a paren stack per line to say which form a line sits in and
 *  which of its arguments the line begins. src/indent.js does this properly;
 *  this one exists to key the oracle and the CICILI_INDENT_VOTES dump, and so
 *  deliberately does NOT reuse it -- a ruler made out of the thing it measures
 *  cannot find a fault in it. */
function frames(text) {
  const lines = text.split(/\r?\n/);
  const states = [];
  const stack = [];
  let inString = false;

  lines.forEach((line, ln) => {
    states.push(stack.map((f) => ({ ...f })));
    let prefix = null;
    const sexp = (c) => {
      const top = stack[stack.length - 1];
      const at = prefix !== null ? prefix : c;
      prefix = null;
      if (!top) return;
      if (top.args === 0 && top.pendingHead) { top.pendingHead = false; return; }
      if (top.firstArgCol === null && top.headLine === ln) top.firstArgCol = at;
      top.args++;
    };
    for (let i = 0; i < line.length; i++) {
      const c = line[i];
      if (inString) {
        if (c === '\\') i++;
        else if (c === '"') inString = false;
        continue;
      }
      if (c === ';') break;
      if (/\s/.test(c)) continue;
      if (c === '"') { sexp(i); inString = true; continue; }
      if (c === '#' && line[i + 1] === '\\') {
        sexp(i);
        const m = line.slice(i + 2).match(/^[^\s()"';]*/);
        i += 2 + Math.max(1, m[0].length) - 1;
        continue;
      }
      if (c === "'" || c === '`' || c === ',') {
        if (prefix === null) prefix = i;
        if (c === ',' && line[i + 1] === '@') i++;
        continue;
      }
      if (c === '#' && line[i + 1] === "'") { if (prefix === null) prefix = i; i++; continue; }
      if (c === '(') {
        sexp(i);
        prefix = null;
        const m = line.slice(i + 1).match(/^\s*([^\s()"';]+)/);
        stack.push({
          col: i, head: m ? m[1] : null, pendingHead: !!m,
          headLine: ln, args: 0, firstArgCol: null,
        });
        continue;
      }
      if (c === ')') { stack.pop(); prefix = null; continue; }
      const tok = line.slice(i).match(/^[^\s()"';`',]+/);
      sexp(i);
      i += (tok ? tok[0].length : 1) - 1;
    }
  });
  return { lines, states };
}

const wrong = { rules: 0, none: 0, lisp: 0, oracle: 0 };
let counted = 0;
const byHead = new Map();
const votes = new Map();
const rows = [];

const files = globSync('**/*.cicili', { cwd: repo })
  .filter((p) => !p.startsWith('vscode/') && !p.startsWith('draft/'))
  .sort();

for (const p of files) {
  const text = readFileSync(join(repo, p), 'utf8');
  if (/^\t/m.test(text)) continue; // tab-indented: not this ruler's unit
  const { lines, states } = frames(text);

  for (let i = 1; i < lines.length; i++) {
    if (blank(lines[i]) || blank(lines[i - 1])) continue;
    // Emacs indents a comment line by comment-column -- a lone `;' goes to
    // column 40 -- which is a rule this extension deliberately does not port.
    if (/^\s*;/.test(lines[i])) continue;
    const stack = states[i];
    if (!stack.length) continue; // top level, indent 0, uninteresting
    const f = stack[stack.length - 1];
    rows.push({
      p, i, f,
      prev: lines[i - 1],
      line: lines[i],
      actual: indentOf(lines[i]),
      lisp: indentFor(lines, i, ARITY),
    });

    const key = `${f.head} ${Math.min(f.args, 3)}`;
    const pick = candidates(f).findIndex((c) => c === indentOf(lines[i]));
    if (!votes.has(key)) votes.set(key, [0, 0, 0, 0]);
    if (pick >= 0) votes.get(key)[pick]++;
  }
}

for (const row of rows) {
  const { f, actual } = row;
  counted++;

  const predRules =
    indentOf(row.prev) + (inc.test(row.prev) ? 2 : 0) - (dec.test(row.line) ? 2 : 0);
  if (predRules !== actual) wrong.rules++;

  const predNone = indentOf(row.prev) + (opens.test(row.prev.replace(/;.*$/, '')) ? 2 : 0);
  if (predNone !== actual) wrong.none++;

  if (row.lisp !== actual) {
    wrong.lisp++;
    const k = f.head === null ? '(<list>)' : f.head;
    byHead.set(k, (byHead.get(k) || 0) + 1);
  }

  const cs = candidates(f);
  const v = votes.get(`${f.head} ${Math.min(f.args, 3)}`);
  let best = 0;
  for (let k = 1; k < 4; k++) if (v[k] > v[best]) best = k;
  if (cs[best] !== actual) wrong.oracle++;
}

const pct = (w) => ((w / counted) * 100).toFixed(1).padStart(5);
console.log(`\n${files.length} .cicili files, ${counted} indented code lines\n`);
console.log(`  rules   ${pct(wrong.rules)}%  mispredicted   (the increase/decrease pair, removed)`);
console.log(`  none    ${pct(wrong.none)}%  mispredicted   (VSCode's bracket default -- the baseline)`);
console.log(`  lisp    ${pct(wrong.lisp)}%  mispredicted   (src/indent.js -- what ships)`);
console.log(`  oracle  ${pct(wrong.oracle)}%  mispredicted   (best possible per form and position)\n`);

const top = [...byHead].sort((a, b) => b[1] - a[1]).slice(0, 10);
if (top.length) console.log('  where it misses: ' + top.map(([h, n]) => `${h}=${n}`).join(' ') + '\n');

// CICILI_INDENT_VOTES=func,letin* prints what the corpus actually does for a
// form at each argument position. This is how an arity gets decided -- every
// number changed in cicili-mode.el's tables was checked against this rather
// than remembered.
if (process.env.CICILI_INDENT_VOTES) {
  const want = process.env.CICILI_INDENT_VOTES.split(',');
  console.log('  head arg#   +4    +2  argA  head   (method)');
  for (const [key, v] of [...votes].sort()) {
    const [h, a] = key.split(' ');
    if (!want.includes(h) || v.reduce((x, y) => x + y, 0) < 5) continue;
    console.log(
      `  ${h.padEnd(10)} ${Number(a) + 1}  ` +
        v.map((n) => String(n).padStart(4)).join('  ') +
        `   (${ARITY.get(h)})`
    );
  }
  console.log();
}

// The corpus is hand-written and not perfectly consistent with itself, so
// nothing here reaches zero -- the oracle says how close anything could get.
// What the extension has to do is land on that floor, and beat by a wide
// margin the declarative rules it replaced.
check('src/indent.js reaches the corpus floor', wrong.lisp <= wrong.oracle * 1.1, true);
check('and beats the increase/decrease pair by 5x', wrong.rules > wrong.lisp * 5, true);
check('which itself barely beat shipping nothing', wrong.rules > wrong.none * 0.8, true);

console.log(failed === 0 ? '\ncicili indentation: all ok' : `\ncicili indentation: ${failed} FAILED`);
process.exit(failed === 0 ? 0 : 1);
