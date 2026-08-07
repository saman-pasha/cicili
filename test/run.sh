#!/bin/sh
# Compile and run Cicili test targets, reporting a real verdict.
#
# Careful: cicili.lisp exits 0 even when the C compiler fails, so the exit code
# alone is not a verdict. This checks the log for a transpiler condition, for a
# non-zero cicili status line, and for gcc diagnostics, then runs the produced
# binary and requires exit 0.
#
#   sh test/run.sh                  # every test under test/c, test/std and test/cpp
#   sh test/run.sh test/c/control   # just one, by path without extension
#
# CICILI_FLAGS is passed through to the transpiler. Note what it is NOT for:
#
# --RELEASE IS A BENCHMARKING FLAG, NOT A SECOND WAY TO RUN THE SUITE. It is
# what makes a measurement mean anything -- without it a target compiles at
# -g -O0 and every number from it is noise, which is why benchmark/ targets
# carry (release-only) and refuse to build any other way. The suite asks
# whether the code is correct, and -O0 with symbols is the right build for
# that: it compiles faster, and a failure is debuggable where an -O3 one is
# not. Run the suite plain.
#
# test/haskell is skipped: the haskell prelude load is commented out in
# cicili.lisp while std is the focus, so those cannot pass right now.

cd "$(dirname "$0")/.." || exit 1
ROOT=$(pwd)
LOG=/tmp/cicili-run.log
pass=0; fail=0; failed=''

# Binary name comes from the -o in a target's :link. Both spellings are matched:
#   :link ("-lfoo.o" "-o" "foo_test")     list form, what `make' produces
#   :link "-o CompileTest -L{$CWD} …"     one string, the raw plist form
# The LAST -o wins: a file with several targets builds its objects and libraries
# first and its executable last.
binary_of() {
  { sed -n 's/.*"-o"[ ]*"\([^"]*\)".*/\1/p' "$1"
    sed -n 's/.*:link[ ]*"[^"]*-o[ ]\{1,\}\([^ "]*\).*/\1/p' "$1"
  } | tail -1
}

# the condition text sits between the "Unhandled ...:" header and "Backtrace",
# so it must be scoped -- the transpiler prints plenty of debug above it
why() {
  sed -n '/^Unhandled/,/^Backtrace/p' "$LOG" \
    | sed -n 's/^  \([A-Za-z#].*\)/\1/p' | head -1 | cut -c1-70
}

run_one() {
  src=$1
  dir=$(dirname "$src")
  printf '%-30s' "$src"

  # a macro file has no source/header target of its own -- it is imported by
  # another test, and compiling it standalone means nothing
  if ! grep -qE '^[[:space:]]*\((source|header)[[:space:]]' "$src"; then
    echo 'SKIP macro file (imported by another test)'
    return
  fi

  if ! sbcl --script cicili.lisp $CICILI_FLAGS "./$src" > "$LOG" 2>&1; then
    printf 'RED  transpile   '; why
    fail=$((fail+1)); failed="$failed $src"; return
  fi
  if grep -q 'Unhandled' "$LOG"; then
    printf 'RED  condition   '; why
    fail=$((fail+1)); failed="$failed $src"; return
  fi
  if grep -qE 'error generated|errors generated|cicili exited with status: \(NIL NIL [1-9]' "$LOG"; then
    printf 'RED  cc          '
    grep -m1 -E 'error:' "$LOG" | cut -c1-70
    fail=$((fail+1)); failed="$failed $src"; return
  fi

  bin=$(binary_of "$src")
  if [ -z "$bin" ]; then
    echo 'GREEN (no binary; transpile only)'
    pass=$((pass+1)); return
  fi
  if [ ! -x "$dir/$bin" ]; then
    echo "RED  no binary $bin"
    fail=$((fail+1)); failed="$failed $src"; return
  fi
  # run from its own directory, the way the recorded commands do
  if ( cd "$dir" && "./$bin" > /tmp/cicili-out.log 2>&1 ); then
    echo 'GREEN'
    pass=$((pass+1))
  else
    printf 'RED  runtime exit %s  ' "$?"
    tail -2 /tmp/cicili-out.log | tr '\n' ' ' | cut -c1-60; echo
    fail=$((fail+1)); failed="$failed $src"
  fi
}

if [ $# -gt 0 ]; then
  for a in "$@"; do run_one "${a%.cicili}.cicili"; done
else
  for f in $(find test/c test/std test/cpp -name '*.cicili' 2>/dev/null | sort); do
    run_one "$f"
  done
fi

echo
echo "green: $pass   red: $fail"
[ -n "$failed" ] && { echo "failed:"; for f in $failed; do echo "  $f"; done; }
[ "$fail" -eq 0 ]
