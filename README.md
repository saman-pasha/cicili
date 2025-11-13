# Cicili: Haskell Semantics, Lisp Syntax, C Performance

## Overview

Cicili is a powerful programming language that uniquely merges the high-level, mathematical abstractions of **Haskell** with the metaprogramming flexibility of **Lisp** and the raw, low-level performance of **C**. It uses a Lisp-like S-expression syntax to define complex functional concepts, including Algebraic Data Types (ADTs), robust pattern matching, and a full type class system with Functors, Applicatives, and Monads. Unlike traditional functional languages, Cicili transpiles directly to optimized C code, providing native speed and C-level memory control. It achieves memory safety not with a garbage collector, but through a sophisticated, high-level system of V-Tables, automatic RAII-style resource management (via its `letin` macro), and built-in reference counting (`rc`), making it a unique tool for building safe, efficient, and highly abstract systems.

## The Vision

Its vision is to make programming both philosophical and practical, enabling developers to construct powerful, lawful, and introspective systems that scale from embedded devices to high-performance computation. The goal is to empower a developer to write code that is as safe and expressive as Haskell, using pure functions, Algebraic Data Types, pattern matching, and Monads, while having that code compile directly into C code that is as fast and efficient as if it were written by hand. By using Lisp's metaprogramming to build functional abstractions on top of a C core, Cicili's vision is to create a world where you can write mathematically provable, complex logic for systems like TensorFlow, Databases, or even Operating Systems, and have it run with zero overhead, deterministic memory management (RAII), and no garbage collector.

## Demonstration

This code is a sample of Cicili's power, demonstrating how it builds high-level functional abstractions (like Either for error handling, List processing, and RAII) on top of low-level C file I/O operations.

```lisp
;;; sample code
;;; writes many sentences to a temporary file
;;; reads file part by part
;;; stores them in a list of strings
;;; iterate over all parts
;;; count the words in each part separated by space or newline character
(source "word_count.c" (:std #t :compile #t :link "-L{$CCL} -lhaskell.o -L{$CWD} word_count.o -o word_count")
        (include "../../haskell.h")
        (include <errno.h>)

        (typedef char * cstr_t)
        (typedef FILE * cfile_t)

        (decl-Either String cfile_t) ; for header file
        (impl-Either String cfile_t) ; for source file
        
        ;; https://en.cppreference.com/w/c/io/fgets
        (func writeTmpFile ()
              (out Either^String^cfile_t) ; Haskell error handling model in Cicili

              (let ((FILE * tmpf . #'(tmpfile)))

                (when (== tmpf nil)
                  (Left^String^cfile_t (strerror errno))) ; on failure returns error number
                
                (fputs "Alan Turing\n"      tmpf)
                (fputs "John von Neumann\n" tmpf)
                (fputs "Alonzo Church\n"    tmpf)

                ;; ((<> Right String^cfile_t) tmpf) ! Notice ^ works as (<>) clause
                (return (Right^String^cfile_t tmpf)))) ; on success returns FILE*

        ;; a helper to safely read a file as List of String s
        (func safeReadFile ((FILE * file))
              (out List^String) ; List^String defined in prelude
              (return
                (case (== file nil) (Empty^String)
                      otherwise     (letn ((char buf [8]) ; letn returns last clause
                                           (size_t count . 0))
                                      (set count (fread buf (sizeof char) (sizeof buf) file))
                                      (case (== count 0)           (Empty^String)
                                            (< count (sizeof buf)) (Cons^String (new^String buf count) (Empty^String))
                                            otherwise              (Cons^String (new^String buf count) (safeReadFile file)))
                                      ))))
        
        ;; split by #\Space or #\Newline
        (func count_words ((String text))
              (out int)
              (return (match text
                        (* Cons ch (= tail * Cons) ; if there is another character
                           (case (or (== ch #\Space) (== ch #\Newline)) (+ 1 (count_words tail))
                                 otherwise (count_words tail)))
                        (default 1)))) ; means Empty, but all matchs need default case

        ;; Iterate over list and Count words in each String
        (func iter_words ((List^String list))
              (io list
                (* Cons str tail
                   (progn
                     (show^String str)
                     (printf " Word count: %d\n" (count_words str))
                     (iter_words tail)
                     (free^String (aof str))))
                ;; last element of a list is allocated too
                ;; = in io and match makes an alias for whole object
                (= empty_str default (free^String (aof empty_str)))))

        ;; to auto deferment file close
        (func file_close ((FILE ** file_ptr))
              (printf "file closed deferred\n")
              (fclose (cof file_ptr)))
        
        (main
            (letin* ((tmpf (writeTmpFile)))
              (io tmpf
                (Left  error (letin* ((error error free^String))
                               (printf "File opening error: ")
                               (show^String error)
                               (putchar #\Newline)))
                (Right file
                       (letin* ((file file file_close))
                         (rewind file)
                         (io (safeReadFile file)
                           (* Empty (printf "Error: nothing to read\n"))
                           (= first_cons * Cons
                              (progn
                                (printf "File loaded successfully!\n")
                                (iter_words first_cons))))))))))
```

Here's a comprehensive breakdown of what this code does and the concepts it showcases:

## C Interop and Monadic Error Handling: `writeTmpFile`

This function is a perfect example of Cicili's philosophy.

  * **C Interop:** It directly calls C's `stdio.h` functions like `tmpfile()` and `fputs()`. It also uses `errno.h` and `strerror()` for C-level error reporting.
  * **Haskell Semantics:** It wraps this unsafe C operation in a pure, functional interface. The return type `Either^String^cfile_t` is a **monadic type** that explicitly forces the caller (`main`) to handle both success (`Right file`) and failure (`Left error`). This gives it the safety of a Haskell/Rust `Result` type while operating on a raw C `FILE*`.

## RAII and File Management: `main` and `file_close`

The `main` function demonstrates a robust pattern for safe resource management in C.

  * **RAII in Cicili:** The line `(letin* ((file file file_close)))` is a powerful demonstration of **Resource Acquisition Is Initialization (RAII)**.
  * **`file_close` Destructor:** You've defined a custom `file_close` function that matches the signature required by `letin*` (a pointer to the resource).
  * **Guaranteed Cleanup:** By binding `file` in this `letin*` block, Cicili guarantees that `file_close` (and thus `fclose`) will be called automatically when the block exits, whether by normal completion or an error. This prevents resource leaks, a common problem in manual C file handling.

## Recursive Data Processing: `safeReadFile`

This function shows how to bridge C I/O with functional data structures.

  * **Chunked Reading:** It uses a fixed-size `(char buf [8])` to read the file in **8-byte chunks**. This is a realistic C-style approach to handling large files.
  * **Recursive List Building:** It recursively calls itself, using `Cons^String` to build a `List^String` where each element of the list is one of the 8-byte (or smaller) chunks read from the file.

## List Iteration and Word Count: `iter_words` and `count_words`

These functions showcase Cicili's functional list processing.

  * **`iter_words`:** This is a standard recursive function for iterating over a `List`.
      * It calls `show^String` to print the chunk.
      * It calls `count_words` on the chunk.
      * **Destructive Iteration:** Crucially, it calls `(free^String (aof str))`. This means `iter_words` is a *destructive* operation that consumes and frees the list as it iterates, demonstrating fine-grained C-level memory control.
  * **`count_words`:** This function recursively counts "words" in a chunk.
      * The logic `(* Cons ch (= tail * Cons))` is a "lookahead" pattern that checks if the current character is not the last one in the chunk.
      * It counts a "word" by counting the separators (`     ` or `\n`) that are *not* at the very end of the string, and then adds `1` (for the `default 1` case). This logic is flawed for the last chunk ("ch\\n"), which it will count as 1 word, but it correctly processes the other chunks.

## Output

Based on the file content and the 8-byte chunking, the output will be:

```text
File loaded successfully!
Alan Tur Word count: 2
ing
John Word count: 2
 von Neu Word count: 3
mann
Alo Word count: 2
nzo Chur Word count: 2
ch
 Word count: 1
file closed deferred
```

### Output Explained:

1.  **File Content:** "Alan Turing\\nJohn von Neumann\\nAlonzo Church\\n"
2.  **`safeReadFile` Chunks:**
      * `"Alan Tur"` (8 bytes) -\> `count_words` finds 1 space. `1 + 1 = 2` words.
      * `"ing\nJohn"` (8 bytes) -\> `count_words` finds 1 newline. `1 + 1 = 2` words.
      * `" von Neu"` (8 bytes) -\> `count_words` finds 2 spaces. `2 + 1 = 3` words.
      * `"mann\nAlo"` (8 bytes) -\> `count_words` finds 1 newline. `1 + 1 = 2` words.
      * `"nzo Chur"` (8 bytes) -\> `count_words` finds 1 space. `1 + 1 = 2` words.
      * `"ch\n"` (3 bytes) -\> `count_words` finds 0 separators *not* at the end, hits `default 1`. Result: `1` word.
3.  **Cleanup:** After the list is fully processed and freed by `iter_words`, the `letin*` block in `main` exits, triggering the `file_close` destructor, which prints "file closed deferred".

## Features
### Basic
The [basic.lisp](test/haskell/basic.lisp) file is a comprehensive test suite that demonstrates almost every core feature of the Cicili language, showing how it merges functional paradigms with C-level control and an object-oriented-style V-Table system.
### Concepts
The [concepts.lisp](test/haskell/concepts.lisp) file is a comprehensive test suite that demonstrates the full power of Cicili's Haskell-style type class system, showing how Functors, Applicatives, and Monoids all work together on concrete data structures.
It's a practical showcase of how these high-level abstractions are implemented and used in Cicili.
### Monadic
The [monadic.lisp](test/haskell/monadic.lisp) file is a powerful, practical demonstration of monadic computation in Cicili, specifically showcasing the Either monad for robust error handling.
Its entire purpose is to safely validate and construct an Employee object ((Tuple String int int)) by chaining together a series of operations that can each fail.
### Definitions
The [haskell](haskell) folder contains all Cicili's Haskell definitions. review them to fully understand how they are developed by Cicili's C core clauses. Follow Cicili Standard definition model by using generics `decl-`, `impl-`, `import-`.
### C core
Cicili's C core clauses are described in another doc [here](DOC-C.md).

