// Indentation for Cicili, as formatting providers.
//
// Highlighting is declarative -- a grammar and a language configuration, no
// code. Indentation cannot be: a language configuration's increase/decrease
// pair mispredicts 47% of the corpus (test/indent.mjs), which is no better
// than the editor's own bracket default, so shipping one would replace
// something adequate with something wrong. src/indent.js does the real thing
// and lands within two lines of Emacs across 13,533 lines of code.
//
// Three providers, which between them cover the ways a line gets indented:
//
//   on type, "\n"   pressing Enter, which is the one that matters
//   on type, ")"    closing a form -- the closer belongs at the parent's
//                   column, and typing it should move it there
//   range/document  Format Selection and Format Document
//
// The language configuration keeps `brackets', so matching, colouring and
// folding still work; only indentation is taken over here.
//
// SPACES, ALWAYS. cicili-mode.el sets indent-tabs-mode to nil and not one line
// in the corpus is tab-indented, so a tab in a .cicili file is a mistake this
// is entitled to fix rather than a setting to honour.

const vscode = require('vscode');
const { indentFor, indentOf } = require('./indent.js');
const table = require('./indent-table.json');

/** form name -> distinguished argument count, or null for "no rule" */
const ARITY = new Map(Object.entries(table));

const LANG = { language: 'cicili' };

/**
 * Re-indent lines `first` through `last` of `document`.
 *
 * Each line is measured against the text above it INCLUDING this run's own
 * earlier edits, because a form with no indent rule lines up with the sibling
 * above it -- so fixing one line moves the ones under it.
 */
function reindent(document, first, last) {
  const lines = document.getText().split(/\r?\n/);
  const edits = [];
  for (let n = first; n <= last && n < lines.length; n++) {
    if (lines[n].trim() === '') continue;
    const want = indentFor(lines, n, ARITY);
    if (want === null) continue; // inside a string: leave it alone
    const have = indentOf(lines[n]);
    const next = ' '.repeat(want);
    const current = lines[n].slice(0, have);
    if (current === next) continue;
    lines[n] = next + lines[n].slice(have);
    edits.push(vscode.TextEdit.replace(new vscode.Range(n, 0, n, have), next));
  }
  return edits;
}

function activate(context) {
  const rangeProvider = {
    provideDocumentRangeFormattingEdits(document, range) {
      return reindent(document, range.start.line, range.end.line);
    },
  };

  context.subscriptions.push(
    vscode.languages.registerOnTypeFormattingEditProvider(
      LANG,
      {
        provideOnTypeFormattingEdits(document, position) {
          return reindent(document, position.line, position.line);
        },
      },
      '\n',
      ')'
    ),
    vscode.languages.registerDocumentRangeFormattingEditProvider(LANG, rangeProvider),
    vscode.languages.registerDocumentFormattingEditProvider(LANG, {
      provideDocumentFormattingEdits(document) {
        return reindent(document, 0, document.lineCount - 1);
      },
    })
  );
}

function deactivate() {}

module.exports = { activate, deactivate };
