"""The Python equal of example/mnist-dsl.cicili: 784-256-128-10, Adam 1e-3,
batch 100, 15 epochs, same data and normalisation."""
import torch, torch.nn as nn, torch.nn.functional as F, numpy as np, time
from common import mnist

torch.manual_seed(1)
xs, ys = mnist("train"); xt, yt = mnist("test")
xs = torch.from_numpy(xs); ys = torch.from_numpy(ys)
xt = torch.from_numpy(xt); yt = torch.from_numpy(yt)

net = nn.Sequential(nn.Linear(784, 256), nn.ReLU(),
                    nn.Linear(256, 128), nn.ReLU(),
                    nn.Linear(128, 10),  nn.LogSoftmax(dim=1))
opt = torch.optim.Adam(net.parameters(), lr=0.001)

def accuracy():
    with torch.no_grad():
        return (net(xt).argmax(1) == yt).sum().item() / yt.numel()

t0 = time.perf_counter()
for e in range(15):
    for i in range(0, len(xs) - 99, 100):
        opt.zero_grad()
        loss = F.nll_loss(net(xs[i:i+100]), ys[i:i+100])
        loss.backward(); opt.step()
train_s = time.perf_counter() - t0
print(f"final accuracy: {accuracy():.4f}   train {train_s:.1f}s")
