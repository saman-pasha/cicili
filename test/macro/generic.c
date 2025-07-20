#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "generic.h"
void Employee_m_print_int (Employee * this ) {
  printf ("employee! ID: %d\n", (this ->id ));
}
typedef struct Employee_long {
  long id ;
  char name [12];
} Employee_long;
void Employee_long_m_print_long (Employee_long * this , char * name ) {
  printf ("employee ID: %ld, a name:%s\n", (this ->id ), name );
}
int main () {
  { /* cicili#Let113 */
    Employee emp1  = { 10, "Jon Doe"};
    Employee_long emp2  = { 12, "Saman Pasha"};
    Employee_m_print_int(&emp1);
    Employee_long_m_print_long(&emp2, "Jon");
    Employee_m_print_int(&emp1);
    Employee_long_m_print_long(&emp2, "Doe");
  };
}
