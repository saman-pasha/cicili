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
              (matchn (nth^vector 5 v) (just x x) (nothing -1))))))
```

That is a growable, reference-counted vector with bounds-checked access answering a
`maybe` — and it compiles to plain C structs and functions, freed deterministically when
`letin`'s scope ends.

## Philosophy

* **You see the C.** The generated `.c` file is the ground truth, formatted for reading.
  Nothing is hidden in a runtime; a Cicili binary is a C binary.
* **The macro layer does the thinking.** Cicili's compiler exposes its type inference to
  macros (`CICILI:TYPE-CHECK`, `CICILI:INFER-TYPE`, `CICILI:OUT-TYPE`). A macro can ask
  "what type is this expression?" — or "what type does the function I am inside return?" —
  and expand accordingly. That is how `match` dispatches, how `free^cell` finds the right
  destructor, how `(nothing)` knows which `maybe` it is, and how `auto` works.
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
  with `-Werror -Wall`. `:cpp #t` switches a target to the C++ compiler.

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
* Debugging: `--separate` keeps each pass's C; `--syslog` compiles in the std library's
  allocation/free trace; `--macroexpand` prints every macro expansion.
* Emacs users: `(add-to-list 'load-path "/path/to/cicili/emacs") (require 'cicili-mode)`
  — see [doc/emacs.md](doc/emacs.md).

## The standard library

Everything in `lib/std` follows the decl/impl rule: instantiate both, then use the
front-end macros. `(decl-vector int) (impl-vector int)` pulls in everything below it
(array, rc, cell, maybe); `either` stands alone, instantiate it where you need it.

| type | what it is | front ends | test |
|---|---|---|---|
| [`maybe`](lib/std/maybe.cicili) | presence of a value, no sentinels | `just` / `nothing` build one without naming it; `match` / `matchn` open it | [maybe](test/std/maybe.cicili) |
| [`either`](lib/std/either.cicili) | the answer, or why there isn't one | `right` / `left` build one without naming it; `match` / `matchn` open it | [either](test/std/either.cicili) |
| [`array`](lib/std/array.cicili) | fixed contiguous buffer + length | `new`, `len^array`, `nth^array` (answers a `maybe`), `let^array` / `take^array` | [array](test/std/array.cicili) |
| [`cell`](lib/std/cell.cicili) | owned heap value, freed exactly once | `new^cell`, `let^cell` / `letn^cell` (borrow), `take^cell` / `taken^cell` (consume) | [cell](test/std/cell.cicili) |
| [`rc`](lib/std/rc.cicili) | shared heap value, reference counted | `new^rc`, `clone^rc`, `let^rc` / `take^rc` | [rc](test/std/rc.cicili) |
| [`vector`](lib/std/vector.cicili) | growable window over an rc'd array | `push^vector`, `append^vector` (amortised power-of-two growth), `nth^vector`, `len^vector` | [vector](test/std/vector.cicili) |
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

## Bounds-checked indexing, against Rust

The claim "zero runtime overhead" is worth only as much as the measurement behind it. So
here is the one operation where a safe language is supposed to pay: **indexing that cannot
go out of bounds**. Cicili's `(<> nth array a)` answers a `maybe`; Rust's `Vec::get`
answers an `Option`. Neither can be read without handling the missing case, and neither
elides the check.

```cicili
;; test/std/array.cicili — 1e9 iterations
(for ((int i . 0)) (< i N) ((++ i))
  (match ((<> nth array) (% i 50) v)
    (just val (+= sum val))))
```
```rust
// benchmark/rust-vector-bench/src/main.rs — the same 1e9
for i in 0..n {
    if let Some(&val) = v.get(i % 50) {
        sum = sum.wrapping_add(val as i64);
    }
}
```

| | ms (three interleaved runs) | median |
|---|---|---|
| **Cicili** `(<> nth array int)` | 506 · 508 · 507 | **507** |
| Rust `Vec::<i32>::get` | 532 · 532 · 532 | 532 |

**Cicili is ~5% faster** — on an Intel i9-9880H, Apple clang 21.0.0 vs rustc 1.96.0,
Cicili at `-O3 -ffast-math -falign-loops=32`, Rust at `opt-level = 3` (`cargo build
--release`). Runs are interleaved round-robin, never five-of-each, because this laptop
drifts ~10% as it warms.

Both compile to a 2-way unrolled scalar loop with the `% 50` strength-reduced to a
multiply-shift. Cicili's is 52 bytes and 14 instructions, Rust's 55 and 15 — the `maybe`
is two registers, `Option<&i32>` is a niche-encoded pointer, and neither costs a branch
the other avoids. **This is not a structural win; it is the same loop, and Cicili is a
hair tighter.** The honest headline is that a bounds-checked, `match`-destructured index
through a generic std type costs *nothing over Rust* — which is the actual claim, and the
harder one.

`-falign-loops=32` is not a thumb on the scale: clang defaults loops to `.p2align 4`
— sixteen bytes — while rustc's LLVM already lands this loop on 32. The flag asks clang
for the alignment Rust was getting for free. Check it yourself with `clang -O3 -S` on any
loop. Both sides were then swept across code layouts and each is quoted at its **best**,
because on a loop this tight layout is worth more than the languages differ by — Rust's
own number ranges 532–637 ms across five builds of *identical* source. Rust was sampled
more thoroughly than Cicili, so 532 is the better-established minimum and the 5% is a
conservative figure rather than a flattering one.

Two things this does not say, because a benchmark without them is marketing:

* **It is one operation.** [`vector`](lib/std/vector.cicili) loses every row of the same
  comparison — construct, nth, push, append — by 2x to 6x against `Rc<Vec<i32>>`, for
  reasons that are in the data structure and are written down in
  [benchmark/std-vector-bench.cicili](benchmark/std-vector-bench.cicili). Both results are
  true; only one of them is a headline.
* **Reproduce it before quoting it.** `sh test/run.sh test/std/array`, then
  `cargo build --release && ./target/release/api_bench nth` in
  [benchmark/rust-vector-bench](benchmark/rust-vector-bench). The full method, including
  how the layout effect was isolated, is at the bottom of
  [test/std/array.cicili](test/std/array.cicili).

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
