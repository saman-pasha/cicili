// Rust side of the lib/std vector API comparison.
//
// The Cicili side is benchmark/std-vector-bench.cicili; the two are meant to be
// read together and the shapes are matched deliberately. Run with:
//
//     cargo build --release && ./target/release/api_bench
//
// This is a SEPARATE binary from vec_bench on purpose. Adding these functions to
// main.rs would have shifted every existing benchmark's code layout, and a
// 32-byte alignment accident is worth ~10% here -- more than most of the
// differences being measured. See test/std/array.cicili for how that was found.
//
// Two ownership models, because Cicili's (<> vector a) and Rust's Vec are not
// the same kind of object:
//
//   Vec<i32>       { ptr, cap, len }, owns its buffer, cannot be shared
//   Rc<Vec<i32>>   refcounted buffer; Rc::get_mut checks count == 1 before
//                  handing out &mut -- exactly what (<> append vector a) does
//                  before it writes in place
//
// Cicili's vector is the second one. RefCell is deliberately NOT used: Cicili
// checks the refcount only, it has no borrow flag, so Rc<RefCell<Vec>> would
// charge Rust for a feature Cicili does not implement.

use std::cell::Cell;
use std::hint::black_box;
use std::rc::Rc;
use std::time::Instant;

const N: usize = 1_000_000_000;
const STEP: usize = 1_000; // elements per epoch, N/STEP epochs

// ---------------------------------------------------------------------------
// Vec<i32> — unique ownership. Cicili has no type with exactly these terms;
// (<> array a) is the closest and it does not grow.
// ---------------------------------------------------------------------------

fn construct(n: usize, items: &[i32]) -> u128 {
    let mut sum: i64 = 0;
    let start = Instant::now();
    for _ in 0..(n / STEP) {
        let v: Vec<i32> = items.to_vec();
        sum = sum.wrapping_add(v.len() as i64);
        black_box(&v);
    }
    let elapsed = start.elapsed().as_millis();
    println!("  (construct checksum: {})", sum);
    elapsed
}

fn nth(n: usize) -> u128 {
    let v: Vec<i32> = (0..50).collect();
    let mut sum: i64 = 0;
    let start = Instant::now();
    for i in 0..n {
        if let Some(&val) = v.get(i % 50) {
            sum = sum.wrapping_add(val as i64);
        }
    }
    let elapsed = start.elapsed().as_millis();
    println!("  (nth checksum: {})", sum);
    elapsed
}

// Vec::new(), not with_capacity: (<> new vector a) cannot be told a capacity,
// it takes (<> arraySize vector a) of the length and doubles from 16 cells.
// with_capacity(STEP) would be racing a version that had been handed the answer.
fn push(n: usize) -> u128 {
    let mut sum: i64 = 0;
    let start = Instant::now();
    for epoch in 0..(n / STEP) {
        let mut v: Vec<i32> = Vec::new();
        for i in 0..STEP {
            v.push((epoch * STEP + i) as i32);
        }
        sum = sum.wrapping_add(v.len() as i64);
        black_box(&v);
    }
    let elapsed = start.elapsed().as_millis();
    println!("  (push checksum: {})", sum);
    elapsed
}

fn append(n: usize, items: &[i32]) -> u128 {
    let mut sum: i64 = 0;
    let start = Instant::now();
    for _ in 0..(n / STEP) {
        let mut v: Vec<i32> = Vec::new();
        v.extend_from_slice(items);
        sum = sum.wrapping_add(v.len() as i64);
        black_box(&v);
    }
    let elapsed = start.elapsed().as_millis();
    println!("  (append checksum: {})", sum);
    elapsed
}

// The control for Cicili's "len opaque" row: same loop, but the length is
// hidden from LLVM with black_box so the bounds check cannot be folded away.
// Without this row the nth comparison is check-elided on BOTH sides and says
// nothing about what a bounds check actually costs.
fn nth_opaque(n: usize) -> u128 {
    let len = black_box(50usize);
    let v: Vec<i32> = (0..len as i32).collect();
    let v = black_box(v);
    let mut sum: i64 = 0;
    let start = Instant::now();
    for i in 0..n {
        if let Some(&val) = v.get(i % 50) {
            sum = sum.wrapping_add(val as i64);
        }
    }
    let elapsed = start.elapsed().as_millis();
    println!("  (nth opaque checksum: {})", sum);
    elapsed
}

// ---------------------------------------------------------------------------
// Rc<Vec<i32>> — shared ownership. This is the row that matches Cicili's
// (<> vector a): a refcount is loaded and compared before every write.
// ---------------------------------------------------------------------------

fn construct_rc(n: usize, items: &[i32]) -> u128 {
    let mut sum: i64 = 0;
    let start = Instant::now();
    for _ in 0..(n / STEP) {
        let v: Rc<Vec<i32>> = Rc::new(items.to_vec());
        sum = sum.wrapping_add(v.len() as i64);
        black_box(&v);
    }
    let elapsed = start.elapsed().as_millis();
    println!("  (construct rc checksum: {})", sum);
    elapsed
}

fn nth_rc(n: usize) -> u128 {
    let v: Rc<Vec<i32>> = Rc::new((0..50).collect());
    let mut sum: i64 = 0;
    let start = Instant::now();
    for i in 0..n {
        if let Some(&val) = v.get(i % 50) {
            sum = sum.wrapping_add(val as i64);
        }
    }
    let elapsed = start.elapsed().as_millis();
    println!("  (nth rc checksum: {})", sum);
    elapsed
}

// Rc::get_mut per push is the point: it is the count == 1 guard, checked every
// time, which is what (<> push vector a) does.
fn push_rc(n: usize) -> u128 {
    let mut sum: i64 = 0;
    let missed = Cell::new(0i64);
    let start = Instant::now();
    for epoch in 0..(n / STEP) {
        let mut v: Rc<Vec<i32>> = Rc::new(Vec::new());
        for i in 0..STEP {
            match Rc::get_mut(&mut v) {
                Some(inner) => inner.push((epoch * STEP + i) as i32),
                None => missed.set(missed.get() + 1),
            }
        }
        sum = sum.wrapping_add(v.len() as i64);
        black_box(&v);
    }
    let elapsed = start.elapsed().as_millis();
    println!("  (push rc checksum: {}, missed {})", sum, missed.get());
    elapsed
}

fn append_rc(n: usize, items: &[i32]) -> u128 {
    let mut sum: i64 = 0;
    let start = Instant::now();
    for _ in 0..(n / STEP) {
        let mut v: Rc<Vec<i32>> = Rc::new(Vec::new());
        if let Some(inner) = Rc::get_mut(&mut v) {
            inner.extend_from_slice(items);
        }
        sum = sum.wrapping_add(v.len() as i64);
        black_box(&v);
    }
    let elapsed = start.elapsed().as_millis();
    println!("  (append rc checksum: {})", sum);
    elapsed
}

// An argument runs one row instead of all eight, so a single operation can be
// re-measured against Cicili without sitting through the other seven:
//
//     ./api_bench nth          ./api_bench push_rc          ./api_bench
//
// The filter is checked BEFORE the timers and never inside one, so it cannot
// land in a measured loop.
fn main() {
    let items: Vec<i32> = (0..STEP as i32).collect();
    let only = std::env::args().nth(1);
    
    let run = |name: &str| only.as_deref().map_or(true, |o| o == name);

    println!("Rust Vec<i32> / Rc<Vec<i32>> — {} operations each\n", N);

    if run("construct") {
        println!("  construct (to_vec, {} x {}): {} ms", N / STEP, STEP, construct(N, &items));
    }
    if run("nth") {
        println!("  nth (bounds-checked get) {} times: {} ms", N, nth(N));
    }
    if run("nth_opaque") {
        println!("  nth opaque (len hidden) {} times: {} ms", N, nth_opaque(N));
    }
    if run("push") {
        println!("  push {} elements ({} x {} epoch): {} ms", N, N / STEP, STEP, push(N));
    }
    if run("append") {
        println!("  append {} elements ({} x {} epoch): {} ms", N, N / STEP, STEP, append(N, &items));
    }
    if run("construct_rc") {
        println!("  construct rc (Rc::new + to_vec, {} x {}): {} ms", N / STEP, STEP, construct_rc(N, &items));
    }
    if run("nth_rc") {
        println!("  nth rc (bounds-checked get) {} times: {} ms", N, nth_rc(N));
    }
    if run("push_rc") {
        println!("  push rc {} elements (Rc::get_mut each): {} ms", N, push_rc(N));
    }
    if run("append_rc") {
        println!("  append rc {} elements (Rc::get_mut each): {} ms", N, append_rc(N, &items));
    }
}
