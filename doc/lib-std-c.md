# `lib/std/c` — Cicili declarations for the C standard library and POSIX

621 functions, 48 struct/opaque types and 702 typedefs across 34 files, in the same
declaration style `lib/std/prelude.cicili` already uses for `FILE`, `malloc` and `printf`.

These files exist so **Cicili can infer types**. Nothing in them is emitted as C.
`load-macro-file` specifies each file's `init-macro` body at load time, and
specification only registers symbols in the symbol table — it never compiles into a
target. The real declarations still come from the real C header at compile time.

## Wiring it up

`lib/std/prelude.cicili` imports both aggregators, above the std modules:

```cicili
(import "./c/c.cicili")      ; whole C17 standard library
(import "./c/posix.cicili")  ; common POSIX headers (needs c.cicili first)
```

That order matters: `array.cicili`, `cell.cicili`, `rc.cicili` and `vector.cicili` use
`malloc` / `free` / `memcpy` at specification time, so the C declarations have to be
registered first.

Or take only what you need — each header is independent apart from the ownership
rules below:

```cicili
(import "./c/stddef.cicili")
(import "./c/stdio.cicili")
(import "./c/string.cicili")
```

Import order matters in one direction only: `stddef.cicili` and `stdint.cicili` define the
scalar aliases (`size_t`, `ptrdiff_t`, `intN_t`) that every other file's signatures are
written in terms of, and `posix/sys-types.cicili` does the same for `ssize_t`, `off_t`,
`pid_t` and friends. The aggregators already order this correctly.

In your target you still write what you always wrote:

```cicili
(source "main.c" (:std #t :compile #t :link "-o app")
  (include <time.h>)
  ...)
```

## What a declaration file looks like

```cicili
;;;; Cicili declarations for <stdio.h>

(DEFMACRO init-macro ()
  `($$$
     (typedef llong fpos_t)                                   ; type alias
     (decl) (struct DIR)                                      ; opaque type
     (decl) (struct tm (member int tm_sec) (member int tm_min)) ; type with members
     (typedef FILE * stdout)                                  ; global variable
     (typedef int EOF)                                        ; C macro constant
     (decl) (func fclose ((FILE * stream)) (out int))         ; function
     (decl) (func rewind ((FILE * stream)))                   ; void return: no (out)
     (decl) (func printf ((const char * restrict fmt) ($$$)) (out size_t)) ; variadic
     ))
```

Exactly one `init-macro` per file, body always starts with `$$$`.

Globals and macro constants both use the `typedef` idiom — the same one
`lib/std/prelude.cicili` already uses for `stdout`/`stderr`/`stdin`. `@TYPEDEF` resolves
through `deep-typeof` to the underlying type, which is exactly what inference needs
for a symbol whose type we want to pin down without emitting anything. The *value*
of a constant like `SEEK_SET` or `M_PI` still comes from the real header, so nothing
is hard-coded to one platform.

`FORMAT-SPEC.md` next to this README has the full grammar, for adding more headers.

## `struct X` types

C types whose real spelling is `struct X` — `tm`, `timeval`, `stat`, `dirent`,
`sockaddr`, `pollfd`, `addrinfo`, ... — are declared here under the **bare** name,
because that is what Cicili emits when it writes the type out:

```cicili
(decl) (struct tm
         (member int tm_sec)
         ...)
```

If you declare a variable of such a type, C needs a name for it. Two ways:

```cicili
;; in a header target — a (decl) struct compiles to exactly the forward typedef:
(header "types.h" (:compile #f)
  (guard __MY_TYPES_H__
    (include <time.h>)
    (decl) (struct tm)))       ; => typedef struct tm tm;
```

```cicili
;; or a one-liner define in any target:
(@define (code "tm struct tm"))  ; => #define tm struct tm
```

Two names collide with a function of the same name in C and are therefore declared
under a `_t` suffix here — use the `@define` form for these:

| declared here  | real C          | emit with                                     |
|----------------|-----------------|-----------------------------------------------|
| `stat_t`       | `struct stat`   | `(@define (code "stat_t struct stat"))`       |
| `sigaction_t`  | `struct sigaction` | `(@define (code "sigaction_t struct sigaction"))` |

## Symbol ownership

Each symbol is declared in exactly one file; other files use it by name.
`lib/std/prelude.cicili` now declares only Cicili's own primitive type names
(`char`, `int`, `i32`, `real`, `auto`, ...) — every C symbol it used to carry has
moved into the file below that owns it.

| symbol | home |
|---|---|
| `FILE`, `stdin`, `stdout`, `stderr`, `printf`, `fprintf` | `stdio.cicili` |
| `malloc`, `calloc`, `free` | `stdlib.cicili` |
| `memcpy`, `memset` | `string.cicili` |
| `size_t`, `ptrdiff_t`, `wchar_t`, `max_align_t` | `stddef.cicili` |
| `intN_t`, `uintN_t`, `intptr_t`, `intmax_t`, `SIZE_MAX`, `WCHAR_MIN/MAX` | `stdint.cicili` |
| `time_t`, `clock_t`, `tm`, `timespec` | `time.cicili` |
| `va_list` | `stdarg.cicili` |
| `wint_t`, `mbstate_t` | `wchar.cicili` |
| `errno` and every `E*` | `errno.cicili` |
| `SEEK_SET`/`SEEK_CUR`/`SEEK_END` | `stdio.cicili` |
| `alarm`, `pause`, `sigset_t` | `signal.cicili` |
| `ssize_t`, `off_t`, `pid_t`, `uid_t`, `gid_t`, `mode_t`, `dev_t`, `ino_t`, ... | `posix/sys-types.cicili` |
| `socklen_t`, `sockaddr`, `in_addr` | `posix/socket.cicili` |

## Files

**C17** — `stddef` `stdint` `stdbool` `stdarg` `limits` `float` `stdio` `stdlib`
`string` `ctype` `errno` `assert` `math` `fenv` `inttypes` `time` `locale` `signal`
`setjmp` `wchar` `wctype`

**POSIX** (`posix/`) — `sys-types` `unistd` `fcntl` `sys-stat` `dirent` `sys-wait`
`sys-time` `poll` `sys-mman` `dlfcn` `socket` `netdb` `pthread`

`posix/pthread.cicili` declares the pthread types and functions only. The ergonomic
macro layer (`go`, `detach`, `join`, `lock`, ...) stays in `lib/std/pthread/pthread.cicili`.

## Deliberately not declared

Some C names are macros that take a *type* or an unevaluated argument, and have no
`func` signature. They are left alone — Cicili passes an unknown symbol through to C
verbatim, so they keep working, they just aren't type-inferred:

* `offsetof`, `va_start`, `va_arg`
* `assert`, and the type-generic `fpclassify` / `isnan` / `isinf` / `isfinite` /
  `signbit` / `isgreater` family from `<math.h>`
* `INT8_C` / `UINT64_C` style value-pasting macros from `<stdint.h>`
* `NULL` — Cicili spells it `nil`

Named function-pointer typedefs (`sighandler_t`) are not expressible in the
declaration grammar either; `signal`'s handler is spelled inline as a function-pointer
parameter and its return type is approximated as `void *`.

## Platform assumptions

The scalar aliases are written for a mainstream LP64 target (Linux/macOS x86-64 or
arm64): `size_t` is `ulong`, `long` is 64-bit, `wchar_t` is a 4-byte `int`, `time_t` is
`i64`. They only feed inference and are never emitted, so a mismatch on an exotic
target costs you an inferred type, not a miscompile.
