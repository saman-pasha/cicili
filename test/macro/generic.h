typedef struct Employee {
  int id ;
  char name [10];
} Employee;
#define __TEST1_G_(ID,PRNT) \
void Employee ## _m_ ## print ## _  ##ID  ##PRNT  (Employee * this ) { \
  PRNT ("employee! ID: %s\n", (#ID )); \
} \

#define __TEST2_G_(ID,PRNT) \
typedef struct Employee ## _  ##ID  ##PRNT  { \
  ID id ; \
  char name [12]; \
} Employee ## _  ##ID  ##PRNT ; \
void Employee ## _  ##ID  ##PRNT  ## _m_ ## print ## _  ##ID  ##PRNT  (Employee ## _  ##ID  ##PRNT  * this , char * name ) { \
  PRNT ("employee ID: %s, a name:%s\n", (#ID ), name ); \
} \

