#!/usr/bin/env python3
"""Exercise cimath, the extension module built from example/cimath.cicili.

    sbcl --script cicili.lisp ./example/cimath.cicili
    python3 example/cimath_test.py

libtool writes the loadable object to example/.libs/cimath.so, so that is the
directory that goes on sys.path.
"""

import os
import sys

sys.path.insert(0, os.path.join(os.path.dirname(os.path.abspath(__file__)), ".libs"))

import numpy as np

import cimath

bad = 0


def check(what, got, want):
    global bad
    ok = np.allclose(got, want) if isinstance(got, np.ndarray) else got == want
    if ok:
        print(f"ok   {what:<34} {got}")
    else:
        print(f"FAIL {what:<34} got {got!r} want {want!r}")
        bad += 1


def raises(what, exc, fn):
    global bad
    try:
        fn()
    except exc as e:
        print(f"ok   {what:<34} {type(e).__name__}: {e}")
        return
    except Exception as e:  # noqa: BLE001
        print(f"FAIL {what:<34} raised {type(e).__name__}, wanted {exc.__name__}")
    else:
        print(f"FAIL {what:<34} did not raise")
    bad += 1


# ---- the module itself ------------------------------------------------
check("module name", cimath.__name__, "cimath")
check("module doc", cimath.__doc__, "arithmetic and array helpers, written in Cicili")
check("constant added in setup", cimath.__version__, "1.0")
check("method doc reached Python", cimath.add.__doc__, "add(a, b) -> float")

# ---- varargs ----------------------------------------------------------
check("add(2, 3)", cimath.add(2, 3), 5.0)
check("add(-1.5, 0.25)", cimath.add(-1.5, 0.25), -1.25)
# UnpackTuple enforces the count itself, with a message naming the function
raises("add(1) is an error", TypeError, lambda: cimath.add(1))
raises("add('x', 1) is an error", TypeError, lambda: cimath.add("x", 1))

# ---- METH_O, and FROM_OTF taking anything array-like ------------------
check("asum of a list", cimath.asum([1, 2, 3, 4]), 10.0)
check("asum of a tuple", cimath.asum((1.5, 2.5)), 4.0)
check("asum of an int array", cimath.asum(np.arange(5, dtype=np.int32)), 10.0)
check("asum of a float32 array", cimath.asum(np.ones(3, dtype=np.float32)), 3.0)
# a transposed array is not contiguous; FROM_OTF copies rather than misreading
m = np.arange(6, dtype=np.float64).reshape(2, 3).T
check("asum of a transposed view", cimath.asum(m), 15.0)
raises("asum of a string is an error", (TypeError, ValueError), lambda: cimath.asum("no"))

# ---- an array built in C ---------------------------------------------
sq = cimath.squares(5)
check("squares is an ndarray", isinstance(sq, np.ndarray), True)
check("squares dtype", sq.dtype, np.dtype("float64"))
check("squares values", sq, np.array([0.0, 1.0, 4.0, 9.0, 16.0]))
check("squares(0) is empty", len(cimath.squares(0)), 0)
# the exception this raises is set by PyErr_SetString in Cicili
raises("squares(-1) is an error", ValueError, lambda: cimath.squares(-1))

# ---- kwargs -----------------------------------------------------------
check("scale default", cimath.scale([1, 2, 3]), np.array([2.0, 4.0, 6.0]))
check("scale by keyword", cimath.scale([1, 2, 3], by=10.0), np.array([10.0, 20.0, 30.0]))
check("scale positionally", cimath.scale([1, 2], 0.5), np.array([0.5, 1.0]))
raises("scale(by=…) alone is an error", TypeError, lambda: cimath.scale(by=2.0))

# ---- noargs -----------------------------------------------------------
check("version()", cimath.version(), "cimath 1.0, built by Cicili")
raises("version(1) is an error", TypeError, lambda: cimath.version(1))

# ---- reference counting ----------------------------------------------
# Every function above answers a new reference. If any of them leaked, this
# loop would grow the process without bound; if any over-decrefed, it would
# crash. Neither is subtle at 200000 iterations.
before = sys.getrefcount(cimath)
for _ in range(200000):
    cimath.add(1, 2)
    cimath.asum([1, 2, 3])
    cimath.squares(4)
    cimath.scale([1, 2], by=2.0)
    cimath.version()
check("module refcount unchanged", sys.getrefcount(cimath), before)

# and the argument's own count is not disturbed by being passed in
arg = [1.0, 2.0, 3.0]
n = sys.getrefcount(arg)
for _ in range(1000):
    cimath.asum(arg)
check("argument refcount unchanged", sys.getrefcount(arg), n)

print("cimath: all ok" if bad == 0 else f"cimath: {bad} FAILED")
sys.exit(bad)
