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
} __ciciliS_102;
typedef __ciciliS_102 User ;
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
  union { /* ciciliUnion116 */
    struct { /* ciciliStruct117 */
      String __h_0_mem ;
    } Left , _0 ;
    struct { /* ciciliStruct118 */
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
#ifndef __Either_String_User__H_DECL__
#define __Either_String_User__H_DECL__
#ifndef __H___h_Either_ctor_t__
#define __H___h_Either_ctor_t__
typedef enum __h_Either_ctor_t {
  __h_Right_t = 0,
  __h_Left_t = 1
} __h_Either_ctor_t;
#endif /* __H___h_Either_ctor_t__ */ 
typedef struct Either_String_User Either_String_User ;
typedef void (*free_Either_String_User_t) (Either_String_User * this );
typedef struct Either_String_User__H_Table {
  free_Either_String_User_t freeData ;
} Either_String_User__H_Table;
typedef struct Either_String_User {
  const Either_String_User__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion144 */
    struct { /* ciciliStruct145 */
      String __h_0_mem ;
    } Left , _0 ;
    struct { /* ciciliStruct146 */
      User __h_0_mem ;
    } Right , _ ;
  } __h_data ;
} Either_String_User;
Either_String_User Left_String_User (String error );
Either_String_User Right_String_User (User value );
__attribute__((weak)) Either_String_User Default_Either_String_User (User value ) {
  return Right_String_User (value );
}
const Either_String_User__H_Table * const get_Either_String_User__H_Table ();
void free_Either_String_User (Either_String_User * this );
#endif /* __Either_String_User__H_DECL__ */ 
typedef Either_String_User (*String_to_Either_String_User_t) (String value );
#ifndef __Monad_Either_String_String_User__H_DECL__
#define __Monad_Either_String_String_User__H_DECL__
#ifndef __H___h_Monad_ctor_t__
#define __H___h_Monad_ctor_t__
typedef enum __h_Monad_ctor_t {
  __h_Monad_t = 0
} __h_Monad_ctor_t;
#endif /* __H___h_Monad_ctor_t__ */ 
typedef struct Monad_Either_String_String_User Monad_Either_String_String_User ;
typedef void (*free_Monad_Either_String_String_User_t) (Monad_Either_String_String_User * this );
typedef struct Monad_Either_String_String_User__H_Table {
  free_Monad_Either_String_String_User_t freeData ;
    Either_String_User (*returnB) (User value );
    Either_String_String (*returnA) (String value );
    Either_String_User (*bind) (Either_String_String input , String_to_Either_String_User_t a_mb );
} Monad_Either_String_String_User__H_Table;
typedef struct Monad_Either_String_String_User {
  const Monad_Either_String_String_User__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion184 */
    struct { /* ciciliStruct185 */
    } Monad , _ ;
  } __h_data ;
} Monad_Either_String_String_User;
Monad_Either_String_String_User Monad_Either_String_String_User_ctor ();
__attribute__((weak)) Monad_Either_String_String_User Default_Monad_Either_String_String_User () {
  return Monad_Either_String_String_User_ctor ();
}
Either_String_User returnB_Monad_Either_String_String_User (User value );
Either_String_String returnA_Monad_Either_String_String_User (String value );
Either_String_User bind_Monad_Either_String_String_User (Either_String_String input , String_to_Either_String_User_t a_mb );
const Monad_Either_String_String_User__H_Table * const get_Monad_Either_String_String_User__H_Table ();
void free_Monad_Either_String_String_User (Monad_Either_String_String_User * this );
#endif /* __Monad_Either_String_String_User__H_DECL__ */ 
Monad_Either_String_String_User get_Monad_Either_String_String_User ();
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
#ifndef __Either_String_User__H_IMPL__
#define __Either_String_User__H_IMPL__
void free_Either_String_User (Either_String_User * this ) {
}
const Either_String_User__H_Table * const get_Either_String_User__H_Table () {
  static const Either_String_User__H_Table table  = { free_Either_String_User };
  return (&table );
}
Either_String_User Left_String_User (String error ) {
  return ((Either_String_User){ get_Either_String_User__H_Table (), __h_Left_t , .__h_data.Left = { error }});
}
Either_String_User Right_String_User (User value ) {
  return ((Either_String_User){ get_Either_String_User__H_Table (), __h___t , .__h_data._ = { value }});
}
#endif /* __Either_String_User__H_IMPL__ */ 
#ifndef __Monad_Either_String_String_User__H_IMPL__
#define __Monad_Either_String_String_User__H_IMPL__
Either_String_User returnB_Monad_Either_String_String_User (User value ) {
  return Right_String_User (value );
}
Either_String_String returnA_Monad_Either_String_String_User (String value ) {
  return Right_String_String (value );
}
Either_String_User bind_Monad_Either_String_String_User (Either_String_String input , String_to_Either_String_User_t a_mb ) {
  return ({ /* cicili#Let268 */
      __auto_type value  = (((input . __h_data ). Right ). __h_0_mem );
      // ----------
      /* cicili#Block270 */
      ({ /* cicili#Let272 */
        bool __h_case_result  = ((input . __h_ctor ) ==  __h_Right_t  );
        // ----------
        ((__h_case_result ) ? a_mb (value ) : ({ /* cicili#Let276 */
            __auto_type error  = (((input . __h_data ). Left ). __h_0_mem );
            // ----------
            /* cicili#Block278 */
            ({ /* cicili#Let280 */
              bool __h_case_result  = ((input . __h_ctor ) ==  __h_Left_t  );
              // ----------
              ((__h_case_result ) ? Left_String_User (error ) : ({ /* cicili#Let285 */
                  // ----------
                  /* cicili#Block287 */
                  Left_String_User (Empty_char ());
                }));
            });
          }));
      });
    });
}
void free_Monad_Either_String_String_User (Monad_Either_String_String_User * this ) {
}
const Monad_Either_String_String_User__H_Table * const get_Monad_Either_String_String_User__H_Table () {
  static const Monad_Either_String_String_User__H_Table table  = { free_Monad_Either_String_String_User , returnB_Monad_Either_String_String_User , returnA_Monad_Either_String_String_User , bind_Monad_Either_String_String_User };
  return (&table );
}
Monad_Either_String_String_User Monad_Either_String_String_User_ctor () {
  return ((Monad_Either_String_String_User){ get_Monad_Either_String_String_User__H_Table (), __h___t });
}
#endif /* __Monad_Either_String_String_User__H_IMPL__ */ 
Monad_Either_String_String_User get_Monad_Either_String_String_User () {
  return Monad_Either_String_String_User_ctor ();
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
  union { /* ciciliUnion319 */
    struct { /* ciciliStruct320 */
      String __h_0_mem ;
    } Left , _0 ;
    struct { /* ciciliStruct321 */
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
#ifndef __Either_String_User__H_DECL__
#define __Either_String_User__H_DECL__
#ifndef __H___h_Either_ctor_t__
#define __H___h_Either_ctor_t__
typedef enum __h_Either_ctor_t {
  __h_Right_t = 0,
  __h_Left_t = 1
} __h_Either_ctor_t;
#endif /* __H___h_Either_ctor_t__ */ 
typedef struct Either_String_User Either_String_User ;
typedef void (*free_Either_String_User_t) (Either_String_User * this );
typedef struct Either_String_User__H_Table {
  free_Either_String_User_t freeData ;
} Either_String_User__H_Table;
typedef struct Either_String_User {
  const Either_String_User__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion347 */
    struct { /* ciciliStruct348 */
      String __h_0_mem ;
    } Left , _0 ;
    struct { /* ciciliStruct349 */
      User __h_0_mem ;
    } Right , _ ;
  } __h_data ;
} Either_String_User;
Either_String_User Left_String_User (String error );
Either_String_User Right_String_User (User value );
__attribute__((weak)) Either_String_User Default_Either_String_User (User value ) {
  return Right_String_User (value );
}
const Either_String_User__H_Table * const get_Either_String_User__H_Table ();
void free_Either_String_User (Either_String_User * this );
#endif /* __Either_String_User__H_DECL__ */ 
typedef Either_String_User (*int_to_Either_String_User_t) (int value );
#ifndef __Monad_Either_String_int_User__H_DECL__
#define __Monad_Either_String_int_User__H_DECL__
#ifndef __H___h_Monad_ctor_t__
#define __H___h_Monad_ctor_t__
typedef enum __h_Monad_ctor_t {
  __h_Monad_t = 0
} __h_Monad_ctor_t;
#endif /* __H___h_Monad_ctor_t__ */ 
typedef struct Monad_Either_String_int_User Monad_Either_String_int_User ;
typedef void (*free_Monad_Either_String_int_User_t) (Monad_Either_String_int_User * this );
typedef struct Monad_Either_String_int_User__H_Table {
  free_Monad_Either_String_int_User_t freeData ;
    Either_String_User (*returnB) (User value );
    Either_String_int (*returnA) (int value );
    Either_String_User (*bind) (Either_String_int input , int_to_Either_String_User_t a_mb );
} Monad_Either_String_int_User__H_Table;
typedef struct Monad_Either_String_int_User {
  const Monad_Either_String_int_User__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion387 */
    struct { /* ciciliStruct388 */
    } Monad , _ ;
  } __h_data ;
} Monad_Either_String_int_User;
Monad_Either_String_int_User Monad_Either_String_int_User_ctor ();
__attribute__((weak)) Monad_Either_String_int_User Default_Monad_Either_String_int_User () {
  return Monad_Either_String_int_User_ctor ();
}
Either_String_User returnB_Monad_Either_String_int_User (User value );
Either_String_int returnA_Monad_Either_String_int_User (int value );
Either_String_User bind_Monad_Either_String_int_User (Either_String_int input , int_to_Either_String_User_t a_mb );
const Monad_Either_String_int_User__H_Table * const get_Monad_Either_String_int_User__H_Table ();
void free_Monad_Either_String_int_User (Monad_Either_String_int_User * this );
#endif /* __Monad_Either_String_int_User__H_DECL__ */ 
Monad_Either_String_int_User get_Monad_Either_String_int_User ();
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
#ifndef __Either_String_User__H_IMPL__
#define __Either_String_User__H_IMPL__
void free_Either_String_User (Either_String_User * this ) {
}
const Either_String_User__H_Table * const get_Either_String_User__H_Table () {
  static const Either_String_User__H_Table table  = { free_Either_String_User };
  return (&table );
}
Either_String_User Left_String_User (String error ) {
  return ((Either_String_User){ get_Either_String_User__H_Table (), __h_Left_t , .__h_data.Left = { error }});
}
Either_String_User Right_String_User (User value ) {
  return ((Either_String_User){ get_Either_String_User__H_Table (), __h___t , .__h_data._ = { value }});
}
#endif /* __Either_String_User__H_IMPL__ */ 
#ifndef __Monad_Either_String_int_User__H_IMPL__
#define __Monad_Either_String_int_User__H_IMPL__
Either_String_User returnB_Monad_Either_String_int_User (User value ) {
  return Right_String_User (value );
}
Either_String_int returnA_Monad_Either_String_int_User (int value ) {
  return Right_String_int (value );
}
Either_String_User bind_Monad_Either_String_int_User (Either_String_int input , int_to_Either_String_User_t a_mb ) {
  return ({ /* cicili#Let471 */
      __auto_type value  = (((input . __h_data ). Right ). __h_0_mem );
      // ----------
      /* cicili#Block473 */
      ({ /* cicili#Let475 */
        bool __h_case_result  = ((input . __h_ctor ) ==  __h_Right_t  );
        // ----------
        ((__h_case_result ) ? a_mb (value ) : ({ /* cicili#Let479 */
            __auto_type error  = (((input . __h_data ). Left ). __h_0_mem );
            // ----------
            /* cicili#Block481 */
            ({ /* cicili#Let483 */
              bool __h_case_result  = ((input . __h_ctor ) ==  __h_Left_t  );
              // ----------
              ((__h_case_result ) ? Left_String_User (error ) : ({ /* cicili#Let488 */
                  // ----------
                  /* cicili#Block490 */
                  Left_String_User (Empty_char ());
                }));
            });
          }));
      });
    });
}
void free_Monad_Either_String_int_User (Monad_Either_String_int_User * this ) {
}
const Monad_Either_String_int_User__H_Table * const get_Monad_Either_String_int_User__H_Table () {
  static const Monad_Either_String_int_User__H_Table table  = { free_Monad_Either_String_int_User , returnB_Monad_Either_String_int_User , returnA_Monad_Either_String_int_User , bind_Monad_Either_String_int_User };
  return (&table );
}
Monad_Either_String_int_User Monad_Either_String_int_User_ctor () {
  return ((Monad_Either_String_int_User){ get_Monad_Either_String_int_User__H_Table (), __h___t });
}
#endif /* __Monad_Either_String_int_User__H_IMPL__ */ 
Monad_Either_String_int_User get_Monad_Either_String_int_User () {
  return Monad_Either_String_int_User_ctor ();
}
Either_String_String validate_name (String name ) {
  if ((name -> __h_table -> len )(name ) >=  5 )
    return Right_String_String (name );
  else
    return Left_String_String (new_String_Const ("Error: Name must be >= 5 chars"));
}
Either_String_int validate_id (int id ) {
  if (id  >  100 )
    return Right_String_int (id );
  else
    return Left_String_int (new_String_Const ("Error: ID must be > 100"));
}
int main () {
  ({ /* cicili#Progn526 */
    ({ /* cicili#Let533 */
      __auto_type name_input  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let535 */
        __auto_type tmp_obj  = new_String_Const ("ValidUsername");
        // ----------
        ((void)(tmp_obj -> __h_table -> freeClass ));
        tmp_obj ;
      });
      // ----------
      { /* cicili#Let544 */
        __auto_type __h_data542  = bind_Monad_Either_String_String_User (validate_name (name_input ), ({ /* cicili#Progn551 */
          Either_String_User __ciciliC_550 (String valid_name ) {
            return bind_Monad_Either_String_int_User (validate_id (200), ({ /* cicili#Progn561 */
                Either_String_User __ciciliC_560 (int valid_id ) {
                  return Right_String_User (((User){ valid_name , valid_id }));
                }
                __ciciliC_560 ;
              }));
          }
          __ciciliC_550 ;
        }));
        __auto_type __h_match541_0_arg  = (((__h_data542 . __h_data ). Right ). __h_0_mem );
        const __auto_type name  = (__h_match541_0_arg . __h_0_mem );
        const __auto_type id  = (__h_match541_0_arg . __h_1_mem );
        // ----------
        /* cicili#Block566 */
        ({ /* cicili#Let568 */
          bool __h_case_result  = ((__h_data542 . __h_ctor ) ==  __h_Right_t  );
          // ----------
          if (__h_case_result )
            ({ /* cicili#Progn571 */
              printf ("--- SUCCESS ---\nUser Name: ");
              show_String (name );
              printf ("\nUser ID:   %d\n\n", id );
            });
          else
            { /* cicili#Let576 */
              __auto_type err  = (((__h_data542 . __h_data ). Left ). __h_0_mem );
              // ----------
              /* cicili#Block578 */
              ({ /* cicili#Let580 */
                bool __h_case_result  = ((__h_data542 . __h_ctor ) ==  __h_Left_t  );
                // ----------
                if (__h_case_result )
                  ({ /* cicili#Progn583 */
                    printf ("--- FAILED ---\nError: ");
                    show_String (err );
                    printf ("\n\n");
                    free_String ((&err ));
                  });
              });
            }
        });
      }
    });
    ({ /* cicili#Let590 */
      __auto_type name_input  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let592 */
        __auto_type tmp_obj  = new_String_Const ("Bad");
        // ----------
        ((void)(tmp_obj -> __h_table -> freeClass ));
        tmp_obj ;
      });
      // ----------
      { /* cicili#Let601 */
        __auto_type __h_data599  = bind_Monad_Either_String_String_User (validate_name (name_input ), ({ /* cicili#Progn608 */
          Either_String_User __ciciliC_607 (String valid_name ) {
            return bind_Monad_Either_String_int_User (validate_id (300), ({ /* cicili#Progn618 */
                Either_String_User __ciciliC_617 (int valid_id ) {
                  return Right_String_User (((User){ valid_name , valid_id }));
                }
                __ciciliC_617 ;
              }));
          }
          __ciciliC_607 ;
        }));
        __auto_type __h_match598_0_arg  = (((__h_data599 . __h_data ). Right ). __h_0_mem );
        const __auto_type name  = (__h_match598_0_arg . __h_0_mem );
        const __auto_type id  = (__h_match598_0_arg . __h_1_mem );
        // ----------
        /* cicili#Block623 */
        ({ /* cicili#Let625 */
          bool __h_case_result  = ((__h_data599 . __h_ctor ) ==  __h_Right_t  );
          // ----------
          if (__h_case_result )
            ({ /* cicili#Progn628 */
              printf ("--- SUCCESS ---\nUser Name: ");
              show_String (name );
              printf ("\nUser ID:   %d\n\n", id );
            });
          else
            { /* cicili#Let633 */
              __auto_type err  = (((__h_data599 . __h_data ). Left ). __h_0_mem );
              // ----------
              /* cicili#Block635 */
              ({ /* cicili#Let637 */
                bool __h_case_result  = ((__h_data599 . __h_ctor ) ==  __h_Left_t  );
                // ----------
                if (__h_case_result )
                  ({ /* cicili#Progn640 */
                    printf ("--- FAILED ---\nError: ");
                    show_String (err );
                    printf ("\n\n");
                    free_String ((&err ));
                  });
              });
            }
        });
      }
    });
    ({ /* cicili#Let647 */
      __auto_type name_input  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let649 */
        __auto_type tmp_obj  = new_String_Const ("AnotherValidName");
        // ----------
        ((void)(tmp_obj -> __h_table -> freeClass ));
        tmp_obj ;
      });
      // ----------
      { /* cicili#Let658 */
        __auto_type __h_data656  = bind_Monad_Either_String_String_User (validate_name (name_input ), ({ /* cicili#Progn665 */
          Either_String_User __ciciliC_664 (String valid_name ) {
            return bind_Monad_Either_String_int_User (validate_id (50), ({ /* cicili#Progn675 */
                Either_String_User __ciciliC_674 (int valid_id ) {
                  return Right_String_User (((User){ valid_name , valid_id }));
                }
                __ciciliC_674 ;
              }));
          }
          __ciciliC_664 ;
        }));
        __auto_type __h_match655_0_arg  = (((__h_data656 . __h_data ). Right ). __h_0_mem );
        const __auto_type name  = (__h_match655_0_arg . __h_0_mem );
        const __auto_type id  = (__h_match655_0_arg . __h_1_mem );
        // ----------
        /* cicili#Block680 */
        ({ /* cicili#Let682 */
          bool __h_case_result  = ((__h_data656 . __h_ctor ) ==  __h_Right_t  );
          // ----------
          if (__h_case_result )
            ({ /* cicili#Progn685 */
              printf ("--- SUCCESS ---\nUser Name: ");
              show_String (name );
              printf ("\nUser ID:   %d\n\n", id );
            });
          else
            { /* cicili#Let690 */
              __auto_type err  = (((__h_data656 . __h_data ). Left ). __h_0_mem );
              // ----------
              /* cicili#Block692 */
              ({ /* cicili#Let694 */
                bool __h_case_result  = ((__h_data656 . __h_ctor ) ==  __h_Left_t  );
                // ----------
                if (__h_case_result )
                  ({ /* cicili#Progn697 */
                    printf ("--- FAILED ---\nError: ");
                    show_String (err );
                    printf ("\n\n");
                    free_String ((&err ));
                  });
              });
            }
        });
      }
    });
  });
}
