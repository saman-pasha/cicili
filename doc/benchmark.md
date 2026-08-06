# Word count — Cicili vs Haskell

> **STATUS: WITHDRAWN, PENDING RE-MEASUREMENT.** The numbers below were taken
> without `--release`, on an unnamed machine, and they do not support the
> conclusion that was drawn from them. They are kept here as a record of what
> was run, not as a result. **Do not cite them.** What it would take to make
> them a measurement is at the bottom.
>
> The benchmarks that *are* current are in [the README](../README.md#benchmarks)
> — Rust vs Cicili on vector and rc — and they carry their own provenance.

## The sample

A word-counting program which does the same task 1,000,000 times, focused on
`List` processing and `Either` error handling.

 - Opens a temporary file
 - Writes many short lines to it
 - Reads the content back as many chunks
 - Iterates over characters and splits them on space and newline
 - Counts the pieces and prints the total

The two implementations are close but not identical.

* Cicili: [benchmark/word-count-bench.cicili](../benchmark/word-count-bench.cicili)
* Haskell: [benchmark/word_count.hs](../benchmark/word_count.hs)
* The generated C: [benchmark/word_count_bench.c](../benchmark/word_count_bench.c)

Reading the generated C is the point of publishing it: an expressive language
that compiles to something you cannot read is not making a checkable claim.

## Why this is withdrawn

Four reasons, in order of how much they matter.

**1. It was not built with `--release`.** The transcript below shows `gcc -O`,
which is what the configuration produced at the time. It produces neither of
today's flag sets: without `--release` a benchmark target compiles at `-g -O0`,
and with it at `-O3 -falign-loops=32`. So the binary that produced these
seconds cannot be rebuilt by any current invocation, and there is no way to say
which of the two it should be compared against. `benchmark/word-count-bench.cicili`
now carries `(release-only)`, so this particular mistake cannot be repeated —
the build refuses rather than producing a number.

**2. The difference is inside the noise, and the conclusion was not.** The two
sets overlap: Cicili 272–284 s, Haskell 277–280 s. Four runs each, no variance
reported, no machine named. The README's own note on the Rust benchmarks records
a **14–35% swing between runs on the same laptop**; a claimed 1% difference is
an order of magnitude below that. What was written instead — "objectively
faster", "landmark result" — was an LLM's summary of the table, pasted in and
left standing as a finding. The data cannot carry it. It cannot carry
"performance parity" either: what these runs show is that no difference was
demonstrated, which is a weaker and different statement.

**3. No machine.** gcc 15.2.0, GHC 9.12.2 and SBCL 2.5.10 are named; the CPU is
not. A timing separated from its conditions is not a measurement, which is the
rule the rest of the benchmarks in this repository were brought into line with
and this file was missed by.

**4. The comparison was not like for like.** Cicili's side was built through
whatever `:compile #t` meant at the time; Haskell's was `ghc -O`. Whether that
favours either side is unknown, which is the problem.

## What was run

Kept verbatim, because a withdrawn measurement is still a record of what
happened, and the transcript is what makes points 1 and 4 above checkable
rather than assertions.

```
gcc (Homebrew GCC 15.2.0) 15.2.0
glibtool (GNU libtool) 2.5.4
SBCL 2.5.10
The Glorious Glasgow Haskell Compilation System, version 9.12.2

sbcl --script cicili.lisp --separate ./benchmark/word-count-bench.cicili

glibtool: compile:  gcc -O -Wno-incompatible-pointer-types -c word_count_bench.c -fno-common -DPIC -o .libs/word_count_bench.o
glibtool: link: gcc -O word_count_bench.o -o word_count_bench -L/.../cicili/ -lhaskell.o

ghc -O ./benchmark/word_count.hs
```

Seconds elapsed, four runs each. The second Cicili set is after replacing every
indirect vtable dispatch in the `List` implementation — `(\.* function
instance)` — with a direct static call, `(<> function type)`, on the hot paths
(`next`, `nth`, `len`, `drop`, `take`, `push`, `append`).

| | run 1 | run 2 | run 3 | run 4 | mean |
|---|---|---|---|---|---|
| Cicili, vtable dispatch | 284 | 284 | 275 | 284 | 281.75 |
| Cicili, direct calls | 281 | 274 | 272 | 276 | 275.75 |
| Haskell, GHC 9.12.2 `-O` | 280 | 278 | 277 | 278 | 278.25 |

The one thing here that is worth keeping is the **middle row against the top
row**: same machine, same session, same everything but the change. Removing the
vtable indirection moved the mean from 281.75 s to 275.75 s, about 2%. That is
still a small effect measured four times without a variance, so it is a
direction rather than a number — but it is the only comparison on this page
where the two sides differ in exactly one known way.

## What would make this a measurement

Neither half can be rebuilt in this repository as it stands:

* **The Cicili side does not build.** The Haskell prelude load is commented out
  in `cicili.lisp:24` while `std` is the focus, and `word-count-bench.cicili`
  depends on it. `test/haskell` is skipped by `test/run.sh` for the same reason.
* **GHC is not part of this project's toolchain**, so the other side needs an
  environment that has it.

To redo it properly:

1. Restore the Haskell prelude, or port the sample to `lib/std`.
2. Build with `--release` on both sides:
   `sbcl --script cicili.lisp --release ./benchmark/word-count-bench.cicili`
3. Name the CPU, the OS and every compiler version.
4. Run enough times to report a spread, not a mean — the README quotes 14–35%
   run-to-run on this class of hardware, so anything under that is noise.
5. State what differs between the two implementations, since they are not the
   same program.

Until then this page has a method and a transcript, and no result.
