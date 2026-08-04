"""The Python equal of example/tabular.cicili: 8-64-32-1, Adam 5e-3, batch 128,
30 epochs, same shuffle-then-standardise-on-train-only preparation."""
import torch, torch.nn as nn, torch.nn.functional as F, numpy as np, time
from common import california

torch.manual_seed(1)
X, Y = california()
rng = np.random.default_rng(12345)
perm = rng.permutation(len(X)); X, Y = X[perm], Y[perm]
ntrain = 16512
mu, sd = X[:ntrain].mean(0), X[:ntrain].std(0); sd[sd < 1e-6] = 1.0
X = (X - mu) / sd

X = torch.from_numpy(X); Y = torch.from_numpy(Y)
xtr, ytr, xte, yte = X[:ntrain], Y[:ntrain], X[ntrain:], Y[ntrain:]

net = nn.Sequential(nn.Linear(8, 64), nn.ReLU(), nn.Linear(64, 32), nn.ReLU(), nn.Linear(32, 1))
opt = torch.optim.Adam(net.parameters(), lr=0.005)
sched = torch.optim.lr_scheduler.StepLR(opt, step_size=10, gamma=0.5)

def rmse():
    with torch.no_grad():
        return ((net(xte) - yte) ** 2).mean().sqrt().item()

t0 = time.perf_counter()
for e in range(30):
    perm = torch.randperm(len(xtr))
    for i in range(0, len(xtr) - 127, 128):
        idx = perm[i:i+128]
        opt.zero_grad()
        loss = F.mse_loss(net(xtr[idx]), ytr[idx])
        loss.backward(); opt.step()
    sched.step()
train_s = time.perf_counter() - t0
base = ((yte - ytr.mean()) ** 2).mean().sqrt().item()
print(f"final rmse: {rmse():.4f}   (mean predictor {base:.4f})   train {train_s:.1f}s")
