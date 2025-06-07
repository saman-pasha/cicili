#ifndef __TEST_H__
#define __TEST_H__
#define MAX_AMOUNT 1000
#define MACRO (x, y) x + y * x + y
typedef int * intptr ;
typedef enum COLORS {
  RED = 0,
  GREEN,
  BLUE
} COLORS;
typedef union Mixed {
  int x ;
  float y ;
} Mixed;
typedef struct Employee {
  int id ;
  char * name ;
  union { /* ciciliUnion179 */
    int tag_id ;
    char * custom_tag ;
  } tag ;
  struct { /* ciciliStruct180 */
    int role_id ;
    char * role_name ;
        char * (*resolve) (char * prob );
    const     void (*sign) (char * doc );
  } role , * sub_roles [];
} Employee;
void Employee_m_free (Employee * this ) {
  fprintf (stdout , "from free method %d\n", (this ->id ));
  free (this );
}
#endif /* __TEST_H__ */ 
