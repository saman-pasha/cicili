Cicili StringBuffer Documentation

Overview

StringBuffer is a mutable, dynamically growing buffer for sequential data (characters or any type). It provides efficient appending with amortized O(1) operations and supports both null-terminated and raw buffer modes.

All types use size_t for sizes and indices, ensuring compatibility with C memory model.

Declaration

```cicili
(generic decl-StringBuffer (a))  ; a is the element type (typically char)
```

Type Constructors

Constructor Fields Description
Buffered a* buffer, size_t cursor, size_t size, size_t step Raw buffer, no null terminator
NullTerminated a* buffer, size_t cursor, size_t size, size_t step C-string compatible, always null-terminated
Freed — Buffer has been deallocated

Constructors

new

```cicili
(func new ((size_t step) (bool null_terminated)) (out (<> StringBuffer a)))
```

Creates a new empty buffer.

Parameter Description
step Growth increment (number of elements to allocate when expanding)
null_terminated #t for C-string mode, #f for raw binary mode

Example:

```cicili
;; Character buffer for text (null-terminated)
(letin ((sb ((<> new StringBuffer char) 16 #t)))
  ...)

;; Binary byte buffer (not null-terminated)
(letin ((sb ((<> new StringBuffer byte) 4096 #f)))
  ...)
```

newCapacity

```cicili
(func newCapacity ((size_t capacity) (size_t step) (bool null_terminated)) (out (<> StringBuffer a)))
```

Creates a new buffer with preallocated capacity.

Parameter Description
capacity Initial capacity in elements
step Growth increment
null_terminated Buffer mode

Example:

```cicili
;; Preallocate 1MB for large data
(letin ((sb ((<> newCapacity StringBuffer char) 1048576 65536 #t)))
  ...)
```

Core Operations

print — Append Data

```cicili
(func print (((<> StringBuffer a) sb) (const a* data) (size_t len)) (out (<> StringBuffer a)))
```

Appends len elements from data to the buffer. Returns the buffer (may be new if reallocated).

Example:

```cicili
(set sb ((<> print StringBuffer char) sb "Hello" 5))
```

put — Append Single Element

```cicili
(func put (((<> StringBuffer a) sb) (const a data)) (out (<> StringBuffer a)))
```

Appends a single element to the buffer.

Example:

```cicili
(set sb ((<> put StringBuffer char) sb #\H))
(set sb ((<> put StringBuffer char) sb #\i))
```

copy — Deep Copy

```cicili
(func copy (((<> StringBuffer a) sb)) (out (<> StringBuffer a)))
```

Creates an independent copy of the entire buffer. The new buffer has the same mode and content.

Example:

```cicili
(letin ((original ((<> new StringBuffer char) 16 #t)))
  (set original ((<> print StringBuffer char) original "Hello" 5))
  (letin ((clone ((<> copy StringBuffer char) original)))
    ;; clone is independent — modifying original doesn't affect clone
    ))
```

copySlice — Extract Substring

```cicili
(func copySlice (((<> StringBuffer a) sb) (size_t pos) (size_t len)) (out (<> StringBuffer a)))
```

Extracts a portion of the buffer starting at pos for len elements. Returns a new independent buffer. If pos + len exceeds the current cursor, copies only available data.

Example:

```cicili
(letin ((sb ((<> new StringBuffer char) 16 #t)))
  (set sb ((<> print StringBuffer char) sb "Hello, World!" 13))
  (letin ((sub ((<> copySlice StringBuffer char) sb 7 5)))
    ;; sub contains "World"
    ))
```

resize — Change Buffer Capacity

```cicili
(func resize (((<> StringBuffer a) sb) (size_t size)) (out (<> StringBuffer a)))
```

Resizes the buffer to the new capacity. If shrinking, data beyond new size is lost. If growing, new capacity is allocated but cursor unchanged (preserves existing content).

Example:

```cicili
(letin ((sb ((<> new StringBuffer char) 16 #t)))
  (set sb ((<> print StringBuffer char) sb "Hello" 5))
  (set sb ((<> resize StringBuffer char) sb 32))  ; Grow to 32 elements
  ((<> put StringBuffer char) sb #\Space)
  ((<> print StringBuffer char) sb "World" 5))
```

free — Destructor

```cicili
(free (io this ...))
```

Automatically called when buffer goes out of scope when using letin or rc. Frees the internal buffer and marks as Freed.

Growth Behavior

The buffer grows automatically when needed:

1. When cursor + len > size, reallocation occurs
2. New size = step × (⌈(cursor + len) / step⌉ + 1)
3. Uses realloc to preserve existing data
4. In null-terminated mode, one extra element is reserved for \0

Example Growth Pattern (step = 16):

```
Initial: capacity = 16
After 16 chars: capacity = 32
After 32 chars: capacity = 48
After 48 chars: capacity = 64
...
```

Buffer Modes

Buffered Mode (null_terminated = #f)

· Raw binary data
· No automatic null terminator
· Suitable for arbitrary byte sequences, images, serialized data

NullTerminated Mode (null_terminated = #t)

· C-string compatible
· Automatically maintains trailing \0
· Suitable for text, C interop, JSON/XML generation

Error Handling

All operations return the buffer (or a new buffer) on success. The Freed state represents a deallocated buffer:

```cicili
(match sb
  (Buffered buffer cursor size step ...)
  (NullTerminated buffer cursor size step ...)
  (Freed (printf "Buffer is freed!\n")))
```

Attempting to use a Freed buffer returns Freed (graceful degradation).

Memory Management (RAII)

Always use letin (not let) to ensure automatic cleanup:

```cicili
;; ✓ Correct — auto-freed
(letin ((sb ((<> new StringBuffer char) 16 #t)))
  ((<> print StringBuffer char) sb "Hello" 5))

;; ✗ Wrong — memory leak
(let (((<> StringBuffer char) sb ((<> new StringBuffer char) 16 #t)))
  ((<> print StringBuffer char) sb "Hello" 5))
```

Performance Characteristics

Operation Complexity Notes
put O(1) amortized May trigger reallocation
print O(len) amortized May trigger reallocation
copy O(cursor) Full copy of data
copySlice O(len) Copies only requested region
resize O(1) (realloc) May move memory

Usage Examples

Building a String

```cicili
(import-StringBuffer char)

(letin ((sb ((<> new StringBuffer char) 16 #t)))
  (set sb ((<> print StringBuffer char) sb "Hello" 5))
  (set sb ((<> put StringBuffer char) sb #\Space))
  (set sb ((<> print StringBuffer char) sb "World!" 6))
  
  ;; sb now contains "Hello World!\0"
  (match sb
    (NullTerminated buffer cursor _ _
      (printf "%s\n" buffer))))
```

Building JSON Dynamically

```cicili
(letin ((sb ((<> new StringBuffer char) 256 #t)))
  (set sb ((<> print StringBuffer char) sb "{" 1))
  (set sb ((<> print StringBuffer char) sb "\"name\":\"Saman\"" 15))
  (set sb ((<> print StringBuffer char) sb ",\"age\":" 7))
  (set sb ((<> put StringBuffer char) sb #\Space))
  
  ;; Append number (convert to string first)
  (letin ((ageStr (itoa 42)))
    (set sb ((<> print StringBuffer char) sb ageStr (strlen ageStr))))
  
  (set sb ((<> put StringBuffer char) sb #\}))
  
  ;; Result: {"name":"Saman", "age": 42}
  )
```

Reading File into Buffer

```cicili
(func read-file ((CStr filename))
  (out (<> StringBuffer char))
  (letin ((sb ((<> new StringBuffer char) 4096 #f)))
    (let ((file (fopen filename "rb")))
      (if file
          (block
            (while (!= (feof file) 0)
              (let ((char buffer [4096])
                    (bytes (fread buffer 1 4096 file)))
                (when (> bytes 0)
                  (set sb ((<> print StringBuffer char) sb buffer bytes)))))
            (fclose file)
            sb)  ; Return sb — ownership transfers to caller
          ((<> FreedStringBuffer char))))))
```

Substring Extraction

```cicili
(letin ((sb ((<> new StringBuffer char) 32 #t)))
  (set sb ((<> print StringBuffer char) sb "The Quick Brown Fox" 19))
  
  ;; Extract "Quick" (positions 4-8)
  (letin ((quick ((<> copySlice StringBuffer char) sb 4 5)))
    (match quick
      (NullTerminated buffer _ _ _
        (printf "Substring: %s\n" buffer)))))
```

Resizing for Efficiency

```cicili
;; Build large string efficiently by pre-sizing
(letin ((sb ((<> newCapacity StringBuffer char) 1000000 65536 #t)))
  (for ((size_t i 0)) (< i 1000000) ((++ i))
    (set sb ((<> put StringBuffer char) sb #\X)))
  ;; sb now holds 1,000,000 'X' characters
  )
```

Integration with Other Types

With String (Persistent)

```cicili
;; Build mutable buffer, then convert to persistent String
(letin ((sb ((<> new StringBuffer char) 64 #t)))
  (set sb ((<> print StringBuffer char) sb "Hello" 5))
  (let ((persistent ((<> new String) sb)))  ; Convert to immutable String
    ((<> show String) stdout persistent)))
```

With DynamicType

```cicili
;; Generate JSON into buffer, then parse
(letin ((sb ((<> new StringBuffer char) 256 #t)))
  ((<> toJson DynamicType) sb dt14)
  (match sb
    (NullTerminated buffer _ _ _
      (let ((file (fmemopen buffer (strlen buffer) "r")))
        (letin ((dt ((<> parseJson DynamicType) file))
                (fclose file))
          dt)))))
```

Thread Safety

StringBuffer is not thread-safe by design. For concurrent access:

· Use different buffers per thread
· Or synchronize access with mutexes
· Or use Arc<StringBuffer> for shared ownership with locking (requires decl-Arc wrapper)

See Also

· decl-String — Immutable persistent string (built on List)
· decl-Vector — Persistent vector (built on StringBuffer)
· decl-List — Linked list for structural sharing
· decl-B-Tree — Persistent B-tree (uses List for children)
