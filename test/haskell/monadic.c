#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "../../haskell.h"
typedef struct __ciciliS_102 {
  String __h_0_mem ;
  int __h_1_mem ;
  int __h_2_mem ;
} __ciciliS_102;
typedef __ciciliS_102 Employee ;
#ifndef __Either_String_String__H_DECL__
#define __Either_String_String__H_DECL__
#ifndef __H___h_Either_ctor_t__
#define __H___h_Either_ctor_t__
typedef enum __h_Either_ctor_t {
  __h_Right_t = 0,
  __h_Left_t = 1
} __h_Either_ctor_t;
#endif /* __H___h_Either_ctor_t__ */ 
typedef struct Either_String_String Either_String_String ;
typedef void (*free_Either_String_String_t) (Either_String_String * this );
typedef struct Either_String_String__H_Table {
  free_Either_String_String_t freeData ;
} Either_String_String__H_Table;
typedef struct Either_String_String {
  const Either_String_String__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion114 */
    struct { /* ciciliStruct115 */
      String __h_0_mem ;
    } Left , _0 ;
    struct { /* ciciliStruct116 */
      String __h_0_mem ;
    } Right , _ ;
  } __h_data ;
} Either_String_String;
Either_String_String Left_String_String (String error );
Either_String_String Right_String_String (String value );
__attribute__((weak)) Either_String_String Default_Either_String_String (String value ) {
  return Right_String_String (value );
}
const Either_String_String__H_Table * const get_Either_String_String__H_Table ();
void free_Either_String_String (Either_String_String * this );
#endif /* __Either_String_String__H_DECL__ */ 
#ifndef __Either_String_String__H_IMPL__
#define __Either_String_String__H_IMPL__
void free_Either_String_String (Either_String_String * this ) {
}
const Either_String_String__H_Table * const get_Either_String_String__H_Table () {
  static const Either_String_String__H_Table table  = { free_Either_String_String };
  return (&table );
}
Either_String_String Left_String_String (String error ) {
  return ((Either_String_String){ get_Either_String_String__H_Table (), __h_Left_t , .__h_data.Left = { error }});
}
Either_String_String Right_String_String (String value ) {
  return ((Either_String_String){ get_Either_String_String__H_Table (), __h___t , .__h_data._ = { value }});
}
#endif /* __Either_String_String__H_IMPL__ */ 
#ifndef __Either_String_String__H_DECL__
#define __Either_String_String__H_DECL__
#ifndef __H___h_Either_ctor_t__
#define __H___h_Either_ctor_t__
typedef enum __h_Either_ctor_t {
  __h_Right_t = 0,
  __h_Left_t = 1
} __h_Either_ctor_t;
#endif /* __H___h_Either_ctor_t__ */ 
typedef struct Either_String_String Either_String_String ;
typedef void (*free_Either_String_String_t) (Either_String_String * this );
typedef struct Either_String_String__H_Table {
  free_Either_String_String_t freeData ;
} Either_String_String__H_Table;
typedef struct Either_String_String {
  const Either_String_String__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion161 */
    struct { /* ciciliStruct162 */
      String __h_0_mem ;
    } Left , _0 ;
    struct { /* ciciliStruct163 */
      String __h_0_mem ;
    } Right , _ ;
  } __h_data ;
} Either_String_String;
Either_String_String Left_String_String (String error );
Either_String_String Right_String_String (String value );
__attribute__((weak)) Either_String_String Default_Either_String_String (String value ) {
  return Right_String_String (value );
}
const Either_String_String__H_Table * const get_Either_String_String__H_Table ();
void free_Either_String_String (Either_String_String * this );
#endif /* __Either_String_String__H_DECL__ */ 
#ifndef __Either_String_Employee__H_DECL__
#define __Either_String_Employee__H_DECL__
#ifndef __H___h_Either_ctor_t__
#define __H___h_Either_ctor_t__
typedef enum __h_Either_ctor_t {
  __h_Right_t = 0,
  __h_Left_t = 1
} __h_Either_ctor_t;
#endif /* __H___h_Either_ctor_t__ */ 
typedef struct Either_String_Employee Either_String_Employee ;
typedef void (*free_Either_String_Employee_t) (Either_String_Employee * this );
typedef struct Either_String_Employee__H_Table {
  free_Either_String_Employee_t freeData ;
} Either_String_Employee__H_Table;
typedef struct Either_String_Employee {
  const Either_String_Employee__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion189 */
    struct { /* ciciliStruct190 */
      String __h_0_mem ;
    } Left , _0 ;
    struct { /* ciciliStruct191 */
      Employee __h_0_mem ;
    } Right , _ ;
  } __h_data ;
} Either_String_Employee;
Either_String_Employee Left_String_Employee (String error );
Either_String_Employee Right_String_Employee (Employee value );
__attribute__((weak)) Either_String_Employee Default_Either_String_Employee (Employee value ) {
  return Right_String_Employee (value );
}
const Either_String_Employee__H_Table * const get_Either_String_Employee__H_Table ();
void free_Either_String_Employee (Either_String_Employee * this );
#endif /* __Either_String_Employee__H_DECL__ */ 
typedef Either_String_Employee (*String_to_Either_String_Employee_t) (String value );
#ifndef __Monad_Either_String_String_Employee__H_DECL__
#define __Monad_Either_String_String_Employee__H_DECL__
#ifndef __H___h_Monad_ctor_t__
#define __H___h_Monad_ctor_t__
typedef enum __h_Monad_ctor_t {
  __h_Monad_t = 0
} __h_Monad_ctor_t;
#endif /* __H___h_Monad_ctor_t__ */ 
typedef struct Monad_Either_String_String_Employee Monad_Either_String_String_Employee ;
typedef void (*free_Monad_Either_String_String_Employee_t) (Monad_Either_String_String_Employee * this );
typedef struct Monad_Either_String_String_Employee__H_Table {
  free_Monad_Either_String_String_Employee_t freeData ;
    Either_String_Employee (*returnB) (Employee value );
    Either_String_String (*returnA) (String value );
    Either_String_Employee (*bind) (Either_String_String input , String_to_Either_String_Employee_t a_mb );
} Monad_Either_String_String_Employee__H_Table;
typedef struct Monad_Either_String_String_Employee {
  const Monad_Either_String_String_Employee__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion229 */
    struct { /* ciciliStruct230 */
    } Monad , _ ;
  } __h_data ;
} Monad_Either_String_String_Employee;
Monad_Either_String_String_Employee Monad_Either_String_String_Employee_ctor ();
__attribute__((weak)) Monad_Either_String_String_Employee Default_Monad_Either_String_String_Employee () {
  return Monad_Either_String_String_Employee_ctor ();
}
Either_String_Employee returnB_Monad_Either_String_String_Employee (Employee value );
Either_String_String returnA_Monad_Either_String_String_Employee (String value );
Either_String_Employee bind_Monad_Either_String_String_Employee (Either_String_String input , String_to_Either_String_Employee_t a_mb );
const Monad_Either_String_String_Employee__H_Table * const get_Monad_Either_String_String_Employee__H_Table ();
void free_Monad_Either_String_String_Employee (Monad_Either_String_String_Employee * this );
#endif /* __Monad_Either_String_String_Employee__H_DECL__ */ 
Monad_Either_String_String_Employee get_Monad_Either_String_String_Employee ();
#ifndef __Either_String_String__H_IMPL__
#define __Either_String_String__H_IMPL__
void free_Either_String_String (Either_String_String * this ) {
}
const Either_String_String__H_Table * const get_Either_String_String__H_Table () {
  static const Either_String_String__H_Table table  = { free_Either_String_String };
  return (&table );
}
Either_String_String Left_String_String (String error ) {
  return ((Either_String_String){ get_Either_String_String__H_Table (), __h_Left_t , .__h_data.Left = { error }});
}
Either_String_String Right_String_String (String value ) {
  return ((Either_String_String){ get_Either_String_String__H_Table (), __h___t , .__h_data._ = { value }});
}
#endif /* __Either_String_String__H_IMPL__ */ 
#ifndef __Either_String_Employee__H_IMPL__
#define __Either_String_Employee__H_IMPL__
void free_Either_String_Employee (Either_String_Employee * this ) {
}
const Either_String_Employee__H_Table * const get_Either_String_Employee__H_Table () {
  static const Either_String_Employee__H_Table table  = { free_Either_String_Employee };
  return (&table );
}
Either_String_Employee Left_String_Employee (String error ) {
  return ((Either_String_Employee){ get_Either_String_Employee__H_Table (), __h_Left_t , .__h_data.Left = { error }});
}
Either_String_Employee Right_String_Employee (Employee value ) {
  return ((Either_String_Employee){ get_Either_String_Employee__H_Table (), __h___t , .__h_data._ = { value }});
}
#endif /* __Either_String_Employee__H_IMPL__ */ 
#ifndef __Monad_Either_String_String_Employee__H_IMPL__
#define __Monad_Either_String_String_Employee__H_IMPL__
Either_String_Employee returnB_Monad_Either_String_String_Employee (Employee value ) {
  return Right_String_Employee (value );
}
Either_String_String returnA_Monad_Either_String_String_Employee (String value ) {
  return Right_String_String (value );
}
Either_String_Employee bind_Monad_Either_String_String_Employee (Either_String_String input , String_to_Either_String_Employee_t a_mb ) {
  return ({ /* cicili#Let315 */
      __auto_type value  = (((input . __h_data ). Right ). __h_0_mem );
      // ----------
      /* cicili#Block317 */
      ({ /* cicili#Let319 */
        bool __h_case_result  = ((input . __h_ctor ) ==  __h_Right_t  );
        // ----------
        ((__h_case_result ) ? a_mb (value ) : ({ /* cicili#Let323 */
            __auto_type error  = (((input . __h_data ). Left ). __h_0_mem );
            // ----------
            /* cicili#Block325 */
            ({ /* cicili#Let327 */
              bool __h_case_result  = ((input . __h_ctor ) ==  __h_Left_t  );
              // ----------
              ((__h_case_result ) ? Left_String_Employee (error ) : ({ /* cicili#Let332 */
                  // ----------
                  /* cicili#Block334 */
                  Left_String_Employee (Empty_char ());
                }));
            });
          }));
      });
    });
}
void free_Monad_Either_String_String_Employee (Monad_Either_String_String_Employee * this ) {
}
const Monad_Either_String_String_Employee__H_Table * const get_Monad_Either_String_String_Employee__H_Table () {
  static const Monad_Either_String_String_Employee__H_Table table  = { free_Monad_Either_String_String_Employee , returnB_Monad_Either_String_String_Employee , returnA_Monad_Either_String_String_Employee , bind_Monad_Either_String_String_Employee };
  return (&table );
}
Monad_Either_String_String_Employee Monad_Either_String_String_Employee_ctor () {
  return ((Monad_Either_String_String_Employee){ get_Monad_Either_String_String_Employee__H_Table (), __h___t });
}
#endif /* __Monad_Either_String_String_Employee__H_IMPL__ */ 
Monad_Either_String_String_Employee get_Monad_Either_String_String_Employee () {
  return Monad_Either_String_String_Employee_ctor ();
}
#ifndef __Either_String_int__H_DECL__
#define __Either_String_int__H_DECL__
#ifndef __H___h_Either_ctor_t__
#define __H___h_Either_ctor_t__
typedef enum __h_Either_ctor_t {
  __h_Right_t = 0,
  __h_Left_t = 1
} __h_Either_ctor_t;
#endif /* __H___h_Either_ctor_t__ */ 
typedef struct Either_String_int Either_String_int ;
typedef void (*free_Either_String_int_t) (Either_String_int * this );
typedef struct Either_String_int__H_Table {
  free_Either_String_int_t freeData ;
} Either_String_int__H_Table;
typedef struct Either_String_int {
  const Either_String_int__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion366 */
    struct { /* ciciliStruct367 */
      String __h_0_mem ;
    } Left , _0 ;
    struct { /* ciciliStruct368 */
      int __h_0_mem ;
    } Right , _ ;
  } __h_data ;
} Either_String_int;
Either_String_int Left_String_int (String error );
Either_String_int Right_String_int (int value );
__attribute__((weak)) Either_String_int Default_Either_String_int (int value ) {
  return Right_String_int (value );
}
const Either_String_int__H_Table * const get_Either_String_int__H_Table ();
void free_Either_String_int (Either_String_int * this );
#endif /* __Either_String_int__H_DECL__ */ 
#ifndef __Either_String_Employee__H_DECL__
#define __Either_String_Employee__H_DECL__
#ifndef __H___h_Either_ctor_t__
#define __H___h_Either_ctor_t__
typedef enum __h_Either_ctor_t {
  __h_Right_t = 0,
  __h_Left_t = 1
} __h_Either_ctor_t;
#endif /* __H___h_Either_ctor_t__ */ 
typedef struct Either_String_Employee Either_String_Employee ;
typedef void (*free_Either_String_Employee_t) (Either_String_Employee * this );
typedef struct Either_String_Employee__H_Table {
  free_Either_String_Employee_t freeData ;
} Either_String_Employee__H_Table;
typedef struct Either_String_Employee {
  const Either_String_Employee__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion394 */
    struct { /* ciciliStruct395 */
      String __h_0_mem ;
    } Left , _0 ;
    struct { /* ciciliStruct396 */
      Employee __h_0_mem ;
    } Right , _ ;
  } __h_data ;
} Either_String_Employee;
Either_String_Employee Left_String_Employee (String error );
Either_String_Employee Right_String_Employee (Employee value );
__attribute__((weak)) Either_String_Employee Default_Either_String_Employee (Employee value ) {
  return Right_String_Employee (value );
}
const Either_String_Employee__H_Table * const get_Either_String_Employee__H_Table ();
void free_Either_String_Employee (Either_String_Employee * this );
#endif /* __Either_String_Employee__H_DECL__ */ 
typedef Either_String_Employee (*int_to_Either_String_Employee_t) (int value );
#ifndef __Monad_Either_String_int_Employee__H_DECL__
#define __Monad_Either_String_int_Employee__H_DECL__
#ifndef __H___h_Monad_ctor_t__
#define __H___h_Monad_ctor_t__
typedef enum __h_Monad_ctor_t {
  __h_Monad_t = 0
} __h_Monad_ctor_t;
#endif /* __H___h_Monad_ctor_t__ */ 
typedef struct Monad_Either_String_int_Employee Monad_Either_String_int_Employee ;
typedef void (*free_Monad_Either_String_int_Employee_t) (Monad_Either_String_int_Employee * this );
typedef struct Monad_Either_String_int_Employee__H_Table {
  free_Monad_Either_String_int_Employee_t freeData ;
    Either_String_Employee (*returnB) (Employee value );
    Either_String_int (*returnA) (int value );
    Either_String_Employee (*bind) (Either_String_int input , int_to_Either_String_Employee_t a_mb );
} Monad_Either_String_int_Employee__H_Table;
typedef struct Monad_Either_String_int_Employee {
  const Monad_Either_String_int_Employee__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion434 */
    struct { /* ciciliStruct435 */
    } Monad , _ ;
  } __h_data ;
} Monad_Either_String_int_Employee;
Monad_Either_String_int_Employee Monad_Either_String_int_Employee_ctor ();
__attribute__((weak)) Monad_Either_String_int_Employee Default_Monad_Either_String_int_Employee () {
  return Monad_Either_String_int_Employee_ctor ();
}
Either_String_Employee returnB_Monad_Either_String_int_Employee (Employee value );
Either_String_int returnA_Monad_Either_String_int_Employee (int value );
Either_String_Employee bind_Monad_Either_String_int_Employee (Either_String_int input , int_to_Either_String_Employee_t a_mb );
const Monad_Either_String_int_Employee__H_Table * const get_Monad_Either_String_int_Employee__H_Table ();
void free_Monad_Either_String_int_Employee (Monad_Either_String_int_Employee * this );
#endif /* __Monad_Either_String_int_Employee__H_DECL__ */ 
Monad_Either_String_int_Employee get_Monad_Either_String_int_Employee ();
#ifndef __Either_String_int__H_IMPL__
#define __Either_String_int__H_IMPL__
void free_Either_String_int (Either_String_int * this ) {
}
const Either_String_int__H_Table * const get_Either_String_int__H_Table () {
  static const Either_String_int__H_Table table  = { free_Either_String_int };
  return (&table );
}
Either_String_int Left_String_int (String error ) {
  return ((Either_String_int){ get_Either_String_int__H_Table (), __h_Left_t , .__h_data.Left = { error }});
}
Either_String_int Right_String_int (int value ) {
  return ((Either_String_int){ get_Either_String_int__H_Table (), __h___t , .__h_data._ = { value }});
}
#endif /* __Either_String_int__H_IMPL__ */ 
#ifndef __Either_String_Employee__H_IMPL__
#define __Either_String_Employee__H_IMPL__
void free_Either_String_Employee (Either_String_Employee * this ) {
}
const Either_String_Employee__H_Table * const get_Either_String_Employee__H_Table () {
  static const Either_String_Employee__H_Table table  = { free_Either_String_Employee };
  return (&table );
}
Either_String_Employee Left_String_Employee (String error ) {
  return ((Either_String_Employee){ get_Either_String_Employee__H_Table (), __h_Left_t , .__h_data.Left = { error }});
}
Either_String_Employee Right_String_Employee (Employee value ) {
  return ((Either_String_Employee){ get_Either_String_Employee__H_Table (), __h___t , .__h_data._ = { value }});
}
#endif /* __Either_String_Employee__H_IMPL__ */ 
#ifndef __Monad_Either_String_int_Employee__H_IMPL__
#define __Monad_Either_String_int_Employee__H_IMPL__
Either_String_Employee returnB_Monad_Either_String_int_Employee (Employee value ) {
  return Right_String_Employee (value );
}
Either_String_int returnA_Monad_Either_String_int_Employee (int value ) {
  return Right_String_int (value );
}
Either_String_Employee bind_Monad_Either_String_int_Employee (Either_String_int input , int_to_Either_String_Employee_t a_mb ) {
  return ({ /* cicili#Let520 */
      __auto_type value  = (((input . __h_data ). Right ). __h_0_mem );
      // ----------
      /* cicili#Block522 */
      ({ /* cicili#Let524 */
        bool __h_case_result  = ((input . __h_ctor ) ==  __h_Right_t  );
        // ----------
        ((__h_case_result ) ? a_mb (value ) : ({ /* cicili#Let528 */
            __auto_type error  = (((input . __h_data ). Left ). __h_0_mem );
            // ----------
            /* cicili#Block530 */
            ({ /* cicili#Let532 */
              bool __h_case_result  = ((input . __h_ctor ) ==  __h_Left_t  );
              // ----------
              ((__h_case_result ) ? Left_String_Employee (error ) : ({ /* cicili#Let537 */
                  // ----------
                  /* cicili#Block539 */
                  Left_String_Employee (Empty_char ());
                }));
            });
          }));
      });
    });
}
void free_Monad_Either_String_int_Employee (Monad_Either_String_int_Employee * this ) {
}
const Monad_Either_String_int_Employee__H_Table * const get_Monad_Either_String_int_Employee__H_Table () {
  static const Monad_Either_String_int_Employee__H_Table table  = { free_Monad_Either_String_int_Employee , returnB_Monad_Either_String_int_Employee , returnA_Monad_Either_String_int_Employee , bind_Monad_Either_String_int_Employee };
  return (&table );
}
Monad_Either_String_int_Employee Monad_Either_String_int_Employee_ctor () {
  return ((Monad_Either_String_int_Employee){ get_Monad_Either_String_int_Employee__H_Table (), __h___t });
}
#endif /* __Monad_Either_String_int_Employee__H_IMPL__ */ 
Monad_Either_String_int_Employee get_Monad_Either_String_int_Employee () {
  return Monad_Either_String_int_Employee_ctor ();
}
int main () {
  ({ /* cicili#Let566 */
    __auto_type name  __attribute__((__cleanup__(free_String ))) = new_String_Const ("Jon Doe");
    __auto_type messi  = get_Monad_Either_String_String_Employee ();
    // ----------
    { /* cicili#Let574 */
      __auto_type __h_data572  = ((&messi )-> __h_table -> bind )(({ /* cicili#Let579 */
        __auto_type len  = (get_String__H_Table ()-> len )(name );
        // ----------
        ((((len  >  5 ) &&  (len  <  15 ) )) ? Right_String_String (name ) : Left_String_String (new_String_Const ("wrong name!")));
      }), ({ /* cicili#Progn587 */
        Either_String_Employee __ciciliC_586 (String wName ) {
          ({ /* cicili#Let592 */
            __auto_type mesii  = get_Monad_Either_String_int_Employee ();
            // ----------
            return ((&mesii )-> __h_table -> bind )(((((10 >  0 ) &&  (10 <  100 ) )) ? Right_String_int (10) : Left_String_int (new_String_Const ("wrong id!"))), ({ /* cicili#Progn601 */
                Either_String_Employee __ciciliC_600 (int wId ) {
                  ({ /* cicili#Let606 */
                    __auto_type mesie  = get_Monad_Either_String_int_Employee ();
                    // ----------
                    return ((&mesie )-> __h_table -> bind )(((((3000 >=  1000 ) &&  (3000 <=  5000 ) )) ? Right_String_int (3000) : Left_String_int (new_String_Const ("wrong salary!"))), ({ /* cicili#Progn615 */
                        Either_String_Employee __ciciliC_614 (int wSalary ) {
                          return Right_String_Employee (((Employee){ wName , wId , wSalary }));
                        }
                        __ciciliC_614 ;
                      }));
                  });
                }
                __ciciliC_600 ;
              }));
          });
        }
        __ciciliC_586 ;
      }));
      __auto_type __h_match571_0_arg  = (((__h_data572 . __h_data ). Right ). __h_0_mem );
      const __auto_type name  = (__h_match571_0_arg . __h_0_mem );
      const __auto_type id  = (__h_match571_0_arg . __h_1_mem );
      const __auto_type salary  = (__h_match571_0_arg . __h_2_mem );
      // ----------
      /* cicili#Block620 */
      ({ /* cicili#Let622 */
        bool __h_case_result  = ((__h_data572 . __h_ctor ) ==  __h_Right_t  );
        // ----------
        if (__h_case_result )
          ({ /* cicili#Progn625 */
            printf ("name is:");
            show_String (name );
            putchar ('\n');
            printf ("id is: %d\n", id );
            printf ("salary is: %d\n", salary );
          });
        else
          { /* cicili#Let630 */
            __auto_type err  = (((__h_data572 . __h_data ). Left ). __h_0_mem );
            // ----------
            /* cicili#Block632 */
            ({ /* cicili#Let634 */
              bool __h_case_result  = ((__h_data572 . __h_ctor ) ==  __h_Left_t  );
              // ----------
              if (__h_case_result )
                ({ /* cicili#Progn637 */
                  printf ("make Employee error: ");
                  show_String (err );
                  putchar ('\n');
                });
            });
          }
      });
    }
    { /* cicili#Let643 */
      __auto_type __h_data641  = ((&messi )-> __h_table -> bind )(({ /* cicili#Let648 */
        __auto_type len  = (get_String__H_Table ()-> len )(name );
        // ----------
        ((((len  >  5 ) &&  (len  <  15 ) )) ? Right_String_String (name ) : Left_String_String (new_String_Const ("wrong name!")));
      }), ({ /* cicili#Progn656 */
        Either_String_Employee __ciciliC_655 (String wName ) {
          ({ /* cicili#Let661 */
            __auto_type mesii  = get_Monad_Either_String_int_Employee ();
            // ----------
            return ((&mesii )-> __h_table -> bind )(((((10 >  0 ) &&  (10 <  100 ) )) ? Right_String_int (10) : Left_String_int (new_String_Const ("wrong id!"))), ({ /* cicili#Progn670 */
                Either_String_Employee __ciciliC_669 (int wId ) {
                  ({ /* cicili#Let675 */
                    __auto_type mesie  = get_Monad_Either_String_int_Employee ();
                    // ----------
                    return ((&mesie )-> __h_table -> bind )(((((6000 >=  1000 ) &&  (6000 <=  5000 ) )) ? Right_String_int (6000) : Left_String_int (new_String_Const ("wrong salary!"))), ({ /* cicili#Progn684 */
                        Either_String_Employee __ciciliC_683 (int wSalary ) {
                          return Right_String_Employee (((Employee){ wName , wId , wSalary }));
                        }
                        __ciciliC_683 ;
                      }));
                  });
                }
                __ciciliC_669 ;
              }));
          });
        }
        __ciciliC_655 ;
      }));
      __auto_type __h_match640_0_arg  = (((__h_data641 . __h_data ). Right ). __h_0_mem );
      const __auto_type name  = (__h_match640_0_arg . __h_0_mem );
      const __auto_type id  = (__h_match640_0_arg . __h_1_mem );
      const __auto_type salary  = (__h_match640_0_arg . __h_2_mem );
      // ----------
      /* cicili#Block689 */
      ({ /* cicili#Let691 */
        bool __h_case_result  = ((__h_data641 . __h_ctor ) ==  __h_Right_t  );
        // ----------
        if (__h_case_result )
          ({ /* cicili#Progn694 */
            printf ("name is:");
            show_String (name );
            putchar ('\n');
            printf ("id is: %d\n", id );
            printf ("salary is: %d\n", salary );
          });
        else
          { /* cicili#Let699 */
            __auto_type err  = (((__h_data641 . __h_data ). Left ). __h_0_mem );
            // ----------
            /* cicili#Block701 */
            ({ /* cicili#Let703 */
              bool __h_case_result  = ((__h_data641 . __h_ctor ) ==  __h_Left_t  );
              // ----------
              if (__h_case_result )
                ({ /* cicili#Let707 */
                  __auto_type err  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let709 */
                    __auto_type tmp_obj  = err ;
                    // ----------
                    ((void)(tmp_obj -> __h_table -> freeClass ));
                    tmp_obj ;
                  });
                  // ----------
                  printf ("make Employee error: ");
                  show_String (err );
                  putchar ('\n');
                });
            });
          }
      });
    }
  });
}
