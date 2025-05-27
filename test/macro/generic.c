#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "generic.h"
__TEST1_G_ (int , printf )
__TEST2_G_ (long , printf )
int main () {
  { /* cicili#Let104 */
    Employee emp1  = { 10, "Jon Doe"};
    Employee_longprintf emp2  = { 12, "Saman Pasha"};
    Employee_m_print_intprintf(&emp1);
    Employee_longprintf_m_print_longprintf(&emp2, "Jon");
    Employee_m_print_intprintf(&emp1);
    Employee_longprintf_m_print_longprintf(&emp2, "Doe");
  }
}

