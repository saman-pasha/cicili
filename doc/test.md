# The test suite

`test/` holds three folders and a runner.

| folder | what it covers | green? |
|---|---|---|
| `test/c` | every pure-C Cicili clause, one file per clause family | yes |
| `test/std` | the `lib/std` types and collections | yes |
| `test/haskell` | the Haskell layer | no, see below |

## Running

```sh
sh test/run.sh                  # everything under test/c and test/std
sh test/run.sh test/c/control   # one target, by path without the extension
```

Each test's `main` returns the number of failed assertions, and every assertion
prints `ok` or `FAIL` with the value it got. So a green run means the C compiled
*and* the program agreed with every expectation.

**`cicili.lisp` exits 0 even when the C compiler fails**, so the exit code alone
is not a verdict. `run.sh` also checks the transpiler log for an unhandled
condition, for `cicili exited with status: (NIL NIL <non-zero>)` and for
`error generated`, then runs the binary and requires exit 0.

`test/haskell` is skipped. The Haskell prelude load is commented out in
`cicili.lisp` while `lib/std` is the focus, because its `match` would shadow the
inference-driven one in `builtins.cicili`.

## What is in test/c

| file | clauses |
|---|---|
| `types` | every primitive spelling, `auto`, `typeof`, `typedef`, `cast`, the type descriptor |
| `variable` | `var`, `let`, `letn`, the storage and qualifier attributes |
| `operator` | arithmetic, increment, relational, logical, bitwise, assignment, `?`, `sizeof`, `aof`/`cof`, `nth` |
| `control` | `if`, `cond`, `switch`/`case`/`default`, `while`, `do`, `for`, `break`, `continue`, `block`, `progn` |
| `aggregate` | `struct`, `union`, `enum`, `member`, `declare`, nesting, forward declaration, `$` and `->` |
| `function` | `func`, `out`, parameters, function pointers, variadics, multi-value returns, `lambda`, `closure` |
| `memory` | pointers, `alloc`, `malloc`/`free`, `memcpy`/`memset`, the `defer` attribute |
| `preprocess` | `include`, `@define`, `@undef`, `@ifdef`/`@ifndef`/`@if`/`@elif`/`@else`/`@endif`, `code` |
| `macro` | `DEFMACRO`, `macrolet`, `generic`, `<>`, `$$$` |
| `string` | arrays, string literals, character literals and the named special characters |
| `shared` | a `header` target with a `guard`, included by a `source` in the same file |
| `library` | several sources in one file: three objects, a libtool `.la` library, and an executable linked against it |

## What is in test/std

| file | covers |
|---|---|
| `maybe` | `just` / `nothing` reading the out type, `match` / `matchn`, a `let` falling back to the value's type, the back-end constructors |
| `either` | `right` / `left` reading the out type, `match` / `matchn`, two instantiations sharing neither half, the back-end constructors |
| `array` | `new^array`, `len^array`, `nth^array`, `let^array` / `take^array`, and the bounds-checked `nth` benchmark |
| `cell` | `new^cell`, borrow (`let^cell` / `letn^cell`) and consume (`take^cell` / `taken^cell`) |
| `rc` | `new^rc`, `clone^rc`, `let^rc` / `take^rc`, and the refcount trace under `--syslog` |
| `vector` | `push^vector`, `append^vector`, `nth^vector`, `len^vector`, growth |
| `defer` | the `defer` attribute across a `header` and a `source` target |
| `thread` | `go`, `join`, `detach`, `cancel`, `exit-self` |

`maybe` and `either` are self-checking the way `test/c` is: every assertion
prints `ok` or `FAIL` and `main` returns the failure count. The collection tests
print a trace instead and are checked by reading it against the expected output
recorded at the bottom of each file.

## Debugging a red test

```sh
sbcl --script cicili.lisp --separate ./test/c/whatever.cicili
```

`--separate` keeps each pass but the last as `<target>.run<N>.c`; the final pass
still writes the real `<target>.c`. Those `.run` files are gitignored.

The transpiler prints a lot before it fails, so the condition text is easiest to
find scoped between the header and the backtrace:

```sh
sed -n '/^Unhandled/,/^Backtrace/p' /tmp/cicili-run.log
```

Parameters are named even where C would allow them unnamed: an unnamed parameter
becomes `_`, and two of those in one list collide with "paramter exists".

## Generated C is tracked on purpose

`test/**/*.c` and `.h` are committed. They are the ground truth for what the
backend actually emits, and reading them is usually faster than reasoning about
the specifier. Object files, libtool files, `.run*` files and the binaries are
ignored.

## Clauses with known gaps

None. Every clause `test/c` covers compiles and runs.
