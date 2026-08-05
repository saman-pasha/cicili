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

Ask the interpreter rather than guessing, and use the interpreter whose numpy you mean:

```bash
python3 -c "import sysconfig;print(sysconfig.get_paths()['include'])"   # Python.h
python3 -c "import numpy;print(numpy.get_include())"                    # arrayobject.h
python3 -c "import sysconfig;print(sysconfig.get_config_var('LIBDIR'))" # libpython
python3 -c "import sysconfig;print(sysconfig.get_config_var('LDVERSION'))"
```

```lisp
(make :compile ("-O2" "-DNPY_NO_DEPRECATED_API=NPY_1_7_API_VERSION"
                "-I<python include>" "-I<numpy include>" "-c" "app.c")
      :link ("-lapp.o" "-L<libdir>" "-lpython3.14" "-o" "app"))

(include <Python.h>)                 ; FIRST, always
(include <numpy/arrayobject.h>)
```

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

## Examples

| file | what it shows |
|---|---|
| [example/numpy.cicili](../../example/numpy.cicili) | a C target: scoped interpreter and references, an array numpy agrees is its own, and a C buffer wrapped without copying |
| [example/numpy-torch.cicili](../../example/numpy-torch.cicili) | a C++ target: numpy and libtorch over the **same memory**, no copy in either direction |

Both run against the real libraries. `example/numpy.cicili` prints eleven checks including
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

* **No extension-module scaffolding** — `PyModuleDef`, `PyMethodDef`, `PyInit_*`. These
  bindings are for a program that *embeds* Python; making a `.so` that Python imports needs
  those and they are not written yet.
* **No varargs** — `PyObject_CallFunction`, `Py_BuildValue`, `PyArg_ParseTuple`. Cicili can
  declare a `...` parameter, but the format-string contract is not something inference can
  check, so the tuple-building functions are declared instead and are safer anyway.
* **No buffer protocol, no iterators, no ufunc API.**
* **No GIL management** — `PyGILState_Ensure` and friends. Single-threaded embedding only.
