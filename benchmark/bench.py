#!/usr/bin/env python3
"""Run the published comparisons under conditions worth quoting.

    python3 benchmark/bench.py --suite all --repeats 5

WHY THIS EXISTS. Every timing in the READMEs was measured on a laptop that was
doing other things at the time, and it shows. Same binary, same data, different
sessions:

    example/mnist_conv        42.6 s  and  57.6 s     (35%)
    example/mnist_dsl         11.8 s  and  13.5 s     (14%)
    std_vec_bench construct     97 ms and    158 ms   (63%)

Those swings are larger than most of the differences the tables claim.
Interleaving the two sides protects the RATIO, which is why the tables were
built that way, but nothing protects the absolute numbers except a machine that
is not busy.

So this script does what a hand-run does not:

  * REFUSES to measure a busy machine, rather than quietly measuring one
  * records what it ran on, in the output, so a number cannot be separated
    from its conditions
  * alternates which side goes first, so neither always gets the cold cache
  * reports median, minimum and spread, so the variation sits next to the
    number instead of behind it
  * cross-checks the checksums the two sides print, so a comparison cannot
    quietly stop comparing the same work

Output is markdown, ready to paste.
"""

import argparse
import os
import platform
import re
import shutil
import statistics
import subprocess
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
PYTORCH_PY = "/usr/local/opt/pytorch/libexec/bin/python3"
RUST = "benchmark/rust-vector-bench/target/release"

# "  label: 123 ms"  and  "  (name checksum: 456)"
MS_RE = re.compile(r"^\s+(.*?):\s+(-?\d+)\s+ms\s*$", re.M)
SUM_RE = re.compile(r"^\s+\((.*?) checksum:\s*(-?\d+)\)\s*$", re.M)
# the torch examples print one time and one metric
TIME_RE = re.compile(r"(?:trained in|train)\s+([0-9.]+)\s*s")
METRIC_RE = re.compile(r"final (?:accuracy|held-out rmse|rmse):\s*([0-9.]+)")


# ---------------------------------------------------------------- suites
#
# A suite is two commands and a list of rows. Each row names itself on each
# side, because THE TWO SIDES DO NOT USE THE SAME LABELS -- Cicili's is
# "construct (new^vector, …)" and Rust's is "construct (to_vec, …)" -- and
# matching them by position would silently survive a row being added to one.

SUITES = {
    "vector": {
        "title": "lib/std vector vs Rust Vec<i32>",
        "left": ("Cicili", ["./benchmark/std_vec_bench"], ROOT),
        "right": ("Rust", [f"./{RUST}/api_bench"], ROOT),
        "rows": [
            ("construct",    r"^construct \(new\^vector",  r"^construct \(to_vec"),
            ("nth",          r"^nth \(bounds-checked\)",   r"^nth \(bounds-checked get\)"),
            ("push",         r"^push \d+ elements",        r"^push \d+ elements"),
            ("append",       r"^append \d+ elements",      r"^append \d+ elements"),
            ("construct rc", r"^construct rc",             r"^construct rc"),
            ("nth rc",       r"^nth rc",                   r"^nth rc"),
            ("push rc",      r"^push rc",                  r"^push rc"),
            ("append rc",    r"^append rc",                r"^append rc"),
        ],
        # checksums that MUST agree -- these are the rows doing identical work.
        # construct and append accumulate a buffer address on the Cicili side
        # (so the compiler cannot fold the loop away), so they legitimately
        # differ and are not compared.
        "checksums": ["nth", "nth rc"],
        "build": [
            (["sbcl", "--script", "cicili.lisp", "--release",
              "./benchmark/std-vector-bench.cicili"], ROOT),
            (["cargo", "build", "--release"],
             os.path.join(ROOT, "benchmark", "rust-vector-bench")),
        ],
    },
    "btree": {
        "title": "lib/std btree vs Rust BTreeMap<i32,i32>",
        "left": ("Cicili", ["./benchmark/std_btree_bench"], ROOT),
        "right": ("Rust", [f"./{RUST}/btree_bench"], ROOT),
        "rows": [
            ("insert",            r"^insert \d+ keys",   r"^insert \d+ keys"),
            ("search",            r"^search \d+ keys",   r"^search \d+ keys"),
            ("traverse in order", r"^traverse in order", r"^traverse in order"),
            ("delete",            r"^delete \d+ keys",   r"^delete \d+ keys"),
        ],
        "checksums": ["insert", "search", "traverse", "delete"],
        "build": [
            (["sbcl", "--script", "cicili.lisp", "--release",
              "./benchmark/std-btree-bench.cicili"], ROOT),
            (["cargo", "build", "--release"],
             os.path.join(ROOT, "benchmark", "rust-vector-bench")),
        ],
    },
}

TORCH_BUILD = [(["sbcl", "--script", "cicili.lisp", "--release", f"./example/{name}.cicili"],
                ROOT)
               for name in ("mnist-dsl", "tabular", "mnist-conv")]

# the torch pairs are shaped differently: one time and one metric per run
TORCH_PAIRS = [
    ("MNIST, MLP", ["./example/mnist_dsl"], ["mnist_mlp.py"], "accuracy"),
    ("California housing", ["./example/tabular"], ["tabular.py"], "rmse"),
    ("MNIST, conv", ["./example/mnist_conv"], ["mnist_conv.py"], "accuracy"),
]


# ---------------------------------------------------------------- environment


def environment():
    """What the numbers are numbers *on*. Printed with every result."""
    out = {
        "platform": platform.platform(),
        "cores": os.cpu_count(),
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
    # A SHARED vCPU IS NOT A QUIET MACHINE either -- it has a neighbour you
    # cannot see, stealing time in bursts that look exactly like a real
    # difference. Set BENCH_HOST so the output says which kind it was.
    for var in ("BENCH_HOST", "CLOUD_INSTANCE_TYPE", "AWS_INSTANCE_TYPE"):
        if os.environ.get(var):
            out["host"] = f"{var}={os.environ[var]}"
            break
    for tool in ("clang", "sbcl", "rustc"):
        path = shutil.which(tool)
        if path:
            try:
                out[tool] = subprocess.run(
                    [path, "--version"], capture_output=True,
                    text=True).stdout.splitlines()[0].strip()
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
        return False
    print(f"load average per core: {r:.2f}")
    if r <= limit:
        return False
    msg = (f"machine is busy ({r:.2f} per core, limit {limit:.2f}).\n"
           "   Timings taken now are not worth publishing -- close what is running,\n"
           "   or pass --force to measure anyway and have it said in the output.")
    if not force:
        sys.exit("!! " + msg)
    print("!! " + msg)
    return True


# ---------------------------------------------------------------- running


def run(argv, cwd, env):
    p = subprocess.run(argv, cwd=cwd, env=env, capture_output=True, text=True)
    if p.returncode != 0:
        raise RuntimeError(f"{' '.join(argv)} exited {p.returncode}\n{p.stderr[-2000:]}")
    return p.stdout


def build(name):
    """Rebuild the suite's binaries with --release, every time.

    NOT AN OPTIMISATION AND NOT A CONVENIENCE. The benchmark targets carry
    `:compile #t' -- no flags of their own -- so without --release they compile
    at -g -O0, and the binary still builds, still runs, still prints
    milliseconds. Nothing downstream objects. The .cicili sources now call
    (release-only) and refuse, but a STALE binary left on disk from an earlier
    build gets measured without anything being compiled at all, and no guard in
    the compiler can catch that. Rebuilding here is what closes it.
    """
    steps = TORCH_BUILD if name == "torch" else SUITES[name]["build"]
    for argv, cwd in steps:
        print(f"  building: {' '.join(argv)}")
        p = subprocess.run(argv, cwd=cwd, capture_output=True, text=True)
        if p.returncode != 0:
            raise RuntimeError(f"build failed: {' '.join(argv)}\n"
                               f"{(p.stdout + p.stderr)[-3000:]}")


def rows_of(text):
    return [(m.group(1).strip(), int(m.group(2))) for m in MS_RE.finditer(text)]


def pick(rows, pattern, what):
    rx = re.compile(pattern)
    hits = [ms for label, ms in rows if rx.search(label)]
    if not hits:
        raise RuntimeError(f"no row matching /{pattern}/ in {what} output.\n"
                           f"  rows seen: {[l for l, _ in rows]}")
    return hits[0]


def checksums_of(text):
    return {m.group(1).strip(): m.group(2) for m in SUM_RE.finditer(text)}


def summarise(xs):
    lo, med = min(xs), statistics.median(xs)
    spread = (max(xs) - lo) / lo * 100 if lo else 0.0
    return lo, med, spread


# ---------------------------------------------------------------- the suites


def run_paired(spec, repeats, env):
    lname, largv, lcwd = spec["left"]
    rname, rargv, rcwd = spec["right"]
    left = {r[0]: [] for r in spec["rows"]}
    right = {r[0]: [] for r in spec["rows"]}
    mismatched = []

    for i in range(repeats):
        # ALTERNATE. A machine warms up over a run, so always measuring one
        # side first hands it the cold cache every time -- a bias, not noise,
        # and it does not average out.
        order = [("L", largv, lcwd), ("R", rargv, rcwd)]
        if i % 2:
            order.reverse()
        text = {}
        for tag, argv, cwd in order:
            text[tag] = run(argv, cwd, env)
        lrows, rrows = rows_of(text["L"]), rows_of(text["R"])
        for name, lpat, rpat in spec["rows"]:
            left[name].append(pick(lrows, lpat, lname))
            right[name].append(pick(rrows, rpat, rname))
        # the two sides print checksums over the work they did. If those
        # disagree the benchmark has stopped comparing the same thing, and no
        # amount of careful timing fixes that.
        lc, rc = checksums_of(text["L"]), checksums_of(text["R"])
        for key in spec.get("checksums", []):
            a = next((v for k, v in lc.items() if k.startswith(key)), None)
            b = next((v for k, v in rc.items() if k.startswith(key)), None)
            if a is not None and b is not None and a != b and key not in mismatched:
                mismatched.append(key)
        print(f"  {i+1}/{repeats}  " + "  ".join(
            f"{n} {left[n][-1]}/{right[n][-1]}ms" for n, _, _ in spec["rows"][:3]))

    return left, right, mismatched


def run_torch(repeats, env):
    rows = []
    for label, cic, py, metric in TORCH_PAIRS:
        print(f"\n{label}: {repeats} interleaved pairs")
        ct, pt, cm, pm = [], [], [], []
        for i in range(repeats):
            order = [("c", cic), ("p", py)]
            if i % 2:
                order.reverse()
            for who, argv in order:
                if who == "c":
                    text = run(argv, ROOT, env)
                    ct.append(float(TIME_RE.search(text).group(1)))
                    cm.append(METRIC_RE.search(text).group(1))
                else:
                    text = run([PYTORCH_PY] + argv,
                               os.path.join(ROOT, "example", "python"), env)
                    pt.append(float(TIME_RE.search(text).group(1)))
                    pm.append(METRIC_RE.search(text).group(1))
            print(f"  {i+1}/{repeats}  cicili {ct[-1]:6.2f}s   python {pt[-1]:6.2f}s")
        rows.append((label, metric, summarise(ct), summarise(pt), cm, pm))
    return rows


# ---------------------------------------------------------------- prerequisites


def missing_for(name, env):
    """Only what this script cannot produce itself. The binaries it builds."""
    out = []
    if not shutil.which("sbcl"):
        out.append("sbcl -- needed to build the Cicili side with --release")
    if name == "torch":
        if not os.path.exists(PYTORCH_PY):
            out.append(f"{PYTORCH_PY} -- the interpreter shipping the SAME libtorch the "
                       "Cicili side links; a different PyTorch build measures the builds")
        if not os.path.isdir(env.get("MNIST_DIR", "")):
            out.append("$MNIST_DIR -- the four idx files")
        if not os.path.exists(env.get("TABULAR_CSV", "")):
            out.append("$TABULAR_CSV -- california.csv")
    elif not shutil.which("cargo"):
        out.append("cargo -- needed to build the Rust side with --release")
    return out


# ---------------------------------------------------------------- reporting


def report_paired(name, spec, left, right, mismatched):
    lname = spec["left"][0]
    rname = spec["right"][0]
    print(f"\n### {spec['title']}\n")
    print("Median ms, minimum in brackets, spread as a percentage of the minimum. "
          "Lower is better.\n")
    print(f"| | {lname} | {rname} | ratio |")
    print("|---|---|---|---|")
    for rowname, _, _ in spec["rows"]:
        llo, lmed, lsp = summarise(left[rowname])
        rlo, rmed, rsp = summarise(right[rowname])
        best_l = "**" if lmed < rmed else ""
        best_r = "**" if rmed < lmed else ""
        ratio = (rmed / lmed) if lmed else float("nan")
        print(f"| {rowname} "
              f"| {best_l}{lmed:.0f} ms{best_l} [{llo:.0f}] ±{lsp:.0f}% "
              f"| {best_r}{rmed:.0f} ms{best_r} [{rlo:.0f}] ±{rsp:.0f}% "
              f"| {ratio:.2f}× |")
    if mismatched:
        print(f"\n**CHECKSUM MISMATCH** on {', '.join(mismatched)} — the two sides are not "
              "doing the same work and these rows are not a comparison.")
    else:
        print(f"\nChecksums agree on {', '.join(spec['checksums'])}, so both sides "
              "computed the same answers over the same keys.")


def report_torch(rows):
    print("\n### libtorch examples vs PyTorch\n")
    print("Median seconds in the training batches, minimum in brackets, spread as a "
          "percentage of the minimum.\n")
    print("| example | metric | Cicili | Python | ratio |")
    print("|---|---|---|---|---|")
    for label, metric, c, p, cm, pm in rows:
        clo, cmed, csp = c
        plo, pmed, psp = p
        cflag = "" if len(set(cm)) == 1 else " ⚠"
        pflag = "" if len(set(pm)) == 1 else " ⚠"
        print(f"| {label} | {metric} {cm[0]}{cflag} / {pm[0]}{pflag} "
              f"| **{cmed:.2f} s** [{clo:.2f}] ±{csp:.0f}% "
              f"| {pmed:.2f} s [{plo:.2f}] ±{psp:.0f}% "
              f"| **{pmed/cmed:.2f}×** |")
    if any(len(set(cm)) > 1 or len(set(pm)) > 1 for *_, cm, pm in rows):
        print("\n⚠ marks a metric that was not identical across repeats: that run is not "
              "deterministic and its metric column is one draw, not a result.")


def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--suite", default="all",
                    choices=["all", "torch", "vector", "btree"], nargs="+")
    ap.add_argument("--repeats", type=int, default=5)
    ap.add_argument("--load-limit", type=float, default=0.30,
                    help="maximum one-minute load average per core (default 0.30)")
    ap.add_argument("--force", action="store_true",
                    help="measure a busy machine anyway, and say so in the output")
    ap.add_argument("--no-build", action="store_true",
                    help="do NOT rebuild first. Only for iterating on this script -- "
                         "the numbers are then whatever happens to be on disk")
    args = ap.parse_args()

    wanted = ["torch", "vector", "btree"] if "all" in args.suite else list(args.suite)

    env = dict(os.environ)
    env.setdefault("MNIST_DIR", os.path.expanduser("~/mnist-data"))
    env.setdefault("TABULAR_CSV", os.path.expanduser("~/tabular-data/california.csv"))

    problems = {s: missing_for(s, env) for s in wanted}
    ready = [s for s in wanted if not problems[s]]
    for s in wanted:
        if problems[s]:
            print(f"!! skipping '{s}':\n   " + "\n   ".join(problems[s]))
    if not ready:
        sys.exit("!! nothing to measure")

    info = environment()
    print("\nmeasuring on: " + info.get("cpu", info["platform"]))
    forced = require_quiet(args.load_limit, args.force)

    # BUILD FIRST, ALL OF IT, WITH --release. Everything is rebuilt before
    # anything is timed, so a suite cannot be measured against a binary left
    # over from an earlier build -- which is the one way a debug build still
    # reaches a benchmark now that the sources call (release-only).
    if not args.no_build:
        print("\nbuilding everything with --release")
        for s in ready:
            build(s)

    results = {}
    for s in ready:
        if s == "torch":
            results[s] = run_torch(args.repeats, env)
        else:
            print(f"\n{SUITES[s]['title']}: {args.repeats} interleaved pairs")
            results[s] = run_paired(SUITES[s], args.repeats, env)

    print("\n" + "=" * 78)
    print("## Environment\n")
    for k, v in info.items():
        print(f"* **{k}** — {v}")
    print(f"* **repeats** — {args.repeats} interleaved pairs, alternating which side "
          "runs first")
    print("* **build** — " + ("`--release` for the Cicili side, `cargo build --release` "
                              "for Rust, rebuilt by this script before timing"
                              if not args.no_build else
                              "**--no-build: whatever was already on disk**"))
    if forced:
        print("* **WARNING** — measured on a machine that FAILED the idleness check; "
              "these numbers are not publishable")
    if len(ready) < len(wanted):
        print(f"* **incomplete** — {', '.join(s for s in wanted if s not in ready)} "
              "could not be measured")

    for s in ready:
        if s == "torch":
            report_torch(results[s])
        else:
            report_paired(s, SUITES[s], *results[s])


if __name__ == "__main__":
    main()
