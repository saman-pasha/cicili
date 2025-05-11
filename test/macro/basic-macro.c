#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "charlist.h"

int main () {
  printf ("are equal 3 == 3: %d\n", (3 ==  3 ));
  printf ("are equal 3 == (+ 1 2): %d\n", (3 ==  (1 +  2 ) ));
  { /* cicili#Let110 */
    int array[5] = {1, 3, 2, 5, 4};
    { /* cicili#Let114 */
      typeof(array [0]) * it = array ;
      for (int i = 0; (i  <  5 ); (++it ), (++i )) {
        array [i ] = (array [i ] +  10 );
        { /* cicili#Let120 */
          typeof(array [0]) * jt = array ;
          for (int j = 0; (j  <  5 ); (++jt ), (++j )) {
            printf ("i: %d it: %d, j: %d jt: %d\n", i , (*it ), j , (*jt ));
          } 
        }
      } 
    }
  }
  if (true ) 
    { /* cicili#Block127 */
      fprintf (stdout , "when was true\n");
    } /* cicili#Block127 */

  if ((!false )) 
    { /* cicili#Block134 */
      fprintf (stderr , "unless was false\n");
    } /* cicili#Block134 */

  fprintf (stdout , "result from progn %d\n", ({ /* cicili#Progn140 */
      (4 *  5 );
    }));
  fprintf (stderr , "result from progn let %d\n", ({ /* cicili#Progn144 */
      ({ /* cicili#Let146 */
        int x = 6;
        int y = 7;
        (x  *  y  );
      });
    }));
  fprintf (stdout , "result from letn %d\n", ({ /* cicili#Let150 */
      int x = 8;
      int y = 9;
      (x  *  y  );
    }));
}

