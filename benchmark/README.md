# Benchmark

## Sample
A word counting program which does 1,000,000 times a specific task.

 - Opens a temporary file
 - Writes many short lines to the file
 - Reads this content as many chunks
 - Iterates over characters and splits them by Space and Newline
 - Counts the splitted and prints them

Not all the code is the same for Cicili and Haskell but almost near.
The Cicili code is [here](word-count-bench.lisp).
The Haskell code is [here](word_count.hs).
Because of Cicili is a expressive language, it is important to see what C code is produced to handle expresiveness of Cicili.
The generated C ocde is [here](word_count_bench.c).

## Compilation
gcc:
```
gcc --version
gcc (Homebrew GCC 15.2.0) 15.2.0
Copyright (C) 2025 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
```

Cicili compilation:
```
glibtool --version
glibtool (GNU libtool) 2.5.4
Copyright (C) 2025 Free Software Foundation, Inc.
License GPLv2+: GNU GPL version 2 or later <https://gnu.org/licenses/gpl.html>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.

Originally written by Gordon Matzigkeit, 1996
(See AUTHORS for complete contributor listing)

sbcl --version
SBCL 2.5.10

sbcl --script cicili.lisp --separate ./benchmark/word-count-bench.lisp

glibtool: compile:  gcc -O -Wno-incompatible-pointer-types -c word_count_bench.c  -fno-common -DPIC -o .libs/word_count_bench.o 
glibtool: compile:  gcc -O -Wno-incompatible-pointer-types -c word_count_bench.c -o word_count_bench.o >/dev/null 2>&1 
glibtool: link: gcc -O word_count_bench.o -o word_count_bench  -L/.../cicili/ -lhaskell.o -L/.../cicili/benchmark/ 
```

Haskell compilation
```
ghc --version
The Glorious Glasgow Haskell Compilation System, version 9.12.2

ghc -O ./benchmark/word_count.hs
[1 of 2] Compiling Main             ( benchmark/word_count.hs, benchmark/word_count.o ) [Missing object file]
[2 of 2] Linking benchmark/word_count
```

## Result
4 times for Cicili output execution:
```
284 seconds elapsed
284 seconds elapsed
275 seconds elapsed
284 seconds elapsed
```
4 times for Haskell output execution:
```
280 seconds elapsed
278 seconds elapsed
277 seconds elapsed
278 seconds elapsed
```
