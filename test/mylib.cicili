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
