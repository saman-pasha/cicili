#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdatomic.h>
int plain_global  = 7;
static int static_global  = 8;
const int const_global  = 9;
int uninit_global ;
int global_arr [] = { 1, 2, 3, 4};
int grid [2][3] = { { 1, 2, 3}, { 4, 5, 6}};
volatile int volatile_global  = 10;
__thread int tls_global  = 11;
_Atomic int atomic_global  = 12;
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
int bump () {
  { /* let111 */
    static int calls  = 0;
    // ----------
    (++calls );
    return calls ;
  }
  return 0;
}
int main () {
  { /* let115 */
    int bad  = 0;
    // ----------
    bad  += check ("var plain", plain_global , 7) ;
    bad  += check ("var static", static_global , 8) ;
    bad  += check ("var const", const_global , 9) ;
    bad  += check ("var uninit is 0", uninit_global , 0) ;
    bad  += check ("var volatile", volatile_global , 10) ;
    bad  += check ("var thread-local", tls_global , 11) ;
    bad  += check ("var atomic", atomic_global , 12) ;
    bad  += check ("var array", global_arr [2], 3) ;
    bad  += check ("var 2-D array", grid [1][2], 6) ;
    ((void)bump ());
    ((void)bump ());
    bad  += check ("static local persists", bump (), 3) ;
    { /* let117 */
      int a  = 1;
      int b  = 2;
      int c ;
      // ----------
      c  = (a  +  b  );
      bad  += check ("let declares and initializes", c , 3) ;
    }
    { /* let119 */
      int a  = 5;
      int b  = (a  *  2 );
      // ----------
      bad  += check ("let sees earlier binding", b , 10) ;
    }
    { /* let121 */
      int n  = 1;
      // ----------
      { /* let123 */
        int n  = 2;
        // ----------
        bad  += check ("inner let shadows", n , 2) ;
      }
      bad  += check ("outer survives", n , 1) ;
    }
    { /* let125 */
      static int kept  = 100;
      // ----------
      bad  += check ("let static", kept , 100) ;
    }
    { /* let127 */
      register int fast  = 101;
      // ----------
      bad  += check ("let register", fast , 101) ;
    }
    { /* let129 */
      volatile int vol  = 102;
      // ----------
      bad  += check ("let volatile", vol , 102) ;
    }
    { /* let131 */
      const int fixed  = 103;
      // ----------
      bad  += check ("let const", fixed , 103) ;
    }
    { /* let133 */
      int got  = ({ /* letn134 */
        int a  = 20;
        int b  = 22;
        // ----------
        (a  +  b  );
      });
      // ----------
      bad  += check ("letn yields its last form", got , 42) ;
    }
    bad  += check ("letn inline", ({ /* letn137 */
          int a  = 6;
          // ----------
          (a  *  7 );
        }), 42) ;
    { /* let139 */
      int xs [] = { 5, 6, 7};
      int * p  = false ;
      int n  = 0;
      // ----------
      p  = xs ;
      bad  += check ("array decays", p [1], 6) ;
      n  = sizeof(xs);
      bad  += check ("sizeof array", n , 12) ;
    }
    { /* let141 */
      int a  = 0;
      int b  = 0;
      int c  = 0;
      // ----------
      a  = 1;
      b  = 2;
      c  = 3;
      bad  += check ("set many pairs", ((a  *  100 ) +  (b  *  10 ) +  c  ), 123) ;
    }
    if (bad  ==  0 )
      printf ("variable: all ok\n");
    else
      printf ("variable: %d FAILED\n", bad );
    return bad ;
  }
}
