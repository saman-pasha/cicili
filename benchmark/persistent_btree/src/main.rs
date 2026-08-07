// Benchmark mirroring simple-btree.lisp / royal-btree.lisp's workload shape,
// using immutable_map::TreeMap (persistent weight-balanced BST) as the closest
// available Rust analog of Cicili's persistent B-tree.
//
// Structural fidelity choices (see conversation context):
//   - `CiciliString` is a real singly-linked list of `char` nodes, each
//     individually heap-allocated, matching Cicili's `String = List char`
//     representation -- NOT Rust's contiguous `String`.
//   - `CiciliCell` mirrors Cicili's `Cell a`: a shared, move-out-able slot
//     that becomes a tombstone (`None`) once taken, rather than relying on
//     `Clone` to sidestep the question of "is this value still alive in an
//     older tree version after a newer version deleted it". Sharing across
//     tree versions is via `Rc`; interior mutation for `take` is via
//     `RefCell`, since `immutable_map::TreeMap` requires `V: Clone` and a
//     plain owned field could not be moved out through a shared `&V`.
//
// Per epoch: insert 1..250, 501..750, 251..500, 751..1000 (1000 keys)
//            search the same 1000 keys
//            delete the same 1000 keys (in the same range order)
// Repeated for 1000 epochs => 1,000,000 inserts / searches / deletes total,
// matching the Cicili test's totals.

use immutable_map::TreeMap;
use std::cell::RefCell;
use std::rc::Rc;
use std::time::Instant;

// --- CiciliString: a real linked list of chars, mirroring `List char` ---

#[derive(Clone)]
enum CiciliString {
    Cons(char, Rc<CiciliString>),
    Nil,
}

impl CiciliString {
    fn from_str(s: &str) -> Rc<CiciliString> {
        let mut node = Rc::new(CiciliString::Nil);
        for c in s.chars().rev() {
            node = Rc::new(CiciliString::Cons(c, node));
        }
        node
    }

    fn append(a: &Rc<CiciliString>, b: &Rc<CiciliString>) -> Rc<CiciliString> {
        match a.as_ref() {
            CiciliString::Cons(c, tail) => {
                Rc::new(CiciliString::Cons(*c, CiciliString::append(tail, b)))
            }
            CiciliString::Nil => b.clone(),
        }
    }

    #[allow(dead_code)]
    fn to_std_string(&self) -> String {
        let mut out = String::new();
        let mut cur = self;
        loop {
            match cur {
                CiciliString::Cons(c, tail) => {
                    out.push(*c);
                    cur = tail;
                }
                CiciliString::Nil => break,
            }
        }
        out
    }
}

// --- CiciliCell<T>: shared, move-out-able, tombstones on take ---
// Mirrors `Cell a`'s Alive/Dead constructors: `get` reads without consuming,
// `take` consumes and leaves the cell `None` (Dead) for every other clone
// sharing the same Rc<RefCell<..>>.

struct CiciliCell<T>(Rc<RefCell<Option<T>>>);

impl<T> Clone for CiciliCell<T> {
    fn clone(&self) -> Self {
        CiciliCell(self.0.clone())
    }
}

impl<T> CiciliCell<T> {
    fn new(value: T) -> Self {
        CiciliCell(Rc::new(RefCell::new(Some(value))))
    }

    #[allow(dead_code)]
    fn get(&self) -> Option<std::cell::Ref<T>> {
        let r = self.0.borrow();
        if r.is_some() {
            Some(std::cell::Ref::map(r, |o| o.as_ref().unwrap()))
        } else {
            None
        }
    }

    fn take(&self) -> Option<T> {
        self.0.borrow_mut().take()
    }
}

// --- User value, matching `(Tuple (Cell String) int)` ---

#[derive(Clone)]
struct User {
    name: CiciliCell<Rc<CiciliString>>,
    salary: i32,
}

fn insert_many(mut tree: TreeMap<i32, User>, from: i32, to: i32) -> TreeMap<i32, User> {
    for i in from..=to {
        let key_str = i.to_string();
        let name = CiciliString::append(&CiciliString::from_str("User "), &CiciliString::from_str(&key_str));
        let value = User {
            name: CiciliCell::new(name),
            salary: i + 2000,
        };
        tree = tree.insert(i, value);
    }
    tree
}

fn search_many(tree: &TreeMap<i32, User>, from: i32, to: i32) {
    for i in from..=to {
        match tree.get(&i) {
            Some(_item) => { /* found, matching commented-out branch in Cicili source */ }
            None => {
                eprintln!("Search Not Found: {}", i);
            }
        }
    }
}

fn delete_many(mut tree: TreeMap<i32, User>, from: i32, to: i32) -> TreeMap<i32, User> {
    for i in from..=to {
        match tree.remove(&i) {
            Some((new_tree, removed_value)) => {
                // mirror `(<> free Cell String) (aof wname)` -- explicitly
                // take/move the string out of the shared Cell, leaving a
                // tombstone for any other clone of this Cell (e.g. one held
                // by an older, still-referenced tree version).
                let _moved_out = removed_value.name.take();
                tree = new_tree;
            }
            None => {
                eprintln!("Error during deletion: key not found: {}", i);
                std::process::exit(-1);
            }
        }
    }
    tree
}

fn main() {
    println!(
        "Single-thread pure functional manipulation of 'User' type into and from 'TreeMap<i32,User>' structure using 'i32' key type."
    );

    let start = Instant::now();
    let mut tree: TreeMap<i32, User> = TreeMap::new();

    for counter in 0..1000 {
        tree = insert_many(tree, 1, 250);
        tree = insert_many(tree, 501, 750);
        tree = insert_many(tree, 251, 500);
        tree = insert_many(tree, 751, 1000);

        search_many(&tree, 1, 250);
        search_many(&tree, 501, 750);
        search_many(&tree, 251, 500);
        search_many(&tree, 751, 1000);

        tree = delete_many(tree, 1, 250);
        tree = delete_many(tree, 501, 750);
        tree = delete_many(tree, 251, 500);
        tree = delete_many(tree, 751, 1000);

        println!("Epoch {}", counter + 1);
    }

    println!("Done");
    println!("{} seconds elapsed", start.elapsed().as_secs());
}
