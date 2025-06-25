#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "./../Vector/cicili_intvector.h"
static void __ciciliL_187 (IntVector ** s1 ) {
  IntVector_m_free((*s1 ));
}
static void __ciciliL_189 (IntVector ** s2 ) {
  IntVector_m_free((*s2 ));
}
int main () {
  { /* cicili#Let186 */
    IntVector * s1  __attribute__((__cleanup__(__ciciliL_187 ))) = IntVector_s_newEmpty(3);
    IntVector * s2  __attribute__((__cleanup__(__ciciliL_189 ))) = IntVector_s_newFromArray(((int[]){ 1, 2, 3}), 3);
    IntVector * appended  = IntVector_m_appendNew(s2 , s2 );
    IntVector * clone  = IntVector_m_clone(s2 );
    bool contains2  = IntVector_m_contains(s2 , 2);
    size_t idx  = IntVector_m_indexOf(s2 , 2);
    size_t lastIdx  = IntVector_m_lastIndexOf(appended , 2);
    size_t count2  = IntVector_m_count(appended , 2);
    IntVector_m_push(s1 , 10);
    IntVector_m_push(s1 , 20);
    IntVector_m_push(s1 , 30);
    { /* cicili#Let192 */
      __auto_type val  = IntVector_m_pop(s1 );
      if (val . outp ) 
        { /* cicili#Block197 */
          fprintf (stdout , "Popped: %d\n", (val . out ));
        } /* cicili#Block197 */

    }
    IntVector_m_insert(s1 , 1, 99);
    IntVector_m_removeAt(s1 , 0);
    fprintf (stdout , "s1 contents:\n");
    for (size_t i  = 0; (i  <  (s1 ->len ) ); (++i )) {
      fprintf (stdout , "%d ", (s1 ->arr )[i ]);
    } 
    fprintf (stdout , "\n");
    fprintf (stdout , "contains 2: %s\n", ((contains2 ) ? "true" : "false"));
    fprintf (stdout , "indexOf 2: %zu\n", idx );
    fprintf (stdout , "lastIndexOf 2: %zu\n", lastIdx );
    fprintf (stdout , "count of 2: %zu\n", count2 );
    IntVector_m_free(clone );
    IntVector_m_free(appended );
    return 0;
  }
}

