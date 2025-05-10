#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "defer.h"
static void __ciciliLambda_main_101 (Employee ** empPtr) {
  { /* cicili#Let102 */
    Employee * emp = (*empPtr );
    printf ("from defer, emp id is: %d and emp name is: %s\n", (emp ->Id ), (emp ->Name ));
    free (((*empPtr )->Name ));
    free (emp );
    printf ("from defer, emp is freed\n");
  } /* cicili#Let102 */
}
static void __ciciliLambda_main_103 (Employee ** empOther) {
  free (((void *)(*empOther )));
}
int main () {
  { /* cicili#Let100 */
    Employee * emp __attribute__((__cleanup__(__ciciliLambda_main_101 ))) = ((Employee *)malloc (sizeof(Employee)));
    Employee * empOther __attribute__((__cleanup__(__ciciliLambda_main_103 ))) = ((Employee *)malloc (sizeof(Employee)));
    (emp ->Id ) = 100;
    (emp ->Name ) = calloc (8, sizeof(char));
    memcpy ((emp ->Name ), "Jon Doe\0", 8);
    printf ("emp id is: %d and emp name is: %s\n", (emp ->Id ), (emp ->Name ));
  } /* cicili#Let100 */
}
