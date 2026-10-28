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
# test/haskell is not walked: the haskell prelude load is commented out in
# cicili.lisp while std is the focus, and the tests of the haskell layer
# over std live there too (haskell-concepts, btree-persistent, ownlist);
# the first two need gcc's nested functions and closures, which clang
# refuses. Run those by hand.

cd "$(dirname "$0")/.." || exit 1
ROOT=$(pwd)
LOG=/tmp/cicili-run.log
pass=0; fail=0; failed=''; skipped=''

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

  # A TEST THAT NEEDS A LIBRARY'S HEADER SAYS SO, on a line of its own --
  # `;;;; needs: <libpq-fe.h>' -- and is SKIPPED, by name, where the header
  # is not installed: a box without libpq is not a finding about the binding,
  # and a red that says so would be read as one. The header is looked for the
  # way the test's own compile looks for it, with the -I directories the test
  # names, as C and then as C++.
  for h in $(sed -n 's/^;;*[[:space:]]*needs:[[:space:]]*<\([^>]*\)>.*/\1/p' "$src"); do
    incs=$(grep -o -- '-I[^ "]*' "$src" | sort -u | tr '\n' ' ')
    if ! printf '#include <%s>\n' "$h" | ${CC:-cc} -E -x c $incs - > /dev/null 2>&1 &&
       ! printf '#include <%s>\n' "$h" | ${CXX:-c++} -E -x c++ $incs - > /dev/null 2>&1; then
      echo "SKIP needs <$h>, which is not installed"
      skipped="$skipped $src"
      return
    fi
  done

  sbcl --script cicili.lisp $CICILI_FLAGS "./$src" > "$LOG" 2>&1; tr=$?

  # AND A TEST WHOSE TOOLCHAIN IS NOT INSTALLED IS SKIPPED, by the same rule:
  # a {$TORCH_INCLUDE}-style token that config.lisp cannot resolve stops the
  # transpiler with `... cannot be resolved on this machine' and the reason
  # on the next line (libtorch was not found, no Python headers) -- which is
  # the machine's answer, not the test's.
  if grep -q 'cannot be resolved on this machine' "$LOG"; then
    tok=$(grep -o '{\$[A-Z_]*} cannot be resolved' "$LOG" | head -1 | cut -d' ' -f1)
    hint=$(sed -n '/cannot be resolved on this machine/{n;p;q;}' "$LOG" | sed 's/^[[:space:]]*//; s/\..*//')
    echo "SKIP needs $tok: $hint"
    skipped="$skipped $src"
    return
  fi

  if [ "$tr" -ne 0 ]; then
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

# THE VERSION ANSWERS, AND IT ANSWERS ALONE. Not a transpile target and not
# a number this file knows: the SHAPE only -- a bare MAJOR.MINOR.PATCH on
# stdout with the startup diagnostics kept off it -- because three
# repositories read that number to say which transpiler built them, and a
# case naming the number would be a second place to edit on every bump.
version_case() {
  printf '%-30s' 'cicili --version'
  v=$(sbcl --script cicili.lisp --version 2>/dev/null)
  if printf '%s' "$v" | grep -qE '^[0-9]+\.[0-9]+\.[0-9]+$'; then
    echo 'GREEN'
    pass=$((pass+1))
  else
    echo "RED  stdout is not a bare number: $v"
    fail=$((fail+1)); failed="$failed cicili.lisp:--version"
  fi
}

if [ $# -gt 0 ]; then
  for a in "$@"; do run_one "${a%.cicili}.cicili"; done
else
  version_case
  for f in $(find test/c test/std test/cpp -name '*.cicili' 2>/dev/null | sort); do
    run_one "$f"
  done
fi

echo
echo "green: $pass   red: $fail"
[ -n "$failed" ] && { echo "failed:"; for f in $failed; do echo "  $f"; done; }
[ -n "$skipped" ] && { echo "skipped (what they need is not installed here):"; for f in $skipped; do echo "  $f"; done; }
[ "$fail" -eq 0 ]
