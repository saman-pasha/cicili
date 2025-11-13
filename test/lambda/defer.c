#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "defer.h"
typedef int (*ioInt_t) (int dyn_var );
static void __ciciliL_105 (Employee ** emp_ptr ) {
  Employee * emp  = (*emp_ptr );
  printf ("from defer, emp id is: %d and emp name is: %s\n", (emp -> Id ), (emp -> Name ));
  free ((emp -> Name ));
  free (emp );
  printf ("from defer, emp is freed\n");
}
static void __ciciliL_107 (Employee ** empOther ) {
  free (((void *)(*empOther )));
}
static void __ciciliL_109 (Employee ** empOzzi ) {
  free (((void *)(*empOzzi )));
}
static ioInt_t __ciciliL_118 (int state ) {
  { /* cicili#Let120 */
    int st  = state ;
    // ----------
    return ({ /* cicili#Progn123 */
        int __ciciliC_122 (int dyn_var ) {
          return (st  +  dyn_var  );
        }
        __ciciliC_122 ;
      });
  }
}
typedef struct __ciciliS_133 {
  FILE * file ;
  char * msg ;
} __ciciliS_133;
static void __ciciliL_134 (struct __ciciliS_133 * ciciliDefer131_ptr ) {
  FILE * file  = (ciciliDefer131_ptr -> file );
  char * msg  = (ciciliDefer131_ptr -> msg );
  fprintf (file , "%s\n", msg );
  fclose (file );
  fprintf (stdout , "defer msg printed to file.\n");
}
int main () {
  { /* cicili#Let104 */
    Employee * emp  __attribute__((__cleanup__(__ciciliL_105 ))) = ((Employee *)malloc (sizeof(Employee)));
    Employee * empOther  __attribute__((__cleanup__(__ciciliL_107 ))) = ((Employee *)malloc (sizeof(Employee)));
    Employee * empOzzi  __attribute__((__cleanup__(__ciciliL_109 ))) = malloc (sizeof(Employee));
    char * msg  = "a message from defer execution\n";
    char * msg_int  = "int from closure: %d\n";
    char * msg_int_sqr  = "int sqr from closure: %d\n";
    FILE * file  = fopen ("./test/lambda/deferral.txt", "w");
    __auto_type printInts  = ({ /* cicili#Progn112 */
      void __ciciliC_111 (int x ) {
        fprintf (file , msg_int , x );
        fprintf (file , msg_int_sqr , (x  *  x  ));
        fprintf (stdout , "printed to file.\n");
      }
      __ciciliC_111 ;
    });
    __auto_type make_closure  = __ciciliL_118 ;
    __auto_type clo1  = make_closure (10);
    __auto_type clo2  = make_closure (20);
    // ----------
    fprintf (file , "first line from main execution\n");
    fprintf (stdout , "clo1: %d\n", clo1 (5));
    fprintf (stdout , "clo2: %d\n", clo2 (5));
    printInts (3);
    printInts (5);
    struct __ciciliS_133 ciciliDefer131  __attribute__((__cleanup__(__ciciliL_134 ))) = { file , msg };
    (emp -> Id ) = 100;
    (emp -> Name ) = calloc (8, sizeof(char));
    memcpy ((emp -> Name ), "Jon Doe\0", 8);
    fprintf (stdout , "emp id is: %d and emp name is: %s\n", (emp -> Id ), (emp -> Name ));
  }
}
