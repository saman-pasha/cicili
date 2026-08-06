# `benchmark` — getting a number worth quoting

Every timing in this repository was measured on one laptop that was doing other work at the
time. That is not good enough for the claims built on it. Same binary, same data, different
sessions:

| | | |
|---|---|---|
| `example/mnist_conv` | 42.6 s and 57.6 s | 35% |
| `example/mnist_dsl` | 11.8 s and 13.5 s | 14% |
| `std_vec_bench` construct | 97 ms and 158 ms | 63% |

Those swings are larger than most of the differences the tables report — and one row has
already flipped its winner on a re-run: the owned `construct` row reads Cicili 105 ms /
Rust 100 ms in the README and Cicili 88 ms / Rust 96 ms when measured again.

[bench.py](bench.py) exists so that the next set of numbers does not have that problem.

```sh
python3 benchmark/bench.py --suite all --repeats 7
```

Suites: `torch` (the libtorch examples against PyTorch), `vector` and `btree` (against
Rust), or `all`. Anything whose prerequisites are missing is skipped by name rather than
half-run, and the output says the run was incomplete.

## The rule: a benchmark is built with `--release` or not at all

The benchmark targets carry **`:compile #t`** — no flags of their own, deliberately, so that
what they measure is what `--release` *means* rather than a hand-tuned per-file list. The
cost of that choice is that **without `--release` they compile at `-g -O0`**, and the binary
still builds, still runs, still prints milliseconds, and is worth nothing. Nothing else in
the pipeline objects.

That is closed in two places, because one is not enough:

* [release-only.cicili](release-only.cicili) makes it a **compile-time error**. Each
  benchmark source calls `(release-only)`, which reads `CICILI::*RELEASE*` at macroexpansion
  and refuses with the command to use.
* **`bench.py` rebuilds everything with `--release` before timing anything.** The guard
  above cannot catch a *stale* binary from an earlier build, because in that case nothing
  is compiled at all. Rebuilding is what closes that. `--no-build` exists only for
  iterating on the script, and stamps *"whatever was already on disk"* into the output.

The release flags themselves, from [config.lisp](../config.lisp):

| | |
|---|---|
| **C** | `-O3 -falign-loops=32` |
| **C++** | `-O3` |

`-falign-loops=32` is C-only: a C++ target here is a libtorch target, where the loops that
matter are inside the library and were aligned when the library was built.

## What it does that running the examples by hand does not

* **Refuses a busy machine.** It reads the one-minute load average per core and stops above
  0.30. `--force` measures anyway and stamps a warning into the output, so a number taken
  under load cannot be quoted as though it were not.
* **Records the machine in the output.** CPU, cores, OS, compiler versions, and
  `$BENCH_HOST` / `$CLOUD_INSTANCE_TYPE` if set. A timing separated from its conditions is
  not a measurement.
* **Alternates which side runs first.** A machine warms up over a run, so always measuring
  one side first hands it the cold cache every time — a bias, not noise, and it does not
  average out.
* **Reports median, minimum and spread**, so run-to-run variation sits next to the number
  instead of behind it.
* **Cross-checks the checksums both sides print.** If Cicili and Rust disagree on what the
  work computed, the benchmark has stopped comparing the same thing, and no amount of
  careful timing fixes that. The rows where the two legitimately differ — `construct` and
  `append` accumulate a buffer address on the Cicili side so the compiler cannot fold the
  loop away — are excluded by name rather than ignored silently.
* **Names each row on each side.** The two do not use the same labels — Cicili's is
  `construct (new^vector, …)` and Rust's is `construct (to_vec, …)` — so matching them by
  position would survive a row being added to one side and quietly compare the wrong pair.
* **Flags non-determinism.** If a metric is not identical across repeats, the row is marked
  and the metric is one draw rather than a result.

It parses the training time each example prints — **the batch loops only**, not process
wall-clock — so it measures the same thing the tables quote, without data loading or
process start.

## Where to run it

A quiet, dedicated machine. In practice that means:

* **bare metal, or a dedicated instance** — a shared vCPU has a neighbour you cannot see,
  and steals time in bursts that look exactly like a real difference
* **nothing else on it**, including no editor, no browser, no sync daemon
* **fixed clocks if the provider allows it** — turbo and thermal throttling over a 45-second
  conv run are a real effect on a laptop and a smaller one on a server

Set `BENCH_HOST` to the instance type so the output says what it was.

```sh
BENCH_HOST=c7i.4xlarge python3 benchmark/bench.py --repeats 7
```

## Prerequisites

It checks all of these and names what is missing rather than half-running:

| | |
|---|---|
Only what the script cannot produce itself — it builds every binary.

| | for | |
|---|---|---|
| `sbcl` | all | to build the Cicili side |
| `cargo` | `vector`, `btree` | to build the Rust side |
| `/usr/local/opt/pytorch/libexec/bin/python3` | `torch` | the interpreter shipping **the same libtorch** the Cicili side links — two different PyTorch builds would be measuring the builds |
| `$MNIST_DIR` | `torch` | the four idx files, default `~/mnist-data` |
| `$TABULAR_CSV` | `torch` | `california.csv`, eight features and a target per line, default `~/tabular-data/california.csv` |

## What is not in it yet

The **bounds-check** table in the [root README](../README.md) — check elided against check
executed — comes from a third pair of binaries and is still run by hand.

