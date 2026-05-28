#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "../../haskell.h"
#ifndef __BoxedList__H_DECL__
#define __BoxedList__H_DECL__
#ifndef __H___h_List_ctor_t__
#define __H___h_List_ctor_t__
typedef enum __h_List_ctor_t {
  __h_Nil_t = 0,
  __h_Cons_t = 1
} __h_List_ctor_t;
#endif /* __H___h_List_ctor_t__ */ 
typedef struct class_BoxedList class_BoxedList ;
typedef class_BoxedList * BoxedList_x ;
#ifndef __Maybe_BoxedList_x__H_DECL__
#define __Maybe_BoxedList_x__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_BoxedList_x Maybe_BoxedList_x ;
typedef void (*free_Maybe_BoxedList_x_t) (Maybe_BoxedList_x * this );
typedef struct Maybe_BoxedList_x__H_Table {
  free_Maybe_BoxedList_x_t freeData ;
} Maybe_BoxedList_x__H_Table;
typedef struct Maybe_BoxedList_x {
  const Maybe_BoxedList_x__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion117 */
    struct { /* ciciliStruct118 */
      BoxedList_x __h_0_mem ;
    } Just , _0 ;
    struct { /* ciciliStruct119 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_BoxedList_x;
Maybe_BoxedList_x Just_BoxedList_x (BoxedList_x value );
Maybe_BoxedList_x Nothing_BoxedList_x ();
__attribute__((weak)) Maybe_BoxedList_x Default_Maybe_BoxedList_x () {
  return Nothing_BoxedList_x ();
}
const Maybe_BoxedList_x__H_Table * const get_Maybe_BoxedList_x__H_Table ();
void free_Maybe_BoxedList_x (Maybe_BoxedList_x * this );
#endif /* __Maybe_BoxedList_x__H_DECL__ */ 
#ifndef __Box_BoxedList__H_DECL__
#define __Box_BoxedList__H_DECL__
#ifndef __H___h_Cell_ctor_t__
#define __H___h_Cell_ctor_t__
typedef enum __h_Cell_ctor_t {
  __h_Dead_t = 0,
  __h_Alive_t = 1
} __h_Cell_ctor_t;
#endif /* __H___h_Cell_ctor_t__ */ 
typedef struct Box_BoxedList Box_BoxedList ;
typedef void (*free_Box_BoxedList_t) (Box_BoxedList * this );
typedef struct Box_BoxedList__H_Table {
  free_Box_BoxedList_t freeData ;
    Box_BoxedList (*new) (BoxedList_x pointer );
    Maybe_BoxedList_x (*take) (Box_BoxedList * this );
    Maybe_BoxedList_x (*get) (Box_BoxedList life );
} Box_BoxedList__H_Table;
typedef struct Box_BoxedList {
  const Box_BoxedList__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion148 */
    struct { /* ciciliStruct149 */
      BoxedList_x * __h_0_mem ;
      size_t __h_1_mem ;
    } Alive , _0 ;
    struct { /* ciciliStruct150 */
    } Dead , _ ;
  } __h_data ;
} Box_BoxedList;
Box_BoxedList __h_Alive_BoxedList_x (BoxedList_x * pointer , size_t address );
Box_BoxedList Dead_BoxedList_x ();
__attribute__((weak)) Box_BoxedList Default_Box_BoxedList () {
  return Dead_BoxedList_x ();
}
Box_BoxedList new_Box_BoxedList (BoxedList_x pointer );
Maybe_BoxedList_x take_Box_BoxedList (Box_BoxedList * this );
Maybe_BoxedList_x get_Box_BoxedList (Box_BoxedList life );
const Box_BoxedList__H_Table * const get_Box_BoxedList__H_Table ();
void free_Box_BoxedList (Box_BoxedList * this );
#endif /* __Box_BoxedList__H_DECL__ */ 
typedef Box_BoxedList BoxedList ;
typedef void (*free_BoxedList_t) (BoxedList_x * this );
typedef struct BoxedList__H_Table {
  free_BoxedList_t freeData ;
    BoxedList (*pure) (const char * buf , char len );
    void (*show) (BoxedList list );
    BoxedList (*drop) (int len , BoxedList list );
} BoxedList__H_Table;
typedef struct class_BoxedList {
  const BoxedList__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion186 */
    struct { /* ciciliStruct187 */
      char __h_0_mem ;
      BoxedList __h_1_mem ;
    } Cons , _0 ;
    struct { /* ciciliStruct188 */
    } Nil , _ ;
  } __h_data ;
} class_BoxedList;
BoxedList BoxedCons_char (char head , BoxedList tail );
BoxedList BoxedNil_char ();
__attribute__((weak)) BoxedList Default_BoxedList () {
  return BoxedNil_char ();
}
BoxedList pure_BoxedList (const char * buf , char len );
void show_BoxedList (BoxedList list );
BoxedList drop_BoxedList (int len , BoxedList list );
BoxedList__H_Table * const get_BoxedList__H_Table ();
void free_BoxedList_x (BoxedList_x * this );
#endif /* __BoxedList__H_DECL__ */ 
#ifndef __BoxedList__H_IMPL__
#define __BoxedList__H_IMPL__
#ifndef __Maybe_BoxedList_x__H_IMPL__
#define __Maybe_BoxedList_x__H_IMPL__
void free_Maybe_BoxedList_x (Maybe_BoxedList_x * this ) {
}
const Maybe_BoxedList_x__H_Table * const get_Maybe_BoxedList_x__H_Table () {
  static const Maybe_BoxedList_x__H_Table table  = { free_Maybe_BoxedList_x };
  return (&table );
}
Maybe_BoxedList_x Just_BoxedList_x (BoxedList_x value ) {
  return ((Maybe_BoxedList_x){ get_Maybe_BoxedList_x__H_Table (), __h_Just_t , .__h_data.Just = { value }});
}
Maybe_BoxedList_x Nothing_BoxedList_x () {
  return ((Maybe_BoxedList_x){ get_Maybe_BoxedList_x__H_Table (), __h___t });
}
#endif /* __Maybe_BoxedList_x__H_IMPL__ */ 
#ifndef __Box_BoxedList__H_IMPL__
#define __Box_BoxedList__H_IMPL__
Box_BoxedList new_Box_BoxedList (BoxedList_x pointer ) {
  return ({ /* cicili#Let237 */
      __auto_type holder  = ((BoxedList_x *)malloc (sizeof(BoxedList_x *)));
      // ----------
      (*holder ) = pointer ;
      __h_Alive_BoxedList_x (holder , ((size_t)pointer ));
    });
}
Maybe_BoxedList_x take_Box_BoxedList (Box_BoxedList * this ) {
  return ({ /* cicili#Let245 */
      typeof((((this -> __h_data ). Alive ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Alive ). __h_1_mem )) address ;
      // ----------
      
      ({ /* cicili#Let249 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Alive_t  ) &&  (({ /* cicili#Progn250 */
                (pointer  =  (((this -> __h_data ). Alive ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn252 */
                (address  =  (((this -> __h_data ). Alive ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn255 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Let259 */
                __auto_type result  = Just_BoxedList_x ((*pointer ));
                // ----------
                ({ /* cicili#Progn263 */
                });
                (*pointer ) = NULL ;
                free (((void *)pointer ));
                (*this ) = Dead_BoxedList_x ();
                result ;
              }) : Nothing_BoxedList_x ());
          }) : ({ /* cicili#Let269 */
            // ----------
            
            ({ /* cicili#Progn273 */
              Nothing_BoxedList_x ();
            });
          }));
      });
    });
}
Maybe_BoxedList_x get_Box_BoxedList (Box_BoxedList life ) {
  return ({ /* cicili#Let281 */
      typeof((((life . __h_data ). Alive ). __h_0_mem )) pointer ;
      typeof((((life . __h_data ). Alive ). __h_1_mem )) address ;
      // ----------
      
      ({ /* cicili#Let285 */
        bool __h_case_result  = (true  &&  (((life . __h_ctor ) ==  __h_Alive_t  ) &&  (({ /* cicili#Progn286 */
                (pointer  =  (((life . __h_data ). Alive ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn288 */
                (address  =  (((life . __h_data ). Alive ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn291 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? Just_BoxedList_x ((*pointer )) : Nothing_BoxedList_x ());
          }) : ({ /* cicili#Let298 */
            // ----------
            
            ({ /* cicili#Progn302 */
              Nothing_BoxedList_x ();
            });
          }));
      });
    });
}
void free_Box_BoxedList (Box_BoxedList * this ) {
  ({ /* cicili#Progn308 */
  });
  { /* cicili#Let312 */
    typeof((((this -> __h_data ). Alive ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Alive ). __h_1_mem )) address ;
    // ----------
    
    ({ /* cicili#Let316 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Alive_t  ) &&  (({ /* cicili#Progn317 */
              (pointer  =  (((this -> __h_data ). Alive ). __h_0_mem ) );
              true ;
            }) &&  ({ /* cicili#Progn319 */
              (address  =  (((this -> __h_data ). Alive ). __h_1_mem ) );
              true ;
            }) ) ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block323 */
          if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
            { /* cicili#Block327 */
              ({ /* cicili#Progn330 */
              });
              free_BoxedList_x (pointer );
              (*pointer ) = NULL ;
              free (((void *)pointer ));
              (*this ) = Dead_BoxedList_x ();
            }
        }
      else
        { /* cicili#Let337 */
          // ----------
          
          ({ /* cicili#Let341 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Dead_t  ) );
            // ----------
            if (__h_case_result )
              { /* cicili#Block344 */
                ({ /* cicili#Progn347 */
                });
              }
          });
        }
    });
  }
}
const Box_BoxedList__H_Table * const get_Box_BoxedList__H_Table () {
  static const Box_BoxedList__H_Table table  = { free_Box_BoxedList , new_Box_BoxedList , take_Box_BoxedList , get_Box_BoxedList };
  return (&table );
}
Box_BoxedList __h_Alive_BoxedList_x (BoxedList_x * pointer , size_t address ) {
  return ((Box_BoxedList){ get_Box_BoxedList__H_Table (), __h_Alive_t , .__h_data.Alive = { pointer , address }});
}
Box_BoxedList Dead_BoxedList_x () {
  return ((Box_BoxedList){ get_Box_BoxedList__H_Table (), __h___t });
}
#endif /* __Box_BoxedList__H_IMPL__ */ 
BoxedList pure_BoxedList (const char * buf , char len ) {
  return (((buf  ==  NULL  )) ? BoxedNil_char () : ({ /* cicili#Let365 */
        char item  = (*buf );
        // ----------
        (((len  ==  0 )) ? BoxedNil_char () : BoxedCons_char (item , pure_BoxedList ((++buf ), (--len ))));
      }));
}
void show_BoxedList (BoxedList list ) {
  { /* cicili#Let375 */
    __auto_type match374  = ((&list )-> __h_table -> get )(list );
    typeof((((match374 . __h_data ). Just ). __h_0_mem )) unboxed ;
    // ----------
    
    ({ /* cicili#Let380 */
      bool __h_case_result  = (true  &&  (((match374 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn381 */
            (unboxed  =  (((match374 . __h_data ). Just ). __h_0_mem ) );
            true ;
          }) ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block385 */
          { /* cicili#Let389 */
            typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
            typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
            // ----------
            
            ({ /* cicili#Let393 */
              bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn394 */
                      (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn396 */
                      (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              if (__h_case_result )
                { /* cicili#Block400 */
                  { /* cicili#Block402 */
                    fprintf (stdout , "%c", head );
                    show_BoxedList (tail );
                  }
                }
            });
          }
        }
      else
        { /* cicili#Let409 */
          // ----------
          
          ({ /* cicili#Let413 */
            bool __h_case_result  = (true  &&  ((match374 . __h_ctor ) ==  __h_Nothing_t  ) );
            // ----------
            if (__h_case_result )
              { /* cicili#Block416 */
                ({ /* cicili#Let419 */
                  __auto_type tmp_stdout  = stdout ;
                  // ----------
                  stdout  = stderr ;
                  fprintf (stdout , "string is dead!\n");
                  stdout  = tmp_stdout ;
                });
              }
          });
        }
    });
  }
}
BoxedList drop_BoxedList (int len , BoxedList list ) {
  return (((len  <=  0 )) ? list  : ({ /* cicili#Let427 */
        __auto_type match426  = ((&list )-> __h_table -> get )(list );
        typeof((((match426 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        
        ({ /* cicili#Let432 */
          bool __h_case_result  = (true  &&  (((match426 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn433 */
                (unboxed  =  (((match426 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn436 */
              ({ /* cicili#Let440 */
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                
                ({ /* cicili#Let444 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn445 */
                        (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn448 */
                      drop_BoxedList ((--len ), tail );
                    }) : ({ /* cicili#Let453 */
                      // ----------
                      
                      ({ /* cicili#Progn457 */
                        list ;
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let461 */
              // ----------
              
              ({ /* cicili#Progn465 */
                list ;
              });
            }));
        });
      }));
}
void free_BoxedList_x (BoxedList_x * this ) {
  { /* cicili#Let471 */
    __auto_type match470  = (*this );
    typeof((((match470 -> __h_data ). Cons ). __h_0_mem )) head ;
    typeof((((match470 -> __h_data ). Cons ). __h_1_mem )) tail ;
    // ----------
    
    ({ /* cicili#Let475 */
      bool __h_case_result  = (true  &&  (((match470 -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn476 */
              (head  =  (((match470 -> __h_data ). Cons ). __h_0_mem ) );
              true ;
            }) &&  ({ /* cicili#Progn478 */
              (tail  =  (((match470 -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block482 */
          { /* cicili#Block484 */
            fprintf (stdout , "f %c\n", head );
            free_Box_BoxedList (&tail );
          }
        }
    });
  }
  free ((*this ));
}
BoxedList__H_Table * const get_BoxedList__H_Table () {
  static BoxedList__H_Table table  = { free_BoxedList_x , pure_BoxedList , show_BoxedList , drop_BoxedList };
  return (&table );
}
BoxedList BoxedCons_char (char head , BoxedList tail ) {
  { /* cicili#Let495 */
    BoxedList_x instance  = malloc (sizeof(class_BoxedList));
    // ----------
    (*instance ) = ((class_BoxedList){ get_BoxedList__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return new_Box_BoxedList (instance );
  }
}
BoxedList BoxedNil_char () {
  { /* cicili#Let501 */
    BoxedList_x instance  = malloc (sizeof(class_BoxedList));
    // ----------
    (*instance ) = ((class_BoxedList){ get_BoxedList__H_Table (), __h___t });
    return new_Box_BoxedList (instance );
  }
}
#endif /* __BoxedList__H_IMPL__ */ 
int main () {
  fprintf (stdout , "boxing test\n");
  ({ /* cicili#Let509 */
    __auto_type str  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let511 */
      __auto_type str  = pure_BoxedList ("Cicili Boxing Model\n", 20);
      // ----------
      ((void)((str . __h_table )-> freeData ));
      str ;
    });
    // ----------
    show_BoxedList (str );
    show_BoxedList (drop_BoxedList (7, str ));
    free_Box_BoxedList (&str );
    fprintf (stdout , "last Cell free is for Nil ctor of BoxedList!\n");
    fprintf (stdout , "won't show string again! because is dead!\n");
    fprintf (stdout , "deferred free is called\n");
    show_BoxedList (drop_BoxedList (7, str ));
  });
}
