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
| [`array`](lib/std/array.cicili) | fixed contiguous buffer + length | `new`, `len^array`, `nth^array` (answers a `maybe`), `let^array` / `take^array` | [array](test/std/array.cicili) |
| [`cell`](lib/std/cell.cicili) | owned heap value, freed exactly once | `new^cell`, `let^cell` / `letn^cell` (borrow), `take^cell` / `taken^cell` (consume) | [cell](test/std/cell.cicili) |
| [`rc`](lib/std/rc.cicili) | a `cell` that counts its owners | `new^rc`, `clone^rc`, `let^rc` / `letn^rc` (borrow), `take^rc` / `taken^rc` (consume, last owner only) | [rc](test/std/rc.cicili) |
| [`vector`](lib/std/vector.cicili) | an array that owns its headroom — unshared, wrap it in `rc` yourself | `push^vector`, `append^vector` (amortised power-of-two growth), `nth^vector`, `len^vector` | [vector](test/std/vector.cicili) |
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

### What the `nth` rows do and do not say

Both languages' `nth` row has its **bounds check deleted** — the element count is a
compile-time constant, so `index < len` folds to true and neither loop branches. That is a
bounds-checked API compiling to an unchecked loop, on both sides, and it is the number
most benchmarks quote. Hide the length so the check actually runs, and:

| | Cicili | Rust |
|---|---|---|
| check elided | 452 ms | 471 ms |
| **check executed** | **930 ms** | 1223 ms |

Cicili is ~24% faster when the check is real. `(<> nth array a)` answers a
[`refmaybe`](lib/std/maybe.cicili) — a typedef to `a ref`, where a non-null pointer is
`just` and NULL is `nothing`, the same niche encoding as Rust's `Option<&T>` — so the
bounds test and the is-there-a-value test are one branch and the answer is 8 bytes.

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
*.lisp             the compiler           doc/FUNCTIONAL.md the functional layer
builtins.cicili    the builtin macros     doc/test.md       the test suite
lib/std/           the standard library   test/c, test/std  the suite (sh test/run.sh)
lib/haskell/       the functional layer   emacs/            cicili-mode
```

## License

See [LICENSE](LICENSE).
