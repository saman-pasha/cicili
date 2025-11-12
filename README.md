# Cicili: Haskell Semantics, Lisp Syntax, C Performance

## Overview

Cicili is a powerful programming language that uniquely merges the high-level, mathematical abstractions of **Haskell** with the metaprogramming flexibility of **Lisp** and the raw, low-level performance of **C**. It uses a Lisp-like S-expression syntax to define complex functional concepts, including Algebraic Data Types (ADTs), robust pattern matching, and a full type class system with Functors, Applicatives, and Monads. Unlike traditional functional languages, Cicili transpiles directly to optimized C code, providing native speed and C-level memory control. It achieves memory safety not with a garbage collector, but through a sophisticated, high-level system of V-Tables, automatic RAII-style resource management (via its `letin` macro), and built-in reference counting (`rc`), making it a unique tool for building safe, efficient, and highly abstract systems.

🌌 The Vision

Cicili is redefining how we write C and C++:

- Safer than C
- Lighter than C++
- More expressive than macros
- More composable than templates

# ⚙️ Cicili Async Coroutine Sample

This sample code demonstrates the use of Cicili's macro-powered asynchronous coroutine system. It features:

- Stateful coroutines using closures
- Custom `done`, `yield`, and `error` callbacks
- Shared `Coordinator` for cooperative scheduling
- Memory-safe async logic using `defer*`
- Seamless C and Cicili integration

```lisp
;;;; asynchronous sample
(source "async.c" (:std #t :compile #t :link "-L{$CWD}../lib/std/coroutine -lasync.o -lcoordinator.o -o async_main")
        (include <stdio.h>)
        (include "../lib/std/coroutine/coordinator.h")

        (func done_callback1 ((char payload [128]))  ; done callback
              (printf "task1 the payload received: %s\n" payload)

              (async ((int * state_counter . #'(malloc (sizeof int))))
                     (defer* ((int * state_counter))
                       (free state_counter)) ; at done or error
                     
                     ;; state constants or variables
                     (let ((int counter . #'(cof state_counter))
                           (const int end . 3))

                       ;; poll
                       (sleep 1)
                       (printf "cmd3 counter update: %d\n" (++ (cof state_counter)))

                       (if (== counter end)        
                           (done '(lambda ((int c)) (format #t "cmd3 done: %d\n" c)) counter)         ; done
                           (if (> counter end)    
                               (error '(lambda () (format #t "cmd3 error\n")))                        ; error
                               (yield '(lambda ((int c)) (format #t "cmd3 yield: %d\n" c)) counter))) ; yield
                       ))
              )
        
        (func error_callback1 ((int status))         ; error callback
              (printf "task1 the routine error status: %d\n" status))

        (func done_callback2 ((char payload [128]))  ; done callback
              (printf "task2 the payload received: %s\n" payload))
        
        (func error_callback2 ((int status))         ; error callback
              (printf "task2 the routine error status: %d\n" status))

        
        (async-main

          (-> __ciciliA_Coordinator_ set_logging #t)

          (async ()
                 (let ((char buffer [128]))                 
                   (printf "polling for cmd1: ")                  ; poll
                   
                   (if (> (scanf "%s" buffer) 0)
                       (block (printf "the cmd1: %s\n" buffer)
                         (if (== (strcmp buffer "quit") 0)
                             (done done_callback1 buffer)         ; success done
                             (if (== (strcmp buffer "error") 0)
                                 (error error_callback1 -300))))  ; error raised
                       (error error_callback1 -200))))            ; error raised
          
          (async ((char * buffer . #'(malloc 128)))                    ; as a state variable
                 (printf "the state buffer: %s\n" buffer)
                 
                 (defer* ((char * buffer))
                   (printf "buffer being released\n")
                   (free buffer))
                 
                 (printf "polling for cmd2: ")                         ; polling repeatedlty
                 
                 (if (> (scanf "%s" buffer) 0)
                     (block (printf "the cmd2: %s\n" buffer)
                       (if (== (strcmp buffer "yield") 0)
                           (yield done_callback2 buffer)               ; success done  a custom callback data
                           (if (== (strcmp buffer "done") 0)
                               (done done_callback2 buffer)            ; success done  a custom callback data
                               (if (== (strcmp buffer "error") 0)
                                   (error '(lambda ((int status) (char * message))
                                            (format #t "what's happened? %d: %s\n" status message))
                                          -3 "don't know")))))         ; error raised  a custom callback error
                     (error error_callback2 -2)))                      ; error raised  a custom callback error

          ))
```

It’s a language for building languages. A tool for shaping systems. A canvas for expressing structure, behavior, and intent—without giving up performance or control.

## Philosophy

At its core, Cicili embraces:

- **Expressive Metaprogramming:**  
  Write high-level, declarative Lisp-like macros that generate robust, optimized C code. Code writes code—improving maintainability and reducing boilerplate.

- **Performance by Design:**  
  Cicili compiles directly to C, ensuring extremely fast execution. With features like deferred memory management (`defer` for let variables) and efficient macro expansion, your application benefits from native-like speed without the overhead of interpretation.

- **Modular and Extensible Architecture:**  
  Cicili’s versatile module system and namespace resolution mechanism (including free resolution via a simple `/` prefix) allow the creation of isolated libraries and components. This makes it simple to reuse, extend, and collaborate on large projects.

- **Clean DSL Development:**  
  By abstracting common tasks (e.g., looping over arrays, conditional execution, function interpolation via lambda, routing for web servers), Cicili creates a natural DSL that integrates smoothly with C’s low-level system programming.

## Features

### High-Performance Compile-Time Generation

- **Compiled to C Code:**  
  Your high-level Cicili code is translated into optimized, idiomatic C, enabling blazing-fast performance and minimal runtime overhead.

- **Deferred Memory Management:**  
  Using the `defer` attribute in `let` bindings, Cicili automatically frees memory allocated during scope creation. This ensures resource safety and minimizes memory leaks without extra manual cleanup.

- **Macro System:**  
  Enjoy a rich macro language that lets you define your own DSLs. Built-in macros for conditionals (`when`, `unless`), loops (`for-each`, `for-each-const`), and string formatting (`format`) save you time and reduce boilerplate.

### Object-Oriented and Functional Constructs

- **Structs with Methods:**  
  Define C-like structures using Lisp macros and attach methods (both inline and dynamically resolved) to simulate object-oriented programming without the runtime cost of inheritance.

- **Lambda Expressions as First-Class Citizens:**  
  Cicili supports quoted lambda expressions. These provide first-class functions that can be stored in function variables, passed as parameters, or assigned as method implementations.

- **Function Variables and Inline Helpers:**  
  Declare and assign functions dynamically, empowering functional programming patterns that blend seamlessly with low-level system constraints.

### Modular Design & Namespace Control

- **Sophisticated Module System:**  
  Organize code into packages and modules to avoid symbol conflicts. Use free resolution (with a `/` prefix) when you need to refer to global types and methods outside the current module context.

- **Dynamic Imports and Initialization:**  
  Import external macro files into specific namespaces (or the default CL-USER package) and even supply compile-time initialization arguments to configure their behavior.

### Web Development and FastCGI Integration

- **Complete Web Server Toolkit:**  
  Built on FastCGI, Cicili provides robust routing macros that simplify the definition of GET/POST endpoints, API routes, and parameter handling. The `route` macro and request processing functions let you build a full-featured web server that’s both modular and high performance.

- **Dynamic Route Dispatching:**  
  Process incoming HTTP requests by dynamically matching their paths and methods against registered routes. Support for serving both static content and dynamic API responses is built right in.

### Extensibility and Future Potential

- **DSL Ecosystem:**  
  Cicili is not confined to web development. Its powerful macro and module system make it ideal for any domain where code generation and customization are required—from automation tools to embedded systems.

- **Cross-Domain Integration:**  
  Seamlessly integrate with existing C libraries, and extend Cicili to support advanced features such as parallel processing, WebSockets, or database connectivity as your project grows.

- **Performance Optimizations:**  
  With further potential enhancements like inline assembly optimizations, task parallelism, and even GPU-accelerated computation, Cicili sets the stage for future high-performance applications.

## How Cicili Works

1. **Macro Expansion:**  
   During compilation, Cicili processes your high-level Lisp code, expanding macros into efficient C code. This not only simplifies development but also provides strong abstraction without sacrificing performance.

2. **Deferred Execution & Memory Safety:**  
   With features like auto-deallocation via `defer` attributes on `let` bindings, Cicili manages resources automatically, reducing the risk of memory leaks common in C programming.

3. **Native Compilation & Linking:**  
   Once the macros have generated the C code, a standard C compiler is used to build the final binary. FastCGI integration, as demonstrated in the sample web server code, lets you deploy lightweight and responsive applications.

# What Makes Cicili Unique?

Unlike general-purpose macro systems in languages like Clojure or Racket, Cicili is:

- **Purpose-built for C**  
  Its output is actual `.c`/`.h` code, not just interpreted runtime templates.

- **Multi-target aware**  
  You define headers, sources, and compile settings in a single macro form.

- **Lightweight and portable**  
  No runtime, no virtual machine—just macro-expansion into raw C.

- **Blends C and Lisp**  
  It’s a perfect middle ground: low-level power, high-level ergonomics.  

## Contributing

Contributions to Cicili are welcome! Whether you have ideas for new features, improvements to the macro system, or advanced optimizations, please check our contribution guidelines and open an issue or pull request on the project repository.

## Final Thoughts

Cicili represents a revolution in how we write high-level code with low-level performance. With its powerful metaprogramming system, modular architecture, and robust integration with C, it enables developers to create scalable, maintainable, and extremely efficient codebases for web services, DSLs, automation, and beyond.

Join us in exploring the future of Lisp-powered development with Cicili!
