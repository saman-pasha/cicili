# Cicili – The C++ Language, in S-expressions

## Overview

**This document covers the C++ half of Cicili.** It is a supplement, not a replacement:
a C++ target is a C target with a handful of extra clauses, and everything in
[DOC-C.md](DOC-C.md) still applies. `func`, `let`, `if`, `for`, `struct`, `cast`, `nth`,
`lambda`, `defer`, macros and `generic` all mean exactly what they mean there. Read
DOC-C.md first; this file only describes what is **different or additional**.

The design rule for the whole C++ layer is one sentence:

> **If Cicili already has a construct that means this, use it. Only add a clause when the
> language has nothing that means it.**

That rule is why there is no `class`, no `namespace` clause, and no `cref`. C++'s class is
Cicili's `struct`; C++'s namespace is Cicili's `module`; C++'s reference is the `&` that has
always been in the type descriptor. Every time the rule was applied it **removed** syntax
rather than adding it.

Three consequences worth knowing up front:

* **There is no `class`, and no `public:` / `private:` / `protected:`.** A struct's members
  and bases are public in C++ already, which is exactly why the surface is a struct. The two
  things a C++ definition normally has to say are the two things you never have to say.
* **`this` is implicit.** A method does not take it and does not declare it.
* **Lifetime is C++'s.** A C++ object runs its own destructor at scope exit. Bind it with
  `letin*`, not `letin` — see [Lifetime](#lifetime-letin-and-letin).

---

## Turning C++ on

A target is C++ when its `make` form says so:

```lisp
(source "app.cpp"
  (make :cpp #t :compile #t :link ("-lapp.o" "-o" "app"))
  (include <cstdio>)
  ...)
```

`:cpp #t` selects the C++ compiler and linker from [config.lisp](../config.lisp)
(`clang++` / `g++` rather than `clang` / `gcc`) and enables every clause below. Without it,
`inherits`, `method`, `ctor` and `dtor` are errors that say so.

Two things change in the emitted code as soon as `:cpp #t` is set:

| | C target | C++ target |
|---|---|---|
| `struct X` | `typedef struct X { … } X;` | `struct X { … };` — C++ needs no typedef |
| `auto` | `__auto_type` (a GNU extension) | `auto` |

---

## Clause Index

Everything here is **in addition to** the clauses in [DOC-C.md](DOC-C.md).

### Types and names

| clause | what it does | section |
|---|---|---|
| `a::b::c` | a qualified name — one name, written the way C++ writes it | [Qualified Names](#qualified-names) |
| `&` | a reference; a type modifier, like `*` | [References](#references) |
| `&&` | an rvalue reference | [References](#references) |
| `t<>` | template arguments: `(t<> std::vector int)` → `std::vector<int>` | [Templates](#templates) |
| `template` | declares a template | [Templates](#templates) |

### Structs

| clause | what it does | section |
|---|---|---|
| `inherits` | base classes, all public | [Inheritance](#inheritance) |
| `method` | a member function, `this` implicit | [Methods](#methods) |
| `ctor` | a constructor | [Constructors and Destructors](#constructors-and-destructors) |
| `dtor` | a destructor | [Constructors and Destructors](#constructors-and-destructors) |
| `init` | a constructor's member-initializer list | [Constructors and Destructors](#constructors-and-destructors) |

### Scope

| clause | what it does | section |
|---|---|---|
| `module` | a named scope — emits `namespace` in a C++ target | [Modules are Namespaces](#modules-are-namespaces) |
| `using` | `using namespace X;` | [Modules are Namespaces](#modules-are-namespaces) |
| `extern-c` | `extern "C" { … }` | [Linkage](#linkage) |

### Expressions and statements

| clause | C++ equivalent | section |
|---|---|---|
| `letin*` | a binding whose destructor is C++'s, or a named one, or none | [Lifetime](#lifetime-letin-and-letin) |
| `new*` | `new T(args)` | [Allocation](#allocation) |
| `delete*` / `delete[]*` | `delete p` / `delete[] p` | [Allocation](#allocation) |
| `static-cast` | `static_cast<T>(e)` | [Casts](#casts) |
| `dynamic-cast` | `dynamic_cast<T>(e)` | [Casts](#casts) |
| `const-cast` | `const_cast<T>(e)` | [Casts](#casts) |
| `reinterpret-cast` | `reinterpret_cast<T>(e)` | [Casts](#casts) |
| `try` / `catch` | `try { … } catch (T e) { … }` | [Exceptions](#exceptions) |
| `throw*` | `throw e` | [Exceptions](#exceptions) |

### Method attributes

Written in front of the `method` they modify, like every other Cicili attribute, and
applying to the next clause only. They are emitted where C++ wants them, which is not where
they are written: two go before the return type and three after the parameter list.

| attribute | emitted | where |
|---|---|---|
| `virtual` | `virtual` | before the return type |
| `explicit` | `explicit` | before the return type |
| `const` | `const` | after the parameter list |
| `noexcept` | `noexcept` | after the parameter list |
| `override` | `override` | after the parameter list |

```lisp
(virtual) (const)
(method area () (out double) (return (* ($ this w) ($ this h))))
```

```cpp
virtual double area () const { return ((this->w) * (this->h)); }
```

---

## Qualified Names

`torch::nn::Linear` is written the way it is read. There is no wrapper and no escape:

```lisp
(func lengthOf ((const std::string & s)) (out int)
      (return (cast int (($ s size)))))
```

```cpp
int lengthOf (const std::string & s ) { return ((int)(s.size)()); }
```

A qualified name is **a name the compiler resolves**, not text it splices. That is what lets
`$` and `->` see through it, what puts it through the source-line map so a C++ diagnostic
points back at the Cicili form, and what makes `const std::string &` come out without stray
spaces.

### How it is read

`:` is Common Lisp's package marker and a `.cicili` file contains real Common Lisp
(`:TYPEOF`, `:TEST`, `:REGEX`), so the character cannot be repurposed. The source is
therefore rewritten before the reader sees it:

```
torch::nn::Linear   ->   ($$ torch nn Linear)
```

and the specifier interns that as the single symbol `torch::nn::Linear`. You never write
`$$` yourself; it is what the rewrite produces.

Only **an identifier followed by `::` and another identifier** is rewritten, so:

* `:cpp`, `:TEST` and every other keyword are untouched — they have no identifier in front.
* `"a::b"` inside a string is untouched, as is anything in a `;` or `#| |#` comment.
* `CICILI::EXPAND-MACROS` is untouched: if the prefix names a **Lisp package** it is Lisp,
  and the whole token is copied through. A C++ namespace that collided with a Lisp package
  name would be taken for Lisp — package names here are uppercase and namespaces are not.

### Declared and undeclared names

An **undeclared** qualified name is not an error. It is emitted as written and C++ decides
whether it exists:

```lisp
(letin* ((s (std::string "abcde")))     ; std::string is not declared anywhere
  ...)
```

```cpp
std::string s  = std::string ("abcde");
```

It is typed as itself, which is right for the common case — `std::string("x")` constructs a
`std::string` — and gives `auto` something to infer.

**Declaring it buys inference, not permission.** A declaration binding makes the members
resolvable, so `($ s size)` and `(-> p forward)` check and complete; without one the name
still works and C++ is the only thing checking it. See
[Declaration Bindings](#declaration-bindings).

---

## References

There is no `cref`, `mref` or `rref`. A reference **qualifies a type**, and Cicili's type
descriptor has always had a slot for that — the one holding `*`, `**`, `move` and `ref`. A
reference is written where every other modifier is written:

```lisp
(func f ((const torch::Tensor & x)))     ; const torch::Tensor & x
(func g ((torch::Tensor & x)))           ;       torch::Tensor & x
(func h ((torch::Tensor && x)))          ;       torch::Tensor && x
```

A mutable reference writes through, as C++ says:

```lisp
(func bump ((int & n)) (set n (+ n 1)))

(let ((int n . 41))
  (bump n)
  n)                                     ; 42
```

**`const T &` is the one to reach for when calling a C++ library.** Passing a libtorch type
by value copies it — cheaply, since a `Tensor` is a refcounted handle, but the refcount
traffic is real, and the library's own signatures are const-ref for a reason.

---

## Structs

### Inheritance

```lisp
(struct Square (inherits Shape)
        (method side () (out double) (return ($ this w))))
```

```cpp
struct Square : public Shape {
  double side () { return (this->w); }
};
```

`(inherits A B C)` takes any number of bases and **every base is public**, because a
struct's bases are public by default and that is the whole reason the surface is a struct.
There is no access specifier to write and none to forget.

Inherited members resolve. `($ this w)` inside `Square` finds `Shape`'s `w`, and so does
`($ sq w)` from outside.

### Methods

A `method` is a real C++ member function written inside the struct. `this` is implicit — it
is not a parameter and is not declared:

```lisp
(struct Shape
        (member double w)
        (member double h)
        (virtual) (const)
        (method area () (out double)
                (return (* ($ this w) ($ this h))))
        (virtual)
        (method scale ((double by))
                (set ($ this w) (* ($ this w) by)
                     ($ this h) (* ($ this h) by))))
```

`$` on `this` emits the arrow. `this` is the one receiver that is always a pointer, and
requiring `(-> this w)` would make a member of the object a method belongs to the only
member in the language needing different syntax from every other member. Both work.

Calling a method uses the ordinary member-access clauses — `$` on a value, `->` through a
pointer, and the result is called:

```lisp
(($ sq area))                            ; sq.area()
((-> p area))                            ; p->area()
```

Virtual dispatch works through a base pointer, as C++ says:

```lisp
(letin* ((sq (Square 4.0)))
  (let ((Shape * s . #'(aof sq)))
    ((-> s area))))                      ; 16 -- Square::area
```

### Constructors and Destructors

```lisp
(struct Counted
        (member int id)
        (ctor ((int n)) (init (id n))
              (++ alive))
        (dtor ()
              (-- alive)))
```

```cpp
struct Counted {
  int id ;
  Counted (int n ) : id(n ) { (++alive ); }
  ~Counted () { (--alive ); }
};
```

Neither has a return type to write, and **neither has a name to write**. C++ fixes both
names, so Cicili fills them in — renaming the struct cannot leave a constructor behind under
the old name.

`init` is the member-initializer list, and it must be the **first form** in the constructor
body. It is the only place a base class or a member without a default constructor can be
given its value, which is why it exists:

```lisp
(struct Square (inherits Shape)
        (ctor ((double side))
              (init (Shape side side))))     ; runs Shape's constructor
```

An entry with no arguments still gets parentheses: `(init (Base))` is `: Base()`, because
`Base` on its own is not valid there.

> **A derived constructor cannot initialize a base's members.** `(init (w side))` inside
> `Square` when `w` belongs to `Shape` is a C++ error. Initialize the base instead.

---

## Modules are Namespaces

There is no `namespace` clause. `module` is Cicili's named scope, and each language has its
own way of being one:

```lisp
(module geom
  (struct Point
          (member int x)
          (member int y)
          (ctor ((int a) (int b)) (init (x a) (y b)))
          (const)
          (method sum () (out int) (return (+ ($ this x) ($ this y))))))
```

```cpp
namespace geom {
struct Point {
  int x ;
  int y ;
  Point (int a , int b ) : x(a ), y(b ) { }
  int sum () const { return ((this->x) + (this->y)); }
};
}
```

| target | what a module is |
|---|---|
| C | a naming convention. Nothing is emitted around it; every name inside goes through `free-name`, which is what keeps one module's `init` apart from another's. |
| C++ | a `namespace`. Names inside stay **exactly as written**, because the language does the separating. |

Mangling in a C++ target would be worse than pointless: a hashed name has nothing for a
qualified reference to name. So in C++ the names stay put, and **`geom::Point` resolves from
outside with no `using`**:

```lisp
(letin* ((p (geom::Point 3 4)))
  (($ p sum)))                           ; 7
```

```cpp
geom::Point p  = geom::Point (3, 4);
(p.sum)()
```

It is a *type*, not text — the declaration is inferred from it and `$` sees through it.

`using` is still available when you want the short name:

```lisp
(using namespace geom)                   ; using namespace geom;
```

---

## Lifetime: `letin*` and `letin`

`letin` infers a destructor from the type and calls `(<> free TYPE)`. That is right for a
Cicili type and **wrong for a C++ object**, which already has a destructor and runs it
itself at scope exit — calling one of ours on top would destroy it twice.

So a C++ object is bound with `letin*`:

```lisp
(letin* ((t (torch::randn ...)))         ; ~Tensor runs at scope exit, C++'s rules
  ...)
```

`letin*` takes two forms:

| form | destructor |
|---|---|
| `(name init)` | **none** — the value destroys itself. This is the C++ case. |
| `(name init dtor)` | `dtor` is called at scope exit |

The three-element form is for a C value whose cleanup is not the type's `free` — a `FILE`, a
descriptor, a handle from a C library:

```lisp
(func closefile ((FILE ** f)) (when (cof f) (fclose (cof f))))

(letin* ((f (fopen "x" "r") closefile))
  ...)
```

> **The destructor receives the ADDRESS of the variable, not the variable.** This compiles
> to `__attribute__((__cleanup__(d)))` and that is what the attribute passes — so it is
> `void d (T ** x)` for a `T *`. A C function taking the handle itself needs one line of
> adaptation, as above.

The declared type is `auto`, so neither form names the type twice.

---

## Templates

Cicili's own `generic` covers most of what templates are for, and does it by name interning
rather than by instantiation. Reach for `template` when `generic` cannot: writing something
a C++ library will instantiate, or specialising on a C++ type.

### Using a template — `t<>`

```lisp
(t<> std::vector int)                    ; std::vector<int>
(t<> std::function (t<> Tensor))         ; nests
```

```lisp
(letin* ((v ((t<> std::vector int))))    ; std::vector<int> v;
  (($ v push_back) 7)
  (($ v size)))                          ; 2
```

### Declaring one — `template`

```lisp
(template ((typename T))
  (func biggest ((const T & a) (const T & b)) (out T)
        (return (? (< a b) b a))))
```

```cpp
template < typename T >
T biggest (const T & a , const T & b ) { return (((a < b)) ? b : a); }
```

The parameter list is a **list of parameters**, each itself a list —
`((typename T) (int N))` — because `typename T` is two words and the comma goes between
parameters, not between words.

Explicit instantiation at the call site uses `t<>`:

```lisp
((t<> biggest double) 2.5 1.5)           ; biggest<double>(2.5, 1.5)
```

---

## Allocation

```lisp
(new* Point 10 20)                       ; new Point(10, 20)
(new* int)                               ; new int()
(delete* p)                              ; delete p
(delete[]* arr)                          ; delete[] arr
```

They are starred because `new` is already the std constructor convention on the C side —
`(new vector …)` — and the two mean different things: this one allocates, that one does not.

For anything you would otherwise `new`, prefer a value bound with `letin*`. C++ will destroy
it for you and there is nothing to leak.

---

## Casts

`cast` stays what it is — a C cast — because that is what it means everywhere else in the
language. The four named casts are separate clauses:

```lisp
(static-cast int 3.9)                    ; static_cast<int>(3.9)
(const-cast (Point *) cq)                ; const_cast<Point *>(cq)
(dynamic-cast (Shape *) p)               ; dynamic_cast<Shape *>(p)
(reinterpret-cast (char *) p)            ; reinterpret_cast<char *>(p)
```

The type may be a plain descriptor (`(int *)`), a qualified name, or a `t<>` form.

These are clauses, not escapes, and both halves of that matter. **The result carries the
cast's type**, so a member access straight through one resolves:

```lisp
((-> (const-cast (geom::Point *) cq) sum))     ; const_cast<geom::Point *>(cq)->sum()
```

and **the operand is an ordinary expression**, so a unary survives:

```lisp
(static-cast long (cof pv))                    ; static_cast<long>((*pv))
```

Neither was true when they were macros: the escape had no type, and it spliced the operand
as text, which dropped the `*` silently.

---

## Exceptions

libtorch throws. A Cicili program that calls into it and does not catch will terminate,
which is a legitimate choice and should be a deliberate one.

```lisp
(try (block
       (let ((int r . #'(risky -1)))
         (cast void r)))
     (catch ((const std::exception & e)) (printf "%s\n" (($ e what))))
     (catch ()                           (printf "something else\n")))

(throw* n)
```

`try` is a body construct like `if` and `while`, and **its catch clause declares its
variable**, so the handler can read what was thrown. The parameter list has the same shape
as a function's, which is why the catch-all is `()` and one parameter is `((T e))`. C++
allows exactly one; a second is its error to report.

`throw*` stays a macro — it is one keyword in front of an expression and introduces no
name.

---

## Linkage

```lisp
(extern-c
  (func c_entry () (out int) (return 0)))
```

```cpp
extern "C" { int c_entry () { return 0; } }
```

---

## Declaration Bindings

A C++ library is made available the way `lib/std/c/` makes libc available: **you declare
what you use, in Cicili, and the declaration emits nothing.** It exists to feed type
inference.

```lisp
(module torch
  (decl) (struct Tensor
          (method sizes () (out IntArrayRef))
          (method dim ()   (out i64)))
  (decl) (func randn ((IntArrayRef s)) (out Tensor)))
```

With that in scope, `torch::Tensor` is a type: `(-> t dim)` resolves, a mistyped member is
an error naming the member, and the type flows through `auto`.

Without it, `torch::Tensor` still works — it is emitted as written and C++ checks it. The
difference is *who* catches your mistake and *what the message says*.

---

## Known Limitations

These are real and current. They are listed because finding them by surprise is worse than
reading them here.

| limitation | detail |
|---|---|
| **No overloading** | Two `method`s or two `ctor`s with the same name collide — the second raises `inner exists`. One signature per name. |
| **`code` escapes have no type** | Anything reached through a raw `(code …)` cannot be resolved by `$` or `->`. This is why the constructs above are clauses and not escapes. |
| **No `mutable`, `friend`, `operator`, or member templates** | Not yet expressible. Use a `(code …)` escape. |

---

## Worked Example

Every clause above, in one file. This is
[test/cpp/objects.cicili](../test/cpp/objects.cicili) and
[test/cpp/syntax.cicili](../test/cpp/syntax.cicili) condensed; both are run by the test
suite, so nothing here is aspirational.

```lisp
(source "shapes.cpp"
  (make :cpp #t :compile #t :link ("-lshapes.o" "-o" "shapes"))

  (include <cstdio>)

  (module geom

    (struct Shape
            (member double w)
            (member double h)
            (ctor ((double w0) (double h0)) (init (w w0) (h h0)))
            (virtual) (const)
            (method area () (out double)
                    (return (* ($ this w) ($ this h))))
            (virtual)
            (dtor ()))

    (struct Square (inherits Shape)
            (ctor ((double side)) (init (Shape side side)))
            (const) (override)
            (method area () (out double)
                    (return (* ($ this w) ($ this h))))))

  ;; a const reference borrows without copying
  (func report ((const geom::Shape & s) (const char * what))
        (printf "%s: %.1f\n" what (cast double (($ s area)))))

  (main
    (letin* ((sq (geom::Square 3.0)))     ; ~Square runs at scope exit
      (report sq "square")
      (let ((geom::Shape * base . #'(aof sq)))
        (printf "virtual: %.1f\n" (cast double ((-> base area))))))
    (return 0)))
```

```cpp
namespace geom {
struct Shape {
  double w ;
  double h ;
  Shape (double w0 , double h0 ) : w(w0 ), h(h0 ) { }
  virtual double area () const { return ((this->w) * (this->h)); }
  virtual ~Shape () { }
};
struct Square : public Shape {
  Square (double side ) : Shape(side , side ) { }
  double area () const override { return ((this->w) * (this->h)); }
};
}
void report (const geom::Shape & s , const char * what ) {
  printf ("%s: %.1f\n", what , ((double)(s.area)()));
}
int main () { ... }
```

---

## See also

* [DOC-C.md](DOC-C.md) — the C half, and everything this file builds on
* [test/cpp/objects.cicili](../test/cpp/objects.cicili) — inheritance, methods, ctor, dtor,
  `letin*`
* [test/cpp/syntax.cicili](../test/cpp/syntax.cicili) — modules, qualified names,
  references, templates, casts, exceptions
* [cpp.cicili](../cpp.cicili) — the macro layer, and notes on what is deliberately not in it
