// Build src/indent-table.json from ../../emacs/cicili-mode.el.
//
// The extension cannot read an .el file at runtime -- the repository is not
// there -- so the table is generated the way the grammar is, and
// test/indent.mjs fails if the two have drifted apart. One table, two front
// ends: Emacs consults the alists directly, VSCode ships this.
//
// Run: node tools/build-indent-table.mjs
import { writeFileSync } from 'node:fs';
import { dirname, join } from 'node:path';
import { fileURLToPath } from 'node:url';
import { ARITY, GROUPS } from './indent-table.mjs';

const here = dirname(fileURLToPath(import.meta.url));
const out = join(here, '..', 'src', 'indent-table.json');

// JSON has no undefined and the order does not matter, so this is just
// name -> number or null, sorted so a diff of the generated file is readable.
const table = {};
for (const k of [...ARITY.keys()].sort()) table[k] = ARITY.get(k);

writeFileSync(out, JSON.stringify(table, null, 1) + '\n');
console.log(
  `wrote src/indent-table.json: ${Object.keys(table).length} names from ` +
    `${GROUPS.length} tables in emacs/cicili-mode.el`
);
