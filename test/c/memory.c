#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int frees  = 0;
typedef struct Employee {
  int id ;
  int * payload ;
} Employee;
void free_Employee (Employee * emp_ptr ) {
  (++frees );
  if ((emp_ptr -> payload))
    { /* block105 */
      free ((emp_ptr -> payload));
      (emp_ptr -> payload) = false ;
    }
}
int check (const char * what , long long got , long long want ) {
  if (got  ==  want  )
    { /* block110 */
      printf ("ok   %-32s %lld\n", what , got );
      return 0;
    }
  else
    { /* block113 */
      printf ("FAIL %-32s got %lld want %lld\n", what , got , want );
      return 1;
    }
  return 1;
}
void scoped_cleanup () {
  { /* let116 */
    Employee e  __attribute__((__cleanup__(free_Employee ))) = { 7, false };
    // ----------
    (e . payload) = ((int *)malloc (sizeof(int)));
    (*(e . payload)) = 42;
  }
}
void __ciciliL_120 (int ** block ) {
  free (((void *)(*block )));
}
int scoped_plain_free () {
  { /* let119 */
    int * block  __attribute__((__cleanup__(__ciciliL_120 ))) = malloc ((4 *  sizeof(int) ));
    // ----------
    block [0] = 11;
    return block [0];
  }
  return 0;
}
void __ciciliL_125 (int * n ) {
  (++frees );
}
void scoped_forms () {
  { /* let124 */
    int n  __attribute__((__cleanup__(__ciciliL_125 ))) = 1;
    // ----------
    ((void)n );
  }
}
typedef struct ciciliN2hqlP47XhAFSQEMC9ugAKHVfGo_ {
  int * out_id ;
  int id ;
} ciciliN2hqlP47XhAFSQEMC9ugAKHVfGo_;
void __ciciliL_133 (struct ciciliN2hqlP47XhAFSQEMC9ugAKHVfGo_ * ciciliDefer130 ) {
  int * out_id  = (ciciliDefer130 -> out_id);
  int id  = (ciciliDefer130 -> id);
  (*out_id ) = id ;
}
static void scoped_defer_star (int * out_id , int id ) {
  struct ciciliN2hqlP47XhAFSQEMC9ugAKHVfGo_ ciciliDefer130  __attribute__((__cleanup__(__ciciliL_133 ))) = { out_id , id };
  (*out_id ) = 0;
}
void __ciciliL_148 (int ** one ) {
  free (((void *)(*one )));
}
void __ciciliL_152 (int ** many ) {
  free (((void *)(*many )));
}
int main () {
  { /* let137 */
    int bad  = 0;
    // ----------
    { /* let139 */
      int n  = 42;
      int * p  = false ;
      // ----------
      p  = (&n );
      bad  += check ("deref", (*p ), 42) ;
      (*p ) = 43;
      bad  += check ("write through", n , 43) ;
      { /* let141 */
        int * q  = false ;
        // ----------
        bad  += check ("null pointer", ((q ) ? 1 : 0), 0) ;
      }
    }
    { /* let143 */
      int xs [] = { 10, 20, 30, 40};
      int * p  = false ;
      // ----------
      p  = xs ;
      bad  += check ("p[0]", p [0], 10) ;
      bad  += check ("p[2]", p [2], 30) ;
      p  = (p  +  1 );
      bad  += check ("after p + 1", p [0], 20) ;
      bad  += check ("pointer difference", (p  -  xs  ), 1) ;
    }
    { /* let145 */
      int n  = 7;
      int * p  = false ;
      int ** pp  = false ;
      // ----------
      p  = (&n );
      pp  = (&p );
      bad  += check ("double deref", (*(*pp )), 7) ;
    }
    { /* let147 */
      int * one  __attribute__((__cleanup__(__ciciliL_148 ))) = ((int *)malloc (sizeof(int)));
      // ----------
      (*one ) = 42;
      bad  += check ("alloc one", (*one ), 42) ;
    }
    { /* let151 */
      int * many  __attribute__((__cleanup__(__ciciliL_152 ))) = ((int *)calloc (4, sizeof(int)));
      // ----------
      many [3] = 42;
      bad  += check ("alloc many", many [3], 42) ;
      bad  += check ("alloc zeroes", many [0], 0) ;
    }
    { /* let155 */
      int * raw  = ((int *)malloc ((2 *  sizeof(int) )));
      // ----------
      raw [1] = 42;
      bad  += check ("malloc/free", raw [1], 42) ;
      free (raw );
    }
    { /* let157 */
      int src [] = { 1, 2, 3, 4};
      int dst [4];
      // ----------
      memset (dst , 0, sizeof(dst));
      bad  += check ("memset", dst [2], 0) ;
      memcpy (dst , src , sizeof(src));
      bad  += check ("memcpy", dst [2], 3) ;
    }
    frees  = 0;
    scoped_cleanup ();
    bad  += check ("defer ran destructor", frees , 1) ;
    bad  += check ("defer #t plain free", scoped_plain_free (), 11) ;
    frees  = 0;
    scoped_forms ();
    bad  += check ("defer () forms ran", frees , 1) ;
    { /* let159 */
      int seen  = -1;
      // ----------
      scoped_defer_star ((&seen ), 42);
      bad  += check ("defer* ran at scope exit", seen , 42) ;
    }
    if (bad  ==  0 )
      printf ("memory: all ok\n");
    else
      printf ("memory: %d FAILED\n", bad );
    return bad ;
  }
}
