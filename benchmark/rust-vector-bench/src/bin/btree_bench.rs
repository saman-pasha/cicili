// Rust side of the lib/std btree comparison.
//
// The Cicili side is benchmark/std-btree-bench.cicili; the two are meant to be
// read together. Run with:
//
//     cargo build --release && ./target/release/btree_bench
//
// Matched deliberately:
//
//   * NODE SIZE. BTreeMap is B=6 -- up to 2B-1 = 11 pairs per node -- and the
//     Cicili side is (decl-btree int int 6), Cormen's t=6, which is the same
//     11. A smaller t would give Cicili deeper trees and would not be the data
//     structure being compared.
//   * THE SAME KEYS IN THE SAME ORDER: identical xorshift, identical mask, so
//     both see the same sequence including the same duplicates.
//
// NOT identical, and worth knowing: Cicili's insert REFUSES a duplicate and
// reports it, BTreeMap's overwrites and hands back the old value. Neither is
// doing more work than the other -- one Either is built either way, one Option
// returned either way -- but the semantics differ and the row should be read
// with that in mind.

use std::collections::BTreeMap;
use std::hint::black_box;
use std::time::Instant;

const N: usize = 1_000_000;
const MASK: u32 = 1_048_575; // keys are & (2^20 - 1)

struct Rand(u32);
impl Rand {
    fn new() -> Self { Rand(2463534242) }
    fn next(&mut self) -> u32 {
        self.0 ^= self.0 << 13;
        self.0 ^= self.0 >> 17;
        self.0 ^= self.0 << 5;
        self.0
    }
}

fn main() {
    println!("Rust BTreeMap<i32,i32> — {} operations per row, B=6 (11 pairs a node)\n", N);
    let mut map: BTreeMap<i32, i32> = BTreeMap::new();

    // ---- insert ----------------------------------------------------
    let mut r = Rand::new();
    let mut ok: i64 = 0;
    let t0 = Instant::now();
    for _ in 0..N {
        let key = (r.next() & MASK) as i32;
        if map.insert(key, key + 1).is_none() {
            ok += map.len() as i64;
        }
    }
    let e = t0.elapsed().as_millis();
    println!("  (insert checksum: {})", ok);
    println!("  insert {} keys: {} ms", N, e);
    println!("  distinct keys stored: {}", map.len());

    // ---- search ----------------------------------------------------
    let mut r = Rand::new();
    let mut hit: i64 = 0;
    let t0 = Instant::now();
    for _ in 0..N {
        let key = (r.next() & MASK) as i32;
        if let Some(v) = map.get(&key) {
            hit += *v as i64;
        }
    }
    let e = t0.elapsed().as_millis();
    println!("  (search checksum: {})", hit);
    println!("  search {} keys: {} ms", N, e);

    // ---- traverse --------------------------------------------------
    let t0 = Instant::now();
    let mut sink: i64 = 0;
    for (_, v) in map.iter() {
        sink += *v as i64;
    }
    let e = t0.elapsed().as_millis();
    black_box(&sink);
    println!("  (traverse checksum: {})", sink);
    println!("  traverse in order: {} ms", e);

    // ---- delete ----------------------------------------------------
    let mut r = Rand::new();
    let mut gone: i64 = 0;
    let t0 = Instant::now();
    for _ in 0..N {
        let key = (r.next() & MASK) as i32;
        if map.remove(&key).is_some() {
            gone += 1;
        }
    }
    let e = t0.elapsed().as_millis();
    println!("  (delete checksum: {})", gone);
    println!("  delete {} keys: {} ms", N, e);
    println!("  left after delete: {}", map.len());
}
