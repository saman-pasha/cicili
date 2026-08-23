#!/bin/sh
# The deep-typeof recursion guard: an unresolvable receiver must never
# take the transpiler down. Before the guard this reproducer died
# "Control stack exhausted"; with it, the member is either emitted as
# written for C++ to judge (what happens here -- vector has size(), so
# it compiles), or refused with an error naming the access ("unknown
# struct type: auto") where the resolver genuinely needs the type.
HERE=$(cd "$(dirname "$0")" && pwd)
ROOT=$(cd "$HERE/../.." && pwd)
LOG=$(mktemp)
trap 'rm -f "$LOG"' EXIT
( cd "$ROOT" && sbcl --script cicili.lisp "$HERE/deep-typeof-loop.cicili" ) > "$LOG" 2>&1
status=$?
if grep -q 'Control stack exhausted' "$LOG"; then
  echo "RED  the recursion is back: the transpiler died instead of deciding"
  exit 1
fi
if [ $status -eq 0 ] && [ -f "$HERE/guard.o" ]; then
  echo "GREEN passed through to C++, which accepted it"
  exit 0
fi
if grep -q 'unknown struct type: auto' "$LOG"; then
  echo "GREEN refused with the error that names it"
  exit 0
fi
echo "RED  neither outcome -- inspect:"
tail -5 "$LOG"
exit 1
