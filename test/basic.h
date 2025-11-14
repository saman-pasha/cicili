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
  struct T {
    double t ;
  } T;
} Mixed;
typedef struct Employee {
  int id ;
  char * name ;
  enum OTHERS {
    YELLOW = 8,
    BROWN
  } OTHERS;
  union { /* ciciliUnion102 */
    int tag_id ;
    char * custom_tag ;
  } tag ;
  struct { /* ciciliStruct103 */
    int role_id ;
    char * role_name ;
        char * (*resolve) (char * prob );
    const     void (*sign) (char * doc );
  } role , * sub_roles [];
} Employee;
#endif /* __TEST_H__ */ 
