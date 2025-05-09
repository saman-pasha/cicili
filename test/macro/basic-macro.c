#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
int main () {
  printf ("are equal 3 == 3: %d\n", (3 ==  3 ));
  printf ("are equal 3 == (+ 1 2): %d\n", (3 ==  (1 +  2 ) ));
  { /* cicili#Let179 */
    int array[5] = {1, 3, 2, 5, 4};
    { /* cicili#Let181 */
      typeof(array [0]) * it = array ;
      for (int i = 0; (i  <  5 ); (++it ), (++i )) {
        array [i ] = (array [i ] +  10 );
        { /* cicili#Let183 */
          typeof(array [0]) * jt = array ;
          for (int j = 0; (j  <  5 ); (++jt ), (++j )) {
            printf ("i: %d it: %d, j: %d jt: %d\n", i , (*it ), j , (*jt ));
          } 
        } /* cicili#Let183 */
      } 
    } /* cicili#Let181 */
  } /* cicili#Let179 */
}
