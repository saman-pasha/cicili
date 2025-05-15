#include <stdio.h>
#include <stdlib.h>
#include "lambda.h"
void Shape_staticDraw (Shape * this) {
  printf ("area from static draw method: %d\n", ((this ->length ) *  (this ->width ) ));
}
int (*aFunc) (int x, int y);
int mulFun (int x, int y) {
  return (x  *  y  );
}
typedef int (*twoIntInputFn_t) (int  , int  );
typedef typeof(aFunc ) otherWayDefFn_t;
static int __ciciliL_111 (int x, int y) {
  return (x  +  y  );
}
static int __ciciliL_119 (int x, int y) {
  return ((x  +  y  ) *  (x  +  y  ) );
}
static int __ciciliL_116 (int x, int y) {
  { /* cicili#Let118 */
    __auto_type addFunVar = __ciciliL_119 ;
    return addFunVar (x , y );
  }
}
static void __ciciliL_126 (twoIntInputFn_t mathFunc, int a, int b) {
  printf ("from lambda as function pointer as parameter: %D\n", mathFunc (a , b ));
}
static void __ciciliL_128 (Shape * shp_ptr) {
  Shape shp = (*shp_ptr );
  printf ("Shape destructured\n");
}
static int __ciciliL_131 (int m, int n) {
  return ((m  *  n  ) +  (m  *  n  ) );
}
static void __ciciliL_133 (Shape * shp) {
  printf ("shape area is: %d\n", ((shp ->length ) *  (shp ->width ) ));
}
static void __ciciliL_135 (Shape * shp) {
  printf ("shape env is: %d\n", (2 *  ((shp ->length ) +  (shp ->width ) ) ));
}
int main () {
  { /* cicili#Let110 */
    __auto_type addFunVar = __ciciliL_111 ;
        int (*addFunVar1) (int  , int  ) = __ciciliL_116;
        void (*doMath) (twoIntInputFn_t  , int  , int  ) = __ciciliL_126;
    int x = 4;
    int y = 5;
    Shape shp __attribute__((__cleanup__(__ciciliL_128 ))) = {10, 20};
    printf ("addition of x and y: %d\n", addFunVar (x , y ));
    aFunc  = mulFun ;
    printf ("product of x by y: %d\n", aFunc (x , y ));
    printf ("combo of x by y: %d\n", addFunVar1 (x , y ));
    doMath (__ciciliL_131 , 6, 7);
    (shp . dynamicDraw ) = __ciciliL_133 ;
    (shp . dynamicDraw )(&shp);
    Shape_staticDraw(&shp);
    __ciciliL_135 (&shp);
    return EXIT_SUCCESS ;
  }
}
