# 🧵 Cicili Threading System

Cicili provides a powerful and expressive threading system built on top of POSIX `pthread`, using Lisp-style macros to give developers **automatic memory management**, **closure-based thread launching**, and **safe multithreaded programming** with **zero-cost abstraction**.

This threading layer turns low-level C threading into concise, declarative constructs with full control.

---

## 🚀 Features

* ✅ **Closure-based thread launching (`go`)**
* ✅ **Safe thread detachment (`detach`)**
* ✅ **Join threads with optional return values (`join`)**
* ✅ **Thread cancellation (`cancel`)**
* ✅ **Structured resource cleanup (`defer*`)**
* ✅ **Automatic context generation**
* ✅ **Output from threads via heap memory**
* ✅ **Lambda-based thread runners**

---

## 🔧 Thread Macros Overview

### `go`

Creates and starts a new thread using a captured closure.

```cicili
(go ((int input . 42))
  (format #t "Running in thread: %d\n" input))
```

Supports:

* Capturing variables (like closures)
* Optional `(out TYPE)` to declare return value
* Automatic context allocation and cleanup

### `detach`

Same as `go` but automatically detaches the thread (fire-and-forget).

```cicili
(detach ((int val . 99))
  (format #t "Detached thread with val: %d\n" val))
```

### `join`

Waits for a thread to finish. Optionally captures the return value.

```cicili
(join thread-id)

(join thread-id (int * result))
(defer* ((int * result)) (free result))
(format #t "Result: %d\n" (cast int (cof result)))
```

### `cancel`

Cancels a running thread.

```cicili
(cancel thread-id)
```

### `exit`

Exits from inside a thread early.

```cicili
(exit nil)
```

### `self`

Returns the current thread's ID.

```cicili
(format #t "Thread ID: %lu\n" (cast ulong (self)))
```

---

## 📘 Full Example

```cicili
(source "thread.c" (:std #t :compile #t :link "-lpthread -o thread_main")
  (include <unistd.h>)
  (include <pthread.h>)

  (main
    (let ((int a_value . 50)

          ;; Basic closure thread
          (auto id0 . #'(go ((int a_value))
                         (format #t "a value from thread: %lu -> %d\n" (cast ulong (self)) a_value)))

          ;; Early exit
          (auto id1 . #'(go ((int input . 12)) (out void *)
                         (format #t "early exit thread: %lu -> %d\n" (cast ulong (self)) input)
                         (exit nil)))

          ;; Reusable runner lambda
          (auto runner . '(lambda () (out pthread_t)
                            (return (go () (out void *)
                                       (let ((int counter . 0)
                                             (auto output . #'(malloc (sizeof int))))
                                         (while (< (1+ counter) 5)
                                           (format #t "thread %lu count: %d\n" (cast ulong (self)) counter)
                                           (sleep 1))
                                         (memcpy output (aof counter) (sizeof int))
                                         (return output))))))

          (auto id2 . #'(runner))
          (auto id3 . #'(runner)))

      ;; Join examples
      (join id0)
      (join id1)
      (cancel id2)

      ;; Detached thread
      (detach ((int input . 25))
        (format #t "Detached input: %d\n" input))

      ;; Join and retrieve output
      (join id3 (int * result))
      (defer* ((int * result)) (free result))
      (format #t "Final result: %d\n" (cast int (cof result)))

      (return 0))))
```

---

## 🛡️ Memory Safety & Cleanup

Cicili encourages safe resource management using `defer*`, which attaches cleanup logic to variables, including return values from threads:

```cicili
(join id3 (int * result))
(defer* ((int * result)) (free result))
```

This guarantees cleanup when the scope ends, similar to `defer` in Go or `RAII` in C++.

---

## 🔂 Reusable Thread Runners

Define thread logic as lambdas that return thread IDs or result pointers:

```cicili
(auto runner . '(lambda () (out pthread_t)
  (return (go () (out void *)
    ;; do work, return pointer
    (return nil)))))
```
