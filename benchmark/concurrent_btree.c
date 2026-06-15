#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "haskell.h"
#include "haskell.h"
#include <pthread.h>
#include <unistd.h>
typedef struct cicilij7m5fP15wzT_TjHw_cTOu_wU4Gw_ {
  Cell_String __h_0_mem ;
  int __h_1_mem ;
} cicilij7m5fP15wzT_TjHw_cTOu_wU4Gw_;
typedef cicilij7m5fP15wzT_TjHw_cTOu_wU4Gw_ User ;
Ordering compareKey (int lkey , int rkey ) {
  return (((lkey  <  rkey  )) ? LT () : (((lkey  ==  rkey  )) ? EQ () : GT ()));
}
#ifndef __Maybe_User__H_DECL__
#define __Maybe_User__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_User Maybe_User ;
typedef void (*free_Maybe_User_t) (Maybe_User * this );
typedef struct Maybe_User__H_Table {
  free_Maybe_User_t freeData ;
} Maybe_User__H_Table;
typedef struct Maybe_User {
  const Maybe_User__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion127 */
    struct { /* ciciliStruct128 */
      User __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct129 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_User;
Maybe_User Just_User (User value );
Maybe_User Nothing_User ();
__attribute__((weak)) Maybe_User Default_Maybe_User () {
  return Nothing_User ();
}
const Maybe_User__H_Table * const get_Maybe_User__H_Table ();
void free_Maybe_User (Maybe_User * this );
#endif /* __Maybe_User__H_DECL__ */ 
#ifndef __List_User__H_DECL__
#define __List_User__H_DECL__
#ifndef __H___h_List_ctor_t__
#define __H___h_List_ctor_t__
typedef enum __h_List_ctor_t {
  __h_Nil_t = 0,
  __h_Cons_t = 1
} __h_List_ctor_t;
#endif /* __H___h_List_ctor_t__ */ 
typedef struct class_List_User class_List_User ;
typedef class_List_User * List_User ;
typedef void (*free_List_User_t) (List_User * this_ptr );
typedef struct List_User__H_Table {
  free_List_User_t freeClass ;
    User * (*toArray) (List_User list , User term );
    List_User (*wrap) (const User item );
    List_User (*pure) (const User * buf , int len );
    int (*show) (CFile file , List_User list );
    List_User (*copy) (List_User list );
    List_User (*replaceAt) (List_User list , User item , int index );
    List_User (*deleteAt) (List_User list , int index );
    List_User (*insertAt) (List_User llist , User item , int index );
    List_User (*replace) (List_User list , User item , List_User aimed );
    List_User (*delete) (List_User list , List_User aimed );
    List_User (*insert) (List_User llist , User item , List_User rlist );
    List_User (*reverse) (List_User list );
    List_User (*append) (List_User llist , List_User rlist );
    List_User (*push) (User item , List_User list );
    List_User (*take) (int len , List_User list );
    List_User (*last) (List_User list );
    List_User (*init) (List_User list );
    int (*hasLen) (List_User list , int desired );
    int (*len) (List_User list );
    List_User (*tail) (List_User list );
    List_User (*drop) (int len , List_User list );
    Maybe_User (*head) (List_User list );
    List_User (*nthcdr) (int index , List_User list );
    Maybe_User (*nth) (int index , List_User list );
} List_User__H_Table;
typedef struct class_List_User {
  const List_User__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion179 */
    struct { /* ciciliStruct180 */
      User __h_0_mem ;
      List_User __h_1_mem ;
    } Cons , _1 ;
    struct { /* ciciliStruct181 */
    } Nil , _ ;
  } __h_data ;
} class_List_User;
List_User Cons_User (User head , List_User tail );
List_User Nil_User ();
__attribute__((weak)) List_User Default_List_User () {
  return Nil_User ();
}
User * toArray_List_User (List_User list , User term );
List_User wrap_List_User (const User item );
List_User pure_List_User (const User * buf , int len );
int show_List_User (CFile file , List_User list );
List_User copy_List_User (List_User list );
List_User replaceAt_List_User (List_User list , User item , int index );
List_User deleteAt_List_User (List_User list , int index );
List_User insertAt_List_User (List_User llist , User item , int index );
List_User replace_List_User (List_User list , User item , List_User aimed );
List_User delete_List_User (List_User list , List_User aimed );
List_User insert_List_User (List_User llist , User item , List_User rlist );
List_User reverse_List_User (List_User list );
List_User append_List_User (List_User llist , List_User rlist );
List_User push_List_User (User item , List_User list );
List_User take_List_User (int len , List_User list );
List_User last_List_User (List_User list );
List_User init_List_User (List_User list );
int hasLen_List_User (List_User list , int desired );
int len_List_User (List_User list );
List_User tail_List_User (List_User list );
List_User drop_List_User (int len , List_User list );
Maybe_User head_List_User (List_User list );
List_User nthcdr_List_User (int index , List_User list );
Maybe_User nth_List_User (int index , List_User list );
List_User__H_Table * const get_List_User__H_Table ();
void free_List_User (List_User * this_ptr );
#endif /* __List_User__H_DECL__ */ 
#ifndef __Maybe_List_User__H_DECL__
#define __Maybe_List_User__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_List_User Maybe_List_User ;
typedef void (*free_Maybe_List_User_t) (Maybe_List_User * this );
typedef struct Maybe_List_User__H_Table {
  free_Maybe_List_User_t freeData ;
} Maybe_List_User__H_Table;
typedef struct Maybe_List_User {
  const Maybe_List_User__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion281 */
    struct { /* ciciliStruct282 */
      List_User __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct283 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_List_User;
Maybe_List_User Just_List_User (List_User value );
Maybe_List_User Nothing_List_User ();
__attribute__((weak)) Maybe_List_User Default_Maybe_List_User () {
  return Nothing_List_User ();
}
const Maybe_List_User__H_Table * const get_Maybe_List_User__H_Table ();
void free_Maybe_List_User (Maybe_List_User * this );
#endif /* __Maybe_List_User__H_DECL__ */ 
#ifndef __Maybe_User__H_IMPL__
#define __Maybe_User__H_IMPL__
void free_Maybe_User (Maybe_User * this ) {
}
const Maybe_User__H_Table * const get_Maybe_User__H_Table () {
  static const Maybe_User__H_Table table  = { free_Maybe_User };
  return (&table );
}
Maybe_User Just_User (User value ) {
  { /* cicili#Let313 */
    Maybe_User instance  = ((Maybe_User){ get_Maybe_User__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_User Nothing_User () {
  { /* cicili#Let318 */
    Maybe_User instance  = ((Maybe_User){ get_Maybe_User__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_User__H_IMPL__ */ 
#ifndef __List_User__H_IMPL__
#define __List_User__H_IMPL__
User * toArray_List_User (List_User list , User term ) {
  User * array (List_User list , int count ) {
    return ({ /* cicili#Let328 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let330 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn331 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn333 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn338 */
              ({ /* cicili#Let340 */
                User * arr  = array (tail , (count  +  1 ));
                // ----------
                arr [count ] = head ;
                arr ;
              });
            }) : ({ /* cicili#Let344 */
              // ----------
              ;
              ({ /* cicili#Progn346 */
                ({ /* cicili#Let348 */
                  User * arr  = calloc (count , sizeof(User));
                  // ----------
                  arr [(count  -  1 )] = term ;
                  arr ;
                });
              });
            }));
        });
      });
  }
  return array (list , 0);
}
List_User wrap_List_User (const User item ) {
  return Cons_User (item , Nil_User ());
}
List_User pure_List_User (const User * buf , int len ) {
  return (((buf  ==  NULL  )) ? Nil_User () : ({ /* cicili#Let359 */
        User item  = (*buf );
        // ----------
        (((len  ==  0 )) ? Nil_User () : Cons_User (item , pure_List_User ((++buf ), (--len ))));
      }));
}
int show_List_User (CFile file , List_User list ) {
  return ({ /* cicili#Let369 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let371 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn372 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn374 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn379 */
            (({ /* cicili#Let383 */
                // ----------
                ;
                ({ /* cicili#Let385 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn389 */
                      (({ /* cicili#Let395 */
                          typeof((head . __h_0_mem )) wname ;
                          typeof((head . __h_1_mem )) salary ;
                          // ----------
                          ;
                          ({ /* cicili#Let397 */
                            bool __h_case_result  = (true  &&  (({ /* cicili#Progn398 */
                                  (wname  =  (head . __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn400 */
                                  (salary  =  (head . __h_1_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn405 */
                                ({ /* cicili#Let409 */
                                  __auto_type match408  = get_Cell_String (wname );
                                  typeof((((match408 . __h_data ). Just ). __h_0_mem )) name ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let412 */
                                    bool __h_case_result  = (true  &&  (((match408 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn413 */
                                          (name  =  (((match408 . __h_data ). Just ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn418 */
                                        (fprintf (file , "('") +  show_String (file , name ) +  fprintf (file , "', %d)", salary ) );
                                      }) : ({ /* cicili#Let422 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn424 */
                                          fprintf (file , "item is deleted in another version!");
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let428 */
                                // ----------
                                ;
                                ({ /* cicili#Progn430 */
                                  0;
                                });
                              }));
                          });
                        }) +  fprintf (file , "%s", " ") );
                    }) : ({ /* cicili#Let434 */
                      // ----------
                      ;
                      ({ /* cicili#Progn436 */
                        ({ /* cicili#Let442 */
                          typeof((head . __h_0_mem )) wname ;
                          typeof((head . __h_1_mem )) salary ;
                          // ----------
                          ;
                          ({ /* cicili#Let444 */
                            bool __h_case_result  = (true  &&  (({ /* cicili#Progn445 */
                                  (wname  =  (head . __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn447 */
                                  (salary  =  (head . __h_1_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn452 */
                                ({ /* cicili#Let456 */
                                  __auto_type match455  = get_Cell_String (wname );
                                  typeof((((match455 . __h_data ). Just ). __h_0_mem )) name ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let459 */
                                    bool __h_case_result  = (true  &&  (((match455 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn460 */
                                          (name  =  (((match455 . __h_data ). Just ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn465 */
                                        (fprintf (file , "('") +  show_String (file , name ) +  fprintf (file , "', %d)", salary ) );
                                      }) : ({ /* cicili#Let469 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn471 */
                                          fprintf (file , "item is deleted in another version!");
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let475 */
                                // ----------
                                ;
                                ({ /* cicili#Progn477 */
                                  0;
                                });
                              }));
                          });
                        });
                      });
                    }));
                });
              }) +  show_List_User (file , tail ) );
          }) : ({ /* cicili#Let482 */
            // ----------
            ;
            ({ /* cicili#Progn484 */
              0;
            });
          }));
      });
    });
}
List_User copy_List_User (List_User list ) {
  return ({ /* cicili#Let490 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let492 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn493 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn495 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn500 */
            Cons_User (head , copy_List_User (tail ));
          }) : ({ /* cicili#Let506 */
            // ----------
            ;
            ({ /* cicili#Progn508 */
              Nil_User ();
            });
          }));
      });
    });
}
List_User replaceAt_List_User (List_User list , User item , int index ) {
  return ({ /* cicili#Let515 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let517 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn518 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn520 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn525 */
            Cons_User (head , replaceAt_List_User (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let531 */
            // ----------
            ;
            ({ /* cicili#Progn533 */
              ({ /* cicili#Let537 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let539 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn540 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn545 */
                      Cons_User (item , copy_List_User (taill ));
                    }) : ({ /* cicili#Let551 */
                      // ----------
                      ;
                      ({ /* cicili#Progn553 */
                        Nil_User ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_User deleteAt_List_User (List_User list , int index ) {
  return ({ /* cicili#Let560 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let562 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn563 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn565 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn570 */
            Cons_User (head , deleteAt_List_User (tail , (index  -  1 )));
          }) : ({ /* cicili#Let576 */
            // ----------
            ;
            ({ /* cicili#Progn578 */
              ({ /* cicili#Let582 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let584 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn585 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn590 */
                      copy_List_User (taill );
                    }) : ({ /* cicili#Let595 */
                      // ----------
                      ;
                      ({ /* cicili#Progn597 */
                        Nil_User ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_User insertAt_List_User (List_User list , User item , int index ) {
  return ({ /* cicili#Let604 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let606 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn607 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn609 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn614 */
            Cons_User (head , insertAt_List_User (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let620 */
            // ----------
            ;
            ({ /* cicili#Progn622 */
              Cons_User (item , copy_List_User (list ));
            });
          }));
      });
    });
}
List_User replace_List_User (List_User list , User item , List_User aimed ) {
  return ({ /* cicili#Let630 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let632 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn633 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn635 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn640 */
            Cons_User (head , replace_List_User (tail , item , aimed ));
          }) : ({ /* cicili#Let646 */
            // ----------
            ;
            ({ /* cicili#Progn648 */
              ({ /* cicili#Let652 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let654 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn655 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn660 */
                      Cons_User (item , copy_List_User (taill ));
                    }) : ({ /* cicili#Let666 */
                      // ----------
                      ;
                      ({ /* cicili#Progn668 */
                        Nil_User ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_User delete_List_User (List_User list , List_User aimed ) {
  return ({ /* cicili#Let675 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let677 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn678 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn680 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn685 */
            Cons_User (head , delete_List_User (tail , aimed ));
          }) : ({ /* cicili#Let691 */
            // ----------
            ;
            ({ /* cicili#Progn693 */
              ({ /* cicili#Let697 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let699 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn700 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn705 */
                      copy_List_User (taill );
                    }) : ({ /* cicili#Let710 */
                      // ----------
                      ;
                      ({ /* cicili#Progn712 */
                        Nil_User ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_User insert_List_User (List_User llist , User item , List_User rlist ) {
  return ({ /* cicili#Let719 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let721 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn722 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn724 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (llist  !=  rlist  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn729 */
            Cons_User (head , insert_List_User (tail , item , rlist ));
          }) : ({ /* cicili#Let735 */
            // ----------
            ;
            ({ /* cicili#Progn737 */
              Cons_User (item , copy_List_User (rlist ));
            });
          }));
      });
    });
}
List_User reverse_List_User (List_User list ) {
  List_User _reverse (List_User list , List_User rlist ) {
    return ({ /* cicili#Let746 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let748 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn749 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn751 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn756 */
              _reverse (tail , Cons_User (head , rlist ));
            }) : ({ /* cicili#Let761 */
              // ----------
              ;
              ({ /* cicili#Progn763 */
                rlist ;
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let767 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let769 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn770 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn772 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn777 */
            _reverse (tail , Cons_User (head , Nil_User ()));
          }) : ({ /* cicili#Let783 */
            // ----------
            ;
            ({ /* cicili#Progn785 */
              list ;
            });
          }));
      });
    });
}
List_User append_List_User (List_User llist , List_User rlist ) {
  return ({ /* cicili#Let791 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let793 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn794 */
                (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn796 */
                (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn801 */
            Cons_User (head , append_List_User (tail , rlist ));
          }) : ({ /* cicili#Let807 */
            // ----------
            ;
            ({ /* cicili#Progn809 */
              copy_List_User (rlist );
            });
          }));
      });
    });
}
List_User push_List_User (User item , List_User list ) {
  return Cons_User (item , copy_List_User (list ));
}
List_User take_List_User (int len , List_User list ) {
  return (((len  <=  0 )) ? Nil_User () : ({ /* cicili#Let822 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let824 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn825 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn827 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn832 */
              Cons_User (head , take_List_User ((--len ), tail ));
            }) : ({ /* cicili#Let838 */
              // ----------
              ;
              ({ /* cicili#Progn840 */
                Nil_User ();
              });
            }));
        });
      }));
}
List_User last_List_User (List_User list ) {
  return ({ /* cicili#Let847 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let849 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn850 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn855 */
            ({ /* cicili#Let859 */
              // ----------
              ;
              ({ /* cicili#Let861 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn865 */
                    copy_List_User (list );
                  }) : ({ /* cicili#Let870 */
                    // ----------
                    ;
                    ({ /* cicili#Progn872 */
                      last_List_User (tail );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let877 */
            // ----------
            ;
            ({ /* cicili#Progn879 */
              Nil_User ();
            });
          }));
      });
    });
}
List_User init_List_User (List_User list ) {
  return ({ /* cicili#Let887 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let889 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn890 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn892 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn897 */
            Cons_User (head , init_List_User (tail ));
          }) : ({ /* cicili#Let903 */
            // ----------
            ;
            ({ /* cicili#Progn905 */
              Nil_User ();
            });
          }));
      });
    });
}
int hasLen_List_User (List_User list , int desired ) {
  return ({ /* cicili#Let912 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let914 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn915 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn920 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_User (tail , (--desired )) ));
          }) : ({ /* cicili#Let926 */
            // ----------
            ;
            ({ /* cicili#Progn928 */
              0;
            });
          }));
      });
    });
}
int len_List_User (List_User list ) {
  return ({ /* cicili#Let934 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let936 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn937 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn942 */
            (1 +  len_List_User (tail ) );
          }) : ({ /* cicili#Let947 */
            // ----------
            ;
            ({ /* cicili#Progn949 */
              0;
            });
          }));
      });
    });
}
List_User tail_List_User (List_User list ) {
  return drop_List_User (1, list );
}
List_User drop_List_User (int len , List_User list ) {
  return (((len  <=  0 )) ? copy_List_User (list ) : ({ /* cicili#Let960 */
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let962 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn963 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn968 */
              drop_List_User ((--len ), tail );
            }) : ({ /* cicili#Let973 */
              // ----------
              ;
              ({ /* cicili#Progn975 */
                Nil_User ();
              });
            }));
        });
      }));
}
Maybe_User head_List_User (List_User list ) {
  return ({ /* cicili#Let983 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      // ----------
      ;
      ({ /* cicili#Let985 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn986 */
              (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn991 */
            Just_User (head );
          }) : ({ /* cicili#Let996 */
            // ----------
            ;
            ({ /* cicili#Progn998 */
              Nothing_User ();
            });
          }));
      });
    });
}
List_User nthcdr_List_User (int index , List_User list ) {
  return ({ /* cicili#Let1005 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let1007 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn1008 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn1013 */
            nthcdr_List_User ((--index ), tail );
          }) : ({ /* cicili#Let1018 */
            // ----------
            ;
            ({ /* cicili#Progn1020 */
              list ;
            });
          }));
      });
    });
}
Maybe_User nth_List_User (int index , List_User list ) {
  return ({ /* cicili#Let1027 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let1029 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn1030 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn1032 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn1037 */
            (((index  ==  0 )) ? Just_User (head ) : (((index  <  0 )) ? Nothing_User () : nth_List_User ((--index ), tail )));
          }) : ({ /* cicili#Let1046 */
            // ----------
            ;
            ({ /* cicili#Progn1048 */
              Nothing_User ();
            });
          }));
      });
    });
}
void free_List_User (List_User * this_ptr ) {
  { /* cicili#Let1053 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let1057 */
      typeof((((this -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let1059 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn1060 */
              (tail  =  (((this -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block1066 */
            { /* cicili#Block1068 */
              free (this );
              free_List_User ((&tail ));
            }
          }
        else
          { /* cicili#Let1076 */
            // ----------
            ;
            ({ /* cicili#Let1078 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Nil_t  ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block1083 */
                  { /* cicili#Block1085 */
                    free (this );
                  }
                }
            });
          }
      });
    }
  }
}
List_User__H_Table * const get_List_User__H_Table () {
  static List_User__H_Table table  = { free_List_User , toArray_List_User , wrap_List_User , pure_List_User , show_List_User , copy_List_User , replaceAt_List_User , deleteAt_List_User , insertAt_List_User , replace_List_User , delete_List_User , insert_List_User , reverse_List_User , append_List_User , push_List_User , take_List_User , last_List_User , init_List_User , hasLen_List_User , len_List_User , tail_List_User , drop_List_User , head_List_User , nthcdr_List_User , nth_List_User };
  return (&table );
}
List_User Cons_User (User head , List_User tail ) {
  { /* cicili#Let1096 */
    List_User instance  = malloc (sizeof(class_List_User));
    // ----------
    (*instance ) = ((class_List_User){ get_List_User__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
List_User Nil_User () {
  { /* cicili#Let1102 */
    List_User instance  = malloc (sizeof(class_List_User));
    // ----------
    (*instance ) = ((class_List_User){ get_List_User__H_Table (), __h___t });
    return instance ;
  }
}
#endif /* __List_User__H_IMPL__ */ 
#ifndef __Maybe_List_User__H_IMPL__
#define __Maybe_List_User__H_IMPL__
void free_Maybe_List_User (Maybe_List_User * this ) {
}
const Maybe_List_User__H_Table * const get_Maybe_List_User__H_Table () {
  static const Maybe_List_User__H_Table table  = { free_Maybe_List_User };
  return (&table );
}
Maybe_List_User Just_List_User (List_User value ) {
  { /* cicili#Let1119 */
    Maybe_List_User instance  = ((Maybe_List_User){ get_Maybe_List_User__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_User Nothing_List_User () {
  { /* cicili#Let1124 */
    Maybe_List_User instance  = ((Maybe_List_User){ get_Maybe_List_User__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_User__H_IMPL__ */ 
typedef struct class_BTree_int_User * BTree_int_User ;
typedef struct cicilijKplJJK838GTV1rZQgTl7VYrGJ4_ {
  int __h_0_mem ;
  User __h_1_mem ;
} cicilijKplJJK838GTV1rZQgTl7VYrGJ4_;
typedef cicilijKplJJK838GTV1rZQgTl7VYrGJ4_ BTree_int_User_pair_t ;
#ifndef __BTree_int_User_Error__H_DECL__
#define __BTree_int_User_Error__H_DECL__
#ifndef __H___h_BTreeError_ctor_t__
#define __H___h_BTreeError_ctor_t__
typedef enum __h_BTreeError_ctor_t {
  __h_ERR_CANT_BORROW_t = 0,
  __h_ERR_INVALID_BRANCH_t = 1,
  __h_ERR_ACCESS_DEAD_CHILD_t = 2,
  __h_ERR_NOT_FOUND_t = 3,
  __h_ERR_UNIQUE_KEY_t = 4,
  __h_ERR_INVALID_ORDER_t = 5,
  __h_ERR_INVALID_OBJECT_t = 6
} __h_BTreeError_ctor_t;
#endif /* __H___h_BTreeError_ctor_t__ */ 
typedef struct BTree_int_User_Error BTree_int_User_Error ;
typedef void (*free_BTree_int_User_Error_t) (BTree_int_User_Error * this );
typedef struct BTree_int_User_Error__H_Table {
  free_BTree_int_User_Error_t freeData ;
    void (*show) (BTree_int_User_Error error );
} BTree_int_User_Error__H_Table;
typedef struct BTree_int_User_Error {
  const BTree_int_User_Error__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion1149 */
    struct { /* ciciliStruct1150 */
    } ERR_INVALID_OBJECT , _6 ;
    struct { /* ciciliStruct1151 */
      size_t __h_0_mem ;
    } ERR_INVALID_ORDER , _5 ;
    struct { /* ciciliStruct1152 */
      BTree_int_User_pair_t __h_0_mem ;
    } ERR_UNIQUE_KEY , _4 ;
    struct { /* ciciliStruct1153 */
      int __h_0_mem ;
    } ERR_NOT_FOUND , _3 ;
    struct { /* ciciliStruct1154 */
      BTree_int_User_pair_t __h_0_mem ;
      size_t __h_1_mem ;
    } ERR_ACCESS_DEAD_CHILD , _2 ;
    struct { /* ciciliStruct1155 */
      BTree_int_User __h_0_mem ;
    } ERR_INVALID_BRANCH , _1 ;
    struct { /* ciciliStruct1156 */
      char * __h_0_mem ;
    } ERR_CANT_BORROW , _ ;
  } __h_data ;
} BTree_int_User_Error;
BTree_int_User_Error BTree_int_User_ERR_INVALID_OBJECT ();
BTree_int_User_Error BTree_int_User_ERR_INVALID_ORDER (size_t order );
BTree_int_User_Error BTree_int_User_ERR_UNIQUE_KEY (BTree_int_User_pair_t item );
BTree_int_User_Error BTree_int_User_ERR_NOT_FOUND (int key );
BTree_int_User_Error BTree_int_User_ERR_ACCESS_DEAD_CHILD (BTree_int_User_pair_t item , size_t index );
BTree_int_User_Error BTree_int_User_ERR_INVALID_BRANCH (BTree_int_User branch );
BTree_int_User_Error BTree_int_User_ERR_CANT_BORROW (char * reason );
__attribute__((weak)) BTree_int_User_Error Default_BTree_int_User_Error (char * reason ) {
  return BTree_int_User_ERR_CANT_BORROW (reason );
}
void show_BTree_int_User_Error (BTree_int_User_Error error );
const BTree_int_User_Error__H_Table * const get_BTree_int_User_Error__H_Table ();
void free_BTree_int_User_Error (BTree_int_User_Error * this );
#endif /* __BTree_int_User_Error__H_DECL__ */ 
#ifndef __Either_BTree_int_User_Error_BTree_int_User__H_DECL__
#define __Either_BTree_int_User_Error_BTree_int_User__H_DECL__
#ifndef __H___h_Either_ctor_t__
#define __H___h_Either_ctor_t__
typedef enum __h_Either_ctor_t {
  __h_Left_t = 0,
  __h_Right_t = 1
} __h_Either_ctor_t;
#endif /* __H___h_Either_ctor_t__ */ 
typedef struct Either_BTree_int_User_Error_BTree_int_User Either_BTree_int_User_Error_BTree_int_User ;
typedef void (*free_Either_BTree_int_User_Error_BTree_int_User_t) (Either_BTree_int_User_Error_BTree_int_User * this );
typedef struct Either_BTree_int_User_Error_BTree_int_User__H_Table {
  free_Either_BTree_int_User_Error_BTree_int_User_t freeData ;
} Either_BTree_int_User_Error_BTree_int_User__H_Table;
typedef struct Either_BTree_int_User_Error_BTree_int_User {
  const Either_BTree_int_User_Error_BTree_int_User__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion1203 */
    struct { /* ciciliStruct1204 */
      BTree_int_User __h_0_mem ;
    } Right , _1 ;
    struct { /* ciciliStruct1205 */
      BTree_int_User_Error __h_0_mem ;
    } Left , _ ;
  } __h_data ;
} Either_BTree_int_User_Error_BTree_int_User;
Either_BTree_int_User_Error_BTree_int_User Right_BTree_int_User_Error_BTree_int_User (BTree_int_User value );
Either_BTree_int_User_Error_BTree_int_User Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_Error error );
__attribute__((weak)) Either_BTree_int_User_Error_BTree_int_User Default_Either_BTree_int_User_Error_BTree_int_User (BTree_int_User_Error error ) {
  return Left_BTree_int_User_Error_BTree_int_User (error );
}
const Either_BTree_int_User_Error_BTree_int_User__H_Table * const get_Either_BTree_int_User_Error_BTree_int_User__H_Table ();
void free_Either_BTree_int_User_Error_BTree_int_User (Either_BTree_int_User_Error_BTree_int_User * this );
#endif /* __Either_BTree_int_User_Error_BTree_int_User__H_DECL__ */ 
#ifndef __Maybe_BTree_int_User__H_DECL__
#define __Maybe_BTree_int_User__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_BTree_int_User Maybe_BTree_int_User ;
typedef void (*free_Maybe_BTree_int_User_t) (Maybe_BTree_int_User * this );
typedef struct Maybe_BTree_int_User__H_Table {
  free_Maybe_BTree_int_User_t freeData ;
} Maybe_BTree_int_User__H_Table;
typedef struct Maybe_BTree_int_User {
  const Maybe_BTree_int_User__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion1231 */
    struct { /* ciciliStruct1232 */
      BTree_int_User __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct1233 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_BTree_int_User;
Maybe_BTree_int_User Just_BTree_int_User (BTree_int_User value );
Maybe_BTree_int_User Nothing_BTree_int_User ();
__attribute__((weak)) Maybe_BTree_int_User Default_Maybe_BTree_int_User () {
  return Nothing_BTree_int_User ();
}
const Maybe_BTree_int_User__H_Table * const get_Maybe_BTree_int_User__H_Table ();
void free_Maybe_BTree_int_User (Maybe_BTree_int_User * this );
#endif /* __Maybe_BTree_int_User__H_DECL__ */ 
#ifndef __Maybe_BTree_int_User_pair_t__H_DECL__
#define __Maybe_BTree_int_User_pair_t__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_BTree_int_User_pair_t Maybe_BTree_int_User_pair_t ;
typedef void (*free_Maybe_BTree_int_User_pair_t_t) (Maybe_BTree_int_User_pair_t * this );
typedef struct Maybe_BTree_int_User_pair_t__H_Table {
  free_Maybe_BTree_int_User_pair_t_t freeData ;
} Maybe_BTree_int_User_pair_t__H_Table;
typedef struct Maybe_BTree_int_User_pair_t {
  const Maybe_BTree_int_User_pair_t__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion1261 */
    struct { /* ciciliStruct1262 */
      BTree_int_User_pair_t __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct1263 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_BTree_int_User_pair_t;
Maybe_BTree_int_User_pair_t Just_BTree_int_User_pair_t (BTree_int_User_pair_t value );
Maybe_BTree_int_User_pair_t Nothing_BTree_int_User_pair_t ();
__attribute__((weak)) Maybe_BTree_int_User_pair_t Default_Maybe_BTree_int_User_pair_t () {
  return Nothing_BTree_int_User_pair_t ();
}
const Maybe_BTree_int_User_pair_t__H_Table * const get_Maybe_BTree_int_User_pair_t__H_Table ();
void free_Maybe_BTree_int_User_pair_t (Maybe_BTree_int_User_pair_t * this );
#endif /* __Maybe_BTree_int_User_pair_t__H_DECL__ */ 
#ifndef __List_BTree_int_User_pair_t__H_DECL__
#define __List_BTree_int_User_pair_t__H_DECL__
#ifndef __H___h_List_ctor_t__
#define __H___h_List_ctor_t__
typedef enum __h_List_ctor_t {
  __h_Nil_t = 0,
  __h_Cons_t = 1
} __h_List_ctor_t;
#endif /* __H___h_List_ctor_t__ */ 
typedef struct class_List_BTree_int_User_pair_t class_List_BTree_int_User_pair_t ;
typedef class_List_BTree_int_User_pair_t * List_BTree_int_User_pair_t ;
typedef void (*free_List_BTree_int_User_pair_t_t) (List_BTree_int_User_pair_t * this_ptr );
typedef struct List_BTree_int_User_pair_t__H_Table {
  free_List_BTree_int_User_pair_t_t freeClass ;
    BTree_int_User_pair_t * (*toArray) (List_BTree_int_User_pair_t list , BTree_int_User_pair_t term );
    List_BTree_int_User_pair_t (*wrap) (const BTree_int_User_pair_t item );
    List_BTree_int_User_pair_t (*pure) (const BTree_int_User_pair_t * buf , int len );
    int (*show) (CFile file , List_BTree_int_User_pair_t list );
    List_BTree_int_User_pair_t (*copy) (List_BTree_int_User_pair_t list );
    List_BTree_int_User_pair_t (*replaceAt) (List_BTree_int_User_pair_t list , BTree_int_User_pair_t item , int index );
    List_BTree_int_User_pair_t (*deleteAt) (List_BTree_int_User_pair_t list , int index );
    List_BTree_int_User_pair_t (*insertAt) (List_BTree_int_User_pair_t llist , BTree_int_User_pair_t item , int index );
    List_BTree_int_User_pair_t (*replace) (List_BTree_int_User_pair_t list , BTree_int_User_pair_t item , List_BTree_int_User_pair_t aimed );
    List_BTree_int_User_pair_t (*delete) (List_BTree_int_User_pair_t list , List_BTree_int_User_pair_t aimed );
    List_BTree_int_User_pair_t (*insert) (List_BTree_int_User_pair_t llist , BTree_int_User_pair_t item , List_BTree_int_User_pair_t rlist );
    List_BTree_int_User_pair_t (*reverse) (List_BTree_int_User_pair_t list );
    List_BTree_int_User_pair_t (*append) (List_BTree_int_User_pair_t llist , List_BTree_int_User_pair_t rlist );
    List_BTree_int_User_pair_t (*push) (BTree_int_User_pair_t item , List_BTree_int_User_pair_t list );
    List_BTree_int_User_pair_t (*take) (int len , List_BTree_int_User_pair_t list );
    List_BTree_int_User_pair_t (*last) (List_BTree_int_User_pair_t list );
    List_BTree_int_User_pair_t (*init) (List_BTree_int_User_pair_t list );
    int (*hasLen) (List_BTree_int_User_pair_t list , int desired );
    int (*len) (List_BTree_int_User_pair_t list );
    List_BTree_int_User_pair_t (*tail) (List_BTree_int_User_pair_t list );
    List_BTree_int_User_pair_t (*drop) (int len , List_BTree_int_User_pair_t list );
    Maybe_BTree_int_User_pair_t (*head) (List_BTree_int_User_pair_t list );
    List_BTree_int_User_pair_t (*nthcdr) (int index , List_BTree_int_User_pair_t list );
    Maybe_BTree_int_User_pair_t (*nth) (int index , List_BTree_int_User_pair_t list );
} List_BTree_int_User_pair_t__H_Table;
typedef struct class_List_BTree_int_User_pair_t {
  const List_BTree_int_User_pair_t__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion1313 */
    struct { /* ciciliStruct1314 */
      BTree_int_User_pair_t __h_0_mem ;
      List_BTree_int_User_pair_t __h_1_mem ;
    } Cons , _1 ;
    struct { /* ciciliStruct1315 */
    } Nil , _ ;
  } __h_data ;
} class_List_BTree_int_User_pair_t;
List_BTree_int_User_pair_t Cons_BTree_int_User_pair_t (BTree_int_User_pair_t head , List_BTree_int_User_pair_t tail );
List_BTree_int_User_pair_t Nil_BTree_int_User_pair_t ();
__attribute__((weak)) List_BTree_int_User_pair_t Default_List_BTree_int_User_pair_t () {
  return Nil_BTree_int_User_pair_t ();
}
BTree_int_User_pair_t * toArray_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , BTree_int_User_pair_t term );
List_BTree_int_User_pair_t wrap_List_BTree_int_User_pair_t (const BTree_int_User_pair_t item );
List_BTree_int_User_pair_t pure_List_BTree_int_User_pair_t (const BTree_int_User_pair_t * buf , int len );
int show_List_BTree_int_User_pair_t (CFile file , List_BTree_int_User_pair_t list );
List_BTree_int_User_pair_t copy_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list );
List_BTree_int_User_pair_t replaceAt_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , BTree_int_User_pair_t item , int index );
List_BTree_int_User_pair_t deleteAt_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , int index );
List_BTree_int_User_pair_t insertAt_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t llist , BTree_int_User_pair_t item , int index );
List_BTree_int_User_pair_t replace_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , BTree_int_User_pair_t item , List_BTree_int_User_pair_t aimed );
List_BTree_int_User_pair_t delete_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , List_BTree_int_User_pair_t aimed );
List_BTree_int_User_pair_t insert_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t llist , BTree_int_User_pair_t item , List_BTree_int_User_pair_t rlist );
List_BTree_int_User_pair_t reverse_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list );
List_BTree_int_User_pair_t append_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t llist , List_BTree_int_User_pair_t rlist );
List_BTree_int_User_pair_t push_List_BTree_int_User_pair_t (BTree_int_User_pair_t item , List_BTree_int_User_pair_t list );
List_BTree_int_User_pair_t take_List_BTree_int_User_pair_t (int len , List_BTree_int_User_pair_t list );
List_BTree_int_User_pair_t last_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list );
List_BTree_int_User_pair_t init_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list );
int hasLen_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , int desired );
int len_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list );
List_BTree_int_User_pair_t tail_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list );
List_BTree_int_User_pair_t drop_List_BTree_int_User_pair_t (int len , List_BTree_int_User_pair_t list );
Maybe_BTree_int_User_pair_t head_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list );
List_BTree_int_User_pair_t nthcdr_List_BTree_int_User_pair_t (int index , List_BTree_int_User_pair_t list );
Maybe_BTree_int_User_pair_t nth_List_BTree_int_User_pair_t (int index , List_BTree_int_User_pair_t list );
List_BTree_int_User_pair_t__H_Table * const get_List_BTree_int_User_pair_t__H_Table ();
void free_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t * this_ptr );
#endif /* __List_BTree_int_User_pair_t__H_DECL__ */ 
#ifndef __Maybe_List_BTree_int_User_pair_t__H_DECL__
#define __Maybe_List_BTree_int_User_pair_t__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_List_BTree_int_User_pair_t Maybe_List_BTree_int_User_pair_t ;
typedef void (*free_Maybe_List_BTree_int_User_pair_t_t) (Maybe_List_BTree_int_User_pair_t * this );
typedef struct Maybe_List_BTree_int_User_pair_t__H_Table {
  free_Maybe_List_BTree_int_User_pair_t_t freeData ;
} Maybe_List_BTree_int_User_pair_t__H_Table;
typedef struct Maybe_List_BTree_int_User_pair_t {
  const Maybe_List_BTree_int_User_pair_t__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion1415 */
    struct { /* ciciliStruct1416 */
      List_BTree_int_User_pair_t __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct1417 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_List_BTree_int_User_pair_t;
Maybe_List_BTree_int_User_pair_t Just_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t value );
Maybe_List_BTree_int_User_pair_t Nothing_List_BTree_int_User_pair_t ();
__attribute__((weak)) Maybe_List_BTree_int_User_pair_t Default_Maybe_List_BTree_int_User_pair_t () {
  return Nothing_List_BTree_int_User_pair_t ();
}
const Maybe_List_BTree_int_User_pair_t__H_Table * const get_Maybe_List_BTree_int_User_pair_t__H_Table ();
void free_Maybe_List_BTree_int_User_pair_t (Maybe_List_BTree_int_User_pair_t * this );
#endif /* __Maybe_List_BTree_int_User_pair_t__H_DECL__ */ 
#ifndef __Maybe_BTree_int_User__H_DECL__
#define __Maybe_BTree_int_User__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_BTree_int_User Maybe_BTree_int_User ;
typedef void (*free_Maybe_BTree_int_User_t) (Maybe_BTree_int_User * this );
typedef struct Maybe_BTree_int_User__H_Table {
  free_Maybe_BTree_int_User_t freeData ;
} Maybe_BTree_int_User__H_Table;
typedef struct Maybe_BTree_int_User {
  const Maybe_BTree_int_User__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion1447 */
    struct { /* ciciliStruct1448 */
      BTree_int_User __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct1449 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_BTree_int_User;
Maybe_BTree_int_User Just_BTree_int_User (BTree_int_User value );
Maybe_BTree_int_User Nothing_BTree_int_User ();
__attribute__((weak)) Maybe_BTree_int_User Default_Maybe_BTree_int_User () {
  return Nothing_BTree_int_User ();
}
const Maybe_BTree_int_User__H_Table * const get_Maybe_BTree_int_User__H_Table ();
void free_Maybe_BTree_int_User (Maybe_BTree_int_User * this );
#endif /* __Maybe_BTree_int_User__H_DECL__ */ 
#ifndef __Rc_BTree_int_User__H_DECL__
#define __Rc_BTree_int_User__H_DECL__
#ifndef __H___h_Rc_ctor_t__
#define __H___h_Rc_ctor_t__
typedef enum __h_Rc_ctor_t {
  __h_Gone_t = 0,
  __h_Hold_t = 1
} __h_Rc_ctor_t;
#endif /* __H___h_Rc_ctor_t__ */ 
typedef struct Rc_BTree_int_User Rc_BTree_int_User ;
typedef void (*free_Rc_BTree_int_User_t) (Rc_BTree_int_User * this );
typedef struct Rc_BTree_int_User__H_Table {
  free_Rc_BTree_int_User_t freeData ;
    Rc_BTree_int_User (*new) (BTree_int_User pointer );
    Rc_BTree_int_User (*clone) (Rc_BTree_int_User rc );
    Maybe_BTree_int_User (*take) (Rc_BTree_int_User * this );
    Maybe_BTree_int_User (*get) (Rc_BTree_int_User rc );
} Rc_BTree_int_User__H_Table;
typedef struct Rc_BTree_int_User {
  const Rc_BTree_int_User__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion1479 */
    struct { /* ciciliStruct1480 */
      BTree_int_User * __h_0_mem ;
      int * __h_1_mem ;
      size_t __h_2_mem ;
    } Hold , _1 ;
    struct { /* ciciliStruct1481 */
    } Gone , _ ;
  } __h_data ;
} Rc_BTree_int_User;
Rc_BTree_int_User __h_Hold_BTree_int_User (BTree_int_User * pointer , int * count , size_t address );
Rc_BTree_int_User Gone_BTree_int_User ();
__attribute__((weak)) Rc_BTree_int_User Default_Rc_BTree_int_User () {
  return Gone_BTree_int_User ();
}
Rc_BTree_int_User new_Rc_BTree_int_User (BTree_int_User pointer );
Rc_BTree_int_User clone_Rc_BTree_int_User (Rc_BTree_int_User rc );
Maybe_BTree_int_User take_Rc_BTree_int_User (Rc_BTree_int_User * this );
Maybe_BTree_int_User get_Rc_BTree_int_User (Rc_BTree_int_User rc );
const Rc_BTree_int_User__H_Table * const get_Rc_BTree_int_User__H_Table ();
void free_Rc_BTree_int_User (Rc_BTree_int_User * this );
#endif /* __Rc_BTree_int_User__H_DECL__ */ 
#ifndef __Maybe_Rc_BTree_int_User__H_DECL__
#define __Maybe_Rc_BTree_int_User__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_Rc_BTree_int_User Maybe_Rc_BTree_int_User ;
typedef void (*free_Maybe_Rc_BTree_int_User_t) (Maybe_Rc_BTree_int_User * this );
typedef struct Maybe_Rc_BTree_int_User__H_Table {
  free_Maybe_Rc_BTree_int_User_t freeData ;
} Maybe_Rc_BTree_int_User__H_Table;
typedef struct Maybe_Rc_BTree_int_User {
  const Maybe_Rc_BTree_int_User__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion1523 */
    struct { /* ciciliStruct1524 */
      Rc_BTree_int_User __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct1525 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_Rc_BTree_int_User;
Maybe_Rc_BTree_int_User Just_Rc_BTree_int_User (Rc_BTree_int_User value );
Maybe_Rc_BTree_int_User Nothing_Rc_BTree_int_User ();
__attribute__((weak)) Maybe_Rc_BTree_int_User Default_Maybe_Rc_BTree_int_User () {
  return Nothing_Rc_BTree_int_User ();
}
const Maybe_Rc_BTree_int_User__H_Table * const get_Maybe_Rc_BTree_int_User__H_Table ();
void free_Maybe_Rc_BTree_int_User (Maybe_Rc_BTree_int_User * this );
#endif /* __Maybe_Rc_BTree_int_User__H_DECL__ */ 
#ifndef __List_Rc_BTree_int_User__H_DECL__
#define __List_Rc_BTree_int_User__H_DECL__
#ifndef __H___h_List_ctor_t__
#define __H___h_List_ctor_t__
typedef enum __h_List_ctor_t {
  __h_Nil_t = 0,
  __h_Cons_t = 1
} __h_List_ctor_t;
#endif /* __H___h_List_ctor_t__ */ 
typedef struct class_List_Rc_BTree_int_User class_List_Rc_BTree_int_User ;
typedef class_List_Rc_BTree_int_User * List_Rc_BTree_int_User ;
typedef void (*free_List_Rc_BTree_int_User_t) (List_Rc_BTree_int_User * this_ptr );
typedef struct List_Rc_BTree_int_User__H_Table {
  free_List_Rc_BTree_int_User_t freeClass ;
    Rc_BTree_int_User * (*toArray) (List_Rc_BTree_int_User list , Rc_BTree_int_User term );
    List_Rc_BTree_int_User (*wrap) (const Rc_BTree_int_User item );
    List_Rc_BTree_int_User (*pure) (const Rc_BTree_int_User * buf , int len );
    int (*show) (CFile file , List_Rc_BTree_int_User list );
    List_Rc_BTree_int_User (*copy) (List_Rc_BTree_int_User list );
    List_Rc_BTree_int_User (*replaceAt) (List_Rc_BTree_int_User list , Rc_BTree_int_User item , int index );
    List_Rc_BTree_int_User (*deleteAt) (List_Rc_BTree_int_User list , int index );
    List_Rc_BTree_int_User (*insertAt) (List_Rc_BTree_int_User llist , Rc_BTree_int_User item , int index );
    List_Rc_BTree_int_User (*replace) (List_Rc_BTree_int_User list , Rc_BTree_int_User item , List_Rc_BTree_int_User aimed );
    List_Rc_BTree_int_User (*delete) (List_Rc_BTree_int_User list , List_Rc_BTree_int_User aimed );
    List_Rc_BTree_int_User (*insert) (List_Rc_BTree_int_User llist , Rc_BTree_int_User item , List_Rc_BTree_int_User rlist );
    List_Rc_BTree_int_User (*reverse) (List_Rc_BTree_int_User list );
    List_Rc_BTree_int_User (*append) (List_Rc_BTree_int_User llist , List_Rc_BTree_int_User rlist );
    List_Rc_BTree_int_User (*push) (Rc_BTree_int_User item , List_Rc_BTree_int_User list );
    List_Rc_BTree_int_User (*take) (int len , List_Rc_BTree_int_User list );
    List_Rc_BTree_int_User (*last) (List_Rc_BTree_int_User list );
    List_Rc_BTree_int_User (*init) (List_Rc_BTree_int_User list );
    int (*hasLen) (List_Rc_BTree_int_User list , int desired );
    int (*len) (List_Rc_BTree_int_User list );
    List_Rc_BTree_int_User (*tail) (List_Rc_BTree_int_User list );
    List_Rc_BTree_int_User (*drop) (int len , List_Rc_BTree_int_User list );
    Maybe_Rc_BTree_int_User (*head) (List_Rc_BTree_int_User list );
    List_Rc_BTree_int_User (*nthcdr) (int index , List_Rc_BTree_int_User list );
    Maybe_Rc_BTree_int_User (*nth) (int index , List_Rc_BTree_int_User list );
} List_Rc_BTree_int_User__H_Table;
typedef struct class_List_Rc_BTree_int_User {
  const List_Rc_BTree_int_User__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion1575 */
    struct { /* ciciliStruct1576 */
      Rc_BTree_int_User __h_0_mem ;
      List_Rc_BTree_int_User __h_1_mem ;
    } Cons , _1 ;
    struct { /* ciciliStruct1577 */
    } Nil , _ ;
  } __h_data ;
} class_List_Rc_BTree_int_User;
List_Rc_BTree_int_User Cons_Rc_BTree_int_User (Rc_BTree_int_User head , List_Rc_BTree_int_User tail );
List_Rc_BTree_int_User Nil_Rc_BTree_int_User ();
__attribute__((weak)) List_Rc_BTree_int_User Default_List_Rc_BTree_int_User () {
  return Nil_Rc_BTree_int_User ();
}
Rc_BTree_int_User * toArray_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , Rc_BTree_int_User term );
List_Rc_BTree_int_User wrap_List_Rc_BTree_int_User (const Rc_BTree_int_User item );
List_Rc_BTree_int_User pure_List_Rc_BTree_int_User (const Rc_BTree_int_User * buf , int len );
int show_List_Rc_BTree_int_User (CFile file , List_Rc_BTree_int_User list );
List_Rc_BTree_int_User copy_List_Rc_BTree_int_User (List_Rc_BTree_int_User list );
List_Rc_BTree_int_User replaceAt_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , Rc_BTree_int_User item , int index );
List_Rc_BTree_int_User deleteAt_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , int index );
List_Rc_BTree_int_User insertAt_List_Rc_BTree_int_User (List_Rc_BTree_int_User llist , Rc_BTree_int_User item , int index );
List_Rc_BTree_int_User replace_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , Rc_BTree_int_User item , List_Rc_BTree_int_User aimed );
List_Rc_BTree_int_User delete_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , List_Rc_BTree_int_User aimed );
List_Rc_BTree_int_User insert_List_Rc_BTree_int_User (List_Rc_BTree_int_User llist , Rc_BTree_int_User item , List_Rc_BTree_int_User rlist );
List_Rc_BTree_int_User reverse_List_Rc_BTree_int_User (List_Rc_BTree_int_User list );
List_Rc_BTree_int_User append_List_Rc_BTree_int_User (List_Rc_BTree_int_User llist , List_Rc_BTree_int_User rlist );
List_Rc_BTree_int_User push_List_Rc_BTree_int_User (Rc_BTree_int_User item , List_Rc_BTree_int_User list );
List_Rc_BTree_int_User take_List_Rc_BTree_int_User (int len , List_Rc_BTree_int_User list );
List_Rc_BTree_int_User last_List_Rc_BTree_int_User (List_Rc_BTree_int_User list );
List_Rc_BTree_int_User init_List_Rc_BTree_int_User (List_Rc_BTree_int_User list );
int hasLen_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , int desired );
int len_List_Rc_BTree_int_User (List_Rc_BTree_int_User list );
List_Rc_BTree_int_User tail_List_Rc_BTree_int_User (List_Rc_BTree_int_User list );
List_Rc_BTree_int_User drop_List_Rc_BTree_int_User (int len , List_Rc_BTree_int_User list );
Maybe_Rc_BTree_int_User head_List_Rc_BTree_int_User (List_Rc_BTree_int_User list );
List_Rc_BTree_int_User nthcdr_List_Rc_BTree_int_User (int index , List_Rc_BTree_int_User list );
Maybe_Rc_BTree_int_User nth_List_Rc_BTree_int_User (int index , List_Rc_BTree_int_User list );
List_Rc_BTree_int_User__H_Table * const get_List_Rc_BTree_int_User__H_Table ();
void free_List_Rc_BTree_int_User (List_Rc_BTree_int_User * this_ptr );
#endif /* __List_Rc_BTree_int_User__H_DECL__ */ 
#ifndef __Maybe_List_Rc_BTree_int_User__H_DECL__
#define __Maybe_List_Rc_BTree_int_User__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_List_Rc_BTree_int_User Maybe_List_Rc_BTree_int_User ;
typedef void (*free_Maybe_List_Rc_BTree_int_User_t) (Maybe_List_Rc_BTree_int_User * this );
typedef struct Maybe_List_Rc_BTree_int_User__H_Table {
  free_Maybe_List_Rc_BTree_int_User_t freeData ;
} Maybe_List_Rc_BTree_int_User__H_Table;
typedef struct Maybe_List_Rc_BTree_int_User {
  const Maybe_List_Rc_BTree_int_User__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion1677 */
    struct { /* ciciliStruct1678 */
      List_Rc_BTree_int_User __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct1679 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_List_Rc_BTree_int_User;
Maybe_List_Rc_BTree_int_User Just_List_Rc_BTree_int_User (List_Rc_BTree_int_User value );
Maybe_List_Rc_BTree_int_User Nothing_List_Rc_BTree_int_User ();
__attribute__((weak)) Maybe_List_Rc_BTree_int_User Default_Maybe_List_Rc_BTree_int_User () {
  return Nothing_List_Rc_BTree_int_User ();
}
const Maybe_List_Rc_BTree_int_User__H_Table * const get_Maybe_List_Rc_BTree_int_User__H_Table ();
void free_Maybe_List_Rc_BTree_int_User (Maybe_List_Rc_BTree_int_User * this );
#endif /* __Maybe_List_Rc_BTree_int_User__H_DECL__ */ 
typedef Rc_BTree_int_User (*Rc_BTree_int_User_to_Rc_BTree_int_User_t) (Rc_BTree_int_User value );
#ifndef __Functor_List_Rc_BTree_int_User__H_DECL__
#define __Functor_List_Rc_BTree_int_User__H_DECL__
#ifndef __H___h_Functor_ctor_t__
#define __H___h_Functor_ctor_t__
typedef enum __h_Functor_ctor_t {
  __h_Functor_t = 0
} __h_Functor_ctor_t;
#endif /* __H___h_Functor_ctor_t__ */ 
typedef struct Functor_List_Rc_BTree_int_User Functor_List_Rc_BTree_int_User ;
typedef void (*free_Functor_List_Rc_BTree_int_User_t) (Functor_List_Rc_BTree_int_User * this );
typedef struct Functor_List_Rc_BTree_int_User__H_Table {
  free_Functor_List_Rc_BTree_int_User_t freeData ;
    List_Rc_BTree_int_User (*fmap) (Rc_BTree_int_User_to_Rc_BTree_int_User_t a_b , List_Rc_BTree_int_User input );
} Functor_List_Rc_BTree_int_User__H_Table;
typedef struct Functor_List_Rc_BTree_int_User {
  const Functor_List_Rc_BTree_int_User__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion1714 */
    struct { /* ciciliStruct1715 */
    } Functor , _ ;
  } __h_data ;
} Functor_List_Rc_BTree_int_User;
Functor_List_Rc_BTree_int_User Functor_List_Rc_BTree_int_User_ctor ();
__attribute__((weak)) Functor_List_Rc_BTree_int_User Default_Functor_List_Rc_BTree_int_User () {
  return Functor_List_Rc_BTree_int_User_ctor ();
}
List_Rc_BTree_int_User fmap_Functor_List_Rc_BTree_int_User (Rc_BTree_int_User_to_Rc_BTree_int_User_t a_b , List_Rc_BTree_int_User input );
const Functor_List_Rc_BTree_int_User__H_Table * const get_Functor_List_Rc_BTree_int_User__H_Table ();
void free_Functor_List_Rc_BTree_int_User (Functor_List_Rc_BTree_int_User * this );
#endif /* __Functor_List_Rc_BTree_int_User__H_DECL__ */ 
Functor_List_Rc_BTree_int_User get_Functor_List_Rc_BTree_int_User ();
#ifndef __BTree_int_User__H_DECL__
#define __BTree_int_User__H_DECL__
#ifndef __H___h_BTree_ctor_t__
#define __H___h_BTree_ctor_t__
typedef enum __h_BTree_ctor_t {
  __h_Leaf_t = 0,
  __h_Internal_t = 1,
  __h_Branch_t = 2
} __h_BTree_ctor_t;
#endif /* __H___h_BTree_ctor_t__ */ 
typedef struct class_BTree_int_User class_BTree_int_User ;
typedef class_BTree_int_User * BTree_int_User ;
typedef void (*free_BTree_int_User_t) (BTree_int_User * this_ptr );
typedef struct BTree_int_User__H_Table {
  free_BTree_int_User_t freeClass ;
    Either_BTree_int_User_Error_BTree_int_User (*fromLists) (List_int keys , List_User values );
    Either_BTree_int_User_Error_BTree_int_User (*pure) (int keys [], User values [], size_t len );
    size_t (*show) (CFile file , BTree_int_User tree );
    void (*traverse) (BTree_int_User tree ,   void (*callback) (BTree_int_User_pair_t item , Bool hasNext ));
    Maybe_BTree_int_User_pair_t (*max) (BTree_int_User tree );
    Maybe_BTree_int_User_pair_t (*min) (BTree_int_User tree );
    Either_BTree_int_User_Error_BTree_int_User (*delete) (BTree_int_User tree , int skey ,   void (*callback) (BTree_int_User_pair_t item ));
    Maybe_BTree_int_User_pair_t (*search) (BTree_int_User tree , int skey );
    Either_BTree_int_User_Error_BTree_int_User (*insert) (BTree_int_User tree , int skey , User svalue );
    size_t (*order) ();
} BTree_int_User__H_Table;
typedef struct class_BTree_int_User {
  const BTree_int_User__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion1774 */
    struct { /* ciciliStruct1775 */
      List_BTree_int_User_pair_t __h_0_mem ;
      List_Rc_BTree_int_User __h_1_mem ;
    } Branch , _2 ;
    struct { /* ciciliStruct1776 */
      List_BTree_int_User_pair_t __h_0_mem ;
      List_Rc_BTree_int_User __h_1_mem ;
    } Internal , _1 ;
    struct { /* ciciliStruct1777 */
      List_BTree_int_User_pair_t __h_0_mem ;
    } Leaf , _ ;
  } __h_data ;
} class_BTree_int_User;
BTree_int_User Branch_BTree_int_User (List_BTree_int_User_pair_t items , List_Rc_BTree_int_User children );
BTree_int_User Internal_BTree_int_User (List_BTree_int_User_pair_t items , List_Rc_BTree_int_User children );
BTree_int_User Leaf_BTree_int_User (List_BTree_int_User_pair_t items );
__attribute__((weak)) BTree_int_User Default_BTree_int_User (List_BTree_int_User_pair_t items ) {
  return Leaf_BTree_int_User (items );
}
Either_BTree_int_User_Error_BTree_int_User fromLists_BTree_int_User (List_int keys , List_User values );
Either_BTree_int_User_Error_BTree_int_User pure_BTree_int_User (int keys [], User values [], size_t len );
size_t show_BTree_int_User (CFile file , BTree_int_User tree );
void traverse_BTree_int_User (BTree_int_User tree , void (*callback) (BTree_int_User_pair_t item , Bool hasNext ));
Maybe_BTree_int_User_pair_t max_BTree_int_User (BTree_int_User tree );
Maybe_BTree_int_User_pair_t min_BTree_int_User (BTree_int_User tree );
Either_BTree_int_User_Error_BTree_int_User delete_BTree_int_User (BTree_int_User tree , int skey , void (*callback) (BTree_int_User_pair_t item ));
Maybe_BTree_int_User_pair_t search_BTree_int_User (BTree_int_User tree , int skey );
Either_BTree_int_User_Error_BTree_int_User insert_BTree_int_User (BTree_int_User tree , int skey , User svalue );
size_t order_BTree_int_User ();
BTree_int_User__H_Table * const get_BTree_int_User__H_Table ();
void free_BTree_int_User (BTree_int_User * this_ptr );
#endif /* __BTree_int_User__H_DECL__ */ 
#ifndef __BTree_int_User_Error__H_IMPL__
#define __BTree_int_User_Error__H_IMPL__
void show_BTree_int_User_Error (BTree_int_User_Error error ) {
  { /* cicili#Let1854 */
    // ----------
    ;
    ({ /* cicili#Let1856 */
      bool __h_case_result  = (true  &&  ((error . __h_ctor ) ==  __h_ERR_INVALID_OBJECT_t  ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block1861 */
          printf ("invalid B-Tree object");
        }
      else
        { /* cicili#Let1866 */
          typeof((((error . __h_data ). ERR_INVALID_ORDER ). __h_0_mem )) order ;
          // ----------
          ;
          ({ /* cicili#Let1868 */
            bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_INVALID_ORDER_t  ) &&  ({ /* cicili#Progn1869 */
                  (order  =  (((error . __h_data ). ERR_INVALID_ORDER ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block1875 */
                printf ("invalid B-Tree order: %zu", order );
              }
            else
              { /* cicili#Let1880 */
                typeof((((error . __h_data ). ERR_UNIQUE_KEY ). __h_0_mem )) item ;
                // ----------
                ;
                ({ /* cicili#Let1882 */
                  bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_UNIQUE_KEY_t  ) &&  ({ /* cicili#Progn1883 */
                        (item  =  (((error . __h_data ). ERR_UNIQUE_KEY ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block1889 */
                      { /* cicili#Block1891 */
                        printf ("unique key: ");
                        ({ /* cicili#Let1898 */
                          typeof((item . __h_0_mem )) id ;
                          typeof((item . __h_1_mem )) __h_match1896_1_arg ;
                          typeof((__h_match1896_1_arg . __h_0_mem )) wname ;
                          typeof((__h_match1896_1_arg . __h_1_mem )) salary ;
                          // ----------
                          ;
                          ({ /* cicili#Let1900 */
                            bool __h_case_result  = (true  &&  ((({ /* cicili#Progn1901 */
                                    (id  =  (item . __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn1903 */
                                    (__h_match1896_1_arg  =  (item . __h_1_mem ) );
                                    true ;
                                  }) ) &&  (true  &&  (({ /* cicili#Progn1905 */
                                      (wname  =  (__h_match1896_1_arg . __h_0_mem ) );
                                      true ;
                                    }) &&  ({ /* cicili#Progn1907 */
                                      (salary  =  (__h_match1896_1_arg . __h_1_mem ) );
                                      true ;
                                    }) ) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn1912 */
                                ({ /* cicili#Let1916 */
                                  __auto_type match1915  = get_Cell_String (wname );
                                  typeof((((match1915 . __h_data ). Just ). __h_0_mem )) name ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let1919 */
                                    bool __h_case_result  = (true  &&  (((match1915 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1920 */
                                          (name  =  (((match1915 . __h_data ). Just ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn1925 */
                                        (fprintf (stdout , "(%d, '", id ) +  show_String (stdout , name ) +  fprintf (stdout , "', %d)", salary ) );
                                      }) : ({ /* cicili#Let1929 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn1931 */
                                          fprintf (stdout , "%d, but item is deleted in another version!", id );
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let1935 */
                                // ----------
                                ;
                                ({ /* cicili#Progn1937 */
                                  0;
                                });
                              }));
                          });
                        });
                      }
                    }
                  else
                    { /* cicili#Let1942 */
                      typeof((((error . __h_data ). ERR_NOT_FOUND ). __h_0_mem )) key ;
                      // ----------
                      ;
                      ({ /* cicili#Let1944 */
                        bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_NOT_FOUND_t  ) &&  ({ /* cicili#Progn1945 */
                              (key  =  (((error . __h_data ). ERR_NOT_FOUND ). __h_0_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        
                        if (__h_case_result )
                          { /* cicili#Block1951 */
                            { /* cicili#Block1953 */
                              printf ("key not found: ");
                              fprintf (stdout , "%d", key );
                            }
                          }
                        else
                          { /* cicili#Let1961 */
                            typeof((((error . __h_data ). ERR_ACCESS_DEAD_CHILD ). __h_0_mem )) item ;
                            typeof((((error . __h_data ). ERR_ACCESS_DEAD_CHILD ). __h_1_mem )) index ;
                            // ----------
                            ;
                            ({ /* cicili#Let1963 */
                              bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_ACCESS_DEAD_CHILD_t  ) &&  (({ /* cicili#Progn1964 */
                                      (item  =  (((error . __h_data ). ERR_ACCESS_DEAD_CHILD ). __h_0_mem ) );
                                      true ;
                                    }) &&  ({ /* cicili#Progn1966 */
                                      (index  =  (((error . __h_data ). ERR_ACCESS_DEAD_CHILD ). __h_1_mem ) );
                                      true ;
                                    }) ) ) );
                              // ----------
                              
                              if (__h_case_result )
                                { /* cicili#Block1972 */
                                  { /* cicili#Block1974 */
                                    printf ("dead child at index: %zu of item: ", index );
                                    ({ /* cicili#Let1981 */
                                      typeof((item . __h_0_mem )) id ;
                                      typeof((item . __h_1_mem )) __h_match1979_1_arg ;
                                      typeof((__h_match1979_1_arg . __h_0_mem )) wname ;
                                      typeof((__h_match1979_1_arg . __h_1_mem )) salary ;
                                      // ----------
                                      ;
                                      ({ /* cicili#Let1983 */
                                        bool __h_case_result  = (true  &&  ((({ /* cicili#Progn1984 */
                                                (id  =  (item . __h_0_mem ) );
                                                true ;
                                              }) &&  ({ /* cicili#Progn1986 */
                                                (__h_match1979_1_arg  =  (item . __h_1_mem ) );
                                                true ;
                                              }) ) &&  (true  &&  (({ /* cicili#Progn1988 */
                                                  (wname  =  (__h_match1979_1_arg . __h_0_mem ) );
                                                  true ;
                                                }) &&  ({ /* cicili#Progn1990 */
                                                  (salary  =  (__h_match1979_1_arg . __h_1_mem ) );
                                                  true ;
                                                }) ) ) ) );
                                        // ----------
                                        
                                        ((__h_case_result ) ? ({ /* cicili#Progn1995 */
                                            ({ /* cicili#Let1999 */
                                              __auto_type match1998  = get_Cell_String (wname );
                                              typeof((((match1998 . __h_data ). Just ). __h_0_mem )) name ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let2002 */
                                                bool __h_case_result  = (true  &&  (((match1998 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2003 */
                                                      (name  =  (((match1998 . __h_data ). Just ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn2008 */
                                                    (fprintf (stdout , "(%d, '", id ) +  show_String (stdout , name ) +  fprintf (stdout , "', %d)", salary ) );
                                                  }) : ({ /* cicili#Let2012 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn2014 */
                                                      fprintf (stdout , "%d, but item is deleted in another version!", id );
                                                    });
                                                  }));
                                              });
                                            });
                                          }) : ({ /* cicili#Let2018 */
                                            // ----------
                                            ;
                                            ({ /* cicili#Progn2020 */
                                              0;
                                            });
                                          }));
                                      });
                                    });
                                  }
                                }
                              else
                                { /* cicili#Let2025 */
                                  typeof((((error . __h_data ). ERR_INVALID_BRANCH ). __h_0_mem )) branch ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let2027 */
                                    bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_INVALID_BRANCH_t  ) &&  ({ /* cicili#Progn2028 */
                                          (branch  =  (((error . __h_data ). ERR_INVALID_BRANCH ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    if (__h_case_result )
                                      { /* cicili#Block2034 */
                                        { /* cicili#Block2036 */
                                          printf ("invalid branch: ");
                                          (branch -> __h_table -> show )(stdout , branch );
                                        }
                                      }
                                    else
                                      { /* cicili#Let2043 */
                                        typeof((((error . __h_data ). ERR_CANT_BORROW ). __h_0_mem )) reason ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let2045 */
                                          bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_CANT_BORROW_t  ) &&  ({ /* cicili#Progn2046 */
                                                (reason  =  (((error . __h_data ). ERR_CANT_BORROW ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          if (__h_case_result )
                                            { /* cicili#Block2052 */
                                              printf ("borrow error: %s", reason );
                                            }
                                          else
                                            { /* cicili#Let2057 */
                                              // ----------
                                              ;
                                              { /* cicili#Block2059 */
                                                printf ("unknown error");
                                              }
                                            }
                                        });
                                      }
                                  });
                                }
                            });
                          }
                      });
                    }
                });
              }
          });
        }
    });
  }
}
void free_BTree_int_User_Error (BTree_int_User_Error * this ) {
}
const BTree_int_User_Error__H_Table * const get_BTree_int_User_Error__H_Table () {
  static const BTree_int_User_Error__H_Table table  = { free_BTree_int_User_Error , show_BTree_int_User_Error };
  return (&table );
}
BTree_int_User_Error BTree_int_User_ERR_INVALID_OBJECT () {
  { /* cicili#Let2071 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_INVALID_OBJECT_t });
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_INVALID_ORDER (size_t order ) {
  { /* cicili#Let2076 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_INVALID_ORDER_t , .__h_data.ERR_INVALID_ORDER = { order }});
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_UNIQUE_KEY (BTree_int_User_pair_t item ) {
  { /* cicili#Let2081 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_UNIQUE_KEY_t , .__h_data.ERR_UNIQUE_KEY = { item }});
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_NOT_FOUND (int key ) {
  { /* cicili#Let2087 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_NOT_FOUND_t , .__h_data.ERR_NOT_FOUND = { key }});
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_ACCESS_DEAD_CHILD (BTree_int_User_pair_t item , size_t index ) {
  { /* cicili#Let2092 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_ACCESS_DEAD_CHILD_t , .__h_data.ERR_ACCESS_DEAD_CHILD = { item , index }});
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_INVALID_BRANCH (BTree_int_User branch ) {
  { /* cicili#Let2098 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_INVALID_BRANCH_t , .__h_data.ERR_INVALID_BRANCH = { branch }});
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_CANT_BORROW (char * reason ) {
  { /* cicili#Let2103 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h___t , .__h_data._ = { reason }});
    // ----------
    return instance ;
  }
}
#endif /* __BTree_int_User_Error__H_IMPL__ */ 
#ifndef __Either_BTree_int_User_Error_BTree_int_User__H_IMPL__
#define __Either_BTree_int_User_Error_BTree_int_User__H_IMPL__
void free_Either_BTree_int_User_Error_BTree_int_User (Either_BTree_int_User_Error_BTree_int_User * this ) {
}
const Either_BTree_int_User_Error_BTree_int_User__H_Table * const get_Either_BTree_int_User_Error_BTree_int_User__H_Table () {
  static const Either_BTree_int_User_Error_BTree_int_User__H_Table table  = { free_Either_BTree_int_User_Error_BTree_int_User };
  return (&table );
}
Either_BTree_int_User_Error_BTree_int_User Right_BTree_int_User_Error_BTree_int_User (BTree_int_User value ) {
  { /* cicili#Let2119 */
    Either_BTree_int_User_Error_BTree_int_User instance  = ((Either_BTree_int_User_Error_BTree_int_User){ get_Either_BTree_int_User_Error_BTree_int_User__H_Table (), __h_Right_t , .__h_data.Right = { value }});
    // ----------
    return instance ;
  }
}
Either_BTree_int_User_Error_BTree_int_User Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_Error error ) {
  { /* cicili#Let2124 */
    Either_BTree_int_User_Error_BTree_int_User instance  = ((Either_BTree_int_User_Error_BTree_int_User){ get_Either_BTree_int_User_Error_BTree_int_User__H_Table (), __h___t , .__h_data._ = { error }});
    // ----------
    return instance ;
  }
}
#endif /* __Either_BTree_int_User_Error_BTree_int_User__H_IMPL__ */ 
#ifndef __Maybe_BTree_int_User__H_IMPL__
#define __Maybe_BTree_int_User__H_IMPL__
void free_Maybe_BTree_int_User (Maybe_BTree_int_User * this ) {
}
const Maybe_BTree_int_User__H_Table * const get_Maybe_BTree_int_User__H_Table () {
  static const Maybe_BTree_int_User__H_Table table  = { free_Maybe_BTree_int_User };
  return (&table );
}
Maybe_BTree_int_User Just_BTree_int_User (BTree_int_User value ) {
  { /* cicili#Let2140 */
    Maybe_BTree_int_User instance  = ((Maybe_BTree_int_User){ get_Maybe_BTree_int_User__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_BTree_int_User Nothing_BTree_int_User () {
  { /* cicili#Let2145 */
    Maybe_BTree_int_User instance  = ((Maybe_BTree_int_User){ get_Maybe_BTree_int_User__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_BTree_int_User__H_IMPL__ */ 
#ifndef __Maybe_BTree_int_User_pair_t__H_IMPL__
#define __Maybe_BTree_int_User_pair_t__H_IMPL__
void free_Maybe_BTree_int_User_pair_t (Maybe_BTree_int_User_pair_t * this ) {
}
const Maybe_BTree_int_User_pair_t__H_Table * const get_Maybe_BTree_int_User_pair_t__H_Table () {
  static const Maybe_BTree_int_User_pair_t__H_Table table  = { free_Maybe_BTree_int_User_pair_t };
  return (&table );
}
Maybe_BTree_int_User_pair_t Just_BTree_int_User_pair_t (BTree_int_User_pair_t value ) {
  { /* cicili#Let2163 */
    Maybe_BTree_int_User_pair_t instance  = ((Maybe_BTree_int_User_pair_t){ get_Maybe_BTree_int_User_pair_t__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_BTree_int_User_pair_t Nothing_BTree_int_User_pair_t () {
  { /* cicili#Let2168 */
    Maybe_BTree_int_User_pair_t instance  = ((Maybe_BTree_int_User_pair_t){ get_Maybe_BTree_int_User_pair_t__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_BTree_int_User_pair_t__H_IMPL__ */ 
#ifndef __List_BTree_int_User_pair_t__H_IMPL__
#define __List_BTree_int_User_pair_t__H_IMPL__
BTree_int_User_pair_t * toArray_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , BTree_int_User_pair_t term ) {
  BTree_int_User_pair_t * array (List_BTree_int_User_pair_t list , int count ) {
    return ({ /* cicili#Let2178 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let2180 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn2181 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2183 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2188 */
              ({ /* cicili#Let2190 */
                BTree_int_User_pair_t * arr  = array (tail , (count  +  1 ));
                // ----------
                arr [count ] = head ;
                arr ;
              });
            }) : ({ /* cicili#Let2194 */
              // ----------
              ;
              ({ /* cicili#Progn2196 */
                ({ /* cicili#Let2198 */
                  BTree_int_User_pair_t * arr  = calloc (count , sizeof(BTree_int_User_pair_t));
                  // ----------
                  arr [(count  -  1 )] = term ;
                  arr ;
                });
              });
            }));
        });
      });
  }
  return array (list , 0);
}
List_BTree_int_User_pair_t wrap_List_BTree_int_User_pair_t (const BTree_int_User_pair_t item ) {
  return Cons_BTree_int_User_pair_t (item , Nil_BTree_int_User_pair_t ());
}
List_BTree_int_User_pair_t pure_List_BTree_int_User_pair_t (const BTree_int_User_pair_t * buf , int len ) {
  return (((buf  ==  NULL  )) ? Nil_BTree_int_User_pair_t () : ({ /* cicili#Let2209 */
        BTree_int_User_pair_t item  = (*buf );
        // ----------
        (((len  ==  0 )) ? Nil_BTree_int_User_pair_t () : Cons_BTree_int_User_pair_t (item , pure_List_BTree_int_User_pair_t ((++buf ), (--len ))));
      }));
}
int show_List_BTree_int_User_pair_t (CFile file , List_BTree_int_User_pair_t list ) {
  return ({ /* cicili#Let2219 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let2221 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn2222 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn2224 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn2229 */
            (({ /* cicili#Let2233 */
                // ----------
                ;
                ({ /* cicili#Let2235 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2239 */
                      (({ /* cicili#Let2246 */
                          typeof((head . __h_0_mem )) id ;
                          typeof((head . __h_1_mem )) __h_match2244_1_arg ;
                          typeof((__h_match2244_1_arg . __h_0_mem )) wname ;
                          typeof((__h_match2244_1_arg . __h_1_mem )) salary ;
                          // ----------
                          ;
                          ({ /* cicili#Let2248 */
                            bool __h_case_result  = (true  &&  ((({ /* cicili#Progn2249 */
                                    (id  =  (head . __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn2251 */
                                    (__h_match2244_1_arg  =  (head . __h_1_mem ) );
                                    true ;
                                  }) ) &&  (true  &&  (({ /* cicili#Progn2253 */
                                      (wname  =  (__h_match2244_1_arg . __h_0_mem ) );
                                      true ;
                                    }) &&  ({ /* cicili#Progn2255 */
                                      (salary  =  (__h_match2244_1_arg . __h_1_mem ) );
                                      true ;
                                    }) ) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn2260 */
                                ({ /* cicili#Let2264 */
                                  __auto_type match2263  = get_Cell_String (wname );
                                  typeof((((match2263 . __h_data ). Just ). __h_0_mem )) name ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let2267 */
                                    bool __h_case_result  = (true  &&  (((match2263 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2268 */
                                          (name  =  (((match2263 . __h_data ). Just ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn2273 */
                                        (fprintf (file , "(%d, '", id ) +  show_String (file , name ) +  fprintf (file , "', %d)", salary ) );
                                      }) : ({ /* cicili#Let2277 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn2279 */
                                          fprintf (file , "%d, but item is deleted in another version!", id );
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let2283 */
                                // ----------
                                ;
                                ({ /* cicili#Progn2285 */
                                  0;
                                });
                              }));
                          });
                        }) +  fprintf (file , "%s", " ") );
                    }) : ({ /* cicili#Let2289 */
                      // ----------
                      ;
                      ({ /* cicili#Progn2291 */
                        ({ /* cicili#Let2298 */
                          typeof((head . __h_0_mem )) id ;
                          typeof((head . __h_1_mem )) __h_match2296_1_arg ;
                          typeof((__h_match2296_1_arg . __h_0_mem )) wname ;
                          typeof((__h_match2296_1_arg . __h_1_mem )) salary ;
                          // ----------
                          ;
                          ({ /* cicili#Let2300 */
                            bool __h_case_result  = (true  &&  ((({ /* cicili#Progn2301 */
                                    (id  =  (head . __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn2303 */
                                    (__h_match2296_1_arg  =  (head . __h_1_mem ) );
                                    true ;
                                  }) ) &&  (true  &&  (({ /* cicili#Progn2305 */
                                      (wname  =  (__h_match2296_1_arg . __h_0_mem ) );
                                      true ;
                                    }) &&  ({ /* cicili#Progn2307 */
                                      (salary  =  (__h_match2296_1_arg . __h_1_mem ) );
                                      true ;
                                    }) ) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn2312 */
                                ({ /* cicili#Let2316 */
                                  __auto_type match2315  = get_Cell_String (wname );
                                  typeof((((match2315 . __h_data ). Just ). __h_0_mem )) name ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let2319 */
                                    bool __h_case_result  = (true  &&  (((match2315 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2320 */
                                          (name  =  (((match2315 . __h_data ). Just ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn2325 */
                                        (fprintf (file , "(%d, '", id ) +  show_String (file , name ) +  fprintf (file , "', %d)", salary ) );
                                      }) : ({ /* cicili#Let2329 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn2331 */
                                          fprintf (file , "%d, but item is deleted in another version!", id );
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let2335 */
                                // ----------
                                ;
                                ({ /* cicili#Progn2337 */
                                  0;
                                });
                              }));
                          });
                        });
                      });
                    }));
                });
              }) +  show_List_BTree_int_User_pair_t (file , tail ) );
          }) : ({ /* cicili#Let2342 */
            // ----------
            ;
            ({ /* cicili#Progn2344 */
              0;
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t copy_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
  return ({ /* cicili#Let2350 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let2352 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn2353 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn2355 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn2360 */
            Cons_BTree_int_User_pair_t (head , copy_List_BTree_int_User_pair_t (tail ));
          }) : ({ /* cicili#Let2366 */
            // ----------
            ;
            ({ /* cicili#Progn2368 */
              Nil_BTree_int_User_pair_t ();
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t replaceAt_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , BTree_int_User_pair_t item , int index ) {
  return ({ /* cicili#Let2375 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let2377 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn2378 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2380 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn2385 */
            Cons_BTree_int_User_pair_t (head , replaceAt_List_BTree_int_User_pair_t (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let2391 */
            // ----------
            ;
            ({ /* cicili#Progn2393 */
              ({ /* cicili#Let2397 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let2399 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn2400 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2405 */
                      Cons_BTree_int_User_pair_t (item , copy_List_BTree_int_User_pair_t (taill ));
                    }) : ({ /* cicili#Let2411 */
                      // ----------
                      ;
                      ({ /* cicili#Progn2413 */
                        Nil_BTree_int_User_pair_t ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t deleteAt_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , int index ) {
  return ({ /* cicili#Let2420 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let2422 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn2423 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2425 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn2430 */
            Cons_BTree_int_User_pair_t (head , deleteAt_List_BTree_int_User_pair_t (tail , (index  -  1 )));
          }) : ({ /* cicili#Let2436 */
            // ----------
            ;
            ({ /* cicili#Progn2438 */
              ({ /* cicili#Let2442 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let2444 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn2445 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2450 */
                      copy_List_BTree_int_User_pair_t (taill );
                    }) : ({ /* cicili#Let2455 */
                      // ----------
                      ;
                      ({ /* cicili#Progn2457 */
                        Nil_BTree_int_User_pair_t ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t insertAt_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , BTree_int_User_pair_t item , int index ) {
  return ({ /* cicili#Let2464 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let2466 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn2467 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2469 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn2474 */
            Cons_BTree_int_User_pair_t (head , insertAt_List_BTree_int_User_pair_t (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let2480 */
            // ----------
            ;
            ({ /* cicili#Progn2482 */
              Cons_BTree_int_User_pair_t (item , copy_List_BTree_int_User_pair_t (list ));
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t replace_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , BTree_int_User_pair_t item , List_BTree_int_User_pair_t aimed ) {
  return ({ /* cicili#Let2490 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let2492 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn2493 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2495 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn2500 */
            Cons_BTree_int_User_pair_t (head , replace_List_BTree_int_User_pair_t (tail , item , aimed ));
          }) : ({ /* cicili#Let2506 */
            // ----------
            ;
            ({ /* cicili#Progn2508 */
              ({ /* cicili#Let2512 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let2514 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn2515 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2520 */
                      Cons_BTree_int_User_pair_t (item , copy_List_BTree_int_User_pair_t (taill ));
                    }) : ({ /* cicili#Let2526 */
                      // ----------
                      ;
                      ({ /* cicili#Progn2528 */
                        Nil_BTree_int_User_pair_t ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t delete_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , List_BTree_int_User_pair_t aimed ) {
  return ({ /* cicili#Let2535 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let2537 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn2538 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2540 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn2545 */
            Cons_BTree_int_User_pair_t (head , delete_List_BTree_int_User_pair_t (tail , aimed ));
          }) : ({ /* cicili#Let2551 */
            // ----------
            ;
            ({ /* cicili#Progn2553 */
              ({ /* cicili#Let2557 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let2559 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn2560 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2565 */
                      copy_List_BTree_int_User_pair_t (taill );
                    }) : ({ /* cicili#Let2570 */
                      // ----------
                      ;
                      ({ /* cicili#Progn2572 */
                        Nil_BTree_int_User_pair_t ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t insert_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t llist , BTree_int_User_pair_t item , List_BTree_int_User_pair_t rlist ) {
  return ({ /* cicili#Let2579 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let2581 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn2582 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2584 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (llist  !=  rlist  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn2589 */
            Cons_BTree_int_User_pair_t (head , insert_List_BTree_int_User_pair_t (tail , item , rlist ));
          }) : ({ /* cicili#Let2595 */
            // ----------
            ;
            ({ /* cicili#Progn2597 */
              Cons_BTree_int_User_pair_t (item , copy_List_BTree_int_User_pair_t (rlist ));
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t reverse_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
  List_BTree_int_User_pair_t _reverse (List_BTree_int_User_pair_t list , List_BTree_int_User_pair_t rlist ) {
    return ({ /* cicili#Let2606 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let2608 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn2609 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2611 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2616 */
              _reverse (tail , Cons_BTree_int_User_pair_t (head , rlist ));
            }) : ({ /* cicili#Let2621 */
              // ----------
              ;
              ({ /* cicili#Progn2623 */
                rlist ;
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let2627 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let2629 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn2630 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn2632 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn2637 */
            _reverse (tail , Cons_BTree_int_User_pair_t (head , Nil_BTree_int_User_pair_t ()));
          }) : ({ /* cicili#Let2643 */
            // ----------
            ;
            ({ /* cicili#Progn2645 */
              list ;
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t append_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t llist , List_BTree_int_User_pair_t rlist ) {
  return ({ /* cicili#Let2651 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let2653 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn2654 */
                (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn2656 */
                (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn2661 */
            Cons_BTree_int_User_pair_t (head , append_List_BTree_int_User_pair_t (tail , rlist ));
          }) : ({ /* cicili#Let2667 */
            // ----------
            ;
            ({ /* cicili#Progn2669 */
              copy_List_BTree_int_User_pair_t (rlist );
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t push_List_BTree_int_User_pair_t (BTree_int_User_pair_t item , List_BTree_int_User_pair_t list ) {
  return Cons_BTree_int_User_pair_t (item , copy_List_BTree_int_User_pair_t (list ));
}
List_BTree_int_User_pair_t take_List_BTree_int_User_pair_t (int len , List_BTree_int_User_pair_t list ) {
  return (((len  <=  0 )) ? Nil_BTree_int_User_pair_t () : ({ /* cicili#Let2682 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let2684 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn2685 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2687 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2692 */
              Cons_BTree_int_User_pair_t (head , take_List_BTree_int_User_pair_t ((--len ), tail ));
            }) : ({ /* cicili#Let2698 */
              // ----------
              ;
              ({ /* cicili#Progn2700 */
                Nil_BTree_int_User_pair_t ();
              });
            }));
        });
      }));
}
List_BTree_int_User_pair_t last_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
  return ({ /* cicili#Let2707 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let2709 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn2710 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn2715 */
            ({ /* cicili#Let2719 */
              // ----------
              ;
              ({ /* cicili#Let2721 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn2725 */
                    copy_List_BTree_int_User_pair_t (list );
                  }) : ({ /* cicili#Let2730 */
                    // ----------
                    ;
                    ({ /* cicili#Progn2732 */
                      last_List_BTree_int_User_pair_t (tail );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let2737 */
            // ----------
            ;
            ({ /* cicili#Progn2739 */
              Nil_BTree_int_User_pair_t ();
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t init_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
  return ({ /* cicili#Let2747 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let2749 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn2750 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2752 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn2757 */
            Cons_BTree_int_User_pair_t (head , init_List_BTree_int_User_pair_t (tail ));
          }) : ({ /* cicili#Let2763 */
            // ----------
            ;
            ({ /* cicili#Progn2765 */
              Nil_BTree_int_User_pair_t ();
            });
          }));
      });
    });
}
int hasLen_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , int desired ) {
  return ({ /* cicili#Let2772 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let2774 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn2775 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn2780 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_BTree_int_User_pair_t (tail , (--desired )) ));
          }) : ({ /* cicili#Let2786 */
            // ----------
            ;
            ({ /* cicili#Progn2788 */
              0;
            });
          }));
      });
    });
}
int len_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
  return ({ /* cicili#Let2794 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let2796 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn2797 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn2802 */
            (1 +  len_List_BTree_int_User_pair_t (tail ) );
          }) : ({ /* cicili#Let2807 */
            // ----------
            ;
            ({ /* cicili#Progn2809 */
              0;
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t tail_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
  return drop_List_BTree_int_User_pair_t (1, list );
}
List_BTree_int_User_pair_t drop_List_BTree_int_User_pair_t (int len , List_BTree_int_User_pair_t list ) {
  return (((len  <=  0 )) ? copy_List_BTree_int_User_pair_t (list ) : ({ /* cicili#Let2820 */
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let2822 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn2823 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2828 */
              drop_List_BTree_int_User_pair_t ((--len ), tail );
            }) : ({ /* cicili#Let2833 */
              // ----------
              ;
              ({ /* cicili#Progn2835 */
                Nil_BTree_int_User_pair_t ();
              });
            }));
        });
      }));
}
Maybe_BTree_int_User_pair_t head_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
  return ({ /* cicili#Let2843 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      // ----------
      ;
      ({ /* cicili#Let2845 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn2846 */
              (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn2851 */
            Just_BTree_int_User_pair_t (head );
          }) : ({ /* cicili#Let2856 */
            // ----------
            ;
            ({ /* cicili#Progn2858 */
              Nothing_BTree_int_User_pair_t ();
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t nthcdr_List_BTree_int_User_pair_t (int index , List_BTree_int_User_pair_t list ) {
  return ({ /* cicili#Let2865 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let2867 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn2868 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn2873 */
            nthcdr_List_BTree_int_User_pair_t ((--index ), tail );
          }) : ({ /* cicili#Let2878 */
            // ----------
            ;
            ({ /* cicili#Progn2880 */
              list ;
            });
          }));
      });
    });
}
Maybe_BTree_int_User_pair_t nth_List_BTree_int_User_pair_t (int index , List_BTree_int_User_pair_t list ) {
  return ({ /* cicili#Let2887 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let2889 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn2890 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn2892 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn2897 */
            (((index  ==  0 )) ? Just_BTree_int_User_pair_t (head ) : (((index  <  0 )) ? Nothing_BTree_int_User_pair_t () : nth_List_BTree_int_User_pair_t ((--index ), tail )));
          }) : ({ /* cicili#Let2906 */
            // ----------
            ;
            ({ /* cicili#Progn2908 */
              Nothing_BTree_int_User_pair_t ();
            });
          }));
      });
    });
}
void free_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t * this_ptr ) {
  { /* cicili#Let2913 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let2917 */
      typeof((((this -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let2919 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn2920 */
              (tail  =  (((this -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block2926 */
            { /* cicili#Block2928 */
              free (this );
              free_List_BTree_int_User_pair_t ((&tail ));
            }
          }
        else
          { /* cicili#Let2936 */
            // ----------
            ;
            ({ /* cicili#Let2938 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Nil_t  ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block2943 */
                  { /* cicili#Block2945 */
                    free (this );
                  }
                }
            });
          }
      });
    }
  }
}
List_BTree_int_User_pair_t__H_Table * const get_List_BTree_int_User_pair_t__H_Table () {
  static List_BTree_int_User_pair_t__H_Table table  = { free_List_BTree_int_User_pair_t , toArray_List_BTree_int_User_pair_t , wrap_List_BTree_int_User_pair_t , pure_List_BTree_int_User_pair_t , show_List_BTree_int_User_pair_t , copy_List_BTree_int_User_pair_t , replaceAt_List_BTree_int_User_pair_t , deleteAt_List_BTree_int_User_pair_t , insertAt_List_BTree_int_User_pair_t , replace_List_BTree_int_User_pair_t , delete_List_BTree_int_User_pair_t , insert_List_BTree_int_User_pair_t , reverse_List_BTree_int_User_pair_t , append_List_BTree_int_User_pair_t , push_List_BTree_int_User_pair_t , take_List_BTree_int_User_pair_t , last_List_BTree_int_User_pair_t , init_List_BTree_int_User_pair_t , hasLen_List_BTree_int_User_pair_t , len_List_BTree_int_User_pair_t , tail_List_BTree_int_User_pair_t , drop_List_BTree_int_User_pair_t , head_List_BTree_int_User_pair_t , nthcdr_List_BTree_int_User_pair_t , nth_List_BTree_int_User_pair_t };
  return (&table );
}
List_BTree_int_User_pair_t Cons_BTree_int_User_pair_t (BTree_int_User_pair_t head , List_BTree_int_User_pair_t tail ) {
  { /* cicili#Let2956 */
    List_BTree_int_User_pair_t instance  = malloc (sizeof(class_List_BTree_int_User_pair_t));
    // ----------
    (*instance ) = ((class_List_BTree_int_User_pair_t){ get_List_BTree_int_User_pair_t__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
List_BTree_int_User_pair_t Nil_BTree_int_User_pair_t () {
  { /* cicili#Let2962 */
    List_BTree_int_User_pair_t instance  = malloc (sizeof(class_List_BTree_int_User_pair_t));
    // ----------
    (*instance ) = ((class_List_BTree_int_User_pair_t){ get_List_BTree_int_User_pair_t__H_Table (), __h___t });
    return instance ;
  }
}
#endif /* __List_BTree_int_User_pair_t__H_IMPL__ */ 
#ifndef __Maybe_List_BTree_int_User_pair_t__H_IMPL__
#define __Maybe_List_BTree_int_User_pair_t__H_IMPL__
void free_Maybe_List_BTree_int_User_pair_t (Maybe_List_BTree_int_User_pair_t * this ) {
}
const Maybe_List_BTree_int_User_pair_t__H_Table * const get_Maybe_List_BTree_int_User_pair_t__H_Table () {
  static const Maybe_List_BTree_int_User_pair_t__H_Table table  = { free_Maybe_List_BTree_int_User_pair_t };
  return (&table );
}
Maybe_List_BTree_int_User_pair_t Just_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t value ) {
  { /* cicili#Let2979 */
    Maybe_List_BTree_int_User_pair_t instance  = ((Maybe_List_BTree_int_User_pair_t){ get_Maybe_List_BTree_int_User_pair_t__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_BTree_int_User_pair_t Nothing_List_BTree_int_User_pair_t () {
  { /* cicili#Let2984 */
    Maybe_List_BTree_int_User_pair_t instance  = ((Maybe_List_BTree_int_User_pair_t){ get_Maybe_List_BTree_int_User_pair_t__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_BTree_int_User_pair_t__H_IMPL__ */ 
#ifndef __Maybe_BTree_int_User__H_IMPL__
#define __Maybe_BTree_int_User__H_IMPL__
void free_Maybe_BTree_int_User (Maybe_BTree_int_User * this ) {
}
const Maybe_BTree_int_User__H_Table * const get_Maybe_BTree_int_User__H_Table () {
  static const Maybe_BTree_int_User__H_Table table  = { free_Maybe_BTree_int_User };
  return (&table );
}
Maybe_BTree_int_User Just_BTree_int_User (BTree_int_User value ) {
  { /* cicili#Let3004 */
    Maybe_BTree_int_User instance  = ((Maybe_BTree_int_User){ get_Maybe_BTree_int_User__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_BTree_int_User Nothing_BTree_int_User () {
  { /* cicili#Let3009 */
    Maybe_BTree_int_User instance  = ((Maybe_BTree_int_User){ get_Maybe_BTree_int_User__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_BTree_int_User__H_IMPL__ */ 
#ifndef __Rc_BTree_int_User__H_IMPL__
#define __Rc_BTree_int_User__H_IMPL__
Rc_BTree_int_User new_Rc_BTree_int_User (BTree_int_User pointer ) {
  return ({ /* cicili#Let3016 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      __auto_type holder  = ((BTree_int_User *)malloc (sizeof(BTree_int_User *)));
      // ----------
      (*count ) = 1;
      (*holder ) = pointer ;
      __h_Hold_BTree_int_User (holder , count , ((size_t)pointer ));
    });
}
Rc_BTree_int_User clone_Rc_BTree_int_User (Rc_BTree_int_User rc ) {
  return ({ /* cicili#Let3025 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let3027 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn3028 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3030 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn3032 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3037 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Progn3040 */
                (++(*count ));
                __h_Hold_BTree_int_User (pointer , count , address );
              }) : Gone_BTree_int_User ());
          }) : ({ /* cicili#Let3046 */
            // ----------
            ;
            ({ /* cicili#Progn3048 */
              Gone_BTree_int_User ();
            });
          }));
      });
    });
}
Maybe_BTree_int_User take_Rc_BTree_int_User (Rc_BTree_int_User * this ) {
  return ({ /* cicili#Let3056 */
      typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let3058 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn3059 */
                  (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3061 */
                  (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn3063 */
                (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3068 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Let3072 */
                __auto_type result  = Just_BTree_int_User ((*pointer ));
                // ----------
                if ((*count ) >=  1 )
                  { /* cicili#Block3078 */
                    (*count ) = 0;
                    (*pointer ) = NULL ;
                  }
                result ;
              }) : Nothing_BTree_int_User ());
          }) : ({ /* cicili#Let3083 */
            // ----------
            ;
            ({ /* cicili#Progn3085 */
              Nothing_BTree_int_User ();
            });
          }));
      });
    });
}
Maybe_BTree_int_User get_Rc_BTree_int_User (Rc_BTree_int_User rc ) {
  return ({ /* cicili#Let3093 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let3095 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn3096 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3098 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn3100 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3105 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) >  0 ) )) ? Just_BTree_int_User ((*pointer )) : Nothing_BTree_int_User ());
          }) : ({ /* cicili#Let3112 */
            // ----------
            ;
            ({ /* cicili#Progn3114 */
              Nothing_BTree_int_User ();
            });
          }));
      });
    });
}
void free_Rc_BTree_int_User (Rc_BTree_int_User * this ) {
  { /* cicili#Let3123 */
    typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
    typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
    // ----------
    ;
    ({ /* cicili#Let3125 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn3126 */
                (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn3128 */
                (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                true ;
              }) ) &&  ({ /* cicili#Progn3130 */
              (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block3136 */
          if (((*count ) ==  0 ) &&  ((*pointer ) ==  NULL  ) )
            { /* cicili#Block3139 */
              free (((void *)count ));
              free (((void *)pointer ));
              (*this ) = Gone_BTree_int_User ();
            }
          else
            {
            if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
              { /* cicili#Block3147 */
                if ((*count ) ==  1 )
                  { /* cicili#Block3150 */
                    free_BTree_int_User (pointer );
                    (*count ) = 0;
                    free (((void *)count ));
                    (*pointer ) = NULL ;
                    free (((void *)pointer ));
                    (*this ) = Gone_BTree_int_User ();
                  }
                else
                  (--(*count ));
              }
              }        }
      else
        { /* cicili#Let3160 */
          // ----------
          ;
          ({ /* cicili#Let3162 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Gone_t  ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block3167 */
              }
          });
        }
    });
  }
}
const Rc_BTree_int_User__H_Table * const get_Rc_BTree_int_User__H_Table () {
  static const Rc_BTree_int_User__H_Table table  = { free_Rc_BTree_int_User , new_Rc_BTree_int_User , clone_Rc_BTree_int_User , take_Rc_BTree_int_User , get_Rc_BTree_int_User };
  return (&table );
}
Rc_BTree_int_User __h_Hold_BTree_int_User (BTree_int_User * pointer , int * count , size_t address ) {
  { /* cicili#Let3178 */
    Rc_BTree_int_User instance  = ((Rc_BTree_int_User){ get_Rc_BTree_int_User__H_Table (), __h_Hold_t , .__h_data.Hold = { pointer , count , address }});
    // ----------
    return instance ;
  }
}
Rc_BTree_int_User Gone_BTree_int_User () {
  { /* cicili#Let3183 */
    Rc_BTree_int_User instance  = ((Rc_BTree_int_User){ get_Rc_BTree_int_User__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Rc_BTree_int_User__H_IMPL__ */ 
#ifndef __Maybe_Rc_BTree_int_User__H_IMPL__
#define __Maybe_Rc_BTree_int_User__H_IMPL__
void free_Maybe_Rc_BTree_int_User (Maybe_Rc_BTree_int_User * this ) {
}
const Maybe_Rc_BTree_int_User__H_Table * const get_Maybe_Rc_BTree_int_User__H_Table () {
  static const Maybe_Rc_BTree_int_User__H_Table table  = { free_Maybe_Rc_BTree_int_User };
  return (&table );
}
Maybe_Rc_BTree_int_User Just_Rc_BTree_int_User (Rc_BTree_int_User value ) {
  { /* cicili#Let3201 */
    Maybe_Rc_BTree_int_User instance  = ((Maybe_Rc_BTree_int_User){ get_Maybe_Rc_BTree_int_User__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_Rc_BTree_int_User Nothing_Rc_BTree_int_User () {
  { /* cicili#Let3206 */
    Maybe_Rc_BTree_int_User instance  = ((Maybe_Rc_BTree_int_User){ get_Maybe_Rc_BTree_int_User__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_Rc_BTree_int_User__H_IMPL__ */ 
#ifndef __List_Rc_BTree_int_User__H_IMPL__
#define __List_Rc_BTree_int_User__H_IMPL__
Rc_BTree_int_User * toArray_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , Rc_BTree_int_User term ) {
  Rc_BTree_int_User * array (List_Rc_BTree_int_User list , int count ) {
    return ({ /* cicili#Let3216 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let3218 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3219 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3221 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3226 */
              ({ /* cicili#Let3228 */
                Rc_BTree_int_User * arr  = array (tail , (count  +  1 ));
                // ----------
                arr [count ] = head ;
                arr ;
              });
            }) : ({ /* cicili#Let3232 */
              // ----------
              ;
              ({ /* cicili#Progn3234 */
                ({ /* cicili#Let3236 */
                  Rc_BTree_int_User * arr  = calloc (count , sizeof(Rc_BTree_int_User));
                  // ----------
                  arr [(count  -  1 )] = term ;
                  arr ;
                });
              });
            }));
        });
      });
  }
  return array (list , 0);
}
List_Rc_BTree_int_User wrap_List_Rc_BTree_int_User (const Rc_BTree_int_User item ) {
  return Cons_Rc_BTree_int_User (item , Nil_Rc_BTree_int_User ());
}
List_Rc_BTree_int_User pure_List_Rc_BTree_int_User (const Rc_BTree_int_User * buf , int len ) {
  return (((buf  ==  NULL  )) ? Nil_Rc_BTree_int_User () : ({ /* cicili#Let3247 */
        Rc_BTree_int_User item  = (*buf );
        // ----------
        (((len  ==  0 )) ? Nil_Rc_BTree_int_User () : Cons_Rc_BTree_int_User (item , pure_List_Rc_BTree_int_User ((++buf ), (--len ))));
      }));
}
int show_List_Rc_BTree_int_User (CFile file , List_Rc_BTree_int_User list ) {
  return ({ /* cicili#Let3257 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let3259 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3260 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn3262 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3267 */
            (({ /* cicili#Let3271 */
                // ----------
                ;
                ({ /* cicili#Let3273 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3277 */
                      (({ /* cicili#Let3285 */
                          __auto_type match3284  = get_Rc_BTree_int_User (head );
                          typeof((((match3284 . __h_data ). Just ). __h_0_mem )) child ;
                          // ----------
                          ;
                          ({ /* cicili#Let3288 */
                            bool __h_case_result  = (true  &&  (((match3284 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3289 */
                                  (child  =  (((match3284 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn3294 */
                                show_BTree_int_User (file , child );
                              }) : ({ /* cicili#Let3299 */
                                // ----------
                                ;
                                ({ /* cicili#Progn3301 */
                                  0;
                                });
                              }));
                          });
                        }) +  fprintf (file , "%s", " ") );
                    }) : ({ /* cicili#Let3305 */
                      // ----------
                      ;
                      ({ /* cicili#Progn3307 */
                        ({ /* cicili#Let3315 */
                          __auto_type match3314  = get_Rc_BTree_int_User (head );
                          typeof((((match3314 . __h_data ). Just ). __h_0_mem )) child ;
                          // ----------
                          ;
                          ({ /* cicili#Let3318 */
                            bool __h_case_result  = (true  &&  (((match3314 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3319 */
                                  (child  =  (((match3314 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn3324 */
                                show_BTree_int_User (file , child );
                              }) : ({ /* cicili#Let3329 */
                                // ----------
                                ;
                                ({ /* cicili#Progn3331 */
                                  0;
                                });
                              }));
                          });
                        });
                      });
                    }));
                });
              }) +  show_List_Rc_BTree_int_User (file , tail ) );
          }) : ({ /* cicili#Let3336 */
            // ----------
            ;
            ({ /* cicili#Progn3338 */
              0;
            });
          }));
      });
    });
}
List_Rc_BTree_int_User copy_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
  return ({ /* cicili#Let3344 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let3346 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3347 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn3349 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3354 */
            Cons_Rc_BTree_int_User (head , copy_List_Rc_BTree_int_User (tail ));
          }) : ({ /* cicili#Let3360 */
            // ----------
            ;
            ({ /* cicili#Progn3362 */
              Nil_Rc_BTree_int_User ();
            });
          }));
      });
    });
}
List_Rc_BTree_int_User replaceAt_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , Rc_BTree_int_User item , int index ) {
  return ({ /* cicili#Let3369 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let3371 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3372 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3374 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3379 */
            Cons_Rc_BTree_int_User (head , replaceAt_List_Rc_BTree_int_User (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let3385 */
            // ----------
            ;
            ({ /* cicili#Progn3387 */
              ({ /* cicili#Let3391 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let3393 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3394 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3399 */
                      Cons_Rc_BTree_int_User (item , copy_List_Rc_BTree_int_User (taill ));
                    }) : ({ /* cicili#Let3405 */
                      // ----------
                      ;
                      ({ /* cicili#Progn3407 */
                        Nil_Rc_BTree_int_User ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_Rc_BTree_int_User deleteAt_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , int index ) {
  return ({ /* cicili#Let3414 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let3416 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3417 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3419 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3424 */
            Cons_Rc_BTree_int_User (head , deleteAt_List_Rc_BTree_int_User (tail , (index  -  1 )));
          }) : ({ /* cicili#Let3430 */
            // ----------
            ;
            ({ /* cicili#Progn3432 */
              ({ /* cicili#Let3436 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let3438 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3439 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3444 */
                      copy_List_Rc_BTree_int_User (taill );
                    }) : ({ /* cicili#Let3449 */
                      // ----------
                      ;
                      ({ /* cicili#Progn3451 */
                        Nil_Rc_BTree_int_User ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_Rc_BTree_int_User insertAt_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , Rc_BTree_int_User item , int index ) {
  return ({ /* cicili#Let3458 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let3460 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3461 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3463 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3468 */
            Cons_Rc_BTree_int_User (head , insertAt_List_Rc_BTree_int_User (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let3474 */
            // ----------
            ;
            ({ /* cicili#Progn3476 */
              Cons_Rc_BTree_int_User (item , copy_List_Rc_BTree_int_User (list ));
            });
          }));
      });
    });
}
List_Rc_BTree_int_User replace_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , Rc_BTree_int_User item , List_Rc_BTree_int_User aimed ) {
  return ({ /* cicili#Let3484 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let3486 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3487 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3489 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3494 */
            Cons_Rc_BTree_int_User (head , replace_List_Rc_BTree_int_User (tail , item , aimed ));
          }) : ({ /* cicili#Let3500 */
            // ----------
            ;
            ({ /* cicili#Progn3502 */
              ({ /* cicili#Let3506 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let3508 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3509 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3514 */
                      Cons_Rc_BTree_int_User (item , copy_List_Rc_BTree_int_User (taill ));
                    }) : ({ /* cicili#Let3520 */
                      // ----------
                      ;
                      ({ /* cicili#Progn3522 */
                        Nil_Rc_BTree_int_User ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_Rc_BTree_int_User delete_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , List_Rc_BTree_int_User aimed ) {
  return ({ /* cicili#Let3529 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let3531 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3532 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3534 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3539 */
            Cons_Rc_BTree_int_User (head , delete_List_Rc_BTree_int_User (tail , aimed ));
          }) : ({ /* cicili#Let3545 */
            // ----------
            ;
            ({ /* cicili#Progn3547 */
              ({ /* cicili#Let3551 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let3553 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3554 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3559 */
                      copy_List_Rc_BTree_int_User (taill );
                    }) : ({ /* cicili#Let3564 */
                      // ----------
                      ;
                      ({ /* cicili#Progn3566 */
                        Nil_Rc_BTree_int_User ();
                      });
                    }));
                });
              });
            });
          }));
      });
    });
}
List_Rc_BTree_int_User insert_List_Rc_BTree_int_User (List_Rc_BTree_int_User llist , Rc_BTree_int_User item , List_Rc_BTree_int_User rlist ) {
  return ({ /* cicili#Let3573 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let3575 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3576 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3578 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (llist  !=  rlist  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3583 */
            Cons_Rc_BTree_int_User (head , insert_List_Rc_BTree_int_User (tail , item , rlist ));
          }) : ({ /* cicili#Let3589 */
            // ----------
            ;
            ({ /* cicili#Progn3591 */
              Cons_Rc_BTree_int_User (item , copy_List_Rc_BTree_int_User (rlist ));
            });
          }));
      });
    });
}
List_Rc_BTree_int_User reverse_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
  List_Rc_BTree_int_User _reverse (List_Rc_BTree_int_User list , List_Rc_BTree_int_User rlist ) {
    return ({ /* cicili#Let3600 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let3602 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3603 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3605 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3610 */
              _reverse (tail , Cons_Rc_BTree_int_User (head , rlist ));
            }) : ({ /* cicili#Let3615 */
              // ----------
              ;
              ({ /* cicili#Progn3617 */
                rlist ;
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let3621 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let3623 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3624 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn3626 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3631 */
            _reverse (tail , Cons_Rc_BTree_int_User (head , Nil_Rc_BTree_int_User ()));
          }) : ({ /* cicili#Let3637 */
            // ----------
            ;
            ({ /* cicili#Progn3639 */
              list ;
            });
          }));
      });
    });
}
List_Rc_BTree_int_User append_List_Rc_BTree_int_User (List_Rc_BTree_int_User llist , List_Rc_BTree_int_User rlist ) {
  return ({ /* cicili#Let3645 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let3647 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3648 */
                (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn3650 */
                (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3655 */
            Cons_Rc_BTree_int_User (head , append_List_Rc_BTree_int_User (tail , rlist ));
          }) : ({ /* cicili#Let3661 */
            // ----------
            ;
            ({ /* cicili#Progn3663 */
              copy_List_Rc_BTree_int_User (rlist );
            });
          }));
      });
    });
}
List_Rc_BTree_int_User push_List_Rc_BTree_int_User (Rc_BTree_int_User item , List_Rc_BTree_int_User list ) {
  return Cons_Rc_BTree_int_User (item , copy_List_Rc_BTree_int_User (list ));
}
List_Rc_BTree_int_User take_List_Rc_BTree_int_User (int len , List_Rc_BTree_int_User list ) {
  return (((len  <=  0 )) ? Nil_Rc_BTree_int_User () : ({ /* cicili#Let3676 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let3678 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3679 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3681 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3686 */
              Cons_Rc_BTree_int_User (head , take_List_Rc_BTree_int_User ((--len ), tail ));
            }) : ({ /* cicili#Let3692 */
              // ----------
              ;
              ({ /* cicili#Progn3694 */
                Nil_Rc_BTree_int_User ();
              });
            }));
        });
      }));
}
List_Rc_BTree_int_User last_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
  return ({ /* cicili#Let3701 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let3703 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3704 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3709 */
            ({ /* cicili#Let3713 */
              // ----------
              ;
              ({ /* cicili#Let3715 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn3719 */
                    copy_List_Rc_BTree_int_User (list );
                  }) : ({ /* cicili#Let3724 */
                    // ----------
                    ;
                    ({ /* cicili#Progn3726 */
                      last_List_Rc_BTree_int_User (tail );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let3731 */
            // ----------
            ;
            ({ /* cicili#Progn3733 */
              Nil_Rc_BTree_int_User ();
            });
          }));
      });
    });
}
List_Rc_BTree_int_User init_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
  return ({ /* cicili#Let3741 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let3743 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3744 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3746 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3751 */
            Cons_Rc_BTree_int_User (head , init_List_Rc_BTree_int_User (tail ));
          }) : ({ /* cicili#Let3757 */
            // ----------
            ;
            ({ /* cicili#Progn3759 */
              Nil_Rc_BTree_int_User ();
            });
          }));
      });
    });
}
int hasLen_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , int desired ) {
  return ({ /* cicili#Let3766 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let3768 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3769 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3774 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_Rc_BTree_int_User (tail , (--desired )) ));
          }) : ({ /* cicili#Let3780 */
            // ----------
            ;
            ({ /* cicili#Progn3782 */
              0;
            });
          }));
      });
    });
}
int len_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
  return ({ /* cicili#Let3788 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let3790 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3791 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3796 */
            (1 +  len_List_Rc_BTree_int_User (tail ) );
          }) : ({ /* cicili#Let3801 */
            // ----------
            ;
            ({ /* cicili#Progn3803 */
              0;
            });
          }));
      });
    });
}
List_Rc_BTree_int_User tail_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
  return drop_List_Rc_BTree_int_User (1, list );
}
List_Rc_BTree_int_User drop_List_Rc_BTree_int_User (int len , List_Rc_BTree_int_User list ) {
  return (((len  <=  0 )) ? copy_List_Rc_BTree_int_User (list ) : ({ /* cicili#Let3814 */
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let3816 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3817 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3822 */
              drop_List_Rc_BTree_int_User ((--len ), tail );
            }) : ({ /* cicili#Let3827 */
              // ----------
              ;
              ({ /* cicili#Progn3829 */
                Nil_Rc_BTree_int_User ();
              });
            }));
        });
      }));
}
Maybe_Rc_BTree_int_User head_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
  return ({ /* cicili#Let3837 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      // ----------
      ;
      ({ /* cicili#Let3839 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3840 */
              (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3845 */
            Just_Rc_BTree_int_User (head );
          }) : ({ /* cicili#Let3850 */
            // ----------
            ;
            ({ /* cicili#Progn3852 */
              Nothing_Rc_BTree_int_User ();
            });
          }));
      });
    });
}
List_Rc_BTree_int_User nthcdr_List_Rc_BTree_int_User (int index , List_Rc_BTree_int_User list ) {
  return ({ /* cicili#Let3859 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let3861 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3862 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3867 */
            nthcdr_List_Rc_BTree_int_User ((--index ), tail );
          }) : ({ /* cicili#Let3872 */
            // ----------
            ;
            ({ /* cicili#Progn3874 */
              list ;
            });
          }));
      });
    });
}
Maybe_Rc_BTree_int_User nth_List_Rc_BTree_int_User (int index , List_Rc_BTree_int_User list ) {
  return ({ /* cicili#Let3881 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let3883 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3884 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn3886 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3891 */
            (((index  ==  0 )) ? Just_Rc_BTree_int_User (head ) : (((index  <  0 )) ? Nothing_Rc_BTree_int_User () : nth_List_Rc_BTree_int_User ((--index ), tail )));
          }) : ({ /* cicili#Let3900 */
            // ----------
            ;
            ({ /* cicili#Progn3902 */
              Nothing_Rc_BTree_int_User ();
            });
          }));
      });
    });
}
void free_List_Rc_BTree_int_User (List_Rc_BTree_int_User * this_ptr ) {
  { /* cicili#Let3907 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let3911 */
      typeof((((this -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let3913 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3914 */
              (tail  =  (((this -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block3920 */
            { /* cicili#Block3922 */
              free (this );
              free_List_Rc_BTree_int_User ((&tail ));
            }
          }
        else
          { /* cicili#Let3930 */
            // ----------
            ;
            ({ /* cicili#Let3932 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Nil_t  ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block3937 */
                  { /* cicili#Block3939 */
                    free (this );
                  }
                }
            });
          }
      });
    }
  }
}
List_Rc_BTree_int_User__H_Table * const get_List_Rc_BTree_int_User__H_Table () {
  static List_Rc_BTree_int_User__H_Table table  = { free_List_Rc_BTree_int_User , toArray_List_Rc_BTree_int_User , wrap_List_Rc_BTree_int_User , pure_List_Rc_BTree_int_User , show_List_Rc_BTree_int_User , copy_List_Rc_BTree_int_User , replaceAt_List_Rc_BTree_int_User , deleteAt_List_Rc_BTree_int_User , insertAt_List_Rc_BTree_int_User , replace_List_Rc_BTree_int_User , delete_List_Rc_BTree_int_User , insert_List_Rc_BTree_int_User , reverse_List_Rc_BTree_int_User , append_List_Rc_BTree_int_User , push_List_Rc_BTree_int_User , take_List_Rc_BTree_int_User , last_List_Rc_BTree_int_User , init_List_Rc_BTree_int_User , hasLen_List_Rc_BTree_int_User , len_List_Rc_BTree_int_User , tail_List_Rc_BTree_int_User , drop_List_Rc_BTree_int_User , head_List_Rc_BTree_int_User , nthcdr_List_Rc_BTree_int_User , nth_List_Rc_BTree_int_User };
  return (&table );
}
List_Rc_BTree_int_User Cons_Rc_BTree_int_User (Rc_BTree_int_User head , List_Rc_BTree_int_User tail ) {
  { /* cicili#Let3950 */
    List_Rc_BTree_int_User instance  = malloc (sizeof(class_List_Rc_BTree_int_User));
    // ----------
    (*instance ) = ((class_List_Rc_BTree_int_User){ get_List_Rc_BTree_int_User__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
List_Rc_BTree_int_User Nil_Rc_BTree_int_User () {
  { /* cicili#Let3956 */
    List_Rc_BTree_int_User instance  = malloc (sizeof(class_List_Rc_BTree_int_User));
    // ----------
    (*instance ) = ((class_List_Rc_BTree_int_User){ get_List_Rc_BTree_int_User__H_Table (), __h___t });
    return instance ;
  }
}
#endif /* __List_Rc_BTree_int_User__H_IMPL__ */ 
#ifndef __Maybe_List_Rc_BTree_int_User__H_IMPL__
#define __Maybe_List_Rc_BTree_int_User__H_IMPL__
void free_Maybe_List_Rc_BTree_int_User (Maybe_List_Rc_BTree_int_User * this ) {
}
const Maybe_List_Rc_BTree_int_User__H_Table * const get_Maybe_List_Rc_BTree_int_User__H_Table () {
  static const Maybe_List_Rc_BTree_int_User__H_Table table  = { free_Maybe_List_Rc_BTree_int_User };
  return (&table );
}
Maybe_List_Rc_BTree_int_User Just_List_Rc_BTree_int_User (List_Rc_BTree_int_User value ) {
  { /* cicili#Let3973 */
    Maybe_List_Rc_BTree_int_User instance  = ((Maybe_List_Rc_BTree_int_User){ get_Maybe_List_Rc_BTree_int_User__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_Rc_BTree_int_User Nothing_List_Rc_BTree_int_User () {
  { /* cicili#Let3978 */
    Maybe_List_Rc_BTree_int_User instance  = ((Maybe_List_Rc_BTree_int_User){ get_Maybe_List_Rc_BTree_int_User__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_Rc_BTree_int_User__H_IMPL__ */ 
#ifndef __Functor_List_Rc_BTree_int_User__H_IMPL__
#define __Functor_List_Rc_BTree_int_User__H_IMPL__
List_Rc_BTree_int_User fmap_Functor_List_Rc_BTree_int_User (Rc_BTree_int_User_to_Rc_BTree_int_User_t a_b , List_Rc_BTree_int_User input ) {
  return ({ /* cicili#Let3992 */
      typeof((((input -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((input -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let3994 */
        bool __h_case_result  = (true  &&  (((input -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3995 */
                (head  =  (((input -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn3997 */
                (tail  =  (((input -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4002 */
            Cons_Rc_BTree_int_User (a_b (head ), fmap_Functor_List_Rc_BTree_int_User (a_b , tail ));
          }) : ({ /* cicili#Let4009 */
            // ----------
            ;
            ({ /* cicili#Progn4011 */
              Nil_Rc_BTree_int_User ();
            });
          }));
      });
    });
}
void free_Functor_List_Rc_BTree_int_User (Functor_List_Rc_BTree_int_User * this ) {
}
const Functor_List_Rc_BTree_int_User__H_Table * const get_Functor_List_Rc_BTree_int_User__H_Table () {
  static const Functor_List_Rc_BTree_int_User__H_Table table  = { free_Functor_List_Rc_BTree_int_User , fmap_Functor_List_Rc_BTree_int_User };
  return (&table );
}
Functor_List_Rc_BTree_int_User Functor_List_Rc_BTree_int_User_ctor () {
  { /* cicili#Let4025 */
    Functor_List_Rc_BTree_int_User instance  = ((Functor_List_Rc_BTree_int_User){ get_Functor_List_Rc_BTree_int_User__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Functor_List_Rc_BTree_int_User__H_IMPL__ */ 
Functor_List_Rc_BTree_int_User get_Functor_List_Rc_BTree_int_User () {
  return Functor_List_Rc_BTree_int_User_ctor ();
}
size_t U_BTree_int_User  = 3;
size_t L_BTree_int_User  = 2;
BTree_int_User split_BTree_int_User (BTree_int_User tree ) {
  return ({ /* cicili#Let4043 */
      typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      ;
      ({ /* cicili#Let4045 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn4046 */
                (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn4048 */
                (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4053 */
            (((len_List_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? ({ /* cicili#Let4059 */
                __auto_type tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4061 */
                  __auto_type tree  = tree ;
                  // ----------
                  ((void)(tree -> __h_table -> freeClass ));
                  tree ;
                });
                // ----------
                Branch_BTree_int_User (wrap_List_BTree_int_User_pair_t (({ /* cicili#Let4069 */
                    __auto_type match4068  = nth_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                    typeof((((match4068 . __h_data ). Just ). __h_0_mem )) nitem ;
                    // ----------
                    ;
                    ({ /* cicili#Let4073 */
                      bool __h_case_result  = (true  &&  (((match4068 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4074 */
                            (nitem  =  (((match4068 . __h_data ). Just ). __h_0_mem ) );
                            true ;
                          }) ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* cicili#Progn4079 */
                          nitem ;
                        }) : ({ /* cicili#Let4083 */
                          // ----------
                          ;
                          ({ /* cicili#Progn4085 */
                            ((BTree_int_User_pair_t){ });
                          });
                        }));
                    });
                  })), pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Internal_BTree_int_User (take_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ), ({ /* cicili#Let4096 */
                      __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4098 */
                        __auto_type r1  = take_List_Rc_BTree_int_User (L_BTree_int_User , children );
                        // ----------
                        ((void)(r1 -> __h_table -> freeClass ));
                        r1 ;
                      });
                      // ----------
                      fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4108 */
                          Rc_BTree_int_User __ciciliC_4107 (Rc_BTree_int_User __h_value ) {
                            return clone_Rc_BTree_int_User (__h_value );
                          }
                          __ciciliC_4107 ;
                        }), r1 );
                    }))), new_Rc_BTree_int_User (Internal_BTree_int_User (drop_List_BTree_int_User_pair_t (L_BTree_int_User , items ), ({ /* cicili#Let4119 */
                      __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4121 */
                        __auto_type r1  = drop_List_Rc_BTree_int_User (L_BTree_int_User , children );
                        // ----------
                        ((void)(r1 -> __h_table -> freeClass ));
                        r1 ;
                      });
                      // ----------
                      fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4131 */
                          Rc_BTree_int_User __ciciliC_4130 (Rc_BTree_int_User __h_value ) {
                            return clone_Rc_BTree_int_User (__h_value );
                          }
                          __ciciliC_4130 ;
                        }), r1 );
                    })))}), 2));
              }) : tree );
          }) : ({ /* cicili#Let4138 */
            typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            ;
            ({ /* cicili#Let4140 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn4141 */
                      (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn4143 */
                      (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn4148 */
                  (((len_List_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? ({ /* cicili#Let4154 */
                      __auto_type tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4156 */
                        __auto_type tree  = tree ;
                        // ----------
                        ((void)(tree -> __h_table -> freeClass ));
                        tree ;
                      });
                      // ----------
                      Branch_BTree_int_User (wrap_List_BTree_int_User_pair_t (({ /* cicili#Let4164 */
                          __auto_type match4163  = nth_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                          typeof((((match4163 . __h_data ). Just ). __h_0_mem )) nitem ;
                          // ----------
                          ;
                          ({ /* cicili#Let4168 */
                            bool __h_case_result  = (true  &&  (((match4163 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4169 */
                                  (nitem  =  (((match4163 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn4174 */
                                nitem ;
                              }) : ({ /* cicili#Let4178 */
                                // ----------
                                ;
                                ({ /* cicili#Progn4180 */
                                  ((BTree_int_User_pair_t){ });
                                });
                              }));
                          });
                        })), pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Internal_BTree_int_User (take_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ), ({ /* cicili#Let4191 */
                            __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4193 */
                              __auto_type r1  = take_List_Rc_BTree_int_User (L_BTree_int_User , children );
                              // ----------
                              ((void)(r1 -> __h_table -> freeClass ));
                              r1 ;
                            });
                            // ----------
                            fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4203 */
                                Rc_BTree_int_User __ciciliC_4202 (Rc_BTree_int_User __h_value ) {
                                  return clone_Rc_BTree_int_User (__h_value );
                                }
                                __ciciliC_4202 ;
                              }), r1 );
                          }))), new_Rc_BTree_int_User (Internal_BTree_int_User (drop_List_BTree_int_User_pair_t (L_BTree_int_User , items ), ({ /* cicili#Let4214 */
                            __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4216 */
                              __auto_type r1  = drop_List_Rc_BTree_int_User (L_BTree_int_User , children );
                              // ----------
                              ((void)(r1 -> __h_table -> freeClass ));
                              r1 ;
                            });
                            // ----------
                            fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4226 */
                                Rc_BTree_int_User __ciciliC_4225 (Rc_BTree_int_User __h_value ) {
                                  return clone_Rc_BTree_int_User (__h_value );
                                }
                                __ciciliC_4225 ;
                              }), r1 );
                          })))}), 2));
                    }) : tree );
                }) : ({ /* cicili#Let4233 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  ;
                  ({ /* cicili#Let4235 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn4236 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn4241 */
                        (((len_List_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? ({ /* cicili#Let4247 */
                            __auto_type tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4249 */
                              __auto_type tree  = tree ;
                              // ----------
                              ((void)(tree -> __h_table -> freeClass ));
                              tree ;
                            });
                            // ----------
                            Branch_BTree_int_User (wrap_List_BTree_int_User_pair_t (({ /* cicili#Let4257 */
                                __auto_type match4256  = nth_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                                typeof((((match4256 . __h_data ). Just ). __h_0_mem )) nitem ;
                                // ----------
                                ;
                                ({ /* cicili#Let4261 */
                                  bool __h_case_result  = (true  &&  (((match4256 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4262 */
                                        (nitem  =  (((match4256 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn4267 */
                                      nitem ;
                                    }) : ({ /* cicili#Let4271 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn4273 */
                                        ((BTree_int_User_pair_t){ });
                                      });
                                    }));
                                });
                              })), pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Leaf_BTree_int_User (take_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ))), new_Rc_BTree_int_User (Leaf_BTree_int_User (drop_List_BTree_int_User_pair_t (L_BTree_int_User , items )))}), 2));
                          }) : tree );
                      }) : ({ /* cicili#Let4290 */
                        // ----------
                        ;
                        ({ /* cicili#Progn4292 */
                          tree ;
                        });
                      }));
                  });
                }));
            });
          }));
      });
    });
}
BTree_int_User splitForDelete_BTree_int_User (BTree_int_User tree ) {
  return ({ /* cicili#Let4298 */
      typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      ;
      ({ /* cicili#Let4300 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn4301 */
                (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn4303 */
                (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4308 */
            (((len_List_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? Branch_BTree_int_User (wrap_List_BTree_int_User_pair_t (({ /* cicili#Let4318 */
                __auto_type match4317  = nth_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                typeof((((match4317 . __h_data ). Just ). __h_0_mem )) nitem ;
                // ----------
                ;
                ({ /* cicili#Let4322 */
                  bool __h_case_result  = (true  &&  (((match4317 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4323 */
                        (nitem  =  (((match4317 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn4328 */
                      nitem ;
                    }) : ({ /* cicili#Let4332 */
                      // ----------
                      ;
                      ({ /* cicili#Progn4334 */
                        ((BTree_int_User_pair_t){ });
                      });
                    }));
                });
              })), pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Internal_BTree_int_User (take_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ), ({ /* cicili#Let4345 */
                  __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4347 */
                    __auto_type r1  = take_List_Rc_BTree_int_User (L_BTree_int_User , children );
                    // ----------
                    ((void)(r1 -> __h_table -> freeClass ));
                    r1 ;
                  });
                  // ----------
                  fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4357 */
                      Rc_BTree_int_User __ciciliC_4356 (Rc_BTree_int_User __h_value ) {
                        return clone_Rc_BTree_int_User (__h_value );
                      }
                      __ciciliC_4356 ;
                    }), r1 );
                }))), new_Rc_BTree_int_User (Internal_BTree_int_User (drop_List_BTree_int_User_pair_t (L_BTree_int_User , items ), ({ /* cicili#Let4368 */
                  __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4370 */
                    __auto_type r1  = drop_List_Rc_BTree_int_User (L_BTree_int_User , children );
                    // ----------
                    ((void)(r1 -> __h_table -> freeClass ));
                    r1 ;
                  });
                  // ----------
                  fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4380 */
                      Rc_BTree_int_User __ciciliC_4379 (Rc_BTree_int_User __h_value ) {
                        return clone_Rc_BTree_int_User (__h_value );
                      }
                      __ciciliC_4379 ;
                    }), r1 );
                })))}), 2)) : tree );
          }) : ({ /* cicili#Let4387 */
            typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            ;
            ({ /* cicili#Let4389 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn4390 */
                      (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn4392 */
                      (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn4397 */
                  (((len_List_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? Branch_BTree_int_User (wrap_List_BTree_int_User_pair_t (({ /* cicili#Let4407 */
                      __auto_type match4406  = nth_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                      typeof((((match4406 . __h_data ). Just ). __h_0_mem )) nitem ;
                      // ----------
                      ;
                      ({ /* cicili#Let4411 */
                        bool __h_case_result  = (true  &&  (((match4406 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4412 */
                              (nitem  =  (((match4406 . __h_data ). Just ). __h_0_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn4417 */
                            nitem ;
                          }) : ({ /* cicili#Let4421 */
                            // ----------
                            ;
                            ({ /* cicili#Progn4423 */
                              ((BTree_int_User_pair_t){ });
                            });
                          }));
                      });
                    })), pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Internal_BTree_int_User (take_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ), ({ /* cicili#Let4434 */
                        __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4436 */
                          __auto_type r1  = take_List_Rc_BTree_int_User (L_BTree_int_User , children );
                          // ----------
                          ((void)(r1 -> __h_table -> freeClass ));
                          r1 ;
                        });
                        // ----------
                        fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4446 */
                            Rc_BTree_int_User __ciciliC_4445 (Rc_BTree_int_User __h_value ) {
                              return clone_Rc_BTree_int_User (__h_value );
                            }
                            __ciciliC_4445 ;
                          }), r1 );
                      }))), new_Rc_BTree_int_User (Internal_BTree_int_User (drop_List_BTree_int_User_pair_t (L_BTree_int_User , items ), ({ /* cicili#Let4457 */
                        __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4459 */
                          __auto_type r1  = drop_List_Rc_BTree_int_User (L_BTree_int_User , children );
                          // ----------
                          ((void)(r1 -> __h_table -> freeClass ));
                          r1 ;
                        });
                        // ----------
                        fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4469 */
                            Rc_BTree_int_User __ciciliC_4468 (Rc_BTree_int_User __h_value ) {
                              return clone_Rc_BTree_int_User (__h_value );
                            }
                            __ciciliC_4468 ;
                          }), r1 );
                      })))}), 2)) : tree );
                }) : ({ /* cicili#Let4476 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  ;
                  ({ /* cicili#Let4478 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn4479 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn4484 */
                        (((len_List_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? Branch_BTree_int_User (wrap_List_BTree_int_User_pair_t (({ /* cicili#Let4494 */
                            __auto_type match4493  = nth_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                            typeof((((match4493 . __h_data ). Just ). __h_0_mem )) nitem ;
                            // ----------
                            ;
                            ({ /* cicili#Let4498 */
                              bool __h_case_result  = (true  &&  (((match4493 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4499 */
                                    (nitem  =  (((match4493 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* cicili#Progn4504 */
                                  nitem ;
                                }) : ({ /* cicili#Let4508 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Progn4510 */
                                    ((BTree_int_User_pair_t){ });
                                  });
                                }));
                            });
                          })), pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Leaf_BTree_int_User (take_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ))), new_Rc_BTree_int_User (Leaf_BTree_int_User (drop_List_BTree_int_User_pair_t (L_BTree_int_User , items )))}), 2)) : tree );
                      }) : ({ /* cicili#Let4527 */
                        // ----------
                        ;
                        ({ /* cicili#Progn4529 */
                          tree ;
                        });
                      }));
                  });
                }));
            });
          }));
      });
    });
}
BTree_int_User mergeUp_BTree_int_User (List_BTree_int_User_pair_t items , List_Rc_BTree_int_User children , size_t pitem_index , size_t pchild_index , List_BTree_int_User_pair_t left_items , List_Rc_BTree_int_User left_children , List_BTree_int_User_pair_t right_items , List_Rc_BTree_int_User right_children ) {
  return ({ /* cicili#Let4536 */
      __auto_type merged  = Internal_BTree_int_User (append_List_BTree_int_User_pair_t (left_items , right_items ), ({ /* cicili#Let4541 */
        __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4543 */
          __auto_type r1  = append_List_Rc_BTree_int_User (left_children , right_children );
          // ----------
          ((void)(r1 -> __h_table -> freeClass ));
          r1 ;
        });
        // ----------
        fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4552 */
            Rc_BTree_int_User __ciciliC_4551 (Rc_BTree_int_User __h_value ) {
              return clone_Rc_BTree_int_User (__h_value );
            }
            __ciciliC_4551 ;
          }), r1 );
      }));
      // ----------
      ({ /* cicili#Let4561 */
        __auto_type tmp_child  = splitForDelete_BTree_int_User (merged );
        typeof((((tmp_child -> __h_data ). Branch ). __h_0_mem )) __h_match4559_0_arg ;
        typeof((((__h_match4559_0_arg -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((tmp_child -> __h_data ). Branch ). __h_1_mem )) tmp_children ;
        // ----------
        ;
        ({ /* cicili#Let4564 */
          bool __h_case_result  = (true  &&  (((tmp_child -> __h_ctor ) ==  __h_Branch_t  ) &&  ((({ /* cicili#Progn4565 */
                    (__h_match4559_0_arg  =  (((tmp_child -> __h_data ). Branch ). __h_0_mem ) );
                    true ;
                  }) &&  (true  &&  (((__h_match4559_0_arg -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn4567 */
                        (head  =  (((__h_match4559_0_arg -> __h_data ). Cons ). __h_0_mem ) );
                        true ;
                      }) ) ) ) &&  ({ /* cicili#Progn4569 */
                  (tmp_children  =  (((tmp_child -> __h_data ). Branch ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn4574 */
              ({ /* cicili#Let4577 */
                __auto_type merged  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4579 */
                  __auto_type merged  = merged ;
                  // ----------
                  ((void)(merged -> __h_table -> freeClass ));
                  merged ;
                });
                __auto_type tmp_child  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4582 */
                  __auto_type tmp_child  = tmp_child ;
                  // ----------
                  ((void)(tmp_child -> __h_table -> freeClass ));
                  tmp_child ;
                });
                // ----------
                Internal_BTree_int_User (replaceAt_List_BTree_int_User_pair_t (items , head , pitem_index ), ({ /* cicili#Let4589 */
                    __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4591 */
                      __auto_type r1  = deleteAt_List_Rc_BTree_int_User (children , pchild_index );
                      // ----------
                      ((void)(r1 -> __h_table -> freeClass ));
                      r1 ;
                    });
                    __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4595 */
                      __auto_type r2  = take_List_Rc_BTree_int_User (pchild_index , r1 );
                      // ----------
                      ((void)(r2 -> __h_table -> freeClass ));
                      r2 ;
                    });
                    __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4599 */
                      __auto_type r3  = drop_List_Rc_BTree_int_User ((pchild_index  +  1 ), r1 );
                      // ----------
                      ((void)(r3 -> __h_table -> freeClass ));
                      r3 ;
                    });
                    __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4603 */
                      __auto_type r4  = append_List_Rc_BTree_int_User (tmp_children , r3 );
                      // ----------
                      ((void)(r4 -> __h_table -> freeClass ));
                      r4 ;
                    });
                    __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4607 */
                      __auto_type r5  = append_List_Rc_BTree_int_User (r2 , r4 );
                      // ----------
                      ((void)(r5 -> __h_table -> freeClass ));
                      r5 ;
                    });
                    // ----------
                    fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4616 */
                        Rc_BTree_int_User __ciciliC_4615 (Rc_BTree_int_User __h_value ) {
                          return clone_Rc_BTree_int_User (__h_value );
                        }
                        __ciciliC_4615 ;
                      }), r5 );
                  }));
              });
            }) : ({ /* cicili#Let4623 */
              // ----------
              ;
              ({ /* cicili#Let4625 */
                bool __h_case_result  = (true  &&  ((tmp_child -> __h_ctor ) ==  __h_Internal_t  ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn4629 */
                    Internal_BTree_int_User (deleteAt_List_BTree_int_User_pair_t (items , pitem_index ), ({ /* cicili#Let4635 */
                        __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4637 */
                          __auto_type r1  = deleteAt_List_Rc_BTree_int_User (children , pchild_index );
                          // ----------
                          ((void)(r1 -> __h_table -> freeClass ));
                          r1 ;
                        });
                        __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let4641 */
                          __auto_type r2  = new_Rc_BTree_int_User (merged );
                          // ----------
                          ((void)((r2 . __h_table )-> freeData ));
                          r2 ;
                        });
                        __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4645 */
                          __auto_type r3  = replaceAt_List_Rc_BTree_int_User (r1 , r2 , pchild_index );
                          // ----------
                          ((void)(r3 -> __h_table -> freeClass ));
                          r3 ;
                        });
                        // ----------
                        fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4654 */
                            Rc_BTree_int_User __ciciliC_4653 (Rc_BTree_int_User __h_value ) {
                              return clone_Rc_BTree_int_User (__h_value );
                            }
                            __ciciliC_4653 ;
                          }), r3 );
                      }));
                  }) : ({ /* cicili#Let4661 */
                    // ----------
                    ;
                    ({ /* cicili#Progn4663 */
                      Leaf_BTree_int_User (Nil_BTree_int_User_pair_t ());
                    });
                  }));
              });
            }));
        });
      });
    });
}
Either_BTree_int_User_Error_BTree_int_User deleteWithParent_BTree_int_User (Maybe_BTree_int_User wparent , size_t pitem_index , size_t pchild_index , BTree_int_User tree , int skey , void (*callback) (BTree_int_User_pair_t item ));
Either_BTree_int_User_Error_BTree_int_User borrowLeaf_BTree_int_User (List_BTree_int_User_pair_t items , List_Rc_BTree_int_User children , Maybe_List_BTree_int_User_pair_t wleft , List_BTree_int_User_pair_t current , size_t index , BTree_int_User nchild , void (*callback) (BTree_int_User_pair_t item )) {
  Either_BTree_int_User_Error_BTree_int_User borrowRight (List_BTree_int_User_pair_t child_items ) {
    return ({ /* cicili#Let4690 */
        __auto_type match4689  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
        typeof((((match4689 . __h_data ). Just ). __h_0_mem )) right_child_rc ;
        // ----------
        ;
        ({ /* cicili#Let4693 */
          bool __h_case_result  = (true  &&  (((match4689 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4694 */
                (right_child_rc  =  (((match4689 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn4699 */
              ({ /* cicili#Let4702 */
                __auto_type __h_matchbox  = right_child_rc ;
                // ----------
                ({ /* cicili#Let4706 */
                  __auto_type match4705  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                  typeof((((match4705 . __h_data ). Just ). __h_0_mem )) unboxed ;
                  // ----------
                  ;
                  ({ /* cicili#Let4709 */
                    bool __h_case_result  = (true  &&  (((match4705 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4710 */
                          (unboxed  =  (((match4705 . __h_data ). Just ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn4715 */
                        ({ /* cicili#Let4719 */
                          typeof((((unboxed -> __h_data ). Leaf ). __h_0_mem )) right_child_items ;
                          // ----------
                          ;
                          ({ /* cicili#Let4721 */
                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn4722 */
                                  (right_child_items  =  (((unboxed -> __h_data ). Leaf ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn4727 */
                                (((hasLen_List_BTree_int_User_pair_t (right_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let4735 */
                                    __auto_type first  = right_child_items ;
                                    typeof((((first -> __h_data ). Cons ). __h_0_mem )) first_item ;
                                    typeof((((first -> __h_data ). Cons ). __h_1_mem )) tail ;
                                    // ----------
                                    ;
                                    ({ /* cicili#Let4737 */
                                      bool __h_case_result  = (true  &&  (((first -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn4738 */
                                              (first_item  =  (((first -> __h_data ). Cons ). __h_0_mem ) );
                                              true ;
                                            }) &&  ({ /* cicili#Progn4740 */
                                              (tail  =  (((first -> __h_data ). Cons ). __h_1_mem ) );
                                              true ;
                                            }) ) ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn4745 */
                                          Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , first_item , current ), ({ /* cicili#Let4753 */
                                              __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4755 */
                                                __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                                // ----------
                                                ((void)(r1 -> __h_table -> freeClass ));
                                                r1 ;
                                              });
                                              __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4759 */
                                                __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4765 */
                                                  Rc_BTree_int_User __ciciliC_4764 (Rc_BTree_int_User __h_value ) {
                                                    return clone_Rc_BTree_int_User (__h_value );
                                                  }
                                                  __ciciliC_4764 ;
                                                }), r1 );
                                                // ----------
                                                ((void)(r2 -> __h_table -> freeClass ));
                                                r2 ;
                                              });
                                              __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4772 */
                                                __auto_type r3  = drop_List_Rc_BTree_int_User ((index  +  2 ), children );
                                                // ----------
                                                ((void)(r3 -> __h_table -> freeClass ));
                                                r3 ;
                                              });
                                              __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4776 */
                                                __auto_type r4  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4782 */
                                                  Rc_BTree_int_User __ciciliC_4781 (Rc_BTree_int_User __h_value ) {
                                                    return clone_Rc_BTree_int_User (__h_value );
                                                  }
                                                  __ciciliC_4781 ;
                                                }), r3 );
                                                // ----------
                                                ((void)(r4 -> __h_table -> freeClass ));
                                                r4 ;
                                              });
                                              __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4789 */
                                                __auto_type r5  = take_List_BTree_int_User_pair_t (1, current );
                                                // ----------
                                                ((void)(r5 -> __h_table -> freeClass ));
                                                r5 ;
                                              });
                                              __auto_type r7  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4793 */
                                                __auto_type r7  = pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Leaf_BTree_int_User (append_List_BTree_int_User_pair_t (child_items , r5 ))), new_Rc_BTree_int_User (Leaf_BTree_int_User (copy_List_BTree_int_User_pair_t (tail )))}), 2);
                                                // ----------
                                                ((void)(r7 -> __h_table -> freeClass ));
                                                r7 ;
                                              });
                                              __auto_type r6  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4806 */
                                                __auto_type r6  = append_List_Rc_BTree_int_User (r7 , r4 );
                                                // ----------
                                                ((void)(r6 -> __h_table -> freeClass ));
                                                r6 ;
                                              });
                                              // ----------
                                              append_List_Rc_BTree_int_User (r2 , r6 );
                                            })));
                                        }) : ({ /* cicili#Let4813 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Progn4815 */
                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight R1"));
                                          });
                                        }));
                                    });
                                  }) : ({ /* cicili#Let4822 */
                                    typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
                                    // ----------
                                    ;
                                    ({ /* cicili#Let4824 */
                                      bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn4825 */
                                            (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn4830 */
                                          Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (delete_List_BTree_int_User_pair_t (items , current ), ({ /* cicili#Let4838 */
                                              __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4840 */
                                                __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                                // ----------
                                                ((void)(r1 -> __h_table -> freeClass ));
                                                r1 ;
                                              });
                                              __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4844 */
                                                __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4850 */
                                                  Rc_BTree_int_User __ciciliC_4849 (Rc_BTree_int_User __h_value ) {
                                                    return clone_Rc_BTree_int_User (__h_value );
                                                  }
                                                  __ciciliC_4849 ;
                                                }), r1 );
                                                // ----------
                                                ((void)(r2 -> __h_table -> freeClass ));
                                                r2 ;
                                              });
                                              __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4857 */
                                                __auto_type r3  = drop_List_Rc_BTree_int_User ((index  +  2 ), children );
                                                // ----------
                                                ((void)(r3 -> __h_table -> freeClass ));
                                                r3 ;
                                              });
                                              __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4861 */
                                                __auto_type r4  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4867 */
                                                  Rc_BTree_int_User __ciciliC_4866 (Rc_BTree_int_User __h_value ) {
                                                    return clone_Rc_BTree_int_User (__h_value );
                                                  }
                                                  __ciciliC_4866 ;
                                                }), r3 );
                                                // ----------
                                                ((void)(r4 -> __h_table -> freeClass ));
                                                r4 ;
                                              });
                                              __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4874 */
                                                __auto_type r5  = wrap_List_BTree_int_User_pair_t (head );
                                                // ----------
                                                ((void)(r5 -> __h_table -> freeClass ));
                                                r5 ;
                                              });
                                              __auto_type r6  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4878 */
                                                __auto_type r6  = append_List_BTree_int_User_pair_t (child_items , r5 );
                                                // ----------
                                                ((void)(r6 -> __h_table -> freeClass ));
                                                r6 ;
                                              });
                                              __auto_type r8  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4882 */
                                                __auto_type r8  = push_List_Rc_BTree_int_User (new_Rc_BTree_int_User (Leaf_BTree_int_User (append_List_BTree_int_User_pair_t (r6 , right_child_items ))), r4 );
                                                // ----------
                                                ((void)(r8 -> __h_table -> freeClass ));
                                                r8 ;
                                              });
                                              // ----------
                                              append_List_Rc_BTree_int_User (r2 , r8 );
                                            })));
                                        }) : ({ /* cicili#Let4893 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Progn4895 */
                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight R2"));
                                          });
                                        }));
                                    });
                                  }));
                              }) : ({ /* cicili#Let4902 */
                                // ----------
                                ;
                                ({ /* cicili#Progn4904 */
                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight 3"));
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let4911 */
                        // ----------
                        ;
                        ({ /* cicili#Progn4913 */
                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight 3"));
                        });
                      }));
                  });
                });
              });
            }) : ({ /* cicili#Let4920 */
              // ----------
              ;
              ({ /* cicili#Progn4922 */
                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight 4"));
              });
            }));
        });
      });
  }
  Either_BTree_int_User_Error_BTree_int_User borrowLeft (List_BTree_int_User_pair_t child_items ) {
    return ({ /* cicili#Let4935 */
        typeof((((wleft . __h_data ). Just ). __h_0_mem )) left ;
        typeof((((left -> __h_data ). Cons ). __h_0_mem )) left_item ;
        // ----------
        ;
        ({ /* cicili#Let4937 */
          bool __h_case_result  = (true  &&  (((wleft . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn4938 */
                  (left  =  (((wleft . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) &&  (true  &&  (((left -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn4940 */
                      (left_item  =  (((left -> __h_data ). Cons ). __h_0_mem ) );
                      true ;
                    }) ) ) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn4945 */
              ({ /* cicili#Let4949 */
                __auto_type match4948  = nth_List_Rc_BTree_int_User ((index  -  1 ), children );
                typeof((((match4948 . __h_data ). Just ). __h_0_mem )) left_child_rc ;
                // ----------
                ;
                ({ /* cicili#Let4952 */
                  bool __h_case_result  = (true  &&  (((match4948 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4953 */
                        (left_child_rc  =  (((match4948 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn4958 */
                      ({ /* cicili#Let4961 */
                        __auto_type __h_matchbox  = left_child_rc ;
                        // ----------
                        ({ /* cicili#Let4965 */
                          __auto_type match4964  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                          typeof((((match4964 . __h_data ). Just ). __h_0_mem )) unboxed ;
                          // ----------
                          ;
                          ({ /* cicili#Let4968 */
                            bool __h_case_result  = (true  &&  (((match4964 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4969 */
                                  (unboxed  =  (((match4964 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn4974 */
                                ({ /* cicili#Let4978 */
                                  typeof((((unboxed -> __h_data ). Leaf ). __h_0_mem )) left_child_items ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let4980 */
                                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn4981 */
                                          (left_child_items  =  (((unboxed -> __h_data ). Leaf ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn4986 */
                                        (((hasLen_List_BTree_int_User_pair_t (left_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let4994 */
                                            __auto_type last  = last_List_BTree_int_User_pair_t (left_child_items );
                                            typeof((((last -> __h_data ). Cons ). __h_0_mem )) last_item ;
                                            // ----------
                                            ;
                                            ({ /* cicili#Let4997 */
                                              bool __h_case_result  = (true  &&  (((last -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn4998 */
                                                    (last_item  =  (((last -> __h_data ). Cons ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              
                                              ((__h_case_result ) ? ({ /* cicili#Progn5003 */
                                                  ({ /* cicili#Let5006 */
                                                    __auto_type last  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5008 */
                                                      __auto_type last  = last ;
                                                      // ----------
                                                      ((void)(last -> __h_table -> freeClass ));
                                                      last ;
                                                    });
                                                    // ----------
                                                    Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , last_item , left ), ({ /* cicili#Let5017 */
                                                        __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5019 */
                                                          __auto_type r1  = take_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                          // ----------
                                                          ((void)(r1 -> __h_table -> freeClass ));
                                                          r1 ;
                                                        });
                                                        __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5023 */
                                                          __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5029 */
                                                            Rc_BTree_int_User __ciciliC_5028 (Rc_BTree_int_User __h_value ) {
                                                              return clone_Rc_BTree_int_User (__h_value );
                                                            }
                                                            __ciciliC_5028 ;
                                                          }), r1 );
                                                          // ----------
                                                          ((void)(r2 -> __h_table -> freeClass ));
                                                          r2 ;
                                                        });
                                                        __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5036 */
                                                          __auto_type r3  = drop_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                          // ----------
                                                          ((void)(r3 -> __h_table -> freeClass ));
                                                          r3 ;
                                                        });
                                                        __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5040 */
                                                          __auto_type r4  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5046 */
                                                            Rc_BTree_int_User __ciciliC_5045 (Rc_BTree_int_User __h_value ) {
                                                              return clone_Rc_BTree_int_User (__h_value );
                                                            }
                                                            __ciciliC_5045 ;
                                                          }), r3 );
                                                          // ----------
                                                          ((void)(r4 -> __h_table -> freeClass ));
                                                          r4 ;
                                                        });
                                                        __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5053 */
                                                          __auto_type r5  = pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Leaf_BTree_int_User (init_List_BTree_int_User_pair_t (left_child_items ))), new_Rc_BTree_int_User (Leaf_BTree_int_User (push_List_BTree_int_User_pair_t (left_item , child_items )))}), 2);
                                                          // ----------
                                                          ((void)(r5 -> __h_table -> freeClass ));
                                                          r5 ;
                                                        });
                                                        __auto_type r7  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5066 */
                                                          __auto_type r7  = append_List_Rc_BTree_int_User (r5 , r4 );
                                                          // ----------
                                                          ((void)(r7 -> __h_table -> freeClass ));
                                                          r7 ;
                                                        });
                                                        // ----------
                                                        append_List_Rc_BTree_int_User (r2 , r7 );
                                                      })));
                                                  });
                                                }) : ({ /* cicili#Let5073 */
                                                  // ----------
                                                  ;
                                                  ({ /* cicili#Progn5075 */
                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowLeft 2"));
                                                  });
                                                }));
                                            });
                                          }) : ({ /* cicili#Let5082 */
                                            __auto_type match5081  = borrowRight (child_items );
                                            // ----------
                                            ;
                                            ({ /* cicili#Let5084 */
                                              bool __h_case_result  = (true  &&  ((match5081 . __h_ctor ) ==  __h_Left_t  ) );
                                              // ----------
                                              
                                              ((__h_case_result ) ? ({ /* cicili#Progn5088 */
                                                  Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (delete_List_BTree_int_User_pair_t (items , left ), ({ /* cicili#Let5096 */
                                                      __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5098 */
                                                        __auto_type r1  = take_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                        // ----------
                                                        ((void)(r1 -> __h_table -> freeClass ));
                                                        r1 ;
                                                      });
                                                      __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5102 */
                                                        __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5108 */
                                                          Rc_BTree_int_User __ciciliC_5107 (Rc_BTree_int_User __h_value ) {
                                                            return clone_Rc_BTree_int_User (__h_value );
                                                          }
                                                          __ciciliC_5107 ;
                                                        }), r1 );
                                                        // ----------
                                                        ((void)(r2 -> __h_table -> freeClass ));
                                                        r2 ;
                                                      });
                                                      __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5115 */
                                                        __auto_type r3  = drop_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                        // ----------
                                                        ((void)(r3 -> __h_table -> freeClass ));
                                                        r3 ;
                                                      });
                                                      __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5119 */
                                                        __auto_type r4  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5125 */
                                                          Rc_BTree_int_User __ciciliC_5124 (Rc_BTree_int_User __h_value ) {
                                                            return clone_Rc_BTree_int_User (__h_value );
                                                          }
                                                          __ciciliC_5124 ;
                                                        }), r3 );
                                                        // ----------
                                                        ((void)(r4 -> __h_table -> freeClass ));
                                                        r4 ;
                                                      });
                                                      __auto_type r8  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5132 */
                                                        __auto_type r8  = wrap_List_BTree_int_User_pair_t (left_item );
                                                        // ----------
                                                        ((void)(r8 -> __h_table -> freeClass ));
                                                        r8 ;
                                                      });
                                                      __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5136 */
                                                        __auto_type r5  = append_List_BTree_int_User_pair_t (left_child_items , r8 );
                                                        // ----------
                                                        ((void)(r5 -> __h_table -> freeClass ));
                                                        r5 ;
                                                      });
                                                      __auto_type r7  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5140 */
                                                        __auto_type r7  = push_List_Rc_BTree_int_User (new_Rc_BTree_int_User (Leaf_BTree_int_User (append_List_BTree_int_User_pair_t (r5 , child_items ))), r4 );
                                                        // ----------
                                                        ((void)(r7 -> __h_table -> freeClass ));
                                                        r7 ;
                                                      });
                                                      // ----------
                                                      append_List_Rc_BTree_int_User (r2 , r7 );
                                                    })));
                                                }) : ({ /* cicili#Let5151 */
                                                  __auto_type right  = match5081 ;
                                                  // ----------
                                                  ;
                                                  ({ /* cicili#Progn5153 */
                                                    right ;
                                                  });
                                                }));
                                            });
                                          }));
                                      }) : ({ /* cicili#Let5157 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn5159 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowLeft 3"));
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let5166 */
                                // ----------
                                ;
                                ({ /* cicili#Progn5168 */
                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowLeft 4"));
                                });
                              }));
                          });
                        });
                      });
                    }) : ({ /* cicili#Let5175 */
                      // ----------
                      ;
                      ({ /* cicili#Progn5177 */
                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowLeft 5"));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5184 */
              // ----------
              ;
              ({ /* cicili#Progn5186 */
                borrowRight (child_items );
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let5190 */
      __auto_type result  = ({ /* cicili#Let5193 */
        typeof((((nchild -> __h_data ). Branch ). __h_0_mem )) child_items ;
        // ----------
        ;
        ({ /* cicili#Let5195 */
          bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn5196 */
                (child_items  =  (((nchild -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5201 */
              (((hasLen_List_BTree_int_User_pair_t (child_items , (L_BTree_int_User  -  1 )) ==  (L_BTree_int_User  -  1 ) )) ? Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let5213 */
                  __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5215 */
                    __auto_type r1  = new_Rc_BTree_int_User (nchild );
                    // ----------
                    ((void)((r1 . __h_table )-> freeData ));
                    r1 ;
                  });
                  __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5219 */
                    __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                    // ----------
                    ((void)(r2 -> __h_table -> freeClass ));
                    r2 ;
                  });
                  // ----------
                  fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5228 */
                      Rc_BTree_int_User __ciciliC_5227 (Rc_BTree_int_User __h_value ) {
                        return clone_Rc_BTree_int_User (__h_value );
                      }
                      __ciciliC_5227 ;
                    }), r2 );
                }))) : ({ /* cicili#Let5234 */
                  __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5236 */
                    __auto_type nchild  = nchild ;
                    // ----------
                    ((void)(nchild -> __h_table -> freeClass ));
                    nchild ;
                  });
                  // ----------
                  borrowLeft (child_items );
                }));
            }) : ({ /* cicili#Let5241 */
              typeof((((nchild -> __h_data ). Internal ). __h_0_mem )) child_items ;
              // ----------
              ;
              ({ /* cicili#Let5243 */
                bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn5244 */
                      (child_items  =  (((nchild -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn5249 */
                    (((hasLen_List_BTree_int_User_pair_t (child_items , (L_BTree_int_User  -  1 )) ==  (L_BTree_int_User  -  1 ) )) ? Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let5261 */
                        __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5263 */
                          __auto_type r1  = new_Rc_BTree_int_User (nchild );
                          // ----------
                          ((void)((r1 . __h_table )-> freeData ));
                          r1 ;
                        });
                        __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5267 */
                          __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                          // ----------
                          ((void)(r2 -> __h_table -> freeClass ));
                          r2 ;
                        });
                        // ----------
                        fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5276 */
                            Rc_BTree_int_User __ciciliC_5275 (Rc_BTree_int_User __h_value ) {
                              return clone_Rc_BTree_int_User (__h_value );
                            }
                            __ciciliC_5275 ;
                          }), r2 );
                      }))) : ({ /* cicili#Let5282 */
                        __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5284 */
                          __auto_type nchild  = nchild ;
                          // ----------
                          ((void)(nchild -> __h_table -> freeClass ));
                          nchild ;
                        });
                        // ----------
                        borrowLeft (child_items );
                      }));
                  }) : ({ /* cicili#Let5289 */
                    typeof((((nchild -> __h_data ). Leaf ). __h_0_mem )) child_items ;
                    // ----------
                    ;
                    ({ /* cicili#Let5291 */
                      bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn5292 */
                            (child_items  =  (((nchild -> __h_data ). Leaf ). __h_0_mem ) );
                            true ;
                          }) ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* cicili#Progn5297 */
                          (((hasLen_List_BTree_int_User_pair_t (child_items , (L_BTree_int_User  -  1 )) ==  (L_BTree_int_User  -  1 ) )) ? Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let5309 */
                              __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5311 */
                                __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                // ----------
                                ((void)((r1 . __h_table )-> freeData ));
                                r1 ;
                              });
                              __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5315 */
                                __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                                // ----------
                                ((void)(r2 -> __h_table -> freeClass ));
                                r2 ;
                              });
                              // ----------
                              fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5324 */
                                  Rc_BTree_int_User __ciciliC_5323 (Rc_BTree_int_User __h_value ) {
                                    return clone_Rc_BTree_int_User (__h_value );
                                  }
                                  __ciciliC_5323 ;
                                }), r2 );
                            }))) : ({ /* cicili#Let5330 */
                              __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5332 */
                                __auto_type nchild  = nchild ;
                                // ----------
                                ((void)(nchild -> __h_table -> freeClass ));
                                nchild ;
                              });
                              // ----------
                              borrowLeft (child_items );
                            }));
                        }) : ({ /* cicili#Let5337 */
                          // ----------
                          ;
                          ({ /* cicili#Progn5339 */
                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrow 1"));
                          });
                        }));
                    });
                  }));
              });
            }));
        });
      });
      // ----------
      result ;
    });
}
Either_BTree_int_User_Error_BTree_int_User borrowInternal_BTree_int_User (Maybe_BTree_int_User wtree , List_BTree_int_User_pair_t items , List_Rc_BTree_int_User children , List_BTree_int_User_pair_t current , size_t index , void (*callback) (BTree_int_User_pair_t item )) {
  Either_BTree_int_User_Error_BTree_int_User borrowRightInternal (List_BTree_int_User_pair_t left_child_items , List_Rc_BTree_int_User left_child_children ) {
    return ({ /* cicili#Let5364 */
        __auto_type match5363  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
        typeof((((match5363 . __h_data ). Just ). __h_0_mem )) right_child_rc ;
        // ----------
        ;
        ({ /* cicili#Let5367 */
          bool __h_case_result  = (true  &&  (((match5363 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5368 */
                (right_child_rc  =  (((match5363 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5373 */
              ({ /* cicili#Let5377 */
                __auto_type match5376  = get_Rc_BTree_int_User (right_child_rc );
                typeof((((match5376 . __h_data ). Just ). __h_0_mem )) right_child ;
                // ----------
                ;
                ({ /* cicili#Let5380 */
                  bool __h_case_result  = (true  &&  (((match5376 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5381 */
                        (right_child  =  (((match5376 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5386 */
                      ({ /* cicili#Let5390 */
                        typeof((((right_child -> __h_data ). Branch ). __h_0_mem )) right_child_items ;
                        typeof((((right_child -> __h_data ). Branch ). __h_1_mem )) right_child_children ;
                        // ----------
                        ;
                        ({ /* cicili#Let5392 */
                          bool __h_case_result  = (true  &&  (((right_child -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn5393 */
                                  (right_child_items  =  (((right_child -> __h_data ). Branch ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn5395 */
                                  (right_child_children  =  (((right_child -> __h_data ). Branch ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn5400 */
                              (((hasLen_List_BTree_int_User_pair_t (right_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let5409 */
                                  __auto_type match5407  = min_BTree_int_User (right_child );
                                  typeof((((match5407 . __h_data ). Just ). __h_0_mem )) min ;
                                  typeof((min . __h_0_mem )) min_key ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let5412 */
                                    bool __h_case_result  = (true  &&  (((match5407 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn5413 */
                                            (min  =  (((match5407 . __h_data ). Just ). __h_0_mem ) );
                                            true ;
                                          }) &&  (true  &&  ({ /* cicili#Progn5415 */
                                              (min_key  =  (min . __h_0_mem ) );
                                              true ;
                                            }) ) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn5420 */
                                        ({ /* cicili#Let5424 */
                                          __auto_type match5423  = delete_BTree_int_User (right_child , min_key , NULL );
                                          typeof((((match5423 . __h_data ). Right ). __h_0_mem )) nchild ;
                                          // ----------
                                          ;
                                          ({ /* cicili#Let5427 */
                                            bool __h_case_result  = (true  &&  (((match5423 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn5428 */
                                                  (nchild  =  (((match5423 . __h_data ). Right ). __h_0_mem ) );
                                                  true ;
                                                }) ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* cicili#Progn5433 */
                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , min , current ), ({ /* cicili#Let5441 */
                                                    __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5443 */
                                                      __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                      // ----------
                                                      ((void)((r1 . __h_table )-> freeData ));
                                                      r1 ;
                                                    });
                                                    __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5447 */
                                                      __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , (index  +  1 ));
                                                      // ----------
                                                      ((void)(r2 -> __h_table -> freeClass ));
                                                      r2 ;
                                                    });
                                                    // ----------
                                                    fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5456 */
                                                        Rc_BTree_int_User __ciciliC_5455 (Rc_BTree_int_User __h_value ) {
                                                          return clone_Rc_BTree_int_User (__h_value );
                                                        }
                                                        __ciciliC_5455 ;
                                                      }), r2 );
                                                  })));
                                              }) : ({ /* cicili#Let5463 */
                                                __auto_type left  = match5423 ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Progn5465 */
                                                  left ;
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* cicili#Let5469 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn5471 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 1"));
                                        });
                                      }));
                                  });
                                }) : ({ /* cicili#Let5479 */
                                  typeof((((current -> __h_data ). Cons ). __h_0_mem )) current_item ;
                                  typeof((current_item . __h_0_mem )) current_key ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let5481 */
                                    bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5482 */
                                            (current_item  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                                            true ;
                                          }) &&  (true  &&  ({ /* cicili#Progn5484 */
                                              (current_key  =  (current_item . __h_0_mem ) );
                                              true ;
                                            }) ) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn5489 */
                                        ({ /* cicili#Let5492 */
                                          __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5494 */
                                            __auto_type r1  = push_List_BTree_int_User_pair_t (current_item , right_child_items );
                                            // ----------
                                            ((void)(r1 -> __h_table -> freeClass ));
                                            r1 ;
                                          });
                                          __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5498 */
                                            __auto_type r2  = append_List_Rc_BTree_int_User (left_child_children , right_child_children );
                                            // ----------
                                            ((void)(r2 -> __h_table -> freeClass ));
                                            r2 ;
                                          });
                                          __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5502 */
                                            __auto_type r4  = Internal_BTree_int_User (append_List_BTree_int_User_pair_t (left_child_items , r1 ), fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5511 */
                                              Rc_BTree_int_User __ciciliC_5510 (Rc_BTree_int_User __h_value ) {
                                                return clone_Rc_BTree_int_User (__h_value );
                                              }
                                              __ciciliC_5510 ;
                                            }), r2 ));
                                            // ----------
                                            ((void)(r4 -> __h_table -> freeClass ));
                                            r4 ;
                                          });
                                          __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5518 */
                                            __auto_type r5  = take_List_Rc_BTree_int_User (index , children );
                                            // ----------
                                            ((void)(r5 -> __h_table -> freeClass ));
                                            r5 ;
                                          });
                                          __auto_type r7  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5522 */
                                            __auto_type r7  = drop_List_Rc_BTree_int_User ((index  +  2 ), children );
                                            // ----------
                                            ((void)(r7 -> __h_table -> freeClass ));
                                            r7 ;
                                          });
                                          // ----------
                                          ({ /* cicili#Let5528 */
                                            __auto_type match5527  = delete_BTree_int_User (r4 , current_key , NULL );
                                            typeof((((match5527 . __h_data ). Right ). __h_0_mem )) ntree ;
                                            // ----------
                                            ;
                                            ({ /* cicili#Let5531 */
                                              bool __h_case_result  = (true  &&  (((match5527 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn5532 */
                                                    (ntree  =  (((match5527 . __h_data ). Right ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              
                                              ((__h_case_result ) ? ({ /* cicili#Progn5537 */
                                                  ({ /* cicili#Let5541 */
                                                    __auto_type tmp_result  = splitForDelete_BTree_int_User (ntree );
                                                    typeof((((tmp_result -> __h_data ). Branch ). __h_0_mem )) branch_items ;
                                                    typeof((((tmp_result -> __h_data ). Branch ). __h_1_mem )) branch_children ;
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Let5544 */
                                                      bool __h_case_result  = (true  &&  (((tmp_result -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn5545 */
                                                              (branch_items  =  (((tmp_result -> __h_data ). Branch ). __h_0_mem ) );
                                                              true ;
                                                            }) &&  ({ /* cicili#Progn5547 */
                                                              (branch_children  =  (((tmp_result -> __h_data ). Branch ). __h_1_mem ) );
                                                              true ;
                                                            }) ) ) );
                                                      // ----------
                                                      
                                                      ((__h_case_result ) ? ({ /* cicili#Progn5552 */
                                                          ({ /* cicili#Let5556 */
                                                            typeof((((branch_items -> __h_data ). Cons ). __h_0_mem )) branch_head ;
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Let5558 */
                                                              bool __h_case_result  = (true  &&  (((branch_items -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5559 */
                                                                    (branch_head  =  (((branch_items -> __h_data ). Cons ). __h_0_mem ) );
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              
                                                              ((__h_case_result ) ? ({ /* cicili#Progn5564 */
                                                                  ({ /* cicili#Let5567 */
                                                                    __auto_type ntree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5569 */
                                                                      __auto_type ntree  = ntree ;
                                                                      // ----------
                                                                      ((void)(ntree -> __h_table -> freeClass ));
                                                                      ntree ;
                                                                    });
                                                                    __auto_type tmp_result  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5572 */
                                                                      __auto_type tmp_result  = tmp_result ;
                                                                      // ----------
                                                                      ((void)(tmp_result -> __h_table -> freeClass ));
                                                                      tmp_result ;
                                                                    });
                                                                    // ----------
                                                                    Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , branch_head , current ), ({ /* cicili#Let5581 */
                                                                        __auto_type r10  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5583 */
                                                                          __auto_type r10  = append_List_Rc_BTree_int_User (branch_children , r7 );
                                                                          // ----------
                                                                          ((void)(r10 -> __h_table -> freeClass ));
                                                                          r10 ;
                                                                        });
                                                                        __auto_type r11  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5587 */
                                                                          __auto_type r11  = append_List_Rc_BTree_int_User (r5 , r10 );
                                                                          // ----------
                                                                          ((void)(r11 -> __h_table -> freeClass ));
                                                                          r11 ;
                                                                        });
                                                                        // ----------
                                                                        fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5596 */
                                                                            Rc_BTree_int_User __ciciliC_5595 (Rc_BTree_int_User __h_value ) {
                                                                              return clone_Rc_BTree_int_User (__h_value );
                                                                            }
                                                                            __ciciliC_5595 ;
                                                                          }), r11 );
                                                                      })));
                                                                  });
                                                                }) : ({ /* cicili#Let5603 */
                                                                  // ----------
                                                                  ;
                                                                  ({ /* cicili#Progn5605 */
                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 2"));
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        }) : ({ /* cicili#Let5612 */
                                                          // ----------
                                                          ;
                                                          ({ /* cicili#Let5614 */
                                                            bool __h_case_result  = (true  &&  ((tmp_result -> __h_ctor ) ==  __h_Internal_t  ) );
                                                            // ----------
                                                            
                                                            ((__h_case_result ) ? ({ /* cicili#Progn5618 */
                                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (delete_List_BTree_int_User_pair_t (items , current ), ({ /* cicili#Let5626 */
                                                                    __auto_type r9  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5628 */
                                                                      __auto_type r9  = new_Rc_BTree_int_User (ntree );
                                                                      // ----------
                                                                      ((void)((r9 . __h_table )-> freeData ));
                                                                      r9 ;
                                                                    });
                                                                    __auto_type r10  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5632 */
                                                                      __auto_type r10  = push_List_Rc_BTree_int_User (r9 , r7 );
                                                                      // ----------
                                                                      ((void)(r10 -> __h_table -> freeClass ));
                                                                      r10 ;
                                                                    });
                                                                    __auto_type r11  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5636 */
                                                                      __auto_type r11  = append_List_Rc_BTree_int_User (r5 , r10 );
                                                                      // ----------
                                                                      ((void)(r11 -> __h_table -> freeClass ));
                                                                      r11 ;
                                                                    });
                                                                    // ----------
                                                                    fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5645 */
                                                                        Rc_BTree_int_User __ciciliC_5644 (Rc_BTree_int_User __h_value ) {
                                                                          return clone_Rc_BTree_int_User (__h_value );
                                                                        }
                                                                        __ciciliC_5644 ;
                                                                      }), r11 );
                                                                  })));
                                                              }) : ({ /* cicili#Let5652 */
                                                                // ----------
                                                                ;
                                                                ({ /* cicili#Progn5654 */
                                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 3"));
                                                                });
                                                              }));
                                                          });
                                                        }));
                                                    });
                                                  });
                                                }) : ({ /* cicili#Let5661 */
                                                  __auto_type left  = match5527 ;
                                                  // ----------
                                                  ;
                                                  ({ /* cicili#Progn5663 */
                                                    left ;
                                                  });
                                                }));
                                            });
                                          });
                                        });
                                      }) : ({ /* cicili#Let5667 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn5669 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 4"));
                                        });
                                      }));
                                  });
                                }));
                            }) : ({ /* cicili#Let5676 */
                              typeof((((right_child -> __h_data ). Internal ). __h_0_mem )) right_child_items ;
                              typeof((((right_child -> __h_data ). Internal ). __h_1_mem )) right_child_children ;
                              // ----------
                              ;
                              ({ /* cicili#Let5678 */
                                bool __h_case_result  = (true  &&  (((right_child -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn5679 */
                                        (right_child_items  =  (((right_child -> __h_data ). Internal ). __h_0_mem ) );
                                        true ;
                                      }) &&  ({ /* cicili#Progn5681 */
                                        (right_child_children  =  (((right_child -> __h_data ). Internal ). __h_1_mem ) );
                                        true ;
                                      }) ) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn5686 */
                                    (((hasLen_List_BTree_int_User_pair_t (right_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let5695 */
                                        __auto_type match5693  = min_BTree_int_User (right_child );
                                        typeof((((match5693 . __h_data ). Just ). __h_0_mem )) min ;
                                        typeof((min . __h_0_mem )) min_key ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let5698 */
                                          bool __h_case_result  = (true  &&  (((match5693 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn5699 */
                                                  (min  =  (((match5693 . __h_data ). Just ). __h_0_mem ) );
                                                  true ;
                                                }) &&  (true  &&  ({ /* cicili#Progn5701 */
                                                    (min_key  =  (min . __h_0_mem ) );
                                                    true ;
                                                  }) ) ) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn5706 */
                                              ({ /* cicili#Let5710 */
                                                __auto_type match5709  = delete_BTree_int_User (right_child , min_key , NULL );
                                                typeof((((match5709 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let5713 */
                                                  bool __h_case_result  = (true  &&  (((match5709 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn5714 */
                                                        (nchild  =  (((match5709 . __h_data ). Right ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn5719 */
                                                      Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , min , current ), ({ /* cicili#Let5727 */
                                                          __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5729 */
                                                            __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                            // ----------
                                                            ((void)((r1 . __h_table )-> freeData ));
                                                            r1 ;
                                                          });
                                                          __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5733 */
                                                            __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , (index  +  1 ));
                                                            // ----------
                                                            ((void)(r2 -> __h_table -> freeClass ));
                                                            r2 ;
                                                          });
                                                          // ----------
                                                          fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5742 */
                                                              Rc_BTree_int_User __ciciliC_5741 (Rc_BTree_int_User __h_value ) {
                                                                return clone_Rc_BTree_int_User (__h_value );
                                                              }
                                                              __ciciliC_5741 ;
                                                            }), r2 );
                                                        })));
                                                    }) : ({ /* cicili#Let5749 */
                                                      __auto_type left  = match5709 ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn5751 */
                                                        left ;
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let5755 */
                                              // ----------
                                              ;
                                              ({ /* cicili#Progn5757 */
                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 1"));
                                              });
                                            }));
                                        });
                                      }) : ({ /* cicili#Let5765 */
                                        typeof((((current -> __h_data ). Cons ). __h_0_mem )) current_item ;
                                        typeof((current_item . __h_0_mem )) current_key ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let5767 */
                                          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5768 */
                                                  (current_item  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                                                  true ;
                                                }) &&  (true  &&  ({ /* cicili#Progn5770 */
                                                    (current_key  =  (current_item . __h_0_mem ) );
                                                    true ;
                                                  }) ) ) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn5775 */
                                              ({ /* cicili#Let5778 */
                                                __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5780 */
                                                  __auto_type r1  = push_List_BTree_int_User_pair_t (current_item , right_child_items );
                                                  // ----------
                                                  ((void)(r1 -> __h_table -> freeClass ));
                                                  r1 ;
                                                });
                                                __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5784 */
                                                  __auto_type r2  = append_List_Rc_BTree_int_User (left_child_children , right_child_children );
                                                  // ----------
                                                  ((void)(r2 -> __h_table -> freeClass ));
                                                  r2 ;
                                                });
                                                __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5788 */
                                                  __auto_type r4  = Internal_BTree_int_User (append_List_BTree_int_User_pair_t (left_child_items , r1 ), fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5797 */
                                                    Rc_BTree_int_User __ciciliC_5796 (Rc_BTree_int_User __h_value ) {
                                                      return clone_Rc_BTree_int_User (__h_value );
                                                    }
                                                    __ciciliC_5796 ;
                                                  }), r2 ));
                                                  // ----------
                                                  ((void)(r4 -> __h_table -> freeClass ));
                                                  r4 ;
                                                });
                                                __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5804 */
                                                  __auto_type r5  = take_List_Rc_BTree_int_User (index , children );
                                                  // ----------
                                                  ((void)(r5 -> __h_table -> freeClass ));
                                                  r5 ;
                                                });
                                                __auto_type r7  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5808 */
                                                  __auto_type r7  = drop_List_Rc_BTree_int_User ((index  +  2 ), children );
                                                  // ----------
                                                  ((void)(r7 -> __h_table -> freeClass ));
                                                  r7 ;
                                                });
                                                // ----------
                                                ({ /* cicili#Let5814 */
                                                  __auto_type match5813  = delete_BTree_int_User (r4 , current_key , NULL );
                                                  typeof((((match5813 . __h_data ). Right ). __h_0_mem )) ntree ;
                                                  // ----------
                                                  ;
                                                  ({ /* cicili#Let5817 */
                                                    bool __h_case_result  = (true  &&  (((match5813 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn5818 */
                                                          (ntree  =  (((match5813 . __h_data ). Right ). __h_0_mem ) );
                                                          true ;
                                                        }) ) );
                                                    // ----------
                                                    
                                                    ((__h_case_result ) ? ({ /* cicili#Progn5823 */
                                                        ({ /* cicili#Let5827 */
                                                          __auto_type tmp_result  = splitForDelete_BTree_int_User (ntree );
                                                          typeof((((tmp_result -> __h_data ). Branch ). __h_0_mem )) branch_items ;
                                                          typeof((((tmp_result -> __h_data ). Branch ). __h_1_mem )) branch_children ;
                                                          // ----------
                                                          ;
                                                          ({ /* cicili#Let5830 */
                                                            bool __h_case_result  = (true  &&  (((tmp_result -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn5831 */
                                                                    (branch_items  =  (((tmp_result -> __h_data ). Branch ). __h_0_mem ) );
                                                                    true ;
                                                                  }) &&  ({ /* cicili#Progn5833 */
                                                                    (branch_children  =  (((tmp_result -> __h_data ). Branch ). __h_1_mem ) );
                                                                    true ;
                                                                  }) ) ) );
                                                            // ----------
                                                            
                                                            ((__h_case_result ) ? ({ /* cicili#Progn5838 */
                                                                ({ /* cicili#Let5842 */
                                                                  typeof((((branch_items -> __h_data ). Cons ). __h_0_mem )) branch_head ;
                                                                  // ----------
                                                                  ;
                                                                  ({ /* cicili#Let5844 */
                                                                    bool __h_case_result  = (true  &&  (((branch_items -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5845 */
                                                                          (branch_head  =  (((branch_items -> __h_data ). Cons ). __h_0_mem ) );
                                                                          true ;
                                                                        }) ) );
                                                                    // ----------
                                                                    
                                                                    ((__h_case_result ) ? ({ /* cicili#Progn5850 */
                                                                        ({ /* cicili#Let5853 */
                                                                          __auto_type ntree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5855 */
                                                                            __auto_type ntree  = ntree ;
                                                                            // ----------
                                                                            ((void)(ntree -> __h_table -> freeClass ));
                                                                            ntree ;
                                                                          });
                                                                          __auto_type tmp_result  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5858 */
                                                                            __auto_type tmp_result  = tmp_result ;
                                                                            // ----------
                                                                            ((void)(tmp_result -> __h_table -> freeClass ));
                                                                            tmp_result ;
                                                                          });
                                                                          // ----------
                                                                          Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , branch_head , current ), ({ /* cicili#Let5867 */
                                                                              __auto_type r10  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5869 */
                                                                                __auto_type r10  = append_List_Rc_BTree_int_User (branch_children , r7 );
                                                                                // ----------
                                                                                ((void)(r10 -> __h_table -> freeClass ));
                                                                                r10 ;
                                                                              });
                                                                              __auto_type r11  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5873 */
                                                                                __auto_type r11  = append_List_Rc_BTree_int_User (r5 , r10 );
                                                                                // ----------
                                                                                ((void)(r11 -> __h_table -> freeClass ));
                                                                                r11 ;
                                                                              });
                                                                              // ----------
                                                                              fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5882 */
                                                                                  Rc_BTree_int_User __ciciliC_5881 (Rc_BTree_int_User __h_value ) {
                                                                                    return clone_Rc_BTree_int_User (__h_value );
                                                                                  }
                                                                                  __ciciliC_5881 ;
                                                                                }), r11 );
                                                                            })));
                                                                        });
                                                                      }) : ({ /* cicili#Let5889 */
                                                                        // ----------
                                                                        ;
                                                                        ({ /* cicili#Progn5891 */
                                                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 2"));
                                                                        });
                                                                      }));
                                                                  });
                                                                });
                                                              }) : ({ /* cicili#Let5898 */
                                                                // ----------
                                                                ;
                                                                ({ /* cicili#Let5900 */
                                                                  bool __h_case_result  = (true  &&  ((tmp_result -> __h_ctor ) ==  __h_Internal_t  ) );
                                                                  // ----------
                                                                  
                                                                  ((__h_case_result ) ? ({ /* cicili#Progn5904 */
                                                                      Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (delete_List_BTree_int_User_pair_t (items , current ), ({ /* cicili#Let5912 */
                                                                          __auto_type r9  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5914 */
                                                                            __auto_type r9  = new_Rc_BTree_int_User (ntree );
                                                                            // ----------
                                                                            ((void)((r9 . __h_table )-> freeData ));
                                                                            r9 ;
                                                                          });
                                                                          __auto_type r10  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5918 */
                                                                            __auto_type r10  = push_List_Rc_BTree_int_User (r9 , r7 );
                                                                            // ----------
                                                                            ((void)(r10 -> __h_table -> freeClass ));
                                                                            r10 ;
                                                                          });
                                                                          __auto_type r11  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5922 */
                                                                            __auto_type r11  = append_List_Rc_BTree_int_User (r5 , r10 );
                                                                            // ----------
                                                                            ((void)(r11 -> __h_table -> freeClass ));
                                                                            r11 ;
                                                                          });
                                                                          // ----------
                                                                          fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5931 */
                                                                              Rc_BTree_int_User __ciciliC_5930 (Rc_BTree_int_User __h_value ) {
                                                                                return clone_Rc_BTree_int_User (__h_value );
                                                                              }
                                                                              __ciciliC_5930 ;
                                                                            }), r11 );
                                                                        })));
                                                                    }) : ({ /* cicili#Let5938 */
                                                                      // ----------
                                                                      ;
                                                                      ({ /* cicili#Progn5940 */
                                                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 3"));
                                                                      });
                                                                    }));
                                                                });
                                                              }));
                                                          });
                                                        });
                                                      }) : ({ /* cicili#Let5947 */
                                                        __auto_type left  = match5813 ;
                                                        // ----------
                                                        ;
                                                        ({ /* cicili#Progn5949 */
                                                          left ;
                                                        });
                                                      }));
                                                  });
                                                });
                                              });
                                            }) : ({ /* cicili#Let5953 */
                                              // ----------
                                              ;
                                              ({ /* cicili#Progn5955 */
                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 4"));
                                              });
                                            }));
                                        });
                                      }));
                                  }) : ({ /* cicili#Let5962 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn5964 */
                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 5"));
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let5971 */
                      // ----------
                      ;
                      ({ /* cicili#Progn5973 */
                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 6"));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5980 */
              // ----------
              ;
              ({ /* cicili#Progn5982 */
                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 7"));
              });
            }));
        });
      });
  }
  Either_BTree_int_User_Error_BTree_int_User borrowRightLeaf (List_BTree_int_User_pair_t left_child_items ) {
    return ({ /* cicili#Let5995 */
        __auto_type match5994  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
        typeof((((match5994 . __h_data ). Just ). __h_0_mem )) right_child_rc ;
        // ----------
        ;
        ({ /* cicili#Let5998 */
          bool __h_case_result  = (true  &&  (((match5994 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5999 */
                (right_child_rc  =  (((match5994 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6004 */
              ({ /* cicili#Let6008 */
                __auto_type match6007  = get_Rc_BTree_int_User (right_child_rc );
                typeof((((match6007 . __h_data ). Just ). __h_0_mem )) right_child ;
                // ----------
                ;
                ({ /* cicili#Let6011 */
                  bool __h_case_result  = (true  &&  (((match6007 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6012 */
                        (right_child  =  (((match6007 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6017 */
                      ({ /* cicili#Let6021 */
                        typeof((((right_child -> __h_data ). Leaf ). __h_0_mem )) right_child_items ;
                        // ----------
                        ;
                        ({ /* cicili#Let6023 */
                          bool __h_case_result  = (true  &&  (((right_child -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn6024 */
                                (right_child_items  =  (((right_child -> __h_data ). Leaf ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn6029 */
                              (((hasLen_List_BTree_int_User_pair_t (right_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let6038 */
                                  __auto_type match6036  = min_BTree_int_User (right_child );
                                  typeof((((match6036 . __h_data ). Just ). __h_0_mem )) min ;
                                  typeof((min . __h_0_mem )) min_key ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let6041 */
                                    bool __h_case_result  = (true  &&  (((match6036 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn6042 */
                                            (min  =  (((match6036 . __h_data ). Just ). __h_0_mem ) );
                                            true ;
                                          }) &&  (true  &&  ({ /* cicili#Progn6044 */
                                              (min_key  =  (min . __h_0_mem ) );
                                              true ;
                                            }) ) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn6049 */
                                        ({ /* cicili#Let6053 */
                                          __auto_type match6052  = delete_BTree_int_User (right_child , min_key , NULL );
                                          typeof((((match6052 . __h_data ). Right ). __h_0_mem )) nchild ;
                                          // ----------
                                          ;
                                          ({ /* cicili#Let6056 */
                                            bool __h_case_result  = (true  &&  (((match6052 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn6057 */
                                                  (nchild  =  (((match6052 . __h_data ). Right ). __h_0_mem ) );
                                                  true ;
                                                }) ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* cicili#Progn6062 */
                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , min , current ), ({ /* cicili#Let6070 */
                                                    __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6072 */
                                                      __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                      // ----------
                                                      ((void)((r1 . __h_table )-> freeData ));
                                                      r1 ;
                                                    });
                                                    __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6076 */
                                                      __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , (index  +  1 ));
                                                      // ----------
                                                      ((void)(r2 -> __h_table -> freeClass ));
                                                      r2 ;
                                                    });
                                                    // ----------
                                                    fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6085 */
                                                        Rc_BTree_int_User __ciciliC_6084 (Rc_BTree_int_User __h_value ) {
                                                          return clone_Rc_BTree_int_User (__h_value );
                                                        }
                                                        __ciciliC_6084 ;
                                                      }), r2 );
                                                  })));
                                              }) : ({ /* cicili#Let6092 */
                                                __auto_type left  = match6052 ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Progn6094 */
                                                  left ;
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* cicili#Let6098 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn6100 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 8"));
                                        });
                                      }));
                                  });
                                }) : Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (delete_List_BTree_int_User_pair_t (items , current ), ({ /* cicili#Let6111 */
                                  __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6113 */
                                    __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                    // ----------
                                    ((void)(r1 -> __h_table -> freeClass ));
                                    r1 ;
                                  });
                                  __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6117 */
                                    __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6123 */
                                      Rc_BTree_int_User __ciciliC_6122 (Rc_BTree_int_User __h_value ) {
                                        return clone_Rc_BTree_int_User (__h_value );
                                      }
                                      __ciciliC_6122 ;
                                    }), r1 );
                                    // ----------
                                    ((void)(r2 -> __h_table -> freeClass ));
                                    r2 ;
                                  });
                                  __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6130 */
                                    __auto_type r3  = drop_List_Rc_BTree_int_User ((index  +  2 ), children );
                                    // ----------
                                    ((void)(r3 -> __h_table -> freeClass ));
                                    r3 ;
                                  });
                                  __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6134 */
                                    __auto_type r4  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6140 */
                                      Rc_BTree_int_User __ciciliC_6139 (Rc_BTree_int_User __h_value ) {
                                        return clone_Rc_BTree_int_User (__h_value );
                                      }
                                      __ciciliC_6139 ;
                                    }), r3 );
                                    // ----------
                                    ((void)(r4 -> __h_table -> freeClass ));
                                    r4 ;
                                  });
                                  __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6147 */
                                    __auto_type r5  = push_List_Rc_BTree_int_User (new_Rc_BTree_int_User (Leaf_BTree_int_User (append_List_BTree_int_User_pair_t (left_child_items , right_child_items ))), r4 );
                                    // ----------
                                    ((void)(r5 -> __h_table -> freeClass ));
                                    r5 ;
                                  });
                                  // ----------
                                  append_List_Rc_BTree_int_User (r2 , r5 );
                                }))));
                            }) : ({ /* cicili#Let6158 */
                              // ----------
                              ;
                              ({ /* cicili#Progn6160 */
                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 9"));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let6167 */
                      // ----------
                      ;
                      ({ /* cicili#Progn6169 */
                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 10"));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6176 */
              // ----------
              ;
              ({ /* cicili#Progn6178 */
                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 11"));
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let6185 */
      __auto_type result  = ({ /* cicili#Let6188 */
        __auto_type match6187  = nth_List_Rc_BTree_int_User (index , children );
        typeof((((match6187 . __h_data ). Just ). __h_0_mem )) left_child_rc ;
        // ----------
        ;
        ({ /* cicili#Let6191 */
          bool __h_case_result  = (true  &&  (((match6187 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6192 */
                (left_child_rc  =  (((match6187 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6197 */
              ({ /* cicili#Let6201 */
                __auto_type match6200  = get_Rc_BTree_int_User (left_child_rc );
                typeof((((match6200 . __h_data ). Just ). __h_0_mem )) left_child ;
                // ----------
                ;
                ({ /* cicili#Let6204 */
                  bool __h_case_result  = (true  &&  (((match6200 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6205 */
                        (left_child  =  (((match6200 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6210 */
                      ({ /* cicili#Let6214 */
                        typeof((((left_child -> __h_data ). Branch ). __h_0_mem )) left_child_items ;
                        typeof((((left_child -> __h_data ). Branch ). __h_1_mem )) left_child_children ;
                        // ----------
                        ;
                        ({ /* cicili#Let6216 */
                          bool __h_case_result  = (true  &&  (((left_child -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn6217 */
                                  (left_child_items  =  (((left_child -> __h_data ). Branch ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn6219 */
                                  (left_child_children  =  (((left_child -> __h_data ). Branch ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn6224 */
                              (((hasLen_List_BTree_int_User_pair_t (left_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let6233 */
                                  __auto_type match6231  = max_BTree_int_User (left_child );
                                  typeof((((match6231 . __h_data ). Just ). __h_0_mem )) max ;
                                  typeof((max . __h_0_mem )) max_key ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let6236 */
                                    bool __h_case_result  = (true  &&  (((match6231 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn6237 */
                                            (max  =  (((match6231 . __h_data ). Just ). __h_0_mem ) );
                                            true ;
                                          }) &&  (true  &&  ({ /* cicili#Progn6239 */
                                              (max_key  =  (max . __h_0_mem ) );
                                              true ;
                                            }) ) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn6244 */
                                        ({ /* cicili#Let6248 */
                                          __auto_type match6247  = delete_BTree_int_User (left_child , max_key , NULL );
                                          typeof((((match6247 . __h_data ). Right ). __h_0_mem )) nchild ;
                                          // ----------
                                          ;
                                          ({ /* cicili#Let6251 */
                                            bool __h_case_result  = (true  &&  (((match6247 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn6252 */
                                                  (nchild  =  (((match6247 . __h_data ). Right ). __h_0_mem ) );
                                                  true ;
                                                }) ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* cicili#Progn6257 */
                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , max , current ), ({ /* cicili#Let6265 */
                                                    __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6267 */
                                                      __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                      // ----------
                                                      ((void)((r1 . __h_table )-> freeData ));
                                                      r1 ;
                                                    });
                                                    __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6271 */
                                                      __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                                                      // ----------
                                                      ((void)(r2 -> __h_table -> freeClass ));
                                                      r2 ;
                                                    });
                                                    // ----------
                                                    fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6280 */
                                                        Rc_BTree_int_User __ciciliC_6279 (Rc_BTree_int_User __h_value ) {
                                                          return clone_Rc_BTree_int_User (__h_value );
                                                        }
                                                        __ciciliC_6279 ;
                                                      }), r2 );
                                                  })));
                                              }) : ({ /* cicili#Let6287 */
                                                __auto_type left  = match6247 ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Progn6289 */
                                                  left ;
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* cicili#Let6293 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn6295 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 12"));
                                        });
                                      }));
                                  });
                                }) : borrowRightInternal (left_child_items , left_child_children ));
                            }) : ({ /* cicili#Let6302 */
                              typeof((((left_child -> __h_data ). Internal ). __h_0_mem )) left_child_items ;
                              typeof((((left_child -> __h_data ). Internal ). __h_1_mem )) left_child_children ;
                              // ----------
                              ;
                              ({ /* cicili#Let6304 */
                                bool __h_case_result  = (true  &&  (((left_child -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn6305 */
                                        (left_child_items  =  (((left_child -> __h_data ). Internal ). __h_0_mem ) );
                                        true ;
                                      }) &&  ({ /* cicili#Progn6307 */
                                        (left_child_children  =  (((left_child -> __h_data ). Internal ). __h_1_mem ) );
                                        true ;
                                      }) ) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn6312 */
                                    (((hasLen_List_BTree_int_User_pair_t (left_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let6321 */
                                        __auto_type match6319  = max_BTree_int_User (left_child );
                                        typeof((((match6319 . __h_data ). Just ). __h_0_mem )) max ;
                                        typeof((max . __h_0_mem )) max_key ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let6324 */
                                          bool __h_case_result  = (true  &&  (((match6319 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn6325 */
                                                  (max  =  (((match6319 . __h_data ). Just ). __h_0_mem ) );
                                                  true ;
                                                }) &&  (true  &&  ({ /* cicili#Progn6327 */
                                                    (max_key  =  (max . __h_0_mem ) );
                                                    true ;
                                                  }) ) ) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn6332 */
                                              ({ /* cicili#Let6336 */
                                                __auto_type match6335  = delete_BTree_int_User (left_child , max_key , NULL );
                                                typeof((((match6335 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let6339 */
                                                  bool __h_case_result  = (true  &&  (((match6335 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn6340 */
                                                        (nchild  =  (((match6335 . __h_data ). Right ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn6345 */
                                                      Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , max , current ), ({ /* cicili#Let6353 */
                                                          __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6355 */
                                                            __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                            // ----------
                                                            ((void)((r1 . __h_table )-> freeData ));
                                                            r1 ;
                                                          });
                                                          __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6359 */
                                                            __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                                                            // ----------
                                                            ((void)(r2 -> __h_table -> freeClass ));
                                                            r2 ;
                                                          });
                                                          // ----------
                                                          fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6368 */
                                                              Rc_BTree_int_User __ciciliC_6367 (Rc_BTree_int_User __h_value ) {
                                                                return clone_Rc_BTree_int_User (__h_value );
                                                              }
                                                              __ciciliC_6367 ;
                                                            }), r2 );
                                                        })));
                                                    }) : ({ /* cicili#Let6375 */
                                                      __auto_type left  = match6335 ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn6377 */
                                                        left ;
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let6381 */
                                              // ----------
                                              ;
                                              ({ /* cicili#Progn6383 */
                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 12"));
                                              });
                                            }));
                                        });
                                      }) : borrowRightInternal (left_child_items , left_child_children ));
                                  }) : ({ /* cicili#Let6390 */
                                    typeof((((left_child -> __h_data ). Leaf ). __h_0_mem )) left_child_items ;
                                    // ----------
                                    ;
                                    ({ /* cicili#Let6392 */
                                      bool __h_case_result  = (true  &&  (((left_child -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn6393 */
                                            (left_child_items  =  (((left_child -> __h_data ). Leaf ). __h_0_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn6398 */
                                          (((hasLen_List_BTree_int_User_pair_t (left_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let6407 */
                                              __auto_type match6405  = max_BTree_int_User (left_child );
                                              typeof((((match6405 . __h_data ). Just ). __h_0_mem )) max ;
                                              typeof((max . __h_0_mem )) max_key ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let6410 */
                                                bool __h_case_result  = (true  &&  (((match6405 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn6411 */
                                                        (max  =  (((match6405 . __h_data ). Just ). __h_0_mem ) );
                                                        true ;
                                                      }) &&  (true  &&  ({ /* cicili#Progn6413 */
                                                          (max_key  =  (max . __h_0_mem ) );
                                                          true ;
                                                        }) ) ) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn6418 */
                                                    ({ /* cicili#Let6422 */
                                                      __auto_type match6421  = delete_BTree_int_User (left_child , max_key , NULL );
                                                      typeof((((match6421 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let6425 */
                                                        bool __h_case_result  = (true  &&  (((match6421 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn6426 */
                                                              (nchild  =  (((match6421 . __h_data ). Right ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn6431 */
                                                            Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , max , current ), ({ /* cicili#Let6439 */
                                                                __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6441 */
                                                                  __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                                  // ----------
                                                                  ((void)((r1 . __h_table )-> freeData ));
                                                                  r1 ;
                                                                });
                                                                __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6445 */
                                                                  __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                                                                  // ----------
                                                                  ((void)(r2 -> __h_table -> freeClass ));
                                                                  r2 ;
                                                                });
                                                                // ----------
                                                                fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6454 */
                                                                    Rc_BTree_int_User __ciciliC_6453 (Rc_BTree_int_User __h_value ) {
                                                                      return clone_Rc_BTree_int_User (__h_value );
                                                                    }
                                                                    __ciciliC_6453 ;
                                                                  }), r2 );
                                                              })));
                                                          }) : ({ /* cicili#Let6461 */
                                                            __auto_type left  = match6421 ;
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn6463 */
                                                              left ;
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  }) : ({ /* cicili#Let6467 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn6469 */
                                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 13"));
                                                    });
                                                  }));
                                              });
                                            }) : borrowRightLeaf (left_child_items ));
                                        }) : ({ /* cicili#Let6476 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Progn6478 */
                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 14"));
                                          });
                                        }));
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let6485 */
                      // ----------
                      ;
                      ({ /* cicili#Progn6487 */
                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 15"));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6494 */
              // ----------
              ;
              ({ /* cicili#Progn6496 */
                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 16"));
              });
            }));
        });
      });
      // ----------
      result ;
    });
}
Either_BTree_int_User_Error_BTree_int_User deleteWithParent_BTree_int_User (Maybe_BTree_int_User wparent , size_t pitem_index , size_t pchild_index , BTree_int_User tree , int skey , void (*callback) (BTree_int_User_pair_t item )) {
  Either_BTree_int_User_Error_BTree_int_User deleteInternal (Maybe_BTree_int_User tree , List_BTree_int_User_pair_t items , List_Rc_BTree_int_User children , Maybe_List_BTree_int_User_pair_t wleft , List_BTree_int_User_pair_t current , size_t index ) {
    return ({ /* cicili#Let6524 */
        __auto_type result  = ({ /* cicili#Let6528 */
          typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
          typeof((head . __h_0_mem )) key ;
          typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
          // ----------
          ;
          ({ /* cicili#Let6530 */
            bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn6531 */
                      (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                      true ;
                    }) &&  (true  &&  ({ /* cicili#Progn6533 */
                        (key  =  (head . __h_0_mem ) );
                        true ;
                      }) ) ) &&  ({ /* cicili#Progn6535 */
                    (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                    true ;
                  }) ) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn6540 */
                ({ /* cicili#Let6544 */
                  __auto_type match6543  = compareKey (skey , key );
                  // ----------
                  ;
                  ({ /* cicili#Let6546 */
                    bool __h_case_result  = (true  &&  ((match6543 . __h_ctor ) ==  __h_LT_t  ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn6550 */
                        ({ /* cicili#Let6554 */
                          __auto_type match6553  = nth_List_Rc_BTree_int_User (index , children );
                          typeof((((match6553 . __h_data ). Just ). __h_0_mem )) child ;
                          // ----------
                          ;
                          ({ /* cicili#Let6557 */
                            bool __h_case_result  = (true  &&  (((match6553 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6558 */
                                  (child  =  (((match6553 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn6563 */
                                ({ /* cicili#Let6567 */
                                  __auto_type match6566  = get_Rc_BTree_int_User (child );
                                  typeof((((match6566 . __h_data ). Just ). __h_0_mem )) tr ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let6570 */
                                    bool __h_case_result  = (true  &&  (((match6566 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6571 */
                                          (tr  =  (((match6566 . __h_data ). Just ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn6576 */
                                        ({ /* cicili#Let6580 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Let6582 */
                                            bool __h_case_result  = (true  &&  ((tr -> __h_ctor ) ==  __h_Branch_t  ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* cicili#Progn6586 */
                                                ({ /* cicili#Let6590 */
                                                  __auto_type match6589  = deleteWithParent_BTree_int_User (tree , (((index  >  0 )) ? (index  -  1 ) : index ), index , tr , skey , callback );
                                                  typeof((((match6589 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                  // ----------
                                                  ;
                                                  ({ /* cicili#Let6593 */
                                                    bool __h_case_result  = (true  &&  (((match6589 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn6594 */
                                                          (nchild  =  (((match6589 . __h_data ). Right ). __h_0_mem ) );
                                                          true ;
                                                        }) ) );
                                                    // ----------
                                                    
                                                    ((__h_case_result ) ? ({ /* cicili#Progn6599 */
                                                        ({ /* cicili#Let6603 */
                                                          typeof((((nchild -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                                          typeof((((nchild -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                                          // ----------
                                                          ;
                                                          ({ /* cicili#Let6605 */
                                                            bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn6606 */
                                                                    (child_items  =  (((nchild -> __h_data ). Branch ). __h_0_mem ) );
                                                                    true ;
                                                                  }) &&  ({ /* cicili#Progn6608 */
                                                                    (child_children  =  (((nchild -> __h_data ). Branch ). __h_1_mem ) );
                                                                    true ;
                                                                  }) ) ) );
                                                            // ----------
                                                            
                                                            ((__h_case_result ) ? ({ /* cicili#Progn6613 */
                                                                ({ /* cicili#Let6617 */
                                                                  __auto_type match6616  = nth_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                                  typeof((((match6616 . __h_data ). Just ). __h_0_mem )) wleft ;
                                                                  // ----------
                                                                  ;
                                                                  ({ /* cicili#Let6620 */
                                                                    bool __h_case_result  = (true  &&  (((match6616 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6621 */
                                                                          (wleft  =  (((match6616 . __h_data ). Just ). __h_0_mem ) );
                                                                          true ;
                                                                        }) ) );
                                                                    // ----------
                                                                    
                                                                    ((__h_case_result ) ? ({ /* cicili#Progn6626 */
                                                                        ({ /* cicili#Let6629 */
                                                                          __auto_type __h_matchbox  = wleft ;
                                                                          // ----------
                                                                          ({ /* cicili#Let6633 */
                                                                            __auto_type match6632  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                            typeof((((match6632 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                            // ----------
                                                                            ;
                                                                            ({ /* cicili#Let6636 */
                                                                              bool __h_case_result  = (true  &&  (((match6632 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6637 */
                                                                                    (unboxed  =  (((match6632 . __h_data ). Just ). __h_0_mem ) );
                                                                                    true ;
                                                                                  }) ) );
                                                                              // ----------
                                                                              
                                                                              ((__h_case_result ) ? ({ /* cicili#Progn6642 */
                                                                                  ({ /* cicili#Let6646 */
                                                                                    typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) left_items ;
                                                                                    typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) left_children ;
                                                                                    // ----------
                                                                                    ;
                                                                                    ({ /* cicili#Let6648 */
                                                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn6649 */
                                                                                              (left_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                              true ;
                                                                                            }) &&  ({ /* cicili#Progn6651 */
                                                                                              (left_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                              true ;
                                                                                            }) ) ) );
                                                                                      // ----------
                                                                                      
                                                                                      ((__h_case_result ) ? ({ /* cicili#Progn6656 */
                                                                                          ({ /* cicili#Let6659 */
                                                                                            __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6661 */
                                                                                              __auto_type nchild  = nchild ;
                                                                                              // ----------
                                                                                              ((void)(nchild -> __h_table -> freeClass ));
                                                                                              nchild ;
                                                                                            });
                                                                                            // ----------
                                                                                            Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), (((index  >  0 )) ? (index  -  1 ) : index ), left_items , left_children , child_items , child_children ));
                                                                                          });
                                                                                        }) : ({ /* cicili#Let6669 */
                                                                                          typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) left_items ;
                                                                                          typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) left_children ;
                                                                                          // ----------
                                                                                          ;
                                                                                          ({ /* cicili#Let6671 */
                                                                                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn6672 */
                                                                                                    (left_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                    true ;
                                                                                                  }) &&  ({ /* cicili#Progn6674 */
                                                                                                    (left_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                    true ;
                                                                                                  }) ) ) );
                                                                                            // ----------
                                                                                            
                                                                                            ((__h_case_result ) ? ({ /* cicili#Progn6679 */
                                                                                                ({ /* cicili#Let6682 */
                                                                                                  __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6684 */
                                                                                                    __auto_type nchild  = nchild ;
                                                                                                    // ----------
                                                                                                    ((void)(nchild -> __h_table -> freeClass ));
                                                                                                    nchild ;
                                                                                                  });
                                                                                                  // ----------
                                                                                                  Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), (((index  >  0 )) ? (index  -  1 ) : index ), left_items , left_children , child_items , child_children ));
                                                                                                });
                                                                                              }) : ({ /* cicili#Let6692 */
                                                                                                // ----------
                                                                                                ;
                                                                                                ({ /* cicili#Progn6694 */
                                                                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL1-1"));
                                                                                                });
                                                                                              }));
                                                                                          });
                                                                                        }));
                                                                                    });
                                                                                  });
                                                                                }) : ({ /* cicili#Let6701 */
                                                                                  // ----------
                                                                                  ;
                                                                                  ({ /* cicili#Progn6703 */
                                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL1"));
                                                                                  });
                                                                                }));
                                                                            });
                                                                          });
                                                                        });
                                                                      }) : ({ /* cicili#Let6710 */
                                                                        // ----------
                                                                        ;
                                                                        ({ /* cicili#Progn6712 */
                                                                          ({ /* cicili#Let6716 */
                                                                            __auto_type match6715  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                            typeof((((match6715 . __h_data ). Just ). __h_0_mem )) wright ;
                                                                            // ----------
                                                                            ;
                                                                            ({ /* cicili#Let6719 */
                                                                              bool __h_case_result  = (true  &&  (((match6715 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6720 */
                                                                                    (wright  =  (((match6715 . __h_data ). Just ). __h_0_mem ) );
                                                                                    true ;
                                                                                  }) ) );
                                                                              // ----------
                                                                              
                                                                              ((__h_case_result ) ? ({ /* cicili#Progn6725 */
                                                                                  ({ /* cicili#Let6728 */
                                                                                    __auto_type __h_matchbox  = wright ;
                                                                                    // ----------
                                                                                    ({ /* cicili#Let6732 */
                                                                                      __auto_type match6731  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                      typeof((((match6731 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                      // ----------
                                                                                      ;
                                                                                      ({ /* cicili#Let6735 */
                                                                                        bool __h_case_result  = (true  &&  (((match6731 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6736 */
                                                                                              (unboxed  =  (((match6731 . __h_data ). Just ). __h_0_mem ) );
                                                                                              true ;
                                                                                            }) ) );
                                                                                        // ----------
                                                                                        
                                                                                        ((__h_case_result ) ? ({ /* cicili#Progn6741 */
                                                                                            ({ /* cicili#Let6745 */
                                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) right_items ;
                                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) right_children ;
                                                                                              // ----------
                                                                                              ;
                                                                                              ({ /* cicili#Let6747 */
                                                                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn6748 */
                                                                                                        (right_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                                        true ;
                                                                                                      }) &&  ({ /* cicili#Progn6750 */
                                                                                                        (right_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                                        true ;
                                                                                                      }) ) ) );
                                                                                                // ----------
                                                                                                
                                                                                                ((__h_case_result ) ? ({ /* cicili#Progn6755 */
                                                                                                    ({ /* cicili#Let6758 */
                                                                                                      __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6760 */
                                                                                                        __auto_type nchild  = nchild ;
                                                                                                        // ----------
                                                                                                        ((void)(nchild -> __h_table -> freeClass ));
                                                                                                        nchild ;
                                                                                                      });
                                                                                                      // ----------
                                                                                                      Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), index , child_items , child_children , right_items , right_children ));
                                                                                                    });
                                                                                                  }) : ({ /* cicili#Let6768 */
                                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) right_items ;
                                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) right_children ;
                                                                                                    // ----------
                                                                                                    ;
                                                                                                    ({ /* cicili#Let6770 */
                                                                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn6771 */
                                                                                                              (right_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                              true ;
                                                                                                            }) &&  ({ /* cicili#Progn6773 */
                                                                                                              (right_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                              true ;
                                                                                                            }) ) ) );
                                                                                                      // ----------
                                                                                                      
                                                                                                      ((__h_case_result ) ? ({ /* cicili#Progn6778 */
                                                                                                          ({ /* cicili#Let6781 */
                                                                                                            __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6783 */
                                                                                                              __auto_type nchild  = nchild ;
                                                                                                              // ----------
                                                                                                              ((void)(nchild -> __h_table -> freeClass ));
                                                                                                              nchild ;
                                                                                                            });
                                                                                                            // ----------
                                                                                                            Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), index , child_items , child_children , right_items , right_children ));
                                                                                                          });
                                                                                                        }) : ({ /* cicili#Let6791 */
                                                                                                          // ----------
                                                                                                          ;
                                                                                                          ({ /* cicili#Progn6793 */
                                                                                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR2-1"));
                                                                                                          });
                                                                                                        }));
                                                                                                    });
                                                                                                  }));
                                                                                              });
                                                                                            });
                                                                                          }) : ({ /* cicili#Let6800 */
                                                                                            // ----------
                                                                                            ;
                                                                                            ({ /* cicili#Progn6802 */
                                                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR2"));
                                                                                            });
                                                                                          }));
                                                                                      });
                                                                                    });
                                                                                  });
                                                                                }) : ({ /* cicili#Let6809 */
                                                                                  // ----------
                                                                                  ;
                                                                                  ({ /* cicili#Progn6811 */
                                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR1"));
                                                                                  });
                                                                                }));
                                                                            });
                                                                          });
                                                                        });
                                                                      }));
                                                                  });
                                                                });
                                                              }) : ({ /* cicili#Let6818 */
                                                                // ----------
                                                                ;
                                                                ({ /* cicili#Progn6820 */
                                                                  Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let6828 */
                                                                      __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6830 */
                                                                        __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                                        // ----------
                                                                        ((void)((r1 . __h_table )-> freeData ));
                                                                        r1 ;
                                                                      });
                                                                      __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6834 */
                                                                        __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                                                                        // ----------
                                                                        ((void)(r2 -> __h_table -> freeClass ));
                                                                        r2 ;
                                                                      });
                                                                      // ----------
                                                                      fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6843 */
                                                                          Rc_BTree_int_User __ciciliC_6842 (Rc_BTree_int_User __h_value ) {
                                                                            return clone_Rc_BTree_int_User (__h_value );
                                                                          }
                                                                          __ciciliC_6842 ;
                                                                        }), r2 );
                                                                    })));
                                                                });
                                                              }));
                                                          });
                                                        });
                                                      }) : ({ /* cicili#Let6850 */
                                                        __auto_type left  = match6589 ;
                                                        // ----------
                                                        ;
                                                        ({ /* cicili#Progn6852 */
                                                          left ;
                                                        });
                                                      }));
                                                  });
                                                });
                                              }) : ({ /* cicili#Let6856 */
                                                // ----------
                                                ;
                                                ({ /* cicili#Let6858 */
                                                  bool __h_case_result  = (true  &&  ((tr -> __h_ctor ) ==  __h_Internal_t  ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn6862 */
                                                      ({ /* cicili#Let6866 */
                                                        __auto_type match6865  = deleteWithParent_BTree_int_User (tree , (((index  >  0 )) ? (index  -  1 ) : index ), index , tr , skey , callback );
                                                        typeof((((match6865 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                        // ----------
                                                        ;
                                                        ({ /* cicili#Let6869 */
                                                          bool __h_case_result  = (true  &&  (((match6865 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn6870 */
                                                                (nchild  =  (((match6865 . __h_data ). Right ). __h_0_mem ) );
                                                                true ;
                                                              }) ) );
                                                          // ----------
                                                          
                                                          ((__h_case_result ) ? ({ /* cicili#Progn6875 */
                                                              ({ /* cicili#Let6879 */
                                                                typeof((((nchild -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                                                typeof((((nchild -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                                                // ----------
                                                                ;
                                                                ({ /* cicili#Let6881 */
                                                                  bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn6882 */
                                                                          (child_items  =  (((nchild -> __h_data ). Branch ). __h_0_mem ) );
                                                                          true ;
                                                                        }) &&  ({ /* cicili#Progn6884 */
                                                                          (child_children  =  (((nchild -> __h_data ). Branch ). __h_1_mem ) );
                                                                          true ;
                                                                        }) ) ) );
                                                                  // ----------
                                                                  
                                                                  ((__h_case_result ) ? ({ /* cicili#Progn6889 */
                                                                      ({ /* cicili#Let6893 */
                                                                        __auto_type match6892  = nth_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                                        typeof((((match6892 . __h_data ). Just ). __h_0_mem )) wleft ;
                                                                        // ----------
                                                                        ;
                                                                        ({ /* cicili#Let6896 */
                                                                          bool __h_case_result  = (true  &&  (((match6892 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6897 */
                                                                                (wleft  =  (((match6892 . __h_data ). Just ). __h_0_mem ) );
                                                                                true ;
                                                                              }) ) );
                                                                          // ----------
                                                                          
                                                                          ((__h_case_result ) ? ({ /* cicili#Progn6902 */
                                                                              ({ /* cicili#Let6905 */
                                                                                __auto_type __h_matchbox  = wleft ;
                                                                                // ----------
                                                                                ({ /* cicili#Let6909 */
                                                                                  __auto_type match6908  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                  typeof((((match6908 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                  // ----------
                                                                                  ;
                                                                                  ({ /* cicili#Let6912 */
                                                                                    bool __h_case_result  = (true  &&  (((match6908 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6913 */
                                                                                          (unboxed  =  (((match6908 . __h_data ). Just ). __h_0_mem ) );
                                                                                          true ;
                                                                                        }) ) );
                                                                                    // ----------
                                                                                    
                                                                                    ((__h_case_result ) ? ({ /* cicili#Progn6918 */
                                                                                        ({ /* cicili#Let6922 */
                                                                                          typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) left_items ;
                                                                                          typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) left_children ;
                                                                                          // ----------
                                                                                          ;
                                                                                          ({ /* cicili#Let6924 */
                                                                                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn6925 */
                                                                                                    (left_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                                    true ;
                                                                                                  }) &&  ({ /* cicili#Progn6927 */
                                                                                                    (left_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                                    true ;
                                                                                                  }) ) ) );
                                                                                            // ----------
                                                                                            
                                                                                            ((__h_case_result ) ? ({ /* cicili#Progn6932 */
                                                                                                ({ /* cicili#Let6935 */
                                                                                                  __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6937 */
                                                                                                    __auto_type nchild  = nchild ;
                                                                                                    // ----------
                                                                                                    ((void)(nchild -> __h_table -> freeClass ));
                                                                                                    nchild ;
                                                                                                  });
                                                                                                  // ----------
                                                                                                  Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), (((index  >  0 )) ? (index  -  1 ) : index ), left_items , left_children , child_items , child_children ));
                                                                                                });
                                                                                              }) : ({ /* cicili#Let6945 */
                                                                                                typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) left_items ;
                                                                                                typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) left_children ;
                                                                                                // ----------
                                                                                                ;
                                                                                                ({ /* cicili#Let6947 */
                                                                                                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn6948 */
                                                                                                          (left_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                          true ;
                                                                                                        }) &&  ({ /* cicili#Progn6950 */
                                                                                                          (left_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                          true ;
                                                                                                        }) ) ) );
                                                                                                  // ----------
                                                                                                  
                                                                                                  ((__h_case_result ) ? ({ /* cicili#Progn6955 */
                                                                                                      ({ /* cicili#Let6958 */
                                                                                                        __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6960 */
                                                                                                          __auto_type nchild  = nchild ;
                                                                                                          // ----------
                                                                                                          ((void)(nchild -> __h_table -> freeClass ));
                                                                                                          nchild ;
                                                                                                        });
                                                                                                        // ----------
                                                                                                        Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), (((index  >  0 )) ? (index  -  1 ) : index ), left_items , left_children , child_items , child_children ));
                                                                                                      });
                                                                                                    }) : ({ /* cicili#Let6968 */
                                                                                                      // ----------
                                                                                                      ;
                                                                                                      ({ /* cicili#Progn6970 */
                                                                                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL1-1"));
                                                                                                      });
                                                                                                    }));
                                                                                                });
                                                                                              }));
                                                                                          });
                                                                                        });
                                                                                      }) : ({ /* cicili#Let6977 */
                                                                                        // ----------
                                                                                        ;
                                                                                        ({ /* cicili#Progn6979 */
                                                                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL1"));
                                                                                        });
                                                                                      }));
                                                                                  });
                                                                                });
                                                                              });
                                                                            }) : ({ /* cicili#Let6986 */
                                                                              // ----------
                                                                              ;
                                                                              ({ /* cicili#Progn6988 */
                                                                                ({ /* cicili#Let6992 */
                                                                                  __auto_type match6991  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                                  typeof((((match6991 . __h_data ). Just ). __h_0_mem )) wright ;
                                                                                  // ----------
                                                                                  ;
                                                                                  ({ /* cicili#Let6995 */
                                                                                    bool __h_case_result  = (true  &&  (((match6991 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6996 */
                                                                                          (wright  =  (((match6991 . __h_data ). Just ). __h_0_mem ) );
                                                                                          true ;
                                                                                        }) ) );
                                                                                    // ----------
                                                                                    
                                                                                    ((__h_case_result ) ? ({ /* cicili#Progn7001 */
                                                                                        ({ /* cicili#Let7004 */
                                                                                          __auto_type __h_matchbox  = wright ;
                                                                                          // ----------
                                                                                          ({ /* cicili#Let7008 */
                                                                                            __auto_type match7007  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                            typeof((((match7007 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                            // ----------
                                                                                            ;
                                                                                            ({ /* cicili#Let7011 */
                                                                                              bool __h_case_result  = (true  &&  (((match7007 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7012 */
                                                                                                    (unboxed  =  (((match7007 . __h_data ). Just ). __h_0_mem ) );
                                                                                                    true ;
                                                                                                  }) ) );
                                                                                              // ----------
                                                                                              
                                                                                              ((__h_case_result ) ? ({ /* cicili#Progn7017 */
                                                                                                  ({ /* cicili#Let7021 */
                                                                                                    typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) right_items ;
                                                                                                    typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) right_children ;
                                                                                                    // ----------
                                                                                                    ;
                                                                                                    ({ /* cicili#Let7023 */
                                                                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn7024 */
                                                                                                              (right_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                                              true ;
                                                                                                            }) &&  ({ /* cicili#Progn7026 */
                                                                                                              (right_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                                              true ;
                                                                                                            }) ) ) );
                                                                                                      // ----------
                                                                                                      
                                                                                                      ((__h_case_result ) ? ({ /* cicili#Progn7031 */
                                                                                                          ({ /* cicili#Let7034 */
                                                                                                            __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7036 */
                                                                                                              __auto_type nchild  = nchild ;
                                                                                                              // ----------
                                                                                                              ((void)(nchild -> __h_table -> freeClass ));
                                                                                                              nchild ;
                                                                                                            });
                                                                                                            // ----------
                                                                                                            Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), index , child_items , child_children , right_items , right_children ));
                                                                                                          });
                                                                                                        }) : ({ /* cicili#Let7044 */
                                                                                                          typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) right_items ;
                                                                                                          typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) right_children ;
                                                                                                          // ----------
                                                                                                          ;
                                                                                                          ({ /* cicili#Let7046 */
                                                                                                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn7047 */
                                                                                                                    (right_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                                    true ;
                                                                                                                  }) &&  ({ /* cicili#Progn7049 */
                                                                                                                    (right_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                                    true ;
                                                                                                                  }) ) ) );
                                                                                                            // ----------
                                                                                                            
                                                                                                            ((__h_case_result ) ? ({ /* cicili#Progn7054 */
                                                                                                                ({ /* cicili#Let7057 */
                                                                                                                  __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7059 */
                                                                                                                    __auto_type nchild  = nchild ;
                                                                                                                    // ----------
                                                                                                                    ((void)(nchild -> __h_table -> freeClass ));
                                                                                                                    nchild ;
                                                                                                                  });
                                                                                                                  // ----------
                                                                                                                  Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), index , child_items , child_children , right_items , right_children ));
                                                                                                                });
                                                                                                              }) : ({ /* cicili#Let7067 */
                                                                                                                // ----------
                                                                                                                ;
                                                                                                                ({ /* cicili#Progn7069 */
                                                                                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR2-1"));
                                                                                                                });
                                                                                                              }));
                                                                                                          });
                                                                                                        }));
                                                                                                    });
                                                                                                  });
                                                                                                }) : ({ /* cicili#Let7076 */
                                                                                                  // ----------
                                                                                                  ;
                                                                                                  ({ /* cicili#Progn7078 */
                                                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR2"));
                                                                                                  });
                                                                                                }));
                                                                                            });
                                                                                          });
                                                                                        });
                                                                                      }) : ({ /* cicili#Let7085 */
                                                                                        // ----------
                                                                                        ;
                                                                                        ({ /* cicili#Progn7087 */
                                                                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR1"));
                                                                                        });
                                                                                      }));
                                                                                  });
                                                                                });
                                                                              });
                                                                            }));
                                                                        });
                                                                      });
                                                                    }) : ({ /* cicili#Let7094 */
                                                                      // ----------
                                                                      ;
                                                                      ({ /* cicili#Progn7096 */
                                                                        Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let7104 */
                                                                            __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7106 */
                                                                              __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                                              // ----------
                                                                              ((void)((r1 . __h_table )-> freeData ));
                                                                              r1 ;
                                                                            });
                                                                            __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7110 */
                                                                              __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                                                                              // ----------
                                                                              ((void)(r2 -> __h_table -> freeClass ));
                                                                              r2 ;
                                                                            });
                                                                            // ----------
                                                                            fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn7119 */
                                                                                Rc_BTree_int_User __ciciliC_7118 (Rc_BTree_int_User __h_value ) {
                                                                                  return clone_Rc_BTree_int_User (__h_value );
                                                                                }
                                                                                __ciciliC_7118 ;
                                                                              }), r2 );
                                                                          })));
                                                                      });
                                                                    }));
                                                                });
                                                              });
                                                            }) : ({ /* cicili#Let7126 */
                                                              __auto_type left  = match6865 ;
                                                              // ----------
                                                              ;
                                                              ({ /* cicili#Progn7128 */
                                                                left ;
                                                              });
                                                            }));
                                                        });
                                                      });
                                                    }) : ({ /* cicili#Let7132 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn7134 */
                                                        ({ /* cicili#Let7138 */
                                                          __auto_type match7137  = deleteWithParent_BTree_int_User (tree , (((index  >  0 )) ? (index  -  1 ) : index ), index , tr , skey , callback );
                                                          typeof((((match7137 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                          // ----------
                                                          ;
                                                          ({ /* cicili#Let7141 */
                                                            bool __h_case_result  = (true  &&  (((match7137 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn7142 */
                                                                  (nchild  =  (((match7137 . __h_data ). Right ). __h_0_mem ) );
                                                                  true ;
                                                                }) ) );
                                                            // ----------
                                                            
                                                            ((__h_case_result ) ? ({ /* cicili#Progn7147 */
                                                                borrowLeaf_BTree_int_User (items , children , wleft , current , index , nchild , callback );
                                                              }) : ({ /* cicili#Let7152 */
                                                                __auto_type left  = match7137 ;
                                                                // ----------
                                                                ;
                                                                ({ /* cicili#Progn7154 */
                                                                  left ;
                                                                });
                                                              }));
                                                          });
                                                        });
                                                      });
                                                    }));
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* cicili#Let7158 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn7160 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CHILD (head , index ));
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let7167 */
                                // ----------
                                ;
                                ({ /* cicili#Progn7169 */
                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_NOT_FOUND (skey ));
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let7176 */
                        // ----------
                        ;
                        ({ /* cicili#Let7178 */
                          bool __h_case_result  = (true  &&  ((match6543 . __h_ctor ) ==  __h_EQ_t  ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn7182 */
                              ({ /* cicili#Let7185 */
                                __auto_type result  = borrowInternal_BTree_int_User (tree , items , children , current , index , callback );
                                // ----------
                                { /* cicili#Let7190 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Let7192 */
                                    bool __h_case_result  = (true  &&  ((result . __h_ctor ) ==  __h_Right_t  ) );
                                    // ----------
                                    
                                    if (__h_case_result )
                                      { /* cicili#Block7197 */
                                        if (callback )
                                          { /* cicili#Block7201 */
                                            callback (head );
                                          }
                                      }
                                  });
                                }
                                result ;
                              });
                            }) : ({ /* cicili#Let7205 */
                              // ----------
                              ;
                              ({ /* cicili#Progn7207 */
                                deleteInternal (tree , items , children , Just_List_BTree_int_User_pair_t (current ), tail , (index  +  1 ));
                              });
                            }));
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let7212 */
                // ----------
                ;
                ({ /* cicili#Progn7214 */
                  ({ /* cicili#Let7218 */
                    __auto_type match7217  = nth_List_Rc_BTree_int_User (index , children );
                    typeof((((match7217 . __h_data ). Just ). __h_0_mem )) child ;
                    // ----------
                    ;
                    ({ /* cicili#Let7221 */
                      bool __h_case_result  = (true  &&  (((match7217 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7222 */
                            (child  =  (((match7217 . __h_data ). Just ). __h_0_mem ) );
                            true ;
                          }) ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* cicili#Progn7227 */
                          ({ /* cicili#Let7231 */
                            __auto_type match7230  = get_Rc_BTree_int_User (child );
                            typeof((((match7230 . __h_data ). Just ). __h_0_mem )) tr ;
                            // ----------
                            ;
                            ({ /* cicili#Let7234 */
                              bool __h_case_result  = (true  &&  (((match7230 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7235 */
                                    (tr  =  (((match7230 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* cicili#Progn7240 */
                                  ({ /* cicili#Let7244 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Let7246 */
                                      bool __h_case_result  = (true  &&  ((tr -> __h_ctor ) ==  __h_Branch_t  ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn7250 */
                                          ({ /* cicili#Let7254 */
                                            __auto_type match7253  = deleteWithParent_BTree_int_User (tree , (index  -  1 ), index , tr , skey , callback );
                                            typeof((((match7253 . __h_data ). Right ). __h_0_mem )) nchild ;
                                            // ----------
                                            ;
                                            ({ /* cicili#Let7257 */
                                              bool __h_case_result  = (true  &&  (((match7253 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn7258 */
                                                    (nchild  =  (((match7253 . __h_data ). Right ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              
                                              ((__h_case_result ) ? ({ /* cicili#Progn7263 */
                                                  ({ /* cicili#Let7267 */
                                                    typeof((((nchild -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                                    typeof((((nchild -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Let7269 */
                                                      bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn7270 */
                                                              (child_items  =  (((nchild -> __h_data ). Branch ). __h_0_mem ) );
                                                              true ;
                                                            }) &&  ({ /* cicili#Progn7272 */
                                                              (child_children  =  (((nchild -> __h_data ). Branch ). __h_1_mem ) );
                                                              true ;
                                                            }) ) ) );
                                                      // ----------
                                                      
                                                      ((__h_case_result ) ? ({ /* cicili#Progn7277 */
                                                          ({ /* cicili#Let7281 */
                                                            __auto_type match7280  = nth_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                            typeof((((match7280 . __h_data ). Just ). __h_0_mem )) wleft ;
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Let7284 */
                                                              bool __h_case_result  = (true  &&  (((match7280 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7285 */
                                                                    (wleft  =  (((match7280 . __h_data ). Just ). __h_0_mem ) );
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              
                                                              ((__h_case_result ) ? ({ /* cicili#Progn7290 */
                                                                  ({ /* cicili#Let7293 */
                                                                    __auto_type __h_matchbox  = wleft ;
                                                                    // ----------
                                                                    ({ /* cicili#Let7297 */
                                                                      __auto_type match7296  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                      typeof((((match7296 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                      // ----------
                                                                      ;
                                                                      ({ /* cicili#Let7300 */
                                                                        bool __h_case_result  = (true  &&  (((match7296 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7301 */
                                                                              (unboxed  =  (((match7296 . __h_data ). Just ). __h_0_mem ) );
                                                                              true ;
                                                                            }) ) );
                                                                        // ----------
                                                                        
                                                                        ((__h_case_result ) ? ({ /* cicili#Progn7306 */
                                                                            ({ /* cicili#Let7310 */
                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) left_items ;
                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) left_children ;
                                                                              // ----------
                                                                              ;
                                                                              ({ /* cicili#Let7312 */
                                                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn7313 */
                                                                                        (left_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                        true ;
                                                                                      }) &&  ({ /* cicili#Progn7315 */
                                                                                        (left_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                        true ;
                                                                                      }) ) ) );
                                                                                // ----------
                                                                                
                                                                                ((__h_case_result ) ? ({ /* cicili#Progn7320 */
                                                                                    ({ /* cicili#Let7323 */
                                                                                      __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7325 */
                                                                                        __auto_type nchild  = nchild ;
                                                                                        // ----------
                                                                                        ((void)(nchild -> __h_table -> freeClass ));
                                                                                        nchild ;
                                                                                      });
                                                                                      // ----------
                                                                                      Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), (index  -  1 ), left_items , left_children , child_items , child_children ));
                                                                                    });
                                                                                  }) : ({ /* cicili#Let7333 */
                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) left_items ;
                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) left_children ;
                                                                                    // ----------
                                                                                    ;
                                                                                    ({ /* cicili#Let7335 */
                                                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn7336 */
                                                                                              (left_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                              true ;
                                                                                            }) &&  ({ /* cicili#Progn7338 */
                                                                                              (left_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                              true ;
                                                                                            }) ) ) );
                                                                                      // ----------
                                                                                      
                                                                                      ((__h_case_result ) ? ({ /* cicili#Progn7343 */
                                                                                          ({ /* cicili#Let7346 */
                                                                                            __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7348 */
                                                                                              __auto_type nchild  = nchild ;
                                                                                              // ----------
                                                                                              ((void)(nchild -> __h_table -> freeClass ));
                                                                                              nchild ;
                                                                                            });
                                                                                            // ----------
                                                                                            Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), (index  -  1 ), left_items , left_children , child_items , child_children ));
                                                                                          });
                                                                                        }) : ({ /* cicili#Let7356 */
                                                                                          // ----------
                                                                                          ;
                                                                                          ({ /* cicili#Progn7358 */
                                                                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL111"));
                                                                                          });
                                                                                        }));
                                                                                    });
                                                                                  }));
                                                                              });
                                                                            });
                                                                          }) : ({ /* cicili#Let7365 */
                                                                            // ----------
                                                                            ;
                                                                            ({ /* cicili#Progn7367 */
                                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL11"));
                                                                            });
                                                                          }));
                                                                      });
                                                                    });
                                                                  });
                                                                }) : ({ /* cicili#Let7374 */
                                                                  // ----------
                                                                  ;
                                                                  ({ /* cicili#Progn7376 */
                                                                    ({ /* cicili#Let7380 */
                                                                      __auto_type match7379  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                      typeof((((match7379 . __h_data ). Just ). __h_0_mem )) wright ;
                                                                      // ----------
                                                                      ;
                                                                      ({ /* cicili#Let7383 */
                                                                        bool __h_case_result  = (true  &&  (((match7379 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7384 */
                                                                              (wright  =  (((match7379 . __h_data ). Just ). __h_0_mem ) );
                                                                              true ;
                                                                            }) ) );
                                                                        // ----------
                                                                        
                                                                        ((__h_case_result ) ? ({ /* cicili#Progn7389 */
                                                                            ({ /* cicili#Let7392 */
                                                                              __auto_type __h_matchbox  = wright ;
                                                                              // ----------
                                                                              ({ /* cicili#Let7396 */
                                                                                __auto_type match7395  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                typeof((((match7395 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                // ----------
                                                                                ;
                                                                                ({ /* cicili#Let7399 */
                                                                                  bool __h_case_result  = (true  &&  (((match7395 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7400 */
                                                                                        (unboxed  =  (((match7395 . __h_data ). Just ). __h_0_mem ) );
                                                                                        true ;
                                                                                      }) ) );
                                                                                  // ----------
                                                                                  
                                                                                  ((__h_case_result ) ? ({ /* cicili#Progn7405 */
                                                                                      ({ /* cicili#Let7409 */
                                                                                        typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) right_items ;
                                                                                        typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) right_children ;
                                                                                        // ----------
                                                                                        ;
                                                                                        ({ /* cicili#Let7411 */
                                                                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn7412 */
                                                                                                  (right_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                                  true ;
                                                                                                }) &&  ({ /* cicili#Progn7414 */
                                                                                                  (right_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                                  true ;
                                                                                                }) ) ) );
                                                                                          // ----------
                                                                                          
                                                                                          ((__h_case_result ) ? ({ /* cicili#Progn7419 */
                                                                                              ({ /* cicili#Let7422 */
                                                                                                __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7424 */
                                                                                                  __auto_type nchild  = nchild ;
                                                                                                  // ----------
                                                                                                  ((void)(nchild -> __h_table -> freeClass ));
                                                                                                  nchild ;
                                                                                                });
                                                                                                // ----------
                                                                                                Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), index , child_items , child_children , right_items , right_children ));
                                                                                              });
                                                                                            }) : ({ /* cicili#Let7432 */
                                                                                              typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) right_items ;
                                                                                              typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) right_children ;
                                                                                              // ----------
                                                                                              ;
                                                                                              ({ /* cicili#Let7434 */
                                                                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn7435 */
                                                                                                        (right_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                        true ;
                                                                                                      }) &&  ({ /* cicili#Progn7437 */
                                                                                                        (right_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                        true ;
                                                                                                      }) ) ) );
                                                                                                // ----------
                                                                                                
                                                                                                ((__h_case_result ) ? ({ /* cicili#Progn7442 */
                                                                                                    ({ /* cicili#Let7445 */
                                                                                                      __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7447 */
                                                                                                        __auto_type nchild  = nchild ;
                                                                                                        // ----------
                                                                                                        ((void)(nchild -> __h_table -> freeClass ));
                                                                                                        nchild ;
                                                                                                      });
                                                                                                      // ----------
                                                                                                      Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), index , child_items , child_children , right_items , right_children ));
                                                                                                    });
                                                                                                  }) : ({ /* cicili#Let7455 */
                                                                                                    // ----------
                                                                                                    ;
                                                                                                    ({ /* cicili#Progn7457 */
                                                                                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR222"));
                                                                                                    });
                                                                                                  }));
                                                                                              });
                                                                                            }));
                                                                                        });
                                                                                      });
                                                                                    }) : ({ /* cicili#Let7464 */
                                                                                      // ----------
                                                                                      ;
                                                                                      ({ /* cicili#Progn7466 */
                                                                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR22"));
                                                                                      });
                                                                                    }));
                                                                                });
                                                                              });
                                                                            });
                                                                          }) : ({ /* cicili#Let7473 */
                                                                            // ----------
                                                                            ;
                                                                            ({ /* cicili#Progn7475 */
                                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR221"));
                                                                            });
                                                                          }));
                                                                      });
                                                                    });
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        }) : ({ /* cicili#Let7482 */
                                                          // ----------
                                                          ;
                                                          ({ /* cicili#Progn7484 */
                                                            Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let7492 */
                                                                __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7494 */
                                                                  __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                                  // ----------
                                                                  ((void)((r1 . __h_table )-> freeData ));
                                                                  r1 ;
                                                                });
                                                                __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7498 */
                                                                  __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                                                                  // ----------
                                                                  ((void)(r2 -> __h_table -> freeClass ));
                                                                  r2 ;
                                                                });
                                                                // ----------
                                                                fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn7507 */
                                                                    Rc_BTree_int_User __ciciliC_7506 (Rc_BTree_int_User __h_value ) {
                                                                      return clone_Rc_BTree_int_User (__h_value );
                                                                    }
                                                                    __ciciliC_7506 ;
                                                                  }), r2 );
                                                              })));
                                                          });
                                                        }));
                                                    });
                                                  });
                                                }) : ({ /* cicili#Let7514 */
                                                  __auto_type left  = match7253 ;
                                                  // ----------
                                                  ;
                                                  ({ /* cicili#Progn7516 */
                                                    left ;
                                                  });
                                                }));
                                            });
                                          });
                                        }) : ({ /* cicili#Let7520 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Let7522 */
                                            bool __h_case_result  = (true  &&  ((tr -> __h_ctor ) ==  __h_Internal_t  ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* cicili#Progn7526 */
                                                ({ /* cicili#Let7530 */
                                                  __auto_type match7529  = deleteWithParent_BTree_int_User (tree , (index  -  1 ), index , tr , skey , callback );
                                                  typeof((((match7529 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                  // ----------
                                                  ;
                                                  ({ /* cicili#Let7533 */
                                                    bool __h_case_result  = (true  &&  (((match7529 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn7534 */
                                                          (nchild  =  (((match7529 . __h_data ). Right ). __h_0_mem ) );
                                                          true ;
                                                        }) ) );
                                                    // ----------
                                                    
                                                    ((__h_case_result ) ? ({ /* cicili#Progn7539 */
                                                        ({ /* cicili#Let7543 */
                                                          typeof((((nchild -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                                          typeof((((nchild -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                                          // ----------
                                                          ;
                                                          ({ /* cicili#Let7545 */
                                                            bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn7546 */
                                                                    (child_items  =  (((nchild -> __h_data ). Branch ). __h_0_mem ) );
                                                                    true ;
                                                                  }) &&  ({ /* cicili#Progn7548 */
                                                                    (child_children  =  (((nchild -> __h_data ). Branch ). __h_1_mem ) );
                                                                    true ;
                                                                  }) ) ) );
                                                            // ----------
                                                            
                                                            ((__h_case_result ) ? ({ /* cicili#Progn7553 */
                                                                ({ /* cicili#Let7557 */
                                                                  __auto_type match7556  = nth_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                                  typeof((((match7556 . __h_data ). Just ). __h_0_mem )) wleft ;
                                                                  // ----------
                                                                  ;
                                                                  ({ /* cicili#Let7560 */
                                                                    bool __h_case_result  = (true  &&  (((match7556 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7561 */
                                                                          (wleft  =  (((match7556 . __h_data ). Just ). __h_0_mem ) );
                                                                          true ;
                                                                        }) ) );
                                                                    // ----------
                                                                    
                                                                    ((__h_case_result ) ? ({ /* cicili#Progn7566 */
                                                                        ({ /* cicili#Let7569 */
                                                                          __auto_type __h_matchbox  = wleft ;
                                                                          // ----------
                                                                          ({ /* cicili#Let7573 */
                                                                            __auto_type match7572  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                            typeof((((match7572 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                            // ----------
                                                                            ;
                                                                            ({ /* cicili#Let7576 */
                                                                              bool __h_case_result  = (true  &&  (((match7572 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7577 */
                                                                                    (unboxed  =  (((match7572 . __h_data ). Just ). __h_0_mem ) );
                                                                                    true ;
                                                                                  }) ) );
                                                                              // ----------
                                                                              
                                                                              ((__h_case_result ) ? ({ /* cicili#Progn7582 */
                                                                                  ({ /* cicili#Let7586 */
                                                                                    typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) left_items ;
                                                                                    typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) left_children ;
                                                                                    // ----------
                                                                                    ;
                                                                                    ({ /* cicili#Let7588 */
                                                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn7589 */
                                                                                              (left_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                              true ;
                                                                                            }) &&  ({ /* cicili#Progn7591 */
                                                                                              (left_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                              true ;
                                                                                            }) ) ) );
                                                                                      // ----------
                                                                                      
                                                                                      ((__h_case_result ) ? ({ /* cicili#Progn7596 */
                                                                                          ({ /* cicili#Let7599 */
                                                                                            __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7601 */
                                                                                              __auto_type nchild  = nchild ;
                                                                                              // ----------
                                                                                              ((void)(nchild -> __h_table -> freeClass ));
                                                                                              nchild ;
                                                                                            });
                                                                                            // ----------
                                                                                            Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), (index  -  1 ), left_items , left_children , child_items , child_children ));
                                                                                          });
                                                                                        }) : ({ /* cicili#Let7609 */
                                                                                          typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) left_items ;
                                                                                          typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) left_children ;
                                                                                          // ----------
                                                                                          ;
                                                                                          ({ /* cicili#Let7611 */
                                                                                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn7612 */
                                                                                                    (left_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                    true ;
                                                                                                  }) &&  ({ /* cicili#Progn7614 */
                                                                                                    (left_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                    true ;
                                                                                                  }) ) ) );
                                                                                            // ----------
                                                                                            
                                                                                            ((__h_case_result ) ? ({ /* cicili#Progn7619 */
                                                                                                ({ /* cicili#Let7622 */
                                                                                                  __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7624 */
                                                                                                    __auto_type nchild  = nchild ;
                                                                                                    // ----------
                                                                                                    ((void)(nchild -> __h_table -> freeClass ));
                                                                                                    nchild ;
                                                                                                  });
                                                                                                  // ----------
                                                                                                  Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), (index  -  1 ), left_items , left_children , child_items , child_children ));
                                                                                                });
                                                                                              }) : ({ /* cicili#Let7632 */
                                                                                                // ----------
                                                                                                ;
                                                                                                ({ /* cicili#Progn7634 */
                                                                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL111"));
                                                                                                });
                                                                                              }));
                                                                                          });
                                                                                        }));
                                                                                    });
                                                                                  });
                                                                                }) : ({ /* cicili#Let7641 */
                                                                                  // ----------
                                                                                  ;
                                                                                  ({ /* cicili#Progn7643 */
                                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL11"));
                                                                                  });
                                                                                }));
                                                                            });
                                                                          });
                                                                        });
                                                                      }) : ({ /* cicili#Let7650 */
                                                                        // ----------
                                                                        ;
                                                                        ({ /* cicili#Progn7652 */
                                                                          ({ /* cicili#Let7656 */
                                                                            __auto_type match7655  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                            typeof((((match7655 . __h_data ). Just ). __h_0_mem )) wright ;
                                                                            // ----------
                                                                            ;
                                                                            ({ /* cicili#Let7659 */
                                                                              bool __h_case_result  = (true  &&  (((match7655 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7660 */
                                                                                    (wright  =  (((match7655 . __h_data ). Just ). __h_0_mem ) );
                                                                                    true ;
                                                                                  }) ) );
                                                                              // ----------
                                                                              
                                                                              ((__h_case_result ) ? ({ /* cicili#Progn7665 */
                                                                                  ({ /* cicili#Let7668 */
                                                                                    __auto_type __h_matchbox  = wright ;
                                                                                    // ----------
                                                                                    ({ /* cicili#Let7672 */
                                                                                      __auto_type match7671  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                      typeof((((match7671 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                      // ----------
                                                                                      ;
                                                                                      ({ /* cicili#Let7675 */
                                                                                        bool __h_case_result  = (true  &&  (((match7671 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7676 */
                                                                                              (unboxed  =  (((match7671 . __h_data ). Just ). __h_0_mem ) );
                                                                                              true ;
                                                                                            }) ) );
                                                                                        // ----------
                                                                                        
                                                                                        ((__h_case_result ) ? ({ /* cicili#Progn7681 */
                                                                                            ({ /* cicili#Let7685 */
                                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) right_items ;
                                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) right_children ;
                                                                                              // ----------
                                                                                              ;
                                                                                              ({ /* cicili#Let7687 */
                                                                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn7688 */
                                                                                                        (right_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                                        true ;
                                                                                                      }) &&  ({ /* cicili#Progn7690 */
                                                                                                        (right_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                                        true ;
                                                                                                      }) ) ) );
                                                                                                // ----------
                                                                                                
                                                                                                ((__h_case_result ) ? ({ /* cicili#Progn7695 */
                                                                                                    ({ /* cicili#Let7698 */
                                                                                                      __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7700 */
                                                                                                        __auto_type nchild  = nchild ;
                                                                                                        // ----------
                                                                                                        ((void)(nchild -> __h_table -> freeClass ));
                                                                                                        nchild ;
                                                                                                      });
                                                                                                      // ----------
                                                                                                      Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), index , child_items , child_children , right_items , right_children ));
                                                                                                    });
                                                                                                  }) : ({ /* cicili#Let7708 */
                                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) right_items ;
                                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) right_children ;
                                                                                                    // ----------
                                                                                                    ;
                                                                                                    ({ /* cicili#Let7710 */
                                                                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn7711 */
                                                                                                              (right_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                              true ;
                                                                                                            }) &&  ({ /* cicili#Progn7713 */
                                                                                                              (right_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                              true ;
                                                                                                            }) ) ) );
                                                                                                      // ----------
                                                                                                      
                                                                                                      ((__h_case_result ) ? ({ /* cicili#Progn7718 */
                                                                                                          ({ /* cicili#Let7721 */
                                                                                                            __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7723 */
                                                                                                              __auto_type nchild  = nchild ;
                                                                                                              // ----------
                                                                                                              ((void)(nchild -> __h_table -> freeClass ));
                                                                                                              nchild ;
                                                                                                            });
                                                                                                            // ----------
                                                                                                            Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), index , child_items , child_children , right_items , right_children ));
                                                                                                          });
                                                                                                        }) : ({ /* cicili#Let7731 */
                                                                                                          // ----------
                                                                                                          ;
                                                                                                          ({ /* cicili#Progn7733 */
                                                                                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR222"));
                                                                                                          });
                                                                                                        }));
                                                                                                    });
                                                                                                  }));
                                                                                              });
                                                                                            });
                                                                                          }) : ({ /* cicili#Let7740 */
                                                                                            // ----------
                                                                                            ;
                                                                                            ({ /* cicili#Progn7742 */
                                                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR22"));
                                                                                            });
                                                                                          }));
                                                                                      });
                                                                                    });
                                                                                  });
                                                                                }) : ({ /* cicili#Let7749 */
                                                                                  // ----------
                                                                                  ;
                                                                                  ({ /* cicili#Progn7751 */
                                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR221"));
                                                                                  });
                                                                                }));
                                                                            });
                                                                          });
                                                                        });
                                                                      }));
                                                                  });
                                                                });
                                                              }) : ({ /* cicili#Let7758 */
                                                                // ----------
                                                                ;
                                                                ({ /* cicili#Progn7760 */
                                                                  Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let7768 */
                                                                      __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7770 */
                                                                        __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                                        // ----------
                                                                        ((void)((r1 . __h_table )-> freeData ));
                                                                        r1 ;
                                                                      });
                                                                      __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7774 */
                                                                        __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                                                                        // ----------
                                                                        ((void)(r2 -> __h_table -> freeClass ));
                                                                        r2 ;
                                                                      });
                                                                      // ----------
                                                                      fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn7783 */
                                                                          Rc_BTree_int_User __ciciliC_7782 (Rc_BTree_int_User __h_value ) {
                                                                            return clone_Rc_BTree_int_User (__h_value );
                                                                          }
                                                                          __ciciliC_7782 ;
                                                                        }), r2 );
                                                                    })));
                                                                });
                                                              }));
                                                          });
                                                        });
                                                      }) : ({ /* cicili#Let7790 */
                                                        __auto_type left  = match7529 ;
                                                        // ----------
                                                        ;
                                                        ({ /* cicili#Progn7792 */
                                                          left ;
                                                        });
                                                      }));
                                                  });
                                                });
                                              }) : ({ /* cicili#Let7796 */
                                                // ----------
                                                ;
                                                ({ /* cicili#Progn7798 */
                                                  ({ /* cicili#Let7802 */
                                                    __auto_type match7801  = deleteWithParent_BTree_int_User (tree , (index  -  1 ), index , tr , skey , callback );
                                                    typeof((((match7801 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Let7805 */
                                                      bool __h_case_result  = (true  &&  (((match7801 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn7806 */
                                                            (nchild  =  (((match7801 . __h_data ). Right ). __h_0_mem ) );
                                                            true ;
                                                          }) ) );
                                                      // ----------
                                                      
                                                      ((__h_case_result ) ? ({ /* cicili#Progn7811 */
                                                          borrowLeaf_BTree_int_User (items , children , wleft , current , index , nchild , callback );
                                                        }) : ({ /* cicili#Let7816 */
                                                          __auto_type left  = match7801 ;
                                                          // ----------
                                                          ;
                                                          ({ /* cicili#Progn7818 */
                                                            left ;
                                                          });
                                                        }));
                                                    });
                                                  });
                                                });
                                              }));
                                          });
                                        }));
                                    });
                                  });
                                }) : ({ /* cicili#Let7822 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Progn7824 */
                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CHILD (head , index ));
                                  });
                                }));
                            });
                          });
                        }) : ({ /* cicili#Let7831 */
                          // ----------
                          ;
                          ({ /* cicili#Progn7833 */
                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_NOT_FOUND (skey ));
                          });
                        }));
                    });
                  });
                });
              }));
          });
        });
        // ----------
        ({ /* cicili#Let7842 */
          __auto_type rs  = ({ /* cicili#Let7845 */
            typeof((((result . __h_data ). Right ). __h_0_mem )) ntr ;
            // ----------
            ;
            ({ /* cicili#Let7847 */
              bool __h_case_result  = (true  &&  (((result . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn7848 */
                    (ntr  =  (((result . __h_data ). Right ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn7853 */
                  ({ /* cicili#Let7857 */
                    typeof((((ntr -> __h_data ). Branch ). __h_0_mem )) items ;
                    typeof((((ntr -> __h_data ). Branch ). __h_1_mem )) children ;
                    // ----------
                    ;
                    ({ /* cicili#Let7859 */
                      bool __h_case_result  = (true  &&  (((ntr -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn7860 */
                              (items  =  (((ntr -> __h_data ). Branch ). __h_0_mem ) );
                              true ;
                            }) &&  ({ /* cicili#Progn7862 */
                              (children  =  (((ntr -> __h_data ). Branch ). __h_1_mem ) );
                              true ;
                            }) ) ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* cicili#Progn7867 */
                          ({ /* cicili#Let7870 */
                            __auto_type items_len  = hasLen_List_BTree_int_User_pair_t (items , (L_BTree_int_User  -  1 ));
                            // ----------
                            (((items_len  ==  (L_BTree_int_User  -  1 ) )) ? result  : ({ /* cicili#Let7878 */
                                typeof((((wparent . __h_data ). Just ). __h_0_mem )) ptree ;
                                // ----------
                                ;
                                ({ /* cicili#Let7880 */
                                  bool __h_case_result  = (true  &&  (((wparent . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7881 */
                                        (ptree  =  (((wparent . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn7886 */
                                      ({ /* cicili#Let7890 */
                                        typeof((((ptree -> __h_data ). Branch ). __h_0_mem )) pitems ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let7892 */
                                          bool __h_case_result  = (true  &&  (((ptree -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn7893 */
                                                (pitems  =  (((ptree -> __h_data ). Branch ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn7898 */
                                              ({ /* cicili#Let7902 */
                                                __auto_type match7901  = nth_List_BTree_int_User_pair_t (pitem_index , pitems );
                                                typeof((((match7901 . __h_data ). Just ). __h_0_mem )) bitem ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let7905 */
                                                  bool __h_case_result  = (true  &&  (((match7901 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7906 */
                                                        (bitem  =  (((match7901 . __h_data ). Just ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn7911 */
                                                      ({ /* cicili#Let7914 */
                                                        __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7916 */
                                                          __auto_type ntr  = ntr ;
                                                          // ----------
                                                          ((void)(ntr -> __h_table -> freeClass ));
                                                          ntr ;
                                                        });
                                                        // ----------
                                                        Right_BTree_int_User_Error_BTree_int_User (Branch_BTree_int_User (insertAt_List_BTree_int_User_pair_t (items , bitem , index ), fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn7929 */
                                                            Rc_BTree_int_User __ciciliC_7928 (Rc_BTree_int_User __h_value ) {
                                                              return clone_Rc_BTree_int_User (__h_value );
                                                            }
                                                            __ciciliC_7928 ;
                                                          }), children )));
                                                      });
                                                    }) : ({ /* cicili#Let7936 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn7938 */
                                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 2"));
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let7945 */
                                              typeof((((ptree -> __h_data ). Internal ). __h_0_mem )) pitems ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let7947 */
                                                bool __h_case_result  = (true  &&  (((ptree -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn7948 */
                                                      (pitems  =  (((ptree -> __h_data ). Internal ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn7953 */
                                                    ({ /* cicili#Let7957 */
                                                      __auto_type match7956  = nth_List_BTree_int_User_pair_t (pitem_index , pitems );
                                                      typeof((((match7956 . __h_data ). Just ). __h_0_mem )) bitem ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let7960 */
                                                        bool __h_case_result  = (true  &&  (((match7956 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7961 */
                                                              (bitem  =  (((match7956 . __h_data ). Just ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn7966 */
                                                            ({ /* cicili#Let7969 */
                                                              __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7971 */
                                                                __auto_type ntr  = ntr ;
                                                                // ----------
                                                                ((void)(ntr -> __h_table -> freeClass ));
                                                                ntr ;
                                                              });
                                                              // ----------
                                                              Right_BTree_int_User_Error_BTree_int_User (Branch_BTree_int_User (insertAt_List_BTree_int_User_pair_t (items , bitem , index ), fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn7984 */
                                                                  Rc_BTree_int_User __ciciliC_7983 (Rc_BTree_int_User __h_value ) {
                                                                    return clone_Rc_BTree_int_User (__h_value );
                                                                  }
                                                                  __ciciliC_7983 ;
                                                                }), children )));
                                                            });
                                                          }) : ({ /* cicili#Let7991 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn7993 */
                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 2"));
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  }) : ({ /* cicili#Let8000 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn8002 */
                                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 1"));
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let8009 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn8011 */
                                        (((items_len  ==  0 )) ? ({ /* cicili#Let8016 */
                                            typeof((((children -> __h_data ). Cons ). __h_0_mem )) head ;
                                            // ----------
                                            ;
                                            ({ /* cicili#Let8018 */
                                              bool __h_case_result  = (true  &&  (((children -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn8019 */
                                                    (head  =  (((children -> __h_data ). Cons ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              
                                              ((__h_case_result ) ? ({ /* cicili#Progn8024 */
                                                  ({ /* cicili#Let8027 */
                                                    __auto_type __h_matchbox  = clone_Rc_BTree_int_User (head );
                                                    // ----------
                                                    ({ /* cicili#Let8032 */
                                                      __auto_type match8031  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                      typeof((((match8031 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let8035 */
                                                        bool __h_case_result  = (true  &&  (((match8031 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8036 */
                                                              (unboxed  =  (((match8031 . __h_data ). Just ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn8041 */
                                                            ({ /* cicili#Let8045 */
                                                              __auto_type chtr  = unboxed ;
                                                              // ----------
                                                              ;
                                                              ({ /* cicili#Progn8047 */
                                                                ({ /* cicili#Let8050 */
                                                                  __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8052 */
                                                                    __auto_type ntr  = ntr ;
                                                                    // ----------
                                                                    ((void)(ntr -> __h_table -> freeClass ));
                                                                    ntr ;
                                                                  });
                                                                  // ----------
                                                                  Right_BTree_int_User_Error_BTree_int_User (chtr );
                                                                });
                                                              });
                                                            });
                                                          }) : ({ /* cicili#Let8059 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn8061 */
                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 3"));
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  });
                                                }) : ({ /* cicili#Let8068 */
                                                  // ----------
                                                  ;
                                                  ({ /* cicili#Progn8070 */
                                                    result ;
                                                  });
                                                }));
                                            });
                                          }) : result );
                                      });
                                    }));
                                });
                              }));
                          });
                        }) : ({ /* cicili#Let8074 */
                          typeof((((ntr -> __h_data ). Internal ). __h_0_mem )) items ;
                          typeof((((ntr -> __h_data ). Internal ). __h_1_mem )) children ;
                          // ----------
                          ;
                          ({ /* cicili#Let8076 */
                            bool __h_case_result  = (true  &&  (((ntr -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn8077 */
                                    (items  =  (((ntr -> __h_data ). Internal ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn8079 */
                                    (children  =  (((ntr -> __h_data ). Internal ). __h_1_mem ) );
                                    true ;
                                  }) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn8084 */
                                ({ /* cicili#Let8087 */
                                  __auto_type items_len  = hasLen_List_BTree_int_User_pair_t (items , (L_BTree_int_User  -  1 ));
                                  // ----------
                                  (((items_len  ==  (L_BTree_int_User  -  1 ) )) ? result  : ({ /* cicili#Let8095 */
                                      typeof((((wparent . __h_data ). Just ). __h_0_mem )) ptree ;
                                      // ----------
                                      ;
                                      ({ /* cicili#Let8097 */
                                        bool __h_case_result  = (true  &&  (((wparent . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8098 */
                                              (ptree  =  (((wparent . __h_data ). Just ). __h_0_mem ) );
                                              true ;
                                            }) ) );
                                        // ----------
                                        
                                        ((__h_case_result ) ? ({ /* cicili#Progn8103 */
                                            ({ /* cicili#Let8107 */
                                              typeof((((ptree -> __h_data ). Branch ). __h_0_mem )) pitems ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let8109 */
                                                bool __h_case_result  = (true  &&  (((ptree -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn8110 */
                                                      (pitems  =  (((ptree -> __h_data ). Branch ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn8115 */
                                                    ({ /* cicili#Let8119 */
                                                      __auto_type match8118  = nth_List_BTree_int_User_pair_t (pitem_index , pitems );
                                                      typeof((((match8118 . __h_data ). Just ). __h_0_mem )) bitem ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let8122 */
                                                        bool __h_case_result  = (true  &&  (((match8118 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8123 */
                                                              (bitem  =  (((match8118 . __h_data ). Just ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn8128 */
                                                            ({ /* cicili#Let8131 */
                                                              __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8133 */
                                                                __auto_type ntr  = ntr ;
                                                                // ----------
                                                                ((void)(ntr -> __h_table -> freeClass ));
                                                                ntr ;
                                                              });
                                                              // ----------
                                                              Right_BTree_int_User_Error_BTree_int_User (Branch_BTree_int_User (insertAt_List_BTree_int_User_pair_t (items , bitem , index ), fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn8146 */
                                                                  Rc_BTree_int_User __ciciliC_8145 (Rc_BTree_int_User __h_value ) {
                                                                    return clone_Rc_BTree_int_User (__h_value );
                                                                  }
                                                                  __ciciliC_8145 ;
                                                                }), children )));
                                                            });
                                                          }) : ({ /* cicili#Let8153 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn8155 */
                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 2"));
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  }) : ({ /* cicili#Let8162 */
                                                    typeof((((ptree -> __h_data ). Internal ). __h_0_mem )) pitems ;
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Let8164 */
                                                      bool __h_case_result  = (true  &&  (((ptree -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn8165 */
                                                            (pitems  =  (((ptree -> __h_data ). Internal ). __h_0_mem ) );
                                                            true ;
                                                          }) ) );
                                                      // ----------
                                                      
                                                      ((__h_case_result ) ? ({ /* cicili#Progn8170 */
                                                          ({ /* cicili#Let8174 */
                                                            __auto_type match8173  = nth_List_BTree_int_User_pair_t (pitem_index , pitems );
                                                            typeof((((match8173 . __h_data ). Just ). __h_0_mem )) bitem ;
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Let8177 */
                                                              bool __h_case_result  = (true  &&  (((match8173 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8178 */
                                                                    (bitem  =  (((match8173 . __h_data ). Just ). __h_0_mem ) );
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              
                                                              ((__h_case_result ) ? ({ /* cicili#Progn8183 */
                                                                  ({ /* cicili#Let8186 */
                                                                    __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8188 */
                                                                      __auto_type ntr  = ntr ;
                                                                      // ----------
                                                                      ((void)(ntr -> __h_table -> freeClass ));
                                                                      ntr ;
                                                                    });
                                                                    // ----------
                                                                    Right_BTree_int_User_Error_BTree_int_User (Branch_BTree_int_User (insertAt_List_BTree_int_User_pair_t (items , bitem , index ), fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn8201 */
                                                                        Rc_BTree_int_User __ciciliC_8200 (Rc_BTree_int_User __h_value ) {
                                                                          return clone_Rc_BTree_int_User (__h_value );
                                                                        }
                                                                        __ciciliC_8200 ;
                                                                      }), children )));
                                                                  });
                                                                }) : ({ /* cicili#Let8208 */
                                                                  // ----------
                                                                  ;
                                                                  ({ /* cicili#Progn8210 */
                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 2"));
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        }) : ({ /* cicili#Let8217 */
                                                          // ----------
                                                          ;
                                                          ({ /* cicili#Progn8219 */
                                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 1"));
                                                          });
                                                        }));
                                                    });
                                                  }));
                                              });
                                            });
                                          }) : ({ /* cicili#Let8226 */
                                            // ----------
                                            ;
                                            ({ /* cicili#Progn8228 */
                                              (((items_len  ==  0 )) ? ({ /* cicili#Let8233 */
                                                  typeof((((children -> __h_data ). Cons ). __h_0_mem )) head ;
                                                  // ----------
                                                  ;
                                                  ({ /* cicili#Let8235 */
                                                    bool __h_case_result  = (true  &&  (((children -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn8236 */
                                                          (head  =  (((children -> __h_data ). Cons ). __h_0_mem ) );
                                                          true ;
                                                        }) ) );
                                                    // ----------
                                                    
                                                    ((__h_case_result ) ? ({ /* cicili#Progn8241 */
                                                        ({ /* cicili#Let8244 */
                                                          __auto_type __h_matchbox  = clone_Rc_BTree_int_User (head );
                                                          // ----------
                                                          ({ /* cicili#Let8249 */
                                                            __auto_type match8248  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                            typeof((((match8248 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Let8252 */
                                                              bool __h_case_result  = (true  &&  (((match8248 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8253 */
                                                                    (unboxed  =  (((match8248 . __h_data ). Just ). __h_0_mem ) );
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              
                                                              ((__h_case_result ) ? ({ /* cicili#Progn8258 */
                                                                  ({ /* cicili#Let8262 */
                                                                    __auto_type chtr  = unboxed ;
                                                                    // ----------
                                                                    ;
                                                                    ({ /* cicili#Progn8264 */
                                                                      ({ /* cicili#Let8267 */
                                                                        __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8269 */
                                                                          __auto_type ntr  = ntr ;
                                                                          // ----------
                                                                          ((void)(ntr -> __h_table -> freeClass ));
                                                                          ntr ;
                                                                        });
                                                                        // ----------
                                                                        Right_BTree_int_User_Error_BTree_int_User (chtr );
                                                                      });
                                                                    });
                                                                  });
                                                                }) : ({ /* cicili#Let8276 */
                                                                  // ----------
                                                                  ;
                                                                  ({ /* cicili#Progn8278 */
                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 3"));
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        });
                                                      }) : ({ /* cicili#Let8285 */
                                                        // ----------
                                                        ;
                                                        ({ /* cicili#Progn8287 */
                                                          result ;
                                                        });
                                                      }));
                                                  });
                                                }) : result );
                                            });
                                          }));
                                      });
                                    }));
                                });
                              }) : ({ /* cicili#Let8291 */
                                // ----------
                                ;
                                ({ /* cicili#Progn8293 */
                                  result ;
                                });
                              }));
                          });
                        }));
                    });
                  });
                }) : ({ /* cicili#Let8297 */
                  // ----------
                  ;
                  ({ /* cicili#Progn8299 */
                    result ;
                  });
                }));
            });
          });
          // ----------
          rs ;
        });
      });
  }
  Either_BTree_int_User_Error_BTree_int_User deleteLeaf (List_BTree_int_User_pair_t items , List_BTree_int_User_pair_t current , size_t index ) {
    return ({ /* cicili#Let8316 */
        typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((head . __h_0_mem )) key ;
        typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let8318 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn8319 */
                    (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                    true ;
                  }) &&  (true  &&  ({ /* cicili#Progn8321 */
                      (key  =  (head . __h_0_mem ) );
                      true ;
                    }) ) ) &&  ({ /* cicili#Progn8323 */
                  (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn8328 */
              ({ /* cicili#Let8332 */
                __auto_type match8331  = compareKey (skey , key );
                // ----------
                ;
                ({ /* cicili#Let8334 */
                  bool __h_case_result  = (true  &&  ((match8331 . __h_ctor ) ==  __h_LT_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn8338 */
                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_NOT_FOUND (skey ));
                    }) : ({ /* cicili#Let8345 */
                      // ----------
                      ;
                      ({ /* cicili#Let8347 */
                        bool __h_case_result  = (true  &&  ((match8331 . __h_ctor ) ==  __h_EQ_t  ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn8351 */
                            ({ /* cicili#Let8354 */
                              __auto_type result  = Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (delete_List_BTree_int_User_pair_t (items , current )));
                              // ----------
                              { /* cicili#Let8363 */
                                // ----------
                                ;
                                ({ /* cicili#Let8365 */
                                  bool __h_case_result  = (true  &&  ((result . __h_ctor ) ==  __h_Right_t  ) );
                                  // ----------
                                  
                                  if (__h_case_result )
                                    { /* cicili#Block8370 */
                                      if (callback )
                                        { /* cicili#Block8374 */
                                          callback (head );
                                        }
                                    }
                                });
                              }
                              result ;
                            });
                          }) : ({ /* cicili#Let8378 */
                            // ----------
                            ;
                            ({ /* cicili#Progn8380 */
                              deleteLeaf (items , tail , (index  +  1 ));
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let8384 */
              // ----------
              ;
              ({ /* cicili#Progn8386 */
                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_NOT_FOUND (skey ));
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let8394 */
      __auto_type result  = ({ /* cicili#Let8397 */
        typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
        typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
        // ----------
        ;
        ({ /* cicili#Let8399 */
          bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn8400 */
                  (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn8402 */
                  (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn8407 */
              deleteInternal (Just_BTree_int_User (tree ), items , children , Nothing_List_BTree_int_User_pair_t (), items , 0);
            }) : ({ /* cicili#Let8413 */
              typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
              typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
              // ----------
              ;
              ({ /* cicili#Let8415 */
                bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn8416 */
                        (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                        true ;
                      }) &&  ({ /* cicili#Progn8418 */
                        (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                        true ;
                      }) ) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn8423 */
                    deleteInternal (Just_BTree_int_User (tree ), items , children , Nothing_List_BTree_int_User_pair_t (), items , 0);
                  }) : ({ /* cicili#Let8429 */
                    typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                    // ----------
                    ;
                    ({ /* cicili#Let8431 */
                      bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn8432 */
                            (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                            true ;
                          }) ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* cicili#Progn8437 */
                          deleteLeaf (items , items , 0);
                        }) : ({ /* cicili#Let8441 */
                          // ----------
                          ;
                          ({ /* cicili#Progn8443 */
                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_INVALID_OBJECT ());
                          });
                        }));
                    });
                  }));
              });
            }));
        });
      });
      // ----------
      result ;
    });
}
#ifndef __BTree_int_User__H_IMPL__
#define __BTree_int_User__H_IMPL__
Either_BTree_int_User_Error_BTree_int_User fromLists_BTree_int_User (List_int keys , List_User values ) {
  return ({ /* cicili#Let8466 */
      typeof((((keys -> __h_data ). Cons ). __h_0_mem )) khead ;
      typeof((((keys -> __h_data ). Cons ). __h_1_mem )) ktail ;
      // ----------
      ;
      ({ /* cicili#Let8468 */
        bool __h_case_result  = (true  &&  (((keys -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn8469 */
                (khead  =  (((keys -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn8471 */
                (ktail  =  (((keys -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn8476 */
            ({ /* cicili#Let8480 */
              typeof((((values -> __h_data ). Cons ). __h_0_mem )) vhead ;
              typeof((((values -> __h_data ). Cons ). __h_1_mem )) vtail ;
              // ----------
              ;
              ({ /* cicili#Let8482 */
                bool __h_case_result  = (true  &&  (((values -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn8483 */
                        (vhead  =  (((values -> __h_data ). Cons ). __h_0_mem ) );
                        true ;
                      }) &&  ({ /* cicili#Progn8485 */
                        (vtail  =  (((values -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn8490 */
                    ({ /* cicili#Let8493 */
                      __auto_type etree  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8495 */
                        __auto_type etree  = fromLists_BTree_int_User (ktail , vtail );
                        // ----------
                        ((void)((etree . __h_table )-> freeData ));
                        etree ;
                      });
                      // ----------
                      ({ /* cicili#Let8501 */
                        typeof((((etree . __h_data ). Right ). __h_0_mem )) tree ;
                        // ----------
                        ;
                        ({ /* cicili#Let8503 */
                          bool __h_case_result  = (true  &&  (((etree . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn8504 */
                                (tree  =  (((etree . __h_data ). Right ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn8509 */
                              ({ /* cicili#Let8512 */
                                __auto_type tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8514 */
                                  __auto_type tree  = tree ;
                                  // ----------
                                  ((void)(tree -> __h_table -> freeClass ));
                                  tree ;
                                });
                                // ----------
                                insert_BTree_int_User (tree , khead , vhead );
                              });
                            }) : ({ /* cicili#Let8520 */
                              // ----------
                              ;
                              ({ /* cicili#Progn8522 */
                                etree ;
                              });
                            }));
                        });
                      });
                    });
                  }) : ({ /* cicili#Let8526 */
                    // ----------
                    ;
                    ({ /* cicili#Progn8528 */
                      Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (Nil_BTree_int_User_pair_t ()));
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let8536 */
            // ----------
            ;
            ({ /* cicili#Progn8538 */
              Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (Nil_BTree_int_User_pair_t ()));
            });
          }));
      });
    });
}
Either_BTree_int_User_Error_BTree_int_User pure_BTree_int_User (int keys [], User values [], size_t len ) {
  return ({ /* cicili#Let8549 */
      BTree_int_User tree  = Leaf_BTree_int_User (Nil_BTree_int_User_pair_t ());
      // ----------
      for (size_t i  = 0; (i  <  len  ); (++i )) {
          { /* cicili#Let8557 */
            __auto_type match8556  = insert_BTree_int_User (tree , keys [i ], values [i ]);
            typeof((((match8556 . __h_data ). Right ). __h_0_mem )) new_tree ;
            // ----------
            ;
            ({ /* cicili#Let8560 */
              bool __h_case_result  = (true  &&  (((match8556 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn8561 */
                    (new_tree  =  (((match8556 . __h_data ). Right ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8567 */
                  { /* cicili#Block8569 */
                    free_BTree_int_User ((&tree ));
                    tree  = new_tree ;
                  }
                }
              else
                { /* cicili#Let8575 */
                  __auto_type left  = match8556 ;
                  // ----------
                  ;
                  { /* cicili#Block8577 */
                    return left ;
                  }
                }
            });
          }
      }
      Right_BTree_int_User_Error_BTree_int_User (tree );
    });
}
size_t show_BTree_int_User (CFile file , BTree_int_User tree ) {
  auto size_t showTree (int indent , BTree_int_User tree );
  size_t showChildren (int indent , List_Rc_BTree_int_User children ) {
    return ({ /* cicili#Let8587 */
        typeof((((children -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((children -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let8589 */
          bool __h_case_result  = (true  &&  (((children -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn8590 */
                  (head  =  (((children -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn8592 */
                  (tail  =  (((children -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn8597 */
              (({ /* cicili#Let8601 */
                  // ----------
                  ;
                  ({ /* cicili#Let8603 */
                    bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn8607 */
                        ({ /* cicili#Let8611 */
                          __auto_type match8610  = get_Rc_BTree_int_User (head );
                          typeof((((match8610 . __h_data ). Just ). __h_0_mem )) tr ;
                          // ----------
                          ;
                          ({ /* cicili#Let8614 */
                            bool __h_case_result  = (true  &&  (((match8610 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8615 */
                                  (tr  =  (((match8610 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn8620 */
                                (showTree (indent , tr ) +  fprintf (file , "\n") );
                              }) : ({ /* cicili#Let8624 */
                                // ----------
                                ;
                                ({ /* cicili#Progn8626 */
                                  0;
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let8630 */
                        // ----------
                        ;
                        ({ /* cicili#Progn8632 */
                          ({ /* cicili#Let8636 */
                            __auto_type match8635  = get_Rc_BTree_int_User (head );
                            typeof((((match8635 . __h_data ). Just ). __h_0_mem )) tr ;
                            // ----------
                            ;
                            ({ /* cicili#Let8639 */
                              bool __h_case_result  = (true  &&  (((match8635 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8640 */
                                    (tr  =  (((match8635 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* cicili#Progn8645 */
                                  showTree (indent , tr );
                                }) : ({ /* cicili#Let8649 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Progn8651 */
                                    0;
                                  });
                                }));
                            });
                          });
                        });
                      }));
                  });
                }) +  showChildren (indent , tail ) );
            }) : ({ /* cicili#Let8655 */
              // ----------
              ;
              ({ /* cicili#Progn8657 */
                0;
              });
            }));
        });
      });
  }
  size_t showTree (int indent , BTree_int_User tree ) {
    return (fprintf (file , "%d%*c", indent , (indent  *  2 ), ' ') +  ({ /* cicili#Let8663 */
          typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
          typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
          // ----------
          ;
          ({ /* cicili#Let8665 */
            bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn8666 */
                    (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn8668 */
                    (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                    true ;
                  }) ) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn8673 */
                (show_List_BTree_int_User_pair_t (file , items ) +  ({ /* cicili#Let8678 */
                    // ----------
                    ;
                    ({ /* cicili#Let8680 */
                      bool __h_case_result  = (true  &&  ((children -> __h_ctor ) ==  __h_Cons_t  ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* cicili#Progn8684 */
                          (fprintf (file , "\n") +  showChildren ((indent  +  1 ), children ) );
                        }) : ({ /* cicili#Let8688 */
                          // ----------
                          ;
                          ({ /* cicili#Progn8690 */
                            0;
                          });
                        }));
                    });
                  }) );
              }) : ({ /* cicili#Let8694 */
                typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
                typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
                // ----------
                ;
                ({ /* cicili#Let8696 */
                  bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn8697 */
                          (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn8699 */
                          (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn8704 */
                      (show_List_BTree_int_User_pair_t (file , items ) +  ({ /* cicili#Let8709 */
                          // ----------
                          ;
                          ({ /* cicili#Let8711 */
                            bool __h_case_result  = (true  &&  ((children -> __h_ctor ) ==  __h_Cons_t  ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn8715 */
                                (fprintf (file , "\n") +  showChildren ((indent  +  1 ), children ) );
                              }) : ({ /* cicili#Let8719 */
                                // ----------
                                ;
                                ({ /* cicili#Progn8721 */
                                  0;
                                });
                              }));
                          });
                        }) );
                    }) : ({ /* cicili#Let8725 */
                      typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                      // ----------
                      ;
                      ({ /* cicili#Let8727 */
                        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn8728 */
                              (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn8733 */
                            show_List_BTree_int_User_pair_t (file , items );
                          }) : ({ /* cicili#Let8738 */
                            // ----------
                            ;
                            ({ /* cicili#Progn8740 */
                              0;
                            });
                          }));
                      });
                    }));
                });
              }));
          });
        }) );
  }
  return (showTree (1, tree ) +  fprintf (file , "\n") );
}
void traverse_BTree_int_User (BTree_int_User tree , void (*callback) (BTree_int_User_pair_t item , Bool hasNext )) {
  auto void traverseLeaf (List_BTree_int_User_pair_t current , Bool hasNextLeaf );
  void traverseInternal (List_BTree_int_User_pair_t currentItem , List_Rc_BTree_int_User currentChild ) {
    { /* cicili#Let8749 */
      typeof((((currentChild -> __h_data ). Cons ). __h_0_mem )) wheadC ;
      typeof((((currentChild -> __h_data ). Cons ). __h_1_mem )) tailC ;
      // ----------
      ;
      ({ /* cicili#Let8751 */
        bool __h_case_result  = (true  &&  (((currentChild -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn8752 */
                (wheadC  =  (((currentChild -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn8754 */
                (tailC  =  (((currentChild -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block8760 */
            { /* cicili#Let8764 */
              __auto_type match8763  = get_Rc_BTree_int_User (wheadC );
              typeof((((match8763 . __h_data ). Just ). __h_0_mem )) headC ;
              // ----------
              ;
              ({ /* cicili#Let8767 */
                bool __h_case_result  = (true  &&  (((match8763 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8768 */
                      (headC  =  (((match8763 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                
                if (__h_case_result )
                  { /* cicili#Block8774 */
                    { /* cicili#Let8778 */
                      // ----------
                      ;
                      ({ /* cicili#Let8780 */
                        bool __h_case_result  = (true  &&  ((tailC -> __h_ctor ) ==  __h_Cons_t  ) );
                        // ----------
                        
                        if (__h_case_result )
                          { /* cicili#Block8785 */
                            { /* cicili#Block8787 */
                              { /* cicili#Let8791 */
                                typeof((((headC -> __h_data ). Branch ). __h_0_mem )) items ;
                                typeof((((headC -> __h_data ). Branch ). __h_1_mem )) children ;
                                // ----------
                                ;
                                ({ /* cicili#Let8793 */
                                  bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn8794 */
                                          (items  =  (((headC -> __h_data ). Branch ). __h_0_mem ) );
                                          true ;
                                        }) &&  ({ /* cicili#Progn8796 */
                                          (children  =  (((headC -> __h_data ). Branch ). __h_1_mem ) );
                                          true ;
                                        }) ) ) );
                                  // ----------
                                  
                                  if (__h_case_result )
                                    { /* cicili#Block8802 */
                                      traverseInternal (items , children );
                                    }
                                  else
                                    { /* cicili#Let8807 */
                                      typeof((((headC -> __h_data ). Internal ). __h_0_mem )) items ;
                                      typeof((((headC -> __h_data ). Internal ). __h_1_mem )) children ;
                                      // ----------
                                      ;
                                      ({ /* cicili#Let8809 */
                                        bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn8810 */
                                                (items  =  (((headC -> __h_data ). Internal ). __h_0_mem ) );
                                                true ;
                                              }) &&  ({ /* cicili#Progn8812 */
                                                (children  =  (((headC -> __h_data ). Internal ). __h_1_mem ) );
                                                true ;
                                              }) ) ) );
                                        // ----------
                                        
                                        if (__h_case_result )
                                          { /* cicili#Block8818 */
                                            traverseInternal (items , children );
                                          }
                                        else
                                          { /* cicili#Let8823 */
                                            typeof((((headC -> __h_data ). Leaf ). __h_0_mem )) items ;
                                            // ----------
                                            ;
                                            ({ /* cicili#Let8825 */
                                              bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn8826 */
                                                    (items  =  (((headC -> __h_data ). Leaf ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              
                                              if (__h_case_result )
                                                { /* cicili#Block8832 */
                                                  traverseLeaf (items , True ());
                                                }
                                            });
                                          }
                                      });
                                    }
                                });
                              }
                              { /* cicili#Let8836 */
                                typeof((((currentItem -> __h_data ). Cons ). __h_0_mem )) headI ;
                                typeof((((currentItem -> __h_data ). Cons ). __h_1_mem )) tailI ;
                                // ----------
                                ;
                                ({ /* cicili#Let8838 */
                                  bool __h_case_result  = (true  &&  (((currentItem -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn8839 */
                                          (headI  =  (((currentItem -> __h_data ). Cons ). __h_0_mem ) );
                                          true ;
                                        }) &&  ({ /* cicili#Progn8841 */
                                          (tailI  =  (((currentItem -> __h_data ). Cons ). __h_1_mem ) );
                                          true ;
                                        }) ) ) );
                                  // ----------
                                  
                                  if (__h_case_result )
                                    { /* cicili#Block8847 */
                                      { /* cicili#Block8849 */
                                        callback (headI , True ());
                                        traverseInternal (tailI , tailC );
                                      }
                                    }
                                });
                              }
                            }
                          }
                        else
                          { /* cicili#Let8854 */
                            // ----------
                            ;
                            { /* cicili#Block8856 */
                              { /* cicili#Block8858 */
                                { /* cicili#Let8862 */
                                  typeof((((headC -> __h_data ). Branch ). __h_0_mem )) items ;
                                  typeof((((headC -> __h_data ). Branch ). __h_1_mem )) children ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let8864 */
                                    bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn8865 */
                                            (items  =  (((headC -> __h_data ). Branch ). __h_0_mem ) );
                                            true ;
                                          }) &&  ({ /* cicili#Progn8867 */
                                            (children  =  (((headC -> __h_data ). Branch ). __h_1_mem ) );
                                            true ;
                                          }) ) ) );
                                    // ----------
                                    
                                    if (__h_case_result )
                                      { /* cicili#Block8873 */
                                        traverseInternal (items , children );
                                      }
                                    else
                                      { /* cicili#Let8878 */
                                        typeof((((headC -> __h_data ). Internal ). __h_0_mem )) items ;
                                        typeof((((headC -> __h_data ). Internal ). __h_1_mem )) children ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let8880 */
                                          bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn8881 */
                                                  (items  =  (((headC -> __h_data ). Internal ). __h_0_mem ) );
                                                  true ;
                                                }) &&  ({ /* cicili#Progn8883 */
                                                  (children  =  (((headC -> __h_data ). Internal ). __h_1_mem ) );
                                                  true ;
                                                }) ) ) );
                                          // ----------
                                          
                                          if (__h_case_result )
                                            { /* cicili#Block8889 */
                                              traverseInternal (items , children );
                                            }
                                          else
                                            { /* cicili#Let8894 */
                                              typeof((((headC -> __h_data ). Leaf ). __h_0_mem )) items ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let8896 */
                                                bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn8897 */
                                                      (items  =  (((headC -> __h_data ). Leaf ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                if (__h_case_result )
                                                  { /* cicili#Block8903 */
                                                    traverseLeaf (items , False ());
                                                  }
                                              });
                                            }
                                        });
                                      }
                                  });
                                }
                                { /* cicili#Let8907 */
                                  typeof((((currentItem -> __h_data ). Cons ). __h_0_mem )) headI ;
                                  typeof((((currentItem -> __h_data ). Cons ). __h_1_mem )) tailI ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let8909 */
                                    bool __h_case_result  = (true  &&  (((currentItem -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn8910 */
                                            (headI  =  (((currentItem -> __h_data ). Cons ). __h_0_mem ) );
                                            true ;
                                          }) &&  ({ /* cicili#Progn8912 */
                                            (tailI  =  (((currentItem -> __h_data ). Cons ). __h_1_mem ) );
                                            true ;
                                          }) ) ) );
                                    // ----------
                                    
                                    if (__h_case_result )
                                      { /* cicili#Block8918 */
                                        { /* cicili#Block8920 */
                                          callback (headI , False ());
                                          traverseInternal (tailI , tailC );
                                        }
                                      }
                                  });
                                }
                              }
                            }
                          }
                      });
                    }
                  }
              });
            }
          }
      });
    }
  }
  void traverseLeaf (List_BTree_int_User_pair_t current , Bool hasNextLeaf ) {
    { /* cicili#Let8927 */
      typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let8929 */
        bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn8930 */
                (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn8932 */
                (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block8938 */
            { /* cicili#Block8940 */
              callback (head , ({ /* cicili#Let8944 */
                  // ----------
                  ;
                  ({ /* cicili#Let8946 */
                    bool __h_case_result  = (true  &&  ((hasNextLeaf . __h_ctor ) ==  __h_True_t  ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn8950 */
                        hasNextLeaf ;
                      }) : ({ /* cicili#Let8954 */
                        // ----------
                        ;
                        ({ /* cicili#Progn8956 */
                          ({ /* cicili#Let8960 */
                            // ----------
                            ;
                            ({ /* cicili#Let8962 */
                              bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* cicili#Progn8966 */
                                  True ();
                                }) : ({ /* cicili#Let8970 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Progn8972 */
                                    False ();
                                  });
                                }));
                            });
                          });
                        });
                      }));
                  });
                }));
              traverseLeaf (tail , hasNextLeaf );
            }
          }
      });
    }
  }
  { /* cicili#Let8977 */
    typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
    typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
    // ----------
    ;
    ({ /* cicili#Let8979 */
      bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn8980 */
              (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
              true ;
            }) &&  ({ /* cicili#Progn8982 */
              (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block8988 */
          traverseInternal (items , children );
        }
      else
        { /* cicili#Let8993 */
          typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
          typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
          // ----------
          ;
          ({ /* cicili#Let8995 */
            bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn8996 */
                    (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn8998 */
                    (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                    true ;
                  }) ) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block9004 */
                traverseInternal (items , children );
              }
            else
              { /* cicili#Let9009 */
                typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                // ----------
                ;
                ({ /* cicili#Let9011 */
                  bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn9012 */
                        (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block9018 */
                      traverseLeaf (items , False ());
                    }
                });
              }
          });
        }
    });
  }
}
Maybe_BTree_int_User_pair_t max_BTree_int_User (BTree_int_User tree ) {
  auto Maybe_BTree_int_User_pair_t maxLeaf (List_BTree_int_User_pair_t current );
  Maybe_BTree_int_User_pair_t maxInternal (List_Rc_BTree_int_User current ) {
    return ({ /* cicili#Let9034 */
        typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let9036 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn9037 */
                  (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn9039 */
                  (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn9044 */
              ({ /* cicili#Let9048 */
                // ----------
                ;
                ({ /* cicili#Let9050 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn9054 */
                      ({ /* cicili#Let9058 */
                        __auto_type match9057  = get_Rc_BTree_int_User (head );
                        typeof((((match9057 . __h_data ). Just ). __h_0_mem )) child ;
                        // ----------
                        ;
                        ({ /* cicili#Let9061 */
                          bool __h_case_result  = (true  &&  (((match9057 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9062 */
                                (child  =  (((match9057 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn9067 */
                              ({ /* cicili#Let9071 */
                                typeof((((child -> __h_data ). Branch ). __h_1_mem )) nchildren ;
                                // ----------
                                ;
                                ({ /* cicili#Let9073 */
                                  bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn9074 */
                                        (nchildren  =  (((child -> __h_data ). Branch ). __h_1_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn9079 */
                                      maxInternal (nchildren );
                                    }) : ({ /* cicili#Let9083 */
                                      typeof((((child -> __h_data ). Internal ). __h_1_mem )) nchildren ;
                                      // ----------
                                      ;
                                      ({ /* cicili#Let9085 */
                                        bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn9086 */
                                              (nchildren  =  (((child -> __h_data ). Internal ). __h_1_mem ) );
                                              true ;
                                            }) ) );
                                        // ----------
                                        
                                        ((__h_case_result ) ? ({ /* cicili#Progn9091 */
                                            maxInternal (nchildren );
                                          }) : ({ /* cicili#Let9095 */
                                            typeof((((child -> __h_data ). Leaf ). __h_0_mem )) items ;
                                            // ----------
                                            ;
                                            ({ /* cicili#Let9097 */
                                              bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn9098 */
                                                    (items  =  (((child -> __h_data ). Leaf ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              
                                              ((__h_case_result ) ? ({ /* cicili#Progn9103 */
                                                  maxLeaf (items );
                                                }) : ({ /* cicili#Let9107 */
                                                  // ----------
                                                  ;
                                                  ({ /* cicili#Progn9109 */
                                                    Nothing_BTree_int_User_pair_t ();
                                                  });
                                                }));
                                            });
                                          }));
                                      });
                                    }));
                                });
                              });
                            }) : ({ /* cicili#Let9114 */
                              // ----------
                              ;
                              ({ /* cicili#Progn9116 */
                                Nothing_BTree_int_User_pair_t ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let9121 */
                      // ----------
                      ;
                      ({ /* cicili#Progn9123 */
                        maxInternal (tail );
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let9127 */
              // ----------
              ;
              ({ /* cicili#Progn9129 */
                Nothing_BTree_int_User_pair_t ();
              });
            }));
        });
      });
  }
  Maybe_BTree_int_User_pair_t maxLeaf (List_BTree_int_User_pair_t current ) {
    return ({ /* cicili#Let9137 */
        typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let9139 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn9140 */
                  (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn9142 */
                  (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn9147 */
              ({ /* cicili#Let9151 */
                // ----------
                ;
                ({ /* cicili#Let9153 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn9157 */
                      Just_BTree_int_User_pair_t (head );
                    }) : ({ /* cicili#Let9162 */
                      // ----------
                      ;
                      ({ /* cicili#Progn9164 */
                        maxLeaf (tail );
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let9168 */
              // ----------
              ;
              ({ /* cicili#Progn9170 */
                Nothing_BTree_int_User_pair_t ();
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let9176 */
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      ;
      ({ /* cicili#Let9178 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn9179 */
              (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn9184 */
            maxInternal (children );
          }) : ({ /* cicili#Let9188 */
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            ;
            ({ /* cicili#Let9190 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn9191 */
                    (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn9196 */
                  maxInternal (children );
                }) : ({ /* cicili#Let9200 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  ;
                  ({ /* cicili#Let9202 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn9203 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn9208 */
                        maxLeaf (items );
                      }) : ({ /* cicili#Let9212 */
                        // ----------
                        ;
                        ({ /* cicili#Progn9214 */
                          Nothing_BTree_int_User_pair_t ();
                        });
                      }));
                  });
                }));
            });
          }));
      });
    });
}
Maybe_BTree_int_User_pair_t min_BTree_int_User (BTree_int_User tree ) {
  auto Maybe_BTree_int_User_pair_t minLeaf (List_BTree_int_User_pair_t first );
  Maybe_BTree_int_User_pair_t minInternal (List_Rc_BTree_int_User first ) {
    return ({ /* cicili#Let9229 */
        typeof((((first -> __h_data ). Cons ). __h_0_mem )) head ;
        // ----------
        ;
        ({ /* cicili#Let9231 */
          bool __h_case_result  = (true  &&  (((first -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn9232 */
                (head  =  (((first -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn9237 */
              ({ /* cicili#Let9241 */
                __auto_type match9240  = get_Rc_BTree_int_User (head );
                typeof((((match9240 . __h_data ). Just ). __h_0_mem )) child ;
                // ----------
                ;
                ({ /* cicili#Let9244 */
                  bool __h_case_result  = (true  &&  (((match9240 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9245 */
                        (child  =  (((match9240 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn9250 */
                      ({ /* cicili#Let9254 */
                        typeof((((child -> __h_data ). Branch ). __h_1_mem )) nchildren ;
                        // ----------
                        ;
                        ({ /* cicili#Let9256 */
                          bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn9257 */
                                (nchildren  =  (((child -> __h_data ). Branch ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn9262 */
                              minInternal (nchildren );
                            }) : ({ /* cicili#Let9266 */
                              typeof((((child -> __h_data ). Internal ). __h_1_mem )) nchildren ;
                              // ----------
                              ;
                              ({ /* cicili#Let9268 */
                                bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn9269 */
                                      (nchildren  =  (((child -> __h_data ). Internal ). __h_1_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn9274 */
                                    minInternal (nchildren );
                                  }) : ({ /* cicili#Let9278 */
                                    typeof((((child -> __h_data ). Leaf ). __h_0_mem )) items ;
                                    // ----------
                                    ;
                                    ({ /* cicili#Let9280 */
                                      bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn9281 */
                                            (items  =  (((child -> __h_data ). Leaf ). __h_0_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn9286 */
                                          minLeaf (items );
                                        }) : ({ /* cicili#Let9290 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Progn9292 */
                                            Nothing_BTree_int_User_pair_t ();
                                          });
                                        }));
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let9297 */
                      // ----------
                      ;
                      ({ /* cicili#Progn9299 */
                        Nothing_BTree_int_User_pair_t ();
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let9304 */
              // ----------
              ;
              ({ /* cicili#Progn9306 */
                Nothing_BTree_int_User_pair_t ();
              });
            }));
        });
      });
  }
  Maybe_BTree_int_User_pair_t minLeaf (List_BTree_int_User_pair_t first ) {
    return ({ /* cicili#Let9314 */
        typeof((((first -> __h_data ). Cons ). __h_0_mem )) head ;
        // ----------
        ;
        ({ /* cicili#Let9316 */
          bool __h_case_result  = (true  &&  (((first -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn9317 */
                (head  =  (((first -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn9322 */
              Just_BTree_int_User_pair_t (head );
            }) : ({ /* cicili#Let9327 */
              // ----------
              ;
              ({ /* cicili#Progn9329 */
                Nothing_BTree_int_User_pair_t ();
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let9335 */
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      ;
      ({ /* cicili#Let9337 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn9338 */
              (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn9343 */
            minInternal (children );
          }) : ({ /* cicili#Let9347 */
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            ;
            ({ /* cicili#Let9349 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn9350 */
                    (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn9355 */
                  minInternal (children );
                }) : ({ /* cicili#Let9359 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  ;
                  ({ /* cicili#Let9361 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn9362 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn9367 */
                        minLeaf (items );
                      }) : ({ /* cicili#Let9371 */
                        // ----------
                        ;
                        ({ /* cicili#Progn9373 */
                          Nothing_BTree_int_User_pair_t ();
                        });
                      }));
                  });
                }));
            });
          }));
      });
    });
}
Either_BTree_int_User_Error_BTree_int_User delete_BTree_int_User (BTree_int_User tree , int skey , void (*callback) (BTree_int_User_pair_t item )) {
  return deleteWithParent_BTree_int_User (Nothing_BTree_int_User (), 0, 0, tree , skey , callback );
}
Maybe_BTree_int_User_pair_t search_BTree_int_User (BTree_int_User tree , int skey ) {
  Maybe_BTree_int_User_pair_t searchInternal (List_Rc_BTree_int_User children , List_BTree_int_User_pair_t current , size_t index ) {
    return ({ /* cicili#Let9391 */
        typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((head . __h_0_mem )) key ;
        typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let9393 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn9394 */
                    (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                    true ;
                  }) &&  (true  &&  ({ /* cicili#Progn9396 */
                      (key  =  (head . __h_0_mem ) );
                      true ;
                    }) ) ) &&  ({ /* cicili#Progn9398 */
                  (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn9403 */
              ({ /* cicili#Let9407 */
                __auto_type match9406  = compareKey (skey , key );
                // ----------
                ;
                ({ /* cicili#Let9409 */
                  bool __h_case_result  = (true  &&  ((match9406 . __h_ctor ) ==  __h_LT_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn9413 */
                      ({ /* cicili#Let9417 */
                        __auto_type match9416  = nth_List_Rc_BTree_int_User (index , children );
                        typeof((((match9416 . __h_data ). Just ). __h_0_mem )) node ;
                        // ----------
                        ;
                        ({ /* cicili#Let9420 */
                          bool __h_case_result  = (true  &&  (((match9416 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9421 */
                                (node  =  (((match9416 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn9426 */
                              ({ /* cicili#Let9430 */
                                __auto_type match9429  = get_Rc_BTree_int_User (node );
                                typeof((((match9429 . __h_data ). Just ). __h_0_mem )) tr ;
                                // ----------
                                ;
                                ({ /* cicili#Let9433 */
                                  bool __h_case_result  = (true  &&  (((match9429 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9434 */
                                        (tr  =  (((match9429 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn9439 */
                                      search_BTree_int_User (tr , skey );
                                    }) : ({ /* cicili#Let9444 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn9446 */
                                        Nothing_BTree_int_User_pair_t ();
                                      });
                                    }));
                                });
                              });
                            }) : ({ /* cicili#Let9451 */
                              // ----------
                              ;
                              ({ /* cicili#Progn9453 */
                                Nothing_BTree_int_User_pair_t ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let9458 */
                      // ----------
                      ;
                      ({ /* cicili#Let9460 */
                        bool __h_case_result  = (true  &&  ((match9406 . __h_ctor ) ==  __h_EQ_t  ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn9464 */
                            Just_BTree_int_User_pair_t (head );
                          }) : ({ /* cicili#Let9469 */
                            // ----------
                            ;
                            ({ /* cicili#Progn9471 */
                              ({ /* cicili#Let9475 */
                                // ----------
                                ;
                                ({ /* cicili#Let9477 */
                                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn9481 */
                                      ({ /* cicili#Let9485 */
                                        __auto_type match9484  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
                                        typeof((((match9484 . __h_data ). Just ). __h_0_mem )) node ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let9488 */
                                          bool __h_case_result  = (true  &&  (((match9484 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9489 */
                                                (node  =  (((match9484 . __h_data ). Just ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn9494 */
                                              ({ /* cicili#Let9498 */
                                                __auto_type match9497  = get_Rc_BTree_int_User (node );
                                                typeof((((match9497 . __h_data ). Just ). __h_0_mem )) tr ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let9501 */
                                                  bool __h_case_result  = (true  &&  (((match9497 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9502 */
                                                        (tr  =  (((match9497 . __h_data ). Just ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn9507 */
                                                      search_BTree_int_User (tr , skey );
                                                    }) : ({ /* cicili#Let9512 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn9514 */
                                                        Nothing_BTree_int_User_pair_t ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let9519 */
                                              // ----------
                                              ;
                                              ({ /* cicili#Progn9521 */
                                                Nothing_BTree_int_User_pair_t ();
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let9526 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn9528 */
                                        searchInternal (children , tail , (index  +  1 ));
                                      });
                                    }));
                                });
                              });
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let9532 */
              // ----------
              ;
              ({ /* cicili#Progn9534 */
                Nothing_BTree_int_User_pair_t ();
              });
            }));
        });
      });
  }
  Maybe_BTree_int_User_pair_t searchLeaf (List_BTree_int_User_pair_t current , size_t index ) {
    return ({ /* cicili#Let9544 */
        typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((head . __h_0_mem )) key ;
        typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let9546 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn9547 */
                    (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                    true ;
                  }) &&  (true  &&  ({ /* cicili#Progn9549 */
                      (key  =  (head . __h_0_mem ) );
                      true ;
                    }) ) ) &&  ({ /* cicili#Progn9551 */
                  (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn9556 */
              ({ /* cicili#Let9560 */
                __auto_type match9559  = compareKey (skey , key );
                // ----------
                ;
                ({ /* cicili#Let9562 */
                  bool __h_case_result  = (true  &&  ((match9559 . __h_ctor ) ==  __h_EQ_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn9566 */
                      Just_BTree_int_User_pair_t (head );
                    }) : ({ /* cicili#Let9571 */
                      // ----------
                      ;
                      ({ /* cicili#Progn9573 */
                        ({ /* cicili#Let9577 */
                          // ----------
                          ;
                          ({ /* cicili#Let9579 */
                            bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn9583 */
                                Nothing_BTree_int_User_pair_t ();
                              }) : ({ /* cicili#Let9588 */
                                // ----------
                                ;
                                ({ /* cicili#Progn9590 */
                                  searchLeaf (tail , (index  +  1 ));
                                });
                              }));
                          });
                        });
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let9594 */
              // ----------
              ;
              ({ /* cicili#Progn9596 */
                Nothing_BTree_int_User_pair_t ();
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let9602 */
      typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      ;
      ({ /* cicili#Let9604 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9605 */
                (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn9607 */
                (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn9612 */
            searchInternal (children , items , 0);
          }) : ({ /* cicili#Let9616 */
            typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            ;
            ({ /* cicili#Let9618 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn9619 */
                      (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn9621 */
                      (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn9626 */
                  searchInternal (children , items , 0);
                }) : ({ /* cicili#Let9630 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  ;
                  ({ /* cicili#Let9632 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn9633 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn9638 */
                        searchLeaf (items , 0);
                      }) : ({ /* cicili#Let9642 */
                        // ----------
                        ;
                        ({ /* cicili#Progn9644 */
                          Nothing_BTree_int_User_pair_t ();
                        });
                      }));
                  });
                }));
            });
          }));
      });
    });
}
Either_BTree_int_User_Error_BTree_int_User insert_BTree_int_User (BTree_int_User tree , int skey , User svalue ) {
  if (3 <  3 )
    { /* cicili#Block9656 */
      return Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_INVALID_ORDER (3));
    }
  Either_BTree_int_User_Error_BTree_int_User insertInternal (List_BTree_int_User_pair_t items , List_Rc_BTree_int_User children , List_BTree_int_User_pair_t current , size_t index ) {
    return ({ /* cicili#Let9668 */
        typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((head . __h_0_mem )) key ;
        typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let9670 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn9671 */
                    (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                    true ;
                  }) &&  (true  &&  ({ /* cicili#Progn9673 */
                      (key  =  (head . __h_0_mem ) );
                      true ;
                    }) ) ) &&  ({ /* cicili#Progn9675 */
                  (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn9680 */
              ({ /* cicili#Let9684 */
                __auto_type match9683  = compareKey (skey , key );
                // ----------
                ;
                ({ /* cicili#Let9686 */
                  bool __h_case_result  = (true  &&  ((match9683 . __h_ctor ) ==  __h_LT_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn9690 */
                      ({ /* cicili#Let9694 */
                        __auto_type match9693  = nth_List_Rc_BTree_int_User (index , children );
                        typeof((((match9693 . __h_data ). Just ). __h_0_mem )) child ;
                        // ----------
                        ;
                        ({ /* cicili#Let9697 */
                          bool __h_case_result  = (true  &&  (((match9693 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9698 */
                                (child  =  (((match9693 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn9703 */
                              ({ /* cicili#Let9707 */
                                __auto_type match9706  = get_Rc_BTree_int_User (child );
                                typeof((((match9706 . __h_data ). Just ). __h_0_mem )) tr ;
                                // ----------
                                ;
                                ({ /* cicili#Let9710 */
                                  bool __h_case_result  = (true  &&  (((match9706 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9711 */
                                        (tr  =  (((match9706 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn9716 */
                                      ({ /* cicili#Let9720 */
                                        __auto_type match9719  = insert_BTree_int_User (tr , skey , svalue );
                                        typeof((((match9719 . __h_data ). Right ). __h_0_mem )) child_tree ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let9723 */
                                          bool __h_case_result  = (true  &&  (((match9719 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn9724 */
                                                (child_tree  =  (((match9719 . __h_data ). Right ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn9729 */
                                              ({ /* cicili#Let9733 */
                                                typeof((((child_tree -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                                typeof((((child_tree -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let9735 */
                                                  bool __h_case_result  = (true  &&  (((child_tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9736 */
                                                          (child_items  =  (((child_tree -> __h_data ). Branch ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn9738 */
                                                          (child_children  =  (((child_tree -> __h_data ). Branch ). __h_1_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn9743 */
                                                      ({ /* cicili#Let9748 */
                                                        typeof((((child_items -> __h_data ). Cons ). __h_0_mem )) single_item ;
                                                        typeof((((child_items -> __h_data ). Cons ). __h_1_mem )) __h_match9746_1_arg ;
                                                        // ----------
                                                        ;
                                                        ({ /* cicili#Let9750 */
                                                          bool __h_case_result  = (true  &&  (((child_items -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn9751 */
                                                                    (single_item  =  (((child_items -> __h_data ). Cons ). __h_0_mem ) );
                                                                    true ;
                                                                  }) &&  ({ /* cicili#Progn9753 */
                                                                    (__h_match9746_1_arg  =  (((child_items -> __h_data ). Cons ). __h_1_mem ) );
                                                                    true ;
                                                                  }) ) &&  (true  &&  ((__h_match9746_1_arg -> __h_ctor ) ==  __h_Nil_t  ) ) ) ) );
                                                          // ----------
                                                          
                                                          ((__h_case_result ) ? ({ /* cicili#Progn9758 */
                                                              ({ /* cicili#Let9761 */
                                                                __auto_type child_tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9763 */
                                                                  __auto_type child_tree  = child_tree ;
                                                                  // ----------
                                                                  ((void)(child_tree -> __h_table -> freeClass ));
                                                                  child_tree ;
                                                                });
                                                                // ----------
                                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (insert_List_BTree_int_User_pair_t (items , single_item , current ), ({ /* cicili#Let9772 */
                                                                    __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9774 */
                                                                      __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                                                      // ----------
                                                                      ((void)(r1 -> __h_table -> freeClass ));
                                                                      r1 ;
                                                                    });
                                                                    __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9778 */
                                                                      __auto_type r2  = drop_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                      // ----------
                                                                      ((void)(r2 -> __h_table -> freeClass ));
                                                                      r2 ;
                                                                    });
                                                                    __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9782 */
                                                                      __auto_type r3  = append_List_Rc_BTree_int_User (child_children , r2 );
                                                                      // ----------
                                                                      ((void)(r3 -> __h_table -> freeClass ));
                                                                      r3 ;
                                                                    });
                                                                    __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9786 */
                                                                      __auto_type r4  = append_List_Rc_BTree_int_User (r1 , r3 );
                                                                      // ----------
                                                                      ((void)(r4 -> __h_table -> freeClass ));
                                                                      r4 ;
                                                                    });
                                                                    // ----------
                                                                    fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn9795 */
                                                                        Rc_BTree_int_User __ciciliC_9794 (Rc_BTree_int_User __h_value ) {
                                                                          return clone_Rc_BTree_int_User (__h_value );
                                                                        }
                                                                        __ciciliC_9794 ;
                                                                      }), r4 );
                                                                  })));
                                                              });
                                                            }) : ({ /* cicili#Let9802 */
                                                              // ----------
                                                              ;
                                                              ({ /* cicili#Progn9804 */
                                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_INVALID_BRANCH (child_tree ));
                                                              });
                                                            }));
                                                        });
                                                      });
                                                    }) : ({ /* cicili#Let9811 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let9813 */
                                                        bool __h_case_result  = (true  &&  ((child_tree -> __h_ctor ) ==  __h_Internal_t  ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn9817 */
                                                            Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let9825 */
                                                                __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9827 */
                                                                  __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                                                  // ----------
                                                                  ((void)(r1 -> __h_table -> freeClass ));
                                                                  r1 ;
                                                                });
                                                                __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9831 */
                                                                  __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn9837 */
                                                                    Rc_BTree_int_User __ciciliC_9836 (Rc_BTree_int_User __h_value ) {
                                                                      return clone_Rc_BTree_int_User (__h_value );
                                                                    }
                                                                    __ciciliC_9836 ;
                                                                  }), r1 );
                                                                  // ----------
                                                                  ((void)(r2 -> __h_table -> freeClass ));
                                                                  r2 ;
                                                                });
                                                                __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9844 */
                                                                  __auto_type r3  = drop_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                  // ----------
                                                                  ((void)(r3 -> __h_table -> freeClass ));
                                                                  r3 ;
                                                                });
                                                                __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9848 */
                                                                  __auto_type r4  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn9854 */
                                                                    Rc_BTree_int_User __ciciliC_9853 (Rc_BTree_int_User __h_value ) {
                                                                      return clone_Rc_BTree_int_User (__h_value );
                                                                    }
                                                                    __ciciliC_9853 ;
                                                                  }), r3 );
                                                                  // ----------
                                                                  ((void)(r4 -> __h_table -> freeClass ));
                                                                  r4 ;
                                                                });
                                                                __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9861 */
                                                                  __auto_type r5  = push_List_Rc_BTree_int_User (new_Rc_BTree_int_User (child_tree ), r4 );
                                                                  // ----------
                                                                  ((void)(r5 -> __h_table -> freeClass ));
                                                                  r5 ;
                                                                });
                                                                // ----------
                                                                append_List_Rc_BTree_int_User (r2 , r5 );
                                                              })));
                                                          }) : ({ /* cicili#Let9869 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn9871 */
                                                              Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let9879 */
                                                                  __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9881 */
                                                                    __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                                                    // ----------
                                                                    ((void)(r1 -> __h_table -> freeClass ));
                                                                    r1 ;
                                                                  });
                                                                  __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9885 */
                                                                    __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn9891 */
                                                                      Rc_BTree_int_User __ciciliC_9890 (Rc_BTree_int_User __h_value ) {
                                                                        return clone_Rc_BTree_int_User (__h_value );
                                                                      }
                                                                      __ciciliC_9890 ;
                                                                    }), r1 );
                                                                    // ----------
                                                                    ((void)(r2 -> __h_table -> freeClass ));
                                                                    r2 ;
                                                                  });
                                                                  __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9898 */
                                                                    __auto_type r3  = drop_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                    // ----------
                                                                    ((void)(r3 -> __h_table -> freeClass ));
                                                                    r3 ;
                                                                  });
                                                                  __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9902 */
                                                                    __auto_type r4  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn9908 */
                                                                      Rc_BTree_int_User __ciciliC_9907 (Rc_BTree_int_User __h_value ) {
                                                                        return clone_Rc_BTree_int_User (__h_value );
                                                                      }
                                                                      __ciciliC_9907 ;
                                                                    }), r3 );
                                                                    // ----------
                                                                    ((void)(r4 -> __h_table -> freeClass ));
                                                                    r4 ;
                                                                  });
                                                                  __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9915 */
                                                                    __auto_type r5  = push_List_Rc_BTree_int_User (new_Rc_BTree_int_User (child_tree ), r4 );
                                                                    // ----------
                                                                    ((void)(r5 -> __h_table -> freeClass ));
                                                                    r5 ;
                                                                  });
                                                                  // ----------
                                                                  append_List_Rc_BTree_int_User (r2 , r5 );
                                                                })));
                                                            });
                                                          }));
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let9923 */
                                              __auto_type left  = match9719 ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Progn9925 */
                                                left ;
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let9929 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn9931 */
                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CHILD (head , index ));
                                      });
                                    }));
                                });
                              });
                            }) : ({ /* cicili#Let9938 */
                              // ----------
                              ;
                              ({ /* cicili#Progn9940 */
                                Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (insert_List_BTree_int_User_pair_t (items , ((BTree_int_User_pair_t){ skey , svalue }), current )));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let9950 */
                      // ----------
                      ;
                      ({ /* cicili#Let9952 */
                        bool __h_case_result  = (true  &&  ((match9683 . __h_ctor ) ==  __h_EQ_t  ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn9956 */
                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_UNIQUE_KEY (head ));
                          }) : ({ /* cicili#Let9963 */
                            // ----------
                            ;
                            ({ /* cicili#Progn9965 */
                              insertInternal (items , children , tail , (index  +  1 ));
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let9969 */
              // ----------
              ;
              ({ /* cicili#Progn9971 */
                ({ /* cicili#Let9975 */
                  __auto_type match9974  = nth_List_Rc_BTree_int_User (index , children );
                  typeof((((match9974 . __h_data ). Just ). __h_0_mem )) child ;
                  // ----------
                  ;
                  ({ /* cicili#Let9978 */
                    bool __h_case_result  = (true  &&  (((match9974 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9979 */
                          (child  =  (((match9974 . __h_data ). Just ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn9984 */
                        ({ /* cicili#Let9988 */
                          __auto_type match9987  = get_Rc_BTree_int_User (child );
                          typeof((((match9987 . __h_data ). Just ). __h_0_mem )) tr ;
                          // ----------
                          ;
                          ({ /* cicili#Let9991 */
                            bool __h_case_result  = (true  &&  (((match9987 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9992 */
                                  (tr  =  (((match9987 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn9997 */
                                ({ /* cicili#Let10001 */
                                  __auto_type match10000  = insert_BTree_int_User (tr , skey , svalue );
                                  typeof((((match10000 . __h_data ). Right ). __h_0_mem )) child_tree ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let10004 */
                                    bool __h_case_result  = (true  &&  (((match10000 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn10005 */
                                          (child_tree  =  (((match10000 . __h_data ). Right ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn10010 */
                                        ({ /* cicili#Let10014 */
                                          typeof((((child_tree -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                          typeof((((child_tree -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                          // ----------
                                          ;
                                          ({ /* cicili#Let10016 */
                                            bool __h_case_result  = (true  &&  (((child_tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn10017 */
                                                    (child_items  =  (((child_tree -> __h_data ). Branch ). __h_0_mem ) );
                                                    true ;
                                                  }) &&  ({ /* cicili#Progn10019 */
                                                    (child_children  =  (((child_tree -> __h_data ). Branch ). __h_1_mem ) );
                                                    true ;
                                                  }) ) ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* cicili#Progn10024 */
                                                ({ /* cicili#Let10029 */
                                                  typeof((((child_items -> __h_data ). Cons ). __h_0_mem )) single_item ;
                                                  typeof((((child_items -> __h_data ). Cons ). __h_1_mem )) __h_match10027_1_arg ;
                                                  // ----------
                                                  ;
                                                  ({ /* cicili#Let10031 */
                                                    bool __h_case_result  = (true  &&  (((child_items -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn10032 */
                                                              (single_item  =  (((child_items -> __h_data ). Cons ). __h_0_mem ) );
                                                              true ;
                                                            }) &&  ({ /* cicili#Progn10034 */
                                                              (__h_match10027_1_arg  =  (((child_items -> __h_data ). Cons ). __h_1_mem ) );
                                                              true ;
                                                            }) ) &&  (true  &&  ((__h_match10027_1_arg -> __h_ctor ) ==  __h_Nil_t  ) ) ) ) );
                                                    // ----------
                                                    
                                                    ((__h_case_result ) ? ({ /* cicili#Progn10039 */
                                                        ({ /* cicili#Let10042 */
                                                          __auto_type child_tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10044 */
                                                            __auto_type child_tree  = child_tree ;
                                                            // ----------
                                                            ((void)(child_tree -> __h_table -> freeClass ));
                                                            child_tree ;
                                                          });
                                                          // ----------
                                                          Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (insert_List_BTree_int_User_pair_t (items , single_item , current ), ({ /* cicili#Let10053 */
                                                              __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10055 */
                                                                __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                                                // ----------
                                                                ((void)(r1 -> __h_table -> freeClass ));
                                                                r1 ;
                                                              });
                                                              __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10059 */
                                                                __auto_type r2  = drop_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                // ----------
                                                                ((void)(r2 -> __h_table -> freeClass ));
                                                                r2 ;
                                                              });
                                                              __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10063 */
                                                                __auto_type r3  = append_List_Rc_BTree_int_User (child_children , r2 );
                                                                // ----------
                                                                ((void)(r3 -> __h_table -> freeClass ));
                                                                r3 ;
                                                              });
                                                              __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10067 */
                                                                __auto_type r4  = append_List_Rc_BTree_int_User (r1 , r3 );
                                                                // ----------
                                                                ((void)(r4 -> __h_table -> freeClass ));
                                                                r4 ;
                                                              });
                                                              // ----------
                                                              fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn10076 */
                                                                  Rc_BTree_int_User __ciciliC_10075 (Rc_BTree_int_User __h_value ) {
                                                                    return clone_Rc_BTree_int_User (__h_value );
                                                                  }
                                                                  __ciciliC_10075 ;
                                                                }), r4 );
                                                            })));
                                                        });
                                                      }) : ({ /* cicili#Let10083 */
                                                        // ----------
                                                        ;
                                                        ({ /* cicili#Progn10085 */
                                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_INVALID_BRANCH (child_tree ));
                                                        });
                                                      }));
                                                  });
                                                });
                                              }) : ({ /* cicili#Let10092 */
                                                // ----------
                                                ;
                                                ({ /* cicili#Let10094 */
                                                  bool __h_case_result  = (true  &&  ((child_tree -> __h_ctor ) ==  __h_Internal_t  ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn10098 */
                                                      Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let10106 */
                                                          __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10108 */
                                                            __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                                            // ----------
                                                            ((void)(r1 -> __h_table -> freeClass ));
                                                            r1 ;
                                                          });
                                                          __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10112 */
                                                            __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn10118 */
                                                              Rc_BTree_int_User __ciciliC_10117 (Rc_BTree_int_User __h_value ) {
                                                                return clone_Rc_BTree_int_User (__h_value );
                                                              }
                                                              __ciciliC_10117 ;
                                                            }), r1 );
                                                            // ----------
                                                            ((void)(r2 -> __h_table -> freeClass ));
                                                            r2 ;
                                                          });
                                                          __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10125 */
                                                            __auto_type r3  = wrap_List_Rc_BTree_int_User (new_Rc_BTree_int_User (child_tree ));
                                                            // ----------
                                                            ((void)(r3 -> __h_table -> freeClass ));
                                                            r3 ;
                                                          });
                                                          // ----------
                                                          append_List_Rc_BTree_int_User (r2 , r3 );
                                                        })));
                                                    }) : ({ /* cicili#Let10133 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn10135 */
                                                        Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let10143 */
                                                            __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10145 */
                                                              __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                                              // ----------
                                                              ((void)(r1 -> __h_table -> freeClass ));
                                                              r1 ;
                                                            });
                                                            __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10149 */
                                                              __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn10155 */
                                                                Rc_BTree_int_User __ciciliC_10154 (Rc_BTree_int_User __h_value ) {
                                                                  return clone_Rc_BTree_int_User (__h_value );
                                                                }
                                                                __ciciliC_10154 ;
                                                              }), r1 );
                                                              // ----------
                                                              ((void)(r2 -> __h_table -> freeClass ));
                                                              r2 ;
                                                            });
                                                            __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10162 */
                                                              __auto_type r3  = wrap_List_Rc_BTree_int_User (new_Rc_BTree_int_User (child_tree ));
                                                              // ----------
                                                              ((void)(r3 -> __h_table -> freeClass ));
                                                              r3 ;
                                                            });
                                                            // ----------
                                                            append_List_Rc_BTree_int_User (r2 , r3 );
                                                          })));
                                                      });
                                                    }));
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* cicili#Let10170 */
                                        __auto_type left  = match10000 ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn10172 */
                                          left ;
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let10176 */
                                // ----------
                                ;
                                ({ /* cicili#Progn10178 */
                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CHILD (head , index ));
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let10185 */
                        // ----------
                        ;
                        ({ /* cicili#Progn10187 */
                          Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (({ /* cicili#Let10194 */
                              __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10196 */
                                __auto_type r1  = wrap_List_BTree_int_User_pair_t (((BTree_int_User_pair_t){ skey , svalue }));
                                // ----------
                                ((void)(r1 -> __h_table -> freeClass ));
                                r1 ;
                              });
                              // ----------
                              append_List_BTree_int_User_pair_t (items , r1 );
                            })));
                        });
                      }));
                  });
                });
              });
            }));
        });
      });
  }
  Either_BTree_int_User_Error_BTree_int_User insertLeaf (List_BTree_int_User_pair_t items , List_BTree_int_User_pair_t current , size_t index ) {
    return ({ /* cicili#Let10212 */
        typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((head . __h_0_mem )) key ;
        typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let10214 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn10215 */
                    (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                    true ;
                  }) &&  (true  &&  ({ /* cicili#Progn10217 */
                      (key  =  (head . __h_0_mem ) );
                      true ;
                    }) ) ) &&  ({ /* cicili#Progn10219 */
                  (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn10224 */
              ({ /* cicili#Let10228 */
                __auto_type match10227  = compareKey (skey , key );
                // ----------
                ;
                ({ /* cicili#Let10230 */
                  bool __h_case_result  = (true  &&  ((match10227 . __h_ctor ) ==  __h_LT_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn10234 */
                      Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (insert_List_BTree_int_User_pair_t (items , ((BTree_int_User_pair_t){ skey , svalue }), current )));
                    }) : ({ /* cicili#Let10244 */
                      // ----------
                      ;
                      ({ /* cicili#Let10246 */
                        bool __h_case_result  = (true  &&  ((match10227 . __h_ctor ) ==  __h_EQ_t  ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn10250 */
                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_UNIQUE_KEY (head ));
                          }) : ({ /* cicili#Let10257 */
                            // ----------
                            ;
                            ({ /* cicili#Progn10259 */
                              insertLeaf (items , tail , (index  +  1 ));
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let10263 */
              // ----------
              ;
              ({ /* cicili#Progn10265 */
                Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (({ /* cicili#Let10272 */
                    __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10274 */
                      __auto_type r1  = wrap_List_BTree_int_User_pair_t (((BTree_int_User_pair_t){ skey , svalue }));
                      // ----------
                      ((void)(r1 -> __h_table -> freeClass ));
                      r1 ;
                    });
                    // ----------
                    append_List_BTree_int_User_pair_t (items , r1 );
                  })));
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let10284 */
      typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      ;
      ({ /* cicili#Let10286 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn10287 */
                (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn10289 */
                (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn10294 */
            ({ /* cicili#Let10298 */
              __auto_type match10297  = insertInternal (items , children , items , 0);
              typeof((((match10297 . __h_data ). Right ). __h_0_mem )) tr ;
              // ----------
              ;
              ({ /* cicili#Let10300 */
                bool __h_case_result  = (true  &&  (((match10297 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn10301 */
                      (tr  =  (((match10297 . __h_data ). Right ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn10306 */
                    Right_BTree_int_User_Error_BTree_int_User (split_BTree_int_User (tr ));
                  }) : ({ /* cicili#Let10313 */
                    __auto_type left  = match10297 ;
                    // ----------
                    ;
                    ({ /* cicili#Progn10315 */
                      left ;
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let10319 */
            typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            ;
            ({ /* cicili#Let10321 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn10322 */
                      (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn10324 */
                      (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn10329 */
                  ({ /* cicili#Let10333 */
                    __auto_type match10332  = insertInternal (items , children , items , 0);
                    typeof((((match10332 . __h_data ). Right ). __h_0_mem )) tr ;
                    // ----------
                    ;
                    ({ /* cicili#Let10335 */
                      bool __h_case_result  = (true  &&  (((match10332 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn10336 */
                            (tr  =  (((match10332 . __h_data ). Right ). __h_0_mem ) );
                            true ;
                          }) ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* cicili#Progn10341 */
                          Right_BTree_int_User_Error_BTree_int_User (split_BTree_int_User (tr ));
                        }) : ({ /* cicili#Let10348 */
                          __auto_type left  = match10332 ;
                          // ----------
                          ;
                          ({ /* cicili#Progn10350 */
                            left ;
                          });
                        }));
                    });
                  });
                }) : ({ /* cicili#Let10354 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  ;
                  ({ /* cicili#Let10356 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn10357 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn10362 */
                        ({ /* cicili#Let10366 */
                          __auto_type match10365  = insertLeaf (items , items , 0);
                          typeof((((match10365 . __h_data ). Right ). __h_0_mem )) tr ;
                          // ----------
                          ;
                          ({ /* cicili#Let10368 */
                            bool __h_case_result  = (true  &&  (((match10365 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn10369 */
                                  (tr  =  (((match10365 . __h_data ). Right ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn10374 */
                                Right_BTree_int_User_Error_BTree_int_User (split_BTree_int_User (tr ));
                              }) : ({ /* cicili#Let10381 */
                                __auto_type left  = match10365 ;
                                // ----------
                                ;
                                ({ /* cicili#Progn10383 */
                                  left ;
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let10387 */
                        // ----------
                        ;
                        ({ /* cicili#Progn10389 */
                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_INVALID_OBJECT ());
                        });
                      }));
                  });
                }));
            });
          }));
      });
    });
}
size_t order_BTree_int_User () {
  return 3;
}
void free_BTree_int_User (BTree_int_User * this_ptr ) {
  { /* cicili#Let10398 */
    __auto_type this  = (*this_ptr );
    // ----------
    void freeChildren (List_Rc_BTree_int_User children ) {
      { /* cicili#Let10403 */
        typeof((((children -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((children -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let10405 */
          bool __h_case_result  = (true  &&  (((children -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn10406 */
                  (head  =  (((children -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn10408 */
                  (tail  =  (((children -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block10414 */
              { /* cicili#Block10416 */
                free_Rc_BTree_int_User (&head );
                freeChildren (tail );
              }
            }
        });
      }
    }
    { /* cicili#Let10422 */
      typeof((((this -> __h_data ). Branch ). __h_0_mem )) items ;
      typeof((((this -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      ;
      ({ /* cicili#Let10424 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn10425 */
                (items  =  (((this -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn10427 */
                (children  =  (((this -> __h_data ). Branch ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block10433 */
            { /* cicili#Block10435 */
              free_List_BTree_int_User_pair_t ((&items ));
              freeChildren (children );
              free_List_Rc_BTree_int_User ((&children ));
              free (this );
            }
          }
        else
          { /* cicili#Let10446 */
            typeof((((this -> __h_data ). Internal ). __h_0_mem )) items ;
            typeof((((this -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            ;
            ({ /* cicili#Let10448 */
              bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn10449 */
                      (items  =  (((this -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn10451 */
                      (children  =  (((this -> __h_data ). Internal ). __h_1_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block10457 */
                  { /* cicili#Block10459 */
                    free_List_BTree_int_User_pair_t ((&items ));
                    freeChildren (children );
                    free_List_Rc_BTree_int_User ((&children ));
                    free (this );
                  }
                }
              else
                { /* cicili#Let10470 */
                  typeof((((this -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  ;
                  ({ /* cicili#Let10472 */
                    bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn10473 */
                          (items  =  (((this -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block10479 */
                        { /* cicili#Block10481 */
                          free_List_BTree_int_User_pair_t ((&items ));
                          free (this );
                        }
                      }
                  });
                }
            });
          }
      });
    }
  }
}
BTree_int_User__H_Table * const get_BTree_int_User__H_Table () {
  static BTree_int_User__H_Table table  = { free_BTree_int_User , fromLists_BTree_int_User , pure_BTree_int_User , show_BTree_int_User , traverse_BTree_int_User , max_BTree_int_User , min_BTree_int_User , delete_BTree_int_User , search_BTree_int_User , insert_BTree_int_User , order_BTree_int_User };
  return (&table );
}
BTree_int_User Branch_BTree_int_User (List_BTree_int_User_pair_t items , List_Rc_BTree_int_User children ) {
  { /* cicili#Let10493 */
    BTree_int_User instance  = malloc (sizeof(class_BTree_int_User));
    // ----------
    (*instance ) = ((class_BTree_int_User){ get_BTree_int_User__H_Table (), __h_Branch_t , .__h_data.Branch = { items , children }});
    return instance ;
  }
}
BTree_int_User Internal_BTree_int_User (List_BTree_int_User_pair_t items , List_Rc_BTree_int_User children ) {
  { /* cicili#Let10501 */
    BTree_int_User instance  = malloc (sizeof(class_BTree_int_User));
    // ----------
    (*instance ) = ((class_BTree_int_User){ get_BTree_int_User__H_Table (), __h_Internal_t , .__h_data.Internal = { items , children }});
    return instance ;
  }
}
BTree_int_User Leaf_BTree_int_User (List_BTree_int_User_pair_t items ) {
  { /* cicili#Let10509 */
    BTree_int_User instance  = malloc (sizeof(class_BTree_int_User));
    // ----------
    (*instance ) = ((class_BTree_int_User){ get_BTree_int_User__H_Table (), __h___t , .__h_data._ = { items }});
    return instance ;
  }
}
#endif /* __BTree_int_User__H_IMPL__ */ 
Bool doQuit ;
pthread_mutex_t treeArc ;
pthread_mutex_t outlock  = PTHREAD_MUTEX_INITIALIZER ;
#ifndef __Maybe_BTree_int_User__H_DECL__
#define __Maybe_BTree_int_User__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_BTree_int_User Maybe_BTree_int_User ;
typedef void (*free_Maybe_BTree_int_User_t) (Maybe_BTree_int_User * this );
typedef struct Maybe_BTree_int_User__H_Table {
  free_Maybe_BTree_int_User_t freeData ;
} Maybe_BTree_int_User__H_Table;
typedef struct Maybe_BTree_int_User {
  const Maybe_BTree_int_User__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion10529 */
    struct { /* ciciliStruct10530 */
      BTree_int_User __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct10531 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_BTree_int_User;
Maybe_BTree_int_User Just_BTree_int_User (BTree_int_User value );
Maybe_BTree_int_User Nothing_BTree_int_User ();
__attribute__((weak)) Maybe_BTree_int_User Default_Maybe_BTree_int_User () {
  return Nothing_BTree_int_User ();
}
const Maybe_BTree_int_User__H_Table * const get_Maybe_BTree_int_User__H_Table ();
void free_Maybe_BTree_int_User (Maybe_BTree_int_User * this );
#endif /* __Maybe_BTree_int_User__H_DECL__ */ 
#ifndef __Arc_BTree_int_User__H_DECL__
#define __Arc_BTree_int_User__H_DECL__
#ifndef __H___h_Rc_ctor_t__
#define __H___h_Rc_ctor_t__
typedef enum __h_Rc_ctor_t {
  __h_Gone_t = 0,
  __h_Hold_t = 1
} __h_Rc_ctor_t;
#endif /* __H___h_Rc_ctor_t__ */ 
typedef struct Arc_BTree_int_User Arc_BTree_int_User ;
typedef void (*free_Arc_BTree_int_User_t) (Arc_BTree_int_User * this );
typedef struct Arc_BTree_int_User__H_Table {
  free_Arc_BTree_int_User_t freeData ;
    void (*lock) (Arc_BTree_int_User arc ,   void (*alive_callback) (BTree_int_User pointer ),   void (*dead_callback) ());
    Arc_BTree_int_User (*new) (BTree_int_User pointer , pthread_mutex_t * mutex );
    Arc_BTree_int_User (*clone) (Arc_BTree_int_User arc );
    Maybe_BTree_int_User (*take) (Arc_BTree_int_User * this );
    Maybe_BTree_int_User (*get) (Arc_BTree_int_User arc );
} Arc_BTree_int_User__H_Table;
typedef struct Arc_BTree_int_User {
  const Arc_BTree_int_User__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion10570 */
    struct { /* ciciliStruct10571 */
      BTree_int_User * __h_0_mem ;
      int * __h_1_mem ;
      size_t __h_2_mem ;
      pthread_mutex_t * __h_3_mem ;
    } Hold , _1 ;
    struct { /* ciciliStruct10572 */
    } Gone , _ ;
  } __h_data ;
} Arc_BTree_int_User;
Arc_BTree_int_User __h_AtomicHold_BTree_int_User (BTree_int_User * pointer , int * count , size_t address , pthread_mutex_t * mutex );
Arc_BTree_int_User AtomicGone_BTree_int_User ();
__attribute__((weak)) Arc_BTree_int_User Default_Arc_BTree_int_User () {
  return AtomicGone_BTree_int_User ();
}
void lock_Arc_BTree_int_User (Arc_BTree_int_User arc , void (*alive_callback) (BTree_int_User pointer ), void (*dead_callback) ());
Arc_BTree_int_User new_Arc_BTree_int_User (BTree_int_User pointer , pthread_mutex_t * mutex );
Arc_BTree_int_User clone_Arc_BTree_int_User (Arc_BTree_int_User arc );
Maybe_BTree_int_User take_Arc_BTree_int_User (Arc_BTree_int_User * this );
Maybe_BTree_int_User get_Arc_BTree_int_User (Arc_BTree_int_User arc );
const Arc_BTree_int_User__H_Table * const get_Arc_BTree_int_User__H_Table ();
void free_Arc_BTree_int_User (Arc_BTree_int_User * this );
#endif /* __Arc_BTree_int_User__H_DECL__ */ 
#ifndef __Maybe_BTree_int_User__H_IMPL__
#define __Maybe_BTree_int_User__H_IMPL__
void free_Maybe_BTree_int_User (Maybe_BTree_int_User * this ) {
}
const Maybe_BTree_int_User__H_Table * const get_Maybe_BTree_int_User__H_Table () {
  static const Maybe_BTree_int_User__H_Table table  = { free_Maybe_BTree_int_User };
  return (&table );
}
Maybe_BTree_int_User Just_BTree_int_User (BTree_int_User value ) {
  { /* cicili#Let10627 */
    Maybe_BTree_int_User instance  = ((Maybe_BTree_int_User){ get_Maybe_BTree_int_User__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_BTree_int_User Nothing_BTree_int_User () {
  { /* cicili#Let10632 */
    Maybe_BTree_int_User instance  = ((Maybe_BTree_int_User){ get_Maybe_BTree_int_User__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_BTree_int_User__H_IMPL__ */ 
#ifndef __Arc_BTree_int_User__H_IMPL__
#define __Arc_BTree_int_User__H_IMPL__
void lock_Arc_BTree_int_User (Arc_BTree_int_User arc , void (*alive_callback) (BTree_int_User pointer ), void (*dead_callback) ()) {
  { /* cicili#Let10641 */
    typeof((((arc . __h_data ). Hold ). __h_0_mem )) pointer ;
    typeof((((arc . __h_data ). Hold ). __h_1_mem )) count ;
    typeof((((arc . __h_data ). Hold ). __h_2_mem )) address ;
    typeof((((arc . __h_data ). Hold ). __h_3_mem )) mutex ;
    // ----------
    ;
    ({ /* cicili#Let10643 */
      bool __h_case_result  = (true  &&  (((arc . __h_ctor ) ==  __h_Hold_t  ) &&  (((({ /* cicili#Progn10644 */
                  (pointer  =  (((arc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn10646 */
                  (count  =  (((arc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn10648 */
                (address  =  (((arc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) &&  ({ /* cicili#Progn10650 */
              (mutex  =  (((arc . __h_data ). Hold ). __h_3_mem ) );
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block10656 */
          { /* cicili#Block10659 */
            pthread_mutex_lock (mutex );
            if (pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) >  0 ) )
              alive_callback ((*pointer ));
            else
              dead_callback ();
            pthread_mutex_unlock (mutex );
          }
        }
      else
        { /* cicili#Let10666 */
          // ----------
          ;
          ({ /* cicili#Let10668 */
            bool __h_case_result  = (true  &&  ((arc . __h_ctor ) ==  __h_Gone_t  ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block10673 */
                dead_callback ();
              }
          });
        }
    });
  }
}
Arc_BTree_int_User new_Arc_BTree_int_User (BTree_int_User pointer , pthread_mutex_t * mutex ) {
  return ({ /* cicili#Let10681 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      __auto_type holder  = ((BTree_int_User *)malloc (sizeof(BTree_int_User *)));
      // ----------
      (*count ) = 1;
      (*holder ) = pointer ;
      __h_AtomicHold_BTree_int_User (holder , count , ((size_t)pointer ), mutex );
    });
}
Arc_BTree_int_User clone_Arc_BTree_int_User (Arc_BTree_int_User arc ) {
  return ({ /* cicili#Let10689 */
      typeof((((arc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((arc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((arc . __h_data ). Hold ). __h_2_mem )) address ;
      typeof((((arc . __h_data ). Hold ). __h_3_mem )) mutex ;
      // ----------
      ;
      ({ /* cicili#Let10691 */
        bool __h_case_result  = (true  &&  (((arc . __h_ctor ) ==  __h_Hold_t  ) &&  (((({ /* cicili#Progn10692 */
                    (pointer  =  (((arc . __h_data ). Hold ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn10694 */
                    (count  =  (((arc . __h_data ). Hold ). __h_1_mem ) );
                    true ;
                  }) ) &&  ({ /* cicili#Progn10696 */
                  (address  =  (((arc . __h_data ). Hold ). __h_2_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn10698 */
                (mutex  =  (((arc . __h_data ). Hold ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn10703 */
            ({ /* cicili#Progn10706 */
              pthread_mutex_lock (mutex );
              __auto_type lock_result  = ({ /* cicili#Progn10708 */
                    (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Progn10711 */
                        (++(*count ));
                        __h_AtomicHold_BTree_int_User (pointer , count , address , mutex );
                      }) : AtomicGone_BTree_int_User ());
                  });
              pthread_mutex_unlock (mutex );
              lock_result ;
            });
          }) : ({ /* cicili#Let10717 */
            // ----------
            ;
            ({ /* cicili#Progn10719 */
              AtomicGone_BTree_int_User ();
            });
          }));
      });
    });
}
Maybe_BTree_int_User take_Arc_BTree_int_User (Arc_BTree_int_User * this ) {
  return ({ /* cicili#Let10728 */
      typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
      typeof((((this -> __h_data ). Hold ). __h_3_mem )) mutex ;
      // ----------
      ;
      ({ /* cicili#Let10730 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  (((({ /* cicili#Progn10731 */
                    (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn10733 */
                    (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                    true ;
                  }) ) &&  ({ /* cicili#Progn10735 */
                  (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn10737 */
                (mutex  =  (((this -> __h_data ). Hold ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn10742 */
            ({ /* cicili#Progn10745 */
              pthread_mutex_lock (mutex );
              __auto_type lock_result  = ({ /* cicili#Progn10747 */
                    (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Let10751 */
                        __auto_type result  = Just_BTree_int_User ((*pointer ));
                        // ----------
                        if ((*count ) >=  1 )
                          { /* cicili#Block10757 */
                            (*count ) = 0;
                            (*pointer ) = NULL ;
                          }
                        result ;
                      }) : Nothing_BTree_int_User ());
                  });
              pthread_mutex_unlock (mutex );
              lock_result ;
            });
          }) : ({ /* cicili#Let10762 */
            // ----------
            ;
            ({ /* cicili#Progn10764 */
              Nothing_BTree_int_User ();
            });
          }));
      });
    });
}
Maybe_BTree_int_User get_Arc_BTree_int_User (Arc_BTree_int_User arc ) {
  return ({ /* cicili#Let10773 */
      typeof((((arc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((arc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((arc . __h_data ). Hold ). __h_2_mem )) address ;
      typeof((((arc . __h_data ). Hold ). __h_3_mem )) mutex ;
      // ----------
      ;
      ({ /* cicili#Let10775 */
        bool __h_case_result  = (true  &&  (((arc . __h_ctor ) ==  __h_Hold_t  ) &&  (((({ /* cicili#Progn10776 */
                    (pointer  =  (((arc . __h_data ). Hold ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn10778 */
                    (count  =  (((arc . __h_data ). Hold ). __h_1_mem ) );
                    true ;
                  }) ) &&  ({ /* cicili#Progn10780 */
                  (address  =  (((arc . __h_data ). Hold ). __h_2_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn10782 */
                (mutex  =  (((arc . __h_data ). Hold ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn10787 */
            ({ /* cicili#Progn10790 */
              pthread_mutex_lock (mutex );
              __auto_type lock_result  = ({ /* cicili#Progn10792 */
                    (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) >  0 ) )) ? Just_BTree_int_User ((*pointer )) : Nothing_BTree_int_User ());
                  });
              pthread_mutex_unlock (mutex );
              lock_result ;
            });
          }) : ({ /* cicili#Let10799 */
            // ----------
            ;
            ({ /* cicili#Progn10801 */
              Nothing_BTree_int_User ();
            });
          }));
      });
    });
}
void free_Arc_BTree_int_User (Arc_BTree_int_User * this ) {
  { /* cicili#Let10811 */
    typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
    typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
    typeof((((this -> __h_data ). Hold ). __h_3_mem )) mutex ;
    // ----------
    ;
    ({ /* cicili#Let10813 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  (((({ /* cicili#Progn10814 */
                  (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn10816 */
                  (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn10818 */
                (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) &&  ({ /* cicili#Progn10820 */
              (mutex  =  (((this -> __h_data ). Hold ). __h_3_mem ) );
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block10826 */
          { /* cicili#Block10829 */
            pthread_mutex_lock (mutex );
            if (((*count ) ==  0 ) &&  ((*pointer ) ==  NULL  ) )
              { /* cicili#Block10832 */
                free (((void *)count ));
                free (((void *)pointer ));
                (*this ) = AtomicGone_BTree_int_User ();
              }
            else
              {
              if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
                { /* cicili#Block10840 */
                  if ((*count ) ==  1 )
                    { /* cicili#Block10843 */
                      free_BTree_int_User (pointer );
                      (*count ) = 0;
                      free (((void *)count ));
                      (*pointer ) = NULL ;
                      free (((void *)pointer ));
                      (*this ) = AtomicGone_BTree_int_User ();
                    }
                  else
                    (--(*count ));
                }
                }            pthread_mutex_unlock (mutex );
          }
        }
      else
        { /* cicili#Let10853 */
          // ----------
          ;
          ({ /* cicili#Let10855 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Gone_t  ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block10860 */
              }
          });
        }
    });
  }
}
const Arc_BTree_int_User__H_Table * const get_Arc_BTree_int_User__H_Table () {
  static const Arc_BTree_int_User__H_Table table  = { free_Arc_BTree_int_User , lock_Arc_BTree_int_User , new_Arc_BTree_int_User , clone_Arc_BTree_int_User , take_Arc_BTree_int_User , get_Arc_BTree_int_User };
  return (&table );
}
Arc_BTree_int_User __h_AtomicHold_BTree_int_User (BTree_int_User * pointer , int * count , size_t address , pthread_mutex_t * mutex ) {
  { /* cicili#Let10871 */
    Arc_BTree_int_User instance  = ((Arc_BTree_int_User){ get_Arc_BTree_int_User__H_Table (), __h_Hold_t , .__h_data.Hold = { pointer , count , address , mutex }});
    // ----------
    return instance ;
  }
}
Arc_BTree_int_User AtomicGone_BTree_int_User () {
  { /* cicili#Let10876 */
    Arc_BTree_int_User instance  = ((Arc_BTree_int_User){ get_Arc_BTree_int_User__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Arc_BTree_int_User__H_IMPL__ */ 
void __ciciliL_10948 () {
  ({ /* cicili#Let10951 */
    __auto_type tmp_stdout  = stdout ;
    // ----------
    stdout  = stderr ;
    printf ("Bad Rc! (writer i)\n");
    exit (-1);
    stdout  = tmp_stdout ;
  });
}
void insertMany (Arc_BTree_int_User * pwtree , int from , int to ) {
  { /* cicili#Let10880 */
    char keyStr [10];
    // ----------
    for (int i  = from ; (i  <=  to  ); (++i )) {
        sprintf (keyStr , "%d", i );
        { /* cicili#Let10884 */
          String name  = ({ /* cicili#Let10886 */
            __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10888 */
              __auto_type r1  = new_String_Const ("User ");
              // ----------
              ((void)(r1 -> __h_table -> freeClass ));
              r1 ;
            });
            __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10891 */
              __auto_type r2  = new_String_Const (keyStr );
              // ----------
              ((void)(r2 -> __h_table -> freeClass ));
              r2 ;
            });
            // ----------
            append_String (r1 , r2 );
          });
          // ----------
          lock_Arc_BTree_int_User ((*pwtree ), ({ /* cicili#Progn10897 */
              void __ciciliC_10896 (BTree_int_User tree ) {
                { /* cicili#Let10902 */
                  __auto_type match10901  = insert_BTree_int_User (tree , i , ((User){ new_Cell_String (name ), (i  +  2000 )}));
                  typeof((((match10901 . __h_data ). Right ). __h_0_mem )) new_tree ;
                  // ----------
                  ;
                  ({ /* cicili#Let10906 */
                    bool __h_case_result  = (true  &&  (((match10901 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn10907 */
                          (new_tree  =  (((match10901 . __h_data ). Right ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block10913 */
                        { /* cicili#Block10915 */
                          { /* cicili#Block10918 */
                            pthread_mutex_lock ((&outlock ));
                            fprintf (stdout , "Inserted: %d, ", i );
                            show_String (stdout , name );
                            putchar ('\n');
                            pthread_mutex_unlock ((&outlock ));
                          }
                          free_Arc_BTree_int_User (pwtree );
                          (*pwtree ) = new_Arc_BTree_int_User (new_tree , (&treeArc ));
                        }
                      }
                    else
                      { /* cicili#Let10930 */
                        typeof((((match10901 . __h_data ). Left ). __h_0_mem )) err ;
                        // ----------
                        ;
                        ({ /* cicili#Let10932 */
                          bool __h_case_result  = (true  &&  (((match10901 . __h_ctor ) ==  __h_Left_t  ) &&  ({ /* cicili#Progn10933 */
                                (err  =  (((match10901 . __h_data ). Left ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          if (__h_case_result )
                            { /* cicili#Block10939 */
                              { /* cicili#Block10942 */
                                pthread_mutex_lock ((&outlock ));
                                ({ /* cicili#Let10945 */
                                  __auto_type tmp_stdout  = stdout ;
                                  // ----------
                                  stdout  = stderr ;
                                  printf ("Error during insertion: ");
                                  show_BTree_int_User_Error (err );
                                  putchar ('\n');
                                  exit (-1);
                                  stdout  = tmp_stdout ;
                                });
                                pthread_mutex_unlock ((&outlock ));
                              }
                            }
                        });
                      }
                  });
                }
              }
              __ciciliC_10896 ;
            }), __ciciliL_10948 );
          usleep (5);
        }
    }
  }
}
void __ciciliL_10956 (BTree_int_User_pair_t item ) {
  { /* cicili#Let10961 */
    typeof((item . __h_0_mem )) key ;
    typeof((item . __h_1_mem )) __h_match10959_1_arg ;
    typeof((__h_match10959_1_arg . __h_0_mem )) wname ;
    // ----------
    ;
    ({ /* cicili#Let10963 */
      bool __h_case_result  = (true  &&  ((({ /* cicili#Progn10964 */
              (key  =  (item . __h_0_mem ) );
              true ;
            }) &&  ({ /* cicili#Progn10966 */
              (__h_match10959_1_arg  =  (item . __h_1_mem ) );
              true ;
            }) ) &&  (true  &&  ({ /* cicili#Progn10968 */
              (wname  =  (__h_match10959_1_arg . __h_0_mem ) );
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block10974 */
          { /* cicili#Block10977 */
            pthread_mutex_lock ((&outlock ));
            printf ("Deleted: %d, ", key );
            { /* cicili#Let10981 */
              __auto_type match10980  = get_Cell_String (wname );
              typeof((((match10980 . __h_data ). Just ). __h_0_mem )) name ;
              // ----------
              ;
              ({ /* cicili#Let10984 */
                bool __h_case_result  = (true  &&  (((match10980 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10985 */
                      (name  =  (((match10980 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                
                if (__h_case_result )
                  { /* cicili#Block10991 */
                    show_String (stdout , name );
                  }
              });
            }
            putchar ('\n');
            free_Cell_String ((&wname ));
            pthread_mutex_unlock ((&outlock ));
          }
        }
    });
  }
}
void __ciciliL_11046 () {
  ({ /* cicili#Let11049 */
    __auto_type tmp_stdout  = stdout ;
    // ----------
    stdout  = stderr ;
    printf ("Bad Rc! (writer d)\n");
    exit (-1);
    stdout  = tmp_stdout ;
  });
}
void deleteMany (Arc_BTree_int_User * pwtree , int from , int to ) {
  { /* cicili#Let10955 */
    __auto_type item_deallocator  = __ciciliL_10956 ;
    // ----------
    for (int i  = from ; (i  <=  to  ); (++i )) {
        lock_Arc_BTree_int_User ((*pwtree ), ({ /* cicili#Progn11000 */
            void __ciciliC_10999 (BTree_int_User tree ) {
              { /* cicili#Let11005 */
                __auto_type match11004  = delete_BTree_int_User (tree , i , item_deallocator );
                typeof((((match11004 . __h_data ). Right ). __h_0_mem )) new_tree ;
                // ----------
                ;
                ({ /* cicili#Let11008 */
                  bool __h_case_result  = (true  &&  (((match11004 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn11009 */
                        (new_tree  =  (((match11004 . __h_data ). Right ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block11015 */
                      { /* cicili#Block11017 */
                        free_Arc_BTree_int_User (pwtree );
                        (*pwtree ) = new_Arc_BTree_int_User (new_tree , (&treeArc ));
                      }
                    }
                  else
                    { /* cicili#Let11028 */
                      typeof((((match11004 . __h_data ). Left ). __h_0_mem )) err ;
                      // ----------
                      ;
                      ({ /* cicili#Let11030 */
                        bool __h_case_result  = (true  &&  (((match11004 . __h_ctor ) ==  __h_Left_t  ) &&  ({ /* cicili#Progn11031 */
                              (err  =  (((match11004 . __h_data ). Left ). __h_0_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        
                        if (__h_case_result )
                          { /* cicili#Block11037 */
                            { /* cicili#Block11040 */
                              pthread_mutex_lock ((&outlock ));
                              ({ /* cicili#Let11043 */
                                __auto_type tmp_stdout  = stdout ;
                                // ----------
                                stdout  = stderr ;
                                printf ("Error during deletion: ");
                                show_BTree_int_User_Error (err );
                                putchar ('\n');
                                exit (-1);
                                stdout  = tmp_stdout ;
                              });
                              pthread_mutex_unlock ((&outlock ));
                            }
                          }
                      });
                    }
                });
              }
            }
            __ciciliC_10999 ;
          }), __ciciliL_11046 );
        usleep (5);
    }
  }
}
void freeRcTree (Arc_BTree_int_User * pnwtree ) {
  free_Arc_BTree_int_User (pnwtree );
}
void searchMany (Arc_BTree_int_User * pwtree , int from , int to ) {
  while (true ) {
      { /* cicili#Let11061 */
        // ----------
        ;
        ({ /* cicili#Let11063 */
          bool __h_case_result  = (true  &&  ((doQuit . __h_ctor ) ==  __h_True_t  ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block11068 */
              return ;
            }
        });
      }
      ({ /* cicili#Let11071 */
        __auto_type nwtree  __attribute__((__cleanup__(freeRcTree ))) = clone_Arc_BTree_int_User ((*pwtree ));
        // ----------
        { /* cicili#Let11076 */
          __auto_type match11075  = get_Arc_BTree_int_User (nwtree );
          typeof((((match11075 . __h_data ). Just ). __h_0_mem )) tree ;
          // ----------
          ;
          ({ /* cicili#Let11079 */
            bool __h_case_result  = (true  &&  (((match11075 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11080 */
                  (tree  =  (((match11075 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block11086 */
                for (int i  = from ; (i  <=  to  ); (++i )) {
                    { /* cicili#Let11092 */
                      __auto_type match11091  = search_BTree_int_User (tree , i );
                      typeof((((match11091 . __h_data ). Just ). __h_0_mem )) item ;
                      // ----------
                      ;
                      ({ /* cicili#Let11095 */
                        bool __h_case_result  = (true  &&  (((match11091 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11096 */
                              (item  =  (((match11091 . __h_data ). Just ). __h_0_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        
                        if (__h_case_result )
                          { /* cicili#Block11102 */
                            { /* cicili#Block11105 */
                              pthread_mutex_lock ((&outlock ));
                              fprintf (stdout , "thread: %lu, Search Found: ", ((unsigned long )pthread_self ()));
                              ({ /* cicili#Let11114 */
                                typeof((item . __h_0_mem )) id ;
                                typeof((item . __h_1_mem )) __h_match11112_1_arg ;
                                typeof((__h_match11112_1_arg . __h_0_mem )) wname ;
                                typeof((__h_match11112_1_arg . __h_1_mem )) salary ;
                                // ----------
                                ;
                                ({ /* cicili#Let11116 */
                                  bool __h_case_result  = (true  &&  ((({ /* cicili#Progn11117 */
                                          (id  =  (item . __h_0_mem ) );
                                          true ;
                                        }) &&  ({ /* cicili#Progn11119 */
                                          (__h_match11112_1_arg  =  (item . __h_1_mem ) );
                                          true ;
                                        }) ) &&  (true  &&  (({ /* cicili#Progn11121 */
                                            (wname  =  (__h_match11112_1_arg . __h_0_mem ) );
                                            true ;
                                          }) &&  ({ /* cicili#Progn11123 */
                                            (salary  =  (__h_match11112_1_arg . __h_1_mem ) );
                                            true ;
                                          }) ) ) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn11128 */
                                      ({ /* cicili#Let11132 */
                                        __auto_type match11131  = get_Cell_String (wname );
                                        typeof((((match11131 . __h_data ). Just ). __h_0_mem )) name ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let11135 */
                                          bool __h_case_result  = (true  &&  (((match11131 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11136 */
                                                (name  =  (((match11131 . __h_data ). Just ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn11141 */
                                              (fprintf (stdout , "(%d, '", id ) +  show_String (stdout , name ) +  fprintf (stdout , "', %d)", salary ) );
                                            }) : ({ /* cicili#Let11145 */
                                              // ----------
                                              ;
                                              ({ /* cicili#Progn11147 */
                                                fprintf (stdout , "%d, but item is deleted in another version!", id );
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let11151 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn11153 */
                                        0;
                                      });
                                    }));
                                });
                              });
                              putchar ('\n');
                              pthread_mutex_unlock ((&outlock ));
                            }
                          }
                        else
                          { /* cicili#Let11158 */
                            // ----------
                            ;
                            ({ /* cicili#Let11160 */
                              bool __h_case_result  = (true  &&  ((match11091 . __h_ctor ) ==  __h_Nothing_t  ) );
                              // ----------
                              
                              if (__h_case_result )
                                { /* cicili#Block11165 */
                                  { /* cicili#Block11168 */
                                    pthread_mutex_lock ((&outlock ));
                                    ({ /* cicili#Let11171 */
                                      __auto_type tmp_stdout  = stdout ;
                                      // ----------
                                      stdout  = stderr ;
                                      printf ("thread: %lu, Search Not Found: %d", ((unsigned long )pthread_self ()), i );
                                      putchar ('\n');
                                      stdout  = tmp_stdout ;
                                    });
                                    pthread_mutex_unlock ((&outlock ));
                                  }
                                }
                            });
                          }
                      });
                    }
                }
              }
          });
        }
      });
  }
}
typedef struct __ciciliC_Context_11195 {
    void (*routine) (struct __ciciliC_Context_11195 * context );
  struct { /* ciciliStruct11198 */
    Arc_BTree_int_User * pwtree ;
  } context ;
} __ciciliC_Context_11195;
typedef struct ciciliuHxEOASl4P3iVDYo1QYX9E3bziQ_ {
  void * context ;
} ciciliuHxEOASl4P3iVDYo1QYX9E3bziQ_;
void __ciciliL_11205 (struct ciciliuHxEOASl4P3iVDYo1QYX9E3bziQ_ * ciciliDefer11202_ptr ) {
  void * context  = (ciciliDefer11202_ptr -> context );
  free (context );
}
void __ciciliC_Context_11195___ciciliC_Routine_11196 (struct __ciciliC_Context_11195 * context ) {
  Arc_BTree_int_User * pwtree  = ((context -> context ). pwtree );
  struct ciciliuHxEOASl4P3iVDYo1QYX9E3bziQ_ ciciliDefer11202  __attribute__((__cleanup__(__ciciliL_11205 ))) = { context };
  searchMany (pwtree , 200, 200);
}
typedef struct __ciciliC_Context_11216 {
    void (*routine) (struct __ciciliC_Context_11216 * context );
  struct { /* ciciliStruct11219 */
    Arc_BTree_int_User * pwtree ;
  } context ;
} __ciciliC_Context_11216;
typedef struct ciciliu8_vFmh_PNPXE3F4_mAYcl_OFyQ_ {
  void * context ;
} ciciliu8_vFmh_PNPXE3F4_mAYcl_OFyQ_;
void __ciciliL_11226 (struct ciciliu8_vFmh_PNPXE3F4_mAYcl_OFyQ_ * ciciliDefer11223_ptr ) {
  void * context  = (ciciliDefer11223_ptr -> context );
  free (context );
}
void __ciciliC_Context_11216___ciciliC_Routine_11217 (struct __ciciliC_Context_11216 * context ) {
  Arc_BTree_int_User * pwtree  = ((context -> context ). pwtree );
  struct ciciliu8_vFmh_PNPXE3F4_mAYcl_OFyQ_ ciciliDefer11223  __attribute__((__cleanup__(__ciciliL_11226 ))) = { context };
  searchMany (pwtree , 500, 500);
}
typedef struct __ciciliC_Context_11237 {
    void (*routine) (struct __ciciliC_Context_11237 * context );
  struct { /* ciciliStruct11240 */
    Arc_BTree_int_User * pwtree ;
  } context ;
} __ciciliC_Context_11237;
typedef struct cicili_He5gRjoUUhEKi5L8NL_CI6DfyM_ {
  void * context ;
} cicili_He5gRjoUUhEKi5L8NL_CI6DfyM_;
void __ciciliL_11247 (struct cicili_He5gRjoUUhEKi5L8NL_CI6DfyM_ * ciciliDefer11244_ptr ) {
  void * context  = (ciciliDefer11244_ptr -> context );
  free (context );
}
void __ciciliC_Context_11237___ciciliC_Routine_11238 (struct __ciciliC_Context_11237 * context ) {
  Arc_BTree_int_User * pwtree  = ((context -> context ). pwtree );
  struct cicili_He5gRjoUUhEKi5L8NL_CI6DfyM_ ciciliDefer11244  __attribute__((__cleanup__(__ciciliL_11247 ))) = { context };
  searchMany (pwtree , 700, 700);
}
typedef struct __ciciliC_Context_11258 {
    void (*routine) (struct __ciciliC_Context_11258 * context );
  struct { /* ciciliStruct11261 */
    Arc_BTree_int_User * pwtree ;
  } context ;
} __ciciliC_Context_11258;
typedef struct ciciliD74shCZDJyQmsm_4GpCZ0P6zt9c_ {
  void * context ;
} ciciliD74shCZDJyQmsm_4GpCZ0P6zt9c_;
void __ciciliL_11268 (struct ciciliD74shCZDJyQmsm_4GpCZ0P6zt9c_ * ciciliDefer11265_ptr ) {
  void * context  = (ciciliDefer11265_ptr -> context );
  free (context );
}
void __ciciliC_Context_11258___ciciliC_Routine_11259 (struct __ciciliC_Context_11258 * context ) {
  Arc_BTree_int_User * pwtree  = ((context -> context ). pwtree );
  struct ciciliD74shCZDJyQmsm_4GpCZ0P6zt9c_ ciciliDefer11265  __attribute__((__cleanup__(__ciciliL_11268 ))) = { context };
  searchMany (pwtree , 1000, 1000);
}
int main () {
  fprintf (stdout , "Multi-thread pure functional manipulation of '%s' type into and from '%s' structure using '%s' key type.\n", "User", "BTree_int_User", "int");
  doQuit  = False ();
  { /* cicili#Let11181 */
    pthread_mutexattr_t attr ;
    // ----------
    pthread_mutexattr_init ((&attr ));
    pthread_mutexattr_settype ((&attr ), PTHREAD_MUTEX_RECURSIVE );
    pthread_mutex_init ((&treeArc ), (&attr ));
  }
  { /* cicili#Let11183 */
    Arc_BTree_int_User wtree  = new_Arc_BTree_int_User (Leaf_BTree_int_User (Nil_BTree_int_User_pair_t ()), (&treeArc ));
    Arc_BTree_int_User * pwtree  = (&wtree );
    __auto_type reader1  = ({ /* cicili#Let11192 */
      __auto_type closure11191  = ((struct __ciciliC_Context_11195 ){ __ciciliC_Context_11195___ciciliC_Routine_11196 , { pwtree }});
      void * data  = malloc (sizeof(closure11191));
      pthread_t thread11190 ;
      // ----------
      memcpy (data , (&closure11191 ), sizeof(closure11191));
      pthread_create ((&thread11190 ), NULL , ((        void * (*)(void *   ))(closure11191 . routine )), data );
      ;
      thread11190 ;
    });
    __auto_type reader2  = ({ /* cicili#Let11213 */
      __auto_type closure11212  = ((struct __ciciliC_Context_11216 ){ __ciciliC_Context_11216___ciciliC_Routine_11217 , { pwtree }});
      void * data  = malloc (sizeof(closure11212));
      pthread_t thread11211 ;
      // ----------
      memcpy (data , (&closure11212 ), sizeof(closure11212));
      pthread_create ((&thread11211 ), NULL , ((        void * (*)(void *   ))(closure11212 . routine )), data );
      ;
      thread11211 ;
    });
    __auto_type reader3  = ({ /* cicili#Let11234 */
      __auto_type closure11233  = ((struct __ciciliC_Context_11237 ){ __ciciliC_Context_11237___ciciliC_Routine_11238 , { pwtree }});
      void * data  = malloc (sizeof(closure11233));
      pthread_t thread11232 ;
      // ----------
      memcpy (data , (&closure11233 ), sizeof(closure11233));
      pthread_create ((&thread11232 ), NULL , ((        void * (*)(void *   ))(closure11233 . routine )), data );
      ;
      thread11232 ;
    });
    __auto_type reader4  = ({ /* cicili#Let11255 */
      __auto_type closure11254  = ((struct __ciciliC_Context_11258 ){ __ciciliC_Context_11258___ciciliC_Routine_11259 , { pwtree }});
      void * data  = malloc (sizeof(closure11254));
      pthread_t thread11253 ;
      // ----------
      memcpy (data , (&closure11254 ), sizeof(closure11254));
      pthread_create ((&thread11253 ), NULL , ((        void * (*)(void *   ))(closure11254 . routine )), data );
      ;
      thread11253 ;
    });
    // ----------
    insertMany (pwtree , 1, 250);
    insertMany (pwtree , 501, 750);
    insertMany (pwtree , 251, 500);
    insertMany (pwtree , 751, 1000);
    deleteMany (pwtree , 1, 250);
    deleteMany (pwtree , 501, 750);
    deleteMany (pwtree , 251, 500);
    deleteMany (pwtree , 751, 1000);
    usleep (100);
    doQuit  = True ();
    pthread_join (reader1 , NULL );
    pthread_join (reader2 , NULL );
    pthread_join (reader3 , NULL );
    pthread_join (reader4 , NULL );
    free_Arc_BTree_int_User (pwtree );
    fprintf (stdout , "Done\n");
  }
}
