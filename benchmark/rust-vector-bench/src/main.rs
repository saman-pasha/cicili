// Cicili Vector vs Rust Vec<T> benchmark
//
// Two separate benchmarks:
//
// Benchmark A — Raw storage performance (no Rc overhead)
//   Rust: plain Vec<i32> / Vec<char>
//   Cicili equivalent: Vector^int / String (mutable, no clones alive during mutation)
//   Tests: push, indexed access (nth), slicing (drain/split), iteration
//
// Benchmark B — Shared ownership model (with Rc)
//   Rust: Rc<Vec<i32>>
//   Cicili equivalent: Vector^int with clone() producing live Slices
//   Tests: clone (Rc increment), get through Rc, COW slice mutation
//
// Each benchmark runs 1,000,000 operations, matching Cicili's test scale.
// Compiled with: cargo run --release

use std::rc::Rc;
use std::cell::RefCell;
use std::time::Instant;

const N: usize = 1_000_000_000;
const STEP: usize = 1_000; // push STEP elements, then drain, repeat N/STEP times

// ---------------------------------------------------------------------------
// Benchmark A: Raw Vec<i32> — mirrors Cicili Vector^int with no live clones
// ---------------------------------------------------------------------------

fn bench_a_push(n: usize) -> u128 {
    let start = Instant::now();
    let mut v: Vec<i32> = Vec::with_capacity(STEP);
    for epoch in 0..(n / STEP) {
        for i in 0..STEP {
            v.push((epoch * STEP + i) as i32);
        }
        v.clear(); // mirror Cicili: old vec freed, new one returned
    }
    start.elapsed().as_millis()
}

// Rust — correct approach
fn bench_a_nth(n: usize) -> u128 {
    let v: Vec<i32> = (0..50).collect();
    let mut sum: i64 = 0;
    let start = Instant::now();
    for i in 0..n {
        if let Some(&val) = v.get(i % 50) {
            sum = sum.wrapping_add(val as i64);
        }
    }
    let elapsed = start.elapsed().as_millis();
    println!("  (nth checksum: {})", sum);  // after timer — forces liveness
    elapsed
}

fn bench_a_slice(mut n: usize) -> u128 {
    // mirrors Cicili drop/take: produce a &[T] view, O(1)
    let v: Vec<i32> = (0..50 as i32).collect();
    let start = Instant::now();
    let mut total_len: usize = 0;
    n = n * n;
    for _ in 0..n {
        let s = &(&v[2..])[2..]; // drop 2 — O(1), same as Cicili Slice
        total_len = total_len.wrapping_add(s.len());
    }
    let elapsed = start.elapsed().as_millis();
    println!("  (checksum: {})", total_len);
    elapsed
}

fn bench_a_iterate(n: usize) -> u128 {
    let v: Vec<i32> = (0..STEP as i32).collect();
    let start = Instant::now();
    let mut sum: i64 = 0; // printed below to force liveness
    for _ in 0..(n / STEP) {
        // forward iteration — mirrors Cicili (iterate (beg end v) ...)
        for &x in v.iter() {
            sum = sum.wrapping_add(x as i64);
        }
    }
    let elapsed = start.elapsed().as_millis();
    println!("  (checksum: {})", sum);
    elapsed
}

fn bench_a_iterate_reverse(n: usize) -> u128 {
    let v: Vec<i32> = (0..STEP as i32).collect();
    let start = Instant::now();
    let mut sum: i64 = 0; // printed below to force liveness
    for _ in 0..(n / STEP) {
        // reverse iteration — mirrors (iterate (beg end v :reverse T) ...)
        for &x in v.iter().rev() {
            sum = sum.wrapping_add(x as i64);
        }
    }
    let elapsed = start.elapsed().as_millis();
    println!("  (checksum: {})", sum);
    elapsed
}

fn bench_a_cow_slice(n: usize) -> u128 {
    // mirrors Cicili COW: push to a Slice-like view → copySlice + push
    // Rust: take a &[T], clone to Vec, push — same semantic as Cicili COW
    let v: Vec<i32> = (0..STEP as i32).collect();
    let start = Instant::now();
    for i in 0..(n / STEP) {
        let slice = &v[2..]; // zero-cost borrow (Cicili Slice)
        let mut owned: Vec<i32> = slice.to_vec(); // COW copy (Cicili copySlice)
        owned.push((i * STEP) as i32); // mutate the copy
        let _ = owned;
    }
    start.elapsed().as_millis()
}

// ---------------------------------------------------------------------------
// Benchmark B: Rc<RefCell<Vec<i32>>> — mirrors Cicili Vector with live clones
// ---------------------------------------------------------------------------
// Note: Rust's borrow checker prevents shared mutation without interior
// mutability. Rc<RefCell<Vec>> is the honest structural equivalent of
// Cicili's Box(Rc)-wrapped Vector where clones can exist simultaneously.
// Cicili's exclusive guard (count==1 required for take) maps to RefCell's
// runtime borrow check (panics on aliased mutable borrow).

fn bench_b_clone_and_get(n: usize) -> u128 {
    let v: Rc<RefCell<Vec<i32>>> = Rc::new(RefCell::new((0..STEP as i32).collect()));
    let start = Instant::now();
    let mut sum: i64 = 0; // printed below to force liveness
    for i in 0..n {
        let clone = Rc::clone(&v);          // mirrors Cicili clone^Box^Vector
        let borrow = clone.borrow();        // mirrors Cicili get (Rc liveness check)
        if let Some(&val) = borrow.get(i % STEP) {
            sum = sum.wrapping_add(val as i64);
        }
        drop(borrow);
        drop(clone);                        // mirrors letin scope exit → free clone
    }
    let elapsed = start.elapsed().as_millis();
    println!("  (checksum: {})", sum);
    elapsed
}

fn bench_b_exclusive_push(n: usize) -> u128 {
    // mirrors Cicili exclusive guard: push only succeeds when count==1
    // Rust equivalent: try_unwrap succeeds only when Rc is unique
    let start = Instant::now();
    for epoch in 0..(n / STEP) {
        let mut v: Rc<RefCell<Vec<i32>>> = Rc::new(RefCell::new(Vec::with_capacity(STEP)));
        for i in 0..STEP {
            // Rc::get_mut mirrors Cicili take: succeeds only when count==1
            if let Some(inner) = Rc::get_mut(&mut v) {
                inner.borrow_mut().push((epoch * STEP + i) as i32);
            }
            // if count>1, get_mut returns None → mirrors Cicili returning None
        }
        // scope end: v dropped → mirrors letin free
    }
    start.elapsed().as_millis()
}

fn bench_b_cow_with_live_clone(n: usize) -> u128 {
    // mirrors Cicili COW: clone exists, push to Slice → copySlice + push
    // Rust: Rc clone alive, can't get_mut, must clone the Vec manually
    let start = Instant::now();
    for epoch in 0..(n / STEP) {
        let v: Rc<RefCell<Vec<i32>>> =
            Rc::new(RefCell::new((0..STEP as i32).collect()));
        let _slice_handle = Rc::clone(&v); // simulate a live Slice (count==2)

        // count==2: Rc::get_mut fails → must COW
        let mut owned: Vec<i32> = v.borrow().clone(); // copySlice equivalent
        owned.push((epoch * STEP) as i32);            // mutate the copy

        drop(_slice_handle); // Slice goes out of scope
        let _ = owned;
    }
    start.elapsed().as_millis()
}

// ---------------------------------------------------------------------------
// main
// ---------------------------------------------------------------------------

fn main() {
    println!("Cicili Vector vs Rust Vec<T> — {} operations each\n", N);

    println!("=== Benchmark A: Raw Vec<i32> (no Rc overhead) ===");
    println!("  (Cicili equivalent: Vector^int, no live clones during mutation)\n");

    let t = bench_a_push(N);
    println!("  push {} elements ({}×{} epoch): {} ms", N, N/STEP, STEP, t);

    let t = bench_a_nth(N);
    println!("  nth (bounds-checked get) {} times: {} ms", N, t);

    let t = bench_a_slice(N);
    println!("  slice/drop (zero-copy &[T]) {} times: {} * {} ms", N, N, t);

    let t = bench_a_iterate(N);
    println!("  forward iterate ({}×{} elements): {} ms", N/STEP, STEP, t);

    let t = bench_a_iterate_reverse(N);
    println!("  reverse iterate ({}×{} elements): {} ms", N/STEP, STEP, t);

    let t = bench_a_cow_slice(N);
    println!("  COW slice mutation (to_vec+push) {} times: {} ms\n", N/STEP, t);

    println!("=== Benchmark B: Rc<RefCell<Vec<i32>>> (shared ownership) ===");
    println!("  (Cicili equivalent: Vector^int with live clones/Slices)\n");

    let t = bench_b_clone_and_get(N);
    println!("  Rc clone + borrow (get) {} times: {} ms", N, t);

    let t = bench_b_exclusive_push(N);
    println!("  exclusive push (Rc::get_mut, count==1) {} elements: {} ms", N, t);

    let t = bench_b_cow_with_live_clone(N);
    println!("  COW push with live clone {} times: {} ms\n", N/STEP, t);

    println!("Notes:");
    println!("  - Rust &[T] slicing has zero runtime cost (compile-time borrow).");
    println!("    Cicili Slice clones an Rc (increments count): small but nonzero overhead.");
    println!("  - Rust Rc::get_mut is the runtime analog of Cicili's count==1 exclusive guard.");
    println!("  - Rust RefCell::borrow runtime check mirrors Cicili Rc liveness validation.");
    println!("  - Rust COW (to_vec) and Cicili COW (copySlice) both allocate + memcpy.");
}
