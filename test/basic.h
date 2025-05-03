#ifndef __TEST_H__
#define __TEST_H__
#define MAX_AMOUNT 1000
#define MACRO (x, y) x + y * x + y
typedef int * intptr;
typedef enum COLORS {
  RED = 0,
  GREEN,
  BLUE
} COLORS;
typedef union Mixed {
  int x;
  float y;
} Mixed;
typedef struct Employee {
  int id;
  char * name;
  union { /* lccUnion179 */
    int tag_id;
    char * custom_tag;
  } tag;
  struct { /* lccStruct180 */
    int role_id;
    char * role_name;
    char * (*resolve) (char * prob);
    const void (*sign) (char * doc);
  } role, * sub_roles[];
} Employee;
#endif /* __TEST_H__ */ 
