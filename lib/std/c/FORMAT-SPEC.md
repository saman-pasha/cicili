# Cicili C-header declaration file format

These files declare (never define) C library types, globals, constants and functions so
Cicili's specifier/resolver can infer types. They are loaded as **macro files** via
`(import "./c/<name>.lisp")` from `lib/std/prelude.lisp`.

Nothing in these files is emitted as C. `load-macro-file` specifies the `init-macro`
body at load time; specification only registers symbols in Cicili's symbol table,
it never compiles into a target. The real declarations still come from the real
C header at compile time via `(include <stdio.h>)` in the developer's target.

## File skeleton

```lisp
;;;; Cicili declarations for <stdio.h>
;;;; Import from lib/std/prelude.lisp:  (import "./c/stdio.lisp")
;;;; Requires in target: (include <stdio.h>)  or  (:std #t)

(DEFMACRO init-macro ()
  `($$$
     ;;; ---- types ----
     ...
     ;;; ---- constants ----
     ...
     ;;; ---- functions ----
     ...
     ))
```

Exactly one `init-macro` per file. Backquote is mandatory. The body must start with `$$$`.
Use `;;;` for section banners and `;;` / trailing `;` for notes. Keep declarations in
the same order as the C standard's synopsis, so the file reads like the header.

## 1. Type aliases

```lisp
(typedef ulong size_t)
(typedef long  ptrdiff_t)
(typedef i64   time_t)
```

Cicili primitive names (see DOC-C.md): `void bool char uchar short ushort int uint
long ulong llong ullong i8 u8 i16 u16 i32 u32 i64 u64 i128 u128 float double real auto`.
`real` is `long double`. Pick the alias that is right on a mainstream LP64 target;
it only feeds inference, it is never emitted.

## 2. Opaque types

```lisp
(decl) (struct FILE)
(decl) (struct DIR)
```

`(decl)` marks it as declared-elsewhere. If such a form is ever compiled into a target
it emits only `typedef struct FILE FILE;` — never a body.

## 3. Struct types with members

Declare the members so `$` / `->` member access resolves:

```lisp
(decl) (struct tm
         (member int tm_sec)
         (member int tm_min)
         (member int tm_hour))
```

Members use `(member <type...> <name>)`, same type grammar as everything else.
Arrays: `(member char d_name [256])`. Pointers: `(member char * s)`.

For C types whose real spelling is `struct X` (no typedef in the header) — `tm`,
`timeval`, `stat`, `dirent`, `sockaddr`, `pollfd`, ... — declare them under the bare
name here. The developer emits the matching `typedef struct X X;` by repeating the
`(decl) (struct X ...)` form inside a header target.

## 4. Globals

Use the `typedef` idiom already used by `lib/std/prelude.lisp` for `stdout`:

```lisp
(typedef FILE * stdout)
(typedef int errno)
```

`@TYPEDEF` resolves through `deep-typeof` to the underlying type, which is exactly what
inference needs for a symbol whose type we want to pin down without emitting anything.

## 5. Constants (C macros: EOF, SEEK_SET, M_PI, EXIT_SUCCESS, E*)

Same idiom — the point is the *type*, the value still comes from the real header:

```lisp
(typedef int    EOF)
(typedef int    SEEK_SET)
(typedef double M_PI)
(typedef int    EXIT_SUCCESS)
```

Do not use `(enum ...)` for these: enum would pin a value that differs per platform.

## 6. Functions

```lisp
(decl) (func fopen ((const char * restrict path) (const char * restrict mode)) (out FILE *))
(decl) (func free ((void * ptr)))
(decl) (func printf ((const char * restrict format) ($$$)) (out size_t))
```

* `(decl)` attribute goes on its own, immediately before the `func` form.
* Return type is `(out <type...>)`, placed right after the parameter list.
  **Omit `(out ...)` entirely for `void`-returning functions.**
* Parameter grammar (`specify-type<`), longest form first:
  * `(const char * restrict name)` — const + type + modifier + restrict/const + name
  * `(const char * name)` / `(char * const name)` / `(char * restrict name)`
  * `(char * name)` / `(const char name)` / `(char name [])` / `(char name [16])`
  * `(int)` — unnamed parameter is allowed
* Variadic tail: `($$$)` as the last parameter.
* Function-pointer parameter: `(func <name> (<params>) (out <type>))`, e.g.
  `(func compar ((const void * a) (const void * b)) (out int))`.
* `void` parameter lists are written as `()` — never `((void))`.
* Do not use `**` on a type that also needs `restrict`; keep types to what the
  grammar above expresses. Anything more exotic, skip the function.

## Hard rules

* No `(include ...)`, no `(@define ...)`, no `(var ...)`, no `(enum ...)` in these files.
* No function *definitions* — declaration only.
* Never declare the same symbol twice within a file, and prefer to leave a symbol
  to its "home" header when two headers both expose it (e.g. `size_t` lives in
  `stddef.lisp` only; other files just use it).
* `NULL` is spelled `nil` in Cicili — do not declare `NULL`.
* `lib/std/prelude.lisp` declares only Cicili's own primitive type names
  (`char`, `int`, `i32`, `real`, `auto`, ...). The C symbols it used to carry now
  live here: `FILE` / `stdin` / `stdout` / `stderr` / `printf` / `fprintf` in
  `stdio.lisp`, `malloc` / `calloc` / `free` in `stdlib.lisp`, `memcpy` / `memset`
  in `string.lisp`.
* ASCII only, LF line endings, two-space indentation inside `$$$`.
