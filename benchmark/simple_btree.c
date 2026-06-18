#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "haskell.h"
#include <time.h>
typedef struct cicilikkGkbJL_jfdTgBS7Pi3QwUcJMtQ_ {
  Cell_String __h_0_mem ;
  int __h_1_mem ;
} cicilikkGkbJL_jfdTgBS7Pi3QwUcJMtQ_;
typedef cicilikkGkbJL_jfdTgBS7Pi3QwUcJMtQ_ User ;
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
  union { /* ciciliUnion125 */
    struct { /* ciciliStruct126 */
      User __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct127 */
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
    List_User (*pure) (const User * buf , size_t len );
    size_t (*show) (CFile file , List_User list );
    List_User (*copy) (List_User list );
    List_User (*replaceAt) (List_User list , User item , size_t index );
    List_User (*deleteAt) (List_User list , size_t index );
    List_User (*insertAt) (List_User llist , User item , size_t index );
    List_User (*replace) (List_User list , User item , List_User aimed );
    List_User (*delete) (List_User list , List_User aimed );
    List_User (*insert) (List_User llist , User item , List_User rlist );
    List_User (*reverse) (List_User list );
    List_User (*append) (List_User llist , List_User rlist );
    List_User (*push) (User item , List_User list );
    List_User (*take) (size_t len , List_User list );
    List_User (*last) (List_User list );
    List_User (*init) (List_User list );
    size_t (*hasLen) (List_User list , size_t desired );
    size_t (*len) (List_User list );
    List_User (*tail) (List_User list );
    List_User (*drop) (size_t len , List_User list );
    Maybe_User (*head) (List_User list );
    List_User (*nthcdr) (size_t index , List_User list );
    Maybe_User (*nth) (size_t index , List_User list );
} List_User__H_Table;
typedef struct class_List_User {
  const List_User__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion177 */
    struct { /* ciciliStruct178 */
      User __h_0_mem ;
      List_User __h_1_mem ;
    } Cons , _1 ;
    struct { /* ciciliStruct179 */
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
List_User pure_List_User (const User * buf , size_t len );
size_t show_List_User (CFile file , List_User list );
List_User copy_List_User (List_User list );
List_User replaceAt_List_User (List_User list , User item , size_t index );
List_User deleteAt_List_User (List_User list , size_t index );
List_User insertAt_List_User (List_User llist , User item , size_t index );
List_User replace_List_User (List_User list , User item , List_User aimed );
List_User delete_List_User (List_User list , List_User aimed );
List_User insert_List_User (List_User llist , User item , List_User rlist );
List_User reverse_List_User (List_User list );
List_User append_List_User (List_User llist , List_User rlist );
List_User push_List_User (User item , List_User list );
List_User take_List_User (size_t len , List_User list );
List_User last_List_User (List_User list );
List_User init_List_User (List_User list );
size_t hasLen_List_User (List_User list , size_t desired );
size_t len_List_User (List_User list );
List_User tail_List_User (List_User list );
List_User drop_List_User (size_t len , List_User list );
Maybe_User head_List_User (List_User list );
List_User nthcdr_List_User (size_t index , List_User list );
Maybe_User nth_List_User (size_t index , List_User list );
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
  union { /* ciciliUnion279 */
    struct { /* ciciliStruct280 */
      List_User __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct281 */
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
  { /* cicili#Let311 */
    Maybe_User instance  = ((Maybe_User){ get_Maybe_User__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_User Nothing_User () {
  { /* cicili#Let316 */
    Maybe_User instance  = ((Maybe_User){ get_Maybe_User__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_User__H_IMPL__ */ 
#ifndef __List_User__H_IMPL__
#define __List_User__H_IMPL__
User * toArray_List_User (List_User list , User term ) {
  User * array (List_User list , size_t count ) {
    return ({ /* cicili#Let326 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let328 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn329 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn331 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn336 */
              ({ /* cicili#Let338 */
                User * arr  = array (tail , (count  +  1 ));
                // ----------
                arr [count ] = head ;
                arr ;
              });
            }) : ({ /* cicili#Let342 */
              // ----------
              ;
              ({ /* cicili#Progn344 */
                ({ /* cicili#Let346 */
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
List_User pure_List_User (const User * buf , size_t len ) {
  return (((buf  ==  NULL  )) ? Nil_User () : ({ /* cicili#Let357 */
        User item  = (*buf );
        // ----------
        (((len  ==  0 )) ? Nil_User () : Cons_User (item , pure_List_User ((++buf ), (--len ))));
      }));
}
size_t show_List_User (CFile file , List_User list ) {
  return ({ /* cicili#Let367 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let369 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn370 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn372 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn377 */
            (({ /* cicili#Let381 */
                // ----------
                ;
                ({ /* cicili#Let383 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn387 */
                      (({ /* cicili#Let393 */
                          typeof((head . __h_0_mem )) wname ;
                          typeof((head . __h_1_mem )) salary ;
                          // ----------
                          ;
                          ({ /* cicili#Let395 */
                            bool __h_case_result  = (true  &&  (({ /* cicili#Progn396 */
                                  (wname  =  (head . __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn398 */
                                  (salary  =  (head . __h_1_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn403 */
                                ({ /* cicili#Let407 */
                                  __auto_type match406  = get_Cell_String (wname );
                                  typeof((((match406 . __h_data ). Just ). __h_0_mem )) name ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let410 */
                                    bool __h_case_result  = (true  &&  (((match406 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn411 */
                                          (name  =  (((match406 . __h_data ). Just ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn416 */
                                        (fprintf (file , "('") +  show_String (file , name ) +  fprintf (file , "', %d)", salary ) );
                                      }) : ({ /* cicili#Let420 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn422 */
                                          fprintf (file , "item is deleted in another version!");
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let426 */
                                // ----------
                                ;
                                ({ /* cicili#Progn428 */
                                  0;
                                });
                              }));
                          });
                        }) +  fprintf (file , "%s", " ") );
                    }) : ({ /* cicili#Let432 */
                      // ----------
                      ;
                      ({ /* cicili#Progn434 */
                        ({ /* cicili#Let440 */
                          typeof((head . __h_0_mem )) wname ;
                          typeof((head . __h_1_mem )) salary ;
                          // ----------
                          ;
                          ({ /* cicili#Let442 */
                            bool __h_case_result  = (true  &&  (({ /* cicili#Progn443 */
                                  (wname  =  (head . __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn445 */
                                  (salary  =  (head . __h_1_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn450 */
                                ({ /* cicili#Let454 */
                                  __auto_type match453  = get_Cell_String (wname );
                                  typeof((((match453 . __h_data ). Just ). __h_0_mem )) name ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let457 */
                                    bool __h_case_result  = (true  &&  (((match453 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn458 */
                                          (name  =  (((match453 . __h_data ). Just ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn463 */
                                        (fprintf (file , "('") +  show_String (file , name ) +  fprintf (file , "', %d)", salary ) );
                                      }) : ({ /* cicili#Let467 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn469 */
                                          fprintf (file , "item is deleted in another version!");
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let473 */
                                // ----------
                                ;
                                ({ /* cicili#Progn475 */
                                  0;
                                });
                              }));
                          });
                        });
                      });
                    }));
                });
              }) +  show_List_User (file , tail ) );
          }) : ({ /* cicili#Let480 */
            // ----------
            ;
            ({ /* cicili#Progn482 */
              0;
            });
          }));
      });
    });
}
List_User copy_List_User (List_User list ) {
  return ({ /* cicili#Let488 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let490 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn491 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn493 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn498 */
            Cons_User (head , copy_List_User (tail ));
          }) : ({ /* cicili#Let504 */
            // ----------
            ;
            ({ /* cicili#Progn506 */
              Nil_User ();
            });
          }));
      });
    });
}
List_User replaceAt_List_User (List_User list , User item , size_t index ) {
  return ({ /* cicili#Let513 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let515 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn516 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn518 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn523 */
            Cons_User (head , replaceAt_List_User (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let529 */
            // ----------
            ;
            ({ /* cicili#Progn531 */
              ({ /* cicili#Let535 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let537 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn538 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn543 */
                      Cons_User (item , copy_List_User (taill ));
                    }) : ({ /* cicili#Let549 */
                      // ----------
                      ;
                      ({ /* cicili#Progn551 */
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
List_User deleteAt_List_User (List_User list , size_t index ) {
  return ({ /* cicili#Let558 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let560 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn561 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn563 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn568 */
            Cons_User (head , deleteAt_List_User (tail , (index  -  1 )));
          }) : ({ /* cicili#Let574 */
            // ----------
            ;
            ({ /* cicili#Progn576 */
              ({ /* cicili#Let580 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let582 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn583 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn588 */
                      copy_List_User (taill );
                    }) : ({ /* cicili#Let593 */
                      // ----------
                      ;
                      ({ /* cicili#Progn595 */
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
List_User insertAt_List_User (List_User list , User item , size_t index ) {
  return ({ /* cicili#Let602 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let604 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn605 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn607 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn612 */
            Cons_User (head , insertAt_List_User (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let618 */
            // ----------
            ;
            ({ /* cicili#Progn620 */
              Cons_User (item , copy_List_User (list ));
            });
          }));
      });
    });
}
List_User replace_List_User (List_User list , User item , List_User aimed ) {
  return ({ /* cicili#Let628 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let630 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn631 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn633 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn638 */
            Cons_User (head , replace_List_User (tail , item , aimed ));
          }) : ({ /* cicili#Let644 */
            // ----------
            ;
            ({ /* cicili#Progn646 */
              ({ /* cicili#Let650 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let652 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn653 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn658 */
                      Cons_User (item , copy_List_User (taill ));
                    }) : ({ /* cicili#Let664 */
                      // ----------
                      ;
                      ({ /* cicili#Progn666 */
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
  return ({ /* cicili#Let673 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let675 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn676 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn678 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn683 */
            Cons_User (head , delete_List_User (tail , aimed ));
          }) : ({ /* cicili#Let689 */
            // ----------
            ;
            ({ /* cicili#Progn691 */
              ({ /* cicili#Let695 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let697 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn698 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn703 */
                      copy_List_User (taill );
                    }) : ({ /* cicili#Let708 */
                      // ----------
                      ;
                      ({ /* cicili#Progn710 */
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
  return ({ /* cicili#Let717 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let719 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn720 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn722 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (llist  !=  rlist  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn727 */
            Cons_User (head , insert_List_User (tail , item , rlist ));
          }) : ({ /* cicili#Let733 */
            // ----------
            ;
            ({ /* cicili#Progn735 */
              Cons_User (item , copy_List_User (rlist ));
            });
          }));
      });
    });
}
List_User reverse_List_User (List_User list ) {
  List_User _reverse (List_User list , List_User rlist ) {
    return ({ /* cicili#Let744 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let746 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn747 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn749 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn754 */
              _reverse (tail , Cons_User (head , rlist ));
            }) : ({ /* cicili#Let759 */
              // ----------
              ;
              ({ /* cicili#Progn761 */
                rlist ;
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let765 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let767 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn768 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn770 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn775 */
            _reverse (tail , Cons_User (head , Nil_User ()));
          }) : ({ /* cicili#Let781 */
            // ----------
            ;
            ({ /* cicili#Progn783 */
              list ;
            });
          }));
      });
    });
}
List_User append_List_User (List_User llist , List_User rlist ) {
  return ({ /* cicili#Let789 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let791 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn792 */
                (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn794 */
                (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn799 */
            Cons_User (head , append_List_User (tail , rlist ));
          }) : ({ /* cicili#Let805 */
            // ----------
            ;
            ({ /* cicili#Progn807 */
              copy_List_User (rlist );
            });
          }));
      });
    });
}
List_User push_List_User (User item , List_User list ) {
  return Cons_User (item , copy_List_User (list ));
}
List_User take_List_User (size_t len , List_User list ) {
  return (((len  <=  0 )) ? Nil_User () : ({ /* cicili#Let820 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let822 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn823 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn825 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn830 */
              Cons_User (head , take_List_User ((--len ), tail ));
            }) : ({ /* cicili#Let836 */
              // ----------
              ;
              ({ /* cicili#Progn838 */
                Nil_User ();
              });
            }));
        });
      }));
}
List_User last_List_User (List_User list ) {
  return ({ /* cicili#Let845 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let847 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn848 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn853 */
            ({ /* cicili#Let857 */
              // ----------
              ;
              ({ /* cicili#Let859 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn863 */
                    copy_List_User (list );
                  }) : ({ /* cicili#Let868 */
                    // ----------
                    ;
                    ({ /* cicili#Progn870 */
                      last_List_User (tail );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let875 */
            // ----------
            ;
            ({ /* cicili#Progn877 */
              Nil_User ();
            });
          }));
      });
    });
}
List_User init_List_User (List_User list ) {
  return ({ /* cicili#Let885 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let887 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn888 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn890 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn895 */
            Cons_User (head , init_List_User (tail ));
          }) : ({ /* cicili#Let901 */
            // ----------
            ;
            ({ /* cicili#Progn903 */
              Nil_User ();
            });
          }));
      });
    });
}
size_t hasLen_List_User (List_User list , size_t desired ) {
  return ({ /* cicili#Let910 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let912 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn913 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn918 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_User (tail , (--desired )) ));
          }) : ({ /* cicili#Let924 */
            // ----------
            ;
            ({ /* cicili#Progn926 */
              0;
            });
          }));
      });
    });
}
size_t len_List_User (List_User list ) {
  return ({ /* cicili#Let932 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let934 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn935 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn940 */
            (1 +  len_List_User (tail ) );
          }) : ({ /* cicili#Let945 */
            // ----------
            ;
            ({ /* cicili#Progn947 */
              0;
            });
          }));
      });
    });
}
List_User tail_List_User (List_User list ) {
  return drop_List_User (1, list );
}
List_User drop_List_User (size_t len , List_User list ) {
  return (((len  <=  0 )) ? copy_List_User (list ) : ({ /* cicili#Let958 */
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let960 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn961 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn966 */
              drop_List_User ((--len ), tail );
            }) : ({ /* cicili#Let971 */
              // ----------
              ;
              ({ /* cicili#Progn973 */
                Nil_User ();
              });
            }));
        });
      }));
}
Maybe_User head_List_User (List_User list ) {
  return ({ /* cicili#Let981 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      // ----------
      ;
      ({ /* cicili#Let983 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn984 */
              (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn989 */
            Just_User (head );
          }) : ({ /* cicili#Let994 */
            // ----------
            ;
            ({ /* cicili#Progn996 */
              Nothing_User ();
            });
          }));
      });
    });
}
List_User nthcdr_List_User (size_t index , List_User list ) {
  return ({ /* cicili#Let1003 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let1005 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn1006 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn1011 */
            nthcdr_List_User ((--index ), tail );
          }) : ({ /* cicili#Let1016 */
            // ----------
            ;
            ({ /* cicili#Progn1018 */
              list ;
            });
          }));
      });
    });
}
Maybe_User nth_List_User (size_t index , List_User list ) {
  return ({ /* cicili#Let1025 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let1027 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn1028 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn1030 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn1035 */
            (((index  ==  0 )) ? Just_User (head ) : (((index  <  0 )) ? Nothing_User () : nth_List_User ((--index ), tail )));
          }) : ({ /* cicili#Let1044 */
            // ----------
            ;
            ({ /* cicili#Progn1046 */
              Nothing_User ();
            });
          }));
      });
    });
}
void free_List_User (List_User * this_ptr ) {
  { /* cicili#Let1051 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let1055 */
      typeof((((this -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let1057 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn1058 */
              (tail  =  (((this -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block1064 */
            { /* cicili#Block1066 */
              free (this );
              free_List_User ((&tail ));
            }
          }
        else
          { /* cicili#Let1074 */
            // ----------
            ;
            ({ /* cicili#Let1076 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Nil_t  ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block1081 */
                  { /* cicili#Block1083 */
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
  { /* cicili#Let1094 */
    List_User instance  = malloc (sizeof(class_List_User));
    // ----------
    (*instance ) = ((class_List_User){ get_List_User__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
List_User Nil_User () {
  { /* cicili#Let1100 */
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
  { /* cicili#Let1117 */
    Maybe_List_User instance  = ((Maybe_List_User){ get_Maybe_List_User__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_User Nothing_List_User () {
  { /* cicili#Let1122 */
    Maybe_List_User instance  = ((Maybe_List_User){ get_Maybe_List_User__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_User__H_IMPL__ */ 
typedef struct class_BTree_int_User * BTree_int_User ;
typedef struct cicili4Bc5hF88ECa6f_ZiGwRRAcFigqk_ {
  int __h_0_mem ;
  User __h_1_mem ;
} cicili4Bc5hF88ECa6f_ZiGwRRAcFigqk_;
typedef cicili4Bc5hF88ECa6f_ZiGwRRAcFigqk_ BTree_int_User_pair_t ;
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
  union { /* ciciliUnion1147 */
    struct { /* ciciliStruct1148 */
    } ERR_INVALID_OBJECT , _6 ;
    struct { /* ciciliStruct1149 */
      size_t __h_0_mem ;
    } ERR_INVALID_ORDER , _5 ;
    struct { /* ciciliStruct1150 */
      BTree_int_User_pair_t __h_0_mem ;
    } ERR_UNIQUE_KEY , _4 ;
    struct { /* ciciliStruct1151 */
      int __h_0_mem ;
    } ERR_NOT_FOUND , _3 ;
    struct { /* ciciliStruct1152 */
      BTree_int_User_pair_t __h_0_mem ;
      size_t __h_1_mem ;
    } ERR_ACCESS_DEAD_CHILD , _2 ;
    struct { /* ciciliStruct1153 */
      BTree_int_User __h_0_mem ;
    } ERR_INVALID_BRANCH , _1 ;
    struct { /* ciciliStruct1154 */
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
  union { /* ciciliUnion1201 */
    struct { /* ciciliStruct1202 */
      BTree_int_User __h_0_mem ;
    } Right , _1 ;
    struct { /* ciciliStruct1203 */
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
  union { /* ciciliUnion1229 */
    struct { /* ciciliStruct1230 */
      BTree_int_User __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct1231 */
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
  union { /* ciciliUnion1259 */
    struct { /* ciciliStruct1260 */
      BTree_int_User_pair_t __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct1261 */
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
    List_BTree_int_User_pair_t (*pure) (const BTree_int_User_pair_t * buf , size_t len );
    size_t (*show) (CFile file , List_BTree_int_User_pair_t list );
    List_BTree_int_User_pair_t (*copy) (List_BTree_int_User_pair_t list );
    List_BTree_int_User_pair_t (*replaceAt) (List_BTree_int_User_pair_t list , BTree_int_User_pair_t item , size_t index );
    List_BTree_int_User_pair_t (*deleteAt) (List_BTree_int_User_pair_t list , size_t index );
    List_BTree_int_User_pair_t (*insertAt) (List_BTree_int_User_pair_t llist , BTree_int_User_pair_t item , size_t index );
    List_BTree_int_User_pair_t (*replace) (List_BTree_int_User_pair_t list , BTree_int_User_pair_t item , List_BTree_int_User_pair_t aimed );
    List_BTree_int_User_pair_t (*delete) (List_BTree_int_User_pair_t list , List_BTree_int_User_pair_t aimed );
    List_BTree_int_User_pair_t (*insert) (List_BTree_int_User_pair_t llist , BTree_int_User_pair_t item , List_BTree_int_User_pair_t rlist );
    List_BTree_int_User_pair_t (*reverse) (List_BTree_int_User_pair_t list );
    List_BTree_int_User_pair_t (*append) (List_BTree_int_User_pair_t llist , List_BTree_int_User_pair_t rlist );
    List_BTree_int_User_pair_t (*push) (BTree_int_User_pair_t item , List_BTree_int_User_pair_t list );
    List_BTree_int_User_pair_t (*take) (size_t len , List_BTree_int_User_pair_t list );
    List_BTree_int_User_pair_t (*last) (List_BTree_int_User_pair_t list );
    List_BTree_int_User_pair_t (*init) (List_BTree_int_User_pair_t list );
    size_t (*hasLen) (List_BTree_int_User_pair_t list , size_t desired );
    size_t (*len) (List_BTree_int_User_pair_t list );
    List_BTree_int_User_pair_t (*tail) (List_BTree_int_User_pair_t list );
    List_BTree_int_User_pair_t (*drop) (size_t len , List_BTree_int_User_pair_t list );
    Maybe_BTree_int_User_pair_t (*head) (List_BTree_int_User_pair_t list );
    List_BTree_int_User_pair_t (*nthcdr) (size_t index , List_BTree_int_User_pair_t list );
    Maybe_BTree_int_User_pair_t (*nth) (size_t index , List_BTree_int_User_pair_t list );
} List_BTree_int_User_pair_t__H_Table;
typedef struct class_List_BTree_int_User_pair_t {
  const List_BTree_int_User_pair_t__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion1311 */
    struct { /* ciciliStruct1312 */
      BTree_int_User_pair_t __h_0_mem ;
      List_BTree_int_User_pair_t __h_1_mem ;
    } Cons , _1 ;
    struct { /* ciciliStruct1313 */
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
List_BTree_int_User_pair_t pure_List_BTree_int_User_pair_t (const BTree_int_User_pair_t * buf , size_t len );
size_t show_List_BTree_int_User_pair_t (CFile file , List_BTree_int_User_pair_t list );
List_BTree_int_User_pair_t copy_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list );
List_BTree_int_User_pair_t replaceAt_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , BTree_int_User_pair_t item , size_t index );
List_BTree_int_User_pair_t deleteAt_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , size_t index );
List_BTree_int_User_pair_t insertAt_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t llist , BTree_int_User_pair_t item , size_t index );
List_BTree_int_User_pair_t replace_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , BTree_int_User_pair_t item , List_BTree_int_User_pair_t aimed );
List_BTree_int_User_pair_t delete_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , List_BTree_int_User_pair_t aimed );
List_BTree_int_User_pair_t insert_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t llist , BTree_int_User_pair_t item , List_BTree_int_User_pair_t rlist );
List_BTree_int_User_pair_t reverse_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list );
List_BTree_int_User_pair_t append_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t llist , List_BTree_int_User_pair_t rlist );
List_BTree_int_User_pair_t push_List_BTree_int_User_pair_t (BTree_int_User_pair_t item , List_BTree_int_User_pair_t list );
List_BTree_int_User_pair_t take_List_BTree_int_User_pair_t (size_t len , List_BTree_int_User_pair_t list );
List_BTree_int_User_pair_t last_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list );
List_BTree_int_User_pair_t init_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list );
size_t hasLen_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , size_t desired );
size_t len_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list );
List_BTree_int_User_pair_t tail_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list );
List_BTree_int_User_pair_t drop_List_BTree_int_User_pair_t (size_t len , List_BTree_int_User_pair_t list );
Maybe_BTree_int_User_pair_t head_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list );
List_BTree_int_User_pair_t nthcdr_List_BTree_int_User_pair_t (size_t index , List_BTree_int_User_pair_t list );
Maybe_BTree_int_User_pair_t nth_List_BTree_int_User_pair_t (size_t index , List_BTree_int_User_pair_t list );
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
  union { /* ciciliUnion1413 */
    struct { /* ciciliStruct1414 */
      List_BTree_int_User_pair_t __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct1415 */
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
  union { /* ciciliUnion1445 */
    struct { /* ciciliStruct1446 */
      BTree_int_User __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct1447 */
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
  union { /* ciciliUnion1477 */
    struct { /* ciciliStruct1478 */
      BTree_int_User * __h_0_mem ;
      int * __h_1_mem ;
      size_t __h_2_mem ;
    } Hold , _1 ;
    struct { /* ciciliStruct1479 */
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
  union { /* ciciliUnion1521 */
    struct { /* ciciliStruct1522 */
      Rc_BTree_int_User __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct1523 */
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
    List_Rc_BTree_int_User (*pure) (const Rc_BTree_int_User * buf , size_t len );
    size_t (*show) (CFile file , List_Rc_BTree_int_User list );
    List_Rc_BTree_int_User (*copy) (List_Rc_BTree_int_User list );
    List_Rc_BTree_int_User (*replaceAt) (List_Rc_BTree_int_User list , Rc_BTree_int_User item , size_t index );
    List_Rc_BTree_int_User (*deleteAt) (List_Rc_BTree_int_User list , size_t index );
    List_Rc_BTree_int_User (*insertAt) (List_Rc_BTree_int_User llist , Rc_BTree_int_User item , size_t index );
    List_Rc_BTree_int_User (*replace) (List_Rc_BTree_int_User list , Rc_BTree_int_User item , List_Rc_BTree_int_User aimed );
    List_Rc_BTree_int_User (*delete) (List_Rc_BTree_int_User list , List_Rc_BTree_int_User aimed );
    List_Rc_BTree_int_User (*insert) (List_Rc_BTree_int_User llist , Rc_BTree_int_User item , List_Rc_BTree_int_User rlist );
    List_Rc_BTree_int_User (*reverse) (List_Rc_BTree_int_User list );
    List_Rc_BTree_int_User (*append) (List_Rc_BTree_int_User llist , List_Rc_BTree_int_User rlist );
    List_Rc_BTree_int_User (*push) (Rc_BTree_int_User item , List_Rc_BTree_int_User list );
    List_Rc_BTree_int_User (*take) (size_t len , List_Rc_BTree_int_User list );
    List_Rc_BTree_int_User (*last) (List_Rc_BTree_int_User list );
    List_Rc_BTree_int_User (*init) (List_Rc_BTree_int_User list );
    size_t (*hasLen) (List_Rc_BTree_int_User list , size_t desired );
    size_t (*len) (List_Rc_BTree_int_User list );
    List_Rc_BTree_int_User (*tail) (List_Rc_BTree_int_User list );
    List_Rc_BTree_int_User (*drop) (size_t len , List_Rc_BTree_int_User list );
    Maybe_Rc_BTree_int_User (*head) (List_Rc_BTree_int_User list );
    List_Rc_BTree_int_User (*nthcdr) (size_t index , List_Rc_BTree_int_User list );
    Maybe_Rc_BTree_int_User (*nth) (size_t index , List_Rc_BTree_int_User list );
} List_Rc_BTree_int_User__H_Table;
typedef struct class_List_Rc_BTree_int_User {
  const List_Rc_BTree_int_User__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion1573 */
    struct { /* ciciliStruct1574 */
      Rc_BTree_int_User __h_0_mem ;
      List_Rc_BTree_int_User __h_1_mem ;
    } Cons , _1 ;
    struct { /* ciciliStruct1575 */
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
List_Rc_BTree_int_User pure_List_Rc_BTree_int_User (const Rc_BTree_int_User * buf , size_t len );
size_t show_List_Rc_BTree_int_User (CFile file , List_Rc_BTree_int_User list );
List_Rc_BTree_int_User copy_List_Rc_BTree_int_User (List_Rc_BTree_int_User list );
List_Rc_BTree_int_User replaceAt_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , Rc_BTree_int_User item , size_t index );
List_Rc_BTree_int_User deleteAt_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , size_t index );
List_Rc_BTree_int_User insertAt_List_Rc_BTree_int_User (List_Rc_BTree_int_User llist , Rc_BTree_int_User item , size_t index );
List_Rc_BTree_int_User replace_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , Rc_BTree_int_User item , List_Rc_BTree_int_User aimed );
List_Rc_BTree_int_User delete_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , List_Rc_BTree_int_User aimed );
List_Rc_BTree_int_User insert_List_Rc_BTree_int_User (List_Rc_BTree_int_User llist , Rc_BTree_int_User item , List_Rc_BTree_int_User rlist );
List_Rc_BTree_int_User reverse_List_Rc_BTree_int_User (List_Rc_BTree_int_User list );
List_Rc_BTree_int_User append_List_Rc_BTree_int_User (List_Rc_BTree_int_User llist , List_Rc_BTree_int_User rlist );
List_Rc_BTree_int_User push_List_Rc_BTree_int_User (Rc_BTree_int_User item , List_Rc_BTree_int_User list );
List_Rc_BTree_int_User take_List_Rc_BTree_int_User (size_t len , List_Rc_BTree_int_User list );
List_Rc_BTree_int_User last_List_Rc_BTree_int_User (List_Rc_BTree_int_User list );
List_Rc_BTree_int_User init_List_Rc_BTree_int_User (List_Rc_BTree_int_User list );
size_t hasLen_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , size_t desired );
size_t len_List_Rc_BTree_int_User (List_Rc_BTree_int_User list );
List_Rc_BTree_int_User tail_List_Rc_BTree_int_User (List_Rc_BTree_int_User list );
List_Rc_BTree_int_User drop_List_Rc_BTree_int_User (size_t len , List_Rc_BTree_int_User list );
Maybe_Rc_BTree_int_User head_List_Rc_BTree_int_User (List_Rc_BTree_int_User list );
List_Rc_BTree_int_User nthcdr_List_Rc_BTree_int_User (size_t index , List_Rc_BTree_int_User list );
Maybe_Rc_BTree_int_User nth_List_Rc_BTree_int_User (size_t index , List_Rc_BTree_int_User list );
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
  union { /* ciciliUnion1675 */
    struct { /* ciciliStruct1676 */
      List_Rc_BTree_int_User __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct1677 */
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
  union { /* ciciliUnion1712 */
    struct { /* ciciliStruct1713 */
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
  union { /* ciciliUnion1772 */
    struct { /* ciciliStruct1773 */
      List_BTree_int_User_pair_t __h_0_mem ;
      List_Rc_BTree_int_User __h_1_mem ;
    } Branch , _2 ;
    struct { /* ciciliStruct1774 */
      List_BTree_int_User_pair_t __h_0_mem ;
      List_Rc_BTree_int_User __h_1_mem ;
    } Internal , _1 ;
    struct { /* ciciliStruct1775 */
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
  { /* cicili#Let1852 */
    // ----------
    ;
    ({ /* cicili#Let1854 */
      bool __h_case_result  = (true  &&  ((error . __h_ctor ) ==  __h_ERR_INVALID_OBJECT_t  ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block1859 */
          printf ("invalid B-Tree object");
        }
      else
        { /* cicili#Let1864 */
          typeof((((error . __h_data ). ERR_INVALID_ORDER ). __h_0_mem )) order ;
          // ----------
          ;
          ({ /* cicili#Let1866 */
            bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_INVALID_ORDER_t  ) &&  ({ /* cicili#Progn1867 */
                  (order  =  (((error . __h_data ). ERR_INVALID_ORDER ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block1873 */
                printf ("invalid B-Tree order: %zu", order );
              }
            else
              { /* cicili#Let1878 */
                typeof((((error . __h_data ). ERR_UNIQUE_KEY ). __h_0_mem )) item ;
                // ----------
                ;
                ({ /* cicili#Let1880 */
                  bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_UNIQUE_KEY_t  ) &&  ({ /* cicili#Progn1881 */
                        (item  =  (((error . __h_data ). ERR_UNIQUE_KEY ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block1887 */
                      { /* cicili#Block1889 */
                        printf ("unique key: ");
                        ({ /* cicili#Let1896 */
                          typeof((item . __h_0_mem )) id ;
                          typeof((item . __h_1_mem )) __h_match1894_1_arg ;
                          typeof((__h_match1894_1_arg . __h_0_mem )) wname ;
                          typeof((__h_match1894_1_arg . __h_1_mem )) salary ;
                          // ----------
                          ;
                          ({ /* cicili#Let1898 */
                            bool __h_case_result  = (true  &&  ((({ /* cicili#Progn1899 */
                                    (id  =  (item . __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn1901 */
                                    (__h_match1894_1_arg  =  (item . __h_1_mem ) );
                                    true ;
                                  }) ) &&  (true  &&  (({ /* cicili#Progn1903 */
                                      (wname  =  (__h_match1894_1_arg . __h_0_mem ) );
                                      true ;
                                    }) &&  ({ /* cicili#Progn1905 */
                                      (salary  =  (__h_match1894_1_arg . __h_1_mem ) );
                                      true ;
                                    }) ) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn1910 */
                                ({ /* cicili#Let1914 */
                                  __auto_type match1913  = get_Cell_String (wname );
                                  typeof((((match1913 . __h_data ). Just ). __h_0_mem )) name ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let1917 */
                                    bool __h_case_result  = (true  &&  (((match1913 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1918 */
                                          (name  =  (((match1913 . __h_data ). Just ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn1923 */
                                        (fprintf (stdout , "(%d, '", id ) +  show_String (stdout , name ) +  fprintf (stdout , "', %d)", salary ) );
                                      }) : ({ /* cicili#Let1927 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn1929 */
                                          fprintf (stdout , "%d, but item is deleted in another version!", id );
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let1933 */
                                // ----------
                                ;
                                ({ /* cicili#Progn1935 */
                                  0;
                                });
                              }));
                          });
                        });
                      }
                    }
                  else
                    { /* cicili#Let1940 */
                      typeof((((error . __h_data ). ERR_NOT_FOUND ). __h_0_mem )) key ;
                      // ----------
                      ;
                      ({ /* cicili#Let1942 */
                        bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_NOT_FOUND_t  ) &&  ({ /* cicili#Progn1943 */
                              (key  =  (((error . __h_data ). ERR_NOT_FOUND ). __h_0_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        
                        if (__h_case_result )
                          { /* cicili#Block1949 */
                            { /* cicili#Block1951 */
                              printf ("key not found: ");
                              fprintf (stdout , "%d", key );
                            }
                          }
                        else
                          { /* cicili#Let1959 */
                            typeof((((error . __h_data ). ERR_ACCESS_DEAD_CHILD ). __h_0_mem )) item ;
                            typeof((((error . __h_data ). ERR_ACCESS_DEAD_CHILD ). __h_1_mem )) index ;
                            // ----------
                            ;
                            ({ /* cicili#Let1961 */
                              bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_ACCESS_DEAD_CHILD_t  ) &&  (({ /* cicili#Progn1962 */
                                      (item  =  (((error . __h_data ). ERR_ACCESS_DEAD_CHILD ). __h_0_mem ) );
                                      true ;
                                    }) &&  ({ /* cicili#Progn1964 */
                                      (index  =  (((error . __h_data ). ERR_ACCESS_DEAD_CHILD ). __h_1_mem ) );
                                      true ;
                                    }) ) ) );
                              // ----------
                              
                              if (__h_case_result )
                                { /* cicili#Block1970 */
                                  { /* cicili#Block1972 */
                                    printf ("dead child at index: %zu of item: ", index );
                                    ({ /* cicili#Let1979 */
                                      typeof((item . __h_0_mem )) id ;
                                      typeof((item . __h_1_mem )) __h_match1977_1_arg ;
                                      typeof((__h_match1977_1_arg . __h_0_mem )) wname ;
                                      typeof((__h_match1977_1_arg . __h_1_mem )) salary ;
                                      // ----------
                                      ;
                                      ({ /* cicili#Let1981 */
                                        bool __h_case_result  = (true  &&  ((({ /* cicili#Progn1982 */
                                                (id  =  (item . __h_0_mem ) );
                                                true ;
                                              }) &&  ({ /* cicili#Progn1984 */
                                                (__h_match1977_1_arg  =  (item . __h_1_mem ) );
                                                true ;
                                              }) ) &&  (true  &&  (({ /* cicili#Progn1986 */
                                                  (wname  =  (__h_match1977_1_arg . __h_0_mem ) );
                                                  true ;
                                                }) &&  ({ /* cicili#Progn1988 */
                                                  (salary  =  (__h_match1977_1_arg . __h_1_mem ) );
                                                  true ;
                                                }) ) ) ) );
                                        // ----------
                                        
                                        ((__h_case_result ) ? ({ /* cicili#Progn1993 */
                                            ({ /* cicili#Let1997 */
                                              __auto_type match1996  = get_Cell_String (wname );
                                              typeof((((match1996 . __h_data ). Just ). __h_0_mem )) name ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let2000 */
                                                bool __h_case_result  = (true  &&  (((match1996 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2001 */
                                                      (name  =  (((match1996 . __h_data ). Just ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn2006 */
                                                    (fprintf (stdout , "(%d, '", id ) +  show_String (stdout , name ) +  fprintf (stdout , "', %d)", salary ) );
                                                  }) : ({ /* cicili#Let2010 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn2012 */
                                                      fprintf (stdout , "%d, but item is deleted in another version!", id );
                                                    });
                                                  }));
                                              });
                                            });
                                          }) : ({ /* cicili#Let2016 */
                                            // ----------
                                            ;
                                            ({ /* cicili#Progn2018 */
                                              0;
                                            });
                                          }));
                                      });
                                    });
                                  }
                                }
                              else
                                { /* cicili#Let2023 */
                                  typeof((((error . __h_data ). ERR_INVALID_BRANCH ). __h_0_mem )) branch ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let2025 */
                                    bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_INVALID_BRANCH_t  ) &&  ({ /* cicili#Progn2026 */
                                          (branch  =  (((error . __h_data ). ERR_INVALID_BRANCH ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    if (__h_case_result )
                                      { /* cicili#Block2032 */
                                        { /* cicili#Block2034 */
                                          printf ("invalid branch: ");
                                          (branch -> __h_table -> show )(stdout , branch );
                                        }
                                      }
                                    else
                                      { /* cicili#Let2041 */
                                        typeof((((error . __h_data ). ERR_CANT_BORROW ). __h_0_mem )) reason ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let2043 */
                                          bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_CANT_BORROW_t  ) &&  ({ /* cicili#Progn2044 */
                                                (reason  =  (((error . __h_data ). ERR_CANT_BORROW ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          if (__h_case_result )
                                            { /* cicili#Block2050 */
                                              printf ("borrow error: %s", reason );
                                            }
                                          else
                                            { /* cicili#Let2055 */
                                              // ----------
                                              ;
                                              { /* cicili#Block2057 */
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
  { /* cicili#Let2069 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_INVALID_OBJECT_t });
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_INVALID_ORDER (size_t order ) {
  { /* cicili#Let2074 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_INVALID_ORDER_t , .__h_data.ERR_INVALID_ORDER = { order }});
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_UNIQUE_KEY (BTree_int_User_pair_t item ) {
  { /* cicili#Let2079 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_UNIQUE_KEY_t , .__h_data.ERR_UNIQUE_KEY = { item }});
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_NOT_FOUND (int key ) {
  { /* cicili#Let2085 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_NOT_FOUND_t , .__h_data.ERR_NOT_FOUND = { key }});
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_ACCESS_DEAD_CHILD (BTree_int_User_pair_t item , size_t index ) {
  { /* cicili#Let2090 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_ACCESS_DEAD_CHILD_t , .__h_data.ERR_ACCESS_DEAD_CHILD = { item , index }});
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_INVALID_BRANCH (BTree_int_User branch ) {
  { /* cicili#Let2096 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_INVALID_BRANCH_t , .__h_data.ERR_INVALID_BRANCH = { branch }});
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_CANT_BORROW (char * reason ) {
  { /* cicili#Let2101 */
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
  { /* cicili#Let2117 */
    Either_BTree_int_User_Error_BTree_int_User instance  = ((Either_BTree_int_User_Error_BTree_int_User){ get_Either_BTree_int_User_Error_BTree_int_User__H_Table (), __h_Right_t , .__h_data.Right = { value }});
    // ----------
    return instance ;
  }
}
Either_BTree_int_User_Error_BTree_int_User Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_Error error ) {
  { /* cicili#Let2122 */
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
  { /* cicili#Let2138 */
    Maybe_BTree_int_User instance  = ((Maybe_BTree_int_User){ get_Maybe_BTree_int_User__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_BTree_int_User Nothing_BTree_int_User () {
  { /* cicili#Let2143 */
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
  { /* cicili#Let2161 */
    Maybe_BTree_int_User_pair_t instance  = ((Maybe_BTree_int_User_pair_t){ get_Maybe_BTree_int_User_pair_t__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_BTree_int_User_pair_t Nothing_BTree_int_User_pair_t () {
  { /* cicili#Let2166 */
    Maybe_BTree_int_User_pair_t instance  = ((Maybe_BTree_int_User_pair_t){ get_Maybe_BTree_int_User_pair_t__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_BTree_int_User_pair_t__H_IMPL__ */ 
#ifndef __List_BTree_int_User_pair_t__H_IMPL__
#define __List_BTree_int_User_pair_t__H_IMPL__
BTree_int_User_pair_t * toArray_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , BTree_int_User_pair_t term ) {
  BTree_int_User_pair_t * array (List_BTree_int_User_pair_t list , size_t count ) {
    return ({ /* cicili#Let2176 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let2178 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn2179 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2181 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2186 */
              ({ /* cicili#Let2188 */
                BTree_int_User_pair_t * arr  = array (tail , (count  +  1 ));
                // ----------
                arr [count ] = head ;
                arr ;
              });
            }) : ({ /* cicili#Let2192 */
              // ----------
              ;
              ({ /* cicili#Progn2194 */
                ({ /* cicili#Let2196 */
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
List_BTree_int_User_pair_t pure_List_BTree_int_User_pair_t (const BTree_int_User_pair_t * buf , size_t len ) {
  return (((buf  ==  NULL  )) ? Nil_BTree_int_User_pair_t () : ({ /* cicili#Let2207 */
        BTree_int_User_pair_t item  = (*buf );
        // ----------
        (((len  ==  0 )) ? Nil_BTree_int_User_pair_t () : Cons_BTree_int_User_pair_t (item , pure_List_BTree_int_User_pair_t ((++buf ), (--len ))));
      }));
}
size_t show_List_BTree_int_User_pair_t (CFile file , List_BTree_int_User_pair_t list ) {
  return ({ /* cicili#Let2217 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let2219 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn2220 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn2222 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn2227 */
            (({ /* cicili#Let2231 */
                // ----------
                ;
                ({ /* cicili#Let2233 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2237 */
                      (({ /* cicili#Let2244 */
                          typeof((head . __h_0_mem )) id ;
                          typeof((head . __h_1_mem )) __h_match2242_1_arg ;
                          typeof((__h_match2242_1_arg . __h_0_mem )) wname ;
                          typeof((__h_match2242_1_arg . __h_1_mem )) salary ;
                          // ----------
                          ;
                          ({ /* cicili#Let2246 */
                            bool __h_case_result  = (true  &&  ((({ /* cicili#Progn2247 */
                                    (id  =  (head . __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn2249 */
                                    (__h_match2242_1_arg  =  (head . __h_1_mem ) );
                                    true ;
                                  }) ) &&  (true  &&  (({ /* cicili#Progn2251 */
                                      (wname  =  (__h_match2242_1_arg . __h_0_mem ) );
                                      true ;
                                    }) &&  ({ /* cicili#Progn2253 */
                                      (salary  =  (__h_match2242_1_arg . __h_1_mem ) );
                                      true ;
                                    }) ) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn2258 */
                                ({ /* cicili#Let2262 */
                                  __auto_type match2261  = get_Cell_String (wname );
                                  typeof((((match2261 . __h_data ). Just ). __h_0_mem )) name ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let2265 */
                                    bool __h_case_result  = (true  &&  (((match2261 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2266 */
                                          (name  =  (((match2261 . __h_data ). Just ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn2271 */
                                        (fprintf (file , "(%d, '", id ) +  show_String (file , name ) +  fprintf (file , "', %d)", salary ) );
                                      }) : ({ /* cicili#Let2275 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn2277 */
                                          fprintf (file , "%d, but item is deleted in another version!", id );
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let2281 */
                                // ----------
                                ;
                                ({ /* cicili#Progn2283 */
                                  0;
                                });
                              }));
                          });
                        }) +  fprintf (file , "%s", " ") );
                    }) : ({ /* cicili#Let2287 */
                      // ----------
                      ;
                      ({ /* cicili#Progn2289 */
                        ({ /* cicili#Let2296 */
                          typeof((head . __h_0_mem )) id ;
                          typeof((head . __h_1_mem )) __h_match2294_1_arg ;
                          typeof((__h_match2294_1_arg . __h_0_mem )) wname ;
                          typeof((__h_match2294_1_arg . __h_1_mem )) salary ;
                          // ----------
                          ;
                          ({ /* cicili#Let2298 */
                            bool __h_case_result  = (true  &&  ((({ /* cicili#Progn2299 */
                                    (id  =  (head . __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn2301 */
                                    (__h_match2294_1_arg  =  (head . __h_1_mem ) );
                                    true ;
                                  }) ) &&  (true  &&  (({ /* cicili#Progn2303 */
                                      (wname  =  (__h_match2294_1_arg . __h_0_mem ) );
                                      true ;
                                    }) &&  ({ /* cicili#Progn2305 */
                                      (salary  =  (__h_match2294_1_arg . __h_1_mem ) );
                                      true ;
                                    }) ) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn2310 */
                                ({ /* cicili#Let2314 */
                                  __auto_type match2313  = get_Cell_String (wname );
                                  typeof((((match2313 . __h_data ). Just ). __h_0_mem )) name ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let2317 */
                                    bool __h_case_result  = (true  &&  (((match2313 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2318 */
                                          (name  =  (((match2313 . __h_data ). Just ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn2323 */
                                        (fprintf (file , "(%d, '", id ) +  show_String (file , name ) +  fprintf (file , "', %d)", salary ) );
                                      }) : ({ /* cicili#Let2327 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn2329 */
                                          fprintf (file , "%d, but item is deleted in another version!", id );
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let2333 */
                                // ----------
                                ;
                                ({ /* cicili#Progn2335 */
                                  0;
                                });
                              }));
                          });
                        });
                      });
                    }));
                });
              }) +  show_List_BTree_int_User_pair_t (file , tail ) );
          }) : ({ /* cicili#Let2340 */
            // ----------
            ;
            ({ /* cicili#Progn2342 */
              0;
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t copy_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
  return ({ /* cicili#Let2348 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let2350 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn2351 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn2353 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn2358 */
            Cons_BTree_int_User_pair_t (head , copy_List_BTree_int_User_pair_t (tail ));
          }) : ({ /* cicili#Let2364 */
            // ----------
            ;
            ({ /* cicili#Progn2366 */
              Nil_BTree_int_User_pair_t ();
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t replaceAt_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , BTree_int_User_pair_t item , size_t index ) {
  return ({ /* cicili#Let2373 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let2375 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn2376 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2378 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn2383 */
            Cons_BTree_int_User_pair_t (head , replaceAt_List_BTree_int_User_pair_t (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let2389 */
            // ----------
            ;
            ({ /* cicili#Progn2391 */
              ({ /* cicili#Let2395 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let2397 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn2398 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2403 */
                      Cons_BTree_int_User_pair_t (item , copy_List_BTree_int_User_pair_t (taill ));
                    }) : ({ /* cicili#Let2409 */
                      // ----------
                      ;
                      ({ /* cicili#Progn2411 */
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
List_BTree_int_User_pair_t deleteAt_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , size_t index ) {
  return ({ /* cicili#Let2418 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let2420 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn2421 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2423 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn2428 */
            Cons_BTree_int_User_pair_t (head , deleteAt_List_BTree_int_User_pair_t (tail , (index  -  1 )));
          }) : ({ /* cicili#Let2434 */
            // ----------
            ;
            ({ /* cicili#Progn2436 */
              ({ /* cicili#Let2440 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let2442 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn2443 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2448 */
                      copy_List_BTree_int_User_pair_t (taill );
                    }) : ({ /* cicili#Let2453 */
                      // ----------
                      ;
                      ({ /* cicili#Progn2455 */
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
List_BTree_int_User_pair_t insertAt_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , BTree_int_User_pair_t item , size_t index ) {
  return ({ /* cicili#Let2462 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let2464 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn2465 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2467 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn2472 */
            Cons_BTree_int_User_pair_t (head , insertAt_List_BTree_int_User_pair_t (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let2478 */
            // ----------
            ;
            ({ /* cicili#Progn2480 */
              Cons_BTree_int_User_pair_t (item , copy_List_BTree_int_User_pair_t (list ));
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t replace_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , BTree_int_User_pair_t item , List_BTree_int_User_pair_t aimed ) {
  return ({ /* cicili#Let2488 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let2490 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn2491 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2493 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn2498 */
            Cons_BTree_int_User_pair_t (head , replace_List_BTree_int_User_pair_t (tail , item , aimed ));
          }) : ({ /* cicili#Let2504 */
            // ----------
            ;
            ({ /* cicili#Progn2506 */
              ({ /* cicili#Let2510 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let2512 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn2513 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2518 */
                      Cons_BTree_int_User_pair_t (item , copy_List_BTree_int_User_pair_t (taill ));
                    }) : ({ /* cicili#Let2524 */
                      // ----------
                      ;
                      ({ /* cicili#Progn2526 */
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
  return ({ /* cicili#Let2533 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let2535 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn2536 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2538 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn2543 */
            Cons_BTree_int_User_pair_t (head , delete_List_BTree_int_User_pair_t (tail , aimed ));
          }) : ({ /* cicili#Let2549 */
            // ----------
            ;
            ({ /* cicili#Progn2551 */
              ({ /* cicili#Let2555 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let2557 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn2558 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2563 */
                      copy_List_BTree_int_User_pair_t (taill );
                    }) : ({ /* cicili#Let2568 */
                      // ----------
                      ;
                      ({ /* cicili#Progn2570 */
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
  return ({ /* cicili#Let2577 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let2579 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn2580 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2582 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (llist  !=  rlist  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn2587 */
            Cons_BTree_int_User_pair_t (head , insert_List_BTree_int_User_pair_t (tail , item , rlist ));
          }) : ({ /* cicili#Let2593 */
            // ----------
            ;
            ({ /* cicili#Progn2595 */
              Cons_BTree_int_User_pair_t (item , copy_List_BTree_int_User_pair_t (rlist ));
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t reverse_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
  List_BTree_int_User_pair_t _reverse (List_BTree_int_User_pair_t list , List_BTree_int_User_pair_t rlist ) {
    return ({ /* cicili#Let2604 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let2606 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn2607 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2609 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2614 */
              _reverse (tail , Cons_BTree_int_User_pair_t (head , rlist ));
            }) : ({ /* cicili#Let2619 */
              // ----------
              ;
              ({ /* cicili#Progn2621 */
                rlist ;
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let2625 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let2627 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn2628 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn2630 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn2635 */
            _reverse (tail , Cons_BTree_int_User_pair_t (head , Nil_BTree_int_User_pair_t ()));
          }) : ({ /* cicili#Let2641 */
            // ----------
            ;
            ({ /* cicili#Progn2643 */
              list ;
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t append_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t llist , List_BTree_int_User_pair_t rlist ) {
  return ({ /* cicili#Let2649 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let2651 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn2652 */
                (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn2654 */
                (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn2659 */
            Cons_BTree_int_User_pair_t (head , append_List_BTree_int_User_pair_t (tail , rlist ));
          }) : ({ /* cicili#Let2665 */
            // ----------
            ;
            ({ /* cicili#Progn2667 */
              copy_List_BTree_int_User_pair_t (rlist );
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t push_List_BTree_int_User_pair_t (BTree_int_User_pair_t item , List_BTree_int_User_pair_t list ) {
  return Cons_BTree_int_User_pair_t (item , copy_List_BTree_int_User_pair_t (list ));
}
List_BTree_int_User_pair_t take_List_BTree_int_User_pair_t (size_t len , List_BTree_int_User_pair_t list ) {
  return (((len  <=  0 )) ? Nil_BTree_int_User_pair_t () : ({ /* cicili#Let2680 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let2682 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn2683 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2685 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2690 */
              Cons_BTree_int_User_pair_t (head , take_List_BTree_int_User_pair_t ((--len ), tail ));
            }) : ({ /* cicili#Let2696 */
              // ----------
              ;
              ({ /* cicili#Progn2698 */
                Nil_BTree_int_User_pair_t ();
              });
            }));
        });
      }));
}
List_BTree_int_User_pair_t last_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
  return ({ /* cicili#Let2705 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let2707 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn2708 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn2713 */
            ({ /* cicili#Let2717 */
              // ----------
              ;
              ({ /* cicili#Let2719 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn2723 */
                    copy_List_BTree_int_User_pair_t (list );
                  }) : ({ /* cicili#Let2728 */
                    // ----------
                    ;
                    ({ /* cicili#Progn2730 */
                      last_List_BTree_int_User_pair_t (tail );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let2735 */
            // ----------
            ;
            ({ /* cicili#Progn2737 */
              Nil_BTree_int_User_pair_t ();
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t init_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
  return ({ /* cicili#Let2745 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let2747 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn2748 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2750 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn2755 */
            Cons_BTree_int_User_pair_t (head , init_List_BTree_int_User_pair_t (tail ));
          }) : ({ /* cicili#Let2761 */
            // ----------
            ;
            ({ /* cicili#Progn2763 */
              Nil_BTree_int_User_pair_t ();
            });
          }));
      });
    });
}
size_t hasLen_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , size_t desired ) {
  return ({ /* cicili#Let2770 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let2772 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn2773 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn2778 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_BTree_int_User_pair_t (tail , (--desired )) ));
          }) : ({ /* cicili#Let2784 */
            // ----------
            ;
            ({ /* cicili#Progn2786 */
              0;
            });
          }));
      });
    });
}
size_t len_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
  return ({ /* cicili#Let2792 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let2794 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn2795 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn2800 */
            (1 +  len_List_BTree_int_User_pair_t (tail ) );
          }) : ({ /* cicili#Let2805 */
            // ----------
            ;
            ({ /* cicili#Progn2807 */
              0;
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t tail_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
  return drop_List_BTree_int_User_pair_t (1, list );
}
List_BTree_int_User_pair_t drop_List_BTree_int_User_pair_t (size_t len , List_BTree_int_User_pair_t list ) {
  return (((len  <=  0 )) ? copy_List_BTree_int_User_pair_t (list ) : ({ /* cicili#Let2818 */
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let2820 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn2821 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2826 */
              drop_List_BTree_int_User_pair_t ((--len ), tail );
            }) : ({ /* cicili#Let2831 */
              // ----------
              ;
              ({ /* cicili#Progn2833 */
                Nil_BTree_int_User_pair_t ();
              });
            }));
        });
      }));
}
Maybe_BTree_int_User_pair_t head_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
  return ({ /* cicili#Let2841 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      // ----------
      ;
      ({ /* cicili#Let2843 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn2844 */
              (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn2849 */
            Just_BTree_int_User_pair_t (head );
          }) : ({ /* cicili#Let2854 */
            // ----------
            ;
            ({ /* cicili#Progn2856 */
              Nothing_BTree_int_User_pair_t ();
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t nthcdr_List_BTree_int_User_pair_t (size_t index , List_BTree_int_User_pair_t list ) {
  return ({ /* cicili#Let2863 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let2865 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn2866 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn2871 */
            nthcdr_List_BTree_int_User_pair_t ((--index ), tail );
          }) : ({ /* cicili#Let2876 */
            // ----------
            ;
            ({ /* cicili#Progn2878 */
              list ;
            });
          }));
      });
    });
}
Maybe_BTree_int_User_pair_t nth_List_BTree_int_User_pair_t (size_t index , List_BTree_int_User_pair_t list ) {
  return ({ /* cicili#Let2885 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let2887 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn2888 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn2890 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn2895 */
            (((index  ==  0 )) ? Just_BTree_int_User_pair_t (head ) : (((index  <  0 )) ? Nothing_BTree_int_User_pair_t () : nth_List_BTree_int_User_pair_t ((--index ), tail )));
          }) : ({ /* cicili#Let2904 */
            // ----------
            ;
            ({ /* cicili#Progn2906 */
              Nothing_BTree_int_User_pair_t ();
            });
          }));
      });
    });
}
void free_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t * this_ptr ) {
  { /* cicili#Let2911 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let2915 */
      typeof((((this -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let2917 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn2918 */
              (tail  =  (((this -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block2924 */
            { /* cicili#Block2926 */
              free (this );
              free_List_BTree_int_User_pair_t ((&tail ));
            }
          }
        else
          { /* cicili#Let2934 */
            // ----------
            ;
            ({ /* cicili#Let2936 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Nil_t  ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block2941 */
                  { /* cicili#Block2943 */
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
  { /* cicili#Let2954 */
    List_BTree_int_User_pair_t instance  = malloc (sizeof(class_List_BTree_int_User_pair_t));
    // ----------
    (*instance ) = ((class_List_BTree_int_User_pair_t){ get_List_BTree_int_User_pair_t__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
List_BTree_int_User_pair_t Nil_BTree_int_User_pair_t () {
  { /* cicili#Let2960 */
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
  { /* cicili#Let2977 */
    Maybe_List_BTree_int_User_pair_t instance  = ((Maybe_List_BTree_int_User_pair_t){ get_Maybe_List_BTree_int_User_pair_t__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_BTree_int_User_pair_t Nothing_List_BTree_int_User_pair_t () {
  { /* cicili#Let2982 */
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
  { /* cicili#Let3002 */
    Maybe_BTree_int_User instance  = ((Maybe_BTree_int_User){ get_Maybe_BTree_int_User__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_BTree_int_User Nothing_BTree_int_User () {
  { /* cicili#Let3007 */
    Maybe_BTree_int_User instance  = ((Maybe_BTree_int_User){ get_Maybe_BTree_int_User__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_BTree_int_User__H_IMPL__ */ 
#ifndef __Rc_BTree_int_User__H_IMPL__
#define __Rc_BTree_int_User__H_IMPL__
Rc_BTree_int_User new_Rc_BTree_int_User (BTree_int_User pointer ) {
  return ({ /* cicili#Let3014 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      __auto_type holder  = ((BTree_int_User *)malloc (sizeof(BTree_int_User *)));
      // ----------
      (*count ) = 1;
      (*holder ) = pointer ;
      __h_Hold_BTree_int_User (holder , count , ((size_t)pointer ));
    });
}
Rc_BTree_int_User clone_Rc_BTree_int_User (Rc_BTree_int_User rc ) {
  return ({ /* cicili#Let3023 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let3025 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn3026 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3028 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn3030 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3035 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Progn3038 */
                (++(*count ));
                __h_Hold_BTree_int_User (pointer , count , address );
              }) : Gone_BTree_int_User ());
          }) : ({ /* cicili#Let3044 */
            // ----------
            ;
            ({ /* cicili#Progn3046 */
              Gone_BTree_int_User ();
            });
          }));
      });
    });
}
Maybe_BTree_int_User take_Rc_BTree_int_User (Rc_BTree_int_User * this ) {
  return ({ /* cicili#Let3054 */
      typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let3056 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn3057 */
                  (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3059 */
                  (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn3061 */
                (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3066 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Let3070 */
                __auto_type result  = Just_BTree_int_User ((*pointer ));
                // ----------
                if ((*count ) >=  1 )
                  { /* cicili#Block3076 */
                    (*count ) = 0;
                    (*pointer ) = NULL ;
                  }
                result ;
              }) : Nothing_BTree_int_User ());
          }) : ({ /* cicili#Let3081 */
            // ----------
            ;
            ({ /* cicili#Progn3083 */
              Nothing_BTree_int_User ();
            });
          }));
      });
    });
}
Maybe_BTree_int_User get_Rc_BTree_int_User (Rc_BTree_int_User rc ) {
  return ({ /* cicili#Let3091 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let3093 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn3094 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3096 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn3098 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3103 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) >  0 ) )) ? Just_BTree_int_User ((*pointer )) : Nothing_BTree_int_User ());
          }) : ({ /* cicili#Let3110 */
            // ----------
            ;
            ({ /* cicili#Progn3112 */
              Nothing_BTree_int_User ();
            });
          }));
      });
    });
}
void free_Rc_BTree_int_User (Rc_BTree_int_User * this ) {
  { /* cicili#Let3121 */
    typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
    typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
    // ----------
    ;
    ({ /* cicili#Let3123 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn3124 */
                (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn3126 */
                (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                true ;
              }) ) &&  ({ /* cicili#Progn3128 */
              (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block3134 */
          if (((*count ) ==  0 ) &&  ((*pointer ) ==  NULL  ) )
            { /* cicili#Block3137 */
              free (((void *)count ));
              free (((void *)pointer ));
              (*this ) = Gone_BTree_int_User ();
            }
          else
            {
            if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
              { /* cicili#Block3145 */
                if ((*count ) ==  1 )
                  { /* cicili#Block3148 */
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
        { /* cicili#Let3158 */
          // ----------
          ;
          ({ /* cicili#Let3160 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Gone_t  ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block3165 */
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
  { /* cicili#Let3176 */
    Rc_BTree_int_User instance  = ((Rc_BTree_int_User){ get_Rc_BTree_int_User__H_Table (), __h_Hold_t , .__h_data.Hold = { pointer , count , address }});
    // ----------
    return instance ;
  }
}
Rc_BTree_int_User Gone_BTree_int_User () {
  { /* cicili#Let3181 */
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
  { /* cicili#Let3199 */
    Maybe_Rc_BTree_int_User instance  = ((Maybe_Rc_BTree_int_User){ get_Maybe_Rc_BTree_int_User__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_Rc_BTree_int_User Nothing_Rc_BTree_int_User () {
  { /* cicili#Let3204 */
    Maybe_Rc_BTree_int_User instance  = ((Maybe_Rc_BTree_int_User){ get_Maybe_Rc_BTree_int_User__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_Rc_BTree_int_User__H_IMPL__ */ 
#ifndef __List_Rc_BTree_int_User__H_IMPL__
#define __List_Rc_BTree_int_User__H_IMPL__
Rc_BTree_int_User * toArray_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , Rc_BTree_int_User term ) {
  Rc_BTree_int_User * array (List_Rc_BTree_int_User list , size_t count ) {
    return ({ /* cicili#Let3214 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let3216 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3217 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3219 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3224 */
              ({ /* cicili#Let3226 */
                Rc_BTree_int_User * arr  = array (tail , (count  +  1 ));
                // ----------
                arr [count ] = head ;
                arr ;
              });
            }) : ({ /* cicili#Let3230 */
              // ----------
              ;
              ({ /* cicili#Progn3232 */
                ({ /* cicili#Let3234 */
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
List_Rc_BTree_int_User pure_List_Rc_BTree_int_User (const Rc_BTree_int_User * buf , size_t len ) {
  return (((buf  ==  NULL  )) ? Nil_Rc_BTree_int_User () : ({ /* cicili#Let3245 */
        Rc_BTree_int_User item  = (*buf );
        // ----------
        (((len  ==  0 )) ? Nil_Rc_BTree_int_User () : Cons_Rc_BTree_int_User (item , pure_List_Rc_BTree_int_User ((++buf ), (--len ))));
      }));
}
size_t show_List_Rc_BTree_int_User (CFile file , List_Rc_BTree_int_User list ) {
  return ({ /* cicili#Let3255 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let3257 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3258 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn3260 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3265 */
            (({ /* cicili#Let3269 */
                // ----------
                ;
                ({ /* cicili#Let3271 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3275 */
                      (({ /* cicili#Let3283 */
                          __auto_type match3282  = get_Rc_BTree_int_User (head );
                          typeof((((match3282 . __h_data ). Just ). __h_0_mem )) child ;
                          // ----------
                          ;
                          ({ /* cicili#Let3286 */
                            bool __h_case_result  = (true  &&  (((match3282 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3287 */
                                  (child  =  (((match3282 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn3292 */
                                show_BTree_int_User (file , child );
                              }) : ({ /* cicili#Let3297 */
                                // ----------
                                ;
                                ({ /* cicili#Progn3299 */
                                  0;
                                });
                              }));
                          });
                        }) +  fprintf (file , "%s", " ") );
                    }) : ({ /* cicili#Let3303 */
                      // ----------
                      ;
                      ({ /* cicili#Progn3305 */
                        ({ /* cicili#Let3313 */
                          __auto_type match3312  = get_Rc_BTree_int_User (head );
                          typeof((((match3312 . __h_data ). Just ). __h_0_mem )) child ;
                          // ----------
                          ;
                          ({ /* cicili#Let3316 */
                            bool __h_case_result  = (true  &&  (((match3312 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3317 */
                                  (child  =  (((match3312 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn3322 */
                                show_BTree_int_User (file , child );
                              }) : ({ /* cicili#Let3327 */
                                // ----------
                                ;
                                ({ /* cicili#Progn3329 */
                                  0;
                                });
                              }));
                          });
                        });
                      });
                    }));
                });
              }) +  show_List_Rc_BTree_int_User (file , tail ) );
          }) : ({ /* cicili#Let3334 */
            // ----------
            ;
            ({ /* cicili#Progn3336 */
              0;
            });
          }));
      });
    });
}
List_Rc_BTree_int_User copy_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
  return ({ /* cicili#Let3342 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let3344 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3345 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn3347 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3352 */
            Cons_Rc_BTree_int_User (head , copy_List_Rc_BTree_int_User (tail ));
          }) : ({ /* cicili#Let3358 */
            // ----------
            ;
            ({ /* cicili#Progn3360 */
              Nil_Rc_BTree_int_User ();
            });
          }));
      });
    });
}
List_Rc_BTree_int_User replaceAt_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , Rc_BTree_int_User item , size_t index ) {
  return ({ /* cicili#Let3367 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let3369 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3370 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3372 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3377 */
            Cons_Rc_BTree_int_User (head , replaceAt_List_Rc_BTree_int_User (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let3383 */
            // ----------
            ;
            ({ /* cicili#Progn3385 */
              ({ /* cicili#Let3389 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let3391 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3392 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3397 */
                      Cons_Rc_BTree_int_User (item , copy_List_Rc_BTree_int_User (taill ));
                    }) : ({ /* cicili#Let3403 */
                      // ----------
                      ;
                      ({ /* cicili#Progn3405 */
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
List_Rc_BTree_int_User deleteAt_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , size_t index ) {
  return ({ /* cicili#Let3412 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let3414 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3415 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3417 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3422 */
            Cons_Rc_BTree_int_User (head , deleteAt_List_Rc_BTree_int_User (tail , (index  -  1 )));
          }) : ({ /* cicili#Let3428 */
            // ----------
            ;
            ({ /* cicili#Progn3430 */
              ({ /* cicili#Let3434 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let3436 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3437 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3442 */
                      copy_List_Rc_BTree_int_User (taill );
                    }) : ({ /* cicili#Let3447 */
                      // ----------
                      ;
                      ({ /* cicili#Progn3449 */
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
List_Rc_BTree_int_User insertAt_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , Rc_BTree_int_User item , size_t index ) {
  return ({ /* cicili#Let3456 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let3458 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3459 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3461 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3466 */
            Cons_Rc_BTree_int_User (head , insertAt_List_Rc_BTree_int_User (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let3472 */
            // ----------
            ;
            ({ /* cicili#Progn3474 */
              Cons_Rc_BTree_int_User (item , copy_List_Rc_BTree_int_User (list ));
            });
          }));
      });
    });
}
List_Rc_BTree_int_User replace_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , Rc_BTree_int_User item , List_Rc_BTree_int_User aimed ) {
  return ({ /* cicili#Let3482 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let3484 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3485 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3487 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3492 */
            Cons_Rc_BTree_int_User (head , replace_List_Rc_BTree_int_User (tail , item , aimed ));
          }) : ({ /* cicili#Let3498 */
            // ----------
            ;
            ({ /* cicili#Progn3500 */
              ({ /* cicili#Let3504 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let3506 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3507 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3512 */
                      Cons_Rc_BTree_int_User (item , copy_List_Rc_BTree_int_User (taill ));
                    }) : ({ /* cicili#Let3518 */
                      // ----------
                      ;
                      ({ /* cicili#Progn3520 */
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
  return ({ /* cicili#Let3527 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let3529 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3530 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3532 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3537 */
            Cons_Rc_BTree_int_User (head , delete_List_Rc_BTree_int_User (tail , aimed ));
          }) : ({ /* cicili#Let3543 */
            // ----------
            ;
            ({ /* cicili#Progn3545 */
              ({ /* cicili#Let3549 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let3551 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3552 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3557 */
                      copy_List_Rc_BTree_int_User (taill );
                    }) : ({ /* cicili#Let3562 */
                      // ----------
                      ;
                      ({ /* cicili#Progn3564 */
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
  return ({ /* cicili#Let3571 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let3573 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3574 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3576 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (llist  !=  rlist  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3581 */
            Cons_Rc_BTree_int_User (head , insert_List_Rc_BTree_int_User (tail , item , rlist ));
          }) : ({ /* cicili#Let3587 */
            // ----------
            ;
            ({ /* cicili#Progn3589 */
              Cons_Rc_BTree_int_User (item , copy_List_Rc_BTree_int_User (rlist ));
            });
          }));
      });
    });
}
List_Rc_BTree_int_User reverse_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
  List_Rc_BTree_int_User _reverse (List_Rc_BTree_int_User list , List_Rc_BTree_int_User rlist ) {
    return ({ /* cicili#Let3598 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let3600 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3601 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3603 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3608 */
              _reverse (tail , Cons_Rc_BTree_int_User (head , rlist ));
            }) : ({ /* cicili#Let3613 */
              // ----------
              ;
              ({ /* cicili#Progn3615 */
                rlist ;
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let3619 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let3621 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3622 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn3624 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3629 */
            _reverse (tail , Cons_Rc_BTree_int_User (head , Nil_Rc_BTree_int_User ()));
          }) : ({ /* cicili#Let3635 */
            // ----------
            ;
            ({ /* cicili#Progn3637 */
              list ;
            });
          }));
      });
    });
}
List_Rc_BTree_int_User append_List_Rc_BTree_int_User (List_Rc_BTree_int_User llist , List_Rc_BTree_int_User rlist ) {
  return ({ /* cicili#Let3643 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let3645 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3646 */
                (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn3648 */
                (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3653 */
            Cons_Rc_BTree_int_User (head , append_List_Rc_BTree_int_User (tail , rlist ));
          }) : ({ /* cicili#Let3659 */
            // ----------
            ;
            ({ /* cicili#Progn3661 */
              copy_List_Rc_BTree_int_User (rlist );
            });
          }));
      });
    });
}
List_Rc_BTree_int_User push_List_Rc_BTree_int_User (Rc_BTree_int_User item , List_Rc_BTree_int_User list ) {
  return Cons_Rc_BTree_int_User (item , copy_List_Rc_BTree_int_User (list ));
}
List_Rc_BTree_int_User take_List_Rc_BTree_int_User (size_t len , List_Rc_BTree_int_User list ) {
  return (((len  <=  0 )) ? Nil_Rc_BTree_int_User () : ({ /* cicili#Let3674 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let3676 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3677 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3679 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3684 */
              Cons_Rc_BTree_int_User (head , take_List_Rc_BTree_int_User ((--len ), tail ));
            }) : ({ /* cicili#Let3690 */
              // ----------
              ;
              ({ /* cicili#Progn3692 */
                Nil_Rc_BTree_int_User ();
              });
            }));
        });
      }));
}
List_Rc_BTree_int_User last_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
  return ({ /* cicili#Let3699 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let3701 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3702 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3707 */
            ({ /* cicili#Let3711 */
              // ----------
              ;
              ({ /* cicili#Let3713 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn3717 */
                    copy_List_Rc_BTree_int_User (list );
                  }) : ({ /* cicili#Let3722 */
                    // ----------
                    ;
                    ({ /* cicili#Progn3724 */
                      last_List_Rc_BTree_int_User (tail );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let3729 */
            // ----------
            ;
            ({ /* cicili#Progn3731 */
              Nil_Rc_BTree_int_User ();
            });
          }));
      });
    });
}
List_Rc_BTree_int_User init_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
  return ({ /* cicili#Let3739 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let3741 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3742 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3744 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3749 */
            Cons_Rc_BTree_int_User (head , init_List_Rc_BTree_int_User (tail ));
          }) : ({ /* cicili#Let3755 */
            // ----------
            ;
            ({ /* cicili#Progn3757 */
              Nil_Rc_BTree_int_User ();
            });
          }));
      });
    });
}
size_t hasLen_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , size_t desired ) {
  return ({ /* cicili#Let3764 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let3766 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3767 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3772 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_Rc_BTree_int_User (tail , (--desired )) ));
          }) : ({ /* cicili#Let3778 */
            // ----------
            ;
            ({ /* cicili#Progn3780 */
              0;
            });
          }));
      });
    });
}
size_t len_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
  return ({ /* cicili#Let3786 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let3788 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3789 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3794 */
            (1 +  len_List_Rc_BTree_int_User (tail ) );
          }) : ({ /* cicili#Let3799 */
            // ----------
            ;
            ({ /* cicili#Progn3801 */
              0;
            });
          }));
      });
    });
}
List_Rc_BTree_int_User tail_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
  return drop_List_Rc_BTree_int_User (1, list );
}
List_Rc_BTree_int_User drop_List_Rc_BTree_int_User (size_t len , List_Rc_BTree_int_User list ) {
  return (((len  <=  0 )) ? copy_List_Rc_BTree_int_User (list ) : ({ /* cicili#Let3812 */
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let3814 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3815 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3820 */
              drop_List_Rc_BTree_int_User ((--len ), tail );
            }) : ({ /* cicili#Let3825 */
              // ----------
              ;
              ({ /* cicili#Progn3827 */
                Nil_Rc_BTree_int_User ();
              });
            }));
        });
      }));
}
Maybe_Rc_BTree_int_User head_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
  return ({ /* cicili#Let3835 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      // ----------
      ;
      ({ /* cicili#Let3837 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3838 */
              (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3843 */
            Just_Rc_BTree_int_User (head );
          }) : ({ /* cicili#Let3848 */
            // ----------
            ;
            ({ /* cicili#Progn3850 */
              Nothing_Rc_BTree_int_User ();
            });
          }));
      });
    });
}
List_Rc_BTree_int_User nthcdr_List_Rc_BTree_int_User (size_t index , List_Rc_BTree_int_User list ) {
  return ({ /* cicili#Let3857 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let3859 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3860 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3865 */
            nthcdr_List_Rc_BTree_int_User ((--index ), tail );
          }) : ({ /* cicili#Let3870 */
            // ----------
            ;
            ({ /* cicili#Progn3872 */
              list ;
            });
          }));
      });
    });
}
Maybe_Rc_BTree_int_User nth_List_Rc_BTree_int_User (size_t index , List_Rc_BTree_int_User list ) {
  return ({ /* cicili#Let3879 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let3881 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3882 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn3884 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3889 */
            (((index  ==  0 )) ? Just_Rc_BTree_int_User (head ) : (((index  <  0 )) ? Nothing_Rc_BTree_int_User () : nth_List_Rc_BTree_int_User ((--index ), tail )));
          }) : ({ /* cicili#Let3898 */
            // ----------
            ;
            ({ /* cicili#Progn3900 */
              Nothing_Rc_BTree_int_User ();
            });
          }));
      });
    });
}
void free_List_Rc_BTree_int_User (List_Rc_BTree_int_User * this_ptr ) {
  { /* cicili#Let3905 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let3909 */
      typeof((((this -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let3911 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3912 */
              (tail  =  (((this -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block3918 */
            { /* cicili#Block3920 */
              free (this );
              free_List_Rc_BTree_int_User ((&tail ));
            }
          }
        else
          { /* cicili#Let3928 */
            // ----------
            ;
            ({ /* cicili#Let3930 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Nil_t  ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block3935 */
                  { /* cicili#Block3937 */
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
  { /* cicili#Let3948 */
    List_Rc_BTree_int_User instance  = malloc (sizeof(class_List_Rc_BTree_int_User));
    // ----------
    (*instance ) = ((class_List_Rc_BTree_int_User){ get_List_Rc_BTree_int_User__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
List_Rc_BTree_int_User Nil_Rc_BTree_int_User () {
  { /* cicili#Let3954 */
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
  { /* cicili#Let3971 */
    Maybe_List_Rc_BTree_int_User instance  = ((Maybe_List_Rc_BTree_int_User){ get_Maybe_List_Rc_BTree_int_User__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_Rc_BTree_int_User Nothing_List_Rc_BTree_int_User () {
  { /* cicili#Let3976 */
    Maybe_List_Rc_BTree_int_User instance  = ((Maybe_List_Rc_BTree_int_User){ get_Maybe_List_Rc_BTree_int_User__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_Rc_BTree_int_User__H_IMPL__ */ 
#ifndef __Functor_List_Rc_BTree_int_User__H_IMPL__
#define __Functor_List_Rc_BTree_int_User__H_IMPL__
List_Rc_BTree_int_User fmap_Functor_List_Rc_BTree_int_User (Rc_BTree_int_User_to_Rc_BTree_int_User_t a_b , List_Rc_BTree_int_User input ) {
  return ({ /* cicili#Let3990 */
      typeof((((input -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((input -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let3992 */
        bool __h_case_result  = (true  &&  (((input -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3993 */
                (head  =  (((input -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn3995 */
                (tail  =  (((input -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4000 */
            Cons_Rc_BTree_int_User (a_b (head ), fmap_Functor_List_Rc_BTree_int_User (a_b , tail ));
          }) : ({ /* cicili#Let4007 */
            // ----------
            ;
            ({ /* cicili#Progn4009 */
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
  { /* cicili#Let4023 */
    Functor_List_Rc_BTree_int_User instance  = ((Functor_List_Rc_BTree_int_User){ get_Functor_List_Rc_BTree_int_User__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Functor_List_Rc_BTree_int_User__H_IMPL__ */ 
Functor_List_Rc_BTree_int_User get_Functor_List_Rc_BTree_int_User () {
  return Functor_List_Rc_BTree_int_User_ctor ();
}
size_t U_BTree_int_User  = 5;
size_t L_BTree_int_User  = 3;
BTree_int_User split_BTree_int_User (BTree_int_User tree ) {
  return ({ /* cicili#Let4041 */
      typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      ;
      ({ /* cicili#Let4043 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn4044 */
                (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn4046 */
                (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4051 */
            (((len_List_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? ({ /* cicili#Let4057 */
                __auto_type tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4059 */
                  __auto_type tree  = tree ;
                  // ----------
                  ((void)(tree -> __h_table -> freeClass ));
                  tree ;
                });
                // ----------
                Branch_BTree_int_User (wrap_List_BTree_int_User_pair_t (({ /* cicili#Let4067 */
                    __auto_type match4066  = nth_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                    typeof((((match4066 . __h_data ). Just ). __h_0_mem )) nitem ;
                    // ----------
                    ;
                    ({ /* cicili#Let4071 */
                      bool __h_case_result  = (true  &&  (((match4066 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4072 */
                            (nitem  =  (((match4066 . __h_data ). Just ). __h_0_mem ) );
                            true ;
                          }) ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* cicili#Progn4077 */
                          nitem ;
                        }) : ({ /* cicili#Let4081 */
                          // ----------
                          ;
                          ({ /* cicili#Progn4083 */
                            ((BTree_int_User_pair_t){ });
                          });
                        }));
                    });
                  })), pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Internal_BTree_int_User (take_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ), ({ /* cicili#Let4094 */
                      __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4096 */
                        __auto_type r1  = take_List_Rc_BTree_int_User (L_BTree_int_User , children );
                        // ----------
                        ((void)(r1 -> __h_table -> freeClass ));
                        r1 ;
                      });
                      // ----------
                      fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4106 */
                          Rc_BTree_int_User __ciciliC_4105 (Rc_BTree_int_User __h_value ) {
                            return clone_Rc_BTree_int_User (__h_value );
                          }
                          __ciciliC_4105 ;
                        }), r1 );
                    }))), new_Rc_BTree_int_User (Internal_BTree_int_User (drop_List_BTree_int_User_pair_t (L_BTree_int_User , items ), ({ /* cicili#Let4117 */
                      __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4119 */
                        __auto_type r1  = drop_List_Rc_BTree_int_User (L_BTree_int_User , children );
                        // ----------
                        ((void)(r1 -> __h_table -> freeClass ));
                        r1 ;
                      });
                      // ----------
                      fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4129 */
                          Rc_BTree_int_User __ciciliC_4128 (Rc_BTree_int_User __h_value ) {
                            return clone_Rc_BTree_int_User (__h_value );
                          }
                          __ciciliC_4128 ;
                        }), r1 );
                    })))}), 2));
              }) : tree );
          }) : ({ /* cicili#Let4136 */
            typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            ;
            ({ /* cicili#Let4138 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn4139 */
                      (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn4141 */
                      (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn4146 */
                  (((len_List_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? ({ /* cicili#Let4152 */
                      __auto_type tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4154 */
                        __auto_type tree  = tree ;
                        // ----------
                        ((void)(tree -> __h_table -> freeClass ));
                        tree ;
                      });
                      // ----------
                      Branch_BTree_int_User (wrap_List_BTree_int_User_pair_t (({ /* cicili#Let4162 */
                          __auto_type match4161  = nth_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                          typeof((((match4161 . __h_data ). Just ). __h_0_mem )) nitem ;
                          // ----------
                          ;
                          ({ /* cicili#Let4166 */
                            bool __h_case_result  = (true  &&  (((match4161 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4167 */
                                  (nitem  =  (((match4161 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn4172 */
                                nitem ;
                              }) : ({ /* cicili#Let4176 */
                                // ----------
                                ;
                                ({ /* cicili#Progn4178 */
                                  ((BTree_int_User_pair_t){ });
                                });
                              }));
                          });
                        })), pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Internal_BTree_int_User (take_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ), ({ /* cicili#Let4189 */
                            __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4191 */
                              __auto_type r1  = take_List_Rc_BTree_int_User (L_BTree_int_User , children );
                              // ----------
                              ((void)(r1 -> __h_table -> freeClass ));
                              r1 ;
                            });
                            // ----------
                            fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4201 */
                                Rc_BTree_int_User __ciciliC_4200 (Rc_BTree_int_User __h_value ) {
                                  return clone_Rc_BTree_int_User (__h_value );
                                }
                                __ciciliC_4200 ;
                              }), r1 );
                          }))), new_Rc_BTree_int_User (Internal_BTree_int_User (drop_List_BTree_int_User_pair_t (L_BTree_int_User , items ), ({ /* cicili#Let4212 */
                            __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4214 */
                              __auto_type r1  = drop_List_Rc_BTree_int_User (L_BTree_int_User , children );
                              // ----------
                              ((void)(r1 -> __h_table -> freeClass ));
                              r1 ;
                            });
                            // ----------
                            fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4224 */
                                Rc_BTree_int_User __ciciliC_4223 (Rc_BTree_int_User __h_value ) {
                                  return clone_Rc_BTree_int_User (__h_value );
                                }
                                __ciciliC_4223 ;
                              }), r1 );
                          })))}), 2));
                    }) : tree );
                }) : ({ /* cicili#Let4231 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  ;
                  ({ /* cicili#Let4233 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn4234 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn4239 */
                        (((len_List_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? ({ /* cicili#Let4245 */
                            __auto_type tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4247 */
                              __auto_type tree  = tree ;
                              // ----------
                              ((void)(tree -> __h_table -> freeClass ));
                              tree ;
                            });
                            // ----------
                            Branch_BTree_int_User (wrap_List_BTree_int_User_pair_t (({ /* cicili#Let4255 */
                                __auto_type match4254  = nth_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                                typeof((((match4254 . __h_data ). Just ). __h_0_mem )) nitem ;
                                // ----------
                                ;
                                ({ /* cicili#Let4259 */
                                  bool __h_case_result  = (true  &&  (((match4254 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4260 */
                                        (nitem  =  (((match4254 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn4265 */
                                      nitem ;
                                    }) : ({ /* cicili#Let4269 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn4271 */
                                        ((BTree_int_User_pair_t){ });
                                      });
                                    }));
                                });
                              })), pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Leaf_BTree_int_User (take_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ))), new_Rc_BTree_int_User (Leaf_BTree_int_User (drop_List_BTree_int_User_pair_t (L_BTree_int_User , items )))}), 2));
                          }) : tree );
                      }) : ({ /* cicili#Let4288 */
                        // ----------
                        ;
                        ({ /* cicili#Progn4290 */
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
  return ({ /* cicili#Let4296 */
      typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      ;
      ({ /* cicili#Let4298 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn4299 */
                (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn4301 */
                (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4306 */
            (((len_List_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? Branch_BTree_int_User (wrap_List_BTree_int_User_pair_t (({ /* cicili#Let4316 */
                __auto_type match4315  = nth_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                typeof((((match4315 . __h_data ). Just ). __h_0_mem )) nitem ;
                // ----------
                ;
                ({ /* cicili#Let4320 */
                  bool __h_case_result  = (true  &&  (((match4315 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4321 */
                        (nitem  =  (((match4315 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn4326 */
                      nitem ;
                    }) : ({ /* cicili#Let4330 */
                      // ----------
                      ;
                      ({ /* cicili#Progn4332 */
                        ((BTree_int_User_pair_t){ });
                      });
                    }));
                });
              })), pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Internal_BTree_int_User (take_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ), ({ /* cicili#Let4343 */
                  __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4345 */
                    __auto_type r1  = take_List_Rc_BTree_int_User (L_BTree_int_User , children );
                    // ----------
                    ((void)(r1 -> __h_table -> freeClass ));
                    r1 ;
                  });
                  // ----------
                  fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4355 */
                      Rc_BTree_int_User __ciciliC_4354 (Rc_BTree_int_User __h_value ) {
                        return clone_Rc_BTree_int_User (__h_value );
                      }
                      __ciciliC_4354 ;
                    }), r1 );
                }))), new_Rc_BTree_int_User (Internal_BTree_int_User (drop_List_BTree_int_User_pair_t (L_BTree_int_User , items ), ({ /* cicili#Let4366 */
                  __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4368 */
                    __auto_type r1  = drop_List_Rc_BTree_int_User (L_BTree_int_User , children );
                    // ----------
                    ((void)(r1 -> __h_table -> freeClass ));
                    r1 ;
                  });
                  // ----------
                  fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4378 */
                      Rc_BTree_int_User __ciciliC_4377 (Rc_BTree_int_User __h_value ) {
                        return clone_Rc_BTree_int_User (__h_value );
                      }
                      __ciciliC_4377 ;
                    }), r1 );
                })))}), 2)) : tree );
          }) : ({ /* cicili#Let4385 */
            typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            ;
            ({ /* cicili#Let4387 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn4388 */
                      (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn4390 */
                      (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn4395 */
                  (((len_List_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? Branch_BTree_int_User (wrap_List_BTree_int_User_pair_t (({ /* cicili#Let4405 */
                      __auto_type match4404  = nth_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                      typeof((((match4404 . __h_data ). Just ). __h_0_mem )) nitem ;
                      // ----------
                      ;
                      ({ /* cicili#Let4409 */
                        bool __h_case_result  = (true  &&  (((match4404 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4410 */
                              (nitem  =  (((match4404 . __h_data ). Just ). __h_0_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn4415 */
                            nitem ;
                          }) : ({ /* cicili#Let4419 */
                            // ----------
                            ;
                            ({ /* cicili#Progn4421 */
                              ((BTree_int_User_pair_t){ });
                            });
                          }));
                      });
                    })), pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Internal_BTree_int_User (take_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ), ({ /* cicili#Let4432 */
                        __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4434 */
                          __auto_type r1  = take_List_Rc_BTree_int_User (L_BTree_int_User , children );
                          // ----------
                          ((void)(r1 -> __h_table -> freeClass ));
                          r1 ;
                        });
                        // ----------
                        fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4444 */
                            Rc_BTree_int_User __ciciliC_4443 (Rc_BTree_int_User __h_value ) {
                              return clone_Rc_BTree_int_User (__h_value );
                            }
                            __ciciliC_4443 ;
                          }), r1 );
                      }))), new_Rc_BTree_int_User (Internal_BTree_int_User (drop_List_BTree_int_User_pair_t (L_BTree_int_User , items ), ({ /* cicili#Let4455 */
                        __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4457 */
                          __auto_type r1  = drop_List_Rc_BTree_int_User (L_BTree_int_User , children );
                          // ----------
                          ((void)(r1 -> __h_table -> freeClass ));
                          r1 ;
                        });
                        // ----------
                        fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4467 */
                            Rc_BTree_int_User __ciciliC_4466 (Rc_BTree_int_User __h_value ) {
                              return clone_Rc_BTree_int_User (__h_value );
                            }
                            __ciciliC_4466 ;
                          }), r1 );
                      })))}), 2)) : tree );
                }) : ({ /* cicili#Let4474 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  ;
                  ({ /* cicili#Let4476 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn4477 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn4482 */
                        (((len_List_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? Branch_BTree_int_User (wrap_List_BTree_int_User_pair_t (({ /* cicili#Let4492 */
                            __auto_type match4491  = nth_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                            typeof((((match4491 . __h_data ). Just ). __h_0_mem )) nitem ;
                            // ----------
                            ;
                            ({ /* cicili#Let4496 */
                              bool __h_case_result  = (true  &&  (((match4491 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4497 */
                                    (nitem  =  (((match4491 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* cicili#Progn4502 */
                                  nitem ;
                                }) : ({ /* cicili#Let4506 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Progn4508 */
                                    ((BTree_int_User_pair_t){ });
                                  });
                                }));
                            });
                          })), pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Leaf_BTree_int_User (take_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ))), new_Rc_BTree_int_User (Leaf_BTree_int_User (drop_List_BTree_int_User_pair_t (L_BTree_int_User , items )))}), 2)) : tree );
                      }) : ({ /* cicili#Let4525 */
                        // ----------
                        ;
                        ({ /* cicili#Progn4527 */
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
  return ({ /* cicili#Let4534 */
      __auto_type merged  = Internal_BTree_int_User (append_List_BTree_int_User_pair_t (left_items , right_items ), ({ /* cicili#Let4539 */
        __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4541 */
          __auto_type r1  = append_List_Rc_BTree_int_User (left_children , right_children );
          // ----------
          ((void)(r1 -> __h_table -> freeClass ));
          r1 ;
        });
        // ----------
        fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4550 */
            Rc_BTree_int_User __ciciliC_4549 (Rc_BTree_int_User __h_value ) {
              return clone_Rc_BTree_int_User (__h_value );
            }
            __ciciliC_4549 ;
          }), r1 );
      }));
      // ----------
      ({ /* cicili#Let4559 */
        __auto_type tmp_child  = splitForDelete_BTree_int_User (merged );
        typeof((((tmp_child -> __h_data ). Branch ). __h_0_mem )) __h_match4557_0_arg ;
        typeof((((__h_match4557_0_arg -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((tmp_child -> __h_data ). Branch ). __h_1_mem )) tmp_children ;
        // ----------
        ;
        ({ /* cicili#Let4562 */
          bool __h_case_result  = (true  &&  (((tmp_child -> __h_ctor ) ==  __h_Branch_t  ) &&  ((({ /* cicili#Progn4563 */
                    (__h_match4557_0_arg  =  (((tmp_child -> __h_data ). Branch ). __h_0_mem ) );
                    true ;
                  }) &&  (true  &&  (((__h_match4557_0_arg -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn4565 */
                        (head  =  (((__h_match4557_0_arg -> __h_data ). Cons ). __h_0_mem ) );
                        true ;
                      }) ) ) ) &&  ({ /* cicili#Progn4567 */
                  (tmp_children  =  (((tmp_child -> __h_data ). Branch ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn4572 */
              ({ /* cicili#Let4575 */
                __auto_type merged  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4577 */
                  __auto_type merged  = merged ;
                  // ----------
                  ((void)(merged -> __h_table -> freeClass ));
                  merged ;
                });
                __auto_type tmp_child  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4580 */
                  __auto_type tmp_child  = tmp_child ;
                  // ----------
                  ((void)(tmp_child -> __h_table -> freeClass ));
                  tmp_child ;
                });
                // ----------
                Internal_BTree_int_User (replaceAt_List_BTree_int_User_pair_t (items , head , pitem_index ), ({ /* cicili#Let4587 */
                    __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4589 */
                      __auto_type r1  = deleteAt_List_Rc_BTree_int_User (children , pchild_index );
                      // ----------
                      ((void)(r1 -> __h_table -> freeClass ));
                      r1 ;
                    });
                    __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4593 */
                      __auto_type r2  = take_List_Rc_BTree_int_User (pchild_index , r1 );
                      // ----------
                      ((void)(r2 -> __h_table -> freeClass ));
                      r2 ;
                    });
                    __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4597 */
                      __auto_type r3  = drop_List_Rc_BTree_int_User ((pchild_index  +  1 ), r1 );
                      // ----------
                      ((void)(r3 -> __h_table -> freeClass ));
                      r3 ;
                    });
                    __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4601 */
                      __auto_type r4  = append_List_Rc_BTree_int_User (tmp_children , r3 );
                      // ----------
                      ((void)(r4 -> __h_table -> freeClass ));
                      r4 ;
                    });
                    __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4605 */
                      __auto_type r5  = append_List_Rc_BTree_int_User (r2 , r4 );
                      // ----------
                      ((void)(r5 -> __h_table -> freeClass ));
                      r5 ;
                    });
                    // ----------
                    fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4614 */
                        Rc_BTree_int_User __ciciliC_4613 (Rc_BTree_int_User __h_value ) {
                          return clone_Rc_BTree_int_User (__h_value );
                        }
                        __ciciliC_4613 ;
                      }), r5 );
                  }));
              });
            }) : ({ /* cicili#Let4621 */
              // ----------
              ;
              ({ /* cicili#Let4623 */
                bool __h_case_result  = (true  &&  ((tmp_child -> __h_ctor ) ==  __h_Internal_t  ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn4627 */
                    Internal_BTree_int_User (deleteAt_List_BTree_int_User_pair_t (items , pitem_index ), ({ /* cicili#Let4633 */
                        __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4635 */
                          __auto_type r1  = deleteAt_List_Rc_BTree_int_User (children , pchild_index );
                          // ----------
                          ((void)(r1 -> __h_table -> freeClass ));
                          r1 ;
                        });
                        __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let4639 */
                          __auto_type r2  = new_Rc_BTree_int_User (merged );
                          // ----------
                          ((void)((r2 . __h_table )-> freeData ));
                          r2 ;
                        });
                        __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4643 */
                          __auto_type r3  = replaceAt_List_Rc_BTree_int_User (r1 , r2 , pchild_index );
                          // ----------
                          ((void)(r3 -> __h_table -> freeClass ));
                          r3 ;
                        });
                        // ----------
                        fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4652 */
                            Rc_BTree_int_User __ciciliC_4651 (Rc_BTree_int_User __h_value ) {
                              return clone_Rc_BTree_int_User (__h_value );
                            }
                            __ciciliC_4651 ;
                          }), r3 );
                      }));
                  }) : ({ /* cicili#Let4659 */
                    // ----------
                    ;
                    ({ /* cicili#Progn4661 */
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
    return ({ /* cicili#Let4688 */
        __auto_type match4687  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
        typeof((((match4687 . __h_data ). Just ). __h_0_mem )) right_child_rc ;
        // ----------
        ;
        ({ /* cicili#Let4691 */
          bool __h_case_result  = (true  &&  (((match4687 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4692 */
                (right_child_rc  =  (((match4687 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn4697 */
              ({ /* cicili#Let4700 */
                __auto_type __h_matchbox  = right_child_rc ;
                // ----------
                ({ /* cicili#Let4704 */
                  __auto_type match4703  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                  typeof((((match4703 . __h_data ). Just ). __h_0_mem )) unboxed ;
                  // ----------
                  ;
                  ({ /* cicili#Let4707 */
                    bool __h_case_result  = (true  &&  (((match4703 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4708 */
                          (unboxed  =  (((match4703 . __h_data ). Just ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn4713 */
                        ({ /* cicili#Let4717 */
                          typeof((((unboxed -> __h_data ). Leaf ). __h_0_mem )) right_child_items ;
                          // ----------
                          ;
                          ({ /* cicili#Let4719 */
                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn4720 */
                                  (right_child_items  =  (((unboxed -> __h_data ). Leaf ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn4725 */
                                (((hasLen_List_BTree_int_User_pair_t (right_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let4733 */
                                    __auto_type first  = right_child_items ;
                                    typeof((((first -> __h_data ). Cons ). __h_0_mem )) first_item ;
                                    typeof((((first -> __h_data ). Cons ). __h_1_mem )) tail ;
                                    // ----------
                                    ;
                                    ({ /* cicili#Let4735 */
                                      bool __h_case_result  = (true  &&  (((first -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn4736 */
                                              (first_item  =  (((first -> __h_data ). Cons ). __h_0_mem ) );
                                              true ;
                                            }) &&  ({ /* cicili#Progn4738 */
                                              (tail  =  (((first -> __h_data ). Cons ). __h_1_mem ) );
                                              true ;
                                            }) ) ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn4743 */
                                          Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , first_item , current ), ({ /* cicili#Let4751 */
                                              __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4753 */
                                                __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                                // ----------
                                                ((void)(r1 -> __h_table -> freeClass ));
                                                r1 ;
                                              });
                                              __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4757 */
                                                __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4763 */
                                                  Rc_BTree_int_User __ciciliC_4762 (Rc_BTree_int_User __h_value ) {
                                                    return clone_Rc_BTree_int_User (__h_value );
                                                  }
                                                  __ciciliC_4762 ;
                                                }), r1 );
                                                // ----------
                                                ((void)(r2 -> __h_table -> freeClass ));
                                                r2 ;
                                              });
                                              __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4770 */
                                                __auto_type r3  = drop_List_Rc_BTree_int_User ((index  +  2 ), children );
                                                // ----------
                                                ((void)(r3 -> __h_table -> freeClass ));
                                                r3 ;
                                              });
                                              __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4774 */
                                                __auto_type r4  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4780 */
                                                  Rc_BTree_int_User __ciciliC_4779 (Rc_BTree_int_User __h_value ) {
                                                    return clone_Rc_BTree_int_User (__h_value );
                                                  }
                                                  __ciciliC_4779 ;
                                                }), r3 );
                                                // ----------
                                                ((void)(r4 -> __h_table -> freeClass ));
                                                r4 ;
                                              });
                                              __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4787 */
                                                __auto_type r5  = take_List_BTree_int_User_pair_t (1, current );
                                                // ----------
                                                ((void)(r5 -> __h_table -> freeClass ));
                                                r5 ;
                                              });
                                              __auto_type r7  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4791 */
                                                __auto_type r7  = pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Leaf_BTree_int_User (append_List_BTree_int_User_pair_t (child_items , r5 ))), new_Rc_BTree_int_User (Leaf_BTree_int_User (copy_List_BTree_int_User_pair_t (tail )))}), 2);
                                                // ----------
                                                ((void)(r7 -> __h_table -> freeClass ));
                                                r7 ;
                                              });
                                              __auto_type r6  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4804 */
                                                __auto_type r6  = append_List_Rc_BTree_int_User (r7 , r4 );
                                                // ----------
                                                ((void)(r6 -> __h_table -> freeClass ));
                                                r6 ;
                                              });
                                              // ----------
                                              append_List_Rc_BTree_int_User (r2 , r6 );
                                            })));
                                        }) : ({ /* cicili#Let4811 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Progn4813 */
                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight R1"));
                                          });
                                        }));
                                    });
                                  }) : ({ /* cicili#Let4820 */
                                    typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
                                    // ----------
                                    ;
                                    ({ /* cicili#Let4822 */
                                      bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn4823 */
                                            (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn4828 */
                                          Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (delete_List_BTree_int_User_pair_t (items , current ), ({ /* cicili#Let4836 */
                                              __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4838 */
                                                __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                                // ----------
                                                ((void)(r1 -> __h_table -> freeClass ));
                                                r1 ;
                                              });
                                              __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4842 */
                                                __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4848 */
                                                  Rc_BTree_int_User __ciciliC_4847 (Rc_BTree_int_User __h_value ) {
                                                    return clone_Rc_BTree_int_User (__h_value );
                                                  }
                                                  __ciciliC_4847 ;
                                                }), r1 );
                                                // ----------
                                                ((void)(r2 -> __h_table -> freeClass ));
                                                r2 ;
                                              });
                                              __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4855 */
                                                __auto_type r3  = drop_List_Rc_BTree_int_User ((index  +  2 ), children );
                                                // ----------
                                                ((void)(r3 -> __h_table -> freeClass ));
                                                r3 ;
                                              });
                                              __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4859 */
                                                __auto_type r4  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4865 */
                                                  Rc_BTree_int_User __ciciliC_4864 (Rc_BTree_int_User __h_value ) {
                                                    return clone_Rc_BTree_int_User (__h_value );
                                                  }
                                                  __ciciliC_4864 ;
                                                }), r3 );
                                                // ----------
                                                ((void)(r4 -> __h_table -> freeClass ));
                                                r4 ;
                                              });
                                              __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4872 */
                                                __auto_type r5  = wrap_List_BTree_int_User_pair_t (head );
                                                // ----------
                                                ((void)(r5 -> __h_table -> freeClass ));
                                                r5 ;
                                              });
                                              __auto_type r6  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4876 */
                                                __auto_type r6  = append_List_BTree_int_User_pair_t (child_items , r5 );
                                                // ----------
                                                ((void)(r6 -> __h_table -> freeClass ));
                                                r6 ;
                                              });
                                              __auto_type r8  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4880 */
                                                __auto_type r8  = push_List_Rc_BTree_int_User (new_Rc_BTree_int_User (Leaf_BTree_int_User (append_List_BTree_int_User_pair_t (r6 , right_child_items ))), r4 );
                                                // ----------
                                                ((void)(r8 -> __h_table -> freeClass ));
                                                r8 ;
                                              });
                                              // ----------
                                              append_List_Rc_BTree_int_User (r2 , r8 );
                                            })));
                                        }) : ({ /* cicili#Let4891 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Progn4893 */
                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight R2"));
                                          });
                                        }));
                                    });
                                  }));
                              }) : ({ /* cicili#Let4900 */
                                // ----------
                                ;
                                ({ /* cicili#Progn4902 */
                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight 3"));
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let4909 */
                        // ----------
                        ;
                        ({ /* cicili#Progn4911 */
                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight 3"));
                        });
                      }));
                  });
                });
              });
            }) : ({ /* cicili#Let4918 */
              // ----------
              ;
              ({ /* cicili#Progn4920 */
                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight 4"));
              });
            }));
        });
      });
  }
  Either_BTree_int_User_Error_BTree_int_User borrowLeft (List_BTree_int_User_pair_t child_items ) {
    return ({ /* cicili#Let4933 */
        typeof((((wleft . __h_data ). Just ). __h_0_mem )) left ;
        typeof((((left -> __h_data ). Cons ). __h_0_mem )) left_item ;
        // ----------
        ;
        ({ /* cicili#Let4935 */
          bool __h_case_result  = (true  &&  (((wleft . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn4936 */
                  (left  =  (((wleft . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) &&  (true  &&  (((left -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn4938 */
                      (left_item  =  (((left -> __h_data ). Cons ). __h_0_mem ) );
                      true ;
                    }) ) ) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn4943 */
              ({ /* cicili#Let4947 */
                __auto_type match4946  = nth_List_Rc_BTree_int_User ((index  -  1 ), children );
                typeof((((match4946 . __h_data ). Just ). __h_0_mem )) left_child_rc ;
                // ----------
                ;
                ({ /* cicili#Let4950 */
                  bool __h_case_result  = (true  &&  (((match4946 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4951 */
                        (left_child_rc  =  (((match4946 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn4956 */
                      ({ /* cicili#Let4959 */
                        __auto_type __h_matchbox  = left_child_rc ;
                        // ----------
                        ({ /* cicili#Let4963 */
                          __auto_type match4962  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                          typeof((((match4962 . __h_data ). Just ). __h_0_mem )) unboxed ;
                          // ----------
                          ;
                          ({ /* cicili#Let4966 */
                            bool __h_case_result  = (true  &&  (((match4962 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4967 */
                                  (unboxed  =  (((match4962 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn4972 */
                                ({ /* cicili#Let4976 */
                                  typeof((((unboxed -> __h_data ). Leaf ). __h_0_mem )) left_child_items ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let4978 */
                                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn4979 */
                                          (left_child_items  =  (((unboxed -> __h_data ). Leaf ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn4984 */
                                        (((hasLen_List_BTree_int_User_pair_t (left_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let4992 */
                                            __auto_type last  = last_List_BTree_int_User_pair_t (left_child_items );
                                            typeof((((last -> __h_data ). Cons ). __h_0_mem )) last_item ;
                                            // ----------
                                            ;
                                            ({ /* cicili#Let4995 */
                                              bool __h_case_result  = (true  &&  (((last -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn4996 */
                                                    (last_item  =  (((last -> __h_data ). Cons ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              
                                              ((__h_case_result ) ? ({ /* cicili#Progn5001 */
                                                  ({ /* cicili#Let5004 */
                                                    __auto_type last  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5006 */
                                                      __auto_type last  = last ;
                                                      // ----------
                                                      ((void)(last -> __h_table -> freeClass ));
                                                      last ;
                                                    });
                                                    // ----------
                                                    Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , last_item , left ), ({ /* cicili#Let5015 */
                                                        __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5017 */
                                                          __auto_type r1  = take_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                          // ----------
                                                          ((void)(r1 -> __h_table -> freeClass ));
                                                          r1 ;
                                                        });
                                                        __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5021 */
                                                          __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5027 */
                                                            Rc_BTree_int_User __ciciliC_5026 (Rc_BTree_int_User __h_value ) {
                                                              return clone_Rc_BTree_int_User (__h_value );
                                                            }
                                                            __ciciliC_5026 ;
                                                          }), r1 );
                                                          // ----------
                                                          ((void)(r2 -> __h_table -> freeClass ));
                                                          r2 ;
                                                        });
                                                        __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5034 */
                                                          __auto_type r3  = drop_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                          // ----------
                                                          ((void)(r3 -> __h_table -> freeClass ));
                                                          r3 ;
                                                        });
                                                        __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5038 */
                                                          __auto_type r4  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5044 */
                                                            Rc_BTree_int_User __ciciliC_5043 (Rc_BTree_int_User __h_value ) {
                                                              return clone_Rc_BTree_int_User (__h_value );
                                                            }
                                                            __ciciliC_5043 ;
                                                          }), r3 );
                                                          // ----------
                                                          ((void)(r4 -> __h_table -> freeClass ));
                                                          r4 ;
                                                        });
                                                        __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5051 */
                                                          __auto_type r5  = pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Leaf_BTree_int_User (init_List_BTree_int_User_pair_t (left_child_items ))), new_Rc_BTree_int_User (Leaf_BTree_int_User (push_List_BTree_int_User_pair_t (left_item , child_items )))}), 2);
                                                          // ----------
                                                          ((void)(r5 -> __h_table -> freeClass ));
                                                          r5 ;
                                                        });
                                                        __auto_type r7  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5064 */
                                                          __auto_type r7  = append_List_Rc_BTree_int_User (r5 , r4 );
                                                          // ----------
                                                          ((void)(r7 -> __h_table -> freeClass ));
                                                          r7 ;
                                                        });
                                                        // ----------
                                                        append_List_Rc_BTree_int_User (r2 , r7 );
                                                      })));
                                                  });
                                                }) : ({ /* cicili#Let5071 */
                                                  // ----------
                                                  ;
                                                  ({ /* cicili#Progn5073 */
                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowLeft 2"));
                                                  });
                                                }));
                                            });
                                          }) : ({ /* cicili#Let5080 */
                                            __auto_type match5079  = borrowRight (child_items );
                                            // ----------
                                            ;
                                            ({ /* cicili#Let5082 */
                                              bool __h_case_result  = (true  &&  ((match5079 . __h_ctor ) ==  __h_Left_t  ) );
                                              // ----------
                                              
                                              ((__h_case_result ) ? ({ /* cicili#Progn5086 */
                                                  Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (delete_List_BTree_int_User_pair_t (items , left ), ({ /* cicili#Let5094 */
                                                      __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5096 */
                                                        __auto_type r1  = take_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                        // ----------
                                                        ((void)(r1 -> __h_table -> freeClass ));
                                                        r1 ;
                                                      });
                                                      __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5100 */
                                                        __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5106 */
                                                          Rc_BTree_int_User __ciciliC_5105 (Rc_BTree_int_User __h_value ) {
                                                            return clone_Rc_BTree_int_User (__h_value );
                                                          }
                                                          __ciciliC_5105 ;
                                                        }), r1 );
                                                        // ----------
                                                        ((void)(r2 -> __h_table -> freeClass ));
                                                        r2 ;
                                                      });
                                                      __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5113 */
                                                        __auto_type r3  = drop_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                        // ----------
                                                        ((void)(r3 -> __h_table -> freeClass ));
                                                        r3 ;
                                                      });
                                                      __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5117 */
                                                        __auto_type r4  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5123 */
                                                          Rc_BTree_int_User __ciciliC_5122 (Rc_BTree_int_User __h_value ) {
                                                            return clone_Rc_BTree_int_User (__h_value );
                                                          }
                                                          __ciciliC_5122 ;
                                                        }), r3 );
                                                        // ----------
                                                        ((void)(r4 -> __h_table -> freeClass ));
                                                        r4 ;
                                                      });
                                                      __auto_type r8  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5130 */
                                                        __auto_type r8  = wrap_List_BTree_int_User_pair_t (left_item );
                                                        // ----------
                                                        ((void)(r8 -> __h_table -> freeClass ));
                                                        r8 ;
                                                      });
                                                      __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5134 */
                                                        __auto_type r5  = append_List_BTree_int_User_pair_t (left_child_items , r8 );
                                                        // ----------
                                                        ((void)(r5 -> __h_table -> freeClass ));
                                                        r5 ;
                                                      });
                                                      __auto_type r7  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5138 */
                                                        __auto_type r7  = push_List_Rc_BTree_int_User (new_Rc_BTree_int_User (Leaf_BTree_int_User (append_List_BTree_int_User_pair_t (r5 , child_items ))), r4 );
                                                        // ----------
                                                        ((void)(r7 -> __h_table -> freeClass ));
                                                        r7 ;
                                                      });
                                                      // ----------
                                                      append_List_Rc_BTree_int_User (r2 , r7 );
                                                    })));
                                                }) : ({ /* cicili#Let5149 */
                                                  __auto_type right  = match5079 ;
                                                  // ----------
                                                  ;
                                                  ({ /* cicili#Progn5151 */
                                                    right ;
                                                  });
                                                }));
                                            });
                                          }));
                                      }) : ({ /* cicili#Let5155 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn5157 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowLeft 3"));
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let5164 */
                                // ----------
                                ;
                                ({ /* cicili#Progn5166 */
                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowLeft 4"));
                                });
                              }));
                          });
                        });
                      });
                    }) : ({ /* cicili#Let5173 */
                      // ----------
                      ;
                      ({ /* cicili#Progn5175 */
                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowLeft 5"));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5182 */
              // ----------
              ;
              ({ /* cicili#Progn5184 */
                borrowRight (child_items );
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let5188 */
      __auto_type result  = ({ /* cicili#Let5191 */
        typeof((((nchild -> __h_data ). Branch ). __h_0_mem )) child_items ;
        // ----------
        ;
        ({ /* cicili#Let5193 */
          bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn5194 */
                (child_items  =  (((nchild -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5199 */
              (((hasLen_List_BTree_int_User_pair_t (child_items , (L_BTree_int_User  -  1 )) ==  (L_BTree_int_User  -  1 ) )) ? Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let5211 */
                  __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5213 */
                    __auto_type r1  = new_Rc_BTree_int_User (nchild );
                    // ----------
                    ((void)((r1 . __h_table )-> freeData ));
                    r1 ;
                  });
                  __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5217 */
                    __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                    // ----------
                    ((void)(r2 -> __h_table -> freeClass ));
                    r2 ;
                  });
                  // ----------
                  fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5226 */
                      Rc_BTree_int_User __ciciliC_5225 (Rc_BTree_int_User __h_value ) {
                        return clone_Rc_BTree_int_User (__h_value );
                      }
                      __ciciliC_5225 ;
                    }), r2 );
                }))) : ({ /* cicili#Let5232 */
                  __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5234 */
                    __auto_type nchild  = nchild ;
                    // ----------
                    ((void)(nchild -> __h_table -> freeClass ));
                    nchild ;
                  });
                  // ----------
                  borrowLeft (child_items );
                }));
            }) : ({ /* cicili#Let5239 */
              typeof((((nchild -> __h_data ). Internal ). __h_0_mem )) child_items ;
              // ----------
              ;
              ({ /* cicili#Let5241 */
                bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn5242 */
                      (child_items  =  (((nchild -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn5247 */
                    (((hasLen_List_BTree_int_User_pair_t (child_items , (L_BTree_int_User  -  1 )) ==  (L_BTree_int_User  -  1 ) )) ? Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let5259 */
                        __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5261 */
                          __auto_type r1  = new_Rc_BTree_int_User (nchild );
                          // ----------
                          ((void)((r1 . __h_table )-> freeData ));
                          r1 ;
                        });
                        __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5265 */
                          __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                          // ----------
                          ((void)(r2 -> __h_table -> freeClass ));
                          r2 ;
                        });
                        // ----------
                        fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5274 */
                            Rc_BTree_int_User __ciciliC_5273 (Rc_BTree_int_User __h_value ) {
                              return clone_Rc_BTree_int_User (__h_value );
                            }
                            __ciciliC_5273 ;
                          }), r2 );
                      }))) : ({ /* cicili#Let5280 */
                        __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5282 */
                          __auto_type nchild  = nchild ;
                          // ----------
                          ((void)(nchild -> __h_table -> freeClass ));
                          nchild ;
                        });
                        // ----------
                        borrowLeft (child_items );
                      }));
                  }) : ({ /* cicili#Let5287 */
                    typeof((((nchild -> __h_data ). Leaf ). __h_0_mem )) child_items ;
                    // ----------
                    ;
                    ({ /* cicili#Let5289 */
                      bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn5290 */
                            (child_items  =  (((nchild -> __h_data ). Leaf ). __h_0_mem ) );
                            true ;
                          }) ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* cicili#Progn5295 */
                          (((hasLen_List_BTree_int_User_pair_t (child_items , (L_BTree_int_User  -  1 )) ==  (L_BTree_int_User  -  1 ) )) ? Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let5307 */
                              __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5309 */
                                __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                // ----------
                                ((void)((r1 . __h_table )-> freeData ));
                                r1 ;
                              });
                              __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5313 */
                                __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                                // ----------
                                ((void)(r2 -> __h_table -> freeClass ));
                                r2 ;
                              });
                              // ----------
                              fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5322 */
                                  Rc_BTree_int_User __ciciliC_5321 (Rc_BTree_int_User __h_value ) {
                                    return clone_Rc_BTree_int_User (__h_value );
                                  }
                                  __ciciliC_5321 ;
                                }), r2 );
                            }))) : ({ /* cicili#Let5328 */
                              __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5330 */
                                __auto_type nchild  = nchild ;
                                // ----------
                                ((void)(nchild -> __h_table -> freeClass ));
                                nchild ;
                              });
                              // ----------
                              borrowLeft (child_items );
                            }));
                        }) : ({ /* cicili#Let5335 */
                          // ----------
                          ;
                          ({ /* cicili#Progn5337 */
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
    return ({ /* cicili#Let5362 */
        __auto_type match5361  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
        typeof((((match5361 . __h_data ). Just ). __h_0_mem )) right_child_rc ;
        // ----------
        ;
        ({ /* cicili#Let5365 */
          bool __h_case_result  = (true  &&  (((match5361 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5366 */
                (right_child_rc  =  (((match5361 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5371 */
              ({ /* cicili#Let5375 */
                __auto_type match5374  = get_Rc_BTree_int_User (right_child_rc );
                typeof((((match5374 . __h_data ). Just ). __h_0_mem )) right_child ;
                // ----------
                ;
                ({ /* cicili#Let5378 */
                  bool __h_case_result  = (true  &&  (((match5374 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5379 */
                        (right_child  =  (((match5374 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5384 */
                      ({ /* cicili#Let5388 */
                        typeof((((right_child -> __h_data ). Branch ). __h_0_mem )) right_child_items ;
                        typeof((((right_child -> __h_data ). Branch ). __h_1_mem )) right_child_children ;
                        // ----------
                        ;
                        ({ /* cicili#Let5390 */
                          bool __h_case_result  = (true  &&  (((right_child -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn5391 */
                                  (right_child_items  =  (((right_child -> __h_data ). Branch ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn5393 */
                                  (right_child_children  =  (((right_child -> __h_data ). Branch ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn5398 */
                              (((hasLen_List_BTree_int_User_pair_t (right_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let5407 */
                                  __auto_type match5405  = min_BTree_int_User (right_child );
                                  typeof((((match5405 . __h_data ). Just ). __h_0_mem )) min ;
                                  typeof((min . __h_0_mem )) min_key ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let5410 */
                                    bool __h_case_result  = (true  &&  (((match5405 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn5411 */
                                            (min  =  (((match5405 . __h_data ). Just ). __h_0_mem ) );
                                            true ;
                                          }) &&  (true  &&  ({ /* cicili#Progn5413 */
                                              (min_key  =  (min . __h_0_mem ) );
                                              true ;
                                            }) ) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn5418 */
                                        ({ /* cicili#Let5422 */
                                          __auto_type match5421  = delete_BTree_int_User (right_child , min_key , NULL );
                                          typeof((((match5421 . __h_data ). Right ). __h_0_mem )) nchild ;
                                          // ----------
                                          ;
                                          ({ /* cicili#Let5425 */
                                            bool __h_case_result  = (true  &&  (((match5421 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn5426 */
                                                  (nchild  =  (((match5421 . __h_data ). Right ). __h_0_mem ) );
                                                  true ;
                                                }) ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* cicili#Progn5431 */
                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , min , current ), ({ /* cicili#Let5439 */
                                                    __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5441 */
                                                      __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                      // ----------
                                                      ((void)((r1 . __h_table )-> freeData ));
                                                      r1 ;
                                                    });
                                                    __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5445 */
                                                      __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , (index  +  1 ));
                                                      // ----------
                                                      ((void)(r2 -> __h_table -> freeClass ));
                                                      r2 ;
                                                    });
                                                    // ----------
                                                    fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5454 */
                                                        Rc_BTree_int_User __ciciliC_5453 (Rc_BTree_int_User __h_value ) {
                                                          return clone_Rc_BTree_int_User (__h_value );
                                                        }
                                                        __ciciliC_5453 ;
                                                      }), r2 );
                                                  })));
                                              }) : ({ /* cicili#Let5461 */
                                                __auto_type left  = match5421 ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Progn5463 */
                                                  left ;
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* cicili#Let5467 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn5469 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 1"));
                                        });
                                      }));
                                  });
                                }) : ({ /* cicili#Let5477 */
                                  typeof((((current -> __h_data ). Cons ). __h_0_mem )) current_item ;
                                  typeof((current_item . __h_0_mem )) current_key ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let5479 */
                                    bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5480 */
                                            (current_item  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                                            true ;
                                          }) &&  (true  &&  ({ /* cicili#Progn5482 */
                                              (current_key  =  (current_item . __h_0_mem ) );
                                              true ;
                                            }) ) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn5487 */
                                        ({ /* cicili#Let5490 */
                                          __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5492 */
                                            __auto_type r1  = push_List_BTree_int_User_pair_t (current_item , right_child_items );
                                            // ----------
                                            ((void)(r1 -> __h_table -> freeClass ));
                                            r1 ;
                                          });
                                          __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5496 */
                                            __auto_type r2  = append_List_Rc_BTree_int_User (left_child_children , right_child_children );
                                            // ----------
                                            ((void)(r2 -> __h_table -> freeClass ));
                                            r2 ;
                                          });
                                          __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5500 */
                                            __auto_type r4  = Internal_BTree_int_User (append_List_BTree_int_User_pair_t (left_child_items , r1 ), fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5509 */
                                              Rc_BTree_int_User __ciciliC_5508 (Rc_BTree_int_User __h_value ) {
                                                return clone_Rc_BTree_int_User (__h_value );
                                              }
                                              __ciciliC_5508 ;
                                            }), r2 ));
                                            // ----------
                                            ((void)(r4 -> __h_table -> freeClass ));
                                            r4 ;
                                          });
                                          __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5516 */
                                            __auto_type r5  = take_List_Rc_BTree_int_User (index , children );
                                            // ----------
                                            ((void)(r5 -> __h_table -> freeClass ));
                                            r5 ;
                                          });
                                          __auto_type r7  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5520 */
                                            __auto_type r7  = drop_List_Rc_BTree_int_User ((index  +  2 ), children );
                                            // ----------
                                            ((void)(r7 -> __h_table -> freeClass ));
                                            r7 ;
                                          });
                                          // ----------
                                          ({ /* cicili#Let5526 */
                                            __auto_type match5525  = delete_BTree_int_User (r4 , current_key , NULL );
                                            typeof((((match5525 . __h_data ). Right ). __h_0_mem )) ntree ;
                                            // ----------
                                            ;
                                            ({ /* cicili#Let5529 */
                                              bool __h_case_result  = (true  &&  (((match5525 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn5530 */
                                                    (ntree  =  (((match5525 . __h_data ). Right ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              
                                              ((__h_case_result ) ? ({ /* cicili#Progn5535 */
                                                  ({ /* cicili#Let5539 */
                                                    __auto_type tmp_result  = splitForDelete_BTree_int_User (ntree );
                                                    typeof((((tmp_result -> __h_data ). Branch ). __h_0_mem )) branch_items ;
                                                    typeof((((tmp_result -> __h_data ). Branch ). __h_1_mem )) branch_children ;
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Let5542 */
                                                      bool __h_case_result  = (true  &&  (((tmp_result -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn5543 */
                                                              (branch_items  =  (((tmp_result -> __h_data ). Branch ). __h_0_mem ) );
                                                              true ;
                                                            }) &&  ({ /* cicili#Progn5545 */
                                                              (branch_children  =  (((tmp_result -> __h_data ). Branch ). __h_1_mem ) );
                                                              true ;
                                                            }) ) ) );
                                                      // ----------
                                                      
                                                      ((__h_case_result ) ? ({ /* cicili#Progn5550 */
                                                          ({ /* cicili#Let5554 */
                                                            typeof((((branch_items -> __h_data ). Cons ). __h_0_mem )) branch_head ;
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Let5556 */
                                                              bool __h_case_result  = (true  &&  (((branch_items -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5557 */
                                                                    (branch_head  =  (((branch_items -> __h_data ). Cons ). __h_0_mem ) );
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              
                                                              ((__h_case_result ) ? ({ /* cicili#Progn5562 */
                                                                  ({ /* cicili#Let5565 */
                                                                    __auto_type ntree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5567 */
                                                                      __auto_type ntree  = ntree ;
                                                                      // ----------
                                                                      ((void)(ntree -> __h_table -> freeClass ));
                                                                      ntree ;
                                                                    });
                                                                    __auto_type tmp_result  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5570 */
                                                                      __auto_type tmp_result  = tmp_result ;
                                                                      // ----------
                                                                      ((void)(tmp_result -> __h_table -> freeClass ));
                                                                      tmp_result ;
                                                                    });
                                                                    // ----------
                                                                    Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , branch_head , current ), ({ /* cicili#Let5579 */
                                                                        __auto_type r10  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5581 */
                                                                          __auto_type r10  = append_List_Rc_BTree_int_User (branch_children , r7 );
                                                                          // ----------
                                                                          ((void)(r10 -> __h_table -> freeClass ));
                                                                          r10 ;
                                                                        });
                                                                        __auto_type r11  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5585 */
                                                                          __auto_type r11  = append_List_Rc_BTree_int_User (r5 , r10 );
                                                                          // ----------
                                                                          ((void)(r11 -> __h_table -> freeClass ));
                                                                          r11 ;
                                                                        });
                                                                        // ----------
                                                                        fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5594 */
                                                                            Rc_BTree_int_User __ciciliC_5593 (Rc_BTree_int_User __h_value ) {
                                                                              return clone_Rc_BTree_int_User (__h_value );
                                                                            }
                                                                            __ciciliC_5593 ;
                                                                          }), r11 );
                                                                      })));
                                                                  });
                                                                }) : ({ /* cicili#Let5601 */
                                                                  // ----------
                                                                  ;
                                                                  ({ /* cicili#Progn5603 */
                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 2"));
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        }) : ({ /* cicili#Let5610 */
                                                          // ----------
                                                          ;
                                                          ({ /* cicili#Let5612 */
                                                            bool __h_case_result  = (true  &&  ((tmp_result -> __h_ctor ) ==  __h_Internal_t  ) );
                                                            // ----------
                                                            
                                                            ((__h_case_result ) ? ({ /* cicili#Progn5616 */
                                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (delete_List_BTree_int_User_pair_t (items , current ), ({ /* cicili#Let5624 */
                                                                    __auto_type r9  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5626 */
                                                                      __auto_type r9  = new_Rc_BTree_int_User (ntree );
                                                                      // ----------
                                                                      ((void)((r9 . __h_table )-> freeData ));
                                                                      r9 ;
                                                                    });
                                                                    __auto_type r10  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5630 */
                                                                      __auto_type r10  = push_List_Rc_BTree_int_User (r9 , r7 );
                                                                      // ----------
                                                                      ((void)(r10 -> __h_table -> freeClass ));
                                                                      r10 ;
                                                                    });
                                                                    __auto_type r11  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5634 */
                                                                      __auto_type r11  = append_List_Rc_BTree_int_User (r5 , r10 );
                                                                      // ----------
                                                                      ((void)(r11 -> __h_table -> freeClass ));
                                                                      r11 ;
                                                                    });
                                                                    // ----------
                                                                    fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5643 */
                                                                        Rc_BTree_int_User __ciciliC_5642 (Rc_BTree_int_User __h_value ) {
                                                                          return clone_Rc_BTree_int_User (__h_value );
                                                                        }
                                                                        __ciciliC_5642 ;
                                                                      }), r11 );
                                                                  })));
                                                              }) : ({ /* cicili#Let5650 */
                                                                // ----------
                                                                ;
                                                                ({ /* cicili#Progn5652 */
                                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 3"));
                                                                });
                                                              }));
                                                          });
                                                        }));
                                                    });
                                                  });
                                                }) : ({ /* cicili#Let5659 */
                                                  __auto_type left  = match5525 ;
                                                  // ----------
                                                  ;
                                                  ({ /* cicili#Progn5661 */
                                                    left ;
                                                  });
                                                }));
                                            });
                                          });
                                        });
                                      }) : ({ /* cicili#Let5665 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn5667 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 4"));
                                        });
                                      }));
                                  });
                                }));
                            }) : ({ /* cicili#Let5674 */
                              typeof((((right_child -> __h_data ). Internal ). __h_0_mem )) right_child_items ;
                              typeof((((right_child -> __h_data ). Internal ). __h_1_mem )) right_child_children ;
                              // ----------
                              ;
                              ({ /* cicili#Let5676 */
                                bool __h_case_result  = (true  &&  (((right_child -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn5677 */
                                        (right_child_items  =  (((right_child -> __h_data ). Internal ). __h_0_mem ) );
                                        true ;
                                      }) &&  ({ /* cicili#Progn5679 */
                                        (right_child_children  =  (((right_child -> __h_data ). Internal ). __h_1_mem ) );
                                        true ;
                                      }) ) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn5684 */
                                    (((hasLen_List_BTree_int_User_pair_t (right_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let5693 */
                                        __auto_type match5691  = min_BTree_int_User (right_child );
                                        typeof((((match5691 . __h_data ). Just ). __h_0_mem )) min ;
                                        typeof((min . __h_0_mem )) min_key ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let5696 */
                                          bool __h_case_result  = (true  &&  (((match5691 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn5697 */
                                                  (min  =  (((match5691 . __h_data ). Just ). __h_0_mem ) );
                                                  true ;
                                                }) &&  (true  &&  ({ /* cicili#Progn5699 */
                                                    (min_key  =  (min . __h_0_mem ) );
                                                    true ;
                                                  }) ) ) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn5704 */
                                              ({ /* cicili#Let5708 */
                                                __auto_type match5707  = delete_BTree_int_User (right_child , min_key , NULL );
                                                typeof((((match5707 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let5711 */
                                                  bool __h_case_result  = (true  &&  (((match5707 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn5712 */
                                                        (nchild  =  (((match5707 . __h_data ). Right ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn5717 */
                                                      Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , min , current ), ({ /* cicili#Let5725 */
                                                          __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5727 */
                                                            __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                            // ----------
                                                            ((void)((r1 . __h_table )-> freeData ));
                                                            r1 ;
                                                          });
                                                          __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5731 */
                                                            __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , (index  +  1 ));
                                                            // ----------
                                                            ((void)(r2 -> __h_table -> freeClass ));
                                                            r2 ;
                                                          });
                                                          // ----------
                                                          fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5740 */
                                                              Rc_BTree_int_User __ciciliC_5739 (Rc_BTree_int_User __h_value ) {
                                                                return clone_Rc_BTree_int_User (__h_value );
                                                              }
                                                              __ciciliC_5739 ;
                                                            }), r2 );
                                                        })));
                                                    }) : ({ /* cicili#Let5747 */
                                                      __auto_type left  = match5707 ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn5749 */
                                                        left ;
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let5753 */
                                              // ----------
                                              ;
                                              ({ /* cicili#Progn5755 */
                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 1"));
                                              });
                                            }));
                                        });
                                      }) : ({ /* cicili#Let5763 */
                                        typeof((((current -> __h_data ). Cons ). __h_0_mem )) current_item ;
                                        typeof((current_item . __h_0_mem )) current_key ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let5765 */
                                          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5766 */
                                                  (current_item  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                                                  true ;
                                                }) &&  (true  &&  ({ /* cicili#Progn5768 */
                                                    (current_key  =  (current_item . __h_0_mem ) );
                                                    true ;
                                                  }) ) ) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn5773 */
                                              ({ /* cicili#Let5776 */
                                                __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5778 */
                                                  __auto_type r1  = push_List_BTree_int_User_pair_t (current_item , right_child_items );
                                                  // ----------
                                                  ((void)(r1 -> __h_table -> freeClass ));
                                                  r1 ;
                                                });
                                                __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5782 */
                                                  __auto_type r2  = append_List_Rc_BTree_int_User (left_child_children , right_child_children );
                                                  // ----------
                                                  ((void)(r2 -> __h_table -> freeClass ));
                                                  r2 ;
                                                });
                                                __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5786 */
                                                  __auto_type r4  = Internal_BTree_int_User (append_List_BTree_int_User_pair_t (left_child_items , r1 ), fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5795 */
                                                    Rc_BTree_int_User __ciciliC_5794 (Rc_BTree_int_User __h_value ) {
                                                      return clone_Rc_BTree_int_User (__h_value );
                                                    }
                                                    __ciciliC_5794 ;
                                                  }), r2 ));
                                                  // ----------
                                                  ((void)(r4 -> __h_table -> freeClass ));
                                                  r4 ;
                                                });
                                                __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5802 */
                                                  __auto_type r5  = take_List_Rc_BTree_int_User (index , children );
                                                  // ----------
                                                  ((void)(r5 -> __h_table -> freeClass ));
                                                  r5 ;
                                                });
                                                __auto_type r7  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5806 */
                                                  __auto_type r7  = drop_List_Rc_BTree_int_User ((index  +  2 ), children );
                                                  // ----------
                                                  ((void)(r7 -> __h_table -> freeClass ));
                                                  r7 ;
                                                });
                                                // ----------
                                                ({ /* cicili#Let5812 */
                                                  __auto_type match5811  = delete_BTree_int_User (r4 , current_key , NULL );
                                                  typeof((((match5811 . __h_data ). Right ). __h_0_mem )) ntree ;
                                                  // ----------
                                                  ;
                                                  ({ /* cicili#Let5815 */
                                                    bool __h_case_result  = (true  &&  (((match5811 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn5816 */
                                                          (ntree  =  (((match5811 . __h_data ). Right ). __h_0_mem ) );
                                                          true ;
                                                        }) ) );
                                                    // ----------
                                                    
                                                    ((__h_case_result ) ? ({ /* cicili#Progn5821 */
                                                        ({ /* cicili#Let5825 */
                                                          __auto_type tmp_result  = splitForDelete_BTree_int_User (ntree );
                                                          typeof((((tmp_result -> __h_data ). Branch ). __h_0_mem )) branch_items ;
                                                          typeof((((tmp_result -> __h_data ). Branch ). __h_1_mem )) branch_children ;
                                                          // ----------
                                                          ;
                                                          ({ /* cicili#Let5828 */
                                                            bool __h_case_result  = (true  &&  (((tmp_result -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn5829 */
                                                                    (branch_items  =  (((tmp_result -> __h_data ). Branch ). __h_0_mem ) );
                                                                    true ;
                                                                  }) &&  ({ /* cicili#Progn5831 */
                                                                    (branch_children  =  (((tmp_result -> __h_data ). Branch ). __h_1_mem ) );
                                                                    true ;
                                                                  }) ) ) );
                                                            // ----------
                                                            
                                                            ((__h_case_result ) ? ({ /* cicili#Progn5836 */
                                                                ({ /* cicili#Let5840 */
                                                                  typeof((((branch_items -> __h_data ). Cons ). __h_0_mem )) branch_head ;
                                                                  // ----------
                                                                  ;
                                                                  ({ /* cicili#Let5842 */
                                                                    bool __h_case_result  = (true  &&  (((branch_items -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5843 */
                                                                          (branch_head  =  (((branch_items -> __h_data ). Cons ). __h_0_mem ) );
                                                                          true ;
                                                                        }) ) );
                                                                    // ----------
                                                                    
                                                                    ((__h_case_result ) ? ({ /* cicili#Progn5848 */
                                                                        ({ /* cicili#Let5851 */
                                                                          __auto_type ntree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5853 */
                                                                            __auto_type ntree  = ntree ;
                                                                            // ----------
                                                                            ((void)(ntree -> __h_table -> freeClass ));
                                                                            ntree ;
                                                                          });
                                                                          __auto_type tmp_result  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5856 */
                                                                            __auto_type tmp_result  = tmp_result ;
                                                                            // ----------
                                                                            ((void)(tmp_result -> __h_table -> freeClass ));
                                                                            tmp_result ;
                                                                          });
                                                                          // ----------
                                                                          Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , branch_head , current ), ({ /* cicili#Let5865 */
                                                                              __auto_type r10  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5867 */
                                                                                __auto_type r10  = append_List_Rc_BTree_int_User (branch_children , r7 );
                                                                                // ----------
                                                                                ((void)(r10 -> __h_table -> freeClass ));
                                                                                r10 ;
                                                                              });
                                                                              __auto_type r11  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5871 */
                                                                                __auto_type r11  = append_List_Rc_BTree_int_User (r5 , r10 );
                                                                                // ----------
                                                                                ((void)(r11 -> __h_table -> freeClass ));
                                                                                r11 ;
                                                                              });
                                                                              // ----------
                                                                              fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5880 */
                                                                                  Rc_BTree_int_User __ciciliC_5879 (Rc_BTree_int_User __h_value ) {
                                                                                    return clone_Rc_BTree_int_User (__h_value );
                                                                                  }
                                                                                  __ciciliC_5879 ;
                                                                                }), r11 );
                                                                            })));
                                                                        });
                                                                      }) : ({ /* cicili#Let5887 */
                                                                        // ----------
                                                                        ;
                                                                        ({ /* cicili#Progn5889 */
                                                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 2"));
                                                                        });
                                                                      }));
                                                                  });
                                                                });
                                                              }) : ({ /* cicili#Let5896 */
                                                                // ----------
                                                                ;
                                                                ({ /* cicili#Let5898 */
                                                                  bool __h_case_result  = (true  &&  ((tmp_result -> __h_ctor ) ==  __h_Internal_t  ) );
                                                                  // ----------
                                                                  
                                                                  ((__h_case_result ) ? ({ /* cicili#Progn5902 */
                                                                      Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (delete_List_BTree_int_User_pair_t (items , current ), ({ /* cicili#Let5910 */
                                                                          __auto_type r9  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5912 */
                                                                            __auto_type r9  = new_Rc_BTree_int_User (ntree );
                                                                            // ----------
                                                                            ((void)((r9 . __h_table )-> freeData ));
                                                                            r9 ;
                                                                          });
                                                                          __auto_type r10  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5916 */
                                                                            __auto_type r10  = push_List_Rc_BTree_int_User (r9 , r7 );
                                                                            // ----------
                                                                            ((void)(r10 -> __h_table -> freeClass ));
                                                                            r10 ;
                                                                          });
                                                                          __auto_type r11  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5920 */
                                                                            __auto_type r11  = append_List_Rc_BTree_int_User (r5 , r10 );
                                                                            // ----------
                                                                            ((void)(r11 -> __h_table -> freeClass ));
                                                                            r11 ;
                                                                          });
                                                                          // ----------
                                                                          fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5929 */
                                                                              Rc_BTree_int_User __ciciliC_5928 (Rc_BTree_int_User __h_value ) {
                                                                                return clone_Rc_BTree_int_User (__h_value );
                                                                              }
                                                                              __ciciliC_5928 ;
                                                                            }), r11 );
                                                                        })));
                                                                    }) : ({ /* cicili#Let5936 */
                                                                      // ----------
                                                                      ;
                                                                      ({ /* cicili#Progn5938 */
                                                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 3"));
                                                                      });
                                                                    }));
                                                                });
                                                              }));
                                                          });
                                                        });
                                                      }) : ({ /* cicili#Let5945 */
                                                        __auto_type left  = match5811 ;
                                                        // ----------
                                                        ;
                                                        ({ /* cicili#Progn5947 */
                                                          left ;
                                                        });
                                                      }));
                                                  });
                                                });
                                              });
                                            }) : ({ /* cicili#Let5951 */
                                              // ----------
                                              ;
                                              ({ /* cicili#Progn5953 */
                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 4"));
                                              });
                                            }));
                                        });
                                      }));
                                  }) : ({ /* cicili#Let5960 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn5962 */
                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 5"));
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let5969 */
                      // ----------
                      ;
                      ({ /* cicili#Progn5971 */
                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 6"));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5978 */
              // ----------
              ;
              ({ /* cicili#Progn5980 */
                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 7"));
              });
            }));
        });
      });
  }
  Either_BTree_int_User_Error_BTree_int_User borrowRightLeaf (List_BTree_int_User_pair_t left_child_items ) {
    return ({ /* cicili#Let5993 */
        __auto_type match5992  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
        typeof((((match5992 . __h_data ). Just ). __h_0_mem )) right_child_rc ;
        // ----------
        ;
        ({ /* cicili#Let5996 */
          bool __h_case_result  = (true  &&  (((match5992 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5997 */
                (right_child_rc  =  (((match5992 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6002 */
              ({ /* cicili#Let6006 */
                __auto_type match6005  = get_Rc_BTree_int_User (right_child_rc );
                typeof((((match6005 . __h_data ). Just ). __h_0_mem )) right_child ;
                // ----------
                ;
                ({ /* cicili#Let6009 */
                  bool __h_case_result  = (true  &&  (((match6005 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6010 */
                        (right_child  =  (((match6005 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6015 */
                      ({ /* cicili#Let6019 */
                        typeof((((right_child -> __h_data ). Leaf ). __h_0_mem )) right_child_items ;
                        // ----------
                        ;
                        ({ /* cicili#Let6021 */
                          bool __h_case_result  = (true  &&  (((right_child -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn6022 */
                                (right_child_items  =  (((right_child -> __h_data ). Leaf ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn6027 */
                              (((hasLen_List_BTree_int_User_pair_t (right_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let6036 */
                                  __auto_type match6034  = min_BTree_int_User (right_child );
                                  typeof((((match6034 . __h_data ). Just ). __h_0_mem )) min ;
                                  typeof((min . __h_0_mem )) min_key ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let6039 */
                                    bool __h_case_result  = (true  &&  (((match6034 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn6040 */
                                            (min  =  (((match6034 . __h_data ). Just ). __h_0_mem ) );
                                            true ;
                                          }) &&  (true  &&  ({ /* cicili#Progn6042 */
                                              (min_key  =  (min . __h_0_mem ) );
                                              true ;
                                            }) ) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn6047 */
                                        ({ /* cicili#Let6051 */
                                          __auto_type match6050  = delete_BTree_int_User (right_child , min_key , NULL );
                                          typeof((((match6050 . __h_data ). Right ). __h_0_mem )) nchild ;
                                          // ----------
                                          ;
                                          ({ /* cicili#Let6054 */
                                            bool __h_case_result  = (true  &&  (((match6050 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn6055 */
                                                  (nchild  =  (((match6050 . __h_data ). Right ). __h_0_mem ) );
                                                  true ;
                                                }) ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* cicili#Progn6060 */
                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , min , current ), ({ /* cicili#Let6068 */
                                                    __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6070 */
                                                      __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                      // ----------
                                                      ((void)((r1 . __h_table )-> freeData ));
                                                      r1 ;
                                                    });
                                                    __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6074 */
                                                      __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , (index  +  1 ));
                                                      // ----------
                                                      ((void)(r2 -> __h_table -> freeClass ));
                                                      r2 ;
                                                    });
                                                    // ----------
                                                    fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6083 */
                                                        Rc_BTree_int_User __ciciliC_6082 (Rc_BTree_int_User __h_value ) {
                                                          return clone_Rc_BTree_int_User (__h_value );
                                                        }
                                                        __ciciliC_6082 ;
                                                      }), r2 );
                                                  })));
                                              }) : ({ /* cicili#Let6090 */
                                                __auto_type left  = match6050 ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Progn6092 */
                                                  left ;
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* cicili#Let6096 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn6098 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 8"));
                                        });
                                      }));
                                  });
                                }) : Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (delete_List_BTree_int_User_pair_t (items , current ), ({ /* cicili#Let6109 */
                                  __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6111 */
                                    __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                    // ----------
                                    ((void)(r1 -> __h_table -> freeClass ));
                                    r1 ;
                                  });
                                  __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6115 */
                                    __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6121 */
                                      Rc_BTree_int_User __ciciliC_6120 (Rc_BTree_int_User __h_value ) {
                                        return clone_Rc_BTree_int_User (__h_value );
                                      }
                                      __ciciliC_6120 ;
                                    }), r1 );
                                    // ----------
                                    ((void)(r2 -> __h_table -> freeClass ));
                                    r2 ;
                                  });
                                  __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6128 */
                                    __auto_type r3  = drop_List_Rc_BTree_int_User ((index  +  2 ), children );
                                    // ----------
                                    ((void)(r3 -> __h_table -> freeClass ));
                                    r3 ;
                                  });
                                  __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6132 */
                                    __auto_type r4  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6138 */
                                      Rc_BTree_int_User __ciciliC_6137 (Rc_BTree_int_User __h_value ) {
                                        return clone_Rc_BTree_int_User (__h_value );
                                      }
                                      __ciciliC_6137 ;
                                    }), r3 );
                                    // ----------
                                    ((void)(r4 -> __h_table -> freeClass ));
                                    r4 ;
                                  });
                                  __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6145 */
                                    __auto_type r5  = push_List_Rc_BTree_int_User (new_Rc_BTree_int_User (Leaf_BTree_int_User (append_List_BTree_int_User_pair_t (left_child_items , right_child_items ))), r4 );
                                    // ----------
                                    ((void)(r5 -> __h_table -> freeClass ));
                                    r5 ;
                                  });
                                  // ----------
                                  append_List_Rc_BTree_int_User (r2 , r5 );
                                }))));
                            }) : ({ /* cicili#Let6156 */
                              // ----------
                              ;
                              ({ /* cicili#Progn6158 */
                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 9"));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let6165 */
                      // ----------
                      ;
                      ({ /* cicili#Progn6167 */
                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 10"));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6174 */
              // ----------
              ;
              ({ /* cicili#Progn6176 */
                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 11"));
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let6183 */
      __auto_type result  = ({ /* cicili#Let6186 */
        __auto_type match6185  = nth_List_Rc_BTree_int_User (index , children );
        typeof((((match6185 . __h_data ). Just ). __h_0_mem )) left_child_rc ;
        // ----------
        ;
        ({ /* cicili#Let6189 */
          bool __h_case_result  = (true  &&  (((match6185 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6190 */
                (left_child_rc  =  (((match6185 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6195 */
              ({ /* cicili#Let6199 */
                __auto_type match6198  = get_Rc_BTree_int_User (left_child_rc );
                typeof((((match6198 . __h_data ). Just ). __h_0_mem )) left_child ;
                // ----------
                ;
                ({ /* cicili#Let6202 */
                  bool __h_case_result  = (true  &&  (((match6198 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6203 */
                        (left_child  =  (((match6198 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6208 */
                      ({ /* cicili#Let6212 */
                        typeof((((left_child -> __h_data ). Branch ). __h_0_mem )) left_child_items ;
                        typeof((((left_child -> __h_data ). Branch ). __h_1_mem )) left_child_children ;
                        // ----------
                        ;
                        ({ /* cicili#Let6214 */
                          bool __h_case_result  = (true  &&  (((left_child -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn6215 */
                                  (left_child_items  =  (((left_child -> __h_data ). Branch ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn6217 */
                                  (left_child_children  =  (((left_child -> __h_data ). Branch ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn6222 */
                              (((hasLen_List_BTree_int_User_pair_t (left_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let6231 */
                                  __auto_type match6229  = max_BTree_int_User (left_child );
                                  typeof((((match6229 . __h_data ). Just ). __h_0_mem )) max ;
                                  typeof((max . __h_0_mem )) max_key ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let6234 */
                                    bool __h_case_result  = (true  &&  (((match6229 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn6235 */
                                            (max  =  (((match6229 . __h_data ). Just ). __h_0_mem ) );
                                            true ;
                                          }) &&  (true  &&  ({ /* cicili#Progn6237 */
                                              (max_key  =  (max . __h_0_mem ) );
                                              true ;
                                            }) ) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn6242 */
                                        ({ /* cicili#Let6246 */
                                          __auto_type match6245  = delete_BTree_int_User (left_child , max_key , NULL );
                                          typeof((((match6245 . __h_data ). Right ). __h_0_mem )) nchild ;
                                          // ----------
                                          ;
                                          ({ /* cicili#Let6249 */
                                            bool __h_case_result  = (true  &&  (((match6245 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn6250 */
                                                  (nchild  =  (((match6245 . __h_data ). Right ). __h_0_mem ) );
                                                  true ;
                                                }) ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* cicili#Progn6255 */
                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , max , current ), ({ /* cicili#Let6263 */
                                                    __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6265 */
                                                      __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                      // ----------
                                                      ((void)((r1 . __h_table )-> freeData ));
                                                      r1 ;
                                                    });
                                                    __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6269 */
                                                      __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                                                      // ----------
                                                      ((void)(r2 -> __h_table -> freeClass ));
                                                      r2 ;
                                                    });
                                                    // ----------
                                                    fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6278 */
                                                        Rc_BTree_int_User __ciciliC_6277 (Rc_BTree_int_User __h_value ) {
                                                          return clone_Rc_BTree_int_User (__h_value );
                                                        }
                                                        __ciciliC_6277 ;
                                                      }), r2 );
                                                  })));
                                              }) : ({ /* cicili#Let6285 */
                                                __auto_type left  = match6245 ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Progn6287 */
                                                  left ;
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* cicili#Let6291 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn6293 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 12"));
                                        });
                                      }));
                                  });
                                }) : borrowRightInternal (left_child_items , left_child_children ));
                            }) : ({ /* cicili#Let6300 */
                              typeof((((left_child -> __h_data ). Internal ). __h_0_mem )) left_child_items ;
                              typeof((((left_child -> __h_data ). Internal ). __h_1_mem )) left_child_children ;
                              // ----------
                              ;
                              ({ /* cicili#Let6302 */
                                bool __h_case_result  = (true  &&  (((left_child -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn6303 */
                                        (left_child_items  =  (((left_child -> __h_data ). Internal ). __h_0_mem ) );
                                        true ;
                                      }) &&  ({ /* cicili#Progn6305 */
                                        (left_child_children  =  (((left_child -> __h_data ). Internal ). __h_1_mem ) );
                                        true ;
                                      }) ) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn6310 */
                                    (((hasLen_List_BTree_int_User_pair_t (left_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let6319 */
                                        __auto_type match6317  = max_BTree_int_User (left_child );
                                        typeof((((match6317 . __h_data ). Just ). __h_0_mem )) max ;
                                        typeof((max . __h_0_mem )) max_key ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let6322 */
                                          bool __h_case_result  = (true  &&  (((match6317 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn6323 */
                                                  (max  =  (((match6317 . __h_data ). Just ). __h_0_mem ) );
                                                  true ;
                                                }) &&  (true  &&  ({ /* cicili#Progn6325 */
                                                    (max_key  =  (max . __h_0_mem ) );
                                                    true ;
                                                  }) ) ) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn6330 */
                                              ({ /* cicili#Let6334 */
                                                __auto_type match6333  = delete_BTree_int_User (left_child , max_key , NULL );
                                                typeof((((match6333 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let6337 */
                                                  bool __h_case_result  = (true  &&  (((match6333 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn6338 */
                                                        (nchild  =  (((match6333 . __h_data ). Right ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn6343 */
                                                      Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , max , current ), ({ /* cicili#Let6351 */
                                                          __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6353 */
                                                            __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                            // ----------
                                                            ((void)((r1 . __h_table )-> freeData ));
                                                            r1 ;
                                                          });
                                                          __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6357 */
                                                            __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                                                            // ----------
                                                            ((void)(r2 -> __h_table -> freeClass ));
                                                            r2 ;
                                                          });
                                                          // ----------
                                                          fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6366 */
                                                              Rc_BTree_int_User __ciciliC_6365 (Rc_BTree_int_User __h_value ) {
                                                                return clone_Rc_BTree_int_User (__h_value );
                                                              }
                                                              __ciciliC_6365 ;
                                                            }), r2 );
                                                        })));
                                                    }) : ({ /* cicili#Let6373 */
                                                      __auto_type left  = match6333 ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn6375 */
                                                        left ;
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let6379 */
                                              // ----------
                                              ;
                                              ({ /* cicili#Progn6381 */
                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 12"));
                                              });
                                            }));
                                        });
                                      }) : borrowRightInternal (left_child_items , left_child_children ));
                                  }) : ({ /* cicili#Let6388 */
                                    typeof((((left_child -> __h_data ). Leaf ). __h_0_mem )) left_child_items ;
                                    // ----------
                                    ;
                                    ({ /* cicili#Let6390 */
                                      bool __h_case_result  = (true  &&  (((left_child -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn6391 */
                                            (left_child_items  =  (((left_child -> __h_data ). Leaf ). __h_0_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn6396 */
                                          (((hasLen_List_BTree_int_User_pair_t (left_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let6405 */
                                              __auto_type match6403  = max_BTree_int_User (left_child );
                                              typeof((((match6403 . __h_data ). Just ). __h_0_mem )) max ;
                                              typeof((max . __h_0_mem )) max_key ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let6408 */
                                                bool __h_case_result  = (true  &&  (((match6403 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn6409 */
                                                        (max  =  (((match6403 . __h_data ). Just ). __h_0_mem ) );
                                                        true ;
                                                      }) &&  (true  &&  ({ /* cicili#Progn6411 */
                                                          (max_key  =  (max . __h_0_mem ) );
                                                          true ;
                                                        }) ) ) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn6416 */
                                                    ({ /* cicili#Let6420 */
                                                      __auto_type match6419  = delete_BTree_int_User (left_child , max_key , NULL );
                                                      typeof((((match6419 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let6423 */
                                                        bool __h_case_result  = (true  &&  (((match6419 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn6424 */
                                                              (nchild  =  (((match6419 . __h_data ). Right ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn6429 */
                                                            Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , max , current ), ({ /* cicili#Let6437 */
                                                                __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6439 */
                                                                  __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                                  // ----------
                                                                  ((void)((r1 . __h_table )-> freeData ));
                                                                  r1 ;
                                                                });
                                                                __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6443 */
                                                                  __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                                                                  // ----------
                                                                  ((void)(r2 -> __h_table -> freeClass ));
                                                                  r2 ;
                                                                });
                                                                // ----------
                                                                fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6452 */
                                                                    Rc_BTree_int_User __ciciliC_6451 (Rc_BTree_int_User __h_value ) {
                                                                      return clone_Rc_BTree_int_User (__h_value );
                                                                    }
                                                                    __ciciliC_6451 ;
                                                                  }), r2 );
                                                              })));
                                                          }) : ({ /* cicili#Let6459 */
                                                            __auto_type left  = match6419 ;
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn6461 */
                                                              left ;
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  }) : ({ /* cicili#Let6465 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn6467 */
                                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 13"));
                                                    });
                                                  }));
                                              });
                                            }) : borrowRightLeaf (left_child_items ));
                                        }) : ({ /* cicili#Let6474 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Progn6476 */
                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 14"));
                                          });
                                        }));
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let6483 */
                      // ----------
                      ;
                      ({ /* cicili#Progn6485 */
                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 15"));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6492 */
              // ----------
              ;
              ({ /* cicili#Progn6494 */
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
    return ({ /* cicili#Let6522 */
        __auto_type result  = ({ /* cicili#Let6526 */
          typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
          typeof((head . __h_0_mem )) key ;
          typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
          // ----------
          ;
          ({ /* cicili#Let6528 */
            bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn6529 */
                      (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                      true ;
                    }) &&  (true  &&  ({ /* cicili#Progn6531 */
                        (key  =  (head . __h_0_mem ) );
                        true ;
                      }) ) ) &&  ({ /* cicili#Progn6533 */
                    (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                    true ;
                  }) ) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn6538 */
                ({ /* cicili#Let6542 */
                  __auto_type match6541  = compareKey (skey , key );
                  // ----------
                  ;
                  ({ /* cicili#Let6544 */
                    bool __h_case_result  = (true  &&  ((match6541 . __h_ctor ) ==  __h_LT_t  ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn6548 */
                        ({ /* cicili#Let6552 */
                          __auto_type match6551  = nth_List_Rc_BTree_int_User (index , children );
                          typeof((((match6551 . __h_data ). Just ). __h_0_mem )) child ;
                          // ----------
                          ;
                          ({ /* cicili#Let6555 */
                            bool __h_case_result  = (true  &&  (((match6551 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6556 */
                                  (child  =  (((match6551 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn6561 */
                                ({ /* cicili#Let6565 */
                                  __auto_type match6564  = get_Rc_BTree_int_User (child );
                                  typeof((((match6564 . __h_data ). Just ). __h_0_mem )) tr ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let6568 */
                                    bool __h_case_result  = (true  &&  (((match6564 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6569 */
                                          (tr  =  (((match6564 . __h_data ). Just ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn6574 */
                                        ({ /* cicili#Let6578 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Let6580 */
                                            bool __h_case_result  = (true  &&  ((tr -> __h_ctor ) ==  __h_Branch_t  ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* cicili#Progn6584 */
                                                ({ /* cicili#Let6588 */
                                                  __auto_type match6587  = deleteWithParent_BTree_int_User (tree , (((index  >  0 )) ? (index  -  1 ) : index ), index , tr , skey , callback );
                                                  typeof((((match6587 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                  // ----------
                                                  ;
                                                  ({ /* cicili#Let6591 */
                                                    bool __h_case_result  = (true  &&  (((match6587 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn6592 */
                                                          (nchild  =  (((match6587 . __h_data ). Right ). __h_0_mem ) );
                                                          true ;
                                                        }) ) );
                                                    // ----------
                                                    
                                                    ((__h_case_result ) ? ({ /* cicili#Progn6597 */
                                                        ({ /* cicili#Let6601 */
                                                          typeof((((nchild -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                                          typeof((((nchild -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                                          // ----------
                                                          ;
                                                          ({ /* cicili#Let6603 */
                                                            bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn6604 */
                                                                    (child_items  =  (((nchild -> __h_data ). Branch ). __h_0_mem ) );
                                                                    true ;
                                                                  }) &&  ({ /* cicili#Progn6606 */
                                                                    (child_children  =  (((nchild -> __h_data ). Branch ). __h_1_mem ) );
                                                                    true ;
                                                                  }) ) ) );
                                                            // ----------
                                                            
                                                            ((__h_case_result ) ? ({ /* cicili#Progn6611 */
                                                                ({ /* cicili#Let6615 */
                                                                  __auto_type match6614  = nth_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                                  typeof((((match6614 . __h_data ). Just ). __h_0_mem )) wleft ;
                                                                  // ----------
                                                                  ;
                                                                  ({ /* cicili#Let6618 */
                                                                    bool __h_case_result  = (true  &&  (((match6614 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6619 */
                                                                          (wleft  =  (((match6614 . __h_data ). Just ). __h_0_mem ) );
                                                                          true ;
                                                                        }) ) );
                                                                    // ----------
                                                                    
                                                                    ((__h_case_result ) ? ({ /* cicili#Progn6624 */
                                                                        ({ /* cicili#Let6627 */
                                                                          __auto_type __h_matchbox  = wleft ;
                                                                          // ----------
                                                                          ({ /* cicili#Let6631 */
                                                                            __auto_type match6630  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                            typeof((((match6630 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                            // ----------
                                                                            ;
                                                                            ({ /* cicili#Let6634 */
                                                                              bool __h_case_result  = (true  &&  (((match6630 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6635 */
                                                                                    (unboxed  =  (((match6630 . __h_data ). Just ). __h_0_mem ) );
                                                                                    true ;
                                                                                  }) ) );
                                                                              // ----------
                                                                              
                                                                              ((__h_case_result ) ? ({ /* cicili#Progn6640 */
                                                                                  ({ /* cicili#Let6644 */
                                                                                    typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) left_items ;
                                                                                    typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) left_children ;
                                                                                    // ----------
                                                                                    ;
                                                                                    ({ /* cicili#Let6646 */
                                                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn6647 */
                                                                                              (left_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                              true ;
                                                                                            }) &&  ({ /* cicili#Progn6649 */
                                                                                              (left_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                              true ;
                                                                                            }) ) ) );
                                                                                      // ----------
                                                                                      
                                                                                      ((__h_case_result ) ? ({ /* cicili#Progn6654 */
                                                                                          ({ /* cicili#Let6657 */
                                                                                            __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6659 */
                                                                                              __auto_type nchild  = nchild ;
                                                                                              // ----------
                                                                                              ((void)(nchild -> __h_table -> freeClass ));
                                                                                              nchild ;
                                                                                            });
                                                                                            // ----------
                                                                                            Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), (((index  >  0 )) ? (index  -  1 ) : index ), left_items , left_children , child_items , child_children ));
                                                                                          });
                                                                                        }) : ({ /* cicili#Let6667 */
                                                                                          typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) left_items ;
                                                                                          typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) left_children ;
                                                                                          // ----------
                                                                                          ;
                                                                                          ({ /* cicili#Let6669 */
                                                                                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn6670 */
                                                                                                    (left_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                    true ;
                                                                                                  }) &&  ({ /* cicili#Progn6672 */
                                                                                                    (left_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                    true ;
                                                                                                  }) ) ) );
                                                                                            // ----------
                                                                                            
                                                                                            ((__h_case_result ) ? ({ /* cicili#Progn6677 */
                                                                                                ({ /* cicili#Let6680 */
                                                                                                  __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6682 */
                                                                                                    __auto_type nchild  = nchild ;
                                                                                                    // ----------
                                                                                                    ((void)(nchild -> __h_table -> freeClass ));
                                                                                                    nchild ;
                                                                                                  });
                                                                                                  // ----------
                                                                                                  Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), (((index  >  0 )) ? (index  -  1 ) : index ), left_items , left_children , child_items , child_children ));
                                                                                                });
                                                                                              }) : ({ /* cicili#Let6690 */
                                                                                                // ----------
                                                                                                ;
                                                                                                ({ /* cicili#Progn6692 */
                                                                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL1-1"));
                                                                                                });
                                                                                              }));
                                                                                          });
                                                                                        }));
                                                                                    });
                                                                                  });
                                                                                }) : ({ /* cicili#Let6699 */
                                                                                  // ----------
                                                                                  ;
                                                                                  ({ /* cicili#Progn6701 */
                                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL1"));
                                                                                  });
                                                                                }));
                                                                            });
                                                                          });
                                                                        });
                                                                      }) : ({ /* cicili#Let6708 */
                                                                        // ----------
                                                                        ;
                                                                        ({ /* cicili#Progn6710 */
                                                                          ({ /* cicili#Let6714 */
                                                                            __auto_type match6713  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                            typeof((((match6713 . __h_data ). Just ). __h_0_mem )) wright ;
                                                                            // ----------
                                                                            ;
                                                                            ({ /* cicili#Let6717 */
                                                                              bool __h_case_result  = (true  &&  (((match6713 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6718 */
                                                                                    (wright  =  (((match6713 . __h_data ). Just ). __h_0_mem ) );
                                                                                    true ;
                                                                                  }) ) );
                                                                              // ----------
                                                                              
                                                                              ((__h_case_result ) ? ({ /* cicili#Progn6723 */
                                                                                  ({ /* cicili#Let6726 */
                                                                                    __auto_type __h_matchbox  = wright ;
                                                                                    // ----------
                                                                                    ({ /* cicili#Let6730 */
                                                                                      __auto_type match6729  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                      typeof((((match6729 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                      // ----------
                                                                                      ;
                                                                                      ({ /* cicili#Let6733 */
                                                                                        bool __h_case_result  = (true  &&  (((match6729 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6734 */
                                                                                              (unboxed  =  (((match6729 . __h_data ). Just ). __h_0_mem ) );
                                                                                              true ;
                                                                                            }) ) );
                                                                                        // ----------
                                                                                        
                                                                                        ((__h_case_result ) ? ({ /* cicili#Progn6739 */
                                                                                            ({ /* cicili#Let6743 */
                                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) right_items ;
                                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) right_children ;
                                                                                              // ----------
                                                                                              ;
                                                                                              ({ /* cicili#Let6745 */
                                                                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn6746 */
                                                                                                        (right_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                                        true ;
                                                                                                      }) &&  ({ /* cicili#Progn6748 */
                                                                                                        (right_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                                        true ;
                                                                                                      }) ) ) );
                                                                                                // ----------
                                                                                                
                                                                                                ((__h_case_result ) ? ({ /* cicili#Progn6753 */
                                                                                                    ({ /* cicili#Let6756 */
                                                                                                      __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6758 */
                                                                                                        __auto_type nchild  = nchild ;
                                                                                                        // ----------
                                                                                                        ((void)(nchild -> __h_table -> freeClass ));
                                                                                                        nchild ;
                                                                                                      });
                                                                                                      // ----------
                                                                                                      Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), index , child_items , child_children , right_items , right_children ));
                                                                                                    });
                                                                                                  }) : ({ /* cicili#Let6766 */
                                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) right_items ;
                                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) right_children ;
                                                                                                    // ----------
                                                                                                    ;
                                                                                                    ({ /* cicili#Let6768 */
                                                                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn6769 */
                                                                                                              (right_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                              true ;
                                                                                                            }) &&  ({ /* cicili#Progn6771 */
                                                                                                              (right_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                              true ;
                                                                                                            }) ) ) );
                                                                                                      // ----------
                                                                                                      
                                                                                                      ((__h_case_result ) ? ({ /* cicili#Progn6776 */
                                                                                                          ({ /* cicili#Let6779 */
                                                                                                            __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6781 */
                                                                                                              __auto_type nchild  = nchild ;
                                                                                                              // ----------
                                                                                                              ((void)(nchild -> __h_table -> freeClass ));
                                                                                                              nchild ;
                                                                                                            });
                                                                                                            // ----------
                                                                                                            Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), index , child_items , child_children , right_items , right_children ));
                                                                                                          });
                                                                                                        }) : ({ /* cicili#Let6789 */
                                                                                                          // ----------
                                                                                                          ;
                                                                                                          ({ /* cicili#Progn6791 */
                                                                                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR2-1"));
                                                                                                          });
                                                                                                        }));
                                                                                                    });
                                                                                                  }));
                                                                                              });
                                                                                            });
                                                                                          }) : ({ /* cicili#Let6798 */
                                                                                            // ----------
                                                                                            ;
                                                                                            ({ /* cicili#Progn6800 */
                                                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR2"));
                                                                                            });
                                                                                          }));
                                                                                      });
                                                                                    });
                                                                                  });
                                                                                }) : ({ /* cicili#Let6807 */
                                                                                  // ----------
                                                                                  ;
                                                                                  ({ /* cicili#Progn6809 */
                                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR1"));
                                                                                  });
                                                                                }));
                                                                            });
                                                                          });
                                                                        });
                                                                      }));
                                                                  });
                                                                });
                                                              }) : ({ /* cicili#Let6816 */
                                                                // ----------
                                                                ;
                                                                ({ /* cicili#Progn6818 */
                                                                  Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let6826 */
                                                                      __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6828 */
                                                                        __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                                        // ----------
                                                                        ((void)((r1 . __h_table )-> freeData ));
                                                                        r1 ;
                                                                      });
                                                                      __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6832 */
                                                                        __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                                                                        // ----------
                                                                        ((void)(r2 -> __h_table -> freeClass ));
                                                                        r2 ;
                                                                      });
                                                                      // ----------
                                                                      fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6841 */
                                                                          Rc_BTree_int_User __ciciliC_6840 (Rc_BTree_int_User __h_value ) {
                                                                            return clone_Rc_BTree_int_User (__h_value );
                                                                          }
                                                                          __ciciliC_6840 ;
                                                                        }), r2 );
                                                                    })));
                                                                });
                                                              }));
                                                          });
                                                        });
                                                      }) : ({ /* cicili#Let6848 */
                                                        __auto_type left  = match6587 ;
                                                        // ----------
                                                        ;
                                                        ({ /* cicili#Progn6850 */
                                                          left ;
                                                        });
                                                      }));
                                                  });
                                                });
                                              }) : ({ /* cicili#Let6854 */
                                                // ----------
                                                ;
                                                ({ /* cicili#Let6856 */
                                                  bool __h_case_result  = (true  &&  ((tr -> __h_ctor ) ==  __h_Internal_t  ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn6860 */
                                                      ({ /* cicili#Let6864 */
                                                        __auto_type match6863  = deleteWithParent_BTree_int_User (tree , (((index  >  0 )) ? (index  -  1 ) : index ), index , tr , skey , callback );
                                                        typeof((((match6863 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                        // ----------
                                                        ;
                                                        ({ /* cicili#Let6867 */
                                                          bool __h_case_result  = (true  &&  (((match6863 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn6868 */
                                                                (nchild  =  (((match6863 . __h_data ). Right ). __h_0_mem ) );
                                                                true ;
                                                              }) ) );
                                                          // ----------
                                                          
                                                          ((__h_case_result ) ? ({ /* cicili#Progn6873 */
                                                              ({ /* cicili#Let6877 */
                                                                typeof((((nchild -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                                                typeof((((nchild -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                                                // ----------
                                                                ;
                                                                ({ /* cicili#Let6879 */
                                                                  bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn6880 */
                                                                          (child_items  =  (((nchild -> __h_data ). Branch ). __h_0_mem ) );
                                                                          true ;
                                                                        }) &&  ({ /* cicili#Progn6882 */
                                                                          (child_children  =  (((nchild -> __h_data ). Branch ). __h_1_mem ) );
                                                                          true ;
                                                                        }) ) ) );
                                                                  // ----------
                                                                  
                                                                  ((__h_case_result ) ? ({ /* cicili#Progn6887 */
                                                                      ({ /* cicili#Let6891 */
                                                                        __auto_type match6890  = nth_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                                        typeof((((match6890 . __h_data ). Just ). __h_0_mem )) wleft ;
                                                                        // ----------
                                                                        ;
                                                                        ({ /* cicili#Let6894 */
                                                                          bool __h_case_result  = (true  &&  (((match6890 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6895 */
                                                                                (wleft  =  (((match6890 . __h_data ). Just ). __h_0_mem ) );
                                                                                true ;
                                                                              }) ) );
                                                                          // ----------
                                                                          
                                                                          ((__h_case_result ) ? ({ /* cicili#Progn6900 */
                                                                              ({ /* cicili#Let6903 */
                                                                                __auto_type __h_matchbox  = wleft ;
                                                                                // ----------
                                                                                ({ /* cicili#Let6907 */
                                                                                  __auto_type match6906  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                  typeof((((match6906 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                  // ----------
                                                                                  ;
                                                                                  ({ /* cicili#Let6910 */
                                                                                    bool __h_case_result  = (true  &&  (((match6906 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6911 */
                                                                                          (unboxed  =  (((match6906 . __h_data ). Just ). __h_0_mem ) );
                                                                                          true ;
                                                                                        }) ) );
                                                                                    // ----------
                                                                                    
                                                                                    ((__h_case_result ) ? ({ /* cicili#Progn6916 */
                                                                                        ({ /* cicili#Let6920 */
                                                                                          typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) left_items ;
                                                                                          typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) left_children ;
                                                                                          // ----------
                                                                                          ;
                                                                                          ({ /* cicili#Let6922 */
                                                                                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn6923 */
                                                                                                    (left_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                                    true ;
                                                                                                  }) &&  ({ /* cicili#Progn6925 */
                                                                                                    (left_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                                    true ;
                                                                                                  }) ) ) );
                                                                                            // ----------
                                                                                            
                                                                                            ((__h_case_result ) ? ({ /* cicili#Progn6930 */
                                                                                                ({ /* cicili#Let6933 */
                                                                                                  __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6935 */
                                                                                                    __auto_type nchild  = nchild ;
                                                                                                    // ----------
                                                                                                    ((void)(nchild -> __h_table -> freeClass ));
                                                                                                    nchild ;
                                                                                                  });
                                                                                                  // ----------
                                                                                                  Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), (((index  >  0 )) ? (index  -  1 ) : index ), left_items , left_children , child_items , child_children ));
                                                                                                });
                                                                                              }) : ({ /* cicili#Let6943 */
                                                                                                typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) left_items ;
                                                                                                typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) left_children ;
                                                                                                // ----------
                                                                                                ;
                                                                                                ({ /* cicili#Let6945 */
                                                                                                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn6946 */
                                                                                                          (left_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                          true ;
                                                                                                        }) &&  ({ /* cicili#Progn6948 */
                                                                                                          (left_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                          true ;
                                                                                                        }) ) ) );
                                                                                                  // ----------
                                                                                                  
                                                                                                  ((__h_case_result ) ? ({ /* cicili#Progn6953 */
                                                                                                      ({ /* cicili#Let6956 */
                                                                                                        __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6958 */
                                                                                                          __auto_type nchild  = nchild ;
                                                                                                          // ----------
                                                                                                          ((void)(nchild -> __h_table -> freeClass ));
                                                                                                          nchild ;
                                                                                                        });
                                                                                                        // ----------
                                                                                                        Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), (((index  >  0 )) ? (index  -  1 ) : index ), left_items , left_children , child_items , child_children ));
                                                                                                      });
                                                                                                    }) : ({ /* cicili#Let6966 */
                                                                                                      // ----------
                                                                                                      ;
                                                                                                      ({ /* cicili#Progn6968 */
                                                                                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL1-1"));
                                                                                                      });
                                                                                                    }));
                                                                                                });
                                                                                              }));
                                                                                          });
                                                                                        });
                                                                                      }) : ({ /* cicili#Let6975 */
                                                                                        // ----------
                                                                                        ;
                                                                                        ({ /* cicili#Progn6977 */
                                                                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL1"));
                                                                                        });
                                                                                      }));
                                                                                  });
                                                                                });
                                                                              });
                                                                            }) : ({ /* cicili#Let6984 */
                                                                              // ----------
                                                                              ;
                                                                              ({ /* cicili#Progn6986 */
                                                                                ({ /* cicili#Let6990 */
                                                                                  __auto_type match6989  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                                  typeof((((match6989 . __h_data ). Just ). __h_0_mem )) wright ;
                                                                                  // ----------
                                                                                  ;
                                                                                  ({ /* cicili#Let6993 */
                                                                                    bool __h_case_result  = (true  &&  (((match6989 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6994 */
                                                                                          (wright  =  (((match6989 . __h_data ). Just ). __h_0_mem ) );
                                                                                          true ;
                                                                                        }) ) );
                                                                                    // ----------
                                                                                    
                                                                                    ((__h_case_result ) ? ({ /* cicili#Progn6999 */
                                                                                        ({ /* cicili#Let7002 */
                                                                                          __auto_type __h_matchbox  = wright ;
                                                                                          // ----------
                                                                                          ({ /* cicili#Let7006 */
                                                                                            __auto_type match7005  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                            typeof((((match7005 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                            // ----------
                                                                                            ;
                                                                                            ({ /* cicili#Let7009 */
                                                                                              bool __h_case_result  = (true  &&  (((match7005 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7010 */
                                                                                                    (unboxed  =  (((match7005 . __h_data ). Just ). __h_0_mem ) );
                                                                                                    true ;
                                                                                                  }) ) );
                                                                                              // ----------
                                                                                              
                                                                                              ((__h_case_result ) ? ({ /* cicili#Progn7015 */
                                                                                                  ({ /* cicili#Let7019 */
                                                                                                    typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) right_items ;
                                                                                                    typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) right_children ;
                                                                                                    // ----------
                                                                                                    ;
                                                                                                    ({ /* cicili#Let7021 */
                                                                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn7022 */
                                                                                                              (right_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                                              true ;
                                                                                                            }) &&  ({ /* cicili#Progn7024 */
                                                                                                              (right_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                                              true ;
                                                                                                            }) ) ) );
                                                                                                      // ----------
                                                                                                      
                                                                                                      ((__h_case_result ) ? ({ /* cicili#Progn7029 */
                                                                                                          ({ /* cicili#Let7032 */
                                                                                                            __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7034 */
                                                                                                              __auto_type nchild  = nchild ;
                                                                                                              // ----------
                                                                                                              ((void)(nchild -> __h_table -> freeClass ));
                                                                                                              nchild ;
                                                                                                            });
                                                                                                            // ----------
                                                                                                            Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), index , child_items , child_children , right_items , right_children ));
                                                                                                          });
                                                                                                        }) : ({ /* cicili#Let7042 */
                                                                                                          typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) right_items ;
                                                                                                          typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) right_children ;
                                                                                                          // ----------
                                                                                                          ;
                                                                                                          ({ /* cicili#Let7044 */
                                                                                                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn7045 */
                                                                                                                    (right_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                                    true ;
                                                                                                                  }) &&  ({ /* cicili#Progn7047 */
                                                                                                                    (right_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                                    true ;
                                                                                                                  }) ) ) );
                                                                                                            // ----------
                                                                                                            
                                                                                                            ((__h_case_result ) ? ({ /* cicili#Progn7052 */
                                                                                                                ({ /* cicili#Let7055 */
                                                                                                                  __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7057 */
                                                                                                                    __auto_type nchild  = nchild ;
                                                                                                                    // ----------
                                                                                                                    ((void)(nchild -> __h_table -> freeClass ));
                                                                                                                    nchild ;
                                                                                                                  });
                                                                                                                  // ----------
                                                                                                                  Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), index , child_items , child_children , right_items , right_children ));
                                                                                                                });
                                                                                                              }) : ({ /* cicili#Let7065 */
                                                                                                                // ----------
                                                                                                                ;
                                                                                                                ({ /* cicili#Progn7067 */
                                                                                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR2-1"));
                                                                                                                });
                                                                                                              }));
                                                                                                          });
                                                                                                        }));
                                                                                                    });
                                                                                                  });
                                                                                                }) : ({ /* cicili#Let7074 */
                                                                                                  // ----------
                                                                                                  ;
                                                                                                  ({ /* cicili#Progn7076 */
                                                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR2"));
                                                                                                  });
                                                                                                }));
                                                                                            });
                                                                                          });
                                                                                        });
                                                                                      }) : ({ /* cicili#Let7083 */
                                                                                        // ----------
                                                                                        ;
                                                                                        ({ /* cicili#Progn7085 */
                                                                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR1"));
                                                                                        });
                                                                                      }));
                                                                                  });
                                                                                });
                                                                              });
                                                                            }));
                                                                        });
                                                                      });
                                                                    }) : ({ /* cicili#Let7092 */
                                                                      // ----------
                                                                      ;
                                                                      ({ /* cicili#Progn7094 */
                                                                        Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let7102 */
                                                                            __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7104 */
                                                                              __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                                              // ----------
                                                                              ((void)((r1 . __h_table )-> freeData ));
                                                                              r1 ;
                                                                            });
                                                                            __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7108 */
                                                                              __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                                                                              // ----------
                                                                              ((void)(r2 -> __h_table -> freeClass ));
                                                                              r2 ;
                                                                            });
                                                                            // ----------
                                                                            fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn7117 */
                                                                                Rc_BTree_int_User __ciciliC_7116 (Rc_BTree_int_User __h_value ) {
                                                                                  return clone_Rc_BTree_int_User (__h_value );
                                                                                }
                                                                                __ciciliC_7116 ;
                                                                              }), r2 );
                                                                          })));
                                                                      });
                                                                    }));
                                                                });
                                                              });
                                                            }) : ({ /* cicili#Let7124 */
                                                              __auto_type left  = match6863 ;
                                                              // ----------
                                                              ;
                                                              ({ /* cicili#Progn7126 */
                                                                left ;
                                                              });
                                                            }));
                                                        });
                                                      });
                                                    }) : ({ /* cicili#Let7130 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn7132 */
                                                        ({ /* cicili#Let7136 */
                                                          __auto_type match7135  = deleteWithParent_BTree_int_User (tree , (((index  >  0 )) ? (index  -  1 ) : index ), index , tr , skey , callback );
                                                          typeof((((match7135 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                          // ----------
                                                          ;
                                                          ({ /* cicili#Let7139 */
                                                            bool __h_case_result  = (true  &&  (((match7135 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn7140 */
                                                                  (nchild  =  (((match7135 . __h_data ). Right ). __h_0_mem ) );
                                                                  true ;
                                                                }) ) );
                                                            // ----------
                                                            
                                                            ((__h_case_result ) ? ({ /* cicili#Progn7145 */
                                                                borrowLeaf_BTree_int_User (items , children , wleft , current , index , nchild , callback );
                                                              }) : ({ /* cicili#Let7150 */
                                                                __auto_type left  = match7135 ;
                                                                // ----------
                                                                ;
                                                                ({ /* cicili#Progn7152 */
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
                                      }) : ({ /* cicili#Let7156 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn7158 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CHILD (head , index ));
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let7165 */
                                // ----------
                                ;
                                ({ /* cicili#Progn7167 */
                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_NOT_FOUND (skey ));
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let7174 */
                        // ----------
                        ;
                        ({ /* cicili#Let7176 */
                          bool __h_case_result  = (true  &&  ((match6541 . __h_ctor ) ==  __h_EQ_t  ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn7180 */
                              ({ /* cicili#Let7183 */
                                __auto_type result  = borrowInternal_BTree_int_User (tree , items , children , current , index , callback );
                                // ----------
                                { /* cicili#Let7188 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Let7190 */
                                    bool __h_case_result  = (true  &&  ((result . __h_ctor ) ==  __h_Right_t  ) );
                                    // ----------
                                    
                                    if (__h_case_result )
                                      { /* cicili#Block7195 */
                                        if (callback )
                                          { /* cicili#Block7199 */
                                            callback (head );
                                          }
                                      }
                                  });
                                }
                                result ;
                              });
                            }) : ({ /* cicili#Let7203 */
                              // ----------
                              ;
                              ({ /* cicili#Progn7205 */
                                deleteInternal (tree , items , children , Just_List_BTree_int_User_pair_t (current ), tail , (index  +  1 ));
                              });
                            }));
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let7210 */
                // ----------
                ;
                ({ /* cicili#Progn7212 */
                  ({ /* cicili#Let7216 */
                    __auto_type match7215  = nth_List_Rc_BTree_int_User (index , children );
                    typeof((((match7215 . __h_data ). Just ). __h_0_mem )) child ;
                    // ----------
                    ;
                    ({ /* cicili#Let7219 */
                      bool __h_case_result  = (true  &&  (((match7215 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7220 */
                            (child  =  (((match7215 . __h_data ). Just ). __h_0_mem ) );
                            true ;
                          }) ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* cicili#Progn7225 */
                          ({ /* cicili#Let7229 */
                            __auto_type match7228  = get_Rc_BTree_int_User (child );
                            typeof((((match7228 . __h_data ). Just ). __h_0_mem )) tr ;
                            // ----------
                            ;
                            ({ /* cicili#Let7232 */
                              bool __h_case_result  = (true  &&  (((match7228 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7233 */
                                    (tr  =  (((match7228 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* cicili#Progn7238 */
                                  ({ /* cicili#Let7242 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Let7244 */
                                      bool __h_case_result  = (true  &&  ((tr -> __h_ctor ) ==  __h_Branch_t  ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn7248 */
                                          ({ /* cicili#Let7252 */
                                            __auto_type match7251  = deleteWithParent_BTree_int_User (tree , (index  -  1 ), index , tr , skey , callback );
                                            typeof((((match7251 . __h_data ). Right ). __h_0_mem )) nchild ;
                                            // ----------
                                            ;
                                            ({ /* cicili#Let7255 */
                                              bool __h_case_result  = (true  &&  (((match7251 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn7256 */
                                                    (nchild  =  (((match7251 . __h_data ). Right ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              
                                              ((__h_case_result ) ? ({ /* cicili#Progn7261 */
                                                  ({ /* cicili#Let7265 */
                                                    typeof((((nchild -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                                    typeof((((nchild -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Let7267 */
                                                      bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn7268 */
                                                              (child_items  =  (((nchild -> __h_data ). Branch ). __h_0_mem ) );
                                                              true ;
                                                            }) &&  ({ /* cicili#Progn7270 */
                                                              (child_children  =  (((nchild -> __h_data ). Branch ). __h_1_mem ) );
                                                              true ;
                                                            }) ) ) );
                                                      // ----------
                                                      
                                                      ((__h_case_result ) ? ({ /* cicili#Progn7275 */
                                                          ({ /* cicili#Let7279 */
                                                            __auto_type match7278  = nth_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                            typeof((((match7278 . __h_data ). Just ). __h_0_mem )) wleft ;
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Let7282 */
                                                              bool __h_case_result  = (true  &&  (((match7278 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7283 */
                                                                    (wleft  =  (((match7278 . __h_data ). Just ). __h_0_mem ) );
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              
                                                              ((__h_case_result ) ? ({ /* cicili#Progn7288 */
                                                                  ({ /* cicili#Let7291 */
                                                                    __auto_type __h_matchbox  = wleft ;
                                                                    // ----------
                                                                    ({ /* cicili#Let7295 */
                                                                      __auto_type match7294  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                      typeof((((match7294 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                      // ----------
                                                                      ;
                                                                      ({ /* cicili#Let7298 */
                                                                        bool __h_case_result  = (true  &&  (((match7294 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7299 */
                                                                              (unboxed  =  (((match7294 . __h_data ). Just ). __h_0_mem ) );
                                                                              true ;
                                                                            }) ) );
                                                                        // ----------
                                                                        
                                                                        ((__h_case_result ) ? ({ /* cicili#Progn7304 */
                                                                            ({ /* cicili#Let7308 */
                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) left_items ;
                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) left_children ;
                                                                              // ----------
                                                                              ;
                                                                              ({ /* cicili#Let7310 */
                                                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn7311 */
                                                                                        (left_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                        true ;
                                                                                      }) &&  ({ /* cicili#Progn7313 */
                                                                                        (left_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                        true ;
                                                                                      }) ) ) );
                                                                                // ----------
                                                                                
                                                                                ((__h_case_result ) ? ({ /* cicili#Progn7318 */
                                                                                    ({ /* cicili#Let7321 */
                                                                                      __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7323 */
                                                                                        __auto_type nchild  = nchild ;
                                                                                        // ----------
                                                                                        ((void)(nchild -> __h_table -> freeClass ));
                                                                                        nchild ;
                                                                                      });
                                                                                      // ----------
                                                                                      Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), (index  -  1 ), left_items , left_children , child_items , child_children ));
                                                                                    });
                                                                                  }) : ({ /* cicili#Let7331 */
                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) left_items ;
                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) left_children ;
                                                                                    // ----------
                                                                                    ;
                                                                                    ({ /* cicili#Let7333 */
                                                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn7334 */
                                                                                              (left_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                              true ;
                                                                                            }) &&  ({ /* cicili#Progn7336 */
                                                                                              (left_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                              true ;
                                                                                            }) ) ) );
                                                                                      // ----------
                                                                                      
                                                                                      ((__h_case_result ) ? ({ /* cicili#Progn7341 */
                                                                                          ({ /* cicili#Let7344 */
                                                                                            __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7346 */
                                                                                              __auto_type nchild  = nchild ;
                                                                                              // ----------
                                                                                              ((void)(nchild -> __h_table -> freeClass ));
                                                                                              nchild ;
                                                                                            });
                                                                                            // ----------
                                                                                            Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), (index  -  1 ), left_items , left_children , child_items , child_children ));
                                                                                          });
                                                                                        }) : ({ /* cicili#Let7354 */
                                                                                          // ----------
                                                                                          ;
                                                                                          ({ /* cicili#Progn7356 */
                                                                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL111"));
                                                                                          });
                                                                                        }));
                                                                                    });
                                                                                  }));
                                                                              });
                                                                            });
                                                                          }) : ({ /* cicili#Let7363 */
                                                                            // ----------
                                                                            ;
                                                                            ({ /* cicili#Progn7365 */
                                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL11"));
                                                                            });
                                                                          }));
                                                                      });
                                                                    });
                                                                  });
                                                                }) : ({ /* cicili#Let7372 */
                                                                  // ----------
                                                                  ;
                                                                  ({ /* cicili#Progn7374 */
                                                                    ({ /* cicili#Let7378 */
                                                                      __auto_type match7377  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                      typeof((((match7377 . __h_data ). Just ). __h_0_mem )) wright ;
                                                                      // ----------
                                                                      ;
                                                                      ({ /* cicili#Let7381 */
                                                                        bool __h_case_result  = (true  &&  (((match7377 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7382 */
                                                                              (wright  =  (((match7377 . __h_data ). Just ). __h_0_mem ) );
                                                                              true ;
                                                                            }) ) );
                                                                        // ----------
                                                                        
                                                                        ((__h_case_result ) ? ({ /* cicili#Progn7387 */
                                                                            ({ /* cicili#Let7390 */
                                                                              __auto_type __h_matchbox  = wright ;
                                                                              // ----------
                                                                              ({ /* cicili#Let7394 */
                                                                                __auto_type match7393  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                typeof((((match7393 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                // ----------
                                                                                ;
                                                                                ({ /* cicili#Let7397 */
                                                                                  bool __h_case_result  = (true  &&  (((match7393 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7398 */
                                                                                        (unboxed  =  (((match7393 . __h_data ). Just ). __h_0_mem ) );
                                                                                        true ;
                                                                                      }) ) );
                                                                                  // ----------
                                                                                  
                                                                                  ((__h_case_result ) ? ({ /* cicili#Progn7403 */
                                                                                      ({ /* cicili#Let7407 */
                                                                                        typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) right_items ;
                                                                                        typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) right_children ;
                                                                                        // ----------
                                                                                        ;
                                                                                        ({ /* cicili#Let7409 */
                                                                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn7410 */
                                                                                                  (right_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                                  true ;
                                                                                                }) &&  ({ /* cicili#Progn7412 */
                                                                                                  (right_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                                  true ;
                                                                                                }) ) ) );
                                                                                          // ----------
                                                                                          
                                                                                          ((__h_case_result ) ? ({ /* cicili#Progn7417 */
                                                                                              ({ /* cicili#Let7420 */
                                                                                                __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7422 */
                                                                                                  __auto_type nchild  = nchild ;
                                                                                                  // ----------
                                                                                                  ((void)(nchild -> __h_table -> freeClass ));
                                                                                                  nchild ;
                                                                                                });
                                                                                                // ----------
                                                                                                Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), index , child_items , child_children , right_items , right_children ));
                                                                                              });
                                                                                            }) : ({ /* cicili#Let7430 */
                                                                                              typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) right_items ;
                                                                                              typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) right_children ;
                                                                                              // ----------
                                                                                              ;
                                                                                              ({ /* cicili#Let7432 */
                                                                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn7433 */
                                                                                                        (right_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                        true ;
                                                                                                      }) &&  ({ /* cicili#Progn7435 */
                                                                                                        (right_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                        true ;
                                                                                                      }) ) ) );
                                                                                                // ----------
                                                                                                
                                                                                                ((__h_case_result ) ? ({ /* cicili#Progn7440 */
                                                                                                    ({ /* cicili#Let7443 */
                                                                                                      __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7445 */
                                                                                                        __auto_type nchild  = nchild ;
                                                                                                        // ----------
                                                                                                        ((void)(nchild -> __h_table -> freeClass ));
                                                                                                        nchild ;
                                                                                                      });
                                                                                                      // ----------
                                                                                                      Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), index , child_items , child_children , right_items , right_children ));
                                                                                                    });
                                                                                                  }) : ({ /* cicili#Let7453 */
                                                                                                    // ----------
                                                                                                    ;
                                                                                                    ({ /* cicili#Progn7455 */
                                                                                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR222"));
                                                                                                    });
                                                                                                  }));
                                                                                              });
                                                                                            }));
                                                                                        });
                                                                                      });
                                                                                    }) : ({ /* cicili#Let7462 */
                                                                                      // ----------
                                                                                      ;
                                                                                      ({ /* cicili#Progn7464 */
                                                                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR22"));
                                                                                      });
                                                                                    }));
                                                                                });
                                                                              });
                                                                            });
                                                                          }) : ({ /* cicili#Let7471 */
                                                                            // ----------
                                                                            ;
                                                                            ({ /* cicili#Progn7473 */
                                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR221"));
                                                                            });
                                                                          }));
                                                                      });
                                                                    });
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        }) : ({ /* cicili#Let7480 */
                                                          // ----------
                                                          ;
                                                          ({ /* cicili#Progn7482 */
                                                            Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let7490 */
                                                                __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7492 */
                                                                  __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                                  // ----------
                                                                  ((void)((r1 . __h_table )-> freeData ));
                                                                  r1 ;
                                                                });
                                                                __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7496 */
                                                                  __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                                                                  // ----------
                                                                  ((void)(r2 -> __h_table -> freeClass ));
                                                                  r2 ;
                                                                });
                                                                // ----------
                                                                fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn7505 */
                                                                    Rc_BTree_int_User __ciciliC_7504 (Rc_BTree_int_User __h_value ) {
                                                                      return clone_Rc_BTree_int_User (__h_value );
                                                                    }
                                                                    __ciciliC_7504 ;
                                                                  }), r2 );
                                                              })));
                                                          });
                                                        }));
                                                    });
                                                  });
                                                }) : ({ /* cicili#Let7512 */
                                                  __auto_type left  = match7251 ;
                                                  // ----------
                                                  ;
                                                  ({ /* cicili#Progn7514 */
                                                    left ;
                                                  });
                                                }));
                                            });
                                          });
                                        }) : ({ /* cicili#Let7518 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Let7520 */
                                            bool __h_case_result  = (true  &&  ((tr -> __h_ctor ) ==  __h_Internal_t  ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* cicili#Progn7524 */
                                                ({ /* cicili#Let7528 */
                                                  __auto_type match7527  = deleteWithParent_BTree_int_User (tree , (index  -  1 ), index , tr , skey , callback );
                                                  typeof((((match7527 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                  // ----------
                                                  ;
                                                  ({ /* cicili#Let7531 */
                                                    bool __h_case_result  = (true  &&  (((match7527 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn7532 */
                                                          (nchild  =  (((match7527 . __h_data ). Right ). __h_0_mem ) );
                                                          true ;
                                                        }) ) );
                                                    // ----------
                                                    
                                                    ((__h_case_result ) ? ({ /* cicili#Progn7537 */
                                                        ({ /* cicili#Let7541 */
                                                          typeof((((nchild -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                                          typeof((((nchild -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                                          // ----------
                                                          ;
                                                          ({ /* cicili#Let7543 */
                                                            bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn7544 */
                                                                    (child_items  =  (((nchild -> __h_data ). Branch ). __h_0_mem ) );
                                                                    true ;
                                                                  }) &&  ({ /* cicili#Progn7546 */
                                                                    (child_children  =  (((nchild -> __h_data ). Branch ). __h_1_mem ) );
                                                                    true ;
                                                                  }) ) ) );
                                                            // ----------
                                                            
                                                            ((__h_case_result ) ? ({ /* cicili#Progn7551 */
                                                                ({ /* cicili#Let7555 */
                                                                  __auto_type match7554  = nth_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                                  typeof((((match7554 . __h_data ). Just ). __h_0_mem )) wleft ;
                                                                  // ----------
                                                                  ;
                                                                  ({ /* cicili#Let7558 */
                                                                    bool __h_case_result  = (true  &&  (((match7554 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7559 */
                                                                          (wleft  =  (((match7554 . __h_data ). Just ). __h_0_mem ) );
                                                                          true ;
                                                                        }) ) );
                                                                    // ----------
                                                                    
                                                                    ((__h_case_result ) ? ({ /* cicili#Progn7564 */
                                                                        ({ /* cicili#Let7567 */
                                                                          __auto_type __h_matchbox  = wleft ;
                                                                          // ----------
                                                                          ({ /* cicili#Let7571 */
                                                                            __auto_type match7570  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                            typeof((((match7570 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                            // ----------
                                                                            ;
                                                                            ({ /* cicili#Let7574 */
                                                                              bool __h_case_result  = (true  &&  (((match7570 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7575 */
                                                                                    (unboxed  =  (((match7570 . __h_data ). Just ). __h_0_mem ) );
                                                                                    true ;
                                                                                  }) ) );
                                                                              // ----------
                                                                              
                                                                              ((__h_case_result ) ? ({ /* cicili#Progn7580 */
                                                                                  ({ /* cicili#Let7584 */
                                                                                    typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) left_items ;
                                                                                    typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) left_children ;
                                                                                    // ----------
                                                                                    ;
                                                                                    ({ /* cicili#Let7586 */
                                                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn7587 */
                                                                                              (left_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                              true ;
                                                                                            }) &&  ({ /* cicili#Progn7589 */
                                                                                              (left_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                              true ;
                                                                                            }) ) ) );
                                                                                      // ----------
                                                                                      
                                                                                      ((__h_case_result ) ? ({ /* cicili#Progn7594 */
                                                                                          ({ /* cicili#Let7597 */
                                                                                            __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7599 */
                                                                                              __auto_type nchild  = nchild ;
                                                                                              // ----------
                                                                                              ((void)(nchild -> __h_table -> freeClass ));
                                                                                              nchild ;
                                                                                            });
                                                                                            // ----------
                                                                                            Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), (index  -  1 ), left_items , left_children , child_items , child_children ));
                                                                                          });
                                                                                        }) : ({ /* cicili#Let7607 */
                                                                                          typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) left_items ;
                                                                                          typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) left_children ;
                                                                                          // ----------
                                                                                          ;
                                                                                          ({ /* cicili#Let7609 */
                                                                                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn7610 */
                                                                                                    (left_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                    true ;
                                                                                                  }) &&  ({ /* cicili#Progn7612 */
                                                                                                    (left_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                    true ;
                                                                                                  }) ) ) );
                                                                                            // ----------
                                                                                            
                                                                                            ((__h_case_result ) ? ({ /* cicili#Progn7617 */
                                                                                                ({ /* cicili#Let7620 */
                                                                                                  __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7622 */
                                                                                                    __auto_type nchild  = nchild ;
                                                                                                    // ----------
                                                                                                    ((void)(nchild -> __h_table -> freeClass ));
                                                                                                    nchild ;
                                                                                                  });
                                                                                                  // ----------
                                                                                                  Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), (index  -  1 ), left_items , left_children , child_items , child_children ));
                                                                                                });
                                                                                              }) : ({ /* cicili#Let7630 */
                                                                                                // ----------
                                                                                                ;
                                                                                                ({ /* cicili#Progn7632 */
                                                                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL111"));
                                                                                                });
                                                                                              }));
                                                                                          });
                                                                                        }));
                                                                                    });
                                                                                  });
                                                                                }) : ({ /* cicili#Let7639 */
                                                                                  // ----------
                                                                                  ;
                                                                                  ({ /* cicili#Progn7641 */
                                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL11"));
                                                                                  });
                                                                                }));
                                                                            });
                                                                          });
                                                                        });
                                                                      }) : ({ /* cicili#Let7648 */
                                                                        // ----------
                                                                        ;
                                                                        ({ /* cicili#Progn7650 */
                                                                          ({ /* cicili#Let7654 */
                                                                            __auto_type match7653  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                            typeof((((match7653 . __h_data ). Just ). __h_0_mem )) wright ;
                                                                            // ----------
                                                                            ;
                                                                            ({ /* cicili#Let7657 */
                                                                              bool __h_case_result  = (true  &&  (((match7653 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7658 */
                                                                                    (wright  =  (((match7653 . __h_data ). Just ). __h_0_mem ) );
                                                                                    true ;
                                                                                  }) ) );
                                                                              // ----------
                                                                              
                                                                              ((__h_case_result ) ? ({ /* cicili#Progn7663 */
                                                                                  ({ /* cicili#Let7666 */
                                                                                    __auto_type __h_matchbox  = wright ;
                                                                                    // ----------
                                                                                    ({ /* cicili#Let7670 */
                                                                                      __auto_type match7669  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                      typeof((((match7669 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                      // ----------
                                                                                      ;
                                                                                      ({ /* cicili#Let7673 */
                                                                                        bool __h_case_result  = (true  &&  (((match7669 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7674 */
                                                                                              (unboxed  =  (((match7669 . __h_data ). Just ). __h_0_mem ) );
                                                                                              true ;
                                                                                            }) ) );
                                                                                        // ----------
                                                                                        
                                                                                        ((__h_case_result ) ? ({ /* cicili#Progn7679 */
                                                                                            ({ /* cicili#Let7683 */
                                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) right_items ;
                                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) right_children ;
                                                                                              // ----------
                                                                                              ;
                                                                                              ({ /* cicili#Let7685 */
                                                                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn7686 */
                                                                                                        (right_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                                        true ;
                                                                                                      }) &&  ({ /* cicili#Progn7688 */
                                                                                                        (right_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                                        true ;
                                                                                                      }) ) ) );
                                                                                                // ----------
                                                                                                
                                                                                                ((__h_case_result ) ? ({ /* cicili#Progn7693 */
                                                                                                    ({ /* cicili#Let7696 */
                                                                                                      __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7698 */
                                                                                                        __auto_type nchild  = nchild ;
                                                                                                        // ----------
                                                                                                        ((void)(nchild -> __h_table -> freeClass ));
                                                                                                        nchild ;
                                                                                                      });
                                                                                                      // ----------
                                                                                                      Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), index , child_items , child_children , right_items , right_children ));
                                                                                                    });
                                                                                                  }) : ({ /* cicili#Let7706 */
                                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) right_items ;
                                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) right_children ;
                                                                                                    // ----------
                                                                                                    ;
                                                                                                    ({ /* cicili#Let7708 */
                                                                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn7709 */
                                                                                                              (right_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                              true ;
                                                                                                            }) &&  ({ /* cicili#Progn7711 */
                                                                                                              (right_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                              true ;
                                                                                                            }) ) ) );
                                                                                                      // ----------
                                                                                                      
                                                                                                      ((__h_case_result ) ? ({ /* cicili#Progn7716 */
                                                                                                          ({ /* cicili#Let7719 */
                                                                                                            __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7721 */
                                                                                                              __auto_type nchild  = nchild ;
                                                                                                              // ----------
                                                                                                              ((void)(nchild -> __h_table -> freeClass ));
                                                                                                              nchild ;
                                                                                                            });
                                                                                                            // ----------
                                                                                                            Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), index , child_items , child_children , right_items , right_children ));
                                                                                                          });
                                                                                                        }) : ({ /* cicili#Let7729 */
                                                                                                          // ----------
                                                                                                          ;
                                                                                                          ({ /* cicili#Progn7731 */
                                                                                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR222"));
                                                                                                          });
                                                                                                        }));
                                                                                                    });
                                                                                                  }));
                                                                                              });
                                                                                            });
                                                                                          }) : ({ /* cicili#Let7738 */
                                                                                            // ----------
                                                                                            ;
                                                                                            ({ /* cicili#Progn7740 */
                                                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR22"));
                                                                                            });
                                                                                          }));
                                                                                      });
                                                                                    });
                                                                                  });
                                                                                }) : ({ /* cicili#Let7747 */
                                                                                  // ----------
                                                                                  ;
                                                                                  ({ /* cicili#Progn7749 */
                                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR221"));
                                                                                  });
                                                                                }));
                                                                            });
                                                                          });
                                                                        });
                                                                      }));
                                                                  });
                                                                });
                                                              }) : ({ /* cicili#Let7756 */
                                                                // ----------
                                                                ;
                                                                ({ /* cicili#Progn7758 */
                                                                  Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let7766 */
                                                                      __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7768 */
                                                                        __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                                        // ----------
                                                                        ((void)((r1 . __h_table )-> freeData ));
                                                                        r1 ;
                                                                      });
                                                                      __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7772 */
                                                                        __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                                                                        // ----------
                                                                        ((void)(r2 -> __h_table -> freeClass ));
                                                                        r2 ;
                                                                      });
                                                                      // ----------
                                                                      fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn7781 */
                                                                          Rc_BTree_int_User __ciciliC_7780 (Rc_BTree_int_User __h_value ) {
                                                                            return clone_Rc_BTree_int_User (__h_value );
                                                                          }
                                                                          __ciciliC_7780 ;
                                                                        }), r2 );
                                                                    })));
                                                                });
                                                              }));
                                                          });
                                                        });
                                                      }) : ({ /* cicili#Let7788 */
                                                        __auto_type left  = match7527 ;
                                                        // ----------
                                                        ;
                                                        ({ /* cicili#Progn7790 */
                                                          left ;
                                                        });
                                                      }));
                                                  });
                                                });
                                              }) : ({ /* cicili#Let7794 */
                                                // ----------
                                                ;
                                                ({ /* cicili#Progn7796 */
                                                  ({ /* cicili#Let7800 */
                                                    __auto_type match7799  = deleteWithParent_BTree_int_User (tree , (index  -  1 ), index , tr , skey , callback );
                                                    typeof((((match7799 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Let7803 */
                                                      bool __h_case_result  = (true  &&  (((match7799 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn7804 */
                                                            (nchild  =  (((match7799 . __h_data ). Right ). __h_0_mem ) );
                                                            true ;
                                                          }) ) );
                                                      // ----------
                                                      
                                                      ((__h_case_result ) ? ({ /* cicili#Progn7809 */
                                                          borrowLeaf_BTree_int_User (items , children , wleft , current , index , nchild , callback );
                                                        }) : ({ /* cicili#Let7814 */
                                                          __auto_type left  = match7799 ;
                                                          // ----------
                                                          ;
                                                          ({ /* cicili#Progn7816 */
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
                                }) : ({ /* cicili#Let7820 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Progn7822 */
                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CHILD (head , index ));
                                  });
                                }));
                            });
                          });
                        }) : ({ /* cicili#Let7829 */
                          // ----------
                          ;
                          ({ /* cicili#Progn7831 */
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
        ({ /* cicili#Let7840 */
          __auto_type rs  = ({ /* cicili#Let7843 */
            typeof((((result . __h_data ). Right ). __h_0_mem )) ntr ;
            // ----------
            ;
            ({ /* cicili#Let7845 */
              bool __h_case_result  = (true  &&  (((result . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn7846 */
                    (ntr  =  (((result . __h_data ). Right ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn7851 */
                  ({ /* cicili#Let7855 */
                    typeof((((ntr -> __h_data ). Branch ). __h_0_mem )) items ;
                    typeof((((ntr -> __h_data ). Branch ). __h_1_mem )) children ;
                    // ----------
                    ;
                    ({ /* cicili#Let7857 */
                      bool __h_case_result  = (true  &&  (((ntr -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn7858 */
                              (items  =  (((ntr -> __h_data ). Branch ). __h_0_mem ) );
                              true ;
                            }) &&  ({ /* cicili#Progn7860 */
                              (children  =  (((ntr -> __h_data ). Branch ). __h_1_mem ) );
                              true ;
                            }) ) ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* cicili#Progn7865 */
                          ({ /* cicili#Let7868 */
                            __auto_type items_len  = hasLen_List_BTree_int_User_pair_t (items , (L_BTree_int_User  -  1 ));
                            // ----------
                            (((items_len  ==  (L_BTree_int_User  -  1 ) )) ? result  : ({ /* cicili#Let7876 */
                                typeof((((wparent . __h_data ). Just ). __h_0_mem )) ptree ;
                                // ----------
                                ;
                                ({ /* cicili#Let7878 */
                                  bool __h_case_result  = (true  &&  (((wparent . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7879 */
                                        (ptree  =  (((wparent . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn7884 */
                                      ({ /* cicili#Let7888 */
                                        typeof((((ptree -> __h_data ). Branch ). __h_0_mem )) pitems ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let7890 */
                                          bool __h_case_result  = (true  &&  (((ptree -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn7891 */
                                                (pitems  =  (((ptree -> __h_data ). Branch ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn7896 */
                                              ({ /* cicili#Let7900 */
                                                __auto_type match7899  = nth_List_BTree_int_User_pair_t (pitem_index , pitems );
                                                typeof((((match7899 . __h_data ). Just ). __h_0_mem )) bitem ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let7903 */
                                                  bool __h_case_result  = (true  &&  (((match7899 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7904 */
                                                        (bitem  =  (((match7899 . __h_data ). Just ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn7909 */
                                                      ({ /* cicili#Let7912 */
                                                        __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7914 */
                                                          __auto_type ntr  = ntr ;
                                                          // ----------
                                                          ((void)(ntr -> __h_table -> freeClass ));
                                                          ntr ;
                                                        });
                                                        // ----------
                                                        Right_BTree_int_User_Error_BTree_int_User (Branch_BTree_int_User (insertAt_List_BTree_int_User_pair_t (items , bitem , ({ /* cicili#Let7924 */
                                                            __auto_type match7923  = compareKey (({ /* cicili#Let7927 */
                                                              typeof((bitem . __h_0_mem )) key ;
                                                              // ----------
                                                              ;
                                                              ({ /* cicili#Let7929 */
                                                                bool __h_case_result  = (true  &&  ({ /* cicili#Progn7930 */
                                                                    (key  =  (bitem . __h_0_mem ) );
                                                                    true ;
                                                                  }) );
                                                                // ----------
                                                                
                                                                ((__h_case_result ) ? ({ /* cicili#Progn7935 */
                                                                    key ;
                                                                  }) : ({ /* cicili#Let7939 */
                                                                    // ----------
                                                                    ;
                                                                    ({ /* cicili#Progn7941 */
                                                                      skey ;
                                                                    });
                                                                  }));
                                                              });
                                                            }), ({ /* cicili#Let7946 */
                                                              typeof((((items -> __h_data ). Cons ). __h_0_mem )) __h_match7944_0_arg ;
                                                              typeof((__h_match7944_0_arg . __h_0_mem )) key ;
                                                              // ----------
                                                              ;
                                                              ({ /* cicili#Let7948 */
                                                                bool __h_case_result  = (true  &&  (((items -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn7949 */
                                                                        (__h_match7944_0_arg  =  (((items -> __h_data ). Cons ). __h_0_mem ) );
                                                                        true ;
                                                                      }) &&  (true  &&  ({ /* cicili#Progn7951 */
                                                                          (key  =  (__h_match7944_0_arg . __h_0_mem ) );
                                                                          true ;
                                                                        }) ) ) ) );
                                                                // ----------
                                                                
                                                                ((__h_case_result ) ? ({ /* cicili#Progn7956 */
                                                                    key ;
                                                                  }) : ({ /* cicili#Let7960 */
                                                                    // ----------
                                                                    ;
                                                                    ({ /* cicili#Progn7962 */
                                                                      skey ;
                                                                    });
                                                                  }));
                                                              });
                                                            }));
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Let7965 */
                                                              bool __h_case_result  = (true  &&  ((match7923 . __h_ctor ) ==  __h_LT_t  ) );
                                                              // ----------
                                                              
                                                              ((__h_case_result ) ? ({ /* cicili#Progn7969 */
                                                                  0;
                                                                }) : ({ /* cicili#Let7973 */
                                                                  // ----------
                                                                  ;
                                                                  ({ /* cicili#Progn7975 */
                                                                    items_len ;
                                                                  });
                                                                }));
                                                            });
                                                          })), fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn7982 */
                                                            Rc_BTree_int_User __ciciliC_7981 (Rc_BTree_int_User __h_value ) {
                                                              return clone_Rc_BTree_int_User (__h_value );
                                                            }
                                                            __ciciliC_7981 ;
                                                          }), children )));
                                                      });
                                                    }) : ({ /* cicili#Let7989 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn7991 */
                                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 2"));
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let7998 */
                                              typeof((((ptree -> __h_data ). Internal ). __h_0_mem )) pitems ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let8000 */
                                                bool __h_case_result  = (true  &&  (((ptree -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn8001 */
                                                      (pitems  =  (((ptree -> __h_data ). Internal ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn8006 */
                                                    ({ /* cicili#Let8010 */
                                                      __auto_type match8009  = nth_List_BTree_int_User_pair_t (pitem_index , pitems );
                                                      typeof((((match8009 . __h_data ). Just ). __h_0_mem )) bitem ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let8013 */
                                                        bool __h_case_result  = (true  &&  (((match8009 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8014 */
                                                              (bitem  =  (((match8009 . __h_data ). Just ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn8019 */
                                                            ({ /* cicili#Let8022 */
                                                              __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8024 */
                                                                __auto_type ntr  = ntr ;
                                                                // ----------
                                                                ((void)(ntr -> __h_table -> freeClass ));
                                                                ntr ;
                                                              });
                                                              // ----------
                                                              Right_BTree_int_User_Error_BTree_int_User (Branch_BTree_int_User (insertAt_List_BTree_int_User_pair_t (items , bitem , ({ /* cicili#Let8034 */
                                                                  __auto_type match8033  = compareKey (({ /* cicili#Let8037 */
                                                                    typeof((bitem . __h_0_mem )) key ;
                                                                    // ----------
                                                                    ;
                                                                    ({ /* cicili#Let8039 */
                                                                      bool __h_case_result  = (true  &&  ({ /* cicili#Progn8040 */
                                                                          (key  =  (bitem . __h_0_mem ) );
                                                                          true ;
                                                                        }) );
                                                                      // ----------
                                                                      
                                                                      ((__h_case_result ) ? ({ /* cicili#Progn8045 */
                                                                          key ;
                                                                        }) : ({ /* cicili#Let8049 */
                                                                          // ----------
                                                                          ;
                                                                          ({ /* cicili#Progn8051 */
                                                                            skey ;
                                                                          });
                                                                        }));
                                                                    });
                                                                  }), ({ /* cicili#Let8056 */
                                                                    typeof((((items -> __h_data ). Cons ). __h_0_mem )) __h_match8054_0_arg ;
                                                                    typeof((__h_match8054_0_arg . __h_0_mem )) key ;
                                                                    // ----------
                                                                    ;
                                                                    ({ /* cicili#Let8058 */
                                                                      bool __h_case_result  = (true  &&  (((items -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn8059 */
                                                                              (__h_match8054_0_arg  =  (((items -> __h_data ). Cons ). __h_0_mem ) );
                                                                              true ;
                                                                            }) &&  (true  &&  ({ /* cicili#Progn8061 */
                                                                                (key  =  (__h_match8054_0_arg . __h_0_mem ) );
                                                                                true ;
                                                                              }) ) ) ) );
                                                                      // ----------
                                                                      
                                                                      ((__h_case_result ) ? ({ /* cicili#Progn8066 */
                                                                          key ;
                                                                        }) : ({ /* cicili#Let8070 */
                                                                          // ----------
                                                                          ;
                                                                          ({ /* cicili#Progn8072 */
                                                                            skey ;
                                                                          });
                                                                        }));
                                                                    });
                                                                  }));
                                                                  // ----------
                                                                  ;
                                                                  ({ /* cicili#Let8075 */
                                                                    bool __h_case_result  = (true  &&  ((match8033 . __h_ctor ) ==  __h_LT_t  ) );
                                                                    // ----------
                                                                    
                                                                    ((__h_case_result ) ? ({ /* cicili#Progn8079 */
                                                                        0;
                                                                      }) : ({ /* cicili#Let8083 */
                                                                        // ----------
                                                                        ;
                                                                        ({ /* cicili#Progn8085 */
                                                                          items_len ;
                                                                        });
                                                                      }));
                                                                  });
                                                                })), fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn8092 */
                                                                  Rc_BTree_int_User __ciciliC_8091 (Rc_BTree_int_User __h_value ) {
                                                                    return clone_Rc_BTree_int_User (__h_value );
                                                                  }
                                                                  __ciciliC_8091 ;
                                                                }), children )));
                                                            });
                                                          }) : ({ /* cicili#Let8099 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn8101 */
                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 2"));
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  }) : ({ /* cicili#Let8108 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn8110 */
                                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 1"));
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let8117 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn8119 */
                                        (((items_len  ==  0 )) ? ({ /* cicili#Let8124 */
                                            typeof((((children -> __h_data ). Cons ). __h_0_mem )) head ;
                                            // ----------
                                            ;
                                            ({ /* cicili#Let8126 */
                                              bool __h_case_result  = (true  &&  (((children -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn8127 */
                                                    (head  =  (((children -> __h_data ). Cons ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              
                                              ((__h_case_result ) ? ({ /* cicili#Progn8132 */
                                                  ({ /* cicili#Let8135 */
                                                    __auto_type __h_matchbox  = clone_Rc_BTree_int_User (head );
                                                    // ----------
                                                    ({ /* cicili#Let8140 */
                                                      __auto_type match8139  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                      typeof((((match8139 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let8143 */
                                                        bool __h_case_result  = (true  &&  (((match8139 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8144 */
                                                              (unboxed  =  (((match8139 . __h_data ). Just ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn8149 */
                                                            ({ /* cicili#Let8153 */
                                                              __auto_type chtr  = unboxed ;
                                                              // ----------
                                                              ;
                                                              ({ /* cicili#Progn8155 */
                                                                ({ /* cicili#Let8158 */
                                                                  __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8160 */
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
                                                          }) : ({ /* cicili#Let8167 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn8169 */
                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 3"));
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  });
                                                }) : ({ /* cicili#Let8176 */
                                                  // ----------
                                                  ;
                                                  ({ /* cicili#Progn8178 */
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
                        }) : ({ /* cicili#Let8182 */
                          typeof((((ntr -> __h_data ). Internal ). __h_0_mem )) items ;
                          typeof((((ntr -> __h_data ). Internal ). __h_1_mem )) children ;
                          // ----------
                          ;
                          ({ /* cicili#Let8184 */
                            bool __h_case_result  = (true  &&  (((ntr -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn8185 */
                                    (items  =  (((ntr -> __h_data ). Internal ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn8187 */
                                    (children  =  (((ntr -> __h_data ). Internal ). __h_1_mem ) );
                                    true ;
                                  }) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn8192 */
                                ({ /* cicili#Let8195 */
                                  __auto_type items_len  = hasLen_List_BTree_int_User_pair_t (items , (L_BTree_int_User  -  1 ));
                                  // ----------
                                  (((items_len  ==  (L_BTree_int_User  -  1 ) )) ? result  : ({ /* cicili#Let8203 */
                                      typeof((((wparent . __h_data ). Just ). __h_0_mem )) ptree ;
                                      // ----------
                                      ;
                                      ({ /* cicili#Let8205 */
                                        bool __h_case_result  = (true  &&  (((wparent . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8206 */
                                              (ptree  =  (((wparent . __h_data ). Just ). __h_0_mem ) );
                                              true ;
                                            }) ) );
                                        // ----------
                                        
                                        ((__h_case_result ) ? ({ /* cicili#Progn8211 */
                                            ({ /* cicili#Let8215 */
                                              typeof((((ptree -> __h_data ). Branch ). __h_0_mem )) pitems ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let8217 */
                                                bool __h_case_result  = (true  &&  (((ptree -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn8218 */
                                                      (pitems  =  (((ptree -> __h_data ). Branch ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn8223 */
                                                    ({ /* cicili#Let8227 */
                                                      __auto_type match8226  = nth_List_BTree_int_User_pair_t (pitem_index , pitems );
                                                      typeof((((match8226 . __h_data ). Just ). __h_0_mem )) bitem ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let8230 */
                                                        bool __h_case_result  = (true  &&  (((match8226 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8231 */
                                                              (bitem  =  (((match8226 . __h_data ). Just ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn8236 */
                                                            ({ /* cicili#Let8239 */
                                                              __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8241 */
                                                                __auto_type ntr  = ntr ;
                                                                // ----------
                                                                ((void)(ntr -> __h_table -> freeClass ));
                                                                ntr ;
                                                              });
                                                              // ----------
                                                              Right_BTree_int_User_Error_BTree_int_User (Branch_BTree_int_User (insertAt_List_BTree_int_User_pair_t (items , bitem , ({ /* cicili#Let8251 */
                                                                  __auto_type match8250  = compareKey (({ /* cicili#Let8254 */
                                                                    typeof((bitem . __h_0_mem )) key ;
                                                                    // ----------
                                                                    ;
                                                                    ({ /* cicili#Let8256 */
                                                                      bool __h_case_result  = (true  &&  ({ /* cicili#Progn8257 */
                                                                          (key  =  (bitem . __h_0_mem ) );
                                                                          true ;
                                                                        }) );
                                                                      // ----------
                                                                      
                                                                      ((__h_case_result ) ? ({ /* cicili#Progn8262 */
                                                                          key ;
                                                                        }) : ({ /* cicili#Let8266 */
                                                                          // ----------
                                                                          ;
                                                                          ({ /* cicili#Progn8268 */
                                                                            skey ;
                                                                          });
                                                                        }));
                                                                    });
                                                                  }), ({ /* cicili#Let8273 */
                                                                    typeof((((items -> __h_data ). Cons ). __h_0_mem )) __h_match8271_0_arg ;
                                                                    typeof((__h_match8271_0_arg . __h_0_mem )) key ;
                                                                    // ----------
                                                                    ;
                                                                    ({ /* cicili#Let8275 */
                                                                      bool __h_case_result  = (true  &&  (((items -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn8276 */
                                                                              (__h_match8271_0_arg  =  (((items -> __h_data ). Cons ). __h_0_mem ) );
                                                                              true ;
                                                                            }) &&  (true  &&  ({ /* cicili#Progn8278 */
                                                                                (key  =  (__h_match8271_0_arg . __h_0_mem ) );
                                                                                true ;
                                                                              }) ) ) ) );
                                                                      // ----------
                                                                      
                                                                      ((__h_case_result ) ? ({ /* cicili#Progn8283 */
                                                                          key ;
                                                                        }) : ({ /* cicili#Let8287 */
                                                                          // ----------
                                                                          ;
                                                                          ({ /* cicili#Progn8289 */
                                                                            skey ;
                                                                          });
                                                                        }));
                                                                    });
                                                                  }));
                                                                  // ----------
                                                                  ;
                                                                  ({ /* cicili#Let8292 */
                                                                    bool __h_case_result  = (true  &&  ((match8250 . __h_ctor ) ==  __h_LT_t  ) );
                                                                    // ----------
                                                                    
                                                                    ((__h_case_result ) ? ({ /* cicili#Progn8296 */
                                                                        0;
                                                                      }) : ({ /* cicili#Let8300 */
                                                                        // ----------
                                                                        ;
                                                                        ({ /* cicili#Progn8302 */
                                                                          items_len ;
                                                                        });
                                                                      }));
                                                                  });
                                                                })), fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn8309 */
                                                                  Rc_BTree_int_User __ciciliC_8308 (Rc_BTree_int_User __h_value ) {
                                                                    return clone_Rc_BTree_int_User (__h_value );
                                                                  }
                                                                  __ciciliC_8308 ;
                                                                }), children )));
                                                            });
                                                          }) : ({ /* cicili#Let8316 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn8318 */
                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 2"));
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  }) : ({ /* cicili#Let8325 */
                                                    typeof((((ptree -> __h_data ). Internal ). __h_0_mem )) pitems ;
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Let8327 */
                                                      bool __h_case_result  = (true  &&  (((ptree -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn8328 */
                                                            (pitems  =  (((ptree -> __h_data ). Internal ). __h_0_mem ) );
                                                            true ;
                                                          }) ) );
                                                      // ----------
                                                      
                                                      ((__h_case_result ) ? ({ /* cicili#Progn8333 */
                                                          ({ /* cicili#Let8337 */
                                                            __auto_type match8336  = nth_List_BTree_int_User_pair_t (pitem_index , pitems );
                                                            typeof((((match8336 . __h_data ). Just ). __h_0_mem )) bitem ;
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Let8340 */
                                                              bool __h_case_result  = (true  &&  (((match8336 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8341 */
                                                                    (bitem  =  (((match8336 . __h_data ). Just ). __h_0_mem ) );
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              
                                                              ((__h_case_result ) ? ({ /* cicili#Progn8346 */
                                                                  ({ /* cicili#Let8349 */
                                                                    __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8351 */
                                                                      __auto_type ntr  = ntr ;
                                                                      // ----------
                                                                      ((void)(ntr -> __h_table -> freeClass ));
                                                                      ntr ;
                                                                    });
                                                                    // ----------
                                                                    Right_BTree_int_User_Error_BTree_int_User (Branch_BTree_int_User (insertAt_List_BTree_int_User_pair_t (items , bitem , ({ /* cicili#Let8361 */
                                                                        __auto_type match8360  = compareKey (({ /* cicili#Let8364 */
                                                                          typeof((bitem . __h_0_mem )) key ;
                                                                          // ----------
                                                                          ;
                                                                          ({ /* cicili#Let8366 */
                                                                            bool __h_case_result  = (true  &&  ({ /* cicili#Progn8367 */
                                                                                (key  =  (bitem . __h_0_mem ) );
                                                                                true ;
                                                                              }) );
                                                                            // ----------
                                                                            
                                                                            ((__h_case_result ) ? ({ /* cicili#Progn8372 */
                                                                                key ;
                                                                              }) : ({ /* cicili#Let8376 */
                                                                                // ----------
                                                                                ;
                                                                                ({ /* cicili#Progn8378 */
                                                                                  skey ;
                                                                                });
                                                                              }));
                                                                          });
                                                                        }), ({ /* cicili#Let8383 */
                                                                          typeof((((items -> __h_data ). Cons ). __h_0_mem )) __h_match8381_0_arg ;
                                                                          typeof((__h_match8381_0_arg . __h_0_mem )) key ;
                                                                          // ----------
                                                                          ;
                                                                          ({ /* cicili#Let8385 */
                                                                            bool __h_case_result  = (true  &&  (((items -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn8386 */
                                                                                    (__h_match8381_0_arg  =  (((items -> __h_data ). Cons ). __h_0_mem ) );
                                                                                    true ;
                                                                                  }) &&  (true  &&  ({ /* cicili#Progn8388 */
                                                                                      (key  =  (__h_match8381_0_arg . __h_0_mem ) );
                                                                                      true ;
                                                                                    }) ) ) ) );
                                                                            // ----------
                                                                            
                                                                            ((__h_case_result ) ? ({ /* cicili#Progn8393 */
                                                                                key ;
                                                                              }) : ({ /* cicili#Let8397 */
                                                                                // ----------
                                                                                ;
                                                                                ({ /* cicili#Progn8399 */
                                                                                  skey ;
                                                                                });
                                                                              }));
                                                                          });
                                                                        }));
                                                                        // ----------
                                                                        ;
                                                                        ({ /* cicili#Let8402 */
                                                                          bool __h_case_result  = (true  &&  ((match8360 . __h_ctor ) ==  __h_LT_t  ) );
                                                                          // ----------
                                                                          
                                                                          ((__h_case_result ) ? ({ /* cicili#Progn8406 */
                                                                              0;
                                                                            }) : ({ /* cicili#Let8410 */
                                                                              // ----------
                                                                              ;
                                                                              ({ /* cicili#Progn8412 */
                                                                                items_len ;
                                                                              });
                                                                            }));
                                                                        });
                                                                      })), fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn8419 */
                                                                        Rc_BTree_int_User __ciciliC_8418 (Rc_BTree_int_User __h_value ) {
                                                                          return clone_Rc_BTree_int_User (__h_value );
                                                                        }
                                                                        __ciciliC_8418 ;
                                                                      }), children )));
                                                                  });
                                                                }) : ({ /* cicili#Let8426 */
                                                                  // ----------
                                                                  ;
                                                                  ({ /* cicili#Progn8428 */
                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 2"));
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        }) : ({ /* cicili#Let8435 */
                                                          // ----------
                                                          ;
                                                          ({ /* cicili#Progn8437 */
                                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 1"));
                                                          });
                                                        }));
                                                    });
                                                  }));
                                              });
                                            });
                                          }) : ({ /* cicili#Let8444 */
                                            // ----------
                                            ;
                                            ({ /* cicili#Progn8446 */
                                              (((items_len  ==  0 )) ? ({ /* cicili#Let8451 */
                                                  typeof((((children -> __h_data ). Cons ). __h_0_mem )) head ;
                                                  // ----------
                                                  ;
                                                  ({ /* cicili#Let8453 */
                                                    bool __h_case_result  = (true  &&  (((children -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn8454 */
                                                          (head  =  (((children -> __h_data ). Cons ). __h_0_mem ) );
                                                          true ;
                                                        }) ) );
                                                    // ----------
                                                    
                                                    ((__h_case_result ) ? ({ /* cicili#Progn8459 */
                                                        ({ /* cicili#Let8462 */
                                                          __auto_type __h_matchbox  = clone_Rc_BTree_int_User (head );
                                                          // ----------
                                                          ({ /* cicili#Let8467 */
                                                            __auto_type match8466  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                            typeof((((match8466 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Let8470 */
                                                              bool __h_case_result  = (true  &&  (((match8466 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8471 */
                                                                    (unboxed  =  (((match8466 . __h_data ). Just ). __h_0_mem ) );
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              
                                                              ((__h_case_result ) ? ({ /* cicili#Progn8476 */
                                                                  ({ /* cicili#Let8480 */
                                                                    __auto_type chtr  = unboxed ;
                                                                    // ----------
                                                                    ;
                                                                    ({ /* cicili#Progn8482 */
                                                                      ({ /* cicili#Let8485 */
                                                                        __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8487 */
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
                                                                }) : ({ /* cicili#Let8494 */
                                                                  // ----------
                                                                  ;
                                                                  ({ /* cicili#Progn8496 */
                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 3"));
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        });
                                                      }) : ({ /* cicili#Let8503 */
                                                        // ----------
                                                        ;
                                                        ({ /* cicili#Progn8505 */
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
                              }) : ({ /* cicili#Let8509 */
                                // ----------
                                ;
                                ({ /* cicili#Progn8511 */
                                  result ;
                                });
                              }));
                          });
                        }));
                    });
                  });
                }) : ({ /* cicili#Let8515 */
                  // ----------
                  ;
                  ({ /* cicili#Progn8517 */
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
    return ({ /* cicili#Let8534 */
        typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((head . __h_0_mem )) key ;
        typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let8536 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn8537 */
                    (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                    true ;
                  }) &&  (true  &&  ({ /* cicili#Progn8539 */
                      (key  =  (head . __h_0_mem ) );
                      true ;
                    }) ) ) &&  ({ /* cicili#Progn8541 */
                  (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn8546 */
              ({ /* cicili#Let8550 */
                __auto_type match8549  = compareKey (skey , key );
                // ----------
                ;
                ({ /* cicili#Let8552 */
                  bool __h_case_result  = (true  &&  ((match8549 . __h_ctor ) ==  __h_LT_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn8556 */
                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_NOT_FOUND (skey ));
                    }) : ({ /* cicili#Let8563 */
                      // ----------
                      ;
                      ({ /* cicili#Let8565 */
                        bool __h_case_result  = (true  &&  ((match8549 . __h_ctor ) ==  __h_EQ_t  ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn8569 */
                            ({ /* cicili#Let8572 */
                              __auto_type result  = Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (delete_List_BTree_int_User_pair_t (items , current )));
                              // ----------
                              { /* cicili#Let8581 */
                                // ----------
                                ;
                                ({ /* cicili#Let8583 */
                                  bool __h_case_result  = (true  &&  ((result . __h_ctor ) ==  __h_Right_t  ) );
                                  // ----------
                                  
                                  if (__h_case_result )
                                    { /* cicili#Block8588 */
                                      if (callback )
                                        { /* cicili#Block8592 */
                                          callback (head );
                                        }
                                    }
                                });
                              }
                              result ;
                            });
                          }) : ({ /* cicili#Let8596 */
                            // ----------
                            ;
                            ({ /* cicili#Progn8598 */
                              deleteLeaf (items , tail , (index  +  1 ));
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let8602 */
              // ----------
              ;
              ({ /* cicili#Progn8604 */
                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_NOT_FOUND (skey ));
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let8612 */
      __auto_type result  = ({ /* cicili#Let8615 */
        typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
        typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
        // ----------
        ;
        ({ /* cicili#Let8617 */
          bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn8618 */
                  (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn8620 */
                  (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn8625 */
              deleteInternal (Just_BTree_int_User (tree ), items , children , Nothing_List_BTree_int_User_pair_t (), items , 0);
            }) : ({ /* cicili#Let8631 */
              typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
              typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
              // ----------
              ;
              ({ /* cicili#Let8633 */
                bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn8634 */
                        (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                        true ;
                      }) &&  ({ /* cicili#Progn8636 */
                        (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                        true ;
                      }) ) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn8641 */
                    deleteInternal (Just_BTree_int_User (tree ), items , children , Nothing_List_BTree_int_User_pair_t (), items , 0);
                  }) : ({ /* cicili#Let8647 */
                    typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                    // ----------
                    ;
                    ({ /* cicili#Let8649 */
                      bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn8650 */
                            (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                            true ;
                          }) ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* cicili#Progn8655 */
                          deleteLeaf (items , items , 0);
                        }) : ({ /* cicili#Let8659 */
                          // ----------
                          ;
                          ({ /* cicili#Progn8661 */
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
  return ({ /* cicili#Let8684 */
      typeof((((keys -> __h_data ). Cons ). __h_0_mem )) khead ;
      typeof((((keys -> __h_data ). Cons ). __h_1_mem )) ktail ;
      // ----------
      ;
      ({ /* cicili#Let8686 */
        bool __h_case_result  = (true  &&  (((keys -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn8687 */
                (khead  =  (((keys -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn8689 */
                (ktail  =  (((keys -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn8694 */
            ({ /* cicili#Let8698 */
              typeof((((values -> __h_data ). Cons ). __h_0_mem )) vhead ;
              typeof((((values -> __h_data ). Cons ). __h_1_mem )) vtail ;
              // ----------
              ;
              ({ /* cicili#Let8700 */
                bool __h_case_result  = (true  &&  (((values -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn8701 */
                        (vhead  =  (((values -> __h_data ). Cons ). __h_0_mem ) );
                        true ;
                      }) &&  ({ /* cicili#Progn8703 */
                        (vtail  =  (((values -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn8708 */
                    ({ /* cicili#Let8711 */
                      __auto_type etree  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8713 */
                        __auto_type etree  = fromLists_BTree_int_User (ktail , vtail );
                        // ----------
                        ((void)((etree . __h_table )-> freeData ));
                        etree ;
                      });
                      // ----------
                      ({ /* cicili#Let8719 */
                        typeof((((etree . __h_data ). Right ). __h_0_mem )) tree ;
                        // ----------
                        ;
                        ({ /* cicili#Let8721 */
                          bool __h_case_result  = (true  &&  (((etree . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn8722 */
                                (tree  =  (((etree . __h_data ). Right ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn8727 */
                              ({ /* cicili#Let8730 */
                                __auto_type tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8732 */
                                  __auto_type tree  = tree ;
                                  // ----------
                                  ((void)(tree -> __h_table -> freeClass ));
                                  tree ;
                                });
                                // ----------
                                insert_BTree_int_User (tree , khead , vhead );
                              });
                            }) : ({ /* cicili#Let8738 */
                              // ----------
                              ;
                              ({ /* cicili#Progn8740 */
                                etree ;
                              });
                            }));
                        });
                      });
                    });
                  }) : ({ /* cicili#Let8744 */
                    // ----------
                    ;
                    ({ /* cicili#Progn8746 */
                      Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (Nil_BTree_int_User_pair_t ()));
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let8754 */
            // ----------
            ;
            ({ /* cicili#Progn8756 */
              Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (Nil_BTree_int_User_pair_t ()));
            });
          }));
      });
    });
}
Either_BTree_int_User_Error_BTree_int_User pure_BTree_int_User (int keys [], User values [], size_t len ) {
  return ({ /* cicili#Let8767 */
      BTree_int_User tree  = Leaf_BTree_int_User (Nil_BTree_int_User_pair_t ());
      // ----------
      for (size_t i  = 0; (i  <  len  ); (++i )) {
          { /* cicili#Let8775 */
            __auto_type match8774  = insert_BTree_int_User (tree , keys [i ], values [i ]);
            typeof((((match8774 . __h_data ). Right ). __h_0_mem )) new_tree ;
            // ----------
            ;
            ({ /* cicili#Let8778 */
              bool __h_case_result  = (true  &&  (((match8774 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn8779 */
                    (new_tree  =  (((match8774 . __h_data ). Right ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block8785 */
                  { /* cicili#Block8787 */
                    free_BTree_int_User ((&tree ));
                    tree  = new_tree ;
                  }
                }
              else
                { /* cicili#Let8793 */
                  __auto_type left  = match8774 ;
                  // ----------
                  ;
                  { /* cicili#Block8795 */
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
    return ({ /* cicili#Let8805 */
        typeof((((children -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((children -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let8807 */
          bool __h_case_result  = (true  &&  (((children -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn8808 */
                  (head  =  (((children -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn8810 */
                  (tail  =  (((children -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn8815 */
              (({ /* cicili#Let8819 */
                  // ----------
                  ;
                  ({ /* cicili#Let8821 */
                    bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn8825 */
                        ({ /* cicili#Let8829 */
                          __auto_type match8828  = get_Rc_BTree_int_User (head );
                          typeof((((match8828 . __h_data ). Just ). __h_0_mem )) tr ;
                          // ----------
                          ;
                          ({ /* cicili#Let8832 */
                            bool __h_case_result  = (true  &&  (((match8828 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8833 */
                                  (tr  =  (((match8828 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn8838 */
                                (showTree (indent , tr ) +  fprintf (file , "\n") );
                              }) : ({ /* cicili#Let8842 */
                                // ----------
                                ;
                                ({ /* cicili#Progn8844 */
                                  0;
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let8848 */
                        // ----------
                        ;
                        ({ /* cicili#Progn8850 */
                          ({ /* cicili#Let8854 */
                            __auto_type match8853  = get_Rc_BTree_int_User (head );
                            typeof((((match8853 . __h_data ). Just ). __h_0_mem )) tr ;
                            // ----------
                            ;
                            ({ /* cicili#Let8857 */
                              bool __h_case_result  = (true  &&  (((match8853 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8858 */
                                    (tr  =  (((match8853 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* cicili#Progn8863 */
                                  showTree (indent , tr );
                                }) : ({ /* cicili#Let8867 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Progn8869 */
                                    0;
                                  });
                                }));
                            });
                          });
                        });
                      }));
                  });
                }) +  showChildren (indent , tail ) );
            }) : ({ /* cicili#Let8873 */
              // ----------
              ;
              ({ /* cicili#Progn8875 */
                0;
              });
            }));
        });
      });
  }
  size_t showTree (int indent , BTree_int_User tree ) {
    return (fprintf (file , "%d%*c", indent , (indent  *  2 ), ' ') +  ({ /* cicili#Let8881 */
          typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
          typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
          // ----------
          ;
          ({ /* cicili#Let8883 */
            bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn8884 */
                    (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn8886 */
                    (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                    true ;
                  }) ) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn8891 */
                (show_List_BTree_int_User_pair_t (file , items ) +  ({ /* cicili#Let8896 */
                    // ----------
                    ;
                    ({ /* cicili#Let8898 */
                      bool __h_case_result  = (true  &&  ((children -> __h_ctor ) ==  __h_Cons_t  ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* cicili#Progn8902 */
                          (fprintf (file , "\n") +  showChildren ((indent  +  1 ), children ) );
                        }) : ({ /* cicili#Let8906 */
                          // ----------
                          ;
                          ({ /* cicili#Progn8908 */
                            0;
                          });
                        }));
                    });
                  }) );
              }) : ({ /* cicili#Let8912 */
                typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
                typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
                // ----------
                ;
                ({ /* cicili#Let8914 */
                  bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn8915 */
                          (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn8917 */
                          (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn8922 */
                      (show_List_BTree_int_User_pair_t (file , items ) +  ({ /* cicili#Let8927 */
                          // ----------
                          ;
                          ({ /* cicili#Let8929 */
                            bool __h_case_result  = (true  &&  ((children -> __h_ctor ) ==  __h_Cons_t  ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn8933 */
                                (fprintf (file , "\n") +  showChildren ((indent  +  1 ), children ) );
                              }) : ({ /* cicili#Let8937 */
                                // ----------
                                ;
                                ({ /* cicili#Progn8939 */
                                  0;
                                });
                              }));
                          });
                        }) );
                    }) : ({ /* cicili#Let8943 */
                      typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                      // ----------
                      ;
                      ({ /* cicili#Let8945 */
                        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn8946 */
                              (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn8951 */
                            show_List_BTree_int_User_pair_t (file , items );
                          }) : ({ /* cicili#Let8956 */
                            // ----------
                            ;
                            ({ /* cicili#Progn8958 */
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
    { /* cicili#Let8967 */
      typeof((((currentChild -> __h_data ). Cons ). __h_0_mem )) wheadC ;
      typeof((((currentChild -> __h_data ). Cons ). __h_1_mem )) tailC ;
      // ----------
      ;
      ({ /* cicili#Let8969 */
        bool __h_case_result  = (true  &&  (((currentChild -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn8970 */
                (wheadC  =  (((currentChild -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn8972 */
                (tailC  =  (((currentChild -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block8978 */
            { /* cicili#Let8982 */
              __auto_type match8981  = get_Rc_BTree_int_User (wheadC );
              typeof((((match8981 . __h_data ). Just ). __h_0_mem )) headC ;
              // ----------
              ;
              ({ /* cicili#Let8985 */
                bool __h_case_result  = (true  &&  (((match8981 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8986 */
                      (headC  =  (((match8981 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                
                if (__h_case_result )
                  { /* cicili#Block8992 */
                    { /* cicili#Let8996 */
                      // ----------
                      ;
                      ({ /* cicili#Let8998 */
                        bool __h_case_result  = (true  &&  ((tailC -> __h_ctor ) ==  __h_Cons_t  ) );
                        // ----------
                        
                        if (__h_case_result )
                          { /* cicili#Block9003 */
                            { /* cicili#Block9005 */
                              { /* cicili#Let9009 */
                                typeof((((headC -> __h_data ). Branch ). __h_0_mem )) items ;
                                typeof((((headC -> __h_data ). Branch ). __h_1_mem )) children ;
                                // ----------
                                ;
                                ({ /* cicili#Let9011 */
                                  bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9012 */
                                          (items  =  (((headC -> __h_data ). Branch ). __h_0_mem ) );
                                          true ;
                                        }) &&  ({ /* cicili#Progn9014 */
                                          (children  =  (((headC -> __h_data ). Branch ). __h_1_mem ) );
                                          true ;
                                        }) ) ) );
                                  // ----------
                                  
                                  if (__h_case_result )
                                    { /* cicili#Block9020 */
                                      traverseInternal (items , children );
                                    }
                                  else
                                    { /* cicili#Let9025 */
                                      typeof((((headC -> __h_data ). Internal ). __h_0_mem )) items ;
                                      typeof((((headC -> __h_data ). Internal ). __h_1_mem )) children ;
                                      // ----------
                                      ;
                                      ({ /* cicili#Let9027 */
                                        bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn9028 */
                                                (items  =  (((headC -> __h_data ). Internal ). __h_0_mem ) );
                                                true ;
                                              }) &&  ({ /* cicili#Progn9030 */
                                                (children  =  (((headC -> __h_data ). Internal ). __h_1_mem ) );
                                                true ;
                                              }) ) ) );
                                        // ----------
                                        
                                        if (__h_case_result )
                                          { /* cicili#Block9036 */
                                            traverseInternal (items , children );
                                          }
                                        else
                                          { /* cicili#Let9041 */
                                            typeof((((headC -> __h_data ). Leaf ). __h_0_mem )) items ;
                                            // ----------
                                            ;
                                            ({ /* cicili#Let9043 */
                                              bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn9044 */
                                                    (items  =  (((headC -> __h_data ). Leaf ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              
                                              if (__h_case_result )
                                                { /* cicili#Block9050 */
                                                  traverseLeaf (items , True ());
                                                }
                                            });
                                          }
                                      });
                                    }
                                });
                              }
                              { /* cicili#Let9054 */
                                typeof((((currentItem -> __h_data ). Cons ). __h_0_mem )) headI ;
                                typeof((((currentItem -> __h_data ). Cons ). __h_1_mem )) tailI ;
                                // ----------
                                ;
                                ({ /* cicili#Let9056 */
                                  bool __h_case_result  = (true  &&  (((currentItem -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn9057 */
                                          (headI  =  (((currentItem -> __h_data ). Cons ). __h_0_mem ) );
                                          true ;
                                        }) &&  ({ /* cicili#Progn9059 */
                                          (tailI  =  (((currentItem -> __h_data ). Cons ). __h_1_mem ) );
                                          true ;
                                        }) ) ) );
                                  // ----------
                                  
                                  if (__h_case_result )
                                    { /* cicili#Block9065 */
                                      { /* cicili#Block9067 */
                                        callback (headI , True ());
                                        traverseInternal (tailI , tailC );
                                      }
                                    }
                                });
                              }
                            }
                          }
                        else
                          { /* cicili#Let9072 */
                            // ----------
                            ;
                            { /* cicili#Block9074 */
                              { /* cicili#Block9076 */
                                { /* cicili#Let9080 */
                                  typeof((((headC -> __h_data ). Branch ). __h_0_mem )) items ;
                                  typeof((((headC -> __h_data ). Branch ). __h_1_mem )) children ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let9082 */
                                    bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9083 */
                                            (items  =  (((headC -> __h_data ). Branch ). __h_0_mem ) );
                                            true ;
                                          }) &&  ({ /* cicili#Progn9085 */
                                            (children  =  (((headC -> __h_data ). Branch ). __h_1_mem ) );
                                            true ;
                                          }) ) ) );
                                    // ----------
                                    
                                    if (__h_case_result )
                                      { /* cicili#Block9091 */
                                        traverseInternal (items , children );
                                      }
                                    else
                                      { /* cicili#Let9096 */
                                        typeof((((headC -> __h_data ). Internal ). __h_0_mem )) items ;
                                        typeof((((headC -> __h_data ). Internal ). __h_1_mem )) children ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let9098 */
                                          bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn9099 */
                                                  (items  =  (((headC -> __h_data ). Internal ). __h_0_mem ) );
                                                  true ;
                                                }) &&  ({ /* cicili#Progn9101 */
                                                  (children  =  (((headC -> __h_data ). Internal ). __h_1_mem ) );
                                                  true ;
                                                }) ) ) );
                                          // ----------
                                          
                                          if (__h_case_result )
                                            { /* cicili#Block9107 */
                                              traverseInternal (items , children );
                                            }
                                          else
                                            { /* cicili#Let9112 */
                                              typeof((((headC -> __h_data ). Leaf ). __h_0_mem )) items ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let9114 */
                                                bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn9115 */
                                                      (items  =  (((headC -> __h_data ). Leaf ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                if (__h_case_result )
                                                  { /* cicili#Block9121 */
                                                    traverseLeaf (items , False ());
                                                  }
                                              });
                                            }
                                        });
                                      }
                                  });
                                }
                                { /* cicili#Let9125 */
                                  typeof((((currentItem -> __h_data ). Cons ). __h_0_mem )) headI ;
                                  typeof((((currentItem -> __h_data ). Cons ). __h_1_mem )) tailI ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let9127 */
                                    bool __h_case_result  = (true  &&  (((currentItem -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn9128 */
                                            (headI  =  (((currentItem -> __h_data ). Cons ). __h_0_mem ) );
                                            true ;
                                          }) &&  ({ /* cicili#Progn9130 */
                                            (tailI  =  (((currentItem -> __h_data ). Cons ). __h_1_mem ) );
                                            true ;
                                          }) ) ) );
                                    // ----------
                                    
                                    if (__h_case_result )
                                      { /* cicili#Block9136 */
                                        { /* cicili#Block9138 */
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
    { /* cicili#Let9145 */
      typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let9147 */
        bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn9148 */
                (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn9150 */
                (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block9156 */
            { /* cicili#Block9158 */
              callback (head , ({ /* cicili#Let9162 */
                  // ----------
                  ;
                  ({ /* cicili#Let9164 */
                    bool __h_case_result  = (true  &&  ((hasNextLeaf . __h_ctor ) ==  __h_True_t  ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn9168 */
                        hasNextLeaf ;
                      }) : ({ /* cicili#Let9172 */
                        // ----------
                        ;
                        ({ /* cicili#Progn9174 */
                          ({ /* cicili#Let9178 */
                            // ----------
                            ;
                            ({ /* cicili#Let9180 */
                              bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* cicili#Progn9184 */
                                  True ();
                                }) : ({ /* cicili#Let9188 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Progn9190 */
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
  { /* cicili#Let9195 */
    typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
    typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
    // ----------
    ;
    ({ /* cicili#Let9197 */
      bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9198 */
              (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
              true ;
            }) &&  ({ /* cicili#Progn9200 */
              (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block9206 */
          traverseInternal (items , children );
        }
      else
        { /* cicili#Let9211 */
          typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
          typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
          // ----------
          ;
          ({ /* cicili#Let9213 */
            bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn9214 */
                    (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn9216 */
                    (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                    true ;
                  }) ) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block9222 */
                traverseInternal (items , children );
              }
            else
              { /* cicili#Let9227 */
                typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                // ----------
                ;
                ({ /* cicili#Let9229 */
                  bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn9230 */
                        (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block9236 */
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
    return ({ /* cicili#Let9252 */
        typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let9254 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn9255 */
                  (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn9257 */
                  (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn9262 */
              ({ /* cicili#Let9266 */
                // ----------
                ;
                ({ /* cicili#Let9268 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn9272 */
                      ({ /* cicili#Let9276 */
                        __auto_type match9275  = get_Rc_BTree_int_User (head );
                        typeof((((match9275 . __h_data ). Just ). __h_0_mem )) child ;
                        // ----------
                        ;
                        ({ /* cicili#Let9279 */
                          bool __h_case_result  = (true  &&  (((match9275 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9280 */
                                (child  =  (((match9275 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn9285 */
                              ({ /* cicili#Let9289 */
                                typeof((((child -> __h_data ). Branch ). __h_1_mem )) nchildren ;
                                // ----------
                                ;
                                ({ /* cicili#Let9291 */
                                  bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn9292 */
                                        (nchildren  =  (((child -> __h_data ). Branch ). __h_1_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn9297 */
                                      maxInternal (nchildren );
                                    }) : ({ /* cicili#Let9301 */
                                      typeof((((child -> __h_data ). Internal ). __h_1_mem )) nchildren ;
                                      // ----------
                                      ;
                                      ({ /* cicili#Let9303 */
                                        bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn9304 */
                                              (nchildren  =  (((child -> __h_data ). Internal ). __h_1_mem ) );
                                              true ;
                                            }) ) );
                                        // ----------
                                        
                                        ((__h_case_result ) ? ({ /* cicili#Progn9309 */
                                            maxInternal (nchildren );
                                          }) : ({ /* cicili#Let9313 */
                                            typeof((((child -> __h_data ). Leaf ). __h_0_mem )) items ;
                                            // ----------
                                            ;
                                            ({ /* cicili#Let9315 */
                                              bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn9316 */
                                                    (items  =  (((child -> __h_data ). Leaf ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              
                                              ((__h_case_result ) ? ({ /* cicili#Progn9321 */
                                                  maxLeaf (items );
                                                }) : ({ /* cicili#Let9325 */
                                                  // ----------
                                                  ;
                                                  ({ /* cicili#Progn9327 */
                                                    Nothing_BTree_int_User_pair_t ();
                                                  });
                                                }));
                                            });
                                          }));
                                      });
                                    }));
                                });
                              });
                            }) : ({ /* cicili#Let9332 */
                              // ----------
                              ;
                              ({ /* cicili#Progn9334 */
                                Nothing_BTree_int_User_pair_t ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let9339 */
                      // ----------
                      ;
                      ({ /* cicili#Progn9341 */
                        maxInternal (tail );
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let9345 */
              // ----------
              ;
              ({ /* cicili#Progn9347 */
                Nothing_BTree_int_User_pair_t ();
              });
            }));
        });
      });
  }
  Maybe_BTree_int_User_pair_t maxLeaf (List_BTree_int_User_pair_t current ) {
    return ({ /* cicili#Let9355 */
        typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let9357 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn9358 */
                  (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn9360 */
                  (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn9365 */
              ({ /* cicili#Let9369 */
                // ----------
                ;
                ({ /* cicili#Let9371 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn9375 */
                      Just_BTree_int_User_pair_t (head );
                    }) : ({ /* cicili#Let9380 */
                      // ----------
                      ;
                      ({ /* cicili#Progn9382 */
                        maxLeaf (tail );
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let9386 */
              // ----------
              ;
              ({ /* cicili#Progn9388 */
                Nothing_BTree_int_User_pair_t ();
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let9394 */
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      ;
      ({ /* cicili#Let9396 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn9397 */
              (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn9402 */
            maxInternal (children );
          }) : ({ /* cicili#Let9406 */
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            ;
            ({ /* cicili#Let9408 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn9409 */
                    (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn9414 */
                  maxInternal (children );
                }) : ({ /* cicili#Let9418 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  ;
                  ({ /* cicili#Let9420 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn9421 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn9426 */
                        maxLeaf (items );
                      }) : ({ /* cicili#Let9430 */
                        // ----------
                        ;
                        ({ /* cicili#Progn9432 */
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
    return ({ /* cicili#Let9447 */
        typeof((((first -> __h_data ). Cons ). __h_0_mem )) head ;
        // ----------
        ;
        ({ /* cicili#Let9449 */
          bool __h_case_result  = (true  &&  (((first -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn9450 */
                (head  =  (((first -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn9455 */
              ({ /* cicili#Let9459 */
                __auto_type match9458  = get_Rc_BTree_int_User (head );
                typeof((((match9458 . __h_data ). Just ). __h_0_mem )) child ;
                // ----------
                ;
                ({ /* cicili#Let9462 */
                  bool __h_case_result  = (true  &&  (((match9458 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9463 */
                        (child  =  (((match9458 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn9468 */
                      ({ /* cicili#Let9472 */
                        typeof((((child -> __h_data ). Branch ). __h_1_mem )) nchildren ;
                        // ----------
                        ;
                        ({ /* cicili#Let9474 */
                          bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn9475 */
                                (nchildren  =  (((child -> __h_data ). Branch ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn9480 */
                              minInternal (nchildren );
                            }) : ({ /* cicili#Let9484 */
                              typeof((((child -> __h_data ). Internal ). __h_1_mem )) nchildren ;
                              // ----------
                              ;
                              ({ /* cicili#Let9486 */
                                bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn9487 */
                                      (nchildren  =  (((child -> __h_data ). Internal ). __h_1_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn9492 */
                                    minInternal (nchildren );
                                  }) : ({ /* cicili#Let9496 */
                                    typeof((((child -> __h_data ). Leaf ). __h_0_mem )) items ;
                                    // ----------
                                    ;
                                    ({ /* cicili#Let9498 */
                                      bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn9499 */
                                            (items  =  (((child -> __h_data ). Leaf ). __h_0_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn9504 */
                                          minLeaf (items );
                                        }) : ({ /* cicili#Let9508 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Progn9510 */
                                            Nothing_BTree_int_User_pair_t ();
                                          });
                                        }));
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let9515 */
                      // ----------
                      ;
                      ({ /* cicili#Progn9517 */
                        Nothing_BTree_int_User_pair_t ();
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let9522 */
              // ----------
              ;
              ({ /* cicili#Progn9524 */
                Nothing_BTree_int_User_pair_t ();
              });
            }));
        });
      });
  }
  Maybe_BTree_int_User_pair_t minLeaf (List_BTree_int_User_pair_t first ) {
    return ({ /* cicili#Let9532 */
        typeof((((first -> __h_data ). Cons ). __h_0_mem )) head ;
        // ----------
        ;
        ({ /* cicili#Let9534 */
          bool __h_case_result  = (true  &&  (((first -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn9535 */
                (head  =  (((first -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn9540 */
              Just_BTree_int_User_pair_t (head );
            }) : ({ /* cicili#Let9545 */
              // ----------
              ;
              ({ /* cicili#Progn9547 */
                Nothing_BTree_int_User_pair_t ();
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let9553 */
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      ;
      ({ /* cicili#Let9555 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn9556 */
              (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn9561 */
            minInternal (children );
          }) : ({ /* cicili#Let9565 */
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            ;
            ({ /* cicili#Let9567 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn9568 */
                    (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn9573 */
                  minInternal (children );
                }) : ({ /* cicili#Let9577 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  ;
                  ({ /* cicili#Let9579 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn9580 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn9585 */
                        minLeaf (items );
                      }) : ({ /* cicili#Let9589 */
                        // ----------
                        ;
                        ({ /* cicili#Progn9591 */
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
    return ({ /* cicili#Let9609 */
        typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((head . __h_0_mem )) key ;
        typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let9611 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn9612 */
                    (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                    true ;
                  }) &&  (true  &&  ({ /* cicili#Progn9614 */
                      (key  =  (head . __h_0_mem ) );
                      true ;
                    }) ) ) &&  ({ /* cicili#Progn9616 */
                  (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn9621 */
              ({ /* cicili#Let9625 */
                __auto_type match9624  = compareKey (skey , key );
                // ----------
                ;
                ({ /* cicili#Let9627 */
                  bool __h_case_result  = (true  &&  ((match9624 . __h_ctor ) ==  __h_LT_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn9631 */
                      ({ /* cicili#Let9635 */
                        __auto_type match9634  = nth_List_Rc_BTree_int_User (index , children );
                        typeof((((match9634 . __h_data ). Just ). __h_0_mem )) node ;
                        // ----------
                        ;
                        ({ /* cicili#Let9638 */
                          bool __h_case_result  = (true  &&  (((match9634 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9639 */
                                (node  =  (((match9634 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn9644 */
                              ({ /* cicili#Let9648 */
                                __auto_type match9647  = get_Rc_BTree_int_User (node );
                                typeof((((match9647 . __h_data ). Just ). __h_0_mem )) tr ;
                                // ----------
                                ;
                                ({ /* cicili#Let9651 */
                                  bool __h_case_result  = (true  &&  (((match9647 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9652 */
                                        (tr  =  (((match9647 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn9657 */
                                      search_BTree_int_User (tr , skey );
                                    }) : ({ /* cicili#Let9662 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn9664 */
                                        Nothing_BTree_int_User_pair_t ();
                                      });
                                    }));
                                });
                              });
                            }) : ({ /* cicili#Let9669 */
                              // ----------
                              ;
                              ({ /* cicili#Progn9671 */
                                Nothing_BTree_int_User_pair_t ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let9676 */
                      // ----------
                      ;
                      ({ /* cicili#Let9678 */
                        bool __h_case_result  = (true  &&  ((match9624 . __h_ctor ) ==  __h_EQ_t  ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn9682 */
                            Just_BTree_int_User_pair_t (head );
                          }) : ({ /* cicili#Let9687 */
                            // ----------
                            ;
                            ({ /* cicili#Progn9689 */
                              ({ /* cicili#Let9693 */
                                // ----------
                                ;
                                ({ /* cicili#Let9695 */
                                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn9699 */
                                      ({ /* cicili#Let9703 */
                                        __auto_type match9702  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
                                        typeof((((match9702 . __h_data ). Just ). __h_0_mem )) node ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let9706 */
                                          bool __h_case_result  = (true  &&  (((match9702 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9707 */
                                                (node  =  (((match9702 . __h_data ). Just ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn9712 */
                                              ({ /* cicili#Let9716 */
                                                __auto_type match9715  = get_Rc_BTree_int_User (node );
                                                typeof((((match9715 . __h_data ). Just ). __h_0_mem )) tr ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let9719 */
                                                  bool __h_case_result  = (true  &&  (((match9715 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9720 */
                                                        (tr  =  (((match9715 . __h_data ). Just ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn9725 */
                                                      search_BTree_int_User (tr , skey );
                                                    }) : ({ /* cicili#Let9730 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn9732 */
                                                        Nothing_BTree_int_User_pair_t ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let9737 */
                                              // ----------
                                              ;
                                              ({ /* cicili#Progn9739 */
                                                Nothing_BTree_int_User_pair_t ();
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let9744 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn9746 */
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
            }) : ({ /* cicili#Let9750 */
              // ----------
              ;
              ({ /* cicili#Progn9752 */
                Nothing_BTree_int_User_pair_t ();
              });
            }));
        });
      });
  }
  Maybe_BTree_int_User_pair_t searchLeaf (List_BTree_int_User_pair_t current , size_t index ) {
    return ({ /* cicili#Let9762 */
        typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((head . __h_0_mem )) key ;
        typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let9764 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn9765 */
                    (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                    true ;
                  }) &&  (true  &&  ({ /* cicili#Progn9767 */
                      (key  =  (head . __h_0_mem ) );
                      true ;
                    }) ) ) &&  ({ /* cicili#Progn9769 */
                  (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn9774 */
              ({ /* cicili#Let9778 */
                __auto_type match9777  = compareKey (skey , key );
                // ----------
                ;
                ({ /* cicili#Let9780 */
                  bool __h_case_result  = (true  &&  ((match9777 . __h_ctor ) ==  __h_EQ_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn9784 */
                      Just_BTree_int_User_pair_t (head );
                    }) : ({ /* cicili#Let9789 */
                      // ----------
                      ;
                      ({ /* cicili#Progn9791 */
                        ({ /* cicili#Let9795 */
                          // ----------
                          ;
                          ({ /* cicili#Let9797 */
                            bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn9801 */
                                Nothing_BTree_int_User_pair_t ();
                              }) : ({ /* cicili#Let9806 */
                                // ----------
                                ;
                                ({ /* cicili#Progn9808 */
                                  searchLeaf (tail , (index  +  1 ));
                                });
                              }));
                          });
                        });
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let9812 */
              // ----------
              ;
              ({ /* cicili#Progn9814 */
                Nothing_BTree_int_User_pair_t ();
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let9820 */
      typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      ;
      ({ /* cicili#Let9822 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9823 */
                (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn9825 */
                (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn9830 */
            searchInternal (children , items , 0);
          }) : ({ /* cicili#Let9834 */
            typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            ;
            ({ /* cicili#Let9836 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn9837 */
                      (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn9839 */
                      (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn9844 */
                  searchInternal (children , items , 0);
                }) : ({ /* cicili#Let9848 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  ;
                  ({ /* cicili#Let9850 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn9851 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn9856 */
                        searchLeaf (items , 0);
                      }) : ({ /* cicili#Let9860 */
                        // ----------
                        ;
                        ({ /* cicili#Progn9862 */
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
  if (5 <  3 )
    { /* cicili#Block9874 */
      return Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_INVALID_ORDER (5));
    }
  Either_BTree_int_User_Error_BTree_int_User insertInternal (List_BTree_int_User_pair_t items , List_Rc_BTree_int_User children , List_BTree_int_User_pair_t current , size_t index ) {
    return ({ /* cicili#Let9886 */
        typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((head . __h_0_mem )) key ;
        typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let9888 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn9889 */
                    (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                    true ;
                  }) &&  (true  &&  ({ /* cicili#Progn9891 */
                      (key  =  (head . __h_0_mem ) );
                      true ;
                    }) ) ) &&  ({ /* cicili#Progn9893 */
                  (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn9898 */
              ({ /* cicili#Let9902 */
                __auto_type match9901  = compareKey (skey , key );
                // ----------
                ;
                ({ /* cicili#Let9904 */
                  bool __h_case_result  = (true  &&  ((match9901 . __h_ctor ) ==  __h_LT_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn9908 */
                      ({ /* cicili#Let9912 */
                        __auto_type match9911  = nth_List_Rc_BTree_int_User (index , children );
                        typeof((((match9911 . __h_data ). Just ). __h_0_mem )) child ;
                        // ----------
                        ;
                        ({ /* cicili#Let9915 */
                          bool __h_case_result  = (true  &&  (((match9911 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9916 */
                                (child  =  (((match9911 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn9921 */
                              ({ /* cicili#Let9925 */
                                __auto_type match9924  = get_Rc_BTree_int_User (child );
                                typeof((((match9924 . __h_data ). Just ). __h_0_mem )) tr ;
                                // ----------
                                ;
                                ({ /* cicili#Let9928 */
                                  bool __h_case_result  = (true  &&  (((match9924 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9929 */
                                        (tr  =  (((match9924 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn9934 */
                                      ({ /* cicili#Let9938 */
                                        __auto_type match9937  = insert_BTree_int_User (tr , skey , svalue );
                                        typeof((((match9937 . __h_data ). Right ). __h_0_mem )) child_tree ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let9941 */
                                          bool __h_case_result  = (true  &&  (((match9937 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn9942 */
                                                (child_tree  =  (((match9937 . __h_data ). Right ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn9947 */
                                              ({ /* cicili#Let9951 */
                                                typeof((((child_tree -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                                typeof((((child_tree -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let9953 */
                                                  bool __h_case_result  = (true  &&  (((child_tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9954 */
                                                          (child_items  =  (((child_tree -> __h_data ). Branch ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn9956 */
                                                          (child_children  =  (((child_tree -> __h_data ). Branch ). __h_1_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn9961 */
                                                      ({ /* cicili#Let9966 */
                                                        typeof((((child_items -> __h_data ). Cons ). __h_0_mem )) single_item ;
                                                        typeof((((child_items -> __h_data ). Cons ). __h_1_mem )) __h_match9964_1_arg ;
                                                        // ----------
                                                        ;
                                                        ({ /* cicili#Let9968 */
                                                          bool __h_case_result  = (true  &&  (((child_items -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn9969 */
                                                                    (single_item  =  (((child_items -> __h_data ). Cons ). __h_0_mem ) );
                                                                    true ;
                                                                  }) &&  ({ /* cicili#Progn9971 */
                                                                    (__h_match9964_1_arg  =  (((child_items -> __h_data ). Cons ). __h_1_mem ) );
                                                                    true ;
                                                                  }) ) &&  (true  &&  ((__h_match9964_1_arg -> __h_ctor ) ==  __h_Nil_t  ) ) ) ) );
                                                          // ----------
                                                          
                                                          ((__h_case_result ) ? ({ /* cicili#Progn9976 */
                                                              ({ /* cicili#Let9979 */
                                                                __auto_type child_tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9981 */
                                                                  __auto_type child_tree  = child_tree ;
                                                                  // ----------
                                                                  ((void)(child_tree -> __h_table -> freeClass ));
                                                                  child_tree ;
                                                                });
                                                                // ----------
                                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (insert_List_BTree_int_User_pair_t (items , single_item , current ), ({ /* cicili#Let9990 */
                                                                    __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9992 */
                                                                      __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                                                      // ----------
                                                                      ((void)(r1 -> __h_table -> freeClass ));
                                                                      r1 ;
                                                                    });
                                                                    __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9996 */
                                                                      __auto_type r2  = drop_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                      // ----------
                                                                      ((void)(r2 -> __h_table -> freeClass ));
                                                                      r2 ;
                                                                    });
                                                                    __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10000 */
                                                                      __auto_type r3  = append_List_Rc_BTree_int_User (child_children , r2 );
                                                                      // ----------
                                                                      ((void)(r3 -> __h_table -> freeClass ));
                                                                      r3 ;
                                                                    });
                                                                    __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10004 */
                                                                      __auto_type r4  = append_List_Rc_BTree_int_User (r1 , r3 );
                                                                      // ----------
                                                                      ((void)(r4 -> __h_table -> freeClass ));
                                                                      r4 ;
                                                                    });
                                                                    // ----------
                                                                    fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn10013 */
                                                                        Rc_BTree_int_User __ciciliC_10012 (Rc_BTree_int_User __h_value ) {
                                                                          return clone_Rc_BTree_int_User (__h_value );
                                                                        }
                                                                        __ciciliC_10012 ;
                                                                      }), r4 );
                                                                  })));
                                                              });
                                                            }) : ({ /* cicili#Let10020 */
                                                              // ----------
                                                              ;
                                                              ({ /* cicili#Progn10022 */
                                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_INVALID_BRANCH (child_tree ));
                                                              });
                                                            }));
                                                        });
                                                      });
                                                    }) : ({ /* cicili#Let10029 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let10031 */
                                                        bool __h_case_result  = (true  &&  ((child_tree -> __h_ctor ) ==  __h_Internal_t  ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn10035 */
                                                            Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let10043 */
                                                                __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10045 */
                                                                  __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                                                  // ----------
                                                                  ((void)(r1 -> __h_table -> freeClass ));
                                                                  r1 ;
                                                                });
                                                                __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10049 */
                                                                  __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn10055 */
                                                                    Rc_BTree_int_User __ciciliC_10054 (Rc_BTree_int_User __h_value ) {
                                                                      return clone_Rc_BTree_int_User (__h_value );
                                                                    }
                                                                    __ciciliC_10054 ;
                                                                  }), r1 );
                                                                  // ----------
                                                                  ((void)(r2 -> __h_table -> freeClass ));
                                                                  r2 ;
                                                                });
                                                                __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10062 */
                                                                  __auto_type r3  = drop_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                  // ----------
                                                                  ((void)(r3 -> __h_table -> freeClass ));
                                                                  r3 ;
                                                                });
                                                                __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10066 */
                                                                  __auto_type r4  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn10072 */
                                                                    Rc_BTree_int_User __ciciliC_10071 (Rc_BTree_int_User __h_value ) {
                                                                      return clone_Rc_BTree_int_User (__h_value );
                                                                    }
                                                                    __ciciliC_10071 ;
                                                                  }), r3 );
                                                                  // ----------
                                                                  ((void)(r4 -> __h_table -> freeClass ));
                                                                  r4 ;
                                                                });
                                                                __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10079 */
                                                                  __auto_type r5  = push_List_Rc_BTree_int_User (new_Rc_BTree_int_User (child_tree ), r4 );
                                                                  // ----------
                                                                  ((void)(r5 -> __h_table -> freeClass ));
                                                                  r5 ;
                                                                });
                                                                // ----------
                                                                append_List_Rc_BTree_int_User (r2 , r5 );
                                                              })));
                                                          }) : ({ /* cicili#Let10087 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn10089 */
                                                              Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let10097 */
                                                                  __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10099 */
                                                                    __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                                                    // ----------
                                                                    ((void)(r1 -> __h_table -> freeClass ));
                                                                    r1 ;
                                                                  });
                                                                  __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10103 */
                                                                    __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn10109 */
                                                                      Rc_BTree_int_User __ciciliC_10108 (Rc_BTree_int_User __h_value ) {
                                                                        return clone_Rc_BTree_int_User (__h_value );
                                                                      }
                                                                      __ciciliC_10108 ;
                                                                    }), r1 );
                                                                    // ----------
                                                                    ((void)(r2 -> __h_table -> freeClass ));
                                                                    r2 ;
                                                                  });
                                                                  __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10116 */
                                                                    __auto_type r3  = drop_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                    // ----------
                                                                    ((void)(r3 -> __h_table -> freeClass ));
                                                                    r3 ;
                                                                  });
                                                                  __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10120 */
                                                                    __auto_type r4  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn10126 */
                                                                      Rc_BTree_int_User __ciciliC_10125 (Rc_BTree_int_User __h_value ) {
                                                                        return clone_Rc_BTree_int_User (__h_value );
                                                                      }
                                                                      __ciciliC_10125 ;
                                                                    }), r3 );
                                                                    // ----------
                                                                    ((void)(r4 -> __h_table -> freeClass ));
                                                                    r4 ;
                                                                  });
                                                                  __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10133 */
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
                                            }) : ({ /* cicili#Let10141 */
                                              __auto_type left  = match9937 ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Progn10143 */
                                                left ;
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let10147 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn10149 */
                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CHILD (head , index ));
                                      });
                                    }));
                                });
                              });
                            }) : ({ /* cicili#Let10156 */
                              // ----------
                              ;
                              ({ /* cicili#Progn10158 */
                                Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (insert_List_BTree_int_User_pair_t (items , ((BTree_int_User_pair_t){ skey , svalue }), current )));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let10168 */
                      // ----------
                      ;
                      ({ /* cicili#Let10170 */
                        bool __h_case_result  = (true  &&  ((match9901 . __h_ctor ) ==  __h_EQ_t  ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn10174 */
                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_UNIQUE_KEY (head ));
                          }) : ({ /* cicili#Let10181 */
                            // ----------
                            ;
                            ({ /* cicili#Progn10183 */
                              insertInternal (items , children , tail , (index  +  1 ));
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let10187 */
              // ----------
              ;
              ({ /* cicili#Progn10189 */
                ({ /* cicili#Let10193 */
                  __auto_type match10192  = nth_List_Rc_BTree_int_User (index , children );
                  typeof((((match10192 . __h_data ). Just ). __h_0_mem )) child ;
                  // ----------
                  ;
                  ({ /* cicili#Let10196 */
                    bool __h_case_result  = (true  &&  (((match10192 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10197 */
                          (child  =  (((match10192 . __h_data ). Just ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn10202 */
                        ({ /* cicili#Let10206 */
                          __auto_type match10205  = get_Rc_BTree_int_User (child );
                          typeof((((match10205 . __h_data ). Just ). __h_0_mem )) tr ;
                          // ----------
                          ;
                          ({ /* cicili#Let10209 */
                            bool __h_case_result  = (true  &&  (((match10205 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10210 */
                                  (tr  =  (((match10205 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn10215 */
                                ({ /* cicili#Let10219 */
                                  __auto_type match10218  = insert_BTree_int_User (tr , skey , svalue );
                                  typeof((((match10218 . __h_data ). Right ). __h_0_mem )) child_tree ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let10222 */
                                    bool __h_case_result  = (true  &&  (((match10218 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn10223 */
                                          (child_tree  =  (((match10218 . __h_data ). Right ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn10228 */
                                        ({ /* cicili#Let10232 */
                                          typeof((((child_tree -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                          typeof((((child_tree -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                          // ----------
                                          ;
                                          ({ /* cicili#Let10234 */
                                            bool __h_case_result  = (true  &&  (((child_tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn10235 */
                                                    (child_items  =  (((child_tree -> __h_data ). Branch ). __h_0_mem ) );
                                                    true ;
                                                  }) &&  ({ /* cicili#Progn10237 */
                                                    (child_children  =  (((child_tree -> __h_data ). Branch ). __h_1_mem ) );
                                                    true ;
                                                  }) ) ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* cicili#Progn10242 */
                                                ({ /* cicili#Let10247 */
                                                  typeof((((child_items -> __h_data ). Cons ). __h_0_mem )) single_item ;
                                                  typeof((((child_items -> __h_data ). Cons ). __h_1_mem )) __h_match10245_1_arg ;
                                                  // ----------
                                                  ;
                                                  ({ /* cicili#Let10249 */
                                                    bool __h_case_result  = (true  &&  (((child_items -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn10250 */
                                                              (single_item  =  (((child_items -> __h_data ). Cons ). __h_0_mem ) );
                                                              true ;
                                                            }) &&  ({ /* cicili#Progn10252 */
                                                              (__h_match10245_1_arg  =  (((child_items -> __h_data ). Cons ). __h_1_mem ) );
                                                              true ;
                                                            }) ) &&  (true  &&  ((__h_match10245_1_arg -> __h_ctor ) ==  __h_Nil_t  ) ) ) ) );
                                                    // ----------
                                                    
                                                    ((__h_case_result ) ? ({ /* cicili#Progn10257 */
                                                        ({ /* cicili#Let10260 */
                                                          __auto_type child_tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10262 */
                                                            __auto_type child_tree  = child_tree ;
                                                            // ----------
                                                            ((void)(child_tree -> __h_table -> freeClass ));
                                                            child_tree ;
                                                          });
                                                          // ----------
                                                          Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (insert_List_BTree_int_User_pair_t (items , single_item , current ), ({ /* cicili#Let10271 */
                                                              __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10273 */
                                                                __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                                                // ----------
                                                                ((void)(r1 -> __h_table -> freeClass ));
                                                                r1 ;
                                                              });
                                                              __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10277 */
                                                                __auto_type r2  = drop_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                // ----------
                                                                ((void)(r2 -> __h_table -> freeClass ));
                                                                r2 ;
                                                              });
                                                              __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10281 */
                                                                __auto_type r3  = append_List_Rc_BTree_int_User (child_children , r2 );
                                                                // ----------
                                                                ((void)(r3 -> __h_table -> freeClass ));
                                                                r3 ;
                                                              });
                                                              __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10285 */
                                                                __auto_type r4  = append_List_Rc_BTree_int_User (r1 , r3 );
                                                                // ----------
                                                                ((void)(r4 -> __h_table -> freeClass ));
                                                                r4 ;
                                                              });
                                                              // ----------
                                                              fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn10294 */
                                                                  Rc_BTree_int_User __ciciliC_10293 (Rc_BTree_int_User __h_value ) {
                                                                    return clone_Rc_BTree_int_User (__h_value );
                                                                  }
                                                                  __ciciliC_10293 ;
                                                                }), r4 );
                                                            })));
                                                        });
                                                      }) : ({ /* cicili#Let10301 */
                                                        // ----------
                                                        ;
                                                        ({ /* cicili#Progn10303 */
                                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_INVALID_BRANCH (child_tree ));
                                                        });
                                                      }));
                                                  });
                                                });
                                              }) : ({ /* cicili#Let10310 */
                                                // ----------
                                                ;
                                                ({ /* cicili#Let10312 */
                                                  bool __h_case_result  = (true  &&  ((child_tree -> __h_ctor ) ==  __h_Internal_t  ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn10316 */
                                                      Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let10324 */
                                                          __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10326 */
                                                            __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                                            // ----------
                                                            ((void)(r1 -> __h_table -> freeClass ));
                                                            r1 ;
                                                          });
                                                          __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10330 */
                                                            __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn10336 */
                                                              Rc_BTree_int_User __ciciliC_10335 (Rc_BTree_int_User __h_value ) {
                                                                return clone_Rc_BTree_int_User (__h_value );
                                                              }
                                                              __ciciliC_10335 ;
                                                            }), r1 );
                                                            // ----------
                                                            ((void)(r2 -> __h_table -> freeClass ));
                                                            r2 ;
                                                          });
                                                          __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10343 */
                                                            __auto_type r3  = wrap_List_Rc_BTree_int_User (new_Rc_BTree_int_User (child_tree ));
                                                            // ----------
                                                            ((void)(r3 -> __h_table -> freeClass ));
                                                            r3 ;
                                                          });
                                                          // ----------
                                                          append_List_Rc_BTree_int_User (r2 , r3 );
                                                        })));
                                                    }) : ({ /* cicili#Let10351 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn10353 */
                                                        Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let10361 */
                                                            __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10363 */
                                                              __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                                              // ----------
                                                              ((void)(r1 -> __h_table -> freeClass ));
                                                              r1 ;
                                                            });
                                                            __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10367 */
                                                              __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn10373 */
                                                                Rc_BTree_int_User __ciciliC_10372 (Rc_BTree_int_User __h_value ) {
                                                                  return clone_Rc_BTree_int_User (__h_value );
                                                                }
                                                                __ciciliC_10372 ;
                                                              }), r1 );
                                                              // ----------
                                                              ((void)(r2 -> __h_table -> freeClass ));
                                                              r2 ;
                                                            });
                                                            __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10380 */
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
                                      }) : ({ /* cicili#Let10388 */
                                        __auto_type left  = match10218 ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn10390 */
                                          left ;
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let10394 */
                                // ----------
                                ;
                                ({ /* cicili#Progn10396 */
                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CHILD (head , index ));
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let10403 */
                        // ----------
                        ;
                        ({ /* cicili#Progn10405 */
                          Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (({ /* cicili#Let10412 */
                              __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10414 */
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
    return ({ /* cicili#Let10430 */
        typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((head . __h_0_mem )) key ;
        typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let10432 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn10433 */
                    (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                    true ;
                  }) &&  (true  &&  ({ /* cicili#Progn10435 */
                      (key  =  (head . __h_0_mem ) );
                      true ;
                    }) ) ) &&  ({ /* cicili#Progn10437 */
                  (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn10442 */
              ({ /* cicili#Let10446 */
                __auto_type match10445  = compareKey (skey , key );
                // ----------
                ;
                ({ /* cicili#Let10448 */
                  bool __h_case_result  = (true  &&  ((match10445 . __h_ctor ) ==  __h_LT_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn10452 */
                      Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (insert_List_BTree_int_User_pair_t (items , ((BTree_int_User_pair_t){ skey , svalue }), current )));
                    }) : ({ /* cicili#Let10462 */
                      // ----------
                      ;
                      ({ /* cicili#Let10464 */
                        bool __h_case_result  = (true  &&  ((match10445 . __h_ctor ) ==  __h_EQ_t  ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn10468 */
                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_UNIQUE_KEY (head ));
                          }) : ({ /* cicili#Let10475 */
                            // ----------
                            ;
                            ({ /* cicili#Progn10477 */
                              insertLeaf (items , tail , (index  +  1 ));
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let10481 */
              // ----------
              ;
              ({ /* cicili#Progn10483 */
                Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (({ /* cicili#Let10490 */
                    __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10492 */
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
  return ({ /* cicili#Let10502 */
      typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      ;
      ({ /* cicili#Let10504 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn10505 */
                (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn10507 */
                (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn10512 */
            ({ /* cicili#Let10516 */
              __auto_type match10515  = insertInternal (items , children , items , 0);
              typeof((((match10515 . __h_data ). Right ). __h_0_mem )) tr ;
              // ----------
              ;
              ({ /* cicili#Let10518 */
                bool __h_case_result  = (true  &&  (((match10515 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn10519 */
                      (tr  =  (((match10515 . __h_data ). Right ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn10524 */
                    Right_BTree_int_User_Error_BTree_int_User (split_BTree_int_User (tr ));
                  }) : ({ /* cicili#Let10531 */
                    __auto_type left  = match10515 ;
                    // ----------
                    ;
                    ({ /* cicili#Progn10533 */
                      left ;
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let10537 */
            typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            ;
            ({ /* cicili#Let10539 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn10540 */
                      (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn10542 */
                      (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn10547 */
                  ({ /* cicili#Let10551 */
                    __auto_type match10550  = insertInternal (items , children , items , 0);
                    typeof((((match10550 . __h_data ). Right ). __h_0_mem )) tr ;
                    // ----------
                    ;
                    ({ /* cicili#Let10553 */
                      bool __h_case_result  = (true  &&  (((match10550 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn10554 */
                            (tr  =  (((match10550 . __h_data ). Right ). __h_0_mem ) );
                            true ;
                          }) ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* cicili#Progn10559 */
                          Right_BTree_int_User_Error_BTree_int_User (split_BTree_int_User (tr ));
                        }) : ({ /* cicili#Let10566 */
                          __auto_type left  = match10550 ;
                          // ----------
                          ;
                          ({ /* cicili#Progn10568 */
                            left ;
                          });
                        }));
                    });
                  });
                }) : ({ /* cicili#Let10572 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  ;
                  ({ /* cicili#Let10574 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn10575 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn10580 */
                        ({ /* cicili#Let10584 */
                          __auto_type match10583  = insertLeaf (items , items , 0);
                          typeof((((match10583 . __h_data ). Right ). __h_0_mem )) tr ;
                          // ----------
                          ;
                          ({ /* cicili#Let10586 */
                            bool __h_case_result  = (true  &&  (((match10583 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn10587 */
                                  (tr  =  (((match10583 . __h_data ). Right ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn10592 */
                                Right_BTree_int_User_Error_BTree_int_User (split_BTree_int_User (tr ));
                              }) : ({ /* cicili#Let10599 */
                                __auto_type left  = match10583 ;
                                // ----------
                                ;
                                ({ /* cicili#Progn10601 */
                                  left ;
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let10605 */
                        // ----------
                        ;
                        ({ /* cicili#Progn10607 */
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
  return 5;
}
void free_BTree_int_User (BTree_int_User * this_ptr ) {
  { /* cicili#Let10616 */
    __auto_type this  = (*this_ptr );
    // ----------
    void freeChildren (List_Rc_BTree_int_User children ) {
      { /* cicili#Let10621 */
        typeof((((children -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((children -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let10623 */
          bool __h_case_result  = (true  &&  (((children -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn10624 */
                  (head  =  (((children -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn10626 */
                  (tail  =  (((children -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block10632 */
              { /* cicili#Block10634 */
                free_Rc_BTree_int_User (&head );
                freeChildren (tail );
              }
            }
        });
      }
    }
    { /* cicili#Let10640 */
      typeof((((this -> __h_data ). Branch ). __h_0_mem )) items ;
      typeof((((this -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      ;
      ({ /* cicili#Let10642 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn10643 */
                (items  =  (((this -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn10645 */
                (children  =  (((this -> __h_data ). Branch ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block10651 */
            { /* cicili#Block10653 */
              free_List_BTree_int_User_pair_t ((&items ));
              freeChildren (children );
              free_List_Rc_BTree_int_User ((&children ));
              free (this );
            }
          }
        else
          { /* cicili#Let10664 */
            typeof((((this -> __h_data ). Internal ). __h_0_mem )) items ;
            typeof((((this -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            ;
            ({ /* cicili#Let10666 */
              bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn10667 */
                      (items  =  (((this -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn10669 */
                      (children  =  (((this -> __h_data ). Internal ). __h_1_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block10675 */
                  { /* cicili#Block10677 */
                    free_List_BTree_int_User_pair_t ((&items ));
                    freeChildren (children );
                    free_List_Rc_BTree_int_User ((&children ));
                    free (this );
                  }
                }
              else
                { /* cicili#Let10688 */
                  typeof((((this -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  ;
                  ({ /* cicili#Let10690 */
                    bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn10691 */
                          (items  =  (((this -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block10697 */
                        { /* cicili#Block10699 */
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
  { /* cicili#Let10711 */
    BTree_int_User instance  = malloc (sizeof(class_BTree_int_User));
    // ----------
    (*instance ) = ((class_BTree_int_User){ get_BTree_int_User__H_Table (), __h_Branch_t , .__h_data.Branch = { items , children }});
    return instance ;
  }
}
BTree_int_User Internal_BTree_int_User (List_BTree_int_User_pair_t items , List_Rc_BTree_int_User children ) {
  { /* cicili#Let10719 */
    BTree_int_User instance  = malloc (sizeof(class_BTree_int_User));
    // ----------
    (*instance ) = ((class_BTree_int_User){ get_BTree_int_User__H_Table (), __h_Internal_t , .__h_data.Internal = { items , children }});
    return instance ;
  }
}
BTree_int_User Leaf_BTree_int_User (List_BTree_int_User_pair_t items ) {
  { /* cicili#Let10727 */
    BTree_int_User instance  = malloc (sizeof(class_BTree_int_User));
    // ----------
    (*instance ) = ((class_BTree_int_User){ get_BTree_int_User__H_Table (), __h___t , .__h_data._ = { items }});
    return instance ;
  }
}
#endif /* __BTree_int_User__H_IMPL__ */ 
void insertMany (BTree_int_User * pwtree , int from , int to ) {
  { /* cicili#Let10733 */
    char keyStr [10];
    // ----------
    for (int i  = from ; (i  <=  to  ); (++i )) {
        sprintf (keyStr , "%d", i );
        { /* cicili#Let10737 */
          String name  = ({ /* cicili#Let10739 */
            __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10741 */
              __auto_type r1  = new_String_Const ("User ");
              // ----------
              ((void)(r1 -> __h_table -> freeClass ));
              r1 ;
            });
            __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10744 */
              __auto_type r2  = new_String_Const (keyStr );
              // ----------
              ((void)(r2 -> __h_table -> freeClass ));
              r2 ;
            });
            // ----------
            append_String (r1 , r2 );
          });
          // ----------
          { /* cicili#Let10750 */
            __auto_type match10749  = insert_BTree_int_User ((*pwtree ), i , ((User){ new_Cell_String (name ), (i  +  2000 )}));
            typeof((((match10749 . __h_data ). Right ). __h_0_mem )) new_tree ;
            // ----------
            ;
            ({ /* cicili#Let10754 */
              bool __h_case_result  = (true  &&  (((match10749 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn10755 */
                    (new_tree  =  (((match10749 . __h_data ). Right ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block10761 */
                  { /* cicili#Block10763 */
                    free_BTree_int_User (pwtree );
                    (*pwtree ) = new_tree ;
                  }
                }
              else
                { /* cicili#Let10769 */
                  typeof((((match10749 . __h_data ). Left ). __h_0_mem )) err ;
                  // ----------
                  ;
                  ({ /* cicili#Let10771 */
                    bool __h_case_result  = (true  &&  (((match10749 . __h_ctor ) ==  __h_Left_t  ) &&  ({ /* cicili#Progn10772 */
                          (err  =  (((match10749 . __h_data ). Left ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block10778 */
                        ({ /* cicili#Let10781 */
                          __auto_type tmp_stdout  = stdout ;
                          // ----------
                          stdout  = stderr ;
                          printf ("Error during insertion: ");
                          show_BTree_int_User_Error (err );
                          putchar ('\n');
                          exit (-1);
                          stdout  = tmp_stdout ;
                        });
                      }
                  });
                }
            });
          }
        }
    }
  }
}
void __ciciliL_10786 (BTree_int_User_pair_t item ) {
  { /* cicili#Let10791 */
    typeof((item . __h_1_mem )) __h_match10789_1_arg ;
    typeof((__h_match10789_1_arg . __h_0_mem )) wname ;
    // ----------
    ;
    ({ /* cicili#Let10793 */
      bool __h_case_result  = (true  &&  (({ /* cicili#Progn10794 */
            (__h_match10789_1_arg  =  (item . __h_1_mem ) );
            true ;
          }) &&  (true  &&  ({ /* cicili#Progn10796 */
              (wname  =  (__h_match10789_1_arg . __h_0_mem ) );
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block10802 */
          { /* cicili#Block10804 */
            free_Cell_String ((&wname ));
          }
        }
    });
  }
}
void deleteMany (BTree_int_User * pwtree , int from , int to ) {
  { /* cicili#Let10785 */
    __auto_type item_deallocator  = __ciciliL_10786 ;
    // ----------
    for (int i  = from ; (i  <=  to  ); (++i )) {
        { /* cicili#Let10813 */
          __auto_type match10812  = delete_BTree_int_User ((*pwtree ), i , item_deallocator );
          typeof((((match10812 . __h_data ). Right ). __h_0_mem )) new_tree ;
          // ----------
          ;
          ({ /* cicili#Let10816 */
            bool __h_case_result  = (true  &&  (((match10812 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn10817 */
                  (new_tree  =  (((match10812 . __h_data ). Right ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block10823 */
                { /* cicili#Block10825 */
                  free_BTree_int_User (pwtree );
                  (*pwtree ) = new_tree ;
                }
              }
            else
              { /* cicili#Let10831 */
                typeof((((match10812 . __h_data ). Left ). __h_0_mem )) err ;
                // ----------
                ;
                ({ /* cicili#Let10833 */
                  bool __h_case_result  = (true  &&  (((match10812 . __h_ctor ) ==  __h_Left_t  ) &&  ({ /* cicili#Progn10834 */
                        (err  =  (((match10812 . __h_data ). Left ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block10840 */
                      ({ /* cicili#Let10843 */
                        __auto_type tmp_stdout  = stdout ;
                        // ----------
                        stdout  = stderr ;
                        printf ("Error during deletion: ");
                        show_BTree_int_User_Error (err );
                        putchar ('\n');
                        exit (-1);
                        stdout  = tmp_stdout ;
                      });
                    }
                });
              }
          });
        }
    }
  }
}
void searchMany (BTree_int_User * pwtree , int from , int to ) {
  for (int i  = from ; (i  <=  to  ); (++i )) {
      { /* cicili#Let10851 */
        __auto_type match10850  = search_BTree_int_User ((*pwtree ), i );
        // ----------
        ;
        ({ /* cicili#Let10854 */
          bool __h_case_result  = (true  &&  ((match10850 . __h_ctor ) ==  __h_Just_t  ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block10859 */
              
            }
          else
            { /* cicili#Let10866 */
              // ----------
              ;
              ({ /* cicili#Let10868 */
                bool __h_case_result  = (true  &&  ((match10850 . __h_ctor ) ==  __h_Nothing_t  ) );
                // ----------
                
                if (__h_case_result )
                  { /* cicili#Block10873 */
                    ({ /* cicili#Let10876 */
                      __auto_type tmp_stdout  = stdout ;
                      // ----------
                      stdout  = stderr ;
                      stdout  = tmp_stdout ;
                    });
                  }
              });
            }
        });
      }
  }
}
int main () {
  fprintf (stdout , "Single-thread pure functional manipulation of '%s' type into and from '%s' structure using '%s' key type.\n", "User", "BTree_int_User", "int");
  { /* cicili#Let10883 */
    __auto_type start  = time (NULL );
    BTree_int_User wtree  = Leaf_BTree_int_User (Nil_BTree_int_User_pair_t ());
    BTree_int_User * pwtree  = (&wtree );
    // ----------
    for (int counter  = 0; (counter  <  1000 ); ) {
        insertMany (pwtree , 1, 250);
        insertMany (pwtree , 501, 750);
        insertMany (pwtree , 251, 500);
        insertMany (pwtree , 751, 1000);
        searchMany (pwtree , 1, 250);
        searchMany (pwtree , 501, 750);
        searchMany (pwtree , 251, 500);
        searchMany (pwtree , 751, 1000);
        deleteMany (pwtree , 1, 250);
        deleteMany (pwtree , 501, 750);
        deleteMany (pwtree , 251, 500);
        deleteMany (pwtree , 751, 1000);
        printf ("Epoch %d\n", (++counter ));
    }
    free_BTree_int_User (pwtree );
    fprintf (stdout , "Done\n");
    fprintf (stdout , "%lu seconds elapsed\n", ((unsigned long)(time (NULL ) -  start  )));
  }
}
