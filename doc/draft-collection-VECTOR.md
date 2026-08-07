# `Vector` — Reference Documentation

## 1. Overview

`Vector a` is Cicili's contiguous-array collection type — the array-backed
counterpart to `List a`. Where `List` is a singly-linked, persistently-shared
structure with O(n) positional access, `Vector` stores elements in a single
contiguous, growable buffer (via `StringBuffer a`), giving O(1) indexed
access, O(1) length queries, and zero-copy slicing.

`Vector` is declared with `decl-box`, so values are Rc-managed (`Box`),
pattern-matched with `match#` / `io#`, and every operation handles the `dead`
case explicitly.

### Key properties

- **Exclusive mutation** — a `Buffer`-backed `Vector` can only be mutated
  when the caller holds the sole reference (`count == 1`). Any clone or
  `Slice` still alive causes the operation to return `None` instead.
- **Zero-copy slicing** — `drop`, `take`, `tail`, `init` return a `Slice`
  that borrows the buffer by cloning the Rc handle — O(1), no data copied.
- **Copy-on-write for Slices** — mutating operations on a `Slice` always
  materialize an independent copy first, so the referenced `Buffer` is never
  touched.
- **`None` ≠ empty** — an empty `Buffer` (zero elements) is a valid alive
  vector. `None` is a structural tombstone meaning "no vector here at all",
  returned on dead Rc, failed exclusive take, and error paths.
- **Compile-time null-termination** — whether the buffer maintains a trailing
  `\0` byte is a generic parameter (`nullt`) resolved at Cicili-compile-time
  via `QUASIQUOTE`, producing a specialized C type with zero runtime overhead
  for the chosen variant.


## 2. Type Definition

```cicili
(decl-box (Vector type)
  (= Buffer (<> Buffer a) ((<> StringBuffer a) buffer))
  (= Slice  (<> Slice a)  (type vector) (size_t cursor) (size_t size))
  (= None   (<> None a)))
```

Three constructors:

- **`Buffer sb`** — owns a `StringBuffer a`, the actual contiguous heap
  storage.
- **`Slice vector cursor size`** — a zero-copy view: an Rc-cloned reference
  to another `Vector`, an offset (`cursor`), and a length (`size`).
- **`None`** — tombstone / absent value. Distinct from an empty `Buffer`.

### Associated types

```cicili
(typedef a *                               (<> Vector a pointer_t))
(typedef (Tuple pointer_t pointer_t)       (<> Vector a iterator_t))
```

`iterator_t` is a `(begin, end)` half-open pointer pair into the buffer,
used by `iterator` and the `iterate` macro.

### The Slice depth-1 invariant

A `Slice` always references a `Buffer` directly — never another `Slice`.
Operations on a `Slice`-of-`Slice` recurse into the referenced vector and
compose the offsets, so the chain never nests beyond one level deep.


## 3. Construction

| Form | Description |
|---|---|
| `(pure step)` | Empty `Buffer`; initial capacity and growth increment both equal `step`. |
| `(pureCapacity capacity step)` | Empty `Buffer` with separately specified initial capacity and growth increment. |
| `(wrap item)` | Single-element `Buffer` containing `item`. Allocates with capacity 16. |
| `(new^Vector^T buf len)` | `Buffer` from a C pointer `buf` and explicit `len`. |
| `(new^Vector^T '{ e1 e2 ... })` | `Buffer` from a quoted literal array. |
| `(new^Vector^char "string")` | `Buffer` from a C string literal. |

The `ctor` macro (`new^Vector^T`) is provided by `import-Vector` at
instantiation time. All forms allocate via `newCapacity` + `print` and return
a `Buffer`-backed vector.

### Null-termination specialization

`(impl-Vector type a fmt sep nullt)` — the `nullt` parameter is a
Cicili-compile-time boolean:

- `T` — generates a `StringBuffer` variant that always writes `\0`
  immediately after the last element. Suitable for `Vector^char` used as a
  C-string buffer.
- `NIL` — generates a `StringBuffer` variant with no null-terminator logic
  whatsoever. The distinction exists only in the generated C; there is no
  runtime branch.


## 4. Read Operations

All read operations handle `dead` Rc values and return a safe typed default
(`Nothing`, `0`, `None`, or `nil`) rather than crashing.

| Function | Returns | Buffer | Slice |
|---|---|---|---|
| `nth index v` | `Maybe a` | O(1) direct index | O(1) offset translation |
| `head v` | `Maybe a` | O(1) | O(1) |
| `last v` | `Maybe a` | O(1) | O(1) |
| `len v` | `size_t` | O(1) — `cursor` field | O(1) — `size` field |
| `hasLen v desired` | `size_t` — `min(len, desired)` | O(1) | O(1) |
| `toArray v` | `a *` | O(1) — raw `buffer` pointer | O(1) — `buffer + cursor` |
| `iterator v` | `iterator_t` — `(begin, end)` | O(1) | O(1) — recurses once to compose offsets |

`toArray` and `iterator` return raw pointers into the vector's own storage —
they are valid only while the vector is alive and unmodified.


## 5. Slicing — O(1), Zero-Copy

| Function | Description |
|---|---|
| `drop n v` | All but the first `n` elements, as a `Slice`. |
| `take n v` | The first `n` elements, as a `Slice`. |
| `tail v` | `drop 1 v`. |
| `init v` | All but the last element, as a `Slice`. |

Each call clones `v`'s Rc handle (incrementing `count`) and returns a `Slice`
with adjusted `cursor`/`size`. No element data is copied. The `Buffer` is
shared between `v` and the `Slice` until one of them is mutated — at which
point the exclusive guard (§6) or COW path (§7) applies.

`last` was previously a slicing operation returning a one-element `Slice`; it
now returns `Maybe a` directly, matching the `nth`/`head` contract.


## 6. Exclusive Mutation Guard

Every mutating operation on a `Buffer`-backed `Vector` calls `take` on its
own Rc handle before proceeding. As of the current implementation, `take`
only succeeds when `count == 1` — the caller is the **sole owner**.

```cicili
(match ((<> take Box Vector a) (aof vector))
  (Just ptr (progn (free ptr) ... mutate ...))   ; exclusive — proceed
  (default  ((<> None a))))                      ; shared — refuse, return None
```

If any other clone or `Slice` holds a reference to this `Buffer` (`count > 1`),
`take` returns `Nothing`, the mutation returns `None`, and the buffer is
untouched.

This is Cicili's runtime equivalent of Rust's `&mut T` exclusivity rule:
**mutation requires sole ownership**. The failure is a typed value (`None`)
the caller must handle — not silent undefined behaviour.

### Consequence for Slices

A `Slice` increments `count` on the referenced `Buffer`. While a `Slice` is
alive, any attempt to mutate the `Buffer` directly will return `None`.
To mutate, either:

1. Drop the `Slice` first (let its `letin` scope exit), then mutate.
2. Use the COW path — call a mutating operation **on the `Slice` itself**,
   which copies the slice range into an independent `Buffer` and mutates
   that copy (see §7).

### Demonstrated behaviour

```cicili
;; BLOCKED — v01C1 is a clone of v01, count == 2
(letin ((v01C1 (clone^Box^Vector^int v01))
        (v01P1 (push^Vector^int 40 v01C1)))
  (io# v01P1
    (* None (printf "can't push: clones exist\n"))
    (default (exit-status -90))))

;; ALLOWED — v01 has no other clones, count == 1
(letin ((v01P1 (push^Vector^int 40 v01)))
  (io ((<> head Vector int) v01P1)
    (Just he (printf "head: %d\n" he))
    (default (exit-status -91))))
```

Output:
```
can't push: clones exist
head: 40
```


## 7. Copy-on-Write for Slices

When a mutating operation is called on a `Slice`, it does **not** attempt to
modify the referenced `Buffer`. Instead it calls `copySlice` to extract the
slice's range into a new independent `Buffer`, then applies the mutation to
that copy. The referenced `Buffer` is untouched.

| Function | Buffer behaviour | Slice behaviour (COW) |
|---|---|---|
| `push item v` | Append in place (may realloc). | Copy slice range, append `item`. |
| `append l r` | Append `r`'s contents in place. | Copy `l`'s slice range, append `r`. |
| `reverse v` | Reverse in place (no realloc). | Copy slice range, reverse the copy. |
| `insertAt v item i` | Shift right, insert. | Build `[0,i) ++ item ++ [i,size)`. |
| `deleteAt v i` | Shift left, shrink. | Build `[0,i) ++ [i+1,size)`. |
| `replaceAt v item i` | Overwrite `buffer[i]`. | Build slice with index `i` replaced. |
| `resize v len` | `realloc` to `len`; clamp cursor. | Copy slice range, apply resize. |
| `copy v` | Deep-clone full buffer. | `copySlice` — clone just the viewed range. |
| `copySlice v pos len` | Independent copy of `[pos, pos+len)`. | Compose offsets, delegate. |


## 8. Iteration

### `iterator`

```cicili
(func iterator ((type vector)) (out (<> Vector a iterator_t)))
```

Returns a `(begin, end)` raw pointer pair. `begin` points to the first
element, `end` to one past the last. For a `Slice`, both pointers are offset
into the referenced `Buffer`'s storage — no copy occurs.

```cicili
(io ((<> iterator Vector^char) v)
  ((\, begin end)
   (while (!= begin end)
     (printf "%c" (cof begin))
     (++ begin))))
```

### `iterate` macro

The `iterate` macro (defined in `haskell.cicili`) provides a safe, concise
iteration DSL. It clones the vector's Rc handle for the duration of the loop
(preventing premature deallocation) and automatically frees the clone on
exit.

```cicili
;; forward — begin is the live cursor, pre-incremented by the loop
(iterate (begin end vector)
  (printf "%d " (cof begin)))

;; reverse — end is the live cursor, pre-decremented by the loop
(iterate (begin end vector :reverse T)
  (printf "%d " (cof end)))
```

The `:reverse T` keyword is resolved at Cicili-compile-time — the generated
C loop is either the forward or reverse form, with no runtime branch.


## 9. RAII and Lifetime

Use `letin` to bind `Vector` values — it infers the type via `auto` and
registers automatic `free` via `__h_free_data_router` at scope exit. No
explicit type annotation or manual `free` call is needed.

```cicili
(letin ((v (new^Vector^int '{ 1 2 3 4 5 }))   ; no type annotation
        (s (drop^Vector^int 2 v)))             ; Slice, O(1)
  ...
  ) ; v and s freed automatically here
```

The `free` destructor:
- `Buffer` → frees the `StringBuffer` (and its heap buffer), then the node.
- `Slice` → decrements the Rc of the referenced `Buffer` vector (frees the
  node if `count` reaches 0), then frees the `Slice` node.

### Unsafe Slice (without clone)

A `Slice` may be constructed directly without cloning — it does not increment
`count` and does not need a destructor. It is safe to use as long as the
referenced vector remains alive and unmodified. This is the caller's
responsibility; use `letin` with a clone for automatic safety:

```cicili
;; unsafe — valid only while v03 is alive and not mutated
(var (Slice^int) s (Slice^int v03_raw_ptr 2 2))

;; safe — clone increments count; Rc keeps Buffer alive
(letin ((s (Slice^int (clone^Box^Vector^int v03) 2 2)))
  ...)
```


## 10. Comparison with `List` / `BoxedList`

| | `List a` | `BoxedList a` | `Vector a` |
|---|---|---|---|
| Storage | Linked `Cons` cells | Rc-linked `Cons` cells | Contiguous buffer |
| `nth` / `len` | O(n) | O(n) | O(1) |
| `drop` / `take` | O(n), copies | O(1), Rc clone | O(1), zero-copy `Slice` |
| Mutation | Pure — new cells | Pure — new cells | Exclusive in-place (Buffer) or COW (Slice) |
| Mutation guard | n/a | n/a | `count == 1` required; else returns `None` |
| Structural sharing across versions | Safe (immutable cells) | Safe (immutable cells) | **Not safe** — use `List`/`BoxedList` for MVCC |
| Iterator | O(n) traversal | O(n) traversal | O(1) raw pointer pair |
| Null-termination | No | No | Optional, compile-time specialization |
| Typical use | Functional pipelines, BTree nodes | MVCC / concurrent indexes | Buffers, strings, sequential single-owner data |


## 11. Concurrency and Persistence

`Vector` is **not** a persistent data structure and must not be used where
structural sharing across long-lived versions is required — for example, as
the `items` / `children` storage of `BTree` in `concurrent_btree.lisp`'s
MVCC model.

`List` / `Rc` is safe for shared structure because its cells are immutable —
every update allocates new cells, leaving old versions permanently valid.
`Vector`'s in-place mutation, even with the exclusive guard, operates on
the same `StringBuffer` that `realloc` may move — `Slice` references into
that buffer are invalidated on any successful mutation.

Use `Vector` for: request bodies, parser token buffers, serialization scratch
space, string building, single-threaded sequential processing.
Use `List` / `BoxedList` for: persistent functional data, BTree nodes, MVCC
tree versions, anything that needs structural sharing across time.


## 12. Complete Example

```cicili
;; Instantiation (once per translation unit)
(decl-Vector Vector^int int)
(impl-Vector Vector^int int (\\ -f -v (fprintf -f "%d" -v)) " " NIL)
(import-Vector Vector^int int new^Vector^int)

(main
  (letin (
    (v  (new^Vector^int '{ 1 2 3 4 5 }))   ; Buffer [1,2,3,4,5]
    (s  (drop^Vector^int 2 v))              ; Slice  [3,4,5] — O(1), count=2
    (w  (wrap^Vector^int 99))               ; Buffer [99]
    )

    ;; read operations
    (show^Vector^int stdout v)              ; 1 2 3 4 5
    (show^Vector^int stdout s)              ; 3 4 5
    (printf "%ld\n" (len^Vector^int s))     ; 3
    (io ((<> nth Vector^int) 1 s)
      (Just x (printf "%d\n" x))           ; 4
      (default (exit EXIT_FAILURE)))

    ;; exclusive guard in action
    (letin ((v2 (push^Vector^int 6 v)))    ; count==2 (s alive) → None!
      (io# v2
        (* None (printf "blocked\n"))       ; blocked
        (default (exit EXIT_FAILURE))))

    ;; COW — mutate the Slice, not the Buffer
    (letin ((s2 (push^Vector^int 6 s)))    ; copySlice [3,4,5] then push 6
      (show^Vector^int stdout s2))         ; 3 4 5 6
    
    ;; s's letin scope ends here — count drops back to 1
    ;; v can now be mutated exclusively
    (letin ((v2 (push^Vector^int 6 v)))
      (io# v2
        (* Buffer (show^Vector^int stdout v2)) ; 1 2 3 4 5 6
        (default (exit EXIT_FAILURE))))

    ;; iteration
    (iterate (beg end v2)
      (printf "%d" (cof beg)))             ; 123456
    (putchar #\Newline)
    (iterate (beg end v2 :reverse T)
      (printf "%d" (cof end)))             ; 654321
    (putchar #\Newline)

  ) ; letin — v, s, w, freed automatically
)
```
