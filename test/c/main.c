#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "mymath.h"
int check (const char * what , long long got , long long want ) {
  if (got  ==  want  )
    { /* block104 */
      printf ("ok   %-24s %lld\n", what , got );
      return 0;
    }
  else
    { /* block107 */
      printf ("FAIL %-24s got %lld want %lld\n", what , got , want );
      return 1;
    }
  return 1;
}
int main (int argc , char * argv []) {
  { /* let110 */
    int x  = 3;
    int y  = 4;
    int bad  = 0;
    // ----------
    if (argc  ==  3 )
      { /* block114 */
        x  = atoi (argv [1]);
        y  = atoi (argv [2]);
      }
    bad  += check ("obj1_does adds", obj1_does (20, 22), 42) ;
    bad  += check ("obj2_does multiplies", obj2_does (6, 7), 42) ;
    bad  += check ("obj3_does through lib", obj3_does (x , y ), ((x  *  y  ) +  (x  *  y  ) )) ;
    printf ("MyMath lib outputs: %d\n", obj3_does (x , y ));
    if (bad  ==  0 )
      printf ("library: all ok\n");
    else
      printf ("library: %d FAILED\n", bad );
    return bad ;
  }
  return 1;
}
