# `lib` — what Cicili ships with

Two kinds of thing live here, and the difference decides how you reach them.

**Libraries written in Cicili** — containers, ownership, the algebraic layer. They emit
real code, generically, through a `decl-`/`impl-` pair per instantiation.

**Bindings to libraries written in C or C++** — SQLite, libcurl, CPython, libtorch. These
emit *nothing*. They exist so Cicili's type inference knows what a `sqlite3` or a
`torch::Tensor` is and what each entry point returns; the real declarations still come
from the real header, which stays the only definition. Several of them add a front end
over the declarations — a handful of macros for the part of the C API that is easy to get
wrong — and those macros do expand to code.

## `lib/std` is already loaded. Everything else is opt-in.

`cicili.lisp` loads [`std/prelude.cicili`](std/prelude.cicili) before it reads your file,
so the C standard library, the POSIX headers, the containers and the whole algebraic
layer are visible with no `import` at all. Nothing else is: a binding costs an
`(import …)`, an `(include …)` in the target, and usually a flag on the link line.

```lisp
(source "app.c"
  (make :std #t :compile #t :link ("-lapp.o" "-lcurl" "-o" "app"))
  (include <curl/curl.h>)                        ; the real header
  (import "lib/net/curl.cicili" :cu)             ; the declarations and front end
  …)
```

**The import prefix is yours.** A binding with a front end names its macros `get`, `set`,
`open`, `close` — short words that would collide with Cicili clauses and with each other
if they were global. `import`'s second argument decides what they are called at your call
site, so `:cu` gives `(cu.get …)` and `:http` gives `(http.get …)`. Importing one with no
prefix registers those bare names for every Cicili file in the process; that is the
developer's call to make, and each file says plainly what it would cost.

---

## `std` — the Cicili standard library

Loaded automatically. Nothing here needs an import.

| | |
|---|---|
| [std/prelude.cicili](std/prelude.cicili) | what gets loaded, and the order it loads in |
| [std/array.cicili](std/array.cicili) | contiguous memory of a fixed length — the minimal indexable buffer |
| [std/vector.cicili](std/vector.cicili) | an array that owns its headroom and grows |
| [std/string.cicili](std/string.cicili) | a `(<> vector char)` under a second name — the same struct, not a wrapper |
| [std/cell.cicili](std/cell.cicili) | a heap value with one owner |
| [std/rc.cicili](std/rc.cicili) | a cell that counts its owners, plus an `arc` whose count moves atomically |
| [std/maybe.cicili](std/maybe.cicili) | a value that may not be there |
| [std/either.cicili](std/either.cicili) | one of two answers — normally what failed, or what it produced |
| [std/btree.cicili](std/btree.cicili) | an ordered map, every operation logarithmic |

The one exception is [std/pthread/pthread.cicili](std/pthread/pthread.cicili) — macros
over pthread — which the prelude does **not** import. It needs
`(import "lib/std/pthread/pthread.cicili")` and `(include <pthread.h>)` of its own; the
raw pthread declarations are in `std/c/posix` and are loaded.

### `std/c` — the C17 standard library and POSIX

Declarations only, imported by the std prelude. [`c/c.cicili`](std/c/c.cicili) aggregates
the C17 headers — `stdio`, `stdlib`, `string`, `math`, `time`, `errno`, `signal`,
`setjmp`, `inttypes`, `wchar` and the rest — and [`c/posix.cicili`](std/c/posix.cicili)
aggregates the POSIX ones: `unistd`, `fcntl`, `socket`, `netdb`, `poll`, `pthread`,
`dirent`, `dlfcn`, `sys/stat`, `sys/mman`, `sys/time`, `sys/wait`, `sys/types`.

A constant is declared as `(typedef int EOF)` rather than as a variable, because that is
what a `#define` or an enum member is to Cicili: a name of that type which the header
provides. Bindings elsewhere in this tree follow the same convention.

### `std/haskell` — the algebraic layer

Also imported by the std prelude, and the reason `match` works.

| | |
|---|---|
| [haskell/data.cicili](std/haskell/data.cicili), [haskell/match.cicili](std/haskell/match.cicili) | tagged unions and pattern matching over them |
| [haskell/class.cicili](std/haskell/class.cicili) | type classes and their instances |
| [haskell/maybe.cicili](std/haskell/maybe.cicili), [haskell/either.cicili](std/haskell/either.cicili), [haskell/bool.cicili](std/haskell/bool.cicili), [haskell/ordering.cicili](std/haskell/ordering.cicili), [haskell/tuple.cicili](std/haskell/tuple.cicili) | the small algebraic types |
| [haskell/list.cicili](std/haskell/list.cicili) | a linked list that borrows its elements |
| [haskell/ownlist.cicili](std/haskell/ownlist.cicili) | one that owns them and frees them, with a borrow-returning `nth` |
| [haskell/range.cicili](std/haskell/range.cicili) | a bounded sequence |
| [haskell/persistent-btree.cicili](std/haskell/persistent-btree.cicili) | a B-tree that shares structure between versions rather than mutating |
| [haskell/monoid.cicili](std/haskell/monoid.cicili), [haskell/functor.cicili](std/haskell/functor.cicili), [haskell/applicative.cicili](std/haskell/applicative.cicili), [haskell/monad.cicili](std/haskell/monad.cicili) | the concepts, each with instances for the types above |
| [haskell/arc.cicili](std/haskell/arc.cicili) | shared ownership across threads, with the lock — *not* `std/rc`'s `arc` |

---

## Bindings

Each needs its own `(import …)`, the header included in the target, and the flags below.

| | needs | what it is |
|---|---|---|
| [db/sqlite.cicili](db/sqlite.cicili) | `<sqlite3.h>`, `-lsqlite3` | SQLite3, plus `open` / `exec` / `run` / `query` / `close`. The front end turns prepare-bind-step-finalize into one form, and finalizes on every path including the one where prepare failed. |
| [db/postgres.cicili](db/postgres.cicili) | `<libpq-fe.h>`, `-lpq` | libpq, with the same five-macro shape as sqlite so the two read alike. |
| [net/curl.cicili](net/curl.cicili) | `<curl/curl.h>`, `-lcurl` | libcurl's easy interface. `curl_easy_setopt` is variadic and untyped, so each option is a word that knows its own type — `(timeout 10)` emits `((long)10)`. Collects response bodies, and covers TLS: `ca-info`, `pin`, `tls-version`, `verify-peer`, and `tls-time` for whether a handshake really happened. |
| [python/python.cicili](python/python.cicili) | `<Python.h>` **first**, `-export-dynamic -ldl` | CPython's embedding API and the numpy C API — see [python/README.md](python/README.md). [python/module.cicili](python/module.cicili) is the other direction: a `.so` that `import` loads, whose functions are written in Cicili. |
| [cpp/torch/torch.cicili](cpp/torch/torch.cicili) | `<torch/torch.h>`, `:cpp #t` | libtorch, and a DSL in which a network is described rather than constructed — see [cpp/torch/README.md](cpp/torch/README.md). |
| [cpp/memory.cicili](cpp/memory.cicili) | `<memory>`, `:cpp #t` | `std::shared_ptr` and `std::make_shared`. |
| [cpp/opencv/opencv.cicili](cpp/opencv/opencv.cicili) | `<opencv2/*.hpp>`, `:cpp #t`, pkg-config `opencv4` | OpenCV 4: `cv::Mat` and the small value types, the containers per element type, imgcodecs, imgproc, drawing, dnn, objdetect, features2d, photo, video, videoio, calib3d, the constants. Declarations only; cocolog's `modules/opencv` is the program written against it. |
| [parsi/parsi.cicili](parsi/parsi.cicili) | ZiguratIP | A Cicili macro for each of Parsi's seven top-level objects — `TABLE`, `PROCEDURE`, `CLASS`, `PAGE`, `TYPE`, `ENUM`, `SEQUENCE` — so a Cicili program writes one instead of a developer pasting C++ into it. Its import takes a third argument, the domain: `(import "lib/parsi/parsi.cicili" :parsi "demo")`. |

## Tests

`sh test/run.sh` runs the lot; `sh test/run.sh test/c/curl` runs one.

Where the real library is something every distribution ships, the test builds and runs
against it rather than a stub — which is the only way to prove the declared signatures
are the library's. `test/c/sqlite` and `test/c/curl` are those, and `test/c/curl-tls`
raises a TLS server with a self-signed certificate so the handshake and the certificate
check are exercised too.

Three do less, and say so in their own headers:

* `test/c/postgres` builds against the real libpq but **skips** when it cannot reach a
  server — "no server here" is not the same finding as "the binding is wrong".
* `test/c/python` and `test/cpp/torch` build against **stubs**, because an interpreter
  and a hundred megabytes of libtorch are not reasonable to require of anyone running
  the suite.

## Adding one

Copy the shape from [db/sqlite.cicili](db/sqlite.cicili) or
[net/curl.cicili](net/curl.cicili), whichever is closer:

1. A `DEFPACKAGE` of its own, so an unprefixed import has a namespace to enter and the
   helper functions do not land in `CL-USER`.
2. `(DEFMACRO init-macro () \`($$$ …))` holding the declarations. An imported
   `init-macro` **declares without emitting** — that is what lets these files describe a
   library without defining it, and it is why constants are `(typedef int NAME)` rather
   than `(decl) (var int NAME)`.
3. A front end, if the C API has a shape worth hiding. Words the macros recognise inside
   their own argument lists — not macros of their own, which would be global.
4. Anything that has to emit real code goes in a separate `impl-` macro the target calls,
   because `init-macro` cannot.
