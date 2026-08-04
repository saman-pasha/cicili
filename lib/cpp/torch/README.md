# `lib/cpp/torch` — libtorch from Cicili

Two layers over PyTorch's C++ library:

* **declarations** (`tensor`, `nn`, `optim`) that tell Cicili's type inference what a
  `torch::Tensor` is. They emit nothing; the real declarations come from the real header.
* **a DSL** (`dsl`) in which a network is *described* rather than constructed, and which
  expands to the struct and the training loop you would otherwise write by hand.

```lisp
(network Classifier
  (input   784)
  (dense   256 relu)
  (dense   128 relu)
  (dense    10 log-softmax))

(train Classifier
  (data      xs ys)   (test   xt yt)
  (epochs    15)      (batch  100)
  (optimiser adam 0.001)
  (loss      nll)     (metric accuracy))
```

That is a complete model and its training. It compiles to C++, links libtorch, and reaches
**97.8%** on MNIST.

---

## Contents

| file | what is in it |
|---|---|
| [torch.cicili](torch.cicili) | the aggregator — import this |
| [tensor.cicili](tensor.cicili) | `torch::Tensor`, the factories, the free functions, `dims` |
| [nn.cicili](nn.cicili) | `torch::nn::Module` and the layers |
| [optim.cicili](optim.cicili) | the optimisers |
| [dsl.cicili](dsl.cicili) | `network`, `train`, and the metrics |

---

## Getting started

A target needs three things: to be C++, to include the real header, and to import these
declarations **inside** the target — `:cpp` is a property of the target, and a C++ binding
uses clauses that are errors in a C one.

```lisp
(source "app.cpp"
  (make :cpp #t
        :compile ("-std=c++17" "-O3" "-Wno-c++20-extensions"
                  "-I/usr/local/opt/pytorch/include"
                  "-I/usr/local/opt/pytorch/include/torch/csrc/api/include"
                  "-c" "app.cpp")
        :link ("-lapp.o"
               "-L/usr/local/opt/pytorch/lib" "-ltorch" "-ltorch_cpu" "-lc10"
               "-o" "app"))

  (include <torch/torch.h>)
  (import "lib/cpp/torch/torch.cicili")
  …)
```

The paths are wherever libtorch is. On macOS `brew install pytorch` puts the C++ frontend
under `include/torch/csrc/api/include`, which is why there are two `-I` flags.
`-Wno-c++20-extensions` is needed because libtorch's own headers use a C++20 feature that
`-Werror` would otherwise reject.

---

## The DSL

### `network`

```lisp
(network NAME
  <input layer>
  <layer> …)
```

Emits a `struct NAME : public torch::nn::Module` with one registered module per layer and a
`forward` that chains them. **The shape flows down the list**: each layer's input is the
previous layer's output, worked out at expansion time, so a mismatch cannot be written.

| layer | takes | leaves | emits |
|---|---|---|---|
| `(input N)` | — | flat `N` | nothing; declares the input width |
| `(image C H W)` | — | image `C×H×W` | nothing; declares the input picture |
| `(dense N [act])` | flat `W` | flat `N` | `torch::nn::Linear(W, N)` |
| `(conv F K [act])` | image `C×H×W` | image `F×(H−K+1)×(W−K+1)` | `torch::nn::Conv2d(Conv2dOptions(C,F,K))` |
| `(pool K)` | image `C×H×W` | image `C×⌊H/K⌋×⌊W/K⌋` | `torch::max_pool2d(x, {K,K})` |
| `(flatten)` | image `C×H×W` | flat `C·H·W` | `x.flatten(1)` |
| `(dropout P)` | either | unchanged | `torch::nn::Dropout(P)` |
| `(norm)` | image `C×H×W` | unchanged | `torch::nn::BatchNorm2d(C)` |
| `(relu)` etc. | either | unchanged | the activation alone |

Activations, wherever one is taken: `relu` `tanh` `sigmoid` `softmax` `log-softmax` `none`.
Omitting it is `none`, which is what a regression head wants.

`conv` is stride 1 with no padding — hence the `−K+1`. `pool` is max pooling with stride
equal to the kernel.

### `train`

```lisp
(train NAME
  (data      X Y)          ; required
  (test      X Y)          ; optional; without it there is no metric to report
  (epochs    N)            ; default 10
  (batch     N)            ; default 100
  (optimiser adam 0.001)   ; adam | sgd, default adam 0.001
  (loss      nll)          ; nll | mse, default nll
  (metric    accuracy)     ; accuracy | rmse | mae, default accuracy
  (quiet))                 ; optional; print nothing
```

Emits the loop and answers the final metric as a `double`. Every clause but `data` is
optional and order does not matter.

Batches are consecutive slices — `narrow` — so **the data is not shuffled for you**. Shuffle
before you split if the rows are ordered, as [tabular](../../../example/tabular.cicili)
does; MNIST does not need it.

Each metric pass runs under a `NoGradGuard` **and in eval mode**, so dropout and batch-norm
behave the way they should when measuring. That is not a detail: leaving the conv net in
training mode for its evaluation cost half a point of accuracy before the DSL did it.

### Metrics

| metric | for | computes |
|---|---|---|
| `accuracy` | classification | share of rows whose `argmax` is the label |
| `rmse` | regression | `sqrt(mean((pred − y)²))`, in the units of the target |
| `mae` | regression | `mean(abs(pred − y))`, less swayed by one bad row |

Reporting accuracy for a regression is how a DSL admits it was built for one example, which
is why these exist.

---

## The declarations

They emit nothing. They exist so `($ t sizes)` resolves, a mistyped member is an error
naming the member, and `auto` knows what it holds.

**A name you have not declared still works.** `torch::whatever` is emitted as written and
C++ decides whether it exists. Declaring it buys *inference*, not *permission* — so an
incomplete binding is a much smaller problem than a wrong one, and these files are a useful
subset rather than a guess at everything.

Two shapes worth knowing:

* **Member templates.** `t.item<float>()` is `($ t (t<> item float))`. A template-id is a
  name, so each instantiation is declared with its own return type — `item<float>`,
  `item<double>`, `item<i64>`, `item<i32>`, `item<bool>`.
* **`dims`, and why it is a macro.** `torch::zeros({2,3})` is `(torch::zeros (dims 2 3))`.
  `dims` **cannot be a function**: `c10::IntArrayRef` is a non-owning span, so one returned
  from a helper points at an initializer list that died with the return statement. That
  mistake compiles, links, and then asks the allocator for 1125615330997568 bytes — which
  is how it was found.

**No overloading.** Cicili has one signature per name, so where libtorch overloads — and it
overloads heavily — the most-used form is declared and the rest go through the undeclared
path, working but without inference.

---

## Examples

All four are in [`example/`](../../../example) and all four run against real libtorch. The
paths in their `make` forms are one machine's.

| file | what it shows |
|---|---|
| [torch.cicili](../../../example/torch.cicili) | the declarations, one assertion each — the conformance check |
| [mnist.cicili](../../../example/mnist.cicili) | MNIST **by hand**: the struct, the loop, no DSL |
| [mnist-dsl.cicili](../../../example/mnist-dsl.cicili) | the same thing in the DSL — 5 lines against 23, identical numbers |
| [mnist-conv.cicili](../../../example/mnist-conv.cicili) | a convolutional net: `image`, `conv`, `pool`, `flatten`, `dropout` |
| [tabular.cicili](../../../example/tabular.cicili) | regression on California housing: `mse`, `rmse`, shuffling, standardisation |

Data lives outside the working tree, because a build directory is not where a dataset should
have to survive:

```bash
MNIST_DIR=~/mnist-data ./example/mnist_dsl
TABULAR_CSV=~/tabular-data/california.csv ./example/tabular
```

Both fall back to generated data of the same shape and say so, so every example runs with
nothing downloaded.

---

## Measured against Python

The same model, optimiser, learning rate, batch size, epoch count, data and preprocessing,
written in PyTorch — [`example/python/`](../../../example/python) — and run against **the
same libtorch 2.13**, so this compares the two front ends and not two libraries.

Timing covers **the training batches only** in both; a metric pass over the held-out set is
reporting, not training.

| example | Cicili | Python | |
|---|---|---|---|
| **MNIST, MLP** 784-256-128-10, Adam 1e-3, batch 100, 15 epochs | 0.9784 · **12.9 s** | 0.9785 · 18.5 s | **1.43× faster** |
| **California housing** 8-64-32-1, Adam 5e-3, batch 128, 30 epochs | 0.5233 rmse · **1.8 s** | 0.5381 rmse · 3.3 s | **1.83× faster** |
| **MNIST, conv** 16c3-pool-32c3-pool-drop-10, Adam 1e-3, batch 100, 5 epochs | 0.9869 · 45.9 s | 0.9866 · 45.4 s | **level** |

**Read the third row as carefully as the first two.** A conv net spends nearly all its time
inside libtorch's kernels, which are the same code in both — so there is nothing for a
front end to win, and Cicili does not. The MLP and the tabular model run many small batches,
where per-batch interpreter overhead is a real share of the work, and that is the whole of
the difference. The gap is Python's loop, not PyTorch's maths.

The accuracies agree to within run-to-run noise, which is the point: it is the same
computation. The tabular RMSE differs by 0.015 because the two shuffle with different
generators, so the split is not identical.

Reproduce with:

```bash
cd example/python
MNIST_DIR=~/mnist-data /usr/local/opt/pytorch/libexec/bin/python3 mnist_mlp.py
```

---

## What is not here

Honest gaps, in roughly the order they would be missed:

* **No shuffling inside `train`.** Shuffle before you split.
* **No learning-rate schedule, no early stopping, no checkpointing.**
* **No validation split** — `(test …)` is the held-out set and is reported every epoch,
  which is fine for watching and wrong for choosing.
* **Layers stop at** `dense` `conv` `pool` `flatten` `dropout` `norm`. No recurrent layers,
  no attention, no residual connections — the DSL is a straight chain, and a network with
  branches is written as a plain Cicili struct against the declarations.
* **No GPU.** `torch::Device` is declared and nothing uses it.

Each is a few lines of the same macro. They are absent because nothing has needed them yet,
and adding them driven by an example is what kept the DSL from being fitted to MNIST — the
regression found two bugs the classifier could not, and the conv net found a third.
