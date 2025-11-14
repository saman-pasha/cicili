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
  return ({ /* cicili#Let270 */
      __auto_type value  = (((input . __h_data ). Right ). __h_0_mem );
      // ----------
      /* cicili#Block272 */
      ({ /* cicili#Let274 */
        bool __h_case_result  = ((input . __h_ctor ) ==  __h_Right_t  );
        // ----------
        ((__h_case_result ) ? a_mb (value ) : ({ /* cicili#Let278 */
            __auto_type error  = (((input . __h_data ). Left ). __h_0_mem );
            // ----------
            /* cicili#Block280 */
            ({ /* cicili#Let282 */
              bool __h_case_result  = ((input . __h_ctor ) ==  __h_Left_t  );
              // ----------
              ((__h_case_result ) ? Left_String_User (error ) : ({ /* cicili#Let287 */
                  // ----------
                  /* cicili#Block289 */
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
  union { /* ciciliUnion321 */
    struct { /* ciciliStruct322 */
      String __h_0_mem ;
    } Left , _0 ;
    struct { /* ciciliStruct323 */
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
  union { /* ciciliUnion349 */
    struct { /* ciciliStruct350 */
      String __h_0_mem ;
    } Left , _0 ;
    struct { /* ciciliStruct351 */
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
  union { /* ciciliUnion389 */
    struct { /* ciciliStruct390 */
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
  return ({ /* cicili#Let475 */
      __auto_type value  = (((input . __h_data ). Right ). __h_0_mem );
      // ----------
      /* cicili#Block477 */
      ({ /* cicili#Let479 */
        bool __h_case_result  = ((input . __h_ctor ) ==  __h_Right_t  );
        // ----------
        ((__h_case_result ) ? a_mb (value ) : ({ /* cicili#Let483 */
            __auto_type error  = (((input . __h_data ). Left ). __h_0_mem );
            // ----------
            /* cicili#Block485 */
            ({ /* cicili#Let487 */
              bool __h_case_result  = ((input . __h_ctor ) ==  __h_Left_t  );
              // ----------
              ((__h_case_result ) ? Left_String_User (error ) : ({ /* cicili#Let492 */
                  // ----------
                  /* cicili#Block494 */
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
  ({ /* cicili#Progn530 */
    ({ /* cicili#Let537 */
      __auto_type name_input  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let539 */
        __auto_type tmp_obj  = new_String_Const ("ValidUsername");
        // ----------
        ((void)(tmp_obj -> __h_table -> freeClass ));
        tmp_obj ;
      });
      // ----------
      { /* cicili#Let548 */
        __auto_type __h_data546  = bind_Monad_Either_String_String_User (validate_name (name_input ), ({ /* cicili#Progn554 */
          Either_String_User __ciciliL_559 (String valid_name ) {
            return bind_Monad_Either_String_int_User (validate_id (200), ({ /* cicili#Progn566 */
                Either_String_User __ciciliL_571 (int valid_id ) {
                  return Right_String_User (((User){ valid_name , valid_id }));
                }
                Either_String_User __ciciliC_565 (int __h_value ) {
                  return __ciciliL_571 (__h_value );
                }
                __ciciliC_565 ;
              }));
          }
          Either_String_User __ciciliC_553 (String __h_value ) {
            return __ciciliL_559 (__h_value );
          }
          __ciciliC_553 ;
        }));
        __auto_type __h_match545_0_arg  = (((__h_data546 . __h_data ). Right ). __h_0_mem );
        const __auto_type name  = (__h_match545_0_arg . __h_0_mem );
        const __auto_type id  = (__h_match545_0_arg . __h_1_mem );
        // ----------
        /* cicili#Block574 */
        ({ /* cicili#Let576 */
          bool __h_case_result  = ((__h_data546 . __h_ctor ) ==  __h_Right_t  );
          // ----------
          if (__h_case_result )
            ({ /* cicili#Progn579 */
              printf ("--- SUCCESS ---\nUser Name: ");
              show_String (name );
              printf ("\nUser ID:   %d\n\n", id );
            });
          else
            { /* cicili#Let584 */
              __auto_type err  = (((__h_data546 . __h_data ). Left ). __h_0_mem );
              // ----------
              /* cicili#Block586 */
              ({ /* cicili#Let588 */
                bool __h_case_result  = ((__h_data546 . __h_ctor ) ==  __h_Left_t  );
                // ----------
                if (__h_case_result )
                  ({ /* cicili#Progn591 */
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
    ({ /* cicili#Let598 */
      __auto_type name_input  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let600 */
        __auto_type tmp_obj  = new_String_Const ("Bad");
        // ----------
        ((void)(tmp_obj -> __h_table -> freeClass ));
        tmp_obj ;
      });
      // ----------
      { /* cicili#Let609 */
        __auto_type __h_data607  = bind_Monad_Either_String_String_User (validate_name (name_input ), ({ /* cicili#Progn615 */
          Either_String_User __ciciliL_620 (String valid_name ) {
            return bind_Monad_Either_String_int_User (validate_id (300), ({ /* cicili#Progn627 */
                Either_String_User __ciciliL_632 (int valid_id ) {
                  return Right_String_User (((User){ valid_name , valid_id }));
                }
                Either_String_User __ciciliC_626 (int __h_value ) {
                  return __ciciliL_632 (__h_value );
                }
                __ciciliC_626 ;
              }));
          }
          Either_String_User __ciciliC_614 (String __h_value ) {
            return __ciciliL_620 (__h_value );
          }
          __ciciliC_614 ;
        }));
        __auto_type __h_match606_0_arg  = (((__h_data607 . __h_data ). Right ). __h_0_mem );
        const __auto_type name  = (__h_match606_0_arg . __h_0_mem );
        const __auto_type id  = (__h_match606_0_arg . __h_1_mem );
        // ----------
        /* cicili#Block635 */
        ({ /* cicili#Let637 */
          bool __h_case_result  = ((__h_data607 . __h_ctor ) ==  __h_Right_t  );
          // ----------
          if (__h_case_result )
            ({ /* cicili#Progn640 */
              printf ("--- SUCCESS ---\nUser Name: ");
              show_String (name );
              printf ("\nUser ID:   %d\n\n", id );
            });
          else
            { /* cicili#Let645 */
              __auto_type err  = (((__h_data607 . __h_data ). Left ). __h_0_mem );
              // ----------
              /* cicili#Block647 */
              ({ /* cicili#Let649 */
                bool __h_case_result  = ((__h_data607 . __h_ctor ) ==  __h_Left_t  );
                // ----------
                if (__h_case_result )
                  ({ /* cicili#Progn652 */
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
    ({ /* cicili#Let659 */
      __auto_type name_input  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let661 */
        __auto_type tmp_obj  = new_String_Const ("AnotherValidName");
        // ----------
        ((void)(tmp_obj -> __h_table -> freeClass ));
        tmp_obj ;
      });
      // ----------
      { /* cicili#Let670 */
        __auto_type __h_data668  = bind_Monad_Either_String_String_User (validate_name (name_input ), ({ /* cicili#Progn676 */
          Either_String_User __ciciliL_681 (String valid_name ) {
            return bind_Monad_Either_String_int_User (validate_id (50), ({ /* cicili#Progn688 */
                Either_String_User __ciciliL_693 (int valid_id ) {
                  return Right_String_User (((User){ valid_name , valid_id }));
                }
                Either_String_User __ciciliC_687 (int __h_value ) {
                  return __ciciliL_693 (__h_value );
                }
                __ciciliC_687 ;
              }));
          }
          Either_String_User __ciciliC_675 (String __h_value ) {
            return __ciciliL_681 (__h_value );
          }
          __ciciliC_675 ;
        }));
        __auto_type __h_match667_0_arg  = (((__h_data668 . __h_data ). Right ). __h_0_mem );
        const __auto_type name  = (__h_match667_0_arg . __h_0_mem );
        const __auto_type id  = (__h_match667_0_arg . __h_1_mem );
        // ----------
        /* cicili#Block696 */
        ({ /* cicili#Let698 */
          bool __h_case_result  = ((__h_data668 . __h_ctor ) ==  __h_Right_t  );
          // ----------
          if (__h_case_result )
            ({ /* cicili#Progn701 */
              printf ("--- SUCCESS ---\nUser Name: ");
              show_String (name );
              printf ("\nUser ID:   %d\n\n", id );
            });
          else
            { /* cicili#Let706 */
              __auto_type err  = (((__h_data668 . __h_data ). Left ). __h_0_mem );
              // ----------
              /* cicili#Block708 */
              ({ /* cicili#Let710 */
                bool __h_case_result  = ((__h_data668 . __h_ctor ) ==  __h_Left_t  );
                // ----------
                if (__h_case_result )
                  ({ /* cicili#Progn713 */
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
