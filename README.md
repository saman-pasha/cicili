*Copilot opinion on Cicili*
# Cicili Programming Language

Welcome to **Cicili** – a compiler that bridges the expressive power of Lisp-like syntax with the raw performance of C. Whether you’re a systems programmer or a developer looking for a more elegant way to write C code, Cicili provides a flexible platform that combines high-level abstractions with low-level control.

---

## Philosophy

Cicili is built on the belief that code should be:
- **Expressive and Readable:** Writing complex logic should not require verbose code. With its Lisp-inspired macro system, Cicili enables you to articulate ideas succinctly and clearly.
- **Efficient and Direct:** While offering high-level constructs, Cicili compiles down to plain C, granting full control over performance-critical operations.
- **Modular and Organized:** The module system and namespacing features encourage clean, well-organized code—ideal for large projects and team collaboration.
- **Safe and Maintainable:** Automatic resource management (via the `defer` mechanism) and clear separation of concerns reduce the chances of errors like memory leaks, common in traditional C programming.

---

## Strengths

- **Lisp-Inspired Syntax:**  
  Enjoy concise and flexible constructs thanks to a powerful macro system that brings the best of Lisp to C development.

- **Extensible Macro System:**  
  Cicili’s macros let you define custom language constructs, perform compile-time code transformations, and even integrate external packages. This reduces boilerplate and increases clarity.

- **Object-Oriented Features:**  
  Through a clear method and receiver notation (using operators like `->` and `$`), Cicili introduces object-oriented patterns in C—combining encapsulation with speed.

- **Automatic Resource Management:**  
  The `defer` mechanism provides automatic cleanup of dynamically allocated resources, ensuring that your applications are both robust and leak-free.

- **Intermediate Representation (IR):**  
  Before translating to modular C code, Cicili works through an intermediate representation that handles complex clauses and features, improving both clarity and optimization.

- **Dynamic Inclusion and Namespacing:**  
  Use modules to seamlessly organize your code into namespaces. The free-resolution markers give you precise control over which symbols to use, making large-scale projects manageable and reducing name collisions.

---

## Unique Features

1. **Multi-Return Functions:**  
   Return multiple values easily through inline structs, simplifying functions that need to return more than one result.

2. **Lambda Functions and Function Variables:**  
   Create anonymous functions on the fly, pass them as parameters, or assign them to variables for high-order function techniques, all while writing minimal code.

3. **Custom Macro System:**  
   With constructs such as `DEFMACRO` and `DEFUN`, you can extend the language with your own abstractions and custom behaviors. Macros not only reduce redundancy but also enable you to write clean, expressive code that compiles to efficient C.

4. **Scoped Cleanups with `defer`:**  
   Automatic cleanup built right into `let` expressions ensures that allocated memory and other resources are properly released when they go out of scope.

5. **Object-Style Method Resolution:**  
   Methods can be defined inline or separately, with a clear syntax that differentiates between instance methods and static functions—providing an object-oriented feel without sacrificing C's performance.

6. **Robust Module System:**  
   Organize your types, functions, and macros into modules. This system supports nested modules, namespacing, and selective free resolution, making it easier to manage complex projects and avoid symbol conflicts.

---

## Macro System Overview

- **Custom Macros:**  
  Create your own constructs using `DEFMACRO`. For example:
  ```lisp
  (DEFMACRO simple-equal (a b)
    `(== ,a ,b))
  ```
  This macro generates code that compares two values using C’s `==`.

- **Importing Macros:**  
  Use the `import` directive to bring in external macro packages while avoiding namespace collisions:
  ```lisp
  (import "bi-helper.lisp" :bi "init arg")
  (import "helper.lisp" nil '(1 3 7 10))
  ```

- **Inline Code Generation and Build Integration:**  
  Macros can also include source or header targets for dynamic code inclusion during compile time, blending code generation with build processes.

- **Inline Methods:**  
  Define methods within header files for quick functionality without leaving the declaration context. Use `$` for field access and `->` for method calls.

---

## Getting Started

1. **Installation:**  
   - **SBCL:** Install [SBCL](http://www.sbcl.org) to run the Lisp interpreter.
   - **Clang:** Ensure `clang` is installed (via `apt`, `brew`, etc.). The expected version is around `(clang-1700.0.13.3)`.
   - **Libtool:** Install [GNU Libtool](https://www.gnu.org/software/libtool) to aid in compiling and linking.

2. **Directory Structure:**  
   Place the Cicili folder within `~/common-lisp` so that ASDF can locate the packages. Create your Cicili code in files with the `.cicili` or `.lisp` extension.

3. **Compiling Your Code:**  
   To compile, run:
   ```bash
   sbcl --script cicili.lisp your-code.lisp
   ```
   Command-line options like `--verbose` can help with debugging and provide more insight into the build process.

4. **Editor Integration:**  
   If you use Emacs, include the provided `mode.lisp` in your `.emacs` or `init.el` for enhanced syntax highlighting and a smoother coding experience.

---

## Summary for New Developers

- **Expressiveness Meets Efficiency:**  
  Cicili lets you write expressive, concise code with Lisp-like syntax while delivering the performance and control of C.

- **Powerful Macros and Modules:**  
  Use macros to create custom constructs and organize your code into modules, ensuring that your projects remain scalable and maintainable.

- **Safety Features:**  
  Automatic resource management with `defer` minimizes common issues like memory leaks, letting you focus on logic rather than boilerplate.

- **Object-Oriented Capabilities:**  
  With method calls and receiver syntax, writing clean, modular code feels natural even in the low-level environment of C.

Welcome to Cicili—the fusion of high-level expressiveness and low-level power. Start experimenting, extend its features, and enjoy a smoother and more enjoyable path to crafting robust and maintainable C code.

---

*Happy Coding!*

*Gemini opinion on Cicili*
# Cicili: Bridging Expressiveness and Efficiency

Cicili is a programming language designed to combine the high-level expressiveness often found in languages like Lisp with the low-level performance characteristics of C. It achieves this through a Lisp-inspired syntax and a powerful macro system that translates into efficient C code.

## Core Principles

* **Expressiveness:** Write concise and readable code for complex tasks.
* **Efficiency:** Generate C code that compiles to fast and performant executables.
* **Modularity:** Organize and reuse code effectively with a robust module system.
* **Safety:** Reduce common programming errors with features like automatic resource management.

## Key Strengths

* **Powerful Macro System:** Leverage Lisp-style metaprogramming for code generation, syntactic extension, and creating Domain-Specific Languages (DSLs).
* **Automatic Resource Management (`defer`):** Ensure automatic cleanup of resources (memory, files) when a scope is exited, preventing leaks.
* **Lisp-Inspired Syntax:** Benefit from a consistent and highly structured S-expression-based syntax.
* **Object-Oriented Features:** Design modular code using structs with methods and receiver notation.
* **Multi-Return Functions:** Enhance code clarity with functions returning multiple values via inline structs.
* **Lambda Functions:** Utilize anonymous functions for higher-order functions and callbacks.
* **Robust Module System:** Organize code with namespaces and explicit symbol resolution for better maintainability.
* **C Ecosystem Integration:** Seamlessly interact with existing C libraries and tools.
* **Potential C++ Integration:** Explore the possibility of using a C++ compiler backend for expanded features.

## Unique Features

* **Hybrid Approach:** Combines Lisp-style metaprogramming with C-level performance.
* **Scoped Cleanups with `defer`:** Provides a built-in mechanism for reliable resource management.
* **Macro-Driven Language Extension:** Empowers developers to adapt and extend the language.
* **Explicit Symbol Resolution in Modules:** Offers fine-grained control over symbol lookup.

## The Macro System

Cicili's macro system, inspired by Lisp, is a core feature:

* Defined using Lisp syntax (`.lisp` files).
* Operates on the Abstract Syntax Tree (AST) before C translation.
* Enables code generation and syntactic extension.
* Uses `DEFMACRO` for definition and backquote/comma for templates.
* Macros are loaded using the `import` form with optional namespaces.
* `.lisp` files can have `init` functions executed on import.
* Quoted Cicili forms within macros can be processed during loading.

## Getting Started for New Developers

1.  **Installation:** Requires a Lisp implementation (e.g., SBCL), a C compiler (e.g., Clang, GCC), and potentially Libtool. Refer to the installation documentation.
2.  **Basic Syntax:** Learn the S-expression structure of Cicili code.
3.  **Core Language Features:** Understand data types, variables (`var`, `let`), functions (`func`), and control flow.
4.  **Structs and Methods:** Define organized data structures with associated behavior.
5.  **Pointers and Memory Management:** Grasp the concepts of pointers and resource management using `alloc`, `free`, and `defer`.
6.  **Modules:** Organize code and manage namespaces using `module` and `import`.
7.  **The Macro System:** Explore the power of code transformation at compile time.
8.  **`defer`:** Utilize automatic resource cleanup for safer code.
9.  **Building and Running Code:** Learn the compilation and linking process.
10. **Explore Examples:** Study the provided code samples to understand various features.
11. **Refer to Documentation:** Consult the official Cicili documentation for detailed information.

## First Steps

* Start with simple programs to understand the basic syntax.
* Experiment with writing basic macros.
* Make `defer` your go-to for resource management.
* Organize larger projects using the module system.
* Study existing macros to learn best practices.
* Embrace the Lisp-inspired aspects for powerful metaprogramming.

Cicili offers a unique blend of high-level expressiveness and low-level control. While it may have a learning curve, its powerful features can lead to more efficient and maintainable code. Dive in and explore the possibilities!

# Cicili Programming Language
Lisp C Compiler aka. 'Cicili' programming language, which compiles Lisp-like syntax to C code and more extra features like method, lambda, defer.
## Instruction
* Install [SBCL](www.sbcl.org).
* `clang` required for compiling and linking. `apt` or `brew` can be used to install [Clang](https://clang.llvm.org). Current used version: `(clang-1700.0.13.3)`
* cicili uses [Libtool](https://www.gnu.org/software/libtool) as default for perfoming better compiling and linking `C` code. Install it for your platform and put it in the `PATH` environment variable. Compiler and linker could be set in `config.lisp` file. Current used version: `(GNU libtool) 2.5.4`
* Download and copy cicili folder to `~/common-lisp` for enabling [ASDF](https://common-lisp.net/project/asdf) access to cicili package.
* Write your own cicili code and save it in `.cicili` or `.lisp` extension.
* Copy `cicili.lisp` file from source folder into your project path.
* Send your file as an argument to cicili.lisp. `sbcl --script cicili.lisp test.lisp`
* If you are using EMACS editor, copy `mode.lisp` file content into `.emacs` or `.emacs.d/init.el` file for syntax highlighting.
## * New Features
* cicili now uses `IR` (Intermediate Representation) to handle more clauses and features.
* modularizing cicili code makes clarity and easy to follow C code but makes debugging harder. refer to [module](test/module) test folder `module.lisp` sample.
* `lambda` clause allows developer to write in-place function for sending as other function argument or `defer` destructure. refer to [lambda](test/lambda) test folder `lambda.lisp` sample.
* `defer` attribute. only available for variables defined by `let` expression. Allows developers to set a function how to destruct a variable or a pointer. refer to [defer](test/lambda) test folder `defer.lisp` sample.
* auto deferral is a way let expressions will defined to automatically release dynamic memory allocated by `alloc` clause. refer to [alloc](test/lambda) test folder `defer.lisp` sample.
* `method` clause will receive current instance or pointer as `this` parameter. Methods are defined outside a structure by access method operator `->` placed between struct name and method name like `Employee->Sign`.  refer to [method](test/method) test folder `method.lisp` sample.
* `auto` variable type simplifies lambda and function pointer variables. also `typeof` clause is added to use other variables type for define another variable.
* `inline struct` can be defined in variable declaration, function parameters or outputs which permits to return multiple values from a function. refer to [multi](test) `multi.lisp` file for complex samples.
* `func` type allows developer to define a function pointer which wasn't available before.
* refer to [basic](test) `basic.lisp` file for some struct definition samples.
* refer to [control](test) `control.lisp` file for some control structures samples.
## Identifiers
For basic variable definition refer to [var](test) `var.lisp` file.
```lisp
(var int amount)
(var double total)
(var double * total2)
```
```c
int amount;
double total;
double * total2;
```
## Constants
```lisp
(var const int SIDE . 10)
(var const int * SIDE1 . #'(aof SIDE))
(var const int * const SIDE2 . #'(aof SIDE1))
```
```c
const int SIDE = 10;
const int * SIDE1 = &SIDE;
const int * const SIDE2 = &SIDE1;
```
## Operators
### Arithmetic
cicili Operator | C Operator
------------ | ----------
`+`|`+`
`-`|`-`
`*`|`*`
`/`|`/`
`%`|`%`
```lisp
(set total (+ total amount))

(let ((int i . 3)
      (int j . 7)
      (int k))
  (set k (+ i j)))
```
```c
total = total + amount;

{
  int i = 3, j = 7, k;
  k = i + j;
}
```
### Increment and Decrement
cicili Operator | C Operator
------------ | ----------
`++`|prefix `++`
`--`|prefix `--`
`1+`|postfix `++`
`1-`|postfix `--`
```lisp
(source "main.c" ()
  (include <stdio.h>)

  (func main ()
    (let ((int a . 5)
          (int b . 5))
          
      ;; Print them and decrementing each time.
      ;; Use postfix mode for a and prefix mode for b.
      
      (printf "\n%d %d" (1- a) (-- b))
      (printf "\n%d %d" (1- a) (-- b))
      (printf "\n%d %d" (1- a) (-- b))
      (printf "\n%d %d" (1- a) (-- b))
      (printf "\n%d %d" (1- a) (-- b)))))
```
```c
#include <stdio.h>

int main()
{
  {
    int a = 5, b = 5;
    
    //Print them and decrementing each time.
    //Use postfix mode for a and prefix mode for b.
    
    printf("\n%d %d", a--, --b);
    printf("\n%d %d", a--, --b);
    printf("\n%d %d", a--, --b);
    printf("\n%d %d", a--, --b);
    printf("\n%d %d", a--, --b);
  }
}
```
### Relational
cicili Operator | C Operator
------------ | ----------
`==`|`==`
`!=`|`!=`
`>`|`>`
`<`|`<`
`>=`|`>=`
`<=`|`<=`
### Logical
cicili Operator | C Operator
------------ | ----------
`and`|`&&`
`or`|`\|\|`
`not`|`!`
### Bitwise
cicili Operator | C Operator
------------ | ----------
`<<`|`<<`
`>>`|`>>`
`~`|`~`
`bitand`|`&`
`bitor`|`\|`
`xor`|`^`
`^`|`^`
### Assignment
cicili Operator | C Operator
------------ | ----------
`set`|`=`
`+=`|`+=`
`-=`|`-=`
`*=`|`*=`
`/=`|`/=`
`%=`|`%=`
`<<=`|`<<=`
`>>=`|`>>=`
### Conditional
cicili Operator | C Operator
------------ | ----------
`?`|`?:`
```lisp
(set a (? (== b 2) 20 30))
```
```c
a = (b == 2) ? 20 : 30;
```
### Special
cicili Operator | C Operator
------------ | ----------
`sizeof`|`sizeof()`
`typeof`|`typeof()`
`aof`|`&`
`cof`|`*`
## Data Types
ANSI C provides three types of data types:

* Primary(Built-in) Data Types: void, int, char, double and float.
* Derived Data Types: Array, References, and Pointers.
* User Defined Data Types: Structure, Union, and Enumeration.

cicili supports declaration and definition of all ANCI C data types.
cicili Data Type | C Data Type
------------- | -----------
`nil`|`NULL`
`void`|`void`
`bool`|`bool`
`char`|`char`
`uchar`|`unsigned char`
`short`|`short`
`ushort`|`unsigned short`
`int`|`int`
`uint`|`unsigned int`
`long`|`long`
`ulong`|`unsigned long`
`llong`|`long long`
`ullong`|`unsigned long long`
`i8`|`int8_t`
`u8`|`uint8_t`
`i16`|`int16_t`
`u16`|`uint16_t`
`i32`|`int32_t`
`u32`|`uint32_t`
`i64`|`int64_t`
`u64`|`uint64_t`
`i128`|`__int128`
`u128`|`unsigned __int128`
`float`|`float`
`double`|`double`
`real`|`long double`
`auto`|`__auto_type`
## Variable
```lisp
(source "main.c" ()
        (func main ()
              (let ((double price . 500.4)                         ; atom initialization
                    (double price_array [] . '{100.2 230.7 924.8}) ; list initialization
                    (double price_calc . #'(calculate_price))      ; initialization by output of a function
                    (auto identity . '(lambda ((int x)) (out int) (return x))))))) ; lambda initialization
```
```c
int __ciciliLambda_main_178 (int x) {
  return x ;
}
int main () {
  { 
    double price = 500.4;
    double price_array[] = {100.2, 230.7, 924.8};
    double price_calc = calculate_price ();
    __auto_type identity = __ciciliLambda_main_178 ;
  } 
}
```
### Free Variable Declaration and Initialization
A free variable can has some attributes or storage class. each attribute enclosed in braces or parentheses. free variables can only be defined as global variable for inside function variable declaration `let` clause should be used.
* {auto}
* {register}
* {static}
* {extern}
```lisp
{auto} (var int width)
{register} (var int height . 5)
(var char letter . #\A)
(var float age)
{extern} (var float area)
{static} (var double d)

;; actual initialization
(set width 10)
(set age 26.5)
```
```c
auto int width; 
register height = 5;
char   letter = 'A';
float  age;
extern float area;
static double d;

/* actual initialization */
width = 10;
age = 26.5;
```
### Scoped Variable Declaration and Initialization
A scoped variable can has some attributes or storage class. each attribute enclosed in braces or parentheses. `let` clause allows to declare a `defer` destructure for every variable as a lambda or a function which receives a pointer of variable type. useful for free struct pointers or any resource which stored inside a struct.
* {auto}
* {register}
* {static}
* {defer `'(lambda ((int * intPtr)) (printf "int gone out of scope\n"))`} variable destructor
```lisp
(source "main.c" ()
        (func main ()
              (let ({static} (int width . 3)
                    {register} (int height . 4)
                    {defer '(lambda ((Employee ** empPtr))
                              (free (cof empPtr))
                              (printf "from defer, emp is freed\n"))}
                    (Employee * emp . #'(alloc (sizeof Employee))))
                (printf "area: %d" (* width height)))))
```
```c
void __ciciliLambda_main_178 (Employee ** empPtr) {
  free ((*empPtr));
  printf ("from defer, emp is freed\n");
}
int main () {
  { 
    static int width = 3;
    register int height = 4;
    Employee * emp __attribute__((__cleanup__(__ciciliLambda_main_178))) = ((Employee *)malloc(sizeof(Employee)));
    printf ("area: %d", (width * height));
  } 
}
```
### Assignment
```lisp
(set width 60)
(set age 35)
(set width 65 age 40) ; multi assignment
```
```c
width = 60;
age = 31;
width = 65;
age = 40;
```
```lisp
(source "main.c" ()
  (include <stdio.h>)
  
  (func main ()
    (let ((int age . 33))
      (printf "I am %d years old.\n" age))))
```
```c
#include <stdio.h>

int main()
{
  {
    int age = 33;
    printf("I am %d years old.\n", age);
  }
}
```
## Type Casting
```lisp
(source "main.c" ()
  (include <stdio.h>)
  (func main ()
    (let ((float a))
      (set a (cast float (/ 15 6)))
      (printf "%f" a))))
```
```c
#include <stdio.h>
main ()
{
  {
    float a;
    a = (float) 15 / 6;
    printf("%f", a);
  }
}
```
## Program Structure
cicili program involves one or many header or source forms calling targets.
targets are translating its content forms to C code. header targets only compile its content without resolving, but source targets resolves attribue and method access of any struct variable. for example 
```lisp
(let ((Employee emp)
      (Employee * empPtr))
  ($ emp id)     ; do not needd resolve
  ($ empPtr id)) ; resolves pointer access
```
```c
{
  Employee emp;
  Employee * empPtr;
  emp.id;
  empPtr->id;
}
```
each target must has a target c file, and a list of feature arguments.
### Features
All features could be omitted or if available accept `#t` for default behaviour or `#f` for do nothing.
* <b>:std</b>: writes standard libraries inclusion at top of target file.
```lisp
(source "main.c"
  (:std #t)
  ;; some forms
  )
```
```c
#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
```
* <b>:compile</b>: used for compiling target file. Dafault behaviour is `-c target.c`. Could be a list of arguments that will send to compiler which has been set in `config.lisp`.
* <b>:link</b>: used for linking and builing target file as library or executable. It has not default behaviour. Could be a list of arguments that will send to linker which has been set in `config.lisp`.
```lisp
;; MyMath library declaration
(header "mymath.h"
  (:compile #f)

  (guard __MYMATH_H__
    {decl} (func obj1_does ((int) (int)) (out int))
    {decl} (func obj2_does ((int) (int)) (out int))
    {decl} (func obj3_does ((int) (int)) (out int))))

;; Default compilation
(source "obj1.c"
  (:compile #t)
  (include "mymath.h")
  (func obj1_does ((int x) (int y)) (out int)
	    (return (+ x y))))

;; Custom compilation
(source "obj2.c"
  (:compile "-c obj2.c -o objmul.lo")
  (include "mymath.h")
  (func obj2_does ((int x) (int y)) (out int)
	    (return (* x y))))

;; Library creation and linking
(source "obj3.c"
  (:compile #t :link "-o libMyMath.la -L{$CWD} obj1.lo objmul.lo obj3.lo")
  (include "mymath.h")
  (func obj3_does ((int x) (int y)) (out int)
	    (return (obj1_does (obj2_does x y) (obj2_does x y)))))

;; Executable creation and linking
(source "main.c"
  (:std #t :compile #t :link "-o CompileTest -L{$CWD} main.lo -lMyMath")
  (include "mymath.h")
  (func main ((int argc) (char * argv []))
	    (if (!= argc 3)
		    (block
		        (printf "two digits needed!")
		      (return EXIT_FAILURE)))
	    (let ((int x . #'(atoi (nth 1 argv)))
		      (int y . #'(atoi (nth 2 argv))))
	      (printf "MyMath lib outputs: %d\n" (obj3_does x y)))
	    (return EXIT_SUCCESS)))
```
```
cicili % sbcl --script cicili.lisp test/test.lisp
software type: "Darwin"
arg specified: test/mylib.lisp
cicili: specifying target mymath.h
cicili: resolving target mymath.h
cicili: specifying target obj1.c
cicili: resolving target obj1.c.run1.c
run out 1 > glibtool: compile:  clang -g -O "" -c obj1.c.run1.c  -fno-common -DPIC -o .libs/obj1.c.run1.o 
run out 1 > glibtool: compile:  clang -g -O "" -c obj1.c.run1.c -o obj1.c.run1.o >/dev/null 2>&1 
cicili: resolving target obj1.c.run2.c
run out 2 > glibtool: compile:  clang -g -O "" -c obj1.c.run2.c  -fno-common -DPIC -o .libs/obj1.c.run2.o 
run out 2 > glibtool: compile:  clang -g -O "" -c obj1.c.run2.c -o obj1.c.run2.o >/dev/null 2>&1 
cicili: resolving target obj1.c.run3.c
run out 3 > glibtool: compile:  clang -g -O "" -c obj1.c.run3.c  -fno-common -DPIC -o .libs/obj1.c.run3.o 
run out 3 > glibtool: compile:  clang -g -O "" -c obj1.c.run3.c -o obj1.c.run3.o >/dev/null 2>&1 
cicili: compiling target obj1.c
glibtool: compile:  clang -g -O "" -c obj1.c  -fno-common -DPIC -o .libs/obj1.o
glibtool: compile:  clang -g -O "" -c obj1.c -o obj1.o >/dev/null 2>&1
cicili: specifying target obj2.c
cicili: resolving target obj2.c.run1.c
run out 1 > glibtool: compile:  clang -g -O "" -c obj2.c  -fno-common -DPIC -o .libs/objmul.o 
run out 1 > glibtool: compile:  clang -g -O "" -c obj2.c -o objmul.o >/dev/null 2>&1 
cicili: resolving target obj2.c.run2.c
run out 2 > glibtool: compile:  clang -g -O "" -c obj2.c  -fno-common -DPIC -o .libs/objmul.o 
run out 2 > glibtool: compile:  clang -g -O "" -c obj2.c -o objmul.o >/dev/null 2>&1 
cicili: resolving target obj2.c.run3.c
run out 3 > glibtool: compile:  clang -g -O "" -c obj2.c  -fno-common -DPIC -o .libs/objmul.o 
run out 3 > glibtool: compile:  clang -g -O "" -c obj2.c -o objmul.o >/dev/null 2>&1 
cicili: compiling target obj2.c
glibtool: compile:  clang -g -O "" -c obj2.c  -fno-common -DPIC -o .libs/objmul.o
glibtool: compile:  clang -g -O "" -c obj2.c -o objmul.o >/dev/null 2>&1
cicili: specifying target obj3.c
cicili: resolving target obj3.c.run1.c
run out 1 > glibtool: compile:  clang -g -O "" -c obj3.c.run1.c  -fno-common -DPIC -o .libs/obj3.c.run1.o 
run out 1 > glibtool: compile:  clang -g -O "" -c obj3.c.run1.c -o obj3.c.run1.o >/dev/null 2>&1 
run out 1 > glibtool: link: rm -fr  .libs/libMyMath.a .libs/libMyMath.la 
run out 1 > glibtool: link: ar cr .libs/libMyMath.a .libs/obj1.o .libs/objmul.o .libs/obj3.o  
run out 1 > glibtool: link: ranlib .libs/libMyMath.a 
run out 1 > glibtool: link: ( cd ".libs" && rm -f "libMyMath.la" && ln -s "../libMyMath.la" "libMyMath.la" ) 
cicili: resolving target obj3.c.run2.c
run out 2 > glibtool: compile:  clang -g -O "" -c obj3.c.run2.c  -fno-common -DPIC -o .libs/obj3.c.run2.o 
run out 2 > glibtool: compile:  clang -g -O "" -c obj3.c.run2.c -o obj3.c.run2.o >/dev/null 2>&1 
run out 2 > glibtool: link: rm -fr  .libs/libMyMath.a .libs/libMyMath.la 
run out 2 > glibtool: link: ar cr .libs/libMyMath.a .libs/obj1.o .libs/objmul.o .libs/obj3.o  
run out 2 > glibtool: link: ranlib .libs/libMyMath.a 
run out 2 > glibtool: link: ( cd ".libs" && rm -f "libMyMath.la" && ln -s "../libMyMath.la" "libMyMath.la" ) 
cicili: resolving target obj3.c.run3.c
run out 3 > glibtool: compile:  clang -g -O "" -c obj3.c.run3.c  -fno-common -DPIC -o .libs/obj3.c.run3.o 
run out 3 > glibtool: compile:  clang -g -O "" -c obj3.c.run3.c -o obj3.c.run3.o >/dev/null 2>&1 
run out 3 > glibtool: link: rm -fr  .libs/libMyMath.a .libs/libMyMath.la 
run out 3 > glibtool: link: ar cr .libs/libMyMath.a .libs/obj1.o .libs/objmul.o .libs/obj3.o  
run out 3 > glibtool: link: ranlib .libs/libMyMath.a 
run out 3 > glibtool: link: ( cd ".libs" && rm -f "libMyMath.la" && ln -s "../libMyMath.la" "libMyMath.la" ) 
cicili: compiling target obj3.c
glibtool: compile:  clang -g -O "" -c obj3.c  -fno-common -DPIC -o .libs/obj3.o
glibtool: compile:  clang -g -O "" -c obj3.c -o obj3.o >/dev/null 2>&1
glibtool: link: rm -fr  .libs/libMyMath.a .libs/libMyMath.la
glibtool: link: ar cr .libs/libMyMath.a .libs/obj1.o .libs/objmul.o .libs/obj3.o 
glibtool: link: ranlib .libs/libMyMath.a
glibtool: link: ( cd ".libs" && rm -f "libMyMath.la" && ln -s "../libMyMath.la" "libMyMath.la" )
cicili: specifying target main.c
cicili: resolving target main.c.run1.c
run out 1 > glibtool: compile:  clang -g -O "" -c main.c.run1.c  -fno-common -DPIC -o .libs/main.c.run1.o 
run out 1 > glibtool: compile:  clang -g -O "" -c main.c.run1.c -o main.c.run1.o >/dev/null 2>&1 
run out 1 > glibtool: link: clang -g -O "" -o CompileTest .libs/main.o  -L/Users/a1/Projects/GitHub/cicili/test/ /Users/a1/Projects/GitHub/cicili/test/.libs/libMyMath.a  
cicili: resolving target main.c.run2.c
run out 2 > glibtool: compile:  clang -g -O "" -c main.c.run2.c  -fno-common -DPIC -o .libs/main.c.run2.o 
run out 2 > glibtool: compile:  clang -g -O "" -c main.c.run2.c -o main.c.run2.o >/dev/null 2>&1 
run out 2 > glibtool: link: clang -g -O "" -o CompileTest .libs/main.o  -L/Users/a1/Projects/GitHub/cicili/test/ /Users/a1/Projects/GitHub/cicili/test/.libs/libMyMath.a  
cicili: resolving target main.c.run3.c
run out 3 > glibtool: compile:  clang -g -O "" -c main.c.run3.c  -fno-common -DPIC -o .libs/main.c.run3.o 
run out 3 > glibtool: compile:  clang -g -O "" -c main.c.run3.c -o main.c.run3.o >/dev/null 2>&1 
run out 3 > glibtool: link: clang -g -O "" -o CompileTest .libs/main.o  -L/Users/a1/Projects/GitHub/cicili/test/ /Users/a1/Projects/GitHub/cicili/test/.libs/libMyMath.a  
cicili: compiling target main.c
glibtool: compile:  clang -g -O "" -c main.c  -fno-common -DPIC -o .libs/main.o
glibtool: compile:  clang -g -O "" -c main.c -o main.o >/dev/null 2>&1
glibtool: link: clang -g -O "" -o CompileTest .libs/main.o  -L/Users/a1/Projects/GitHub/cicili/test/ /Users/a1/Projects/GitHub/cicili/test/.libs/libMyMath.a
```
### Sections
* Documentations: starts with semi-colon(s) ";"
```lisp
;;;; about a lisp file
;;; author, licence and/or documentation about each target
(var long height) ; description of a form
(func sqr ((double a)) 
  (out double)
  ;; some commented code or documentation inside code
  (return (* a a)))
```
* Preprocessor Forms: a form which starts with at-sign "@" and accepts one argument. code form is used for writing C code inside cicili.
```lisp
(@define (code "SHA1_ROTL(bits, word) (((word) << (bits)) | ((word) >> (32-(bits)))"))

(struct SHA512Context
  (@ifdef USE_32BIT_ONLY)
  (member uint32_t Intermediate_Hash[(/ SHA512HashSize 4)]) ; Message Digest
  (member uint32_t Length[4])                               ; Message length in bits
  (@else)                                                   ; !USE_32BIT_ONLY
  (member uint64_t Intermediate_Hash[(/ SHA512HashSize 8)]) ; Message Digest
  (member uint64_t Length_High)
  (member uint64_t Length_Low)                              ; Message length in bits
  (@endif)                                                  ; USE_32BIT_ONLY
  (member int_least16_t Message_Block_Index)                ; Message_Block array index
  (member uint8_t Message_Block[SHA512_Message_Block_Size]) ; 1024-bit message blocks
  (member int Computed)                                     ; Is the hash computed?
  (member int Corrupted))                                   ; Cumulative corruption code
```
```c
#define SHA1_ROTL(bits, word) (((word) << (bits)) | ((word) >> (32-(bits)))

typedef struct SHA512Context {
#ifdef USE_32BIT_ONLY
  uint32_t Intermediate_Hash [SHA512HashSize / 4];
  uint32_t Length [4];
#else
  uint64_t Intermediate_Hash [SHA512HashSize / 8];
  uint64_t Length_High;
  uint64_t Length_Low;
#endif
  int_least16_t Message_Block_Index;
  uint8_t Message_Block [SHA512_Message_Block_Size];
  int Computed;
  int Corrupted;
} SHA512Context;
```
* Main Function: The main function is where program execution begins. Every cicili program must contain only one main function.
## Decision Making
### if
If form accepts 2 or 3 argument. condition, form for true evaluation of condition and form for false evaluation. third part(else) could be omitted. use ```block``` form if you need more forms in each part.
```lisp
(let ((int a . 5)
      (int b . 6))
  (if (> a b)
     (printf "a is greater")
    (printf "maybe b is greater")))
```
```c
{
  int a = 5;
  int b = 6;
  if (a > b)
    printf("a is greater");
  else
    printf("maybe b is greater");
}
```
```lisp
(let ((int a . 5)
      (int b . 6))
  (if (> a b)
     (block
       (printf "a is greater")
       (set a (* a b)))
    (block
      (printf "maybe b is greater")
      (set b (* b a)))))
```
```c
{
  int a = 5;
  int b = 6;
  if (a > b) {
    printf("a is greater");
    a = a * b;
  } else {
    printf("maybe b is greater");
    b = b * a;
  }
}
```
### switch
```lisp
(let ((int a))
  (printf "Please enter a number between 1 and 5: ")
  (scanf "%d" (aof a))
  
  (switch a
    (case 1 (printf "You chose One")   break)
    (case 2 (printf "You chose Two")   break)
    (case 3 (printf "You chose Three") break)
    (case 4 (printf "You chose Four")  break)
    (case 5 (printf "You chose Five")  break)
    (default (printf "Invalid Choice."))))
```
```c
{
  int a;
  printf("Please enter a number between 1 and 5: ");
  scanf("%d", &a);
    
  switch (a) {
    case 1:
      printf("You chose One");
      break;
    case 2:
      printf("You chose Two");
      break;
    case 3:
      printf("You chose Three");
      break;
    case 4:
      printf("You chose Four");
      break;
    case 5:
      printf("You chose Five.");
      break;
    default:
      printf("Invalid Choice");
      break;
  }
}
```
## Loops
### while
```lisp
(let ((int n . 1)
      (int times . 5))
  (while (<= n times)
    (printf "cicili while loops: %d\n" n)
    (1+ n)))
```
```c
{
  int n = 1, times = 5;

  while (n <= times) {
      printf("C while loops: %d\n", n);
      n++;
  }
}
```
### do
```lisp
(let ((int n . 1)
      (int times . 5))
  (do
    (printf "cicili do loops: %d\n" n)
    (1+ n)
    (<= n times))) ; last form of do clause checks the condition
```
```c
{
  int n = 1, times = 5;

  do {
      printf("C do loops: %d\n", n);
      n++;
  } while (n <= times)
}
```
### for
```lisp
(let ((int n)
      (int times))
               (for ((n . 1)
                      (times . 5))     ; initialize
                  (<= n times)         ; test
                  ((1+ n))             ; step
                  (printf "cicili for loop: %d\n" n)))

              (for ((int n . 1)
                    (times . 2))     ; initialize
                (<= n times)         ; test
                ((1+ n))             ; step
                (printf "another initialization for loop: %d\n" n))
```
```c
  {
    int n;
    int times;
    for ( n = 1, times = 5; (n <= times); (n ++)) {
      printf ("cicili for loop: %d\n", n);
    } 
  }
  for (int n = 1, times = 2; (n <= times); (n ++)) {
    printf ("another initialization for loop: %d\n", n);
  } 
```
## Function
cicili has some points on functions:
* Use out form for setting the return type. out form must be first form of a function after arguments list. A fucntion without out form will returns void instead of main which returns int.
* Function's attributes must set in declaration time. each attribute enclosed in braces or parentheses.
    * {decl}    
    * {static}
    * {inline}
    * {extern}
    * {resolve #f) means do not resolve this function
```lisp
(source "main.c"
  (:std #t :compile #t :link #t)

  ;; function declaration
  {decl} (func addition ((int * a) (int * b)) (out int))
  
  (func main ()
        ;; local variable definition
        (let ((int answer)
              (int num1 . 10)
              (int num2 . 5)
              (func aFuncPtr ((int * _) (int * _)) (out int) . addition)) ; function pointer
          
          ;; calling a function to get addition value
          (set answer (addition (aof num1) (aof num2)))
          (printf "The addition of two numbers is: %d\n" answer)

          (set answer (aFuncPtr (aof num1) (aof num2)))
          (printf "The addition of two numbers by function pointer is: %d\n" answer))

        (return 0))
  
  ;; function returning the addition of two numbers
  (func addition ((int * a) (int * b))
        (out int)
        (return (+ (cof a) (cof b)))))
```
```c
#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
int addition (int * a, int * b);
int main () {
  {
    int answer;
    int num1 = 10;
    int num2 = 5;
    int (*aFuncPtr) (int * , int * ) = addition;
    answer  = addition ((&num1), (&num2));
    printf ("The addition of two numbers is: %d\n", answer);
    answer  = aFuncPtr ((&num1), (&num2));
    printf ("The addition of two numbers by function pointer is: %d\n", answer);
  }
  return 0;
}
int addition (int * a, int * b) {
  return ((*a) +  (*b));
}
```
* Functions can return multiple values by inline structs.
```lisp
(source "main.c" (:std #t :compile #t :link #t)
        (func aMultiReturnFunc ((int x) (int y)) (out '{(int a) (int b)})
              (return '{ x y }))

        (func aMultiReturnFuncS ((int x) (int y)) (out '{(int a) (int b)})
              (let (((typeof (aMultiReturnFuncS x y)) s . '{ x y })) 
                (return s)))
        
        (func main ()
              (let ((int n . 3)
                    (int t . 4)
                    ((typeof (aMultiReturnFunc 1 1)) mr)
                    ((typeof (aMultiReturnFuncS 1 1)) mrt))
                (set mr (aMultiReturnFunc n t))
                (printf "a: %d, b: %d\n" ($ mr a) ($ mr b))
                (set mrt (aMultiReturnFuncS (++ n) (++ t)))
                (printf "a: %d, b: %d\n" ($ mrt a) ($ mrt b)))))
```
```c
typedef struct __ciciliStruct_aMultiReturnFunc_177 {
  int a;
  int b;
} __ciciliStruct_aMultiReturnFunc_177;
__ciciliStruct_aMultiReturnFunc_177 aMultiReturnFunc (int x, int y) {
  return ((__ciciliStruct_aMultiReturnFunc_177){x , y});
}
typedef struct __ciciliStruct_aMultiReturnFuncS_178 {
  int a;
  int b;
} __ciciliStruct_aMultiReturnFuncS_178;
__ciciliStruct_aMultiReturnFuncS_178 aMultiReturnFuncS (int x, int y) {
  { 
    typeof(aMultiReturnFuncS (x , y)) s = {x , y};
    return ((__ciciliStruct_aMultiReturnFuncS_178)s);
  } 
}
int main () {
  { 
    int n = 3;
    int t = 4;
    typeof(aMultiReturnFunc (1, 1)) mr;
    typeof(aMultiReturnFuncS (1, 1)) mrt;
    mr = aMultiReturnFunc (n , t);
    printf ("a: %d, b: %d\n", (mr . a), (mr . b));
    mrt = aMultiReturnFuncS ((++n ), (++t ));
    printf ("a: %d, b: %d\n", (mrt . a), (mrt . b));
  } 
}
```
## Array
### Define
```lisp
(var double amount [5])
```
### Initialize
```lisp
(var int digits [] . '{ 1 2 3 4 5 })
(var char hw [][5] . '{ "Hello" "World" })
```
```c
int digits[] = {1, 2, 3, 4, 5};
char hw[][5] = { "Hello" "World" };
```
```lisp
(var int myArray [5])

;; Initializing elements of array seperately
(for ((int n . 0))
  (< n (/ (sizeof myArray) (sizeof int)))
  ((1+ n))
  (set (nth n myArray) n))
```
```c
int myArray[5];

// Initializing elements of array seperately
for(int n = 0; n < sizeof(myArray) / sizeof(int); n++)
{
  myArray[n] = n;
}
```
## String
```lisp
(var char name [6] . '{#\C #\l #\o #\u #\d #\Null})
(var char name []  . "Cloud")
(var char * name   . "Cloud")
```
```c
char name[6] = {'C', 'l', 'o', 'u', 'd', '\0'};
char name[]  = "Cloud";
char * name  = "Cloud";
```
### Special Characters
`#\Null`
`#\Space`
`#\Newline`
`#\Tab`
`#\Page`
`#\Rubout`
`#\Linefeed`
`#\Return`
`#\Backspace`
## Pointer
```lisp
(var int * width)
(var int * letter)
```
```c
int  *width;
char *letter;
```
```lisp
(source "main.c" ()
  (include <stdio.h>)
  
  (func main ((int argc) (char * argv []))
    (let ((int n . 20)
          (int * pntr))  ; actual and pointer variable declaration
      (set pntr (aof n)) ; store address of n in pointer variable
      (printf "Address of n variable: %x\n" (aof n))
      
      ;; address stored in pointer variable
      (printf "Address stored in pntr variable: %x\n" pntr)

      ;; access the value using the pointer
      (printf "Value of *pntr variable: %d\n" (cof pntr)))
    (return 0))
```
```c
#include<stdio.h>

int main (int argc, char *argv[])
{
  {
    int n = 20, *pntr;  /* actual and pointer variable declaration */
    pntr = &n;          /* store address of n in pointer variable  */
    printf("Address of n variable: %x\n", &n);

    /* address stored in pointer variable */   
    printf("Address stored in pntr variable: %x\n", pntr);

    /* access the value using the pointer */   
    printf("Value of *pntr variable: %d\n", *pntr);
  }
  return 0;
}
```
## Dynamic Memory Allocation
C dynamic memory allocation functions `malloc()`, `calloc()`, `realloc()`, `free()` are available. Other keyword `alloc` that works in `let` initialization part which automatically defers and freeing allocated memory when the variable gone out of let scope. Auto deferral could be replaced by {defer (aFuncPonter | lambda)} which takes a pointer to pointer variable.
```lisp
(let ((char * mem_alloc . #'(malloc (* 15 (sizeof char))))) ; memory allocated dynamically
  (if (== mem_alloc nil) (printf "Couldn't able to allocate requested memory\n"))
  (free mem_alloc))
```
```c
{    
  char * mem_alloc = malloc(15 * sizeof(char)); /* memory allocated dynamically */
  if (mem_alloc == NULL) {
    printf("Couldn't able to allocate requested memory\n");
  }
  free(mem_alloc);
}
```
Allocation with `alloc` and equivalent code in C:
```lisp
  (func main ()
        (let ({defer '(lambda ((int * xPtr)) (printf "x was %d\n" (cof xPtr)))}
              (int x . 6)
              (int * ax . #'(alloc 5 (sizeof int))))
          (printf "x is %d\n" x))))
```
```c
void __ciciliLambda_main_178 (int * xPtr) {
  printf("x was %d\n", (*xPtr));
}
void __ciciliLambda_main_179 (int ** ax) {
  free((*ax));
}
int main () {
  {
    int x __attribute__((__cleanup__(__ciciliLambda_main_178))) = 6;
    int * ax __attribute__((__cleanup__(__ciciliLambda_main_179))) = ((int *)calloc(5, sizeof(int)));
    printf("x is %d\n", x);
  }
}
```
```lisp
(let ((int n_rows . 4)
      (int n_columns . 5)
      (int ** matrix . #'(alloc (* (* n_rows n_columns) (sizeof int)))))
  (printf "Matrix allocated\n"))
```
```c
void __ciciliLambda_main_178 (int *** matrix) {
  free((*matrix));
}
int main () {
  {
    int n_rows = 4;
    int n_columns = 5;
    int ** matrix __attribute__((__cleanup__(__ciciliLambda_main_178))) = ((int **)malloc(((n_rows * n_columns) * sizeof(int))));
    printf ("Matrix allocated\n");
  }
}
```
Allocation by `alloc` and equivalent `calloc`:
```lisp
(let ((char * safe_alloc . #'(alloc 15 (sizeof char))))
  (printf "Memory allocated safely\n"))
```
```c
void __ciciliLambda_main_178 (char ** safe_alloc) {
  free((*safe_alloc));
}
int main () {
  {
    char * safe_alloc __attribute__((__cleanup__(__ciciliLambda_main_178))) = ((char *)calloc(15, sizeof(char)));
    printf ("Memory allocated safely\n");
  }
}
```
## Structure
`declare` clause is for declaring one or more variable(s) at the end of nested struct declaration just for anonymous structures.
Use `$` form for struct's member access and `->` form for member access of pointer of struct. Both `$` and `->` have other utility if a function defined in source targets and doesn't have `{resolve #f}` attribute. `$` operator resolves attribute access for both instance and pointer variables, also `->` operator won't work for pointer access instead it resolves to method access for structures. `inline` functions or methods in header files also don't have resolving process. Methods can be defined with `method` clause and naming convention `Struct->Method`. All methods have `this` parametr automatically and will receive calling instance or pointer.
```lisp
(header "course.h" ()
        (struct Course
          (member char WebSite [50])
          (member char Subject [50])
          (member int  Price))

        {decl} (method Course->Print ()))

(source "course.c" (:std #t :compile #t :link #t)
        (include "course.h")
        
        (var Course c1 . '{"domain.com" "Compilers" 100})
        (var Course * pc1 . #'(aof c1))
        
        (method Course->Print ()
                (printf "Course: %s in %s for %d$\n" 
                  ($ this Subject) 
                  ($ this WebSite)
                  ($ this Price)))
        
        (func main ()
              (-> c1 Print) 
              (-> pc1 Print)))
```
```c
// course.h
typedef struct Course {
  char WebSite[50];
  char Subject[50];
  int Price;
} Course;
void Course_Print (Course * this);

// course.c
Course c1 = {"domain.com", "Compilers", 100};
Course * pc1 = (&c1);
void Course_Print (Course * this) {
  printf ("Course: %s in %s for %d$\n", (this ->Subject), (this ->WebSite), (this ->Price));
}
int main () {
  Course_Print(&c1);
  Course_Print(pc1);
}
```
## Union
`declare` form is for declaring one or more variable(s) at the end of nested union declaration just for anonymous unions.
Use `$` form for union's member access and `->` form for member access of pointer of union. Union supports resolver like Struct.
```lisp
(struct USHAContext
  (member int whichSha)                 ; which SHA is being used
  (union
    (member SHA1Context   sha1Context)
    (member SHA224Context sha224Context) 
    (member SHA256Context sha256Context)
    (member SHA384Context sha384Context) 
    (member SHA512Context sha512Context)
    (declare ctx)))
```
```c
typedef struct USHAContext {
  int whichSha;
  union {
    SHA1Context sha1Context;
    SHA224Context sha224Context;
    SHA256Context sha256Context;
    SHA384Context sha384Context;
    SHA512Context sha512Context;
  } ctx;
} USHAContext;
```
## Enum
```lisp
(enum
  (shaSuccess . 0)
  (shaNull)            ; Null pointer parameter
  (shaInputTooLong)    ; input data too long
  (shaStateError)      ; called Input after FinalBits or Result
  (shaBadParam))       ; passed a bad parameter
```
```c
enum {
  shaSuccess = 0,
  shaNull,
  shaInputTooLong,
  shaStateError,
  shaBadParam
};
```
## Guard
```lisp
(guard __STUDENT_H__
  (struct Student
    (member char name [50])
    (member char family [50])
    (member int  class_no)))
```
```c
#ifndef __STUDENT_H__
#define __STUDENT_H__
typedef struct Student {
  char name [50];
  char family [50];
  int class_no;
} Student;
#endif /* __STUDENT_H__ */ 
```
## Typedef
```lisp
(typedef int * intptr_t)
```
```c
typedef int * intptr_t;
```
## cicili.lisp Command Line Arguments
`sbcl --script /path/to/cicili.lisp /path/to/some-cicili-file.lisp {args}`
Available arguments:
* --debug : will prints too many details about specifying, resolving and compiling.
* --verbose : adds `-v` option to `clang` and `libtool` commands to print more details about compiling and linking. usefull when linking many complex libraries.

`{$CWD}` placeholder is available inside `:compile` and `:link` command for every targets. 
## C++ Compiler
C++ compiler could be used instead of C compiler then some features availables:
* `&` modifier in function argument for pass by reference.
* Default value for members of structs.
* `func` form for defining a member function inside of structs. Call these methods by `$` member access operator `(($ emp Sign) aDoc)`. 

# Good Luck!
