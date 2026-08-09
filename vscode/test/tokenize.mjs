// Tokenize real corpus files with the shipped grammar and assert scopes.
//
// This is the whole reason to prefer a generated grammar over an eyeballed one:
// vscode-textmate is the SAME tokenizer VSCode runs, so what passes here is
// what the editor does. No GUI involved.
//
// Run: node test/tokenize.mjs
import { readFileSync } from 'node:fs';
import { dirname, join } from 'node:path';
import { fileURLToPath } from 'node:url';
import { createRequire } from 'node:module';

const require = createRequire(import.meta.url);
const vsctm = require('vscode-textmate');
const oniguruma = require('vscode-oniguruma');

const here = dirname(fileURLToPath(import.meta.url));
const root = join(here, '..');
const repo = join(root, '..');

const wasm = readFileSync(
  require.resolve('vscode-oniguruma/release/onig.wasm')
);
await oniguruma.loadWASM(wasm.buffer.slice(wasm.byteOffset, wasm.byteOffset + wasm.byteLength));

const registry = new vsctm.Registry({
  onigLib: Promise.resolve({
    createOnigScanner: (s) => new oniguruma.OnigScanner(s),
    createOnigString: (s) => new oniguruma.OnigString(s),
  }),
  loadGrammar: async (scope) =>
    scope === 'source.cicili'
      ? vsctm.parseRawGrammar(
          readFileSync(join(root, 'syntaxes', 'cicili.tmLanguage.json'), 'utf8'),
          'cicili.tmLanguage.json'
        )
      : null,
});

const grammar = await registry.loadGrammar('source.cicili');

/** Every token of a file, as {line, text, scopes}. */
function tokenize(text) {
  const out = [];
  let rule = vsctm.INITIAL;
  text.split(/\r?\n/).forEach((line, i) => {
    const r = grammar.tokenizeLine(line, rule);
    for (const t of r.tokens) {
      out.push({
        line: i + 1,
        text: line.slice(t.startIndex, t.endIndex),
        scopes: t.scopes,
      });
    }
    rule = r.ruleStack;
  });
  return out;
}

let failed = 0;
const check = (what, got, want) => {
  const ok = got === want;
  if (!ok) failed++;
  console.log(
    `${ok ? 'ok  ' : 'FAIL'} ${what.padEnd(52)} ${ok ? got : `got ${got} want ${want}`}`
  );
};

/** Does any token whose text is exactly `text` carry a scope containing `scope`? */
const scoped = (toks, text, scope) =>
  toks.some((t) => t.text === text && t.scopes.some((s) => s.includes(scope)));

// ------------------------------------------------------------------ cases

const src = (p) => readFileSync(join(repo, p), 'utf8');

// 1. A hand-written snippet covering the six corrections over cicili-mode.el
const snippet = `;;; a comment
(source "main.c"
  (make :std #t :compile #f)
  (typedef (Tuple int int) User)
  (func (<> free rc a) ((int x) (const char * s)) (out int)
    (letn ((auto v . #'(alloc int 4)))
      (set (nth 0 v) '{ 1 2 3 })
      (putchar #\\Newline)
      ((\\.* show d) stdout d)
      (match m (Just k (=> obj m 1)) (default 0))
      (return LIST))))
`;
const t = tokenize(snippet);

check('; opens a line comment',
  t.some((x) => x.line === 1 && x.scopes.some((s) => s.includes('comment.line'))), true);
check('the target filename is a filename string',
  t.some((x) => x.text === '"main.c"' && x.scopes.some((s) => s.includes('filename'))), true);
check(':std is an option keyword', scoped(t, ':std', 'variable.parameter.option'), true);
check('#t is a boolean', scoped(t, '#t', 'constant.language.boolean'), true);
check('#f is a boolean', scoped(t, '#f', 'constant.language.boolean'), true);
check("#' is the function quote", scoped(t, "#'", 'keyword.operator.function-quote'), true);
check('#\\Newline is a character', scoped(t, '#\\Newline', 'constant.character'), true);
check('{ is a brace, not a symbol', scoped(t, '{', 'punctuation.section.braces'), true);
check('} is a brace, not a symbol', scoped(t, '}', 'punctuation.section.braces'), true);
check('\\.* is an operator', scoped(t, '\\.*', 'keyword.operator'), true);
check('=> is an operator', scoped(t, '=>', 'keyword.operator'), true);
check('func is a keyword in head position', scoped(t, 'func', 'keyword.control'), true);
check('<> is the instantiation operator', scoped(t, '<>', 'keyword.operator.instantiate'), true);
check('the instantiated name is a type name',
  scoped(t, 'free', 'entity.name.type.instantiation'), true);

// the adjacent-token bug cicili-mode.el has: in (const char * s) it loses
// `char' because the type rule consumed the space `const' needed
check('const is a type', scoped(t, 'const', 'support.type'), true);
check('char is a type even next to const', scoped(t, 'char', 'support.type'), true);
check('both ints in a param list are types',
  t.filter((x) => x.text === 'int' && x.scopes.some((s) => s.includes('support.type'))).length >= 2,
  true);

// case sensitivity: cicili reads with readtable-case :preserve, and
// cicili-mode.el matches case-insensitively by inheritance, so LIST wrongly
// highlights as the List type there
check('LIST is NOT the List type (case matters)', scoped(t, 'LIST', 'support.type'), false);

// 2. Real corpus files must tokenize with no unscoped garbage and no runaway
//    string. A string that never closes shows up as the last token of the file
//    still carrying string scope.
for (const p of [
  'test/haskell/word-count.cicili',
  'lib/std/haskell/list.cicili',
  'lib/std/haskell/persistent-btree.cicili',
  'builtins.cicili',
]) {
  const toks = tokenize(src(p));
  const last = toks[toks.length - 1];
  check(`${p} ends outside any string`,
    !last.scopes.some((s) => s.includes('string.quoted')), true);
  check(`${p} produced tokens`, toks.length > 100, true);
}

// 3. The corpus's own operators are recognised where they really occur.
//    list.cicili has no backslash-lambda in it at all -- applicative.cicili is
//    where they live, which is worth knowing before asserting on the wrong file.
const apToks = tokenize(src('lib/std/haskell/applicative.cicili'));
check('\\\\ (lambda) is an operator in applicative.cicili',
  scoped(apToks, '\\\\', 'keyword.operator'), true);
const listToks = tokenize(src('lib/std/haskell/list.cicili'));
check('$> is an operator in list.cicili',
  scoped(listToks, '$>', 'keyword.operator'), true);

console.log(failed === 0 ? '\ncicili grammar: all ok' : `\ncicili grammar: ${failed} FAILED`);
process.exit(failed === 0 ? 0 : 1);
