# `benchmark` — getting a number worth quoting

Every timing in this repository was measured on one laptop that was doing other work at the
time. That is not good enough for the claims built on it, and the evidence is in the
repository's own history: `example/mnist_conv`, the same binary over the same data, has
been observed at **42.6 s** and at **57.6 s** in different sessions, and the MLP at 11.8 s
and 13.5 s. A 14–35% swing from machine state alone is larger than most of the differences
the tables report.

[bench.py](bench.py) exists so that the next set of numbers does not have that problem.

```sh
python3 benchmark/bench.py --suite torch --repeats 5
```

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
| the three built examples | `sbcl --script cicili.lisp --release ./example/mnist-dsl.cicili`, and the same for `tabular` and `mnist-conv` |
| `/usr/local/opt/pytorch/libexec/bin/python3` | the interpreter shipping **the same libtorch** the Cicili side links — two different PyTorch builds would be measuring the builds |
| `$MNIST_DIR` | the four idx files, default `~/mnist-data` |
| `$TABULAR_CSV` | `california.csv`, eight features and a target per line, default `~/tabular-data/california.csv` |

## What is not in it yet

The `vector`, `btree` and bounds-check tables in the [root README](../README.md) are still
run by hand, and they compare against Rust rather than Python, so they need `cargo` and a
second set of prerequisite checks. `--suite` is where those go.
