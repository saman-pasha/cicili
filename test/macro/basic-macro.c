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
  { /* cicili#Let187 */
    int array[5] = { 1, 3, 2, 5, 4};
    { /* cicili#Let191 */
      typeof(array [0]) * it = array ;
      for (int i = 0; (i  <  5 ); (++it ), (++i )) {
        array [i ] = (array [i ] +  10 );
        { /* cicili#Let197 */
          typeof(array [0]) * jt = array ;
          for (int j = 0; (j  <  5 ); (++jt ), (++j )) {
            printf ("i: %d it: %d, j: %d jt: %d\n", i , (*it ), j , (*jt ));
          } 
        }
      } 
    }
  }
  if (true ) 
    { /* cicili#Block204 */
      fprintf (stdout , "when was true\n");
    } /* cicili#Block204 */

  if (!false ) 
    { /* cicili#Block211 */
      fprintf (stderr , "unless was false\n");
    } /* cicili#Block211 */

  fprintf (stdout , "result from progn %d\n", ({ /* cicili#Progn217 */
      (4 *  5 );
    }));
  fprintf (stderr , "result from progn let %d\n", ({ /* cicili#Progn221 */
      ({ /* cicili#Let223 */
        int x = 6;
        int y = 7;
        (x  *  y  );
      });
    }));
  fprintf (stdout , "result from letn %d\n", ({ /* cicili#Let227 */
      int x = 8;
      int y = 9;
      (x  *  y  );
    }));
}

