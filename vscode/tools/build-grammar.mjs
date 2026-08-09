// Build syntaxes/cicili.tmLanguage.json from the token lists below.
//
// THE LISTS ARE THE POINT OF THIS FILE. They are ported from
// ../../emacs/cicili-mode.el, where the same names drive both font-lock and
// indentation, and keeping them as plain arrays here means they can be diffed
// against that file by eye. Writing the alternations by hand into JSON would
// mean escaping about a hundred symbols like $>, !>, \.* and <!> twice over --
// once for the regex and once for JSON -- which is not a thing to do by hand.
//
// Run: node tools/build-grammar.mjs
import { writeFileSync } from 'node:fs';
import { fileURLToPath } from 'node:url';
import { dirname, join } from 'node:path';

const here = dirname(fileURLToPath(import.meta.url));

// ---------------------------------------------------------------- the lists

// cicili-types -- highlighted wherever a token can appear, because a type shows
// up in argument position too: (int x), (const char * s).
const TYPES = [
  'main', 'const', 'restrict', 'function', 'block',
  'func', 'this', 'void', 'integer', 'unsigned',
  'char', 'uchar', 'short', 'ushort', 'int',
  'uint', 'long', 'ulong', 'llong', 'ullong',
  'float', 'double', 'real',
  'int8_t', 'uint8_t', 'int16_t', 'uint16_t',
  'int32_t', 'uint32_t', 'int64_t', 'uint64_t',
  'int_least8_t', 'uint_least8_t', 'int_least16_t', 'uint_least16_t',
  'int_least32_t', 'uint_least32_t', 'int_least64_t', 'uint_least64_t',
  'int_fast8_t', 'uint_fast8_t', 'int_fast16_t', 'uint_fast16_t',
  'int_fast32_t', 'uint_fast32_t', 'int_fast64_t', 'uint_fast64_t',
  '__int128',
  'i8', 'u8', 'i16', 'u16', 'i32', 'u32', 'i64', 'u64', 'i128', 'u128',
  'intmax_t', 'intptr_t', 'uintptr_t', 'size_t',
  'boolean', 'symbol', 'error', 'true', 'false',
  'nil', 'auto', 'namespace', 'null',
  'byte', 'ubyte', 'timestamp', 'text', 'vector',
  'Maybe', 'Nothing', 'Just', 'Empty', 'Cons',
  'otherwise', 'String', 'List', 'array', 'object',
  'Range', 'Either', 'Left', 'Right',
  'Cell', 'Rc', 'Arc', 'show',
  'Monoid', 'Functor', 'Applicative', 'Monad',
  'default', 'Thunk',
  'move', 'ref',
  // types the layer has gained since cicili-mode.el was written
  'string', 'cell', 'rc', 'arc', 'OwnList', 'OCons', 'ONil', 'Ordering',
  'Bool', 'True', 'False', 'LT', 'EQ', 'GT', 'Tuple',
];

// cicili-keywords -- clause names, in head-of-form position only
const KEYWORDS = [
  'cicili', 'main', 'main*', 'generic', 'format',
  'code', 'header', 'source', 'make', 'guard',
  'ghost', 'module', 'include', 'var', 'lambda',
  'function', 'block', 'func', 'out',
  'enum', 'struct', 'union',
  'member', 'method', 'declare', 'typedef',
  'set', 'nth', 'not', 'and', 'or',
  'bitand', 'bitor', 'xor',
  'cof', 'aof', 'sizeof', 'typeof', 'cast',
  'switch', 'default', 'while', 'break',
  'continue', 'for', 'for-each', 'for-each-const',
  'new', 'pure', 'printf', 'scanf', 'free',
  'import',
  'let', 'letn', 'defer-let', 'using',
  'closure',
  'go', 'self', 'detach', 'join', 'cancel',
  'exit', 'exit_self', 'abort', 'assert',
  'async', 'yield', 'done',
  'async-main', 'async-main*',
  'fn', 'letin', 'letin*', 'where',
  'data', 'match', 'matchn', 'tuple', 'cast-tuple',
  'class', 'show', 'io',
  'len', 'nthcdr', 'push', 'pop',
  'head', 'tail', 'append',
  'take', 'drop', 'init', 'last',
  'hasLen', 'copy', 'fmap',
  'rc', 'impl',
  'constant', 'dead',
  'lock', 'lockn', 'Buffer', 'Slice', 'None',
  'force', 'lazy', 'iterate',
  'if', 'when', 'unless', 'return', 'progn', 'case', 'try', 'catch',
  'dolist', 'dotimes', 'null', 'symbol-name', 'def-matchable',
  'defer', 'defer*', 'shared-func-name', 'method-func-name',
  'inline-generic', 'exec-closure', 'def-closure', 'IString',
];

// cicili-attributes -- declaration attributes, head position
const ATTRIBUTES = [
  'static', 'decl', 'inline', 'extern',
  'register', 'volatile', 'auto',
  'defer', 'defer*', 'resolve', 'thread-local',
  'define', 'atomic', 'non-copy',
];

// cicili-type-attributes -- attributes that read as types, head position
const TYPE_ATTRIBUTES = ['decl', 'impl', 'import'];

// cicili-warnings -- allocation and logging forms, head position
const WARNINGS = [
  'alloc', 'malloc', 'calloc', 'realloc',
  'syslog!', 'debug!', 'warn!', 'info!',
  'error!', 'analyze!', 'analyze-data!',
];

// The symbol-shaped operators. `\.' and friends are absent from cicili-mode.el
// entirely; these are the seven that actually occur, counted over the corpus:
//   (\, 60   (\.* 37   (\\ 32   (\. 14   (\: 5   (\.+ 5   (\<> 1
// Longest first, so `\.*' is not matched as `\.' with a stray star after it.
const OPERATORS = [
  '\\.*', '\\.+', '\\<>', '\\\\', '\\.', '\\,', '\\:',
  '$$$', '$$', '$>', '$', '!>', '!!', '++', '<!>',
  '-->', '->', '=>', '<>', 't<>', '~', '!', ',', ':',
];

// ------------------------------------------------------------------ helpers

const esc = (s) => s.replace(/[.*+?^${}()|[\]\\]/g, '\\$&');

// A Cicili token ends at whitespace, a paren, a quote or a comment. Lookarounds
// rather than consumed delimiters: cicili-mode.el consumes them, which is why
// the second `int' in (f (int a) -> int) loses its face there -- the delimiter
// the next token needed had already been eaten.
const AFTER_OPEN = '(?<=\\()';
const TOKEN_START = '(?<=[\\s(])';
const TOKEN_END = '(?=[\\s()\'";]|$)';

const alt = (names) =>
  [...names].sort((a, b) => b.length - a.length).map(esc).join('|');

const headRule = (names, scope) => ({
  name: scope,
  match: `${AFTER_OPEN}(?:${alt(names)})${TOKEN_END}`,
});

const tokenRule = (names, scope) => ({
  name: scope,
  match: `${TOKEN_START}(?:${alt(names)})${TOKEN_END}`,
});

// A definition form: (func name ...).
//
// A SPECIALISED NAME IS NOT MATCHED HERE. It is written (func (<> free rc a) …)
// and belongs to #instantiation, which knows the whole (<> …) form; letting
// this rule reach into it made `<>' itself the function's name.
const defRule = (heads, scope) => ({
  match: `(?<=\\()(${heads.join('|')})\\s+(?![(])([^\\s()"';]+)`,
  captures: {
    1: { name: 'keyword.control.cicili' },
    2: { name: scope },
  },
});

// -------------------------------------------------------------- the grammar

const grammar = {
  $schema:
    'https://raw.githubusercontent.com/martinring/tmlanguage/master/tmlanguage.json',
  name: 'Cicili',
  scopeName: 'source.cicili',
  fileTypes: ['cicili'],
  patterns: [{ include: '#expression' }],
  repository: {
    expression: {
      patterns: [
        { include: '#comment' },
        { include: '#target-filename' },
        { include: '#string' },
        { include: '#character' },
        { include: '#boolean' },
        { include: '#function-quote' },
        { include: '#number' },
        { include: '#option-keyword' },
        { include: '#preprocessor' },
        { include: '#definition' },
        { include: '#instantiation' },
        // keywords BEFORE types: cicili-mode.el applies types first and
        // earlier faces win there, so `func' renders as a type despite being
        // a keyword. Here the clause wins in head position and the type wins
        // everywhere else, which is what both lists mean.
        { include: '#warning-form' },
        { include: '#attribute' },
        { include: '#type-attribute' },
        { include: '#keyword' },
        { include: '#type' },
        { include: '#operator' },
        { include: '#quote' },
        { include: '#punctuation' },
      ],
    },

    comment: {
      name: 'comment.line.semicolon.cicili',
      begin: ';',
      end: '$',
    },

    // (source "main.c" ...) and (header "x.h" ...) name their output file
    'target-filename': {
      match: '(?<=\\()(source|header)(\\s+)(".*?")',
      captures: {
        1: { name: 'keyword.control.cicili' },
        3: { name: 'string.quoted.double.filename.cicili' },
      },
    },

    string: {
      name: 'string.quoted.double.cicili',
      begin: '"',
      end: '"',
      patterns: [
        { name: 'constant.character.escape.cicili', match: '\\\\.' },
      ],
    },

    // #\Newline, #\Space, #\a -- unfaced in cicili-mode.el, which has no rule
    // for them at all; they survive there only because `#' and `\' keep their
    // inherited Lisp syntax so the parens stay balanced.
    character: {
      name: 'constant.character.cicili',
      match: '#\\\\(?:[A-Za-z][A-Za-z0-9-]*|.)',
    },

    boolean: {
      name: 'constant.language.boolean.cicili',
      match: '#[tf]' + TOKEN_END,
    },

    // #'(...) -- the function quote. Also unfaced in cicili-mode.el.
    'function-quote': {
      name: 'keyword.operator.function-quote.cicili',
      match: "#'",
    },

    number: {
      name: 'constant.numeric.cicili',
      match: `${TOKEN_START}[+-]?(?:0[xX][0-9a-fA-F]+|\\d+\\.\\d+|\\d+)[uUlLfF]*${TOKEN_END}`,
    },

    // :std :compile :link and any other target option
    'option-keyword': {
      name: 'variable.parameter.option.cicili',
      match: `${TOKEN_START}:[A-Za-z][A-Za-z0-9-]*${TOKEN_END}`,
    },

    preprocessor: {
      name: 'keyword.control.preprocessor.cicili',
      match: '(?<=\\()@[A-Za-z_][A-Za-z0-9_-]*',
    },

    definition: {
      patterns: [
        defRule(['func', 'fn', 'method', 'member'], 'entity.name.function.cicili'),
        defRule(
          ['struct', 'union', 'enum', 'generic', 'guard', 'typedef', 'class', 'data'],
          'entity.name.type.cicili'
        ),
      ],
    },

    // (<> rc a) -- the instantiated name gets its own scope, as it does in
    // cicili-mode.el through cicili-generic-face
    instantiation: {
      match: '(?<=\\()(<>)\\s+(\\(?)([^\\s()"\';]+)',
      captures: {
        1: { name: 'keyword.operator.instantiate.cicili' },
        3: { name: 'entity.name.type.instantiation.cicili' },
      },
    },

    keyword: headRule(KEYWORDS, 'keyword.control.cicili'),
    attribute: headRule(ATTRIBUTES, 'storage.modifier.cicili'),
    'type-attribute': headRule(TYPE_ATTRIBUTES, 'storage.type.cicili'),
    'warning-form': headRule(WARNINGS, 'keyword.other.alloc.cicili'),
    type: tokenRule(TYPES, 'support.type.cicili'),

    operator: {
      name: 'keyword.operator.cicili',
      match: `(?<=[\\s(])(?:${alt(OPERATORS)})${TOKEN_END}`,
    },

    quote: {
      name: 'keyword.operator.quote.cicili',
      match: "'",
    },

    punctuation: {
      patterns: [
        { name: 'punctuation.section.parens.cicili', match: '[()]' },
        // { } and [ ] are real delimiters in compiler.lisp's reader --
        // read-delimited-list macro characters -- but symbol constituents in
        // cicili-mode.el, so '{ 1 2 3 } has no matching or folding there.
        { name: 'punctuation.section.braces.cicili', match: '[{}]' },
        { name: 'punctuation.section.brackets.cicili', match: '\\[|\\]' },
      ],
    },
  },
};

writeFileSync(
  join(here, '..', 'syntaxes', 'cicili.tmLanguage.json'),
  JSON.stringify(grammar, null, 2) + '\n'
);
console.log('wrote syntaxes/cicili.tmLanguage.json');
