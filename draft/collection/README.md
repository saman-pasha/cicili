📘 Vector — High‑Performance, Slice‑Aware, Copy‑On‑Write Sequence

Vector a is Cicili’s dynamic, contiguous, slice‑aware, copy‑on‑write (COW) sequence type.  
It is designed for high‑performance workloads, offering:

- O(1) random access  
- O(1) slicing  
- amortized O(1) push  
- safe mutation via copy‑on‑write  
- contiguous memory layout  
- optional null‑termination (via underlying StringBuffer)  

Vector is ideal for:

- text processing  
- binary buffers  
- protocol parsing  
- JSON/XML building  
- functional pipelines  

It is not persistent and not concurrency‑safe for persistent structures like B‑Trees.

---

🧩 Data Representation

`lisp
(Vector a) =
  | Buffer  (StringBuffer a)
  | Slice   vector cursor size
  | None
`

Buffer
Owns a StringBuffer a:

- contiguous storage  
- mutable (in place)  
- may reallocate on write  
- fast for push/append  

Slice
A non‑owning view into another vector:

- vector — underlying vector  
- cursor — start index  
- size — number of elements  

Slices are:

- O(1) to create  
- persistent  
- safe  
- cheap  

None
Represents an empty or invalid vector.

---

⚙️ API Reference

Construction

pure(step) → Vector a
Create an empty vector with capacity = step.

pureCapacity(capacity, step) → Vector a
Create an empty vector with explicit capacity.

wrap(item) → Vector a
Create a vector containing a single element.

---

Basic Operations

len(vector) → size_t
Returns the number of elements.

hasLen(vector, desired) → size_t
Returns min(len(vector), desired).

nth(index, vector) → Maybe a
Safe random access.

head(vector) → Maybe a
First element.

last(vector) → Vector a
Slice containing the last element.

tail(vector) → Vector a
All elements except the first.

init(vector) → Vector a
All elements except the last.

---

Slicing

take(n, vector) → Vector a
Slice of the first n elements.

drop(n, vector) → Vector a
Slice skipping the first n elements.

Slice semantics
- O(1)  
- no copying  
- persistent  
- safe  

Guided link: slice semantics

---

Mutation (Copy‑On‑Write)

All mutating operations follow this rule:

- If vector is a Buffer → mutate in place  
- If vector is a Slice → copy slice region → mutate new buffer  

This ensures:

- no aliasing bugs  
- slices remain valid  
- mutation is safe  

push(item, vector) → Vector a
Append one element.

append(left, right) → Vector a
Concatenate two vectors.

insertAt(vector, item, index) → Vector a
Insert element at index.

deleteAt(vector, index) → Vector a
Remove element at index.

replaceAt(vector, item, index) → Vector a
Replace element at index.

reverse(vector) → Vector a
Reverse the vector.

---

Copying

copy(vector) → Vector a
Deep copy of entire vector.

toArray(vector) → a*
Returns raw pointer to contiguous storage.

---

Resizing

resize(vector, new_len) → Vector a
Resize underlying buffer.

- For Buffer: realloc to new size  
- For Slice: copy slice → resize new buffer  
- For None: returns None  

Useful for:

- truncation  
- pre‑allocation  
- manual capacity control  

---

Showing / Printing

show(file, vector) → size_t
Pretty‑print vector contents using the provided formatter fmt.

---

🧠 Memory Model

Buffer
- owns storage  
- may reallocate  
- mutations invalidate slices  
- safe due to COW  

Slice
- non‑owning  
- persistent  
- safe  
- COW on mutation  

None
- always safe  
- operations return None or empty slices  

---

🧵 Safety Guarantees

✔ No aliasing bugs
Slices never mutate underlying storage.

✔ No dangling pointers
Slices retain Rc of underlying buffer.

✔ Safe mutation
COW ensures slices remain valid.

✔ Safe slicing
Slices are persistent and cheap.

✔ Safe freeing
Underlying StringBuffer handles RAII.

---

🧮 Performance Characteristics

| Operation | Buffer | Slice |
|----------|--------|--------|
| nth | O(1) | O(1) |
| head | O(1) | O(1) |
| tail | O(1) | O(1) |
| drop | O(1) | O(1) |
| take | O(1) | O(1) |
| push | amortized O(1) | O(n) (COW) |
| append | O(n) | O(n) (COW) |
| insertAt | O(n) | O(n) (COW) |
| deleteAt | O(n) | O(n) (COW) |
| reverse | O(n) | O(n) (COW) |
| resize | O(1) or O(n) | O(n) (COW) |

---

🧭 Usage Examples

Create a vector
`lisp
(let ((v ((<> pure Vector char) 16)))
  ((<> push Vector char) #\A v))
`

Slice a vector
`lisp
((<> take Vector char) 5 v)
`

Append two vectors
`lisp
((<> append Vector char) v1 v2)
`

Replace an element
`lisp
((<> replaceAt Vector char) v #\X 3)
`

---

🚫 Concurrency Notes

Vector is not persistent and not concurrency‑safe for structures like BTree.

Reason:

- underlying StringBuffer uses realloc  
- realloc moves memory  
- slices and old versions become invalid  

Use List or a future PersistentVector for concurrent persistent structures.

Guided link: persistent vector design

---

🧩 Design Philosophy

Vector is designed to be:

- high‑performance  
- slice‑aware  
- copy‑on‑write safe  
- contiguous  
- binary‑safe  
- C‑string compatible  
- functional at the API level  

It is the right tool for:

- text/binary processing  
- protocol parsing  
- JSON/XML building  
- general application code  

It is not the right tool for:

- persistent trees  
- concurrent immutable structures  

---
