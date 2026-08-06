# Cicili

**The C language, in S-expressions — with Lisp macros as its build system and type system.**

Cicili is a transpiler: you write C in Lisp syntax, and it emits the C you would have
written by hand, then drives the C compiler for you. Every clause — `func`, `struct`,
`let`, `for` — maps to C you can read and debug. On top of that core, Common Lisp macros
run at compile time with full access to Cicili's type inference, which is enough to build
generics, RAII, reference counting, pattern matching — and, one layer up, Functors and
Monads — **all with zero runtime overhead and no garbage collector**.

```cicili
(source "hello.c" (make :std #t :compile #t :link #t)
  (main
    (letin ((v (new vector (cast (const int []) '{ 1 2 3 4 5 }))))
      (push^vector v 6)
      (printf "len %zu, last %d\n"
              (len^vector v)
              (matchn (nth^vector 5 v) (just x (cof x)) (nothing -1))))))
```

That is a growable vector with bounds-checked access answering a `maybe` — carrying a
pointer *into* the buffer, hence the `cof` — and it
compiles to plain C structs and functions, freed deterministically when `letin`'s scope
ends. It owns its buffer outright; wrap it in an `rc` when you want it shared, and pay
for that only then.

## Philosophy

* **You see the C.** The generated `.c` file is the ground truth, formatted for reading.
  Nothing is hidden in a runtime; a Cicili binary is a C binary.
* **The macro layer does the thinking.** Cicili's compiler exposes its type inference to
  macros (`CICILI:TYPE-CHECK`, `CICILI:INFER-TYPE`). A macro can ask "what type is this
  expression?" and expand accordingly — that is how `match` dispatches, how `free^cell`
  finds the right destructor, and how `auto` works. `maybe` and `either` need no inference
  at all: their constructors are brace lists, typed by the slot they are written into.
* **Front-end / back-end.** Every std-library feature is two parts: a *back-end* function
  (declared in `decl-X`, implemented in `impl-X` generics) for anything that touches its
  receiver more than once, and a *front-end* macro that only type-checks, infers, and
  dispatches. Single-use accessors compile to inline syntax, not calls.
* **Memory is managed, not collected.** `letin` scopes, the `defer` attribute
  (`__attribute__((cleanup))` RAII), `cell` for owned heap values, `rc` for shared ones.
  Ownership violations — use after `move`, double free, non-copy assignment — are
  compile-time errors.
* **Errors point at your code.** The compiler runs the C compiler once to collect
  diagnostics, maps each one back to the Cicili form that produced it, and reports it with
  the compile path that led there.

## Written for machines as well as people

Cicili is meant to be a language an AI agent can write **correctly on the first attempt**,
and the claim is made against specific factors rather than as an adjective. Each row below
says what the factor is, why it matters when a model rather than a person is at the
keyboard, and what Cicili actually does about it. The gaps are listed too — a claim you
cannot check is worth nothing.

### What helps a model write correct code

| factor | why it matters to a model | Cicili |
|---|---|---|
| **Uniform shape** | Most syntax errors come from guessing structure — precedence, statement-vs-expression, where a brace goes. | Every construct is `(head …)`. There is no precedence to infer and no second grammar for expressions. A model that can balance parentheses cannot produce a malformed program. |
| **One way to say a thing** | Every alternative spelling is a chance to pick the wrong one, and a model picks from what it has seen most, not what is best here. | The C++ layer's whole design rule is *if the language already has a construct that means this, use it.* There is no `class` (it is `struct`), no `namespace` clause (it is `module`), no reference wrapper (it is the `&` already in the type descriptor). Each application **deleted** syntax. |
| **Failing rather than being silently wrong** | A model reports the build as green. A silent miscompile is therefore reported as success — the single worst outcome in an agent loop. | This is why C++ constructs are clauses and not text escapes. A `(code …)` escape spliced `(cof p)` as `p`, dropping the dereference with no diagnostic; as a clause the operand is a specified expression and cannot be dropped. |
| **Errors that name your code** | A model can only act on a message that names the thing it wrote. Internal state is noise it will guess against. | `unknown member: w of type: Shape` names the member and the type. Every C-compiler diagnostic is mapped back to the Cicili form that produced it and reported with the path that led there. |
| **Locality** | A model reasons about the form in front of it. Anything that depends on distant context is a chance to be wrong. | Attributes attach to the next clause only. A qualified name resolves without a `using` elsewhere in the file. A method's `this` is implicit and needs no declaration. |
| **Determinism** | An agent diffs its output to know what changed. Output that churns on its own makes the diff useless. | Same source, same bytes. Anonymous struct names were derived from the clock until recently; they are now derived from the translation unit, and two full suite runs produce byte-identical C for every target. |
| **Checkable by construction** | A model needs a cheap, total verdict, not a subjective review. | `sh test/run.sh` transpiles, compiles **and runs** every file under `test/c`, `test/std` and `test/cpp`, and must end `red: 0`. Every documented clause links to the runnable test that covers it. |
| **A learnable surface** | An LLM has very little Cicili in its training data. It must learn the language from what is in context. | The complete clause set is two index tables — [DOC-C.md](doc/DOC-C.md) and [DOC-CPP.md](doc/DOC-CPP.md) — each clause with the generated C beneath it. The language is small enough to read in one sitting, which is the only reason a model can use it at all. |
| **Compile-time ownership** | Use-after-move and double-free are exactly the bugs that survive review, human or model. | Ownership violations are compile-time errors, not runtime ones: use after `move`, double free, assigning a `non-copy`. |
| **The generator is the language** | Code that writes code is where a model is most useful and most likely to drift. | Macros are ordinary Common Lisp over the same s-expressions, with the compiler's own type inference exposed (`CICILI:TYPE-CHECK`, `CICILI:INFER-TYPE`). A generated form is checked exactly like a written one. |

### Why this is a Lisp

Lisp was the first language built for AI, and it is worth being precise about why, because
the reasons are the same ones above pointing in the opposite direction.

John McCarthy — who had coined "artificial intelligence" for the 1956 Dartmouth proposal —
designed Lisp at MIT in 1958 for symbolic computation. Early AI was logic, planning,
language and search: **symbols and structure, not arithmetic.** FORTRAN gave you arrays.
Lisp gave you the symbol and the list as primitives, so representing knowledge needed no
encoding layer between the idea and the program. Four things followed from that and made
Lisp the field's language for thirty years:

* **Code is data.** A program is a list, so a program can build, inspect and transform
  another program. Expert-system shells, planners and theorem provers were written as Lisp
  programs that wrote Lisp.
* **`eval`.** McCarthy defined the language by writing its interpreter in itself, so a
  system could construct a form and then run it.
* **Garbage collection**, invented for Lisp in 1959, because the lifetime of a search tree
  cannot be known in advance.
* **The REPL.** AI programs could not be specified up front; they had to be grown while
  running.

The parenthesised syntax was not even the plan — McCarthy intended a more conventional
"M-expression" surface, and S-expressions were the internal representation. Programmers
preferred the internal one, which is how homoiconicity became the language's defining
feature by accident.

**The direction has reversed.** Lisp was *a language for building AI*; the properties above
made a machine's reasoning expressible. Today's AI is numeric and lives in Python and CUDA,
and that era is over. But a model writing code needs uniform structure, one obvious spelling,
and a program it can manipulate as data — which is the same list of properties, now serving
*AI writing the language* rather than the language expressing AI. Cicili is a bet that those
properties are worth as much in the second direction as they were in the first, and that
they are worth having with C's performance underneath.

### Where it is not there yet

* **No overloading.** Two methods with the same name collide, and the error (`inner exists`)
  says less than it should.
* **Some errors still print specifier internals.** `pointer storage not found: #<(@NTH …`
  names the compiler's state rather than your line. Every construct moved out of a `code`
  escape removes one of these; there are still cases that reach it.
* **Move analysis is not path-sensitive.** `(if c (eat a) (eat a))` is rejected although
  only one branch runs.
* **No language server.** No completion, no go-to-definition, no inline diagnostics.
* **A small corpus.** No model has meaningful Cicili in its weights. Everything above is
  what makes that survivable, not something that makes it untrue.

## Architecture

```
your.cicili ──read──► forms ──specify──► typed IR (sp tree, symbol table)
                                 │
                                 │  macros expand here, with type inference
                                 ▼
                      collecting pass ──► your.c ──► C compiler (diagnostics collected)
                                 ▼
                      final pass ──► your.c + your.h ──► compile ──► link (libtool)
```

* **Targets.** A `.cicili` file holds `source` and `header` targets; each names its output
  file and its `:compile` / `:link` arguments. One file can build several objects, a
  library and an executable ([test/c/library.cicili](test/c/library.cicili)).
* **Two passes.** The collecting pass writes C, hands it to clang/gcc, and files every
  `file:line:col` diagnostic under the position each printed symbol landed on. The final
  pass writes the real target and reports any collected error against the Cicili form —
  with the `COMPILE-*` path down to it. `--separate` keeps each pass as `<target>.run<N>.c`.
* **Generics.** `(generic decl-array (a) …)` defines a macro; `(decl-array int)`
  instantiates it. `<>` interns type-parameterised names: `(<> array int)` → `array_int`.
* **Layers.**
  | layer | where | what |
  |---|---|---|
  | compiler | `*.lisp` | reader, specifier (type inference), backend (C emission), authority (ownership checks) |
  | builtins | `builtins.cicili`, `cpp.cicili` | `main`, `letin`, `closure`, `match`, `defer*`, `new`, `import`, … |
  | C declarations | `lib/std/c/` | the C standard library and POSIX, as typed Cicili declarations |
  | std | `lib/std/` | `maybe`, `either`, `array`, `cell`, `rc`, `vector`, `pthread` |
  | functional | `lib/haskell/` | ADTs, type classes, Functors, Monads — see [doc/FUNCTIONAL.md](doc/FUNCTIONAL.md) |

* **Toolchain.** `config.lisp` drives clang (macOS) or gcc (Linux) through GNU libtool,
  with `-Werror -Wall`, in a debug (`-g -O0`) or a `--release` (`-O3 -falign-loops=32`)
  set. `:cpp #t` switches a target to the C++ compiler.

## Installation

1. Install [SBCL](https://www.sbcl.org), a C compiler ([clang](https://clang.llvm.org) on
   macOS, [gcc](https://gcc.gnu.org) on Linux — `brew` / `apt` install either), and
   [GNU Libtool](https://www.gnu.org/software/libtool) (`glibtool` from brew on macOS).
   Compiler and linker commands can be changed in `config.lisp`.
2. Clone this repository. To make the package loadable through
   [ASDF](https://common-lisp.net/project/asdf)/[Quicklisp](https://quicklisp.org), place
   (or symlink) it under `~/common-lisp` and run `(ql:quickload "cicili")` once in `sbcl`.
3. That's it — `cicili.lisp` is the entry point:

```sh
sbcl --script cicili.lisp ./test/std/vector.cicili
./test/std/vec_test
```

Tested with SBCL 2.x, Apple clang 21, gcc 15.2, libtool 2.5.4.

## Getting started

Write `hello.cicili`:

```cicili
(source "hello.c" (make :std #t :compile #t :link #t)
  (main
    (printf "hello from cicili\n")
    (return 0)))
```

```sh
sbcl --script /path/to/cicili.lisp hello.cicili   # writes hello.c, compiles, links
./main
```

Read `hello.c` — that habit is the fastest way to learn the language. Then:

* **[doc/DOC-C.md](doc/DOC-C.md)** is the complete reference for the C core: every clause
  with the generated C underneath, a clause index at the top, and each section linked to
  the runnable test that covers it.
* **[doc/DOC-CPP.md](doc/DOC-CPP.md)** is the C++ half: qualified `::` names, `struct`
  inheritance, methods with implicit `this`, `ctor`/`dtor`, `module` as `namespace`,
  references, templates and `letin*`. A supplement to DOC-C.md, not a replacement.
* **[test/c/](test/c)** is one green, self-checking file per clause family — operators,
  control, functions, aggregates, memory, macros, preprocessor, targets.
* **[test/run.sh](test/run.sh)** transpiles, compiles **and runs** everything under
  `test/c` and `test/std`: `sh test/run.sh` must end `red: 0`.
* Build type: **`--release`** builds with `-O3 -falign-loops=32`; without it you get
  `-g -O0`. Both sets live per-OS in `config.lisp`, so no target carries its own
  optimisation flags and none can drift from the rest of the suite.
* Debugging: `--separate` keeps each pass's C; `--syslog` compiles in the std library's
  allocation/free trace; `--macroexpand` prints every macro expansion. `--syslog` is sized
  for the tests — on a benchmark that allocates a million times it emits tens of millions
  of lines, so redirect it to a file.
* Emacs users: `(add-to-list 'load-path "/path/to/cicili/emacs") (require 'cicili-mode)`
  — see [doc/emacs.md](doc/emacs.md).

## The standard library

Everything in `lib/std` follows the decl/impl rule: instantiate both, then use the
front-end macros. `(decl-vector int) (impl-vector int)` pulls in `maybe` and nothing else —
`array`, `cell`, `rc` and `either` stand alone, instantiate them where you need them.

| type | what it is | front ends | test |
|---|---|---|---|
| [`maybe`](lib/std/maybe.cicili) | presence of a value, no sentinels | `just` / `nothing` build one without naming it; `match` / `matchn` open it | [maybe](test/std/maybe.cicili) |
| [`either`](lib/std/either.cicili) | the answer, or why there isn't one | `right` / `left` build one without naming it; `match` / `matchn` open it | [either](test/std/either.cicili) |
| [`array`](lib/std/array.cicili) | fixed contiguous buffer + length | `new`, `len^array`, `nth^array` (answers a `(<> Maybe ref a)` — a pointer *into* the buffer), `let^array` / `take^array` | [array](test/std/array.cicili) |
| [`cell`](lib/std/cell.cicili) | owned heap value, freed exactly once | `new^cell`, `let^cell` / `letn^cell` (borrow), `take^cell` / `taken^cell` (consume) | [cell](test/std/cell.cicili) |
| [`rc`](lib/std/rc.cicili) | a `cell` that counts its owners | `new^rc`, `clone^rc`, `let^rc` / `letn^rc` (borrow), `take^rc` / `taken^rc` (consume, last owner only) | [rc](test/std/rc.cicili) |
| [`vector`](lib/std/vector.cicili) | an array that owns its headroom — unshared, wrap it in `rc` yourself | `push^vector`, `append^vector` (amortised power-of-two growth), `nth^vector`, `len^vector` | [vector](test/std/vector.cicili) |
| [`btree`](lib/std/btree.cicili) | ordered map, logarithmic | `insert` / `delete` answer an `either`, `search` / `min` / `max` a `maybe`, `traverse` in key order | [btree](test/std/btree.cicili) |
| [`pthread`](lib/std/pthread) | threads with captured context | `go`, `join`, `detach`, `cancel`, `exit-self` | [thread](test/std/thread.cicili) |

Conventions worth knowing:

* `letin` binds `new`-constructed values and frees them, in reverse order, when the scope
  ends — the std types are designed around it.
* A `move` binding transfers ownership; using a moved variable again is a compile error.
* `(inline)` emits `__attribute__((weak))` — one definition serves every translation unit.
* `--syslog` builds show every `NEW` / `FREE` / `CLONE` / `GROW`, so leaks are visible
  before you reach for `leaks` or valgrind — and the suite runs clean under both.

The functional layer on top — ADTs, pattern matching, Functors, Applicatives, Monads —
is documented in **[doc/FUNCTIONAL.md](doc/FUNCTIONAL.md)**.

## Benchmarked against Rust

The claim "zero runtime overhead" is worth only as much as the measurement behind it.
`lib/std`'s `vector` is compared against Rust's `Vec<i32>`, and `rc`-wrapped against
`Rc<Vec<i32>>`, operation for operation. Sources:
[benchmark/std-vector-bench.cicili](benchmark/std-vector-bench.cicili) and
[benchmark/rust-vector-bench](benchmark/rust-vector-bench).

Every benchmark target refuses to build without `--release` — they carry
`:compile #t` and no flags of their own, so without it they compile at `-g -O0`
and print meaningless milliseconds. See
[benchmark/release-only.cicili](benchmark/release-only.cicili), and
[doc/benchmark.md](doc/benchmark.md) for a measurement that was withdrawn for
exactly that reason.

10⁹ elements per row, Intel i9-9880H, Apple clang 21.0.0 vs rustc 1.96.0. Cicili built
with `--release`; Rust with `cargo build --release`. **Lower is better; bold is the
winner of that pair.**


### Owned — `(<> vector a)` vs `Vec<i32>`

| | Cicili | Rust | | Cicili `-flto` | Rust `lto=true` |
|---|---|---|---|---|---|
| construct | 105 ms | **100 ms** | | **62 ms** | 90 ms |
| nth | **504 ms** | 516 ms | | 487 ms | **481 ms** |
| push | 1942 ms | **1565 ms** | | **1074 ms** | 1375 ms |
| append | **94 ms** | 99 ms | | **51 ms** | 89 ms |

### Shared — `(<> rc (<> vector a))` vs `Rc<Vec<i32>>`

| | Cicili | Rust | | Cicili `-flto` | Rust `lto=true` |
|---|---|---|---|---|---|
| construct | 270 ms | **158 ms** | | **82 ms** | 135 ms |
| nth | 1259 ms | **518 ms** | | 482 ms | **473 ms** |
| push | **1899 ms** | 2836 ms | | **1220 ms** | 2595 ms |
| append | 284 ms | **165 ms** | | **83 ms** | 143 ms |

**Without LTO it is mixed; with LTO Cicili wins or ties every row but one.** The two
places Cicili loses badly without LTO — shared `nth` and shared `construct` — are the two
LTO fixes outright, which says the gap was never the reference counting. clang cannot
propagate a length through `malloc` + `memcpy` into the box without whole-program view;
given it, the rc'd `nth` goes 1259 → 482 and lands level with the owned one.

`-flto` is **not** in the default release set, because the evidence points both ways: it
wins nearly everything here, and costs ~14% on a tight loop whose bounds check had already
folded (452 → 514 ms on [test/std/array.cicili](test/std/array.cicili)). Add it per target
until that is understood.

### Ordered map — `btree` vs `BTreeMap`

[`btree`](lib/std/btree.cicili) is the API of
[draft/collection/persistent-btree.cicili](draft/collection/persistent-btree.cicili)
brought over to the std idiom: `either` for what can fail, `maybe` for what may
simply not be there. 10⁶ operations per row, node size matched (Rust's `BTreeMap`
is B=6, 11 pairs a node; the Cicili side is Cormen's t=6, the same 11), same
xorshift so both see the same keys in the same order.

| | Cicili | Rust | |
|---|---|---|---|
| insert | **216 ms** | 233 ms | Cicili ~7% faster |
| search | **200 ms** | 257 ms | Cicili ~22% faster |
| traverse in order | 5 ms | 5 ms | level |
| delete | **261 ms** | 287 ms | Cicili ~9% faster |

Best of ten runs each, alternating run for run so neither side gets a quieter
machine than the other. The machine was busy — absolute numbers on a quiet one
are 20 to 40% lower for both — which is why the two are interleaved and why the
best, not the mean, is quoted.

**This table used to say the opposite**, and it is worth saying why rather than
quietly replacing it. The earlier `btree` gave every node a `kids[2t]` array
inline, and Rust was 17 to 28% ahead on all four rows. The suspected cause was
`{key,val}` pairs stored together against `BTreeMap`'s separate key and value
arrays. That was the wrong suspect. The real one was **the leaves**: in a tree
of degree t almost every node is a leaf, a leaf never reads a child, and 96
bytes of a 200-byte node were child pointers that nothing would ever load.

Two fixes were built and measured. **Moving all the child pointers into one
pool** shared by the tree saves the same memory and is *worse* — 10 to 20%
slower on insert and search at every size, cache resident or not, because it
puts an extra indirection on every descent. The dead weight was on the leaves
and that fix charged the internal nodes for it. **Giving leaves their own type**
is the one that worked: a leaf is 96 bytes with no `kids` at all, an internal
node keeps its 2t pointers inline exactly where the descent already reads them,
and the tree's `height` says which kind a pointer refers to — a B-tree is
balanced, so no node needs a flag. That is what
[lib/std/btree.cicili](lib/std/btree.cicili) is now, and against the inline-kids
version it is 20% faster on insert, 14% on search, 31% on traverse and 17% on
delete at 10⁶ keys.

**LTO is close to noise here for both** — measured at +5% on Cicili's insert,
−2% on its delete, −5% on Rust's insert, nothing anywhere else. Worth saying
because it is not what LTO did to the vector, where it erased the rc penalty
outright.

What is worth more than the timings: **every checksum matches exactly**, and
across all four builds above —
207679490886 pairs inserted, 644483 distinct keys, 524727962248 summed on
lookup, 338135951754 in traversal order, 644483 deleted. Two independent
implementations agreeing bit-for-bit over a million mixed operations is a
stronger correctness signal than the test suite gives on its own.

### What the `nth` rows do and do not say

Both languages' `nth` row has its **bounds check deleted** — the element count is a
compile-time constant, so `index < len` folds to true and neither loop branches. That is a
bounds-checked API compiling to an unchecked loop, on both sides, and it is the number
most benchmarks quote. Hide the length so the check actually runs, and:

| | Cicili `array` | Cicili `vector` | Rust |
|---|---|---|---|
| check elided | 474 ms | 457 ms | 467 ms |
| **check executed** | **950 ms** | **995 ms** | 1085 ms |

Cicili is ~10% faster when the check is real, and `array` and `vector` agree with each
other — they run the same `nth` over the same layout, so they should.

Rust is quoted at its **best** there: it measured a stable 1085 ms cold and 1237–1346 ms
once the machine had warmed up, and taking its lowest is the conservative direction. On a
warm-for-warm comparison the gap is wider; it is not quoted that way.

**No claim is made about *why*.** Both `nth`s answer a `(<> Maybe ref a)` — a tagged
struct carrying a pointer into the buffer, 16 bytes, tag tested separately from the
bound — which is *more* work per element than Rust's niche-encoded `Option<&i32>`, where
`None` is a null pointer and one branch serves for both. Cicili wins the row anyway, and
that is not explained by the data structure. `lib/std/maybe.cicili` does carry a
`decl-refmaybe` that niche-encodes exactly the way Rust does, but nothing in the tree uses
it, so it is not what these numbers measure.

### Reproducing it

```sh
sbcl --script cicili.lisp --release ./benchmark/std-vector-bench.cicili && ./benchmark/std_vec_bench
cd benchmark/rust-vector-bench && cargo build --release && ./target/release/api_bench
```

Two things to know before quoting any of it. **Code layout is worth more than most of
these differences** — the same Rust `nth` source measured 471–641 ms across builds that
differ in no relevant way, which is why `-falign-loops=32` is in the release set: it took
the array benchmark's run-to-run spread from 5.8% to 2.3% and its median from 500 to
445 ms. And **a checksum the compiler can precompute deletes the loop under it** — the
`construct` and `append` rows read 0 ms until their checksums were changed to accumulate
the buffer address, which cannot be folded.

## Project layout

```
cicili.lisp        entry point            doc/DOC-C.md      the C-core reference
*.lisp             the compiler           doc/DOC-CPP.md    the C++ reference
builtins.cicili    the builtin macros     doc/FUNCTIONAL.md the functional layer
cpp.cicili         the C++ macro layer    doc/test.md       the test suite
lib/cpp/torch      libtorch bindings + DSL  test/c, test/std the suite (sh test/run.sh)
lib/python/        CPython + numpy bindings example/        runnable examples
lib/std/           the standard library
lib/haskell/       the functional layer   test/cpp          the C++ suite
emacs/             cicili-mode
```

## License

See [LICENSE](LICENSE).
