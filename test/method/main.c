#include <stdlib.h>
#include "method.h"
static void __ciciliL_103 (Sample ** sPtr ) {
  free (((void *)(*sPtr )));
}
int main () {
  { /* cicili#Let102 */
      Sample s  = { 100, "domain.com"};
      Sample * sRef  = (&s );
      Sample * sPtr  __attribute__((__cleanup__(__ciciliL_103 ))) = ((Sample *)malloc (sizeof(Sample)));
      Sample_m_PrintBoth(&s);
      Sample_m_SetAttrA(&s, 124);
      Sample_m_PrintBoth(sRef );
      return 0;
    }
}
