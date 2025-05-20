#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "cicili_intslice.h"
static void __ciciliL_182 (IntSlice ** s1) {
  IntSlice_m_free((*s1 ));
}
static void __ciciliL_184 (IntSlice ** s2) {
  IntSlice_m_free((*s2 ));
}
int main () {
  { /* cicili#Let181 */
    IntSlice * s1 __attribute__((__cleanup__(__ciciliL_182 ))) = IntSlice_s_newEmpty(3);
    IntSlice * s2 __attribute__((__cleanup__(__ciciliL_184 ))) = IntSlice_s_newFromArray(((int[]){ 1, 2, 3}), 3);
    IntSlice * appended = IntSlice_m_appendNew(s2 , s2 );
    IntSlice * clone = IntSlice_m_clone(s2 );
    bool contains2 = IntSlice_m_contains(s2 , 2);
    size_t idx = IntSlice_m_indexOf(s2 , 2);
    size_t lastIdx = IntSlice_m_lastIndexOf(appended , 2);
    size_t count2 = IntSlice_m_count(appended , 2);
    IntSlice_m_push(s1 , 10);
    IntSlice_m_push(s1 , 20);
    IntSlice_m_push(s1 , 30);
    { /* cicili#Let187 */
      __auto_type val = IntSlice_m_pop(s1 );
      if (val . outp ) 
        { /* cicili#Block192 */
          fprintf (stdout , "Popped: %d\n", (val . out ));
        } /* cicili#Block192 */

    }
    IntSlice_m_insert(s1 , 1, 99);
    IntSlice_m_removeAt(s1 , 0);
    fprintf (stdout , "s1 contents:\n");
    for (size_t i = 0; (i  <  (s1 ->len ) ); (++i )) {
      fprintf (stdout , "%d ", (s1 ->arr )[i ]);
    } 
    fprintf (stdout , "\n");
    fprintf (stdout , "contains 2: %s\n", ((contains2 ) ? "true" : "false"));
    fprintf (stdout , "indexOf 2: %zu\n", idx );
    fprintf (stdout , "lastIndexOf 2: %zu\n", lastIdx );
    fprintf (stdout , "count of 2: %zu\n", count2 );
    IntSlice_m_free(clone );
    IntSlice_m_free(appended );
    return 0;
  }
}

