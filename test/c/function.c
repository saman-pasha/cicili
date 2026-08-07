#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdarg.h>
int check (const char * what , long long got , long long want ) {
  if (got  ==  want  )
    { /* block105 */
      printf ("ok   %-32s %lld\n", what , got );
      return 0;
    }
  else
    { /* block108 */
      printf ("FAIL %-32s got %lld want %lld\n", what , got , want );
      return 1;
    }
  return 1;
}
typedef int (*BinOp) (int a , int b );
int add (int a , int b ) {
  return (a  +  b  );
}
void store_into (int * where , int what ) {
  (*where ) = what ;
}
static int triple (int n ) {
  return (n  *  3 );
}
int ignores_second (int a , int);
int ignores_second (int a , int unused ) {
  return a ;
}
int apply_twice (int (*f) (int n ), int seed ) {
  return f (f (seed ));
}
int sum_all (int count, ...) { va_list ap; int t = 0; va_start (ap, count); for (int i = 0; i < count; i++) t += va_arg (ap, int); va_end (ap); return t; } ;
int sum_all (int count , ...);
typedef struct __ciciliS_divmod_ {
  int q ;
  int r ;
} __ciciliS_divmod_;
static struct __ciciliS_divmod_ divmod (int a , int b ) {
  return ((struct __ciciliS_divmod_){ (a  /  b  ), (a  %  b  )});
}
int * pick (int * xs , int i ) {
  return (&xs [i ]);
}
int __ciciliL_142 (int n ) {
  return (n  *  n  );
}
int __ciciliL_146 (int n ) {
  return (n  *  (n  *  n  ) );
}
int __ciciliL_151 (int n ) {
  return (n  +  2 );
}
void __ciciliL_157 (int * where , int what ) {
  (*where ) = what ;
}
int __ciciliL_161 (int n ) {
  return (n  +  3 );
}
int __ciciliL_167 (int m ) {
  return (m  *  2 );
}
int __ciciliL_164 (int n ) {
  { /* let166 */
      int (*inner) (int m ) = __ciciliL_167 ;
    // ----------
    return (inner (n ) +  2 );
  }
}
int cl_demo (int * base ) {
  return ((*base ) +  2 );
}
int main () {
  { /* let124 */
    int bad  = 0;
    // ----------
    bad  += check ("plain call", add (20, 22), 42) ;
    bad  += check ("static function", triple (14), 42) ;
    bad  += check ("unnamed parameter", ignores_second (42, 99), 42) ;
    { /* let126 */
      int slot  = 0;
      // ----------
      store_into ((&slot ), 42);
      bad  += check ("void function wrote", slot , 42) ;
    }
    { /* let128 */
          int (*op) (int a , int b ) = add ;
      // ----------
      bad  += check ("function pointer variable", op (20, 22), 42) ;
    }
    bad  += check ("function pointer parameter", apply_twice (triple , 2), 18) ;
    { /* let131 */
          int (*ops[]) (int a , int b ) = { add , add };
      // ----------
      bad  += check ("array of function pointers", ops [1](20, 22), 42) ;
      bad  += check ("array of fn ptrs, first", ops [0](1, 2), 3) ;
    }
    { /* let134 */
      BinOp typed_ops [] = { add , add };
      // ----------
      bad  += check ("typedef'd array of fn ptrs", typed_ops [1](20, 22), 42) ;
    }
    bad  += check ("variadic sum", sum_all (4, 1, 2, 3, 36), 42) ;
    { /* let136 */
      typeof(divmod (1, 1)) d ;
      // ----------
      d  = divmod (47, 5);
      bad  += check ("multi return quotient", (d . q), 9) ;
      bad  += check ("multi return remainder", (d . r), 2) ;
    }
    { /* let138 */
      int xs [] = { 1, 2, 3, 4};
      // ----------
      (*pick (xs , 2)) = 42;
      bad  += check ("returned pointer writes", xs [2], 42) ;
    }
    { /* let140 */
          int (*square) (int n ) = __ciciliL_142 ;
      // ----------
      bad  += check ("lambda, explicit func type", square (7), 49) ;
    }
    { /* let145 */
          int (*cube) (int n ) = __ciciliL_146 ;
      // ----------
      bad  += check ("auto on the lambda itself", cube (4), 64) ;
    }
    { /* let150 */
      int called  = __ciciliL_151 (40);
      // ----------
      bad  += check ("auto on a call of a lambda", called , 42) ;
    }
    { /* let154 */
      int sink  = 0;
      // ----------
      { /* let156 */
              void (*store) (int * where , int what ) = __ciciliL_157 ;
        // ----------
        store ((&sink ), 42);
        bad  += check ("auto on a void lambda", sink , 42) ;
      }
    }
    bad  += check ("lambda as argument", apply_twice (__ciciliL_161 , 36), 42) ;
    { /* let163 */
          int (*outer) (int n ) = __ciciliL_164 ;
      // ----------
      bad  += check ("nested lambda", outer (20), 42) ;
    }
    { /* let173 */
      int base  = 40;
      // ----------
      bad  += check ("closure captures", cl_demo ((&base )), 42) ;
    }
    if (bad  ==  0 )
      printf ("function: all ok\n");
    else
      printf ("function: %d FAILED\n", bad );
    return bad ;
  }
}
