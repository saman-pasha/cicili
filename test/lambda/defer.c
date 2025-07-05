#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "defer.h"
static void __ciciliL_104 (Employee ** emp_ptr ) {
  Employee * emp  = (*emp_ptr );
  printf ("from defer, emp id is: %d and emp name is: %s\n", (emp ->Id ), (emp ->Name ));
  free ((emp ->Name ));
  free (emp );
  printf ("from defer, emp is freed\n");
}
static void __ciciliL_106 (Employee ** empOther ) {
  free (((void *)(*empOther )));
}
static void __ciciliL_108 (Employee ** empOzzi ) {
  free (((void *)(*empOzzi )));
}
struct { /* ciciliStruct113 */
  FILE * file ;
  char ** msgs ;
} ciciliClosure111 ;
static void __ciciliL_116 (int x ) {
  FILE * file  = (ciciliClosure111 . file );
  char ** msgs  = (ciciliClosure111 . msgs );
  fprintf (file , msgs [0], x );
  fprintf (file , msgs [1], (x  *  x  ));
}
struct __ciciliS_129 {
  FILE * file ;
  char * msg ;
};
static void __ciciliL_130 (struct __ciciliS_129 * ciciliDefer126_ptr ) {
  FILE * file  = (ciciliDefer126_ptr ->file );
  char * msg  = (ciciliDefer126_ptr ->msg );
  fprintf (file , "%s\n", msg );
  fclose (file );
}
int main () {
  { /* cicili#Let103 */
    Employee * emp  __attribute__((__cleanup__(__ciciliL_104 ))) = ((Employee *)malloc (sizeof(Employee)));
    Employee * empOther  __attribute__((__cleanup__(__ciciliL_106 ))) = ((Employee *)malloc (sizeof(Employee)));
    Employee * empOzzi  __attribute__((__cleanup__(__ciciliL_108 ))) = malloc (sizeof(Employee));
    char * msg  = "a message from defer execution\n";
    char * msg_int  = "int from closure: %d\n";
    char * msg_int_sqr  = "int sqr from closure: %d\n";
    FILE * file  = fopen ("./test/lambda/deferral.txt", "w+");
    __auto_type printInts  = ({ /* cicili#Progn114 */
  ciciliClosure111  = ((typeof(ciciliClosure111 )){ file , ((char *[]){ msg_int , msg_int_sqr })});
  __ciciliL_116 ;
});
    fprintf (file , "first line from main execution\n");
    printInts (5);
    (emp ->Id ) = 100;
    (emp ->Name ) = calloc (8, sizeof(char));
    struct __ciciliS_129 ciciliDefer126  __attribute__((__cleanup__(__ciciliL_130 ))) = { file , msg };
    memcpy ((emp ->Name ), "Jon Doe\0", 8);
    fprintf (stdout , "emp id is: %d and emp name is: %s\n", (emp ->Id ), (emp ->Name ));
  }
}
