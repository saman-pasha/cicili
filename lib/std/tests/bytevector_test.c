#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "./../Vector/cicili_bytevector.h"
static void __ciciliL_187 (ByteVector ** bv ) {
  ByteVector_m_free((*bv ));
}
int main () {
  { /* cicili#Let186 */
    ByteVector * bv  __attribute__((__cleanup__(__ciciliL_187 ))) = ByteVector_s_newEmpty(5);
    ByteVector_m_push(bv , 65);
    ByteVector_m_push(bv , 66);
    ByteVector_m_push(bv , 67);
    ByteVector_m_push(bv , 65);
    ByteVector_m_push(bv , 68);
    ByteVector_m_push(bv , 65);
    ByteVector_m_insert(bv , 2, 88);
    ByteVector_m_removeAt(bv , 3);
    fprintf (stdout , "ByteVector contents as chars:\n");
    for (size_t i  = 0; (i  <  (bv ->len ) ); (++i )) {
      fprintf (stdout , "%c ", (bv ->arr )[i ]);
    } 
    fprintf (stdout , "\n");
    { /* cicili#Let198 */
      bool hasA  = ByteVector_m_contains(bv , 65);
      size_t firstA  = ByteVector_m_indexOf(bv , 65);
      size_t lastA  = ByteVector_m_lastIndexOf(bv , 65);
      size_t countA  = ByteVector_m_count(bv , 65);
      fprintf (stdout , "Contains 'A': %s\n", ((hasA ) ? "true" : "false"));
      fprintf (stdout , "First index of 'A': %zu\n", firstA );
      fprintf (stdout , "Last index of 'A': %zu\n", lastA );
      fprintf (stdout , "Count of 'A': %zu\n", countA );
    }
    { /* cicili#Let208 */
      __auto_type last  = ByteVector_m_pop(bv );
      if (last . outp ) 
        { /* cicili#Block213 */
          fprintf (stdout , "Popped: %c\n", (last . out ));
        } /* cicili#Block213 */

    }
    fprintf (stdout , "Final ByteVector contents:\n");
    for (size_t i  = 0; (i  <  (bv ->len ) ); (++i )) {
      fprintf (stdout , "%c ", (bv ->arr )[i ]);
    } 
    fprintf (stdout , "\n");
    return 0;
  }
}

