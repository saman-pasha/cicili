📘 BTree — Persistent, Immutable, Rc‑Managed B‑Tree for Cicili

BTree k v is Cicili’s persistent, immutable, Rc‑managed B‑Tree implementation.  
It provides:

- logarithmic search, insert, and delete  
- structural sharing via Rc  
- safe, immutable nodes  
- automatic memory management  
- functional API  
- error reporting via Either  
- optional callbacks for deletion  
- pure construction from lists  

This B‑Tree is suitable for:

- databases  
- indexes  
- key‑value stores  
- persistent data structures  
- concurrent readers (immutable versions)  

It is fully persistent:  
every modification returns a new tree, and old versions remain valid.

---

🧩 Data Representation

`lisp
(BTree k v) =
  | Branch   items children
  | Internal items children
  | Leaf     items
`

Leaf
Contains only items:

`
(List (Tuple k v))
`

Internal
Contains:

- items: sorted key/value pairs  
- children: list of Rc<BTree>  

Branch
A temporary node used during splits.  
It is not part of the final tree structure; it is an intermediate result during insertion or deletion.

---

🧠 Supporting Types

Tuple k v
A key/value pair.

List
Persistent list used for:

- items  
- children  

Rc
Reference‑counted pointer used for:

- structural sharing  
- safe persistence  
- memory‑safe children  

Maybe
Used for:

- search results  
- min/max  
- optional parent references  

Either Error Tree
Used for:

- insert errors  
- delete errors  
- invalid operations  

---

⚠️ Error Types

`lisp
BTreeError =
  | ERRINVALIDOBJECT
  | ERRINVALIDORDER order
  | ERRUNIQUEKEY item
  | ERRNOTFOUND key
  | ERRACCESSDEAD_CHILD item index
  | ERRINVALIDBRANCH branch
  | ERRCANTBORROW reason
`

Each error has a show function for printing.

---

⚙️ API Reference

Construction

pure(keys[], values[], len) → Either Error (BTree k v)
Build a B‑Tree from raw arrays.

fromLists(List k, List v) → Either Error (BTree k v)
Build a B‑Tree from persistent lists.

---

Core Operations

order() → size_t
Returns the B‑Tree order m.

---

search(tree, key) → Maybe (Tuple k v)
Standard B‑Tree search.

- returns Just (k,v) if found  
- returns Nothing if not found  

---

insert(tree, key, value) → Either Error (BTree k v)
Insert a key/value pair.

- returns a new tree  
- old tree remains valid  
- detects duplicate keys  
- performs node splits when needed  

---

delete(tree, key, callback) → Either Error (BTree k v)
Delete a key.

- callback is invoked with the removed (k,v)  
- handles all B‑Tree deletion cases:  
  - leaf deletion  
  - internal deletion  
  - borrow from left  
  - borrow from right  
  - merge  
  - split after merge (rare but supported)  

---

min(tree) → Maybe (Tuple k v)
Return the smallest key/value pair.

max(tree) → Maybe (Tuple k v)
Return the largest key/value pair.

---

traverse(tree, callback)
In‑order traversal.

Callback receives:

- (Tuple k v)  
- Bool hasNext  

---

show(file, tree) → size_t
Pretty‑print the tree.

---

🧬 Internal Mechanics

Order Parameters

`lisp
U = m
L = ceil(m / 2)
`

- U = maximum number of items before split  
- L = minimum number of items after merge/borrow  

---

Split
Performed when a node overflows.

- middle item is promoted  
- left and right children are created  
- returns a Branch node  

Used in:

- insertion  
- deletion (via splitForDelete)  

---

Borrow
During deletion, if a child has too few items:

- borrow from right sibling  
- or borrow from left sibling  
- or merge if borrowing is impossible  

Borrowing is implemented separately for:

- leaf nodes  
- internal nodes  

---

Merge
When both siblings have minimum items:

- merge left + parent key + right  
- may cause parent underflow  
- may trigger recursive merge  

---

Structural Sharing
All children are stored as:

`
List (Rc BTree)
`

This ensures:

- old versions remain valid  
- memory is shared safely  
- no mutation occurs in place  

---

🧮 Performance Characteristics

| Operation | Complexity |
|----------|------------|
| search | O(log n) |
| insert | O(log n) |
| delete | O(log n) |
| min/max | O(log n) |
| traverse | O(n) |

Memory usage is efficient due to Rc‑based structural sharing.

---

🧵 Safety Guarantees

✔ Fully persistent
Old versions remain valid forever.

✔ Rc‑managed
No manual memory management required.

✔ Immutable nodes
No in‑place mutation.

✔ Safe deletion
Borrow/merge logic ensures tree invariants.

✔ Safe children access
Errors detect invalid child references.

---

🧭 Usage Examples

Insert
`lisp
(match ((<> insert BTree int int) tree 42 100)
  (Right newTree newTree)
  (Left err (show err)))
`

Search
`lisp
(match ((<> search BTree int int) tree 42)
  (Just item (printf "found: %d" (cof item)))
  (default (printf "not found")))
`

Delete
`lisp
((<> delete BTree int int) tree 42 (\\ item (printf "removed: %d" (cof item))))
`

---

🧩 Design Philosophy

Cicili’s B‑Tree is designed to be:

- persistent  
- immutable  
- memory‑safe  
- Rc‑managed  
- functional  
- high‑performance  

It is ideal for:

- databases  
- indexes  
- persistent maps  
- multi‑version concurrency  
- functional programming  

---

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
