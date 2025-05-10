#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
int main () {
  printf ("are equal 3 == 3: %d\n", (3 ==  3 ));
  printf ("are equal 3 == (+ 1 2): %d\n", (3 ==  (1 +  2 ) ));
  { /* cicili#Let180 */
    int array[5] = {1, 3, 2, 5, 4};
    { /* cicili#Let182 */
      typeof(array [0]) * it = array ;
      for (int i = 0; (i  <  5 ); (++it ), (++i )) {
        array [i ] = (array [i ] +  10 );
        { /* cicili#Let184 */
          typeof(array [0]) * jt = array ;
          for (int j = 0; (j  <  5 ); (++jt ), (++j )) {
            printf ("i: %d it: %d, j: %d jt: %d\n", i , (*it ), j , (*jt ));
          } 
        }
      } 
    }
  }
  if (true ) 
    { /* cicili#Block186 */
      printf ("when was true\n");
    } /* cicili#Block186 */

  if ((!false )) 
    { /* cicili#Block188 */
      printf ("unless was false\n");
    } /* cicili#Block188 */

  printf ("result from progn %d\n", ({ /* cicili#Progn189 */
      (4 *  5 );
    }));
  printf ("result from progn let %d\n", ({ /* cicili#Progn190 */
      ({ /* cicili#Let191 */
        int x = 6;
        int y = 7;
        (x  *  y  );
      });
    }));
  printf ("result from letn %d\n", ({ /* cicili#Let192 */
      int x = 8;
      int y = 9;
      (x  *  y  );
    }));
}

