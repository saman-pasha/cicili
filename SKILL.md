---
name: cicili
description: Use when writing, reading, debugging, reviewing, or porting Cicili code (C/C++ in S-expressions), including its clauses, macros, targets, type descriptors, ownership, standard library, and C/C++ bindings. Start here and follow the linked reference docs for exact emitted C.
---

# SKILL — working in Cicili

**This file is for every agent that writes, reads, debugs, or reviews Cicili code.**
Read it before changing a `.cicili` file. It is a map of the language and its
build, not a replacement for the two reference documents:

- [`doc/DOC-C.md`](doc/DOC-C.md) — the complete C core, clause by clause, with
  the generated C.
- [`doc/DOC-CPP.md`](doc/DOC-CPP.md) — the C++ additions; read DOC-C first.
- [`lib/README.md`](lib/README.md) — the standard library, the C/POSIX
  declarations, and the binding index.
- [`CLAUDE.md`](CLAUDE.md) — the repository's build and change rules.

When this summary and the docs disagree, **the docs are the reference** and the
generated C is the ground truth. Version at the time of writing: **3.2.0**.

---

## 1. The one-sentence model

Cicili is **C in S-expressions**: a form is a list whose head decides its
meaning. A known clause head (`func`, `let`, `struct`, `if`, …) emits C; a head
that is not a clause is an ordinary function call. Common Lisp macros run at
compile time and emit more Cicili forms. The result is compiled by the
configured C/C++ compiler.

```
your.cicili → reader → forms → specify (types) → macro expansion
            → generated C → C compiler → object/link
```

There is **no runtime and no garbage collector**. A Cicili program is a C
program; ownership, `defer`, and standard-library cells are compile-time and
C-level mechanisms.

---

## 2. Invocation and targets

A `.cicili` file contains one or more **targets**:

```cicili
(source "hello.c" (make :std #t :compile #t :link #t)
  (main
    (printf "hello\n")
    (return 0)))

(header "thing.h" ()
  (guard THING_H
    (struct Thing (member int value))))
```

- `source PATH FEATURES BODY…` writes, compiles, and optionally links `PATH`.
- `header PATH FEATURES BODY…` writes a header; it is never compiled by the
  target itself.
- `(make :std #t :compile #t :link #t)` is the usual feature macro. A raw
  feature list may also be written: `(:std #t :compile #t :link #t)`.
- `:std #t` emits the standard C includes; with `:cpp #t` it emits `<string>`
  and `<iostream>` instead.
- `:cpp #t` selects the C++ compiler and enables the C++ clauses.
- `:compile` defaults to `-c TARGET`; a custom value must contain `-c` or
  `--compile`. `:link` has no default and runs only after a successful compile
  listed before it.
- `{$CWD}` and `{$CCL}` are substituted in `:compile`/`:link` arguments.
- `main` and `main*` are macros for the two usual C `main` shapes.

Build:

```sh
sbcl --script cicili.lisp FILE.cicili          # debug (-g -O0)
sbcl --script cicili.lisp --release FILE.cicili # release (-O3)
sbcl --script cicili.lisp --version            # bare version on stdout
```

Useful flags: `--debug`, `--macroexpand`, `--macros`, `--separate`,
`--only-link`, `--syslog`, `--info`/`--warn`/`--debug`/`--no-debug`.

After changing the compiler or standard library, run the whole suite:

```sh
sh test/run.sh          # must end red: 0
```

---

## 3. The reading rules that prevent most mistakes

1. **A type is one token.** Write `size_t`, `ubyte_t`, `Employee`, or a typedef.
   `(cast unsigned char x)` is invalid; use a typedef or mask.
2. **Pointer casts are parenthesised:** `(cast (void **) p)`,
   `(cast (ubyte_t *) p)`. A return type is `(out T *)`, not `(out (T *))`.
3. **Initializer markers:** `. value` is an atom, `.' { … }` is a brace list,
   `.#' ( … )` is an expression, `.'(lambda …)` is a lambda value.
4. **Arrays at most two dimensions.** `[]`, `[N]`, `[N][M]`; no more.
5. **`let` declares locals; `block` does not.** A declaration inside `block`
   is not a binding.
6. **`nth` is index-first:** `(nth i array)` is `array[i]`.
7. **Member access:** `($ obj member)` is `obj.member` and chains;
   `(-> ptr member)` is `ptr->member`; `(=> obj member args…)` calls a
   function stored in a member.
8. **Bitwise operators are words:** `bitand`, `bitor`, `xor`; `break` and
   `continue` are bare symbols.
9. **`for` takes a binding list, a test, a parenthesised list of steps:**
   `(for ((int i . 0)) (< i n) ((++ i)) body)`.
10. **`if` branches are exactly one form each; use `block` for several.**
    `cond`, `while`, `for`, `do`, and `switch` bodies may hold several.
11. **`do`'s last form is the condition**, not a body statement.
12. **`switch` does not insert `break`.** Cases fall through exactly as in C.
13. **Strings are raw C strings.** `"\n"` reaches C as backslash-n. A literal
    may not contain a real newline or end in a backslash.
14. **A float literal is a C double, all its digits.** A macro computing a
    float must use a double (`sqrt 2.0`, not `sqrt 2`).
15. **`#\Space`, `#\Newline`, `#\Null`, …** are character literals; an
    arbitrary character is written as itself (`#\A`).
16. **A macro must emit one form** unless it expands with `($$$ …)` to splice
    several. A macro is read with case preserved; Lisp forms in macro files
    are conventionally uppercase.
17. **`#define` is invisible to Cicili.** Constants from headers are declared
    as `(typedef int NAME)`; a number you need in a form should be written out
    or exposed through a binding. `(@define (code "NAME C-TEXT"))` is the
    escape for a C typedef/constant that Cicili cannot spell.
18. **`nil` is C `NULL`.** Prefer `nil` in Cicili forms.

### The type descriptor

Every type position uses one positional grammar:

```
[const] TYPE [modifier] [const|restrict] [name] [array]
modifier:  *  **  ***  &  move  ref
array:     []  [N]  [N][M]
```

- `move` emits nothing; it is an ownership marker.
- `ref` emits `* restrict`.
- An omitted name is an unnamed parameter.
- Any other type symbol passes through to C, so `size_t`, `FILE`, and your
  typedefs work.

---

## 4. The complete C core clause index

A **clause** is a list whose head is in Cicili's clause table. A list with any
other head is a C function call. Some familiar names are macros built on the
clauses (`main`, `main*`, `letin`, the logging macros) rather than emitter
clauses; `--macroexpand` is the authority when the distinction matters.

This is the full C-core index from `doc/DOC-C.md`. Each link there shows the
emitted C and the runnable test.

### Program structure

| clause | meaning |
|---|---|
| `source` | a target that produces/compiles/links a `.c` file |
| `header` | a target that produces a `.h`; never compiled |
| `import` | load a macro file at read time |
| `include` | emit `#include` |
| `guard` | `#ifndef` / `#define` / `#endif` wrapper |
| `@…` | a preprocessor form: `@define`, `@ifdef`, `@else`, `@endif`, … |
| `code` | raw C text, passed through untouched |
| `DEFMACRO` | define a Common Lisp/Cicili macro |
| `macrolet` | define local macros for one body |
| `generic` / `<>` | type-parameterised code and name joining |
| `$$$` | splice several macro expansion forms into the caller |

### Declarations

| clause | meaning |
|---|---|
| `var` | file-scope/global variable |
| `let` / `letn` | scoped variables; `letn` is an expression with a value |
| `func` | a function, or a function pointer in type position |
| `out` | return type; first form after the parameter list |
| `struct` | structure |
| `union` | union |
| `enum` | enumeration |
| `member` | a struct/union field |
| `declare` | name(s) of an anonymous nested struct/union |
| `typedef` | type alias |

Function attributes go before the `func`, each in its own list: `(decl)`,
`(static)`, `(extern)`, `(inline)`, `(weak)`, `(cold)`, `(auto)`,
`(volatile)`, `(resolve #f)`. Attributes apply to the next clause only.

### Statements

| clause | meaning |
|---|---|
| `if` | condition, then-form, optional else-form (one form each) |
| `cond` | `if`/`else if` chain; each body may hold several forms |
| `switch` / `case` / `default` | C switch; no implicit breaks |
| `while` / `do` / `for` | loops; `do`'s last form is its condition |
| `break` / `continue` | bare symbols |
| `block` | `{ … }`, no value |
| `progn` | `({ … })`, last form is the value |
| `set` | assignment, one or many pairs in order |
| `return` | function return |

### Expressions

| clause | C |
|---|---|
| `nth` | `base[index]` — **index first** |
| `?` | `cond ? a : b` (four elements) |
| `cast` | `(type)expr` |
| `sizeof` / `typeof` | `sizeof(…)` / `typeof(…)` |
| `aof` / `cof` | `&x` / `*x` |
| `$` | value member access; chains |
| `->` | pointer member access |
| `=>` | call a function stored in a member |
| `lambda` / `lambda*` | lift a function to file scope |
| `'(closure)` / `'(closure*)` | GCC nested-function closure; **clang rejects** |
| `(closure)` / `def-closure` | portable capture-by-value closure; `exec-closure` calls it |
| `alloc` | `malloc`/`calloc` with the variable's cast and automatic free |

### Operators

Arithmetic `+ - * / %` (n-ary, fully parenthesised), relational
`== != > < >= <=`, logical `and or not`, bitwise `<< >> ~ bitand bitor xor ^`,
assignment `set = += -= *= /= %= <<= >>=`, prefix `++ --`, and postfix `1+ 1-`.
`sizeof` and `typeof` are expressions. Statements are not expressions.

---

## 5. Functions, structs, memory and cleanup

### Functions

```cicili
(static) (func add ((int a) (int b)) (out int)
  (return (+ a b)))
```

- `out` must be the first form after the parameters. No `out` means `void`,
  except `main`, which is `int`.
- Use `(decl)` for a prototype; a `(func …)` with a body is a definition.
- Function pointer in type position:

  ```cicili
  (var func handler ((int sig)) . my_handler)
  (member func resolve ((char * prob)) (out char *))
  ```
- Unnamed parameters: `(int)`; variadic: `($$$)`.
- A lambda is `'(lambda ((int x)) (out int) …)`; a named lambda is
  `'(lambda* NAME …)`. It cannot capture locals. Use the portable `closure`
  macro (on clang) or `def-closure` for a closure that outlives its scope.
- Multiple return values use an inline struct in `out` and a `'{}` return;
  the function must be `(static)` in a source or declared in a header.

### `let`, `letn`, `block`, `progn`, `defer`

- `let` binds locals in a scope. Attributes appear as bare lists in the
  binding list and apply to the following binding: `(static)`, `(register)`,
  `(volatile)`, `(thread-local)`, `(atomic)`, `(defer …)`.
- `letn` is the same scope but its last form is the resulting value.
- `block` is a statement block; `progn` is a GCC/Clang statement expression
  with a value.
- `defer` is an attribute on the next binding. It forms a C
  `__attribute__((cleanup))` destructor. Three spellings:
  `(defer #t)` (free), `(defer () func_name)`, or `(defer () body…)`.
  The destructor receives a **pointer to the variable**; the generated form
  rebinds the variable's name/type for you.
- An `alloc`-initialized variable gets an automatic free unless you provide a
  `defer`. A custom `defer` suppresses the automatic free.
- `defer*` snapshots named values and runs a block at scope exit; it uses an
  inline struct, so the function must be static or declared in a header.

### Structs, unions, enums

- `struct` members use `(member TYPE NAME)`; `union` is analogous.
- Anonymous nested structs/unions need `(declare NAME)`.
- `(decl) (struct FILE)` emits only the forward typedef.
- `(non-copy)` on a struct makes values move-only (no copy).
- Enums are `(enum NAME (CONST . value) (NEXT) …)`; `(CONST)` continues the
  sequence. `(CONST value)` is invalid.
- `typedef` takes the full type descriptor, with the new name last.

---

## 6. Macros, generics, imports and packages

Cicili's macro layer is Common Lisp. A macro runs at specify time and returns
Cicili forms; the normal type checker then checks the result.

```cicili
(DEFMACRO swap (a b)
  (LET ((tmp (GENSYM "tmp")))
    `(let ((auto ,tmp . ,a))
       (set ,a ,b)
       (set ,b ,tmp))))
```

- `($$$ …)` in an expansion splices several forms into the enclosing body.
- `macrolet` defines macros for one body only.
- `generic` defines a type-parameterised macro; instantiate it explicitly:

  ```cicili
  (generic decl-crate (a)
    (struct (<> crate a) (member a value)))
  (decl-crate int)          ; emits crate_int
  ```

  `(<> crate int)` is the symbol `crate_int`, and the C name. The convention in
  `lib/std` is a `decl-`/`impl-` pair per library; a target calls both.
- `import "path"` loads a macro file. A path starting with `.` is relative to
  the importing file, `/` is absolute, otherwise it is relative to the Cicili
  installation. A second argument is a prefix: `(import "lib/net/curl.cicili" :cu)`
  gives `(cu.get …)`. A third argument is passed to the file's init function.
- Macro libraries use their own `DEFPACKAGE`/`IN-PACKAGE` and
  `:IMPORT-FROM :COMMON-LISP-USER "import" "generic" "cicili"`.
- Inside a macro library, compare symbols by **name** with `CICILI:KEY-EQ`,
  not `EQL`; expand caller forms with `expand-form<`, not `CL:MACROEXPAND`.
- Lower-case macro names avoid shadowing Common Lisp names.

A macro file **declares** through `init-macro` and emits real code through a
separate `impl-` macro. An `init-macro` is for declarations and types; it emits
nothing.

---

## 7. `lib/` is the declaration source — never redeclare it

**Rule zero: before writing a `(decl) (func …)`, `(struct …)`, `(typedef …)`,
`@define`, or a `(code …)` for a C/POSIX declaration, inspect `lib/`.**

The library files are the single source of truth for what Cicili already
declares. Do not copy their declarations into a target, a module, a project,
or this skill. If a declaration is missing, add it to `lib/` as a binding or
to `lib/std/c/` as the corresponding declaration; do not paste a second copy
into the consumer.

Useful checks from the Cicili checkout:

```sh
sed -n '1,180p' lib/README.md
grep -R "func NAME\|struct NAME\|typedef NAME" lib
```

### 7.1 What the prelude already loads

`cicili.lisp` imports `lib/std/prelude.cicili` before reading a target. No
import is needed for:

| library | what it provides |
|---|---|
| [`std/prelude.cicili`](lib/std/prelude.cicili) | the load order and the automatically available layer |
| [`std/array.cicili`](lib/std/array.cicili) | fixed-length indexable memory |
| [`std/vector.cicili`](lib/std/vector.cicili) | a growable array that owns its headroom |
| [`std/string.cicili`](lib/std/string.cicili) | `(<> vector char)` under the name `string` |
| [`std/cell.cicili`](lib/std/cell.cicili) | one-owner heap value |
| [`std/rc.cicili`](lib/std/rc.cicili) | reference-counted cell, including atomic `arc` |
| [`std/maybe.cicili`](lib/std/maybe.cicili) | a value that may be absent |
| [`std/either.cicili`](lib/std/either.cicili) | one of two answers |
| [`std/btree.cicili`](lib/std/btree.cicili) | ordered map with logarithmic operations |

It also imports [`std/c/c.cicili`](lib/std/c/c.cicili) and
[`std/c/posix.cicili`](lib/std/c/posix.cicili), which carry the C17 and POSIX
declarations as typed Cicili declarations:

- C17: [`assert`](lib/std/c/assert.cicili), [`ctype`](lib/std/c/ctype.cicili),
  [`errno`](lib/std/c/errno.cicili), [`fenv`](lib/std/c/fenv.cicili),
  [`float`](lib/std/c/float.cicili), [`inttypes`](lib/std/c/inttypes.cicili),
  [`limits`](lib/std/c/limits.cicili), [`locale`](lib/std/c/locale.cicili),
  [`math`](lib/std/c/math.cicili), [`setjmp`](lib/std/c/setjmp.cicili),
  [`signal`](lib/std/c/signal.cicili), [`stdarg`](lib/std/c/stdarg.cicili),
  [`stdbool`](lib/std/c/stdbool.cicili), [`stddef`](lib/std/c/stddef.cicili),
  [`stdint`](lib/std/c/stdint.cicili), [`stdio`](lib/std/c/stdio.cicili),
  [`stdlib`](lib/std/c/stdlib.cicili), [`string`](lib/std/c/string.cicili),
  [`time`](lib/std/c/time.cicili), [`wchar`](lib/std/c/wchar.cicili),
  [`wctype`](lib/std/c/wctype.cicili).
- POSIX: [`dirent`](lib/std/c/posix/dirent.cicili),
  [`dlfcn`](lib/std/c/posix/dlfcn.cicili),
  [`fcntl`](lib/std/c/posix/fcntl.cicili),
  [`netdb`](lib/std/c/posix/netdb.cicili),
  [`poll`](lib/std/c/posix/poll.cicili),
  [`pthread`](lib/std/c/posix/pthread.cicili),
  [`socket`](lib/std/c/posix/socket.cicili),
  [`sys-mman`](lib/std/c/posix/sys-mman.cicili),
  [`sys-stat`](lib/std/c/posix/sys-stat.cicili),
  [`sys-time`](lib/std/c/posix/sys-time.cicili),
  [`sys-types`](lib/std/c/posix/sys-types.cicili),
  [`sys-wait`](lib/std/c/posix/sys-wait.cicili),
  [`unistd`](lib/std/c/posix/unistd.cicili).

The **structs, members, functions and constants** are in those files. Read them
there; do not copy a POSIX header into the target. The one usual missing piece
is a C typedef for a struct that has no typedef in the real header, e.g.
`(@define (code "pollfd struct pollfd"))`; it must use the exact name under
which std declares the members.

The algebraic layer is also preloaded:
[`std/haskell/data.cicili`](lib/std/haskell/data.cicili),
[`match.cicili`](lib/std/haskell/match.cicili),
[`class.cicili`](lib/std/haskell/class.cicili),
[`core.cicili`](lib/std/haskell/core.cicili),
[`haskell.cicili`](lib/std/haskell/haskell.cicili),
[`prelude.cicili`](lib/std/haskell/prelude.cicili),
[`maybe.cicili`](lib/std/haskell/maybe.cicili),
[`either.cicili`](lib/std/haskell/either.cicili),
[`bool.cicili`](lib/std/haskell/bool.cicili),
[`ordering.cicili`](lib/std/haskell/ordering.cicili),
[`tuple.cicili`](lib/std/haskell/tuple.cicili),
[`list.cicili`](lib/std/haskell/list.cicili),
[`ownlist.cicili`](lib/std/haskell/ownlist.cicili),
[`range.cicili`](lib/std/haskell/range.cicili),
[`persistent-btree.cicili`](lib/std/haskell/persistent-btree.cicili),
[`monoid.cicili`](lib/std/haskell/monoid.cicili),
[`functor.cicili`](lib/std/haskell/functor.cicili),
[`applicative.cicili`](lib/std/haskell/applicative.cicili),
[`monad.cicili`](lib/std/haskell/monad.cicili),
[`arc.cicili`](lib/std/haskell/arc.cicili).

### 7.2 Opt-in libraries and bindings

These are **not** loaded by the prelude. Import the file, include the real
header, and add the link flags. The import prefix is yours: with `:cu`,
`(cu.get …)` is the front-end form.

| import | needs | what it is |
|---|---|---|
| [`std/pthread/pthread.cicili`](lib/std/pthread/pthread.cicili) | `<pthread.h>` | pthread macros: `go`, `join`, `detach`, `cancel`, `exit-self`; the raw declarations are already in `std/c/posix` |
| [`db/sqlite.cicili`](lib/db/sqlite.cicili) | `<sqlite3.h>`, `-lsqlite3` | SQLite3 with `open`/`exec`/`run`/`query`/`close`; prepare/bind/step/finalize is one form |
| [`db/postgres.cicili`](lib/db/postgres.cicili) | `<libpq-fe.h>`, `-lpq` | libpq, same five-macro shape as SQLite |
| [`net/curl.cicili`](lib/net/curl.cicili) | `<curl/curl.h>`, `-lcurl` | libcurl easy interface; typed option words (`timeout`, `ca-info`, `pin`, `tls-version`, `verify-peer`, `tls-time`) |
| [`python/python.cicili`](lib/python/python.cicili) | `<Python.h>` first, `-export-dynamic -ldl` | CPython embedding API and numpy C API |
| [`python/cpython.cicili`](lib/python/cpython.cicili), [`python/numpy.cicili`](lib/python/numpy.cicili) | as above | the two halves of the Python binding, importable alone |
| [`python/module.cicili`](lib/python/module.cicili) | CPython | the other direction: a `.so` `import` loads, with functions written in Cicili |
| [`cpp/torch/torch.cicili`](lib/cpp/torch/torch.cicili) | `<torch/torch.h>`, `:cpp #t` | libtorch, plus the network DSL; its parts are [`tensor`](lib/cpp/torch/tensor.cicili), [`nn`](lib/cpp/torch/nn.cicili), [`optim`](lib/cpp/torch/optim.cicili), [`data`](lib/cpp/torch/data.cicili), [`dsl`](lib/cpp/torch/dsl.cicili) |
| [`cpp/memory.cicili`](lib/cpp/memory.cicili) | `<memory>`, `:cpp #t` | `std::shared_ptr` and `std::make_shared` |
| [`cpp/dl.cicili`](lib/cpp/dl.cicili) | `<dlfcn.h>`, `:cpp #t` | `dlopen`, `dlsym`, `dladdr`, `Dl_info` |
| [`cpp/zigurat/zigurat.cicili`](lib/cpp/zigurat/zigurat.cicili) | ZiguratIP `home/include`, `:cpp #t` | ZiguratIP behind one import; parts are [`stream`](lib/cpp/zigurat/stream.cicili), [`bigint`](lib/cpp/zigurat/bigint.cicili), [`sha`](lib/cpp/zigurat/sha.cicili), [`aes`](lib/cpp/zigurat/aes.cicili), [`der`](lib/cpp/zigurat/der.cicili), [`x509`](lib/cpp/zigurat/x509.cicili), [`tls`](lib/cpp/zigurat/tls.cicili) |
| [`cpp/opencv/opencv.cicili`](lib/cpp/opencv/opencv.cicili) | `<opencv2/*.hpp>`, `:cpp #t`, pkg-config `opencv4` | OpenCV 4 declarations: `cv::Mat`, containers, imgcodecs, imgproc, drawing, dnn, objdetect, features2d, photo, video, videoio, calib3d, constants |
| [`parsi/parsi.cicili`](lib/parsi/parsi.cicili) | ZiguratIP | macros for Parsi's seven objects; the import takes a third argument, the domain: `(import "lib/parsi/parsi.cicili" :parsi "demo")` |

The **public surface and modes** of each binding are in its file and in
[`lib/README.md`](lib/README.md); read the binding before using it. This skill
does not restate those declarations.

### 7.3 If something is missing

- Add the declaration to `lib/std/c` or a new binding under `lib/`, with the
  real header included by the target and the correct link flags.
- A binding follows a `decl-`/`impl-` shape:
  1. its own `DEFPACKAGE`;
  2. `(DEFMACRO init-macro () \`($$$ …))` with the declarations and
     `(typedef int NAME)` for constants, emitting no code;
  3. a front-end macro for a C API with a dangerous or repetitive shape;
  4. a separate `impl-` macro for code that must emit.
- Do not copy a declaration from a consumer into `lib/`, and do not copy
  `lib/` declarations into a consumer. That is how the two drift.
- Use `(code …)` only for a typedef/constant the real C header exposes but
  Cicili cannot spell, a genuinely unexposed declaration, or a compiler
  builtin. It is not a place to re-declare a library whose declarations
  already exist in `lib/`.

---

## 8. C++

Turn on with `:cpp #t`. The C core still applies.

Additional clauses:

| clause | meaning |
|---|---|
| `a::b::c` | qualified C++ name; rewritten internally to `($$ a b c)` |
| `&` / `&&` | lvalue/rvalue reference type modifier |
| `t<>` | template-id: `(t<> std::vector int)` |
| `template` | template declaration |
| `inherits` | public base classes |
| `method` | member function; `this` is implicit |
| `ctor` / `dtor` / `init` | constructor, destructor, member initializer list |
| `module` / `using` | namespace and `using` |
| `extern-c` | `extern "C" { … }` for C-callable linkage |
| `letin*` | binding whose lifetime is C++'s (destructor at scope exit) |
| `new*` / `delete*` / `delete[]*` | C++ allocation |
| `static-cast` / `dynamic-cast` / `const-cast` / `reinterpret-cast` | C++ casts |
| `try` / `catch` / `throw*` | C++ exceptions |

Method attributes: `(virtual)`, `(explicit)`, `(const)`, `(noexcept)`,
`(override)` — each applies to the next `method`.

Rules:

- C++ has no `class` here: use `struct`; members and bases are public.
- Use `letin*` for C++ objects, not `letin`.
- One signature per name; no `operator` clause (write the function form).
- A `code` result has no inferred type; prefer real clauses.
- For a loadable C++ module, the SDK's C prototypes must be declared with C
  linkage before the Cicili declarations. The cicolog SDK provides
  `coco-sdk`; never import `lib/module.cicili` and `lib/sdk.cicili` into the
  same target.
- `extern-c` is for building a C-callable library from C++; it is not a
  substitute for the SDK's raw C declarations.

---

## 9. `(code …)` — the fire escape

`code` emits its text verbatim. It is valid as an expression, a statement, and
in type position. It is **not type-checked** and has no inferred type.

Use it only for:

- a `@define` C typedef/constant that Cicili cannot spell
  (`(@define (code "pollfd struct pollfd"))`);
- a declaration a C library genuinely does not expose (`glob`, `realpath`,
  a platform-only header);
- a compiler builtin (`__builtin_add_overflow`, `__builtin_unreachable`);
- a deliberate C++ type/alias with no Cicili spelling (rare; document why).

Do **not** use it for ordinary calls, arithmetic, control flow, struct access,
or function bodies that Cicili can express. A `code` block is C that the
front end, ownership checker, and type inference cannot see.

When a C struct is already declared by `lib/std/c/posix`, do not bind it again.
The missing piece is usually only the C typedef; add one
`@define (code "name struct real_name")` and use the members Cicili already
knows.

---

## 10. Errors, debugging, and the build loop

- The line **under** `Unhandled …` names the cause; the rest is a Lisp
  backtrace. For `The value 0 is not of type SEQUENCE`, read frames 1–7: the
  offending form is printed in full, and it is usually a malformed `for`.
- `run err 1 > …` lines are the C compiler's diagnostics. They are the real
  error when Cicili got through.
- Cicili treats unrecognised compiler chatter as **fatal**. Put a new compiler
  warning's suppression in the target's own `:compile` list; do not paper over
  it.
- `--separate` keeps each pass's C; `--macroexpand` prints expansions;
  `--macros` lists macro definitions; `--debug` prints target resolution.
- Read the generated `.c` when learning a clause. It is formatted and is the
  ground truth.
- Run `sh test/run.sh` after a compiler/library change; the required final line
  is `red: 0`.
- A change to Cicili is an input to downstream repositories (cocolog and
  others). The burden of proof is the full suite plus a rebuild of the
  downstream tree on the new compiler.
- Version bumps: patch by default; minor for a new clause/library/macro a
  target can reach; major for a source incompatibility or changed emitted C.
  A documentation-only change does not bump.

---

## 11. Agent pre-flight checklist

Before writing or editing:

- [ ] I know whether this is a C or C++ target (`:cpp #t`).
- [ ] I know the target(s): `source`/`header`, output path, `:compile`/`:link`.
- [ ] I know every type I use is a **single token** or a typedef.
- [ ] I have checked `lib/std` and `lib/std/c/posix` before declaring POSIX
      structs or functions.
- [ ] I am adding a clause, not pasting C into `(code …)`.
- [ ] If I need macros, they emit one form (or use `($$$)`); names are lower
      case; package helpers use `KEY-EQ`.
- [ ] If I bind a C library: real header in the target, import with a prefix,
      declarations in `init-macro`, code emission in `impl-`.
- [ ] If I bind C++: `:cpp #t`, one signature per name, `letin*`, no operator
      overloading, C linkage where the SDK requires it.
- [ ] I know the ownership/lifetime: `let`, `letn`, `defer`, `alloc`, `cell`,
      `rc`, `letin*`.
- [ ] I have a runnable test (or the existing suite covers the clause) and will
      read the generated C.

After editing:

- [ ] `sbcl --script cicili.lisp --release FILE.cicili` succeeds.
- [ ] Generated C is reviewed where the change is non-obvious.
- [ ] `sh test/run.sh` ends `red: 0` if the compiler or std library changed.
- [ ] The downstream repository that consumes this change still builds.

---

## 12. Where to read next

| need | file |
|---|---|
| every C clause, with emitted C | [`doc/DOC-C.md`](doc/DOC-C.md) |
| every C++ addition | [`doc/DOC-CPP.md`](doc/DOC-CPP.md) |
| language design and agent rationale | [`README.md`](README.md) |
| current repository rules and failure notes | [`CLAUDE.md`](CLAUDE.md) |
| standard library and bindings | [`lib/README.md`](lib/README.md) |
| C/POSIX declarations | [`doc/lib-std-c.md`](doc/lib-std-c.md) |
| runnable clause examples | [`test/c/`](test/c) |
| runnable standard-library examples | [`test/std/`](test/std) |
| functional layer | [`doc/FUNCTIONAL.md`](doc/FUNCTIONAL.md) |

If a form is not in this file and not in DOC-C/DOC-CPP, do not guess: read the
generated C of the nearest existing use, or ask the compiler with
`--macroexpand`/`--separate`.
