# `lib/python` — CPython and numpy from Cicili

Declaration bindings for the **numpy C API** and the slice of the **CPython C API** it
needs. They emit nothing; the real declarations come from the real headers, exactly as
[`lib/std/c`](../std/c) does for libc and [`lib/cpp/torch`](../cpp/torch) for libtorch.

```lisp
(python-support)

(main
  (letin* ((py (py_open) py_finalize))                 ; Py_Finalize at scope exit
    (when (< py 0) (block (PyErr_Print) (return 1)))   ; -- including here
    (letin* ((o (PyArray_SimpleNew 2 (npdims 2 3) NPY_FLOAT64) py_decref))
      (let ((double * d . #'(cast (double *) (PyArray_DATA (cast (PyArrayObject *) o)))))
        …))))
```

| file | what is in it |
|---|---|
| [python.cicili](python.cicili) | the aggregator — import this |
| [cpython.cicili](cpython.cicili) | the embedding API, and `python-support` |
| [numpy.cicili](numpy.cicili) | the array API, and `npdims` |
| [module.cicili](module.cicili) | the other direction — a `.so` that Python imports, and `py-module` |

---

## There is no numpy without an interpreter

numpy's C API is a table of function pointers that a running CPython fills in. So anything
touching numpy from C is either an extension module Python loads, or a program that starts
Python itself. That is why `cpython.cicili` exists, and why the first thing any of this does
is `Py_Initialize`.

**`import_array` must be called once per translation unit**, after `Py_Initialize` and
before anything else. Skipping it does not fail to compile — it segfaults on the first call.
The macro cannot be declared to Cicili because it expands to a `return`, so the underlying
function is declared instead and `python-support` wraps it:

```lisp
(static) (func py_open () (out int) (Py_Initialize) (return (_import_array)))
```

which is better than the macro anyway: the macro returns for you, from whatever function you
happened to be standing in.

---

## Getting the flags

Write the tokens. Cicili asks the interpreter on the machine doing the building:

```lisp
(make :compile ("-O2" "-DNPY_NO_DEPRECATED_API=NPY_1_7_API_VERSION"
                "-I{$PYTHON_INCLUDE}" "-I{$NUMPY_INCLUDE}" "-c" "app.c")
      :link ("-lapp.o" "-L{$PYTHON_LIBDIR}" "-l{$PYTHON_LIB}" "-o" "app"))

(include <Python.h>)                 ; FIRST, always
(include <numpy/arrayobject.h>)
```

| token | what it becomes | asked with |
|---|---|---|
| `{$PYTHON_INCLUDE}` | where `Python.h` is | `sysconfig.get_paths()['include']` |
| `{$NUMPY_INCLUDE}` | where `arrayobject.h` is | `numpy.get_include()` |
| `{$PYTHON_LIBDIR}` | where `libpython` is | `sysconfig.get_config_var('LIBDIR')` |
| `{$PYTHON_LIB}` | `python3.13`, `python3.11d`… | `'python' + LDVERSION` |

`$PYTHON` picks the interpreter — a virtualenv's `bin/python3`, or a second install beside
the system one. Otherwise `python3` from the path.

`{$PYTHON_LIB}` is built from **LDVERSION and not the version number**, because LDVERSION
carries the ABI flags: a debug build is `python3.11d`, and `-lpython3.11` against it fails
at a stage that does not explain itself.

Nothing is resolved unless a token is actually written, so a target that never mentions
Python runs no subprocess, and one that does costs a single `python3` call for the whole
run. A token that will not resolve is an error naming the token, what was asked, and the
environment variable that overrides it — rather than a compile error twenty lines later
about a missing header.

These joined `{$CCL}` and `{$CWD}`, which Cicili already substituted. Before them every
example in `example/` carried one machine's absolute paths, so none of them built anywhere
else; the instruction was to run four `python3 -c` commands and paste the answers into each
target. If you want to do that by hand anyway, those commands are
`sysconfig.get_paths()['include']`, `numpy.get_include()`,
`sysconfig.get_config_var('LIBDIR')` and `sysconfig.get_config_var('LDVERSION')`.

`Python.h` comes first because it sets feature macros that change what the system headers
declare — CPython's own documentation insists on it.

`NPY_NO_DEPRECATED_API` goes on the **compile line**, not in an `(@define …)`: `@define`
specifies both of its operands as expressions, and the value `NPY_1_7_API_VERSION` is a
macro from a header Cicili has no declaration for.

---

## Lifetimes with `letin*`

`python-support` emits three static functions so that `letin*` can scope the two things
CPython makes easy to get wrong:

| helper | scopes |
|---|---|
| `py_open` / `py_finalize` | the interpreter |
| `py_decref` | one reference |

A `letin*` destructor has to be a **named function taking the address** of what it destroys
— that is what `__attribute__((cleanup))` passes it — so these cannot be macros.

**The early return is the point.** Written by hand, the import-failed path leaves the
interpreter running, and every `return` added later has to remember the decrefs above it.
That is the same argument `letin` makes on the C side, applied to the API where getting it
wrong is most common.

### Reference counting is still yours to understand

`letin*` scopes a reference; it does not know what the API did with it. Every function in
[cpython.cicili](cpython.cicili) is annotated:

| | meaning |
|---|---|
| **NEW** | you own it and must `Py_DecRef` it |
| **BORROWED** | you must **not** decref it; it dies with its owner |
| **STEALS** | the callee took your reference; do not decref it yourself |

The one that bites is `PyTuple_SetItem`, which **steals**. Passing it something `letin*` is
also scoping is a double free, so incref first:

```lisp
(letin* ((args (PyTuple_New 1) py_decref))
  (Py_IncRef a)                    ; SetItem is about to steal it
  (PyTuple_SetItem args 0 a)
  …)
```

---

## What is declared

The array API in full, plus enough of CPython to use it. The tables below name
the traps rather than the functions — every declaration in the two files carries
its own comment.

### Making and taking arrays

| | |
|---|---|
| `PyArray_SimpleNew` `PyArray_ZEROS` `PyArray_EMPTY` `PyArray_Arange` | numpy allocates and owns the memory |
| `PyArray_SimpleNewFromData` | wraps memory **you** own — no copy, no free |
| `PyArray_Zeros` `PyArray_Empty` `PyArray_NewLikeArray` | take a `PyArray_Descr *` and **steal** it |
| `PyArray_FROM_OTF` `PyArray_FROMANY` | the workhorses for whatever Python handed you — a list, a scalar, a view, the wrong dtype |
| `PyArray_FromAny` | the function underneath them; steals the descr |

Prefer the SHOUTING spellings. They build the dtype from a type number, so
nothing is stolen and nothing leaks; the lowercase ones exist for when you
already have a descr.

### Reading them

`PyArray_DATA` `BYTES` `NDIM` `SIZE` `DIM` `DIMS` `SHAPE` `STRIDES` `STRIDE`
`TYPE` `ITEMSIZE` `NBYTES` `DESCR` `BASE`, and the layout predicates
`FLAGS` `CHKFLAGS` `IS_C_CONTIGUOUS` `IS_F_CONTIGUOUS` `ISWRITEABLE` `ISALIGNED`.

**Strides are in bytes, not elements.** A row of three `double`s is 24.

**`PyArray_GETPTR1`…`GETPTR4` are the correct way to reach one element** of an
array you did not allocate. They walk the strides; `DATA[i * cols + j]` does not,
and a transposed or sliced array is exactly where the two disagree without
either of them failing. `example/numpy-ops.cicili` checks both answers on the
same array.

### Shape, copies, reductions

| | |
|---|---|
| `Reshape` `Transpose` `Ravel` `Squeeze` `SwapAxes` `Concatenate` | answer a **view when they can and a copy when they must**, and you cannot tell which from the call — ask `PyArray_BASE` |
| `Flatten` `NewCopy` `GETCONTIGUOUS` `CopyInto` `CopyObject` `CastToType` `ToList` | copies |
| `Sum` `Prod` `Mean` `Std` `Max` `Min` `ArgMax` `ArgMin` `CumSum` | pass `NPY_RAVEL_AXIS` for "over everything" |
| `Sort` `ArgSort` `Nonzero` `Where` `MatrixProduct` | `Sort` is **in place** and answers `0`/`-1`, unlike everything around it |

Two things numpy 2 changed that the older documentation still gets wrong:

* **`NPY_MAXDIMS` is no longer the "all axes" sentinel.** It is the dimension
  limit, 64, and passing it as an axis raises. Use **`NPY_RAVEL_AXIS`**.
* **`PyArray_Cast` is gone.** Use `PyArray_CastToType` (which steals a descr) or,
  more simply, `PyArray_FROM_OTF`.

A reduction answers a numpy scalar or a zero-dimensional array, never a C
double. `PyFloat_AsDouble` converts it.

### The CPython side

Beyond the embedding basics: **the number protocol** — `PyNumber_Add`,
`Subtract`, `Multiply`, `TrueDivide`, `Power`, `MatrixMultiply`, `Negative` and
the in-place forms. On arrays these *are* the ufuncs, so element-wise arithmetic
needs no call back through the module:

```lisp
(letin* ((twice (PyNumber_Add m m) py_decref))   ; np.add, elementwise, in C
  …)
```

The in-place forms write into their first argument **and answer it increfed** —
a second reference you must also drop. It is the leak that looks like it cannot
be one.

Also `PyObject_GetItem`/`SetItem` with `PySlice_New` (a slice is a **view**;
assigning through it changes the array you took it from), `PyObject_Call` with a
kwargs dict, lists, dicts, rich comparison, and `PyErr_SetString` with the
built-in exception types.

Watch the setters, which do not agree with each other:

| | |
|---|---|
| `PyTuple_SetItem` `PyList_SetItem` | **steal** |
| `PyList_Append` `PyDict_SetItem` `PyDict_SetItemString` | do not |

---

## `npdims`

numpy takes shapes as `npy_intp *`, so `(npdims 2 3)` expands to `((npy_intp[]){2, 3})` — a
compound literal, whose lifetime is the enclosing block. Unlike libtorch's `IntArrayRef`
there is nothing here that dangles; see [`dims`](../cpp/torch/tensor.cicili) for the case
where there is.

**The outer parentheses are load-bearing.** Most of numpy's API is function-like *macros*,
and the preprocessor splits their arguments on commas that are not inside parentheses —
braces do not protect them. Without the wrapping parens,
`PyArray_SimpleNew(2, (npy_intp[]){2,3}, NPY_FLOAT32)` is four arguments to a
three-argument macro, and the error names the macro rather than the shape that caused it.

Compound literals are C99. In a **C++** target they are a GNU extension clang accepts, so
add `-Wno-c99-extensions` to keep `-Werror` happy.

---

## The friendly layer

Everything above is numpy's C API as it is. These are what the examples kept writing on top
of it — and writing them by hand was the problem: `example/numpy-ops.cicili` opened with its
own `arr` cast and its own `take_double`, `example/numpy.cicili` with its own ten-line
`numpy_call`, and each was a chance to get the reference counting wrong in a way that shows
up as a crash three calls later.

`(numpy-support)` in the target emits what these expand into, beside `(python-support)`.

### The cast

```lisp
(nparr o)      ; PyObject *      -> PyArrayObject *
(npobj a)      ; PyArrayObject * -> PyObject *
```

numpy is split down this line and there is no way around it: the constructors answer
`PyObject *` and every accessor takes `PyArrayObject *`. `nparr` over something already cast
is a no-op, which is why everything below applies it itself — hold either kind and write
`(npsum m)`.

### Making arrays

```lisp
(npzeros NPY_DOUBLE 2 3)          ; zeroed, owns its memory
(npempty NPY_DOUBLE 4)            ; uninitialised
(nparray NPY_DOUBLE buf 2 3)      ; WRAPS buf, does not copy
(npshape 2 3)                     ; the tuple Reshape and Resize want
```

The rank is **counted, not passed**, which removes the one argument that can disagree with
the shape beside it: `PyArray_SimpleNew(2, dims, …)` where `dims` has three entries reads two
of them and never notices the third.

`nparray` wraps and does not copy — the buffer must outlive the array, and the array will not
free it. See `PyArray_SetBaseObject` for handing it over.

`npshape` is three lines otherwise, and they are the three where `PyTuple_SetItem` **steals**
and `PyLong_FromLong` hands over a fresh reference. That pairing is correct and the obvious
defensive `Py_IncRef` beside it would be the leak. Answers a new reference — `letin*` it with
`py_decref`.

### Elements

```lisp
(npget double a 1 2)              ; the element at [1][2]
(npput double a 1 2 7.5)          ; and writing one
```

One, two or three indices, which is where numpy's `GETPTR` stops.

**The type is written and not inferred**, deliberately: an array's dtype is a runtime number,
reading a float64 array as float32 is a wrong answer with no diagnostic, and a macro that
guessed would be guessing about that. Writing `double` is you saying which array this is.

**Go through these rather than indexing `DATA`.** `a[i * cols + j]` is right only for a
contiguous array, and a transpose or a slice from Python is not one — it answers a plausible
number from the wrong element. `GETPTR` walks the strides and is right either way.

### Reductions

```lisp
(npsum a)  (npprod a)  (npmean a)  (npmax a)  (npmin a)
(npargmax a)  (npargmin a)  (npstd a)  (npvar a)  (npcumsum a)

(npsum a 0)                       ; along an axis instead
```

**The default is the point.** Written out, every reduction carries
`NPY_RAVEL_AXIS NPY_NOTYPE nil` — three arguments that are the same at almost every call
site, one of which is the trap: `NPY_MAXDIMS` meant "over everything" under numpy 1 and is
now just the dimension limit, 64, so code carried over compiles, reads correctly, and raises
at the call. A default nobody has to type cannot be typed wrongly.

`npstd` and `npvar` are the same call with its fifth argument set — easy to drop, and it
answers the other thing without complaining.

### Answers, and the rest of numpy

```lisp
(np_double (npsum a))             ; -> double, TAKING the reference
(np_long   (npargmax a))          ; -> long
(np_call "percentile" a)          ; numpy.percentile(a), as a new reference
```

A reduction answers a numpy scalar or a zero-dimensional array, never a C double.
`np_double` asks it for `__float__`, which both answer — and `-1.0` with an exception set
when it cannot. It **takes** the reference rather than borrowing, because every caller has
just been handed a new one and wants it gone; that is what makes `(np_double (npsum m))`
leak nothing.

`np_call` is the escape hatch. numpy's C API covers the array object and the reductions;
everything else — `linspace`, `percentile`, `linalg` — is reached by importing the module the
way Python does. Its argument is **borrowed**: it is increfed because `PyTuple_SetItem` is
about to steal it, so your reference is still yours afterwards.

**None of these hide an error.** A macro that swallowed a NULL would trade a diagnosable
failure for a segfault, which is the opposite of easy to use. They are shorter spellings of
the same calls, not a safety net — the result still has to be checked.

---

## Extension modules

Everything above embeds Python in a program. The other direction is a `.so` that
`import` loads, and it needs three things and nothing else: a `PyMethodDef`
table, a `PyModuleDef`, and `PyInit_<name>`. `py-module` writes all three.

```lisp
(python-refs)                              ; py_decref, without py_open

(py-module cimath
  (doc "arithmetic and array helpers, written in Cicili")
  (method "add"     py_add     varargs "add(a, b) -> float")
  (method "asum"    py_asum    one     "asum(seq) -> float, summed in C")
  (method "squares" py_squares one     "squares(n) -> ndarray of i*i")
  (method "scale"   py_scale   kwargs  "scale(a, by=2.0) -> ndarray")
  (method "version" py_version noargs  "version() -> str")
  (setup m
    (when (< (_import_array) 0) (return nil))     ; numpy, once, here
    (PyModule_AddStringConstant m "__version__" "1.0")))
```

Use `(python-refs)` rather than `(python-support)` — an extension module starts
no interpreter, so `py_open` and `py_finalize` are the wrong tools and defining
both spellings defines `py_decref` twice.

### The convention is a word, not a flag

`ml_flags` tells CPython how to call the function, `ml_meth` is a two-argument
pointer whatever the function really is, and a mismatch is **not a compile
error** — it is a crash. So the convention is spelled out and the macro derives
both the flag and, where C needs one, the cast:

| word | flags | your function must be |
|---|---|---|
| `varargs` | `METH_VARARGS` | `(self args)` — `args` is a tuple |
| `noargs` | `METH_NOARGS` | `(self unused)` — `unused` is nil |
| `one` | `METH_O` | `(self arg)` — `arg` is *the* object |
| `kwargs` | `METH_VARARGS \| METH_KEYWORDS` | `(self args kw)`, and gets the cast |

An unknown word is a compile-time error naming the four.

### Three things the C compiler will not tell you

* **The init symbol is the contract.** `import cimath` looks for `PyInit_cimath`
  in a file named `cimath.so`. The macro derives the symbol from the name you
  give it; the filename is yours to keep in step.
* **Answering nil without setting an exception raises `SystemError`** — a
  confusing way to find out you forgot. Either propagate what the failing call
  already set, or `PyErr_SetString` your own.
* **`import_array` goes in `(setup …)`**, once. Without it the first
  `PyArray_` call in *any* function in the module segfaults, and nothing warns.
  There is nowhere else it can go, which is most of why the setup clause exists.

### Reading arguments

`PyArg_UnpackTuple` first. It takes a count range and `PyObject **` out
parameters — no format string, so the only thing it can get wrong is the count,
and it says so itself with the function's name in the message. Convert each
value afterwards with `PyFloat_AsDouble`, `PyArray_FROM_OTF` and the rest, which
each report their own failure.

`PyArg_ParseTuple` and `PyArg_ParseTupleAndKeywords` are declared because they
are the API, not because they are the safe one: nothing checks that `"dd"`
matches two `double *`, and being wrong writes through a pointer of the wrong
width.

### Building one

A loadable module is neither a program nor a shared library. The words that say
so are `-shared -module -avoid-version` with a `.la` output; libtool then writes
the real object to **`.libs/<name>.so`** with the right flags for the platform —
on macOS `-bundle` with `-undefined dynamic_lookup`.

```lisp
:link ("-lcimath.o" "-shared" "-module" "-avoid-version"
       "-rpath" "{$CWD}" "-o" "cimath.la")
```

`-rpath` is required by libtool for any installable library, even one that is
never installed. **Do not link libpython into a module** — the interpreter
already has it, and a second copy is two of every static, including the type
objects.

---

## Examples

| file | what it shows | checks |
|---|---|---|
| [example/numpy.cicili](../../example/numpy.cicili) | a C target: scoped interpreter and references, an array numpy agrees is its own, and a C buffer wrapped without copying | 11 |
| [example/numpy-ops.cicili](../../example/numpy-ops.cicili) | the rest of the API: shapes, strides, views, reductions, ufunc arithmetic, slicing, sorting, matrix products, keyword calls | 31 |
| [example/numpy-torch.cicili](../../example/numpy-torch.cicili) | a C++ target: numpy and libtorch over the **same memory**, no copy in either direction | — |
| [example/cimath.cicili](../../example/cimath.cicili) | an extension module: all four calling conventions, arrays in and out, exceptions raised from Cicili — driven by [cimath_test.py](../../example/cimath_test.py) | 27 |

All of them run against the real libraries. `example/numpy.cicili` prints eleven checks including
this one, which is the whole argument for `SimpleNewFromData`:

```
ok   wrapped mean                       10.0000
ok   same memory after C write          15.0000
```

The second line is after writing `30.0` through the **C pointer** — numpy recomputes the
mean over memory it never allocated.

### Sharing with libtorch

```lisp
(letin* ((o (PyArray_SimpleNew 1 (npdims 6) NPY_FLOAT32) py_decref))
  (let ((float * d . #'(cast (float *) (PyArray_DATA (cast (PyArrayObject *) o)))))
    (letin* ((t (torch::from_blob (cast (void *) d) (dims 6))))
      (($ t mul_) …))))            ; numpy sees it
```

Two things to get right, and neither will tell you when you have not:

* **Neither side owns the memory.** numpy owns it above, torch borrows it. If the array is
  freed first the tensor dangles — the `letin*` nesting is what keeps the array alive
  longer, and that nesting *is* the safety argument.
* **The layout must agree.** `from_blob` assumes C-contiguous. An array that came from
  Python may be a view, a slice or transposed, and the tensor would read the wrong elements
  without failing. Check `PyArray_IS_C_CONTIGUOUS`, or ask numpy for a contiguous copy.

---

## What is not here

* **No custom types** — `PyTypeObject`, `tp_*` slots, `PyType_FromSpec`. A module can export
  functions and constants; a module that exports a *class* needs those and they are not
  written yet.
* **No multi-phase init** — `PyModuleDef_Slot`, `Py_mod_exec`, `PyModuleDef_Init`.
  `py-module` writes single-phase init with `m_size` of `-1`, which is what almost every
  module does and which cannot be loaded twice into one process.
* **No `PyObject_CallFunction`.** The varargs argument functions *are* declared —
  `PyArg_ParseTuple`, `PyArg_ParseTupleAndKeywords`, `Py_BuildValue` — because writing an
  extension module without them is not realistic. But nothing checks a format string, so the
  tuple-building path is the one the examples take.
* **No buffer protocol, no `NpyIter`, no ufunc API.** The number protocol
  reaches the common ufuncs — `PyNumber_Add` on two arrays *is* `np.add` — but
  registering your own, or iterating with broadcasting, needs `NpyIter` and
  `PyUFunc_FromFuncAndData`, which are not declared.
* **No GIL management** — `PyGILState_Ensure` and friends. Single-threaded embedding only.
