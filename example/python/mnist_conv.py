"""The Python equal of example/mnist-conv.cicili: conv16-pool-conv32-pool-
flatten-dropout-dense10, Adam 1e-3, batch 100, 5 epochs."""
import torch, torch.nn as nn, torch.nn.functional as F, numpy as np, time
from common import mnist

torch.manual_seed(1)
xs, ys = mnist("train"); xt, yt = mnist("test")
xs = torch.from_numpy(xs).view(-1, 1, 28, 28); ys = torch.from_numpy(ys)
xt = torch.from_numpy(xt).view(-1, 1, 28, 28); yt = torch.from_numpy(yt)

class Net(nn.Module):
    def __init__(self):
        super().__init__()
        self.c1 = nn.Conv2d(1, 16, 3); self.c2 = nn.Conv2d(16, 32, 3)
        self.dp = nn.Dropout(0.25);    self.fc = nn.Linear(800, 10)
    def forward(self, x):
        x = F.max_pool2d(F.relu(self.c1(x)), 2)
        x = F.max_pool2d(F.relu(self.c2(x)), 2)
        return F.log_softmax(self.fc(self.dp(x.flatten(1))), dim=1)

net = Net(); opt = torch.optim.Adam(net.parameters(), lr=0.001)

def accuracy():
    net.eval()
    with torch.no_grad():
        a = (net(xt).argmax(1) == yt).sum().item() / yt.numel()
    net.train(); return a

t0 = time.perf_counter()
for e in range(5):
    perm = torch.randperm(len(xs))
    for i in range(0, len(xs) - 99, 100):
        idx = perm[i:i+100]
        opt.zero_grad()
        loss = F.nll_loss(net(xs[idx]), ys[idx])
        loss.backward(); opt.step()
train_s = time.perf_counter() - t0
print(f"final accuracy: {accuracy():.4f}   train {train_s:.1f}s")
