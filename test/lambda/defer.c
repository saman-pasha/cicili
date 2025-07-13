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
struct __ciciliC_Context_111 {
    void (*routine) (struct __ciciliC_Context_111 * context , int x );
  struct ciciliStruct115 { /* ciciliStruct115 */
    FILE * file ;
    char ** msgs ;
  } context ;
};
static void __ciciliC_Context_111_s___ciciliC_Routine_112 (struct __ciciliC_Context_111 * context , int x ) {
  FILE * file  = ((context ->context ). file );
  char ** msgs  = ((context ->context ). msgs );
  fprintf (file , msgs [0], x );
  fprintf (file , msgs [1], (x  *  x  ));
}
struct __ciciliC_Context_124 {
    int (*routine) (struct __ciciliC_Context_124 * context , int dyn_var );
  struct ciciliStruct128 { /* ciciliStruct128 */
    int state ;
  } context ;
};
static int __ciciliC_Context_124_s___ciciliC_Routine_125 (struct __ciciliC_Context_124 * context , int dyn_var ) {
  int state  = ((context ->context ). state );
  return (state  +  dyn_var  );
}
static struct __ciciliC_Context_124 __ciciliL_121 (int state ) {
  return ((struct __ciciliC_Context_124 ){ __ciciliC_Context_124_s___ciciliC_Routine_125 , { state }});
}
struct __ciciliS_147 {
  FILE * file ;
  char * msg ;
};
static void __ciciliL_148 (struct __ciciliS_147 * ciciliDefer144_ptr ) {
  FILE * file  = (ciciliDefer144_ptr ->file );
  char * msg  = (ciciliDefer144_ptr ->msg );
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
    __auto_type printInts  = ((struct __ciciliC_Context_111 ){ __ciciliC_Context_111_s___ciciliC_Routine_112 , { file , ((char *[]){ msg_int , msg_int_sqr })}});
    __auto_type make_closure  = __ciciliL_121 ;
    __auto_type clo1  = make_closure (10);
    __auto_type clo2  = make_closure (20);
    fprintf (file , "first line from main execution\n");
    fprintf (stdout , "clo1: %d\n", (clo1 . routine )((&clo1 ), 5));
    fprintf (stdout , "clo2: %d\n", (clo2 . routine )((&clo2 ), 5));
    (printInts . routine )((&printInts ), 5);
    (emp ->Id ) = 100;
    (emp ->Name ) = calloc (8, sizeof(char));
    struct __ciciliS_147 ciciliDefer144  __attribute__((__cleanup__(__ciciliL_148 ))) = { file , msg };
    memcpy ((emp ->Name ), "Jon Doe\0", 8);
    fprintf (stdout , "emp id is: %d and emp name is: %s\n", (emp ->Id ), (emp ->Name ));
  }
}
