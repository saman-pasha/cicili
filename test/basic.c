#include <stdio.h>
#include <stdlib.h>
#include "basic.h"
static void __ciciliL_103 (Employee ** emp) {
  free (((void *)(*emp )));
}
static void __ciciliL_105 (Employee ** emps_arr) {
  free (((void *)(*emps_arr )));
}
static void __ciciliL_107 (Employee ** emps_ptr_arr) {
  free (((void *)(*emps_ptr_arr )));
}
int main (int argc, char * argv[]) {
  { /* cicili#Let102 */
    Employee emp1 = { 1, "John Doe"};
    Employee emp2 = { .id = 1, .name = "John Doe"};
    Employee emp3 = { .id = 1, .name = "John Doe", .tag.tag_id = 1001};
    Employee emp_array[] = { { 1, "John Doe"}, { 2, "Saman Pasha"}};
    Employee * emp __attribute__((__cleanup__(__ciciliL_103 ))) = ((Employee *)malloc (sizeof(Employee)));
    Employee * emps_arr __attribute__((__cleanup__(__ciciliL_105 ))) = ((Employee *)calloc (5, sizeof(Employee)));
    Employee * emps_ptr_arr __attribute__((__cleanup__(__ciciliL_107 ))) = ((Employee *)calloc (10, sizeof(Employee *)));
    free (emp );
    emp  = (&emp1 );
    printf ("sum of a series: %d\n", (1 +  2 +  3 +  4 +  5 ));
    printf ("is id one? %s\n", ((((emp1 . id ) ==  1 )) ? "true" : "false"));
    printf ("first emp: %s, second emp: %s\n", (emp_array [0]. name ), (emp_array [1]. name ));
    printf ("postfix 1+: %d, prefix ++: %d\n", ((emp ->id )++), (++(emp ->id )));
    (emp ->id ) +=  1 ;
    printf ("after assignment: %d\n", (emp1 . id ));
    fprintf (stdout , "access inner member: ($ emp3 tag tag_id): %d\n", ((emp3 . tag ). tag_id ));
  }
  { /* cicili#Block112 */
    printf ("Hi from inside of a block\n");
  } /* cicili#Block112 */
  return 0;
}
