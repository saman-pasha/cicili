"""Loading shared by the comparison scripts. Deliberately identical in shape to
the Cicili examples: same files, same normalisation, same split, same order."""
import os, numpy as np

def mnist(kind):
    d = os.environ.get("MNIST_DIR", "data")
    img = os.path.join(d, ("train-images-idx3-ubyte" if kind == "train" else "t10k-images-idx3-ubyte"))
    lab = os.path.join(d, ("train-labels-idx1-ubyte" if kind == "train" else "t10k-labels-idx1-ubyte"))
    with open(img, "rb") as f:
        f.read(16)
        x = np.frombuffer(f.read(), dtype=np.uint8).astype(np.float32) / 255.0
    with open(lab, "rb") as f:
        f.read(8)
        y = np.frombuffer(f.read(), dtype=np.uint8).astype(np.int64)
    x = x.reshape(-1, 784)
    x = (x - 0.1307) / 0.3081
    return x, y

def california():
    p = os.environ.get("TABULAR_CSV", os.path.expanduser("~/tabular-data/california.csv"))
    a = np.loadtxt(p, delimiter=",", dtype=np.float32)
    return a[:, :8], a[:, 8:9]
