# Working on, and in, Cicili

`doc/DOC-C.md` is the reference and `lib/README.md` the index of what ships.
This is the shorter thing: what a session needs to know before it writes a line,
and what has already cost real time to rediscover.

## This repository is an INPUT to the others

cocolog and The Coco are written in Cicili and treat it as frozen: they may
diagnose a transpiler problem and propose a patch, never apply one. So a change
here is a change to the ground three repositories stand on, and the burden of
proof is `sh test/run.sh` plus a rebuild of whatever downstream repository the
change touches.

**This file is the exception the owner asked for**: notes, not machinery.

## Cicili is Lisp-syntax C, and the places it is not

Every line below was paid for by a build that failed, and most of them failed
with a message about Lisp rather than about the code.

### The three that report themselves as `The value 0 is not of type SEQUENCE`

That message is the macro layer calling `LENGTH` on something that is not a
list. It names no file and no line. The **backtrace** does: read frames 1–7 and
the failing form is written out in full.

* **`for` takes a BINDING LIST, not a C-style init.**

  ```cicili
  (for ((size_t i . 0)) (< i n) ((++ i))     ; four parts
       BODY)
  ```

  The first part *declares* the variable, the step is parenthesised, and the
  body follows. `(for ((set i 0) (< i n) (++ i)) BODY)` is the C shape and it is
  the wrong one.

* **A dotted initialiser inside a generic in a package where `nil` is that
  package's own symbol** is genuinely dotted and will not read. A `static` is
  zero anyway.

* **A macro must emit ONE form.** Several leaves the symbols unregistered, and
  the next reference to one is `unknown symbol`.

### Types, and the one that wastes an afternoon

* **A type is ONE token.** `(cast unsigned char x)` cannot be written; nor can
  `unsigned char *` in a cast. Typedef it, or mask: `(bitand (cast int c) 255)`.
* **Pointer casts are parenthesised**: `(cast (void **) p)`, `(cast (ubyte_t *) p)`.
* **`(out (T *))` is wrong; `(out T *)` is right.** The parenthesised form in
  *return* position emits a cast to a non-scalar type.

* **`std/c/posix` ALREADY DECLARES THE POSIX STRUCTS, members and all.**
  `socket.cicili` has `sockaddr_in` with `sin_family`, `sin_port`, `sin_addr`;
  `poll.cicili` has `pollfd`; `netdb.cicili` has `addrinfo` — and the std
  prelude loads every one of them before your file is read. **Do not describe a
  system header a second time.**

  What *is* missing is only the C side: `struct pollfd` has no typedef in the
  real header, a Cicili type is one token, and the emitted `pollfd p;` will not
  compile. One `@define` per struct fixes it —

  ```cicili
  (@define (code "pollfd struct pollfd"))
  ```

  — and **the typedef's name must be the name std declares the members under.**
  `pollfd_t` is a *different* name, which Cicili has no members for, and
  `($ p fd)` then answers `unknown struct type: pollfd_t`. That one letter of
  difference sent an entire socket module through raw C escapes before anybody
  checked `lib/std/c/posix/`.

### Access, control flow, and arrays

| you want | you write |
|---|---|
| `obj.member` | `($ obj member)` — and it **chains**: `($ a b c)` is `a.b.c` |
| `ptr->member` | `(-> ptr member)` |
| a function *stored in* a member | `(=> obj member args…)`, one level only |
| `arr[i]` | `(nth i arr)` — **index first**. There is no `aref`. |
| bitwise and/or/xor | `bitand`, `bitor`, `xor` — not `&`, `\|`, `^` |
| `break;` / `continue;` | `break` / `continue` — **bare symbols**, not `(break)` |

* **Arrays may have TWO dimensions**: `[]`, `[N]`, `[N][M]`, and no more. (Noted
  because a session once concluded the opposite from a `for`-loop error and
  wrote it down; the array was innocent.)
* **A `let` declares locals; `block` does not.** `(block (char e [256]) …)`
  fails with `unknown symbol: [`.
* **`new` is a Cicili macro**, so a local of that name is read as a call to it.
* **A string literal is RAW** — it reaches C untouched, so `"\n"` is two source
  characters and a newline only after the C compiler sees it. A literal may not
  contain a real newline, and may not end in a backslash.
* **Lambda-list markers are uppercase** in a macro: `&REST`, never `&rest`.

## `(code "…")` is the fire escape, not the door

It is raw C that Cicili cannot see, so it cannot type-check it, cannot infer
through it, and no front end can help it. **Reach for a Cicili clause first,
every time.** The legitimate uses are narrow: a `@define` typedef, and something
`lib/std/c` genuinely does not declare (`glob`, `realpath`).

A back end made of pasted C is a back end that has opted out of the language.

## Ownership: `move`, `ref`, `non-copy`

Modifiers in the type position, used by the functional layer:

* **`move` emits nothing at all.** It is a marker: this argument's ownership
  transfers, and the check is at expansion time rather than run time.
* **`ref` emits `* restrict`.** A borrow, and the `restrict` is the promise that
  makes it one.
* **`(non-copy)` on a struct** says values of the type may only be moved, never
  copied.

The cost model is worth stating plainly: none of these three exist in the
emitted C except as `* restrict`. They are how the *macro layer* reasons, which
is why they can be strict without being slow.

## Generics beat templates, and here is the mechanism

```cicili
(generic decl-crate (a)
  (struct (<> crate a)
          (member a value)))

(decl-crate int)          ; emits: typedef struct crate_int { int value; } crate_int;
```

* **`generic` defines a macro parameterised by type**; `<>` joins name parts
  with `_`, so `(<> free rc a)` is the symbol `free_rc_a`.
* **Instantiation is explicit.** You write `(decl-vector char)` and a real,
  monomorphised `vector_char` appears — with a name you can grep for, in C you
  can read.

Why that is better than a template rather than merely different: there is no
implicit instantiation, so nothing is emitted that you did not ask for; the
mangled name is `vector_char` rather than a paragraph; and a type error is a C
error about a concrete struct instead of a substitution trace. The whole
mechanism is one macro expansion, which means you can print it.

**The convention is a `decl-`/`impl-` pair per library**, and a target calls
both. `lib/std/vector.cicili` is the worked example.

## Every library here is a FRONT END over a BACK END

This is the shape to copy, and it is the point of the tree:

* **the back end** is pure C — declarations of the real library, or Cicili that
  emits real code;
* **the front end** is macros: the part that makes the call site easy, hides a
  C API's sharp shape, and lets a word inside a macro's argument list know its
  own type (`(timeout 10)` in `net/curl.cicili` emits `((long)10)`).

`lib/README.md`'s "Adding one" is the recipe: a `DEFPACKAGE` of its own; an
`init-macro` holding declarations, which **declares without emitting**; a front
end if the API has a shape worth hiding; and anything that must emit real code
in a separate `impl-` macro, because `init-macro` cannot.

Constants are declared `(typedef int NAME)`, because that is what a `#define` or
an enum member *is* to Cicili: a name of that type the header provides. Which is
also why **a `#define` you write yourself is invisible** — a Cicili form naming
it fails with `unknown symbol`. Write the number out.

## What ships, so nothing is rebuilt by hand

`lib/std` is loaded by the prelude with no import at all. Everything else costs
an `(import …)`, an `(include …)` in the target, and usually a link flag.

| want | reach for |
|---|---|
| a growing buffer | `std/vector.cicili` |
| a string | `std/string.cicili` — a `(<> vector char)` under a second name, the same struct |
| an ordered map | `std/btree.cicili`, or `std/haskell/persistent-btree.cicili` to share structure between versions |
| a value that may not be there | `std/maybe.cicili` |
| what failed, or what it produced | `std/either.cicili` |
| one owner / counted owners | `std/cell.cicili`, `std/rc.cicili` (and its `arc`) |
| threads | `std/pthread/pthread.cicili` — **not** imported by the prelude |
| tagged unions and `match` | `std/haskell/data.cicili`, `match.cicili` |
| the C17 and POSIX headers | already loaded: `std/c/c.cicili`, `std/c/posix.cicili` |

Bindings that exist: `db/sqlite`, `db/postgres`, `net/curl`, `python/python`,
`cpp/torch`, `cpp/memory`, `parsi/parsi`.

## Reading a failure

1. **The line UNDER the `Unhandled …` banner names the cause.** Everything below
   it is Lisp backtrace.
2. For `not of type SEQUENCE`, read the backtrace frames — the offending form is
   printed in full, and it is nearly always a `for`.
3. **Cicili treats unrecognised compiler chatter as fatal**, so a new warning
   class from a new gcc stops the build. Silence it in the target's own
   `:compile` list rather than working around it.
4. `run err 1 > …` lines are the C compiler's, and they are the real error when
   the Cicili layer got through.
