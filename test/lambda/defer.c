#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "defer.h"
static void __ciciliL_104 (Employee ** emp_ptr) {
  Employee * emp = (*emp_ptr );
  printf ("from defer, emp id is: %d and emp name is: %s\n", (emp ->Id ), (emp ->Name ));
  free ((emp ->Name ));
  free (emp );
  printf ("from defer, emp is freed\n");
}
static void __ciciliL_106 (Employee ** empOther) {
  free (((void *)(*empOther )));
}
static void __ciciliL_108 (Employee ** empOzzi) {
  free (((void *)(*empOzzi )));
}
struct __ciciliS_117 {
  FILE * file;
  char * msg;
} __ciciliS_117;
static void __ciciliL_118 (struct __ciciliS_117 * ciciliDefer113_ptr) {
  struct __ciciliS_117 ciciliDefer113 = (*ciciliDefer113_ptr );
  FILE * file = (ciciliDefer113_ptr ->file );
  char * msg = (ciciliDefer113_ptr ->msg );
  fprintf (file , "%s\n", msg );
  fclose (file );
}
int main () {
  { /* cicili#Let103 */
    Employee * emp __attribute__((__cleanup__(__ciciliL_104 ))) = ((Employee *)malloc (sizeof(Employee)));
    Employee * empOther __attribute__((__cleanup__(__ciciliL_106 ))) = ((Employee *)malloc (sizeof(Employee)));
    Employee * empOzzi __attribute__((__cleanup__(__ciciliL_108 ))) = malloc (sizeof(Employee));
    char * msg = "a message from defer execution\n";
    FILE * file = fopen ("deferral.txt", "w+");
    fprintf (file , "first line from main execution\n");
    (emp ->Id ) = 100;
    (emp ->Name ) = calloc (8, sizeof(char));
    struct __ciciliS_117 ciciliDefer113 __attribute__((__cleanup__(__ciciliL_118 ))) = {file , msg };
    memcpy ((emp ->Name ), "Jon Doe\0", 8);
    fprintf (stdout , "emp id is: %d and emp name is: %s\n", (emp ->Id ), (emp ->Name ));
  }
}
