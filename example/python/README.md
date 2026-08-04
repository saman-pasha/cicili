# The Python side of the comparison

One script per Cicili example, written to be **read beside it**. Same architecture, same
optimiser and learning rate, same batch size, same epoch count, same shuffling and
schedule, same data and preprocessing — and the same libtorch, because the interpreter
these run under ships with the C++ library the Cicili examples link:

    /usr/local/opt/pytorch/libexec/bin/python3

That last point is the one that makes the comparison mean anything. Two different PyTorch
builds would be measuring the builds.

| script | its Cicili counterpart |
|---|---|
| [mnist_mlp.py](mnist_mlp.py) | [example/mnist-dsl.cicili](../mnist-dsl.cicili) |
| [tabular.py](tabular.py) | [example/tabular.cicili](../tabular.cicili) |
| [mnist_conv.py](mnist_conv.py) | [example/mnist-conv.cicili](../mnist-conv.cicili) |
| [common.py](common.py) | the `read_idx` / `read_csv` functions in each `.cicili` |

Each prints the final metric and the seconds spent **in the training batches**. A metric
pass over the held-out set is reporting rather than training, and is outside the clock on
both sides — timing it would make the number depend on how often you asked to be told.

```bash
export MNIST_DIR=~/mnist-data TABULAR_CSV=~/tabular-data/california.csv
/usr/local/opt/pytorch/libexec/bin/python3 mnist_mlp.py
```

Results and what they do and do not show:
[lib/cpp/torch/README.md](../../lib/cpp/torch/README.md#measured-against-python).
