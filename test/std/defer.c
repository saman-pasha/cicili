#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "defer.h"
typedef int (*ioInt_t) (int dyn_var );
void __ciciliL_105 (Employee ** emp ) {
  printf ("from defer, emp id is: %d and emp name is: %s\n", ((*emp )-> Id), ((*emp )-> Name));
  free (((*emp )-> Name));
  free ((*emp ));
  printf ("from defer, emp is freed\n");
}
void __ciciliL_107 (Employee ** empOther ) {
  free (((void *)(*empOther )));
}
void __ciciliL_109 (Employee ** empOzzi ) {
  free (((void *)(*empOzzi )));
}
typedef struct cicililPevAdnomp6WJ6y34UgkQljhWig_ {
  FILE * file ;
  char * msg ;
} cicililPevAdnomp6WJ6y34UgkQljhWig_;
void __ciciliL_117 (struct cicililPevAdnomp6WJ6y34UgkQljhWig_ * ciciliDefer114 ) {
  FILE * file  = (ciciliDefer114 -> file);
  char * msg  = (ciciliDefer114 -> msg);
  fprintf (file , "%s\n", msg );
  fclose (file );
  fprintf (stdout , "defer msg printed to file.\n");
}
int main () {
  { /* let104 */
    Employee * emp  __attribute__((__cleanup__(__ciciliL_105 ))) = ((Employee *)malloc (sizeof(Employee)));
    Employee * empOther  __attribute__((__cleanup__(__ciciliL_107 ))) = ((Employee *)malloc (sizeof(Employee)));
    Employee * empOzzi  __attribute__((__cleanup__(__ciciliL_109 ))) = malloc (sizeof(Employee));
    char * msg  = "a message from defer execution\n";
    FILE * file  = fopen ("./deferral.txt", "w");
    // ----------
    fprintf (file , "first line from main execution\n");
    struct cicililPevAdnomp6WJ6y34UgkQljhWig_ ciciliDefer114  __attribute__((__cleanup__(__ciciliL_117 ))) = { file , msg };
    (emp -> Id) = 100;
    (emp -> Name) = calloc (8, sizeof(char));
    memcpy ((emp -> Name), "Jon Doe\0", 8);
    fprintf (stdout , "emp id is: %d and emp name is: %s\n", (emp -> Id), (emp -> Name));
  }
}
