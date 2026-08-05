#!/usr/bin/env python3
"""Run the published comparisons under conditions worth quoting.

    python3 benchmark/bench.py --suite torch --repeats 5

WHY THIS EXISTS. Every timing in the READMEs was measured on a laptop that was
doing other things at the time, and it shows: example/mnist_conv, the same
binary over the same data, has been observed at 42.6 s and at 57.6 s in
different sessions. A 35% swing from machine state alone is larger than every
speed difference those tables claim. Interleaving the two sides protects the
RATIO, which is why the tables were built that way, but nothing protects the
absolute seconds except a machine that is not busy.

So this script does three things a hand-run does not:

  * REFUSES to measure a busy machine, rather than quietly measuring one
  * records what it ran on, in the output, so a number cannot be separated
    from its conditions
  * interleaves the two sides and reports median, minimum and spread, so the
    run-to-run variation is visible next to the number instead of hidden by it

It parses the training time each example prints -- the batch loops only, not
process wall-clock -- so it measures exactly what the tables quote.
"""

import argparse
import os
import platform
import re
import shutil
import statistics
import subprocess
import sys
import time

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
PYTORCH_PY = "/usr/local/opt/pytorch/libexec/bin/python3"

# Each pair: (label, cicili argv, python argv, the metric's name)
TORCH_PAIRS = [
    ("MNIST, MLP", ["./example/mnist_dsl"], ["mnist_mlp.py"], "accuracy"),
    ("California housing", ["./example/tabular"], ["tabular.py"], "rmse"),
    ("MNIST, conv", ["./example/mnist_conv"], ["mnist_conv.py"], "accuracy"),
]

TIME_RE = re.compile(r"(?:trained in|train)\s+([0-9.]+)\s*s")
METRIC_RE = re.compile(r"final (?:accuracy|held-out rmse|rmse):\s*([0-9.]+)")


# ---------------------------------------------------------------- environment


def environment():
    """What the numbers are numbers *on*. Printed with every result."""
    out = {
        "platform": platform.platform(),
        "machine": platform.machine(),
        "cores": os.cpu_count(),
        "python": platform.python_version(),
    }
    if sys.platform == "darwin":
        for key, sysctl in (("cpu", "machdep.cpu.brand_string"),
                            ("memory", "hw.memsize")):
            try:
                out[key] = subprocess.run(["sysctl", "-n", sysctl], check=True,
                                          capture_output=True, text=True).stdout.strip()
            except Exception:  # noqa: BLE001
                pass
    else:
        try:
            with open("/proc/cpuinfo") as f:
                for line in f:
                    if line.startswith("model name"):
                        out["cpu"] = line.split(":", 1)[1].strip()
                        break
        except OSError:
            pass
    # a cloud instance is worth naming: a shared vCPU is not a quiet machine
    # either, and the numbers should say which kind they came from
    for var in ("CLOUD_INSTANCE_TYPE", "AWS_INSTANCE_TYPE", "BENCH_HOST"):
        if os.environ.get(var):
            out["host"] = f"{var}={os.environ[var]}"
    for tool in ("clang", "sbcl"):
        path = shutil.which(tool)
        if path:
            try:
                v = subprocess.run([path, "--version"], capture_output=True,
                                   text=True).stdout.splitlines()[0]
                out[tool] = v.strip()
            except Exception:  # noqa: BLE001
                pass
    return out


def load_ratio():
    """One-minute load average per core. Above ~0.3 is not a quiet machine."""
    try:
        return os.getloadavg()[0] / (os.cpu_count() or 1)
    except (OSError, AttributeError):
        return None


def require_quiet(limit, force):
    r = load_ratio()
    if r is None:
        print("!! cannot read load average on this platform -- not gating")
        return
    print(f"load average per core: {r:.2f}")
    if r <= limit:
        return
    msg = (f"machine is busy ({r:.2f} per core, limit {limit:.2f}).\n"
           "   Timings taken now are not worth publishing -- close what is running,\n"
           "   or pass --force to measure anyway and have it said in the output.")
    if not force:
        sys.exit("!! " + msg)
    print("!! " + msg)


# ---------------------------------------------------------------- running


def run(argv, cwd, env):
    t = time.perf_counter()
    p = subprocess.run(argv, cwd=cwd, env=env, capture_output=True, text=True)
    wall = time.perf_counter() - t
    if p.returncode != 0:
        raise RuntimeError(f"{' '.join(argv)} exited {p.returncode}\n{p.stderr[-2000:]}")
    text = p.stdout
    tm = TIME_RE.search(text)
    mm = METRIC_RE.search(text)
    if not tm:
        raise RuntimeError(f"{' '.join(argv)} printed no training time\n{text[-2000:]}")
    return float(tm.group(1)), (float(mm.group(1)) if mm else None), wall


def summarise(xs):
    lo, med = min(xs), statistics.median(xs)
    spread = (max(xs) - lo) / lo * 100 if lo else 0.0
    return lo, med, spread


# ---------------------------------------------------------------- prerequisites


def check_torch_prereqs(env):
    missing = []
    for pair in TORCH_PAIRS:
        exe = os.path.join(ROOT, pair[1][0])
        if not os.path.exists(exe):
            missing.append(f"{pair[1][0]} -- build it: sbcl --script cicili.lisp "
                           f"--release ./example/<name>.cicili")
    if not os.path.exists(PYTORCH_PY):
        missing.append(f"{PYTORCH_PY} -- the interpreter that ships the same libtorch "
                       "the Cicili side links. Comparing against a different PyTorch "
                       "build measures the builds.")
    if not env.get("MNIST_DIR") or not os.path.isdir(env["MNIST_DIR"]):
        missing.append("$MNIST_DIR -- the four idx files")
    if not env.get("TABULAR_CSV") or not os.path.exists(env["TABULAR_CSV"]):
        missing.append("$TABULAR_CSV -- california.csv, 8 features and a target per line")
    return missing


# ---------------------------------------------------------------- the suite


def suite_torch(repeats, env):
    rows = []
    for label, cic, py, metric in TORCH_PAIRS:
        print(f"\n{label}: {repeats} interleaved pairs")
        ct, pt, cm, pm = [], [], [], []
        for i in range(repeats):
            # ALTERNATE which side goes first. A machine warms up over a run,
            # and always measuring one side first hands it the cold cache every
            # time -- which is a bias, not noise, and does not average out.
            order = [("cicili", cic), ("python", py)]
            if i % 2:
                order.reverse()
            for who, argv in order:
                if who == "cicili":
                    t, m, _ = run(argv, ROOT, env)
                    ct.append(t)
                    cm.append(m)
                else:
                    t, m, _ = run([PYTORCH_PY] + argv,
                                  os.path.join(ROOT, "example", "python"), env)
                    pt.append(t)
                    pm.append(m)
            print(f"  {i+1}/{repeats}  cicili {ct[-1]:6.2f}s   python {pt[-1]:6.2f}s")
        rows.append((label, metric, summarise(ct), summarise(pt),
                     cm[0], pm[0], all(x == cm[0] for x in cm),
                     all(x == pm[0] for x in pm)))
    return rows


def report(rows, env_info, repeats, forced):
    print("\n" + "=" * 78)
    print("## Environment\n")
    for k, v in env_info.items():
        print(f"* **{k}** — {v}")
    print(f"* **repeats** — {repeats} interleaved pairs, alternating which side runs first")
    if forced:
        print("* **WARNING** — measured on a machine that failed the idleness check")
    print("\n## Result\n")
    print("Median seconds in the training batches, minimum in brackets, "
          "spread as a percentage of the minimum.\n")
    print("| example | metric | Cicili | Python | ratio of medians |")
    print("|---|---|---|---|---|")
    for label, metric, c, p, cmv, pmv, cdet, pdet in rows:
        clo, cmed, csp = c
        plo, pmed, psp = p
        cflag = "" if cdet else " ⚠"
        pflag = "" if pdet else " ⚠"
        print(f"| {label} | {metric} {cmv}{cflag} / {pmv}{pflag} "
              f"| **{cmed:.2f} s** [{clo:.2f}] ±{csp:.1f}% "
              f"| {pmed:.2f} s [{plo:.2f}] ±{psp:.1f}% "
              f"| **{pmed/cmed:.2f}×** |")
    print("\n⚠ marks a metric that was not identical across repeats, which means "
          "the run is not deterministic and the metric column is one draw.")


def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--suite", default="torch", choices=["torch"])
    ap.add_argument("--repeats", type=int, default=5)
    ap.add_argument("--load-limit", type=float, default=0.30,
                    help="maximum one-minute load average per core (default 0.30)")
    ap.add_argument("--force", action="store_true",
                    help="measure a busy machine anyway, and say so in the output")
    args = ap.parse_args()

    env = dict(os.environ)
    env.setdefault("MNIST_DIR", os.path.expanduser("~/mnist-data"))
    env.setdefault("TABULAR_CSV", os.path.expanduser("~/tabular-data/california.csv"))

    missing = check_torch_prereqs(env)
    if missing:
        sys.exit("!! not ready to measure:\n   " + "\n   ".join(missing))

    info = environment()
    print("measuring on: " + info.get("cpu", info["platform"]))
    require_quiet(args.load_limit, args.force)

    rows = suite_torch(args.repeats, env)
    report(rows, info, args.repeats, args.force and load_ratio() > args.load_limit)


if __name__ == "__main__":
    main()
