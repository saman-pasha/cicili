#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "haskell.h"
#include <time.h>
typedef struct ciciliQZm7XOFRKEZjZnsHIgyfa9_EmgY_ {
  Cell_String __h_0_mem ;
  int __h_1_mem ;
} ciciliQZm7XOFRKEZjZnsHIgyfa9_EmgY_;
typedef ciciliQZm7XOFRKEZjZnsHIgyfa9_EmgY_ User ;
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
typedef struct ciciliNAnTFtq2dOt3MeawlxQSELZNgyA_ {
  int __h_0_mem ;
  User __h_1_mem ;
} ciciliNAnTFtq2dOt3MeawlxQSELZNgyA_;
typedef ciciliNAnTFtq2dOt3MeawlxQSELZNgyA_ BTree_int_User_pair_t ;
#ifndef __BTree_int_User_Error__H_DECL__
#define __BTree_int_User_Error__H_DECL__
#ifndef __H___h_BTreeError_ctor_t__
#define __H___h_BTreeError_ctor_t__
typedef enum __h_BTreeError_ctor_t {
  __h_ERR_ACCESS_DEAD_CONS_t = 0,
  __h_ERR_CANT_BORROW_t = 1,
  __h_ERR_INVALID_BRANCH_t = 2,
  __h_ERR_ACCESS_DEAD_CHILD_t = 3,
  __h_ERR_NOT_FOUND_t = 4,
  __h_ERR_UNIQUE_KEY_t = 5,
  __h_ERR_INVALID_ORDER_t = 6,
  __h_ERR_INVALID_OBJECT_t = 7
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
    } ERR_INVALID_OBJECT , _7 ;
    struct { /* ciciliStruct1149 */
      size_t __h_0_mem ;
    } ERR_INVALID_ORDER , _6 ;
    struct { /* ciciliStruct1150 */
      BTree_int_User_pair_t __h_0_mem ;
    } ERR_UNIQUE_KEY , _5 ;
    struct { /* ciciliStruct1151 */
      int __h_0_mem ;
    } ERR_NOT_FOUND , _4 ;
    struct { /* ciciliStruct1152 */
      BTree_int_User_pair_t __h_0_mem ;
      size_t __h_1_mem ;
    } ERR_ACCESS_DEAD_CHILD , _3 ;
    struct { /* ciciliStruct1153 */
      BTree_int_User __h_0_mem ;
    } ERR_INVALID_BRANCH , _2 ;
    struct { /* ciciliStruct1154 */
      char * __h_0_mem ;
    } ERR_CANT_BORROW , _1 ;
    struct { /* ciciliStruct1155 */
    } ERR_ACCESS_DEAD_CONS , _ ;
  } __h_data ;
} BTree_int_User_Error;
BTree_int_User_Error BTree_int_User_ERR_INVALID_OBJECT ();
BTree_int_User_Error BTree_int_User_ERR_INVALID_ORDER (size_t order );
BTree_int_User_Error BTree_int_User_ERR_UNIQUE_KEY (BTree_int_User_pair_t item );
BTree_int_User_Error BTree_int_User_ERR_NOT_FOUND (int key );
BTree_int_User_Error BTree_int_User_ERR_ACCESS_DEAD_CHILD (BTree_int_User_pair_t item , size_t index );
BTree_int_User_Error BTree_int_User_ERR_INVALID_BRANCH (BTree_int_User branch );
BTree_int_User_Error BTree_int_User_ERR_CANT_BORROW (char * reason );
BTree_int_User_Error BTree_int_User_ERR_ACCESS_DEAD_CONS ();
__attribute__((weak)) BTree_int_User_Error Default_BTree_int_User_Error () {
  return BTree_int_User_ERR_ACCESS_DEAD_CONS ();
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
  union { /* ciciliUnion1205 */
    struct { /* ciciliStruct1206 */
      BTree_int_User __h_0_mem ;
    } Right , _1 ;
    struct { /* ciciliStruct1207 */
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
  union { /* ciciliUnion1233 */
    struct { /* ciciliStruct1234 */
      BTree_int_User __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct1235 */
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
  union { /* ciciliUnion1263 */
    struct { /* ciciliStruct1264 */
      BTree_int_User_pair_t __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct1265 */
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
typedef class_List_BTree_int_User_pair_t * List_BTree_int_User_pair_t_x ;
#ifndef __Maybe_List_BTree_int_User_pair_t_x__H_DECL__
#define __Maybe_List_BTree_int_User_pair_t_x__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_List_BTree_int_User_pair_t_x Maybe_List_BTree_int_User_pair_t_x ;
typedef void (*free_Maybe_List_BTree_int_User_pair_t_x_t) (Maybe_List_BTree_int_User_pair_t_x * this );
typedef struct Maybe_List_BTree_int_User_pair_t_x__H_Table {
  free_Maybe_List_BTree_int_User_pair_t_x_t freeData ;
} Maybe_List_BTree_int_User_pair_t_x__H_Table;
typedef struct Maybe_List_BTree_int_User_pair_t_x {
  const Maybe_List_BTree_int_User_pair_t_x__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion1296 */
    struct { /* ciciliStruct1297 */
      List_BTree_int_User_pair_t_x __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct1298 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_List_BTree_int_User_pair_t_x;
Maybe_List_BTree_int_User_pair_t_x Just_List_BTree_int_User_pair_t_x (List_BTree_int_User_pair_t_x value );
Maybe_List_BTree_int_User_pair_t_x Nothing_List_BTree_int_User_pair_t_x ();
__attribute__((weak)) Maybe_List_BTree_int_User_pair_t_x Default_Maybe_List_BTree_int_User_pair_t_x () {
  return Nothing_List_BTree_int_User_pair_t_x ();
}
const Maybe_List_BTree_int_User_pair_t_x__H_Table * const get_Maybe_List_BTree_int_User_pair_t_x__H_Table ();
void free_Maybe_List_BTree_int_User_pair_t_x (Maybe_List_BTree_int_User_pair_t_x * this );
#endif /* __Maybe_List_BTree_int_User_pair_t_x__H_DECL__ */ 
#ifndef __Box_List_BTree_int_User_pair_t__H_DECL__
#define __Box_List_BTree_int_User_pair_t__H_DECL__
#ifndef __H___h_Rc_ctor_t__
#define __H___h_Rc_ctor_t__
typedef enum __h_Rc_ctor_t {
  __h_Gone_t = 0,
  __h_Hold_t = 1
} __h_Rc_ctor_t;
#endif /* __H___h_Rc_ctor_t__ */ 
typedef struct Box_List_BTree_int_User_pair_t Box_List_BTree_int_User_pair_t ;
typedef void (*free_Box_List_BTree_int_User_pair_t_t) (Box_List_BTree_int_User_pair_t * this );
typedef struct Box_List_BTree_int_User_pair_t__H_Table {
  free_Box_List_BTree_int_User_pair_t_t freeData ;
    Box_List_BTree_int_User_pair_t (*new) (List_BTree_int_User_pair_t_x pointer );
    Box_List_BTree_int_User_pair_t (*clone) (Box_List_BTree_int_User_pair_t rc );
    Maybe_List_BTree_int_User_pair_t_x (*take) (Box_List_BTree_int_User_pair_t * this );
    Maybe_List_BTree_int_User_pair_t_x (*get) (Box_List_BTree_int_User_pair_t rc );
} Box_List_BTree_int_User_pair_t__H_Table;
typedef struct Box_List_BTree_int_User_pair_t {
  const Box_List_BTree_int_User_pair_t__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion1328 */
    struct { /* ciciliStruct1329 */
      List_BTree_int_User_pair_t_x * __h_0_mem ;
      int * __h_1_mem ;
      size_t __h_2_mem ;
    } Hold , _1 ;
    struct { /* ciciliStruct1330 */
    } Gone , _ ;
  } __h_data ;
} Box_List_BTree_int_User_pair_t;
Box_List_BTree_int_User_pair_t __h_Hold_List_BTree_int_User_pair_t_x (List_BTree_int_User_pair_t_x * pointer , int * count , size_t address );
Box_List_BTree_int_User_pair_t Gone_List_BTree_int_User_pair_t_x ();
__attribute__((weak)) Box_List_BTree_int_User_pair_t Default_Box_List_BTree_int_User_pair_t () {
  return Gone_List_BTree_int_User_pair_t_x ();
}
Box_List_BTree_int_User_pair_t new_Box_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t_x pointer );
Box_List_BTree_int_User_pair_t clone_Box_List_BTree_int_User_pair_t (Box_List_BTree_int_User_pair_t rc );
Maybe_List_BTree_int_User_pair_t_x take_Box_List_BTree_int_User_pair_t (Box_List_BTree_int_User_pair_t * this );
Maybe_List_BTree_int_User_pair_t_x get_Box_List_BTree_int_User_pair_t (Box_List_BTree_int_User_pair_t rc );
const Box_List_BTree_int_User_pair_t__H_Table * const get_Box_List_BTree_int_User_pair_t__H_Table ();
void free_Box_List_BTree_int_User_pair_t (Box_List_BTree_int_User_pair_t * this );
#endif /* __Box_List_BTree_int_User_pair_t__H_DECL__ */ 
typedef Box_List_BTree_int_User_pair_t List_BTree_int_User_pair_t ;
typedef void (*free_List_BTree_int_User_pair_t_t) (List_BTree_int_User_pair_t_x * this );
typedef struct List_BTree_int_User_pair_t__H_Table {
  free_List_BTree_int_User_pair_t_t freeData ;
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
    List_BTree_int_User_pair_t (*tail) (List_BTree_int_User_pair_t list );
    List_BTree_int_User_pair_t (*drop) (size_t len , List_BTree_int_User_pair_t list );
    Maybe_BTree_int_User_pair_t (*head) (List_BTree_int_User_pair_t list );
    List_BTree_int_User_pair_t (*nthcdr) (size_t index , List_BTree_int_User_pair_t list );
    Maybe_BTree_int_User_pair_t (*nth) (size_t index , List_BTree_int_User_pair_t list );
    size_t (*hasLen) (List_BTree_int_User_pair_t list , size_t desired );
    size_t (*len) (List_BTree_int_User_pair_t list );
} List_BTree_int_User_pair_t__H_Table;
typedef struct class_List_BTree_int_User_pair_t {
  const List_BTree_int_User_pair_t__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion1392 */
    struct { /* ciciliStruct1393 */
      BTree_int_User_pair_t __h_0_mem ;
      List_BTree_int_User_pair_t __h_1_mem ;
    } Cons , _1 ;
    struct { /* ciciliStruct1394 */
    } Nil , _ ;
  } __h_data ;
} class_List_BTree_int_User_pair_t;
List_BTree_int_User_pair_t BoxedCons_BTree_int_User_pair_t (BTree_int_User_pair_t head , List_BTree_int_User_pair_t tail );
List_BTree_int_User_pair_t BoxedNil_BTree_int_User_pair_t ();
__attribute__((weak)) List_BTree_int_User_pair_t Default_List_BTree_int_User_pair_t () {
  return BoxedNil_BTree_int_User_pair_t ();
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
List_BTree_int_User_pair_t tail_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list );
List_BTree_int_User_pair_t drop_List_BTree_int_User_pair_t (size_t len , List_BTree_int_User_pair_t list );
Maybe_BTree_int_User_pair_t head_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list );
List_BTree_int_User_pair_t nthcdr_List_BTree_int_User_pair_t (size_t index , List_BTree_int_User_pair_t list );
Maybe_BTree_int_User_pair_t nth_List_BTree_int_User_pair_t (size_t index , List_BTree_int_User_pair_t list );
size_t hasLen_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , size_t desired );
size_t len_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list );
List_BTree_int_User_pair_t__H_Table * const get_List_BTree_int_User_pair_t__H_Table ();
void free_List_BTree_int_User_pair_t_x (List_BTree_int_User_pair_t_x * this );
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
  union { /* ciciliUnion1494 */
    struct { /* ciciliStruct1495 */
      List_BTree_int_User_pair_t __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct1496 */
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
  union { /* ciciliUnion1526 */
    struct { /* ciciliStruct1527 */
      BTree_int_User __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct1528 */
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
  union { /* ciciliUnion1558 */
    struct { /* ciciliStruct1559 */
      BTree_int_User * __h_0_mem ;
      int * __h_1_mem ;
      size_t __h_2_mem ;
    } Hold , _1 ;
    struct { /* ciciliStruct1560 */
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
  union { /* ciciliUnion1602 */
    struct { /* ciciliStruct1603 */
      Rc_BTree_int_User __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct1604 */
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
typedef class_List_Rc_BTree_int_User * List_Rc_BTree_int_User_x ;
#ifndef __Maybe_List_Rc_BTree_int_User_x__H_DECL__
#define __Maybe_List_Rc_BTree_int_User_x__H_DECL__
#ifndef __H___h_Maybe_ctor_t__
#define __H___h_Maybe_ctor_t__
typedef enum __h_Maybe_ctor_t {
  __h_Nothing_t = 0,
  __h_Just_t = 1
} __h_Maybe_ctor_t;
#endif /* __H___h_Maybe_ctor_t__ */ 
typedef struct Maybe_List_Rc_BTree_int_User_x Maybe_List_Rc_BTree_int_User_x ;
typedef void (*free_Maybe_List_Rc_BTree_int_User_x_t) (Maybe_List_Rc_BTree_int_User_x * this );
typedef struct Maybe_List_Rc_BTree_int_User_x__H_Table {
  free_Maybe_List_Rc_BTree_int_User_x_t freeData ;
} Maybe_List_Rc_BTree_int_User_x__H_Table;
typedef struct Maybe_List_Rc_BTree_int_User_x {
  const Maybe_List_Rc_BTree_int_User_x__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion1635 */
    struct { /* ciciliStruct1636 */
      List_Rc_BTree_int_User_x __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct1637 */
    } Nothing , _ ;
  } __h_data ;
} Maybe_List_Rc_BTree_int_User_x;
Maybe_List_Rc_BTree_int_User_x Just_List_Rc_BTree_int_User_x (List_Rc_BTree_int_User_x value );
Maybe_List_Rc_BTree_int_User_x Nothing_List_Rc_BTree_int_User_x ();
__attribute__((weak)) Maybe_List_Rc_BTree_int_User_x Default_Maybe_List_Rc_BTree_int_User_x () {
  return Nothing_List_Rc_BTree_int_User_x ();
}
const Maybe_List_Rc_BTree_int_User_x__H_Table * const get_Maybe_List_Rc_BTree_int_User_x__H_Table ();
void free_Maybe_List_Rc_BTree_int_User_x (Maybe_List_Rc_BTree_int_User_x * this );
#endif /* __Maybe_List_Rc_BTree_int_User_x__H_DECL__ */ 
#ifndef __Box_List_Rc_BTree_int_User__H_DECL__
#define __Box_List_Rc_BTree_int_User__H_DECL__
#ifndef __H___h_Rc_ctor_t__
#define __H___h_Rc_ctor_t__
typedef enum __h_Rc_ctor_t {
  __h_Gone_t = 0,
  __h_Hold_t = 1
} __h_Rc_ctor_t;
#endif /* __H___h_Rc_ctor_t__ */ 
typedef struct Box_List_Rc_BTree_int_User Box_List_Rc_BTree_int_User ;
typedef void (*free_Box_List_Rc_BTree_int_User_t) (Box_List_Rc_BTree_int_User * this );
typedef struct Box_List_Rc_BTree_int_User__H_Table {
  free_Box_List_Rc_BTree_int_User_t freeData ;
    Box_List_Rc_BTree_int_User (*new) (List_Rc_BTree_int_User_x pointer );
    Box_List_Rc_BTree_int_User (*clone) (Box_List_Rc_BTree_int_User rc );
    Maybe_List_Rc_BTree_int_User_x (*take) (Box_List_Rc_BTree_int_User * this );
    Maybe_List_Rc_BTree_int_User_x (*get) (Box_List_Rc_BTree_int_User rc );
} Box_List_Rc_BTree_int_User__H_Table;
typedef struct Box_List_Rc_BTree_int_User {
  const Box_List_Rc_BTree_int_User__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion1667 */
    struct { /* ciciliStruct1668 */
      List_Rc_BTree_int_User_x * __h_0_mem ;
      int * __h_1_mem ;
      size_t __h_2_mem ;
    } Hold , _1 ;
    struct { /* ciciliStruct1669 */
    } Gone , _ ;
  } __h_data ;
} Box_List_Rc_BTree_int_User;
Box_List_Rc_BTree_int_User __h_Hold_List_Rc_BTree_int_User_x (List_Rc_BTree_int_User_x * pointer , int * count , size_t address );
Box_List_Rc_BTree_int_User Gone_List_Rc_BTree_int_User_x ();
__attribute__((weak)) Box_List_Rc_BTree_int_User Default_Box_List_Rc_BTree_int_User () {
  return Gone_List_Rc_BTree_int_User_x ();
}
Box_List_Rc_BTree_int_User new_Box_List_Rc_BTree_int_User (List_Rc_BTree_int_User_x pointer );
Box_List_Rc_BTree_int_User clone_Box_List_Rc_BTree_int_User (Box_List_Rc_BTree_int_User rc );
Maybe_List_Rc_BTree_int_User_x take_Box_List_Rc_BTree_int_User (Box_List_Rc_BTree_int_User * this );
Maybe_List_Rc_BTree_int_User_x get_Box_List_Rc_BTree_int_User (Box_List_Rc_BTree_int_User rc );
const Box_List_Rc_BTree_int_User__H_Table * const get_Box_List_Rc_BTree_int_User__H_Table ();
void free_Box_List_Rc_BTree_int_User (Box_List_Rc_BTree_int_User * this );
#endif /* __Box_List_Rc_BTree_int_User__H_DECL__ */ 
typedef Box_List_Rc_BTree_int_User List_Rc_BTree_int_User ;
typedef void (*free_List_Rc_BTree_int_User_t) (List_Rc_BTree_int_User_x * this );
typedef struct List_Rc_BTree_int_User__H_Table {
  free_List_Rc_BTree_int_User_t freeData ;
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
    List_Rc_BTree_int_User (*tail) (List_Rc_BTree_int_User list );
    List_Rc_BTree_int_User (*drop) (size_t len , List_Rc_BTree_int_User list );
    Maybe_Rc_BTree_int_User (*head) (List_Rc_BTree_int_User list );
    List_Rc_BTree_int_User (*nthcdr) (size_t index , List_Rc_BTree_int_User list );
    Maybe_Rc_BTree_int_User (*nth) (size_t index , List_Rc_BTree_int_User list );
    size_t (*hasLen) (List_Rc_BTree_int_User list , size_t desired );
    size_t (*len) (List_Rc_BTree_int_User list );
} List_Rc_BTree_int_User__H_Table;
typedef struct class_List_Rc_BTree_int_User {
  const List_Rc_BTree_int_User__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion1731 */
    struct { /* ciciliStruct1732 */
      Rc_BTree_int_User __h_0_mem ;
      List_Rc_BTree_int_User __h_1_mem ;
    } Cons , _1 ;
    struct { /* ciciliStruct1733 */
    } Nil , _ ;
  } __h_data ;
} class_List_Rc_BTree_int_User;
List_Rc_BTree_int_User BoxedCons_Rc_BTree_int_User (Rc_BTree_int_User head , List_Rc_BTree_int_User tail );
List_Rc_BTree_int_User BoxedNil_Rc_BTree_int_User ();
__attribute__((weak)) List_Rc_BTree_int_User Default_List_Rc_BTree_int_User () {
  return BoxedNil_Rc_BTree_int_User ();
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
List_Rc_BTree_int_User tail_List_Rc_BTree_int_User (List_Rc_BTree_int_User list );
List_Rc_BTree_int_User drop_List_Rc_BTree_int_User (size_t len , List_Rc_BTree_int_User list );
Maybe_Rc_BTree_int_User head_List_Rc_BTree_int_User (List_Rc_BTree_int_User list );
List_Rc_BTree_int_User nthcdr_List_Rc_BTree_int_User (size_t index , List_Rc_BTree_int_User list );
Maybe_Rc_BTree_int_User nth_List_Rc_BTree_int_User (size_t index , List_Rc_BTree_int_User list );
size_t hasLen_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , size_t desired );
size_t len_List_Rc_BTree_int_User (List_Rc_BTree_int_User list );
List_Rc_BTree_int_User__H_Table * const get_List_Rc_BTree_int_User__H_Table ();
void free_List_Rc_BTree_int_User_x (List_Rc_BTree_int_User_x * this );
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
  union { /* ciciliUnion1833 */
    struct { /* ciciliStruct1834 */
      List_Rc_BTree_int_User __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct1835 */
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
  union { /* ciciliUnion1870 */
    struct { /* ciciliStruct1871 */
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
  union { /* ciciliUnion1930 */
    struct { /* ciciliStruct1931 */
      List_BTree_int_User_pair_t __h_0_mem ;
      List_Rc_BTree_int_User __h_1_mem ;
    } Branch , _2 ;
    struct { /* ciciliStruct1932 */
      List_BTree_int_User_pair_t __h_0_mem ;
      List_Rc_BTree_int_User __h_1_mem ;
    } Internal , _1 ;
    struct { /* ciciliStruct1933 */
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
  { /* cicili#Let2010 */
    // ----------
    ;
    ({ /* cicili#Let2012 */
      bool __h_case_result  = (true  &&  ((error . __h_ctor ) ==  __h_ERR_INVALID_OBJECT_t  ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block2017 */
          printf ("invalid B-Tree object");
        }
      else
        { /* cicili#Let2022 */
          typeof((((error . __h_data ). ERR_INVALID_ORDER ). __h_0_mem )) order ;
          // ----------
          ;
          ({ /* cicili#Let2024 */
            bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_INVALID_ORDER_t  ) &&  ({ /* cicili#Progn2025 */
                  (order  =  (((error . __h_data ). ERR_INVALID_ORDER ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block2031 */
                printf ("invalid B-Tree order: %zu", order );
              }
            else
              { /* cicili#Let2036 */
                typeof((((error . __h_data ). ERR_UNIQUE_KEY ). __h_0_mem )) item ;
                // ----------
                ;
                ({ /* cicili#Let2038 */
                  bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_UNIQUE_KEY_t  ) &&  ({ /* cicili#Progn2039 */
                        (item  =  (((error . __h_data ). ERR_UNIQUE_KEY ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block2045 */
                      { /* cicili#Block2047 */
                        printf ("unique key: ");
                        ({ /* cicili#Let2054 */
                          typeof((item . __h_0_mem )) id ;
                          typeof((item . __h_1_mem )) __h_match2052_1_arg ;
                          typeof((__h_match2052_1_arg . __h_0_mem )) wname ;
                          typeof((__h_match2052_1_arg . __h_1_mem )) salary ;
                          // ----------
                          ;
                          ({ /* cicili#Let2056 */
                            bool __h_case_result  = (true  &&  ((({ /* cicili#Progn2057 */
                                    (id  =  (item . __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn2059 */
                                    (__h_match2052_1_arg  =  (item . __h_1_mem ) );
                                    true ;
                                  }) ) &&  (true  &&  (({ /* cicili#Progn2061 */
                                      (wname  =  (__h_match2052_1_arg . __h_0_mem ) );
                                      true ;
                                    }) &&  ({ /* cicili#Progn2063 */
                                      (salary  =  (__h_match2052_1_arg . __h_1_mem ) );
                                      true ;
                                    }) ) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn2068 */
                                ({ /* cicili#Let2072 */
                                  __auto_type match2071  = get_Cell_String (wname );
                                  typeof((((match2071 . __h_data ). Just ). __h_0_mem )) name ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let2075 */
                                    bool __h_case_result  = (true  &&  (((match2071 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2076 */
                                          (name  =  (((match2071 . __h_data ). Just ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn2081 */
                                        (fprintf (stdout , "(%d, '", id ) +  show_String (stdout , name ) +  fprintf (stdout , "', %d)", salary ) );
                                      }) : ({ /* cicili#Let2085 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn2087 */
                                          fprintf (stdout , "%d, but item is deleted in another version!", id );
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let2091 */
                                // ----------
                                ;
                                ({ /* cicili#Progn2093 */
                                  0;
                                });
                              }));
                          });
                        });
                      }
                    }
                  else
                    { /* cicili#Let2098 */
                      typeof((((error . __h_data ). ERR_NOT_FOUND ). __h_0_mem )) key ;
                      // ----------
                      ;
                      ({ /* cicili#Let2100 */
                        bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_NOT_FOUND_t  ) &&  ({ /* cicili#Progn2101 */
                              (key  =  (((error . __h_data ). ERR_NOT_FOUND ). __h_0_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        
                        if (__h_case_result )
                          { /* cicili#Block2107 */
                            { /* cicili#Block2109 */
                              printf ("key not found: ");
                              fprintf (stdout , "%d", key );
                            }
                          }
                        else
                          { /* cicili#Let2117 */
                            // ----------
                            ;
                            ({ /* cicili#Let2119 */
                              bool __h_case_result  = (true  &&  ((error . __h_ctor ) ==  __h_ERR_ACCESS_DEAD_CONS_t  ) );
                              // ----------
                              
                              if (__h_case_result )
                                { /* cicili#Block2124 */
                                  { /* cicili#Block2126 */
                                    printf ("dead cons");
                                  }
                                }
                              else
                                { /* cicili#Let2131 */
                                  typeof((((error . __h_data ). ERR_ACCESS_DEAD_CHILD ). __h_0_mem )) item ;
                                  typeof((((error . __h_data ). ERR_ACCESS_DEAD_CHILD ). __h_1_mem )) index ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let2133 */
                                    bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_ACCESS_DEAD_CHILD_t  ) &&  (({ /* cicili#Progn2134 */
                                            (item  =  (((error . __h_data ). ERR_ACCESS_DEAD_CHILD ). __h_0_mem ) );
                                            true ;
                                          }) &&  ({ /* cicili#Progn2136 */
                                            (index  =  (((error . __h_data ). ERR_ACCESS_DEAD_CHILD ). __h_1_mem ) );
                                            true ;
                                          }) ) ) );
                                    // ----------
                                    
                                    if (__h_case_result )
                                      { /* cicili#Block2142 */
                                        { /* cicili#Block2144 */
                                          printf ("dead child at index: %zu of item: ", index );
                                          ({ /* cicili#Let2151 */
                                            typeof((item . __h_0_mem )) id ;
                                            typeof((item . __h_1_mem )) __h_match2149_1_arg ;
                                            typeof((__h_match2149_1_arg . __h_0_mem )) wname ;
                                            typeof((__h_match2149_1_arg . __h_1_mem )) salary ;
                                            // ----------
                                            ;
                                            ({ /* cicili#Let2153 */
                                              bool __h_case_result  = (true  &&  ((({ /* cicili#Progn2154 */
                                                      (id  =  (item . __h_0_mem ) );
                                                      true ;
                                                    }) &&  ({ /* cicili#Progn2156 */
                                                      (__h_match2149_1_arg  =  (item . __h_1_mem ) );
                                                      true ;
                                                    }) ) &&  (true  &&  (({ /* cicili#Progn2158 */
                                                        (wname  =  (__h_match2149_1_arg . __h_0_mem ) );
                                                        true ;
                                                      }) &&  ({ /* cicili#Progn2160 */
                                                        (salary  =  (__h_match2149_1_arg . __h_1_mem ) );
                                                        true ;
                                                      }) ) ) ) );
                                              // ----------
                                              
                                              ((__h_case_result ) ? ({ /* cicili#Progn2165 */
                                                  ({ /* cicili#Let2169 */
                                                    __auto_type match2168  = get_Cell_String (wname );
                                                    typeof((((match2168 . __h_data ). Just ). __h_0_mem )) name ;
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Let2172 */
                                                      bool __h_case_result  = (true  &&  (((match2168 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2173 */
                                                            (name  =  (((match2168 . __h_data ). Just ). __h_0_mem ) );
                                                            true ;
                                                          }) ) );
                                                      // ----------
                                                      
                                                      ((__h_case_result ) ? ({ /* cicili#Progn2178 */
                                                          (fprintf (stdout , "(%d, '", id ) +  show_String (stdout , name ) +  fprintf (stdout , "', %d)", salary ) );
                                                        }) : ({ /* cicili#Let2182 */
                                                          // ----------
                                                          ;
                                                          ({ /* cicili#Progn2184 */
                                                            fprintf (stdout , "%d, but item is deleted in another version!", id );
                                                          });
                                                        }));
                                                    });
                                                  });
                                                }) : ({ /* cicili#Let2188 */
                                                  // ----------
                                                  ;
                                                  ({ /* cicili#Progn2190 */
                                                    0;
                                                  });
                                                }));
                                            });
                                          });
                                        }
                                      }
                                    else
                                      { /* cicili#Let2195 */
                                        typeof((((error . __h_data ). ERR_INVALID_BRANCH ). __h_0_mem )) branch ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let2197 */
                                          bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_INVALID_BRANCH_t  ) &&  ({ /* cicili#Progn2198 */
                                                (branch  =  (((error . __h_data ). ERR_INVALID_BRANCH ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          if (__h_case_result )
                                            { /* cicili#Block2204 */
                                              { /* cicili#Block2206 */
                                                printf ("invalid branch: ");
                                                (branch -> __h_table -> show )(stdout , branch );
                                              }
                                            }
                                          else
                                            { /* cicili#Let2213 */
                                              typeof((((error . __h_data ). ERR_CANT_BORROW ). __h_0_mem )) reason ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let2215 */
                                                bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_CANT_BORROW_t  ) &&  ({ /* cicili#Progn2216 */
                                                      (reason  =  (((error . __h_data ). ERR_CANT_BORROW ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                if (__h_case_result )
                                                  { /* cicili#Block2222 */
                                                    printf ("borrow error: %s", reason );
                                                  }
                                                else
                                                  { /* cicili#Let2227 */
                                                    // ----------
                                                    ;
                                                    { /* cicili#Block2229 */
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
  { /* cicili#Let2241 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_INVALID_OBJECT_t });
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_INVALID_ORDER (size_t order ) {
  { /* cicili#Let2246 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_INVALID_ORDER_t , .__h_data.ERR_INVALID_ORDER = { order }});
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_UNIQUE_KEY (BTree_int_User_pair_t item ) {
  { /* cicili#Let2251 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_UNIQUE_KEY_t , .__h_data.ERR_UNIQUE_KEY = { item }});
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_NOT_FOUND (int key ) {
  { /* cicili#Let2257 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_NOT_FOUND_t , .__h_data.ERR_NOT_FOUND = { key }});
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_ACCESS_DEAD_CHILD (BTree_int_User_pair_t item , size_t index ) {
  { /* cicili#Let2262 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_ACCESS_DEAD_CHILD_t , .__h_data.ERR_ACCESS_DEAD_CHILD = { item , index }});
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_INVALID_BRANCH (BTree_int_User branch ) {
  { /* cicili#Let2268 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_INVALID_BRANCH_t , .__h_data.ERR_INVALID_BRANCH = { branch }});
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_CANT_BORROW (char * reason ) {
  { /* cicili#Let2273 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_CANT_BORROW_t , .__h_data.ERR_CANT_BORROW = { reason }});
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_ACCESS_DEAD_CONS () {
  { /* cicili#Let2278 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h___t });
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
  { /* cicili#Let2294 */
    Either_BTree_int_User_Error_BTree_int_User instance  = ((Either_BTree_int_User_Error_BTree_int_User){ get_Either_BTree_int_User_Error_BTree_int_User__H_Table (), __h_Right_t , .__h_data.Right = { value }});
    // ----------
    return instance ;
  }
}
Either_BTree_int_User_Error_BTree_int_User Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_Error error ) {
  { /* cicili#Let2299 */
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
  { /* cicili#Let2315 */
    Maybe_BTree_int_User instance  = ((Maybe_BTree_int_User){ get_Maybe_BTree_int_User__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_BTree_int_User Nothing_BTree_int_User () {
  { /* cicili#Let2320 */
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
  { /* cicili#Let2338 */
    Maybe_BTree_int_User_pair_t instance  = ((Maybe_BTree_int_User_pair_t){ get_Maybe_BTree_int_User_pair_t__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_BTree_int_User_pair_t Nothing_BTree_int_User_pair_t () {
  { /* cicili#Let2343 */
    Maybe_BTree_int_User_pair_t instance  = ((Maybe_BTree_int_User_pair_t){ get_Maybe_BTree_int_User_pair_t__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_BTree_int_User_pair_t__H_IMPL__ */ 
#ifndef __List_BTree_int_User_pair_t__H_IMPL__
#define __List_BTree_int_User_pair_t__H_IMPL__
#ifndef __Maybe_List_BTree_int_User_pair_t_x__H_IMPL__
#define __Maybe_List_BTree_int_User_pair_t_x__H_IMPL__
void free_Maybe_List_BTree_int_User_pair_t_x (Maybe_List_BTree_int_User_pair_t_x * this ) {
}
const Maybe_List_BTree_int_User_pair_t_x__H_Table * const get_Maybe_List_BTree_int_User_pair_t_x__H_Table () {
  static const Maybe_List_BTree_int_User_pair_t_x__H_Table table  = { free_Maybe_List_BTree_int_User_pair_t_x };
  return (&table );
}
Maybe_List_BTree_int_User_pair_t_x Just_List_BTree_int_User_pair_t_x (List_BTree_int_User_pair_t_x value ) {
  { /* cicili#Let2363 */
    Maybe_List_BTree_int_User_pair_t_x instance  = ((Maybe_List_BTree_int_User_pair_t_x){ get_Maybe_List_BTree_int_User_pair_t_x__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_BTree_int_User_pair_t_x Nothing_List_BTree_int_User_pair_t_x () {
  { /* cicili#Let2368 */
    Maybe_List_BTree_int_User_pair_t_x instance  = ((Maybe_List_BTree_int_User_pair_t_x){ get_Maybe_List_BTree_int_User_pair_t_x__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_BTree_int_User_pair_t_x__H_IMPL__ */ 
#ifndef __Box_List_BTree_int_User_pair_t__H_IMPL__
#define __Box_List_BTree_int_User_pair_t__H_IMPL__
Box_List_BTree_int_User_pair_t new_Box_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t_x pointer ) {
  return ({ /* cicili#Let2375 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      __auto_type holder  = ((List_BTree_int_User_pair_t_x *)malloc (sizeof(List_BTree_int_User_pair_t_x *)));
      // ----------
      (*count ) = 1;
      (*holder ) = pointer ;
      __h_Hold_List_BTree_int_User_pair_t_x (holder , count , ((size_t)pointer ));
    });
}
Box_List_BTree_int_User_pair_t clone_Box_List_BTree_int_User_pair_t (Box_List_BTree_int_User_pair_t rc ) {
  return ({ /* cicili#Let2384 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let2386 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn2387 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2389 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn2391 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn2396 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Progn2399 */
                (++(*count ));
                __h_Hold_List_BTree_int_User_pair_t_x (pointer , count , address );
              }) : Gone_List_BTree_int_User_pair_t_x ());
          }) : ({ /* cicili#Let2405 */
            // ----------
            ;
            ({ /* cicili#Progn2407 */
              Gone_List_BTree_int_User_pair_t_x ();
            });
          }));
      });
    });
}
Maybe_List_BTree_int_User_pair_t_x take_Box_List_BTree_int_User_pair_t (Box_List_BTree_int_User_pair_t * this ) {
  return ({ /* cicili#Let2415 */
      typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let2417 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn2418 */
                  (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2420 */
                  (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn2422 */
                (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn2427 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Let2431 */
                __auto_type result  = Just_List_BTree_int_User_pair_t_x ((*pointer ));
                // ----------
                if ((*count ) >=  1 )
                  { /* cicili#Block2437 */
                    (*count ) = 0;
                    (*pointer ) = NULL ;
                  }
                result ;
              }) : Nothing_List_BTree_int_User_pair_t_x ());
          }) : ({ /* cicili#Let2442 */
            // ----------
            ;
            ({ /* cicili#Progn2444 */
              Nothing_List_BTree_int_User_pair_t_x ();
            });
          }));
      });
    });
}
Maybe_List_BTree_int_User_pair_t_x get_Box_List_BTree_int_User_pair_t (Box_List_BTree_int_User_pair_t rc ) {
  return ({ /* cicili#Let2452 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let2454 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn2455 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2457 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn2459 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn2464 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) >  0 ) )) ? Just_List_BTree_int_User_pair_t_x ((*pointer )) : Nothing_List_BTree_int_User_pair_t_x ());
          }) : ({ /* cicili#Let2471 */
            // ----------
            ;
            ({ /* cicili#Progn2473 */
              Nothing_List_BTree_int_User_pair_t_x ();
            });
          }));
      });
    });
}
void free_Box_List_BTree_int_User_pair_t (Box_List_BTree_int_User_pair_t * this ) {
  { /* cicili#Let2482 */
    typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
    typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
    // ----------
    ;
    ({ /* cicili#Let2484 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn2485 */
                (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn2487 */
                (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                true ;
              }) ) &&  ({ /* cicili#Progn2489 */
              (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block2495 */
          if (((*count ) ==  0 ) &&  ((*pointer ) ==  NULL  ) )
            { /* cicili#Block2498 */
              free (((void *)count ));
              free (((void *)pointer ));
              (*this ) = Gone_List_BTree_int_User_pair_t_x ();
            }
          else
            {
            if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
              { /* cicili#Block2506 */
                if ((*count ) ==  1 )
                  { /* cicili#Block2509 */
                    free_List_BTree_int_User_pair_t_x (pointer );
                    (*count ) = 0;
                    free (((void *)count ));
                    (*pointer ) = NULL ;
                    free (((void *)pointer ));
                    (*this ) = Gone_List_BTree_int_User_pair_t_x ();
                  }
                else
                  (--(*count ));
              }
              }        }
      else
        { /* cicili#Let2519 */
          // ----------
          ;
          ({ /* cicili#Let2521 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Gone_t  ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block2526 */
              }
          });
        }
    });
  }
}
const Box_List_BTree_int_User_pair_t__H_Table * const get_Box_List_BTree_int_User_pair_t__H_Table () {
  static const Box_List_BTree_int_User_pair_t__H_Table table  = { free_Box_List_BTree_int_User_pair_t , new_Box_List_BTree_int_User_pair_t , clone_Box_List_BTree_int_User_pair_t , take_Box_List_BTree_int_User_pair_t , get_Box_List_BTree_int_User_pair_t };
  return (&table );
}
Box_List_BTree_int_User_pair_t __h_Hold_List_BTree_int_User_pair_t_x (List_BTree_int_User_pair_t_x * pointer , int * count , size_t address ) {
  { /* cicili#Let2537 */
    Box_List_BTree_int_User_pair_t instance  = ((Box_List_BTree_int_User_pair_t){ get_Box_List_BTree_int_User_pair_t__H_Table (), __h_Hold_t , .__h_data.Hold = { pointer , count , address }});
    // ----------
    return instance ;
  }
}
Box_List_BTree_int_User_pair_t Gone_List_BTree_int_User_pair_t_x () {
  { /* cicili#Let2542 */
    Box_List_BTree_int_User_pair_t instance  = ((Box_List_BTree_int_User_pair_t){ get_Box_List_BTree_int_User_pair_t__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Box_List_BTree_int_User_pair_t__H_IMPL__ */ 
BTree_int_User_pair_t * toArray_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , BTree_int_User_pair_t term ) {
  BTree_int_User_pair_t * array (List_BTree_int_User_pair_t list , size_t count ) {
    return ({ /* cicili#Let2549 */
        __auto_type __h_matchbox  = list ;
        // ----------
        ({ /* cicili#Let2553 */
          __auto_type match2552  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match2552 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let2556 */
            bool __h_case_result  = (true  &&  (((match2552 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2557 */
                  (unboxed  =  (((match2552 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn2562 */
                ({ /* cicili#Let2566 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  ;
                  ({ /* cicili#Let2568 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn2569 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn2571 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn2576 */
                        ({ /* cicili#Let2578 */
                          BTree_int_User_pair_t * arr  = array (tail , (count  +  1 ));
                          // ----------
                          arr [count ] = head ;
                          arr ;
                        });
                      }) : ({ /* cicili#Let2582 */
                        // ----------
                        ;
                        ({ /* cicili#Progn2584 */
                          ({ /* cicili#Let2586 */
                            BTree_int_User_pair_t * arr  = calloc (count , sizeof(BTree_int_User_pair_t));
                            // ----------
                            arr [(count  -  1 )] = term ;
                            arr ;
                          });
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let2590 */
                // ----------
                ;
                ({ /* cicili#Progn2592 */
                  ({ /* cicili#Let2594 */
                    BTree_int_User_pair_t * arr  = calloc (count , sizeof(BTree_int_User_pair_t));
                    // ----------
                    arr [(count  -  1 )] = term ;
                    arr ;
                  });
                });
              }));
          });
        });
      });
  }
  return array (list , 0);
}
List_BTree_int_User_pair_t wrap_List_BTree_int_User_pair_t (const BTree_int_User_pair_t item ) {
  return BoxedCons_BTree_int_User_pair_t (item , BoxedNil_BTree_int_User_pair_t ());
}
List_BTree_int_User_pair_t pure_List_BTree_int_User_pair_t (const BTree_int_User_pair_t * buf , size_t len ) {
  return (((buf  ==  NULL  )) ? BoxedNil_BTree_int_User_pair_t () : ({ /* cicili#Let2605 */
        BTree_int_User_pair_t item  = (*buf );
        // ----------
        (((len  ==  0 )) ? BoxedNil_BTree_int_User_pair_t () : BoxedCons_BTree_int_User_pair_t (item , pure_List_BTree_int_User_pair_t ((++buf ), (--len ))));
      }));
}
size_t show_List_BTree_int_User_pair_t (CFile file , List_BTree_int_User_pair_t list ) {
  return ({ /* cicili#Let2614 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let2618 */
        __auto_type match2617  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match2617 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let2621 */
          bool __h_case_result  = (true  &&  (((match2617 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2622 */
                (unboxed  =  (((match2617 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2627 */
              ({ /* cicili#Let2631 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let2633 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn2634 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn2636 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2641 */
                      (({ /* cicili#Let2644 */
                          __auto_type __h_matchbox  = tail ;
                          // ----------
                          ({ /* cicili#Let2648 */
                            __auto_type match2647  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                            typeof((((match2647 . __h_data ). Just ). __h_0_mem )) unboxed ;
                            // ----------
                            ;
                            ({ /* cicili#Let2651 */
                              bool __h_case_result  = (true  &&  (((match2647 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2652 */
                                    (unboxed  =  (((match2647 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* cicili#Progn2657 */
                                  ({ /* cicili#Let2661 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Let2663 */
                                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Cons_t  ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn2667 */
                                          (({ /* cicili#Let2674 */
                                              typeof((head . __h_0_mem )) id ;
                                              typeof((head . __h_1_mem )) __h_match2672_1_arg ;
                                              typeof((__h_match2672_1_arg . __h_0_mem )) wname ;
                                              typeof((__h_match2672_1_arg . __h_1_mem )) salary ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let2676 */
                                                bool __h_case_result  = (true  &&  ((({ /* cicili#Progn2677 */
                                                        (id  =  (head . __h_0_mem ) );
                                                        true ;
                                                      }) &&  ({ /* cicili#Progn2679 */
                                                        (__h_match2672_1_arg  =  (head . __h_1_mem ) );
                                                        true ;
                                                      }) ) &&  (true  &&  (({ /* cicili#Progn2681 */
                                                          (wname  =  (__h_match2672_1_arg . __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn2683 */
                                                          (salary  =  (__h_match2672_1_arg . __h_1_mem ) );
                                                          true ;
                                                        }) ) ) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn2688 */
                                                    ({ /* cicili#Let2692 */
                                                      __auto_type match2691  = get_Cell_String (wname );
                                                      typeof((((match2691 . __h_data ). Just ). __h_0_mem )) name ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let2695 */
                                                        bool __h_case_result  = (true  &&  (((match2691 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2696 */
                                                              (name  =  (((match2691 . __h_data ). Just ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn2701 */
                                                            (fprintf (file , "(%d, '", id ) +  show_String (file , name ) +  fprintf (file , "', %d)", salary ) );
                                                          }) : ({ /* cicili#Let2705 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn2707 */
                                                              fprintf (file , "%d, but item is deleted in another version!", id );
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  }) : ({ /* cicili#Let2711 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn2713 */
                                                      0;
                                                    });
                                                  }));
                                              });
                                            }) +  fprintf (file , "%s", " ") );
                                        }) : ({ /* cicili#Let2717 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Progn2719 */
                                            ({ /* cicili#Let2726 */
                                              typeof((head . __h_0_mem )) id ;
                                              typeof((head . __h_1_mem )) __h_match2724_1_arg ;
                                              typeof((__h_match2724_1_arg . __h_0_mem )) wname ;
                                              typeof((__h_match2724_1_arg . __h_1_mem )) salary ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let2728 */
                                                bool __h_case_result  = (true  &&  ((({ /* cicili#Progn2729 */
                                                        (id  =  (head . __h_0_mem ) );
                                                        true ;
                                                      }) &&  ({ /* cicili#Progn2731 */
                                                        (__h_match2724_1_arg  =  (head . __h_1_mem ) );
                                                        true ;
                                                      }) ) &&  (true  &&  (({ /* cicili#Progn2733 */
                                                          (wname  =  (__h_match2724_1_arg . __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn2735 */
                                                          (salary  =  (__h_match2724_1_arg . __h_1_mem ) );
                                                          true ;
                                                        }) ) ) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn2740 */
                                                    ({ /* cicili#Let2744 */
                                                      __auto_type match2743  = get_Cell_String (wname );
                                                      typeof((((match2743 . __h_data ). Just ). __h_0_mem )) name ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let2747 */
                                                        bool __h_case_result  = (true  &&  (((match2743 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2748 */
                                                              (name  =  (((match2743 . __h_data ). Just ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn2753 */
                                                            (fprintf (file , "(%d, '", id ) +  show_String (file , name ) +  fprintf (file , "', %d)", salary ) );
                                                          }) : ({ /* cicili#Let2757 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn2759 */
                                                              fprintf (file , "%d, but item is deleted in another version!", id );
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  }) : ({ /* cicili#Let2763 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn2765 */
                                                      0;
                                                    });
                                                  }));
                                              });
                                            });
                                          });
                                        }));
                                    });
                                  });
                                }) : ({ /* cicili#Let2769 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Progn2771 */
                                    0;
                                  });
                                }));
                            });
                          });
                        }) +  show_List_BTree_int_User_pair_t (file , tail ) );
                    }) : ({ /* cicili#Let2776 */
                      // ----------
                      ;
                      ({ /* cicili#Progn2778 */
                        0;
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let2782 */
              // ----------
              ;
              ({ /* cicili#Progn2784 */
                0;
              });
            }));
        });
      });
    });
}
List_BTree_int_User_pair_t copy_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
  return ({ /* cicili#Let2789 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let2793 */
        __auto_type match2792  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match2792 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let2796 */
          bool __h_case_result  = (true  &&  (((match2792 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2797 */
                (unboxed  =  (((match2792 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2802 */
              ({ /* cicili#Let2806 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let2808 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn2809 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn2811 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2816 */
                      BoxedCons_BTree_int_User_pair_t (head , copy_List_BTree_int_User_pair_t (tail ));
                    }) : ({ /* cicili#Let2822 */
                      // ----------
                      ;
                      ({ /* cicili#Progn2824 */
                        BoxedNil_BTree_int_User_pair_t ();
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let2829 */
              // ----------
              ;
              ({ /* cicili#Progn2831 */
                BoxedNil_BTree_int_User_pair_t ();
              });
            }));
        });
      });
    });
}
List_BTree_int_User_pair_t replaceAt_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , BTree_int_User_pair_t item , size_t index ) {
  return ({ /* cicili#Let2837 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let2841 */
        __auto_type match2840  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match2840 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let2844 */
          bool __h_case_result  = (true  &&  (((match2840 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2845 */
                (unboxed  =  (((match2840 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2850 */
              ({ /* cicili#Let2854 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let2856 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn2857 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn2859 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) &&  (index  >  0 ) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2864 */
                      BoxedCons_BTree_int_User_pair_t (head , replaceAt_List_BTree_int_User_pair_t (tail , item , (index  -  1 )));
                    }) : ({ /* cicili#Let2870 */
                      // ----------
                      ;
                      ({ /* cicili#Progn2872 */
                        ({ /* cicili#Let2875 */
                          __auto_type __h_matchbox  = list ;
                          // ----------
                          ({ /* cicili#Let2879 */
                            __auto_type match2878  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                            typeof((((match2878 . __h_data ). Just ). __h_0_mem )) unboxed ;
                            // ----------
                            ;
                            ({ /* cicili#Let2882 */
                              bool __h_case_result  = (true  &&  (((match2878 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2883 */
                                    (unboxed  =  (((match2878 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* cicili#Progn2888 */
                                  ({ /* cicili#Let2892 */
                                    typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) taill ;
                                    // ----------
                                    ;
                                    ({ /* cicili#Let2894 */
                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn2895 */
                                            (taill  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn2900 */
                                          BoxedCons_BTree_int_User_pair_t (item , clone_Box_List_BTree_int_User_pair_t (taill ));
                                        }) : ({ /* cicili#Let2906 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Progn2908 */
                                            clone_Box_List_BTree_int_User_pair_t (list );
                                          });
                                        }));
                                    });
                                  });
                                }) : ({ /* cicili#Let2913 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Progn2915 */
                                    clone_Box_List_BTree_int_User_pair_t (list );
                                  });
                                }));
                            });
                          });
                        });
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let2920 */
              // ----------
              ;
              ({ /* cicili#Progn2922 */
                clone_Box_List_BTree_int_User_pair_t (list );
              });
            }));
        });
      });
    });
}
List_BTree_int_User_pair_t deleteAt_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , size_t index ) {
  return ({ /* cicili#Let2928 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let2932 */
        __auto_type match2931  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match2931 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let2935 */
          bool __h_case_result  = (true  &&  (((match2931 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2936 */
                (unboxed  =  (((match2931 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2941 */
              ({ /* cicili#Let2945 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let2947 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn2948 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn2950 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) &&  (index  >  0 ) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2955 */
                      BoxedCons_BTree_int_User_pair_t (head , deleteAt_List_BTree_int_User_pair_t (tail , (index  -  1 )));
                    }) : ({ /* cicili#Let2961 */
                      // ----------
                      ;
                      ({ /* cicili#Progn2963 */
                        ({ /* cicili#Let2966 */
                          __auto_type __h_matchbox  = list ;
                          // ----------
                          ({ /* cicili#Let2970 */
                            __auto_type match2969  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                            typeof((((match2969 . __h_data ). Just ). __h_0_mem )) unboxed ;
                            // ----------
                            ;
                            ({ /* cicili#Let2973 */
                              bool __h_case_result  = (true  &&  (((match2969 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2974 */
                                    (unboxed  =  (((match2969 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* cicili#Progn2979 */
                                  ({ /* cicili#Let2983 */
                                    typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) taill ;
                                    // ----------
                                    ;
                                    ({ /* cicili#Let2985 */
                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn2986 */
                                            (taill  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn2991 */
                                          clone_Box_List_BTree_int_User_pair_t (taill );
                                        }) : ({ /* cicili#Let2996 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Progn2998 */
                                            clone_Box_List_BTree_int_User_pair_t (list );
                                          });
                                        }));
                                    });
                                  });
                                }) : ({ /* cicili#Let3003 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Progn3005 */
                                    clone_Box_List_BTree_int_User_pair_t (list );
                                  });
                                }));
                            });
                          });
                        });
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3010 */
              // ----------
              ;
              ({ /* cicili#Progn3012 */
                clone_Box_List_BTree_int_User_pair_t (list );
              });
            }));
        });
      });
    });
}
List_BTree_int_User_pair_t insertAt_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , BTree_int_User_pair_t item , size_t index ) {
  return ({ /* cicili#Let3018 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let3022 */
        __auto_type match3021  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3021 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3025 */
          bool __h_case_result  = (true  &&  (((match3021 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3026 */
                (unboxed  =  (((match3021 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3031 */
              ({ /* cicili#Let3035 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let3037 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3038 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn3040 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) &&  (index  >  0 ) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3045 */
                      BoxedCons_BTree_int_User_pair_t (head , insertAt_List_BTree_int_User_pair_t (tail , item , (index  -  1 )));
                    }) : ({ /* cicili#Let3051 */
                      // ----------
                      ;
                      ({ /* cicili#Progn3053 */
                        BoxedCons_BTree_int_User_pair_t (item , clone_Box_List_BTree_int_User_pair_t (list ));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3059 */
              // ----------
              ;
              ({ /* cicili#Progn3061 */
                BoxedCons_BTree_int_User_pair_t (item , clone_Box_List_BTree_int_User_pair_t (list ));
              });
            }));
        });
      });
    });
}
List_BTree_int_User_pair_t replace_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , BTree_int_User_pair_t item , List_BTree_int_User_pair_t aimed ) {
  return ({ /* cicili#Let3069 */
      __auto_type match3068  = get_Box_List_BTree_int_User_pair_t (list );
      typeof((((match3068 . __h_data ). Just ). __h_0_mem )) listp ;
      // ----------
      ;
      ({ /* cicili#Let3072 */
        bool __h_case_result  = (true  &&  (((match3068 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3073 */
              (listp  =  (((match3068 . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3078 */
            ({ /* cicili#Let3082 */
              __auto_type match3081  = get_Box_List_BTree_int_User_pair_t (aimed );
              typeof((((match3081 . __h_data ). Just ). __h_0_mem )) aimedp ;
              // ----------
              ;
              ({ /* cicili#Let3085 */
                bool __h_case_result  = (true  &&  (((match3081 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3086 */
                      (aimedp  =  (((match3081 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn3091 */
                    ({ /* cicili#Let3095 */
                      typeof((((listp -> __h_data ). Cons ). __h_0_mem )) head ;
                      typeof((((listp -> __h_data ). Cons ). __h_1_mem )) tail ;
                      // ----------
                      ;
                      ({ /* cicili#Let3097 */
                        bool __h_case_result  = (true  &&  (((listp -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3098 */
                                  (head  =  (((listp -> __h_data ). Cons ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn3100 */
                                  (tail  =  (((listp -> __h_data ). Cons ). __h_1_mem ) );
                                  true ;
                                }) ) &&  (listp  !=  aimedp  ) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn3105 */
                            BoxedCons_BTree_int_User_pair_t (head , replace_List_BTree_int_User_pair_t (tail , item , aimed ));
                          }) : ({ /* cicili#Let3111 */
                            // ----------
                            ;
                            ({ /* cicili#Progn3113 */
                              ({ /* cicili#Let3117 */
                                typeof((((aimedp -> __h_data ). Cons ). __h_1_mem )) taill ;
                                // ----------
                                ;
                                ({ /* cicili#Let3119 */
                                  bool __h_case_result  = (true  &&  (((aimedp -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3120 */
                                        (taill  =  (((aimedp -> __h_data ). Cons ). __h_1_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn3125 */
                                      BoxedCons_BTree_int_User_pair_t (item , clone_Box_List_BTree_int_User_pair_t (taill ));
                                    }) : ({ /* cicili#Let3131 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn3133 */
                                        clone_Box_List_BTree_int_User_pair_t (list );
                                      });
                                    }));
                                });
                              });
                            });
                          }));
                      });
                    });
                  }) : ({ /* cicili#Let3138 */
                    // ----------
                    ;
                    ({ /* cicili#Progn3140 */
                      clone_Box_List_BTree_int_User_pair_t (list );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let3145 */
            // ----------
            ;
            ({ /* cicili#Progn3147 */
              clone_Box_List_BTree_int_User_pair_t (list );
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t delete_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , List_BTree_int_User_pair_t aimed ) {
  return ({ /* cicili#Let3154 */
      __auto_type match3153  = get_Box_List_BTree_int_User_pair_t (list );
      typeof((((match3153 . __h_data ). Just ). __h_0_mem )) listp ;
      // ----------
      ;
      ({ /* cicili#Let3157 */
        bool __h_case_result  = (true  &&  (((match3153 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3158 */
              (listp  =  (((match3153 . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3163 */
            ({ /* cicili#Let3167 */
              __auto_type match3166  = get_Box_List_BTree_int_User_pair_t (aimed );
              typeof((((match3166 . __h_data ). Just ). __h_0_mem )) aimedp ;
              // ----------
              ;
              ({ /* cicili#Let3170 */
                bool __h_case_result  = (true  &&  (((match3166 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3171 */
                      (aimedp  =  (((match3166 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn3176 */
                    ({ /* cicili#Let3180 */
                      typeof((((listp -> __h_data ). Cons ). __h_0_mem )) head ;
                      typeof((((listp -> __h_data ). Cons ). __h_1_mem )) tail ;
                      // ----------
                      ;
                      ({ /* cicili#Let3182 */
                        bool __h_case_result  = (true  &&  (((listp -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3183 */
                                  (head  =  (((listp -> __h_data ). Cons ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn3185 */
                                  (tail  =  (((listp -> __h_data ). Cons ). __h_1_mem ) );
                                  true ;
                                }) ) &&  (listp  !=  aimedp  ) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn3190 */
                            BoxedCons_BTree_int_User_pair_t (head , delete_List_BTree_int_User_pair_t (tail , aimed ));
                          }) : ({ /* cicili#Let3196 */
                            // ----------
                            ;
                            ({ /* cicili#Progn3198 */
                              ({ /* cicili#Let3202 */
                                typeof((((aimedp -> __h_data ). Cons ). __h_1_mem )) taill ;
                                // ----------
                                ;
                                ({ /* cicili#Let3204 */
                                  bool __h_case_result  = (true  &&  (((aimedp -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3205 */
                                        (taill  =  (((aimedp -> __h_data ). Cons ). __h_1_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn3210 */
                                      clone_Box_List_BTree_int_User_pair_t (taill );
                                    }) : ({ /* cicili#Let3215 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn3217 */
                                        clone_Box_List_BTree_int_User_pair_t (list );
                                      });
                                    }));
                                });
                              });
                            });
                          }));
                      });
                    });
                  }) : ({ /* cicili#Let3222 */
                    // ----------
                    ;
                    ({ /* cicili#Progn3224 */
                      clone_Box_List_BTree_int_User_pair_t (list );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let3229 */
            // ----------
            ;
            ({ /* cicili#Progn3231 */
              clone_Box_List_BTree_int_User_pair_t (list );
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t insert_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t llist , BTree_int_User_pair_t item , List_BTree_int_User_pair_t rlist ) {
  return ({ /* cicili#Let3238 */
      __auto_type match3237  = get_Box_List_BTree_int_User_pair_t (llist );
      typeof((((match3237 . __h_data ). Just ). __h_0_mem )) llistp ;
      // ----------
      ;
      ({ /* cicili#Let3241 */
        bool __h_case_result  = (true  &&  (((match3237 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3242 */
              (llistp  =  (((match3237 . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3247 */
            ({ /* cicili#Let3251 */
              __auto_type match3250  = get_Box_List_BTree_int_User_pair_t (rlist );
              typeof((((match3250 . __h_data ). Just ). __h_0_mem )) rlistp ;
              // ----------
              ;
              ({ /* cicili#Let3254 */
                bool __h_case_result  = (true  &&  (((match3250 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3255 */
                      (rlistp  =  (((match3250 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn3260 */
                    ({ /* cicili#Let3264 */
                      typeof((((llistp -> __h_data ). Cons ). __h_0_mem )) head ;
                      typeof((((llistp -> __h_data ). Cons ). __h_1_mem )) tail ;
                      // ----------
                      ;
                      ({ /* cicili#Let3266 */
                        bool __h_case_result  = (true  &&  (((llistp -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3267 */
                                  (head  =  (((llistp -> __h_data ). Cons ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn3269 */
                                  (tail  =  (((llistp -> __h_data ). Cons ). __h_1_mem ) );
                                  true ;
                                }) ) &&  (llistp  !=  rlistp  ) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn3274 */
                            BoxedCons_BTree_int_User_pair_t (head , insert_List_BTree_int_User_pair_t (tail , item , rlist ));
                          }) : ({ /* cicili#Let3280 */
                            // ----------
                            ;
                            ({ /* cicili#Progn3282 */
                              BoxedCons_BTree_int_User_pair_t (item , clone_Box_List_BTree_int_User_pair_t (rlist ));
                            });
                          }));
                      });
                    });
                  }) : ({ /* cicili#Let3288 */
                    // ----------
                    ;
                    ({ /* cicili#Progn3290 */
                      ({ /* cicili#Let3293 */
                        __auto_type nil_item  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let3295 */
                          __auto_type nil_item  = BoxedNil_BTree_int_User_pair_t ();
                          // ----------
                          ((void)((nil_item . __h_table )-> freeData ));
                          nil_item ;
                        });
                        // ----------
                        insert_List_BTree_int_User_pair_t (llist , item , nil_item );
                      });
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let3302 */
            // ----------
            ;
            ({ /* cicili#Progn3304 */
              BoxedCons_BTree_int_User_pair_t (item , clone_Box_List_BTree_int_User_pair_t (rlist ));
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t reverse_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
  List_BTree_int_User_pair_t _reverse (List_BTree_int_User_pair_t list , List_BTree_int_User_pair_t rlist ) {
    return ({ /* cicili#Let3312 */
        __auto_type __h_matchbox  = list ;
        // ----------
        ({ /* cicili#Let3316 */
          __auto_type match3315  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match3315 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let3319 */
            bool __h_case_result  = (true  &&  (((match3315 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3320 */
                  (unboxed  =  (((match3315 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn3325 */
                ({ /* cicili#Let3329 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  ;
                  ({ /* cicili#Let3331 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3332 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn3334 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn3339 */
                        _reverse (tail , BoxedCons_BTree_int_User_pair_t (head , rlist ));
                      }) : ({ /* cicili#Let3344 */
                        // ----------
                        ;
                        ({ /* cicili#Progn3346 */
                          clone_Box_List_BTree_int_User_pair_t (rlist );
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let3351 */
                // ----------
                ;
                ({ /* cicili#Progn3353 */
                  clone_Box_List_BTree_int_User_pair_t (rlist );
                });
              }));
          });
        });
      });
  }
  return ({ /* cicili#Let3357 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let3361 */
        __auto_type match3360  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3360 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3364 */
          bool __h_case_result  = (true  &&  (((match3360 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3365 */
                (unboxed  =  (((match3360 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3370 */
              ({ /* cicili#Let3374 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let3376 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3377 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn3379 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3384 */
                      _reverse (tail , BoxedCons_BTree_int_User_pair_t (head , BoxedNil_BTree_int_User_pair_t ()));
                    }) : ({ /* cicili#Let3390 */
                      // ----------
                      ;
                      ({ /* cicili#Progn3392 */
                        clone_Box_List_BTree_int_User_pair_t (list );
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3397 */
              // ----------
              ;
              ({ /* cicili#Progn3399 */
                clone_Box_List_BTree_int_User_pair_t (list );
              });
            }));
        });
      });
    });
}
List_BTree_int_User_pair_t append_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t llist , List_BTree_int_User_pair_t rlist ) {
  return ({ /* cicili#Let3405 */
      __auto_type __h_matchbox  = llist ;
      // ----------
      ({ /* cicili#Let3409 */
        __auto_type match3408  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3408 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3412 */
          bool __h_case_result  = (true  &&  (((match3408 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3413 */
                (unboxed  =  (((match3408 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3418 */
              ({ /* cicili#Let3422 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let3424 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3425 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn3427 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3432 */
                      BoxedCons_BTree_int_User_pair_t (head , append_List_BTree_int_User_pair_t (tail , rlist ));
                    }) : ({ /* cicili#Let3438 */
                      // ----------
                      ;
                      ({ /* cicili#Progn3440 */
                        clone_Box_List_BTree_int_User_pair_t (rlist );
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3445 */
              // ----------
              ;
              ({ /* cicili#Progn3447 */
                clone_Box_List_BTree_int_User_pair_t (rlist );
              });
            }));
        });
      });
    });
}
List_BTree_int_User_pair_t push_List_BTree_int_User_pair_t (BTree_int_User_pair_t item , List_BTree_int_User_pair_t list ) {
  return BoxedCons_BTree_int_User_pair_t (item , clone_Box_List_BTree_int_User_pair_t (list ));
}
List_BTree_int_User_pair_t take_List_BTree_int_User_pair_t (size_t len , List_BTree_int_User_pair_t list ) {
  return (((len  <=  0 )) ? BoxedNil_BTree_int_User_pair_t () : ({ /* cicili#Let3459 */
        __auto_type __h_matchbox  = list ;
        // ----------
        ({ /* cicili#Let3463 */
          __auto_type match3462  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match3462 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let3466 */
            bool __h_case_result  = (true  &&  (((match3462 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3467 */
                  (unboxed  =  (((match3462 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn3472 */
                ({ /* cicili#Let3476 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  ;
                  ({ /* cicili#Let3478 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3479 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn3481 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn3486 */
                        BoxedCons_BTree_int_User_pair_t (head , take_List_BTree_int_User_pair_t ((--len ), tail ));
                      }) : ({ /* cicili#Let3492 */
                        // ----------
                        ;
                        ({ /* cicili#Progn3494 */
                          BoxedNil_BTree_int_User_pair_t ();
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let3499 */
                // ----------
                ;
                ({ /* cicili#Progn3501 */
                  BoxedNil_BTree_int_User_pair_t ();
                });
              }));
          });
        });
      }));
}
List_BTree_int_User_pair_t last_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
  return ({ /* cicili#Let3507 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let3511 */
        __auto_type match3510  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3510 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3514 */
          bool __h_case_result  = (true  &&  (((match3510 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3515 */
                (unboxed  =  (((match3510 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3520 */
              ({ /* cicili#Let3524 */
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let3526 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3527 */
                        (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3532 */
                      ({ /* cicili#Let3535 */
                        __auto_type __h_matchbox  = tail ;
                        // ----------
                        ({ /* cicili#Let3539 */
                          __auto_type match3538  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                          typeof((((match3538 . __h_data ). Just ). __h_0_mem )) unboxed ;
                          // ----------
                          ;
                          ({ /* cicili#Let3542 */
                            bool __h_case_result  = (true  &&  (((match3538 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3543 */
                                  (unboxed  =  (((match3538 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn3548 */
                                ({ /* cicili#Let3552 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Let3554 */
                                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Nil_t  ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn3558 */
                                        clone_Box_List_BTree_int_User_pair_t (list );
                                      }) : ({ /* cicili#Let3563 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn3565 */
                                          last_List_BTree_int_User_pair_t (tail );
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let3570 */
                                // ----------
                                ;
                                ({ /* cicili#Progn3572 */
                                  clone_Box_List_BTree_int_User_pair_t (list );
                                });
                              }));
                          });
                        });
                      });
                    }) : ({ /* cicili#Let3577 */
                      // ----------
                      ;
                      ({ /* cicili#Progn3579 */
                        clone_Box_List_BTree_int_User_pair_t (list );
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3584 */
              // ----------
              ;
              ({ /* cicili#Progn3586 */
                clone_Box_List_BTree_int_User_pair_t (list );
              });
            }));
        });
      });
    });
}
List_BTree_int_User_pair_t init_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
  return ({ /* cicili#Let3592 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let3596 */
        __auto_type match3595  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3595 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3599 */
          bool __h_case_result  = (true  &&  (((match3595 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3600 */
                (unboxed  =  (((match3595 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3605 */
              ({ /* cicili#Let3609 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let3611 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3612 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn3614 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3619 */
                      ({ /* cicili#Let3622 */
                        __auto_type __h_matchbox  = tail ;
                        // ----------
                        ({ /* cicili#Let3626 */
                          __auto_type match3625  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                          typeof((((match3625 . __h_data ). Just ). __h_0_mem )) unboxed ;
                          // ----------
                          ;
                          ({ /* cicili#Let3629 */
                            bool __h_case_result  = (true  &&  (((match3625 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3630 */
                                  (unboxed  =  (((match3625 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn3635 */
                                ({ /* cicili#Let3639 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Let3641 */
                                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Cons_t  ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn3645 */
                                        BoxedCons_BTree_int_User_pair_t (head , init_List_BTree_int_User_pair_t (tail ));
                                      }) : ({ /* cicili#Let3651 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn3653 */
                                          BoxedNil_BTree_int_User_pair_t ();
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let3658 */
                                // ----------
                                ;
                                ({ /* cicili#Progn3660 */
                                  BoxedNil_BTree_int_User_pair_t ();
                                });
                              }));
                          });
                        });
                      });
                    }) : ({ /* cicili#Let3665 */
                      // ----------
                      ;
                      ({ /* cicili#Progn3667 */
                        BoxedNil_BTree_int_User_pair_t ();
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3672 */
              // ----------
              ;
              ({ /* cicili#Progn3674 */
                BoxedNil_BTree_int_User_pair_t ();
              });
            }));
        });
      });
    });
}
List_BTree_int_User_pair_t tail_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
  return drop_List_BTree_int_User_pair_t (1, list );
}
List_BTree_int_User_pair_t drop_List_BTree_int_User_pair_t (size_t len , List_BTree_int_User_pair_t list ) {
  return (((len  <=  0 )) ? clone_Box_List_BTree_int_User_pair_t (list ) : ({ /* cicili#Let3685 */
        __auto_type __h_matchbox  = list ;
        // ----------
        ({ /* cicili#Let3689 */
          __auto_type match3688  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match3688 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let3692 */
            bool __h_case_result  = (true  &&  (((match3688 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3693 */
                  (unboxed  =  (((match3688 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn3698 */
                ({ /* cicili#Let3702 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  ;
                  ({ /* cicili#Let3704 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3705 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn3710 */
                        drop_List_BTree_int_User_pair_t ((--len ), tail );
                      }) : ({ /* cicili#Let3715 */
                        // ----------
                        ;
                        ({ /* cicili#Progn3717 */
                          clone_Box_List_BTree_int_User_pair_t (list );
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let3722 */
                // ----------
                ;
                ({ /* cicili#Progn3724 */
                  clone_Box_List_BTree_int_User_pair_t (list );
                });
              }));
          });
        });
      }));
}
Maybe_BTree_int_User_pair_t head_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
  return nth_List_BTree_int_User_pair_t (0, list );
}
List_BTree_int_User_pair_t nthcdr_List_BTree_int_User_pair_t (size_t index , List_BTree_int_User_pair_t list ) {
  return ({ /* cicili#Let3734 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let3738 */
        __auto_type match3737  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3737 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3741 */
          bool __h_case_result  = (true  &&  (((match3737 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3742 */
                (unboxed  =  (((match3737 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3747 */
              ({ /* cicili#Let3751 */
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let3753 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3754 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) &&  (index  >  0 ) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3759 */
                      nthcdr_List_BTree_int_User_pair_t ((--index ), tail );
                    }) : ({ /* cicili#Let3764 */
                      // ----------
                      ;
                      ({ /* cicili#Progn3766 */
                        list ;
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3770 */
              // ----------
              ;
              ({ /* cicili#Progn3772 */
                list ;
              });
            }));
        });
      });
    });
}
Maybe_BTree_int_User_pair_t nth_List_BTree_int_User_pair_t (size_t index , List_BTree_int_User_pair_t list ) {
  return ({ /* cicili#Let3778 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let3782 */
        __auto_type match3781  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3781 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3785 */
          bool __h_case_result  = (true  &&  (((match3781 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3786 */
                (unboxed  =  (((match3781 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3791 */
              ({ /* cicili#Let3795 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let3797 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3798 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn3800 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3805 */
                      (((index  ==  0 )) ? Just_BTree_int_User_pair_t (head ) : (((index  <  0 )) ? Nothing_BTree_int_User_pair_t () : nth_List_BTree_int_User_pair_t ((--index ), tail )));
                    }) : ({ /* cicili#Let3814 */
                      // ----------
                      ;
                      ({ /* cicili#Progn3816 */
                        Nothing_BTree_int_User_pair_t ();
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3821 */
              // ----------
              ;
              ({ /* cicili#Progn3823 */
                Nothing_BTree_int_User_pair_t ();
              });
            }));
        });
      });
    });
}
size_t hasLen_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , size_t desired ) {
  return ({ /* cicili#Let3829 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let3833 */
        __auto_type match3832  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3832 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3836 */
          bool __h_case_result  = (true  &&  (((match3832 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3837 */
                (unboxed  =  (((match3832 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3842 */
              ({ /* cicili#Let3846 */
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let3848 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3849 */
                        (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3854 */
                      (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_BTree_int_User_pair_t (tail , (--desired )) ));
                    }) : ({ /* cicili#Let3860 */
                      // ----------
                      ;
                      ({ /* cicili#Progn3862 */
                        0;
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3866 */
              // ----------
              ;
              ({ /* cicili#Progn3868 */
                0;
              });
            }));
        });
      });
    });
}
size_t len_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
  return ({ /* cicili#Let3873 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let3877 */
        __auto_type match3876  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3876 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3880 */
          bool __h_case_result  = (true  &&  (((match3876 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3881 */
                (unboxed  =  (((match3876 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3886 */
              ({ /* cicili#Let3890 */
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let3892 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3893 */
                        (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3898 */
                      (1 +  len_List_BTree_int_User_pair_t (tail ) );
                    }) : ({ /* cicili#Let3903 */
                      // ----------
                      ;
                      ({ /* cicili#Progn3905 */
                        0;
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3909 */
              // ----------
              ;
              ({ /* cicili#Progn3911 */
                0;
              });
            }));
        });
      });
    });
}
void free_List_BTree_int_User_pair_t_x (List_BTree_int_User_pair_t_x * this_ptr ) {
  { /* cicili#Let3915 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let3921 */
      typeof((((this -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let3923 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3924 */
              (tail  =  (((this -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block3930 */
            { /* cicili#Block3932 */
              free (this );
              free_Box_List_BTree_int_User_pair_t ((&tail ));
            }
          }
        else
          { /* cicili#Let3940 */
            // ----------
            ;
            ({ /* cicili#Let3942 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Nil_t  ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block3947 */
                  { /* cicili#Block3949 */
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
  static List_BTree_int_User_pair_t__H_Table table  = { free_List_BTree_int_User_pair_t_x , toArray_List_BTree_int_User_pair_t , wrap_List_BTree_int_User_pair_t , pure_List_BTree_int_User_pair_t , show_List_BTree_int_User_pair_t , copy_List_BTree_int_User_pair_t , replaceAt_List_BTree_int_User_pair_t , deleteAt_List_BTree_int_User_pair_t , insertAt_List_BTree_int_User_pair_t , replace_List_BTree_int_User_pair_t , delete_List_BTree_int_User_pair_t , insert_List_BTree_int_User_pair_t , reverse_List_BTree_int_User_pair_t , append_List_BTree_int_User_pair_t , push_List_BTree_int_User_pair_t , take_List_BTree_int_User_pair_t , last_List_BTree_int_User_pair_t , init_List_BTree_int_User_pair_t , tail_List_BTree_int_User_pair_t , drop_List_BTree_int_User_pair_t , head_List_BTree_int_User_pair_t , nthcdr_List_BTree_int_User_pair_t , nth_List_BTree_int_User_pair_t , hasLen_List_BTree_int_User_pair_t , len_List_BTree_int_User_pair_t };
  return (&table );
}
List_BTree_int_User_pair_t BoxedCons_BTree_int_User_pair_t (BTree_int_User_pair_t head , List_BTree_int_User_pair_t tail ) {
  { /* cicili#Let3960 */
    List_BTree_int_User_pair_t_x instance  = malloc (sizeof(class_List_BTree_int_User_pair_t));
    // ----------
    (*instance ) = ((class_List_BTree_int_User_pair_t){ get_List_BTree_int_User_pair_t__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return new_Box_List_BTree_int_User_pair_t (instance );
  }
}
List_BTree_int_User_pair_t BoxedNil_BTree_int_User_pair_t () {
  { /* cicili#Let3967 */
    List_BTree_int_User_pair_t_x instance  = malloc (sizeof(class_List_BTree_int_User_pair_t));
    // ----------
    (*instance ) = ((class_List_BTree_int_User_pair_t){ get_List_BTree_int_User_pair_t__H_Table (), __h___t });
    return new_Box_List_BTree_int_User_pair_t (instance );
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
  { /* cicili#Let3985 */
    Maybe_List_BTree_int_User_pair_t instance  = ((Maybe_List_BTree_int_User_pair_t){ get_Maybe_List_BTree_int_User_pair_t__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_BTree_int_User_pair_t Nothing_List_BTree_int_User_pair_t () {
  { /* cicili#Let3990 */
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
  { /* cicili#Let4010 */
    Maybe_BTree_int_User instance  = ((Maybe_BTree_int_User){ get_Maybe_BTree_int_User__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_BTree_int_User Nothing_BTree_int_User () {
  { /* cicili#Let4015 */
    Maybe_BTree_int_User instance  = ((Maybe_BTree_int_User){ get_Maybe_BTree_int_User__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_BTree_int_User__H_IMPL__ */ 
#ifndef __Rc_BTree_int_User__H_IMPL__
#define __Rc_BTree_int_User__H_IMPL__
Rc_BTree_int_User new_Rc_BTree_int_User (BTree_int_User pointer ) {
  return ({ /* cicili#Let4022 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      __auto_type holder  = ((BTree_int_User *)malloc (sizeof(BTree_int_User *)));
      // ----------
      (*count ) = 1;
      (*holder ) = pointer ;
      __h_Hold_BTree_int_User (holder , count , ((size_t)pointer ));
    });
}
Rc_BTree_int_User clone_Rc_BTree_int_User (Rc_BTree_int_User rc ) {
  return ({ /* cicili#Let4031 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let4033 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn4034 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4036 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn4038 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4043 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Progn4046 */
                (++(*count ));
                __h_Hold_BTree_int_User (pointer , count , address );
              }) : Gone_BTree_int_User ());
          }) : ({ /* cicili#Let4052 */
            // ----------
            ;
            ({ /* cicili#Progn4054 */
              Gone_BTree_int_User ();
            });
          }));
      });
    });
}
Maybe_BTree_int_User take_Rc_BTree_int_User (Rc_BTree_int_User * this ) {
  return ({ /* cicili#Let4062 */
      typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let4064 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn4065 */
                  (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4067 */
                  (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn4069 */
                (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4074 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Let4078 */
                __auto_type result  = Just_BTree_int_User ((*pointer ));
                // ----------
                if ((*count ) >=  1 )
                  { /* cicili#Block4084 */
                    (*count ) = 0;
                    (*pointer ) = NULL ;
                  }
                result ;
              }) : Nothing_BTree_int_User ());
          }) : ({ /* cicili#Let4089 */
            // ----------
            ;
            ({ /* cicili#Progn4091 */
              Nothing_BTree_int_User ();
            });
          }));
      });
    });
}
Maybe_BTree_int_User get_Rc_BTree_int_User (Rc_BTree_int_User rc ) {
  return ({ /* cicili#Let4099 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let4101 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn4102 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4104 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn4106 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4111 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) >  0 ) )) ? Just_BTree_int_User ((*pointer )) : Nothing_BTree_int_User ());
          }) : ({ /* cicili#Let4118 */
            // ----------
            ;
            ({ /* cicili#Progn4120 */
              Nothing_BTree_int_User ();
            });
          }));
      });
    });
}
void free_Rc_BTree_int_User (Rc_BTree_int_User * this ) {
  { /* cicili#Let4129 */
    typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
    typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
    // ----------
    ;
    ({ /* cicili#Let4131 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn4132 */
                (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn4134 */
                (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                true ;
              }) ) &&  ({ /* cicili#Progn4136 */
              (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block4142 */
          if (((*count ) ==  0 ) &&  ((*pointer ) ==  NULL  ) )
            { /* cicili#Block4145 */
              free (((void *)count ));
              free (((void *)pointer ));
              (*this ) = Gone_BTree_int_User ();
            }
          else
            {
            if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
              { /* cicili#Block4153 */
                if ((*count ) ==  1 )
                  { /* cicili#Block4156 */
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
        { /* cicili#Let4166 */
          // ----------
          ;
          ({ /* cicili#Let4168 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Gone_t  ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block4173 */
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
  { /* cicili#Let4184 */
    Rc_BTree_int_User instance  = ((Rc_BTree_int_User){ get_Rc_BTree_int_User__H_Table (), __h_Hold_t , .__h_data.Hold = { pointer , count , address }});
    // ----------
    return instance ;
  }
}
Rc_BTree_int_User Gone_BTree_int_User () {
  { /* cicili#Let4189 */
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
  { /* cicili#Let4207 */
    Maybe_Rc_BTree_int_User instance  = ((Maybe_Rc_BTree_int_User){ get_Maybe_Rc_BTree_int_User__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_Rc_BTree_int_User Nothing_Rc_BTree_int_User () {
  { /* cicili#Let4212 */
    Maybe_Rc_BTree_int_User instance  = ((Maybe_Rc_BTree_int_User){ get_Maybe_Rc_BTree_int_User__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_Rc_BTree_int_User__H_IMPL__ */ 
#ifndef __List_Rc_BTree_int_User__H_IMPL__
#define __List_Rc_BTree_int_User__H_IMPL__
#ifndef __Maybe_List_Rc_BTree_int_User_x__H_IMPL__
#define __Maybe_List_Rc_BTree_int_User_x__H_IMPL__
void free_Maybe_List_Rc_BTree_int_User_x (Maybe_List_Rc_BTree_int_User_x * this ) {
}
const Maybe_List_Rc_BTree_int_User_x__H_Table * const get_Maybe_List_Rc_BTree_int_User_x__H_Table () {
  static const Maybe_List_Rc_BTree_int_User_x__H_Table table  = { free_Maybe_List_Rc_BTree_int_User_x };
  return (&table );
}
Maybe_List_Rc_BTree_int_User_x Just_List_Rc_BTree_int_User_x (List_Rc_BTree_int_User_x value ) {
  { /* cicili#Let4232 */
    Maybe_List_Rc_BTree_int_User_x instance  = ((Maybe_List_Rc_BTree_int_User_x){ get_Maybe_List_Rc_BTree_int_User_x__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_Rc_BTree_int_User_x Nothing_List_Rc_BTree_int_User_x () {
  { /* cicili#Let4237 */
    Maybe_List_Rc_BTree_int_User_x instance  = ((Maybe_List_Rc_BTree_int_User_x){ get_Maybe_List_Rc_BTree_int_User_x__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_Rc_BTree_int_User_x__H_IMPL__ */ 
#ifndef __Box_List_Rc_BTree_int_User__H_IMPL__
#define __Box_List_Rc_BTree_int_User__H_IMPL__
Box_List_Rc_BTree_int_User new_Box_List_Rc_BTree_int_User (List_Rc_BTree_int_User_x pointer ) {
  return ({ /* cicili#Let4244 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      __auto_type holder  = ((List_Rc_BTree_int_User_x *)malloc (sizeof(List_Rc_BTree_int_User_x *)));
      // ----------
      (*count ) = 1;
      (*holder ) = pointer ;
      __h_Hold_List_Rc_BTree_int_User_x (holder , count , ((size_t)pointer ));
    });
}
Box_List_Rc_BTree_int_User clone_Box_List_Rc_BTree_int_User (Box_List_Rc_BTree_int_User rc ) {
  return ({ /* cicili#Let4253 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let4255 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn4256 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4258 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn4260 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4265 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Progn4268 */
                (++(*count ));
                __h_Hold_List_Rc_BTree_int_User_x (pointer , count , address );
              }) : Gone_List_Rc_BTree_int_User_x ());
          }) : ({ /* cicili#Let4274 */
            // ----------
            ;
            ({ /* cicili#Progn4276 */
              Gone_List_Rc_BTree_int_User_x ();
            });
          }));
      });
    });
}
Maybe_List_Rc_BTree_int_User_x take_Box_List_Rc_BTree_int_User (Box_List_Rc_BTree_int_User * this ) {
  return ({ /* cicili#Let4284 */
      typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let4286 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn4287 */
                  (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4289 */
                  (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn4291 */
                (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4296 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Let4300 */
                __auto_type result  = Just_List_Rc_BTree_int_User_x ((*pointer ));
                // ----------
                if ((*count ) >=  1 )
                  { /* cicili#Block4306 */
                    (*count ) = 0;
                    (*pointer ) = NULL ;
                  }
                result ;
              }) : Nothing_List_Rc_BTree_int_User_x ());
          }) : ({ /* cicili#Let4311 */
            // ----------
            ;
            ({ /* cicili#Progn4313 */
              Nothing_List_Rc_BTree_int_User_x ();
            });
          }));
      });
    });
}
Maybe_List_Rc_BTree_int_User_x get_Box_List_Rc_BTree_int_User (Box_List_Rc_BTree_int_User rc ) {
  return ({ /* cicili#Let4321 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let4323 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn4324 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4326 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn4328 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4333 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) >  0 ) )) ? Just_List_Rc_BTree_int_User_x ((*pointer )) : Nothing_List_Rc_BTree_int_User_x ());
          }) : ({ /* cicili#Let4340 */
            // ----------
            ;
            ({ /* cicili#Progn4342 */
              Nothing_List_Rc_BTree_int_User_x ();
            });
          }));
      });
    });
}
void free_Box_List_Rc_BTree_int_User (Box_List_Rc_BTree_int_User * this ) {
  { /* cicili#Let4351 */
    typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
    typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
    // ----------
    ;
    ({ /* cicili#Let4353 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn4354 */
                (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn4356 */
                (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                true ;
              }) ) &&  ({ /* cicili#Progn4358 */
              (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block4364 */
          if (((*count ) ==  0 ) &&  ((*pointer ) ==  NULL  ) )
            { /* cicili#Block4367 */
              free (((void *)count ));
              free (((void *)pointer ));
              (*this ) = Gone_List_Rc_BTree_int_User_x ();
            }
          else
            {
            if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
              { /* cicili#Block4375 */
                if ((*count ) ==  1 )
                  { /* cicili#Block4378 */
                    free_List_Rc_BTree_int_User_x (pointer );
                    (*count ) = 0;
                    free (((void *)count ));
                    (*pointer ) = NULL ;
                    free (((void *)pointer ));
                    (*this ) = Gone_List_Rc_BTree_int_User_x ();
                  }
                else
                  (--(*count ));
              }
              }        }
      else
        { /* cicili#Let4388 */
          // ----------
          ;
          ({ /* cicili#Let4390 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Gone_t  ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block4395 */
              }
          });
        }
    });
  }
}
const Box_List_Rc_BTree_int_User__H_Table * const get_Box_List_Rc_BTree_int_User__H_Table () {
  static const Box_List_Rc_BTree_int_User__H_Table table  = { free_Box_List_Rc_BTree_int_User , new_Box_List_Rc_BTree_int_User , clone_Box_List_Rc_BTree_int_User , take_Box_List_Rc_BTree_int_User , get_Box_List_Rc_BTree_int_User };
  return (&table );
}
Box_List_Rc_BTree_int_User __h_Hold_List_Rc_BTree_int_User_x (List_Rc_BTree_int_User_x * pointer , int * count , size_t address ) {
  { /* cicili#Let4406 */
    Box_List_Rc_BTree_int_User instance  = ((Box_List_Rc_BTree_int_User){ get_Box_List_Rc_BTree_int_User__H_Table (), __h_Hold_t , .__h_data.Hold = { pointer , count , address }});
    // ----------
    return instance ;
  }
}
Box_List_Rc_BTree_int_User Gone_List_Rc_BTree_int_User_x () {
  { /* cicili#Let4411 */
    Box_List_Rc_BTree_int_User instance  = ((Box_List_Rc_BTree_int_User){ get_Box_List_Rc_BTree_int_User__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Box_List_Rc_BTree_int_User__H_IMPL__ */ 
Rc_BTree_int_User * toArray_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , Rc_BTree_int_User term ) {
  Rc_BTree_int_User * array (List_Rc_BTree_int_User list , size_t count ) {
    return ({ /* cicili#Let4418 */
        __auto_type __h_matchbox  = list ;
        // ----------
        ({ /* cicili#Let4422 */
          __auto_type match4421  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match4421 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let4425 */
            bool __h_case_result  = (true  &&  (((match4421 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4426 */
                  (unboxed  =  (((match4421 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn4431 */
                ({ /* cicili#Let4435 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  ;
                  ({ /* cicili#Let4437 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn4438 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn4440 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn4445 */
                        ({ /* cicili#Let4447 */
                          Rc_BTree_int_User * arr  = array (tail , (count  +  1 ));
                          // ----------
                          arr [count ] = head ;
                          arr ;
                        });
                      }) : ({ /* cicili#Let4451 */
                        // ----------
                        ;
                        ({ /* cicili#Progn4453 */
                          ({ /* cicili#Let4455 */
                            Rc_BTree_int_User * arr  = calloc (count , sizeof(Rc_BTree_int_User));
                            // ----------
                            arr [(count  -  1 )] = term ;
                            arr ;
                          });
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let4459 */
                // ----------
                ;
                ({ /* cicili#Progn4461 */
                  ({ /* cicili#Let4463 */
                    Rc_BTree_int_User * arr  = calloc (count , sizeof(Rc_BTree_int_User));
                    // ----------
                    arr [(count  -  1 )] = term ;
                    arr ;
                  });
                });
              }));
          });
        });
      });
  }
  return array (list , 0);
}
List_Rc_BTree_int_User wrap_List_Rc_BTree_int_User (const Rc_BTree_int_User item ) {
  return BoxedCons_Rc_BTree_int_User (item , BoxedNil_Rc_BTree_int_User ());
}
List_Rc_BTree_int_User pure_List_Rc_BTree_int_User (const Rc_BTree_int_User * buf , size_t len ) {
  return (((buf  ==  NULL  )) ? BoxedNil_Rc_BTree_int_User () : ({ /* cicili#Let4474 */
        Rc_BTree_int_User item  = (*buf );
        // ----------
        (((len  ==  0 )) ? BoxedNil_Rc_BTree_int_User () : BoxedCons_Rc_BTree_int_User (item , pure_List_Rc_BTree_int_User ((++buf ), (--len ))));
      }));
}
size_t show_List_Rc_BTree_int_User (CFile file , List_Rc_BTree_int_User list ) {
  return ({ /* cicili#Let4483 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let4487 */
        __auto_type match4486  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match4486 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let4490 */
          bool __h_case_result  = (true  &&  (((match4486 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4491 */
                (unboxed  =  (((match4486 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn4496 */
              ({ /* cicili#Let4500 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let4502 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn4503 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn4505 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn4510 */
                      (({ /* cicili#Let4513 */
                          __auto_type __h_matchbox  = tail ;
                          // ----------
                          ({ /* cicili#Let4517 */
                            __auto_type match4516  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                            typeof((((match4516 . __h_data ). Just ). __h_0_mem )) unboxed ;
                            // ----------
                            ;
                            ({ /* cicili#Let4520 */
                              bool __h_case_result  = (true  &&  (((match4516 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4521 */
                                    (unboxed  =  (((match4516 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* cicili#Progn4526 */
                                  ({ /* cicili#Let4530 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Let4532 */
                                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Cons_t  ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn4536 */
                                          (({ /* cicili#Let4544 */
                                              __auto_type match4543  = get_Rc_BTree_int_User (head );
                                              typeof((((match4543 . __h_data ). Just ). __h_0_mem )) child ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let4547 */
                                                bool __h_case_result  = (true  &&  (((match4543 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4548 */
                                                      (child  =  (((match4543 . __h_data ). Just ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn4553 */
                                                    show_BTree_int_User (file , child );
                                                  }) : ({ /* cicili#Let4558 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn4560 */
                                                      0;
                                                    });
                                                  }));
                                              });
                                            }) +  fprintf (file , "%s", " ") );
                                        }) : ({ /* cicili#Let4564 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Progn4566 */
                                            ({ /* cicili#Let4574 */
                                              __auto_type match4573  = get_Rc_BTree_int_User (head );
                                              typeof((((match4573 . __h_data ). Just ). __h_0_mem )) child ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let4577 */
                                                bool __h_case_result  = (true  &&  (((match4573 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4578 */
                                                      (child  =  (((match4573 . __h_data ). Just ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn4583 */
                                                    show_BTree_int_User (file , child );
                                                  }) : ({ /* cicili#Let4588 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn4590 */
                                                      0;
                                                    });
                                                  }));
                                              });
                                            });
                                          });
                                        }));
                                    });
                                  });
                                }) : ({ /* cicili#Let4594 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Progn4596 */
                                    0;
                                  });
                                }));
                            });
                          });
                        }) +  show_List_Rc_BTree_int_User (file , tail ) );
                    }) : ({ /* cicili#Let4601 */
                      // ----------
                      ;
                      ({ /* cicili#Progn4603 */
                        0;
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let4607 */
              // ----------
              ;
              ({ /* cicili#Progn4609 */
                0;
              });
            }));
        });
      });
    });
}
List_Rc_BTree_int_User copy_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
  return ({ /* cicili#Let4614 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let4618 */
        __auto_type match4617  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match4617 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let4621 */
          bool __h_case_result  = (true  &&  (((match4617 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4622 */
                (unboxed  =  (((match4617 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn4627 */
              ({ /* cicili#Let4631 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let4633 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn4634 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn4636 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn4641 */
                      BoxedCons_Rc_BTree_int_User (head , copy_List_Rc_BTree_int_User (tail ));
                    }) : ({ /* cicili#Let4647 */
                      // ----------
                      ;
                      ({ /* cicili#Progn4649 */
                        BoxedNil_Rc_BTree_int_User ();
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let4654 */
              // ----------
              ;
              ({ /* cicili#Progn4656 */
                BoxedNil_Rc_BTree_int_User ();
              });
            }));
        });
      });
    });
}
List_Rc_BTree_int_User replaceAt_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , Rc_BTree_int_User item , size_t index ) {
  return ({ /* cicili#Let4662 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let4666 */
        __auto_type match4665  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match4665 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let4669 */
          bool __h_case_result  = (true  &&  (((match4665 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4670 */
                (unboxed  =  (((match4665 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn4675 */
              ({ /* cicili#Let4679 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let4681 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn4682 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn4684 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) &&  (index  >  0 ) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn4689 */
                      BoxedCons_Rc_BTree_int_User (head , replaceAt_List_Rc_BTree_int_User (tail , item , (index  -  1 )));
                    }) : ({ /* cicili#Let4695 */
                      // ----------
                      ;
                      ({ /* cicili#Progn4697 */
                        ({ /* cicili#Let4700 */
                          __auto_type __h_matchbox  = list ;
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
                                    typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) taill ;
                                    // ----------
                                    ;
                                    ({ /* cicili#Let4719 */
                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn4720 */
                                            (taill  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn4725 */
                                          BoxedCons_Rc_BTree_int_User (item , clone_Box_List_Rc_BTree_int_User (taill ));
                                        }) : ({ /* cicili#Let4731 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Progn4733 */
                                            clone_Box_List_Rc_BTree_int_User (list );
                                          });
                                        }));
                                    });
                                  });
                                }) : ({ /* cicili#Let4738 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Progn4740 */
                                    clone_Box_List_Rc_BTree_int_User (list );
                                  });
                                }));
                            });
                          });
                        });
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let4745 */
              // ----------
              ;
              ({ /* cicili#Progn4747 */
                clone_Box_List_Rc_BTree_int_User (list );
              });
            }));
        });
      });
    });
}
List_Rc_BTree_int_User deleteAt_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , size_t index ) {
  return ({ /* cicili#Let4753 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let4757 */
        __auto_type match4756  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match4756 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let4760 */
          bool __h_case_result  = (true  &&  (((match4756 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4761 */
                (unboxed  =  (((match4756 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn4766 */
              ({ /* cicili#Let4770 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let4772 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn4773 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn4775 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) &&  (index  >  0 ) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn4780 */
                      BoxedCons_Rc_BTree_int_User (head , deleteAt_List_Rc_BTree_int_User (tail , (index  -  1 )));
                    }) : ({ /* cicili#Let4786 */
                      // ----------
                      ;
                      ({ /* cicili#Progn4788 */
                        ({ /* cicili#Let4791 */
                          __auto_type __h_matchbox  = list ;
                          // ----------
                          ({ /* cicili#Let4795 */
                            __auto_type match4794  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                            typeof((((match4794 . __h_data ). Just ). __h_0_mem )) unboxed ;
                            // ----------
                            ;
                            ({ /* cicili#Let4798 */
                              bool __h_case_result  = (true  &&  (((match4794 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4799 */
                                    (unboxed  =  (((match4794 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* cicili#Progn4804 */
                                  ({ /* cicili#Let4808 */
                                    typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) taill ;
                                    // ----------
                                    ;
                                    ({ /* cicili#Let4810 */
                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn4811 */
                                            (taill  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn4816 */
                                          clone_Box_List_Rc_BTree_int_User (taill );
                                        }) : ({ /* cicili#Let4821 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Progn4823 */
                                            clone_Box_List_Rc_BTree_int_User (list );
                                          });
                                        }));
                                    });
                                  });
                                }) : ({ /* cicili#Let4828 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Progn4830 */
                                    clone_Box_List_Rc_BTree_int_User (list );
                                  });
                                }));
                            });
                          });
                        });
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let4835 */
              // ----------
              ;
              ({ /* cicili#Progn4837 */
                clone_Box_List_Rc_BTree_int_User (list );
              });
            }));
        });
      });
    });
}
List_Rc_BTree_int_User insertAt_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , Rc_BTree_int_User item , size_t index ) {
  return ({ /* cicili#Let4843 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let4847 */
        __auto_type match4846  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match4846 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let4850 */
          bool __h_case_result  = (true  &&  (((match4846 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4851 */
                (unboxed  =  (((match4846 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn4856 */
              ({ /* cicili#Let4860 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let4862 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn4863 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn4865 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) &&  (index  >  0 ) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn4870 */
                      BoxedCons_Rc_BTree_int_User (head , insertAt_List_Rc_BTree_int_User (tail , item , (index  -  1 )));
                    }) : ({ /* cicili#Let4876 */
                      // ----------
                      ;
                      ({ /* cicili#Progn4878 */
                        BoxedCons_Rc_BTree_int_User (item , clone_Box_List_Rc_BTree_int_User (list ));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let4884 */
              // ----------
              ;
              ({ /* cicili#Progn4886 */
                BoxedCons_Rc_BTree_int_User (item , clone_Box_List_Rc_BTree_int_User (list ));
              });
            }));
        });
      });
    });
}
List_Rc_BTree_int_User replace_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , Rc_BTree_int_User item , List_Rc_BTree_int_User aimed ) {
  return ({ /* cicili#Let4894 */
      __auto_type match4893  = get_Box_List_Rc_BTree_int_User (list );
      typeof((((match4893 . __h_data ). Just ). __h_0_mem )) listp ;
      // ----------
      ;
      ({ /* cicili#Let4897 */
        bool __h_case_result  = (true  &&  (((match4893 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4898 */
              (listp  =  (((match4893 . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4903 */
            ({ /* cicili#Let4907 */
              __auto_type match4906  = get_Box_List_Rc_BTree_int_User (aimed );
              typeof((((match4906 . __h_data ). Just ). __h_0_mem )) aimedp ;
              // ----------
              ;
              ({ /* cicili#Let4910 */
                bool __h_case_result  = (true  &&  (((match4906 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4911 */
                      (aimedp  =  (((match4906 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn4916 */
                    ({ /* cicili#Let4920 */
                      typeof((((listp -> __h_data ). Cons ). __h_0_mem )) head ;
                      typeof((((listp -> __h_data ). Cons ). __h_1_mem )) tail ;
                      // ----------
                      ;
                      ({ /* cicili#Let4922 */
                        bool __h_case_result  = (true  &&  (((listp -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn4923 */
                                  (head  =  (((listp -> __h_data ). Cons ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn4925 */
                                  (tail  =  (((listp -> __h_data ). Cons ). __h_1_mem ) );
                                  true ;
                                }) ) &&  (listp  !=  aimedp  ) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn4930 */
                            BoxedCons_Rc_BTree_int_User (head , replace_List_Rc_BTree_int_User (tail , item , aimed ));
                          }) : ({ /* cicili#Let4936 */
                            // ----------
                            ;
                            ({ /* cicili#Progn4938 */
                              ({ /* cicili#Let4942 */
                                typeof((((aimedp -> __h_data ). Cons ). __h_1_mem )) taill ;
                                // ----------
                                ;
                                ({ /* cicili#Let4944 */
                                  bool __h_case_result  = (true  &&  (((aimedp -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn4945 */
                                        (taill  =  (((aimedp -> __h_data ). Cons ). __h_1_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn4950 */
                                      BoxedCons_Rc_BTree_int_User (item , clone_Box_List_Rc_BTree_int_User (taill ));
                                    }) : ({ /* cicili#Let4956 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn4958 */
                                        clone_Box_List_Rc_BTree_int_User (list );
                                      });
                                    }));
                                });
                              });
                            });
                          }));
                      });
                    });
                  }) : ({ /* cicili#Let4963 */
                    // ----------
                    ;
                    ({ /* cicili#Progn4965 */
                      clone_Box_List_Rc_BTree_int_User (list );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let4970 */
            // ----------
            ;
            ({ /* cicili#Progn4972 */
              clone_Box_List_Rc_BTree_int_User (list );
            });
          }));
      });
    });
}
List_Rc_BTree_int_User delete_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , List_Rc_BTree_int_User aimed ) {
  return ({ /* cicili#Let4979 */
      __auto_type match4978  = get_Box_List_Rc_BTree_int_User (list );
      typeof((((match4978 . __h_data ). Just ). __h_0_mem )) listp ;
      // ----------
      ;
      ({ /* cicili#Let4982 */
        bool __h_case_result  = (true  &&  (((match4978 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4983 */
              (listp  =  (((match4978 . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4988 */
            ({ /* cicili#Let4992 */
              __auto_type match4991  = get_Box_List_Rc_BTree_int_User (aimed );
              typeof((((match4991 . __h_data ). Just ). __h_0_mem )) aimedp ;
              // ----------
              ;
              ({ /* cicili#Let4995 */
                bool __h_case_result  = (true  &&  (((match4991 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4996 */
                      (aimedp  =  (((match4991 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn5001 */
                    ({ /* cicili#Let5005 */
                      typeof((((listp -> __h_data ). Cons ). __h_0_mem )) head ;
                      typeof((((listp -> __h_data ). Cons ). __h_1_mem )) tail ;
                      // ----------
                      ;
                      ({ /* cicili#Let5007 */
                        bool __h_case_result  = (true  &&  (((listp -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn5008 */
                                  (head  =  (((listp -> __h_data ). Cons ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn5010 */
                                  (tail  =  (((listp -> __h_data ). Cons ). __h_1_mem ) );
                                  true ;
                                }) ) &&  (listp  !=  aimedp  ) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn5015 */
                            BoxedCons_Rc_BTree_int_User (head , delete_List_Rc_BTree_int_User (tail , aimed ));
                          }) : ({ /* cicili#Let5021 */
                            // ----------
                            ;
                            ({ /* cicili#Progn5023 */
                              ({ /* cicili#Let5027 */
                                typeof((((aimedp -> __h_data ). Cons ). __h_1_mem )) taill ;
                                // ----------
                                ;
                                ({ /* cicili#Let5029 */
                                  bool __h_case_result  = (true  &&  (((aimedp -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5030 */
                                        (taill  =  (((aimedp -> __h_data ). Cons ). __h_1_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn5035 */
                                      clone_Box_List_Rc_BTree_int_User (taill );
                                    }) : ({ /* cicili#Let5040 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn5042 */
                                        clone_Box_List_Rc_BTree_int_User (list );
                                      });
                                    }));
                                });
                              });
                            });
                          }));
                      });
                    });
                  }) : ({ /* cicili#Let5047 */
                    // ----------
                    ;
                    ({ /* cicili#Progn5049 */
                      clone_Box_List_Rc_BTree_int_User (list );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let5054 */
            // ----------
            ;
            ({ /* cicili#Progn5056 */
              clone_Box_List_Rc_BTree_int_User (list );
            });
          }));
      });
    });
}
List_Rc_BTree_int_User insert_List_Rc_BTree_int_User (List_Rc_BTree_int_User llist , Rc_BTree_int_User item , List_Rc_BTree_int_User rlist ) {
  return ({ /* cicili#Let5063 */
      __auto_type match5062  = get_Box_List_Rc_BTree_int_User (llist );
      typeof((((match5062 . __h_data ). Just ). __h_0_mem )) llistp ;
      // ----------
      ;
      ({ /* cicili#Let5066 */
        bool __h_case_result  = (true  &&  (((match5062 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5067 */
              (llistp  =  (((match5062 . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn5072 */
            ({ /* cicili#Let5076 */
              __auto_type match5075  = get_Box_List_Rc_BTree_int_User (rlist );
              typeof((((match5075 . __h_data ). Just ). __h_0_mem )) rlistp ;
              // ----------
              ;
              ({ /* cicili#Let5079 */
                bool __h_case_result  = (true  &&  (((match5075 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5080 */
                      (rlistp  =  (((match5075 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn5085 */
                    ({ /* cicili#Let5089 */
                      typeof((((llistp -> __h_data ). Cons ). __h_0_mem )) head ;
                      typeof((((llistp -> __h_data ). Cons ). __h_1_mem )) tail ;
                      // ----------
                      ;
                      ({ /* cicili#Let5091 */
                        bool __h_case_result  = (true  &&  (((llistp -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn5092 */
                                  (head  =  (((llistp -> __h_data ). Cons ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn5094 */
                                  (tail  =  (((llistp -> __h_data ). Cons ). __h_1_mem ) );
                                  true ;
                                }) ) &&  (llistp  !=  rlistp  ) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn5099 */
                            BoxedCons_Rc_BTree_int_User (head , insert_List_Rc_BTree_int_User (tail , item , rlist ));
                          }) : ({ /* cicili#Let5105 */
                            // ----------
                            ;
                            ({ /* cicili#Progn5107 */
                              BoxedCons_Rc_BTree_int_User (item , clone_Box_List_Rc_BTree_int_User (rlist ));
                            });
                          }));
                      });
                    });
                  }) : ({ /* cicili#Let5113 */
                    // ----------
                    ;
                    ({ /* cicili#Progn5115 */
                      ({ /* cicili#Let5118 */
                        __auto_type nil_item  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5120 */
                          __auto_type nil_item  = BoxedNil_Rc_BTree_int_User ();
                          // ----------
                          ((void)((nil_item . __h_table )-> freeData ));
                          nil_item ;
                        });
                        // ----------
                        insert_List_Rc_BTree_int_User (llist , item , nil_item );
                      });
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let5127 */
            // ----------
            ;
            ({ /* cicili#Progn5129 */
              BoxedCons_Rc_BTree_int_User (item , clone_Box_List_Rc_BTree_int_User (rlist ));
            });
          }));
      });
    });
}
List_Rc_BTree_int_User reverse_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
  List_Rc_BTree_int_User _reverse (List_Rc_BTree_int_User list , List_Rc_BTree_int_User rlist ) {
    return ({ /* cicili#Let5137 */
        __auto_type __h_matchbox  = list ;
        // ----------
        ({ /* cicili#Let5141 */
          __auto_type match5140  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match5140 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let5144 */
            bool __h_case_result  = (true  &&  (((match5140 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5145 */
                  (unboxed  =  (((match5140 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn5150 */
                ({ /* cicili#Let5154 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  ;
                  ({ /* cicili#Let5156 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5157 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn5159 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn5164 */
                        _reverse (tail , BoxedCons_Rc_BTree_int_User (head , rlist ));
                      }) : ({ /* cicili#Let5169 */
                        // ----------
                        ;
                        ({ /* cicili#Progn5171 */
                          clone_Box_List_Rc_BTree_int_User (rlist );
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let5176 */
                // ----------
                ;
                ({ /* cicili#Progn5178 */
                  clone_Box_List_Rc_BTree_int_User (rlist );
                });
              }));
          });
        });
      });
  }
  return ({ /* cicili#Let5182 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let5186 */
        __auto_type match5185  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5185 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5189 */
          bool __h_case_result  = (true  &&  (((match5185 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5190 */
                (unboxed  =  (((match5185 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5195 */
              ({ /* cicili#Let5199 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let5201 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5202 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn5204 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5209 */
                      _reverse (tail , BoxedCons_Rc_BTree_int_User (head , BoxedNil_Rc_BTree_int_User ()));
                    }) : ({ /* cicili#Let5215 */
                      // ----------
                      ;
                      ({ /* cicili#Progn5217 */
                        clone_Box_List_Rc_BTree_int_User (list );
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5222 */
              // ----------
              ;
              ({ /* cicili#Progn5224 */
                clone_Box_List_Rc_BTree_int_User (list );
              });
            }));
        });
      });
    });
}
List_Rc_BTree_int_User append_List_Rc_BTree_int_User (List_Rc_BTree_int_User llist , List_Rc_BTree_int_User rlist ) {
  return ({ /* cicili#Let5230 */
      __auto_type __h_matchbox  = llist ;
      // ----------
      ({ /* cicili#Let5234 */
        __auto_type match5233  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5233 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5237 */
          bool __h_case_result  = (true  &&  (((match5233 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5238 */
                (unboxed  =  (((match5233 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5243 */
              ({ /* cicili#Let5247 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let5249 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5250 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn5252 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5257 */
                      BoxedCons_Rc_BTree_int_User (head , append_List_Rc_BTree_int_User (tail , rlist ));
                    }) : ({ /* cicili#Let5263 */
                      // ----------
                      ;
                      ({ /* cicili#Progn5265 */
                        clone_Box_List_Rc_BTree_int_User (rlist );
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5270 */
              // ----------
              ;
              ({ /* cicili#Progn5272 */
                clone_Box_List_Rc_BTree_int_User (rlist );
              });
            }));
        });
      });
    });
}
List_Rc_BTree_int_User push_List_Rc_BTree_int_User (Rc_BTree_int_User item , List_Rc_BTree_int_User list ) {
  return BoxedCons_Rc_BTree_int_User (item , clone_Box_List_Rc_BTree_int_User (list ));
}
List_Rc_BTree_int_User take_List_Rc_BTree_int_User (size_t len , List_Rc_BTree_int_User list ) {
  return (((len  <=  0 )) ? BoxedNil_Rc_BTree_int_User () : ({ /* cicili#Let5284 */
        __auto_type __h_matchbox  = list ;
        // ----------
        ({ /* cicili#Let5288 */
          __auto_type match5287  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match5287 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let5291 */
            bool __h_case_result  = (true  &&  (((match5287 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5292 */
                  (unboxed  =  (((match5287 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn5297 */
                ({ /* cicili#Let5301 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  ;
                  ({ /* cicili#Let5303 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5304 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn5306 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn5311 */
                        BoxedCons_Rc_BTree_int_User (head , take_List_Rc_BTree_int_User ((--len ), tail ));
                      }) : ({ /* cicili#Let5317 */
                        // ----------
                        ;
                        ({ /* cicili#Progn5319 */
                          BoxedNil_Rc_BTree_int_User ();
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let5324 */
                // ----------
                ;
                ({ /* cicili#Progn5326 */
                  BoxedNil_Rc_BTree_int_User ();
                });
              }));
          });
        });
      }));
}
List_Rc_BTree_int_User last_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
  return ({ /* cicili#Let5332 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let5336 */
        __auto_type match5335  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5335 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5339 */
          bool __h_case_result  = (true  &&  (((match5335 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5340 */
                (unboxed  =  (((match5335 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5345 */
              ({ /* cicili#Let5349 */
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let5351 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5352 */
                        (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5357 */
                      ({ /* cicili#Let5360 */
                        __auto_type __h_matchbox  = tail ;
                        // ----------
                        ({ /* cicili#Let5364 */
                          __auto_type match5363  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                          typeof((((match5363 . __h_data ). Just ). __h_0_mem )) unboxed ;
                          // ----------
                          ;
                          ({ /* cicili#Let5367 */
                            bool __h_case_result  = (true  &&  (((match5363 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5368 */
                                  (unboxed  =  (((match5363 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn5373 */
                                ({ /* cicili#Let5377 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Let5379 */
                                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Nil_t  ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn5383 */
                                        clone_Box_List_Rc_BTree_int_User (list );
                                      }) : ({ /* cicili#Let5388 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn5390 */
                                          last_List_Rc_BTree_int_User (tail );
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let5395 */
                                // ----------
                                ;
                                ({ /* cicili#Progn5397 */
                                  clone_Box_List_Rc_BTree_int_User (list );
                                });
                              }));
                          });
                        });
                      });
                    }) : ({ /* cicili#Let5402 */
                      // ----------
                      ;
                      ({ /* cicili#Progn5404 */
                        clone_Box_List_Rc_BTree_int_User (list );
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5409 */
              // ----------
              ;
              ({ /* cicili#Progn5411 */
                clone_Box_List_Rc_BTree_int_User (list );
              });
            }));
        });
      });
    });
}
List_Rc_BTree_int_User init_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
  return ({ /* cicili#Let5417 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let5421 */
        __auto_type match5420  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5420 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5424 */
          bool __h_case_result  = (true  &&  (((match5420 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5425 */
                (unboxed  =  (((match5420 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5430 */
              ({ /* cicili#Let5434 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let5436 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5437 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn5439 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5444 */
                      ({ /* cicili#Let5447 */
                        __auto_type __h_matchbox  = tail ;
                        // ----------
                        ({ /* cicili#Let5451 */
                          __auto_type match5450  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                          typeof((((match5450 . __h_data ). Just ). __h_0_mem )) unboxed ;
                          // ----------
                          ;
                          ({ /* cicili#Let5454 */
                            bool __h_case_result  = (true  &&  (((match5450 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5455 */
                                  (unboxed  =  (((match5450 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn5460 */
                                ({ /* cicili#Let5464 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Let5466 */
                                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Cons_t  ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn5470 */
                                        BoxedCons_Rc_BTree_int_User (head , init_List_Rc_BTree_int_User (tail ));
                                      }) : ({ /* cicili#Let5476 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn5478 */
                                          BoxedNil_Rc_BTree_int_User ();
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let5483 */
                                // ----------
                                ;
                                ({ /* cicili#Progn5485 */
                                  BoxedNil_Rc_BTree_int_User ();
                                });
                              }));
                          });
                        });
                      });
                    }) : ({ /* cicili#Let5490 */
                      // ----------
                      ;
                      ({ /* cicili#Progn5492 */
                        BoxedNil_Rc_BTree_int_User ();
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5497 */
              // ----------
              ;
              ({ /* cicili#Progn5499 */
                BoxedNil_Rc_BTree_int_User ();
              });
            }));
        });
      });
    });
}
List_Rc_BTree_int_User tail_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
  return drop_List_Rc_BTree_int_User (1, list );
}
List_Rc_BTree_int_User drop_List_Rc_BTree_int_User (size_t len , List_Rc_BTree_int_User list ) {
  return (((len  <=  0 )) ? clone_Box_List_Rc_BTree_int_User (list ) : ({ /* cicili#Let5510 */
        __auto_type __h_matchbox  = list ;
        // ----------
        ({ /* cicili#Let5514 */
          __auto_type match5513  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match5513 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let5517 */
            bool __h_case_result  = (true  &&  (((match5513 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5518 */
                  (unboxed  =  (((match5513 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn5523 */
                ({ /* cicili#Let5527 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  ;
                  ({ /* cicili#Let5529 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5530 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn5535 */
                        drop_List_Rc_BTree_int_User ((--len ), tail );
                      }) : ({ /* cicili#Let5540 */
                        // ----------
                        ;
                        ({ /* cicili#Progn5542 */
                          clone_Box_List_Rc_BTree_int_User (list );
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let5547 */
                // ----------
                ;
                ({ /* cicili#Progn5549 */
                  clone_Box_List_Rc_BTree_int_User (list );
                });
              }));
          });
        });
      }));
}
Maybe_Rc_BTree_int_User head_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
  return nth_List_Rc_BTree_int_User (0, list );
}
List_Rc_BTree_int_User nthcdr_List_Rc_BTree_int_User (size_t index , List_Rc_BTree_int_User list ) {
  return ({ /* cicili#Let5559 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let5563 */
        __auto_type match5562  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5562 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5566 */
          bool __h_case_result  = (true  &&  (((match5562 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5567 */
                (unboxed  =  (((match5562 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5572 */
              ({ /* cicili#Let5576 */
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let5578 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5579 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) &&  (index  >  0 ) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5584 */
                      nthcdr_List_Rc_BTree_int_User ((--index ), tail );
                    }) : ({ /* cicili#Let5589 */
                      // ----------
                      ;
                      ({ /* cicili#Progn5591 */
                        list ;
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5595 */
              // ----------
              ;
              ({ /* cicili#Progn5597 */
                list ;
              });
            }));
        });
      });
    });
}
Maybe_Rc_BTree_int_User nth_List_Rc_BTree_int_User (size_t index , List_Rc_BTree_int_User list ) {
  return ({ /* cicili#Let5603 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let5607 */
        __auto_type match5606  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5606 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5610 */
          bool __h_case_result  = (true  &&  (((match5606 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5611 */
                (unboxed  =  (((match5606 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5616 */
              ({ /* cicili#Let5620 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let5622 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5623 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn5625 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5630 */
                      (((index  ==  0 )) ? Just_Rc_BTree_int_User (head ) : (((index  <  0 )) ? Nothing_Rc_BTree_int_User () : nth_List_Rc_BTree_int_User ((--index ), tail )));
                    }) : ({ /* cicili#Let5639 */
                      // ----------
                      ;
                      ({ /* cicili#Progn5641 */
                        Nothing_Rc_BTree_int_User ();
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5646 */
              // ----------
              ;
              ({ /* cicili#Progn5648 */
                Nothing_Rc_BTree_int_User ();
              });
            }));
        });
      });
    });
}
size_t hasLen_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , size_t desired ) {
  return ({ /* cicili#Let5654 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let5658 */
        __auto_type match5657  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5657 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5661 */
          bool __h_case_result  = (true  &&  (((match5657 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5662 */
                (unboxed  =  (((match5657 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5667 */
              ({ /* cicili#Let5671 */
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let5673 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5674 */
                        (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5679 */
                      (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_Rc_BTree_int_User (tail , (--desired )) ));
                    }) : ({ /* cicili#Let5685 */
                      // ----------
                      ;
                      ({ /* cicili#Progn5687 */
                        0;
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5691 */
              // ----------
              ;
              ({ /* cicili#Progn5693 */
                0;
              });
            }));
        });
      });
    });
}
size_t len_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
  return ({ /* cicili#Let5698 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let5702 */
        __auto_type match5701  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5701 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5705 */
          bool __h_case_result  = (true  &&  (((match5701 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5706 */
                (unboxed  =  (((match5701 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5711 */
              ({ /* cicili#Let5715 */
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let5717 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5718 */
                        (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5723 */
                      (1 +  len_List_Rc_BTree_int_User (tail ) );
                    }) : ({ /* cicili#Let5728 */
                      // ----------
                      ;
                      ({ /* cicili#Progn5730 */
                        0;
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5734 */
              // ----------
              ;
              ({ /* cicili#Progn5736 */
                0;
              });
            }));
        });
      });
    });
}
void free_List_Rc_BTree_int_User_x (List_Rc_BTree_int_User_x * this_ptr ) {
  { /* cicili#Let5740 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let5746 */
      typeof((((this -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let5748 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5749 */
              (tail  =  (((this -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block5755 */
            { /* cicili#Block5757 */
              free (this );
              free_Box_List_Rc_BTree_int_User ((&tail ));
            }
          }
        else
          { /* cicili#Let5765 */
            // ----------
            ;
            ({ /* cicili#Let5767 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Nil_t  ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block5772 */
                  { /* cicili#Block5774 */
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
  static List_Rc_BTree_int_User__H_Table table  = { free_List_Rc_BTree_int_User_x , toArray_List_Rc_BTree_int_User , wrap_List_Rc_BTree_int_User , pure_List_Rc_BTree_int_User , show_List_Rc_BTree_int_User , copy_List_Rc_BTree_int_User , replaceAt_List_Rc_BTree_int_User , deleteAt_List_Rc_BTree_int_User , insertAt_List_Rc_BTree_int_User , replace_List_Rc_BTree_int_User , delete_List_Rc_BTree_int_User , insert_List_Rc_BTree_int_User , reverse_List_Rc_BTree_int_User , append_List_Rc_BTree_int_User , push_List_Rc_BTree_int_User , take_List_Rc_BTree_int_User , last_List_Rc_BTree_int_User , init_List_Rc_BTree_int_User , tail_List_Rc_BTree_int_User , drop_List_Rc_BTree_int_User , head_List_Rc_BTree_int_User , nthcdr_List_Rc_BTree_int_User , nth_List_Rc_BTree_int_User , hasLen_List_Rc_BTree_int_User , len_List_Rc_BTree_int_User };
  return (&table );
}
List_Rc_BTree_int_User BoxedCons_Rc_BTree_int_User (Rc_BTree_int_User head , List_Rc_BTree_int_User tail ) {
  { /* cicili#Let5785 */
    List_Rc_BTree_int_User_x instance  = malloc (sizeof(class_List_Rc_BTree_int_User));
    // ----------
    (*instance ) = ((class_List_Rc_BTree_int_User){ get_List_Rc_BTree_int_User__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return new_Box_List_Rc_BTree_int_User (instance );
  }
}
List_Rc_BTree_int_User BoxedNil_Rc_BTree_int_User () {
  { /* cicili#Let5792 */
    List_Rc_BTree_int_User_x instance  = malloc (sizeof(class_List_Rc_BTree_int_User));
    // ----------
    (*instance ) = ((class_List_Rc_BTree_int_User){ get_List_Rc_BTree_int_User__H_Table (), __h___t });
    return new_Box_List_Rc_BTree_int_User (instance );
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
  { /* cicili#Let5810 */
    Maybe_List_Rc_BTree_int_User instance  = ((Maybe_List_Rc_BTree_int_User){ get_Maybe_List_Rc_BTree_int_User__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_Rc_BTree_int_User Nothing_List_Rc_BTree_int_User () {
  { /* cicili#Let5815 */
    Maybe_List_Rc_BTree_int_User instance  = ((Maybe_List_Rc_BTree_int_User){ get_Maybe_List_Rc_BTree_int_User__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_Rc_BTree_int_User__H_IMPL__ */ 
#ifndef __Functor_List_Rc_BTree_int_User__H_IMPL__
#define __Functor_List_Rc_BTree_int_User__H_IMPL__
List_Rc_BTree_int_User fmap_Functor_List_Rc_BTree_int_User (Rc_BTree_int_User_to_Rc_BTree_int_User_t a_b , List_Rc_BTree_int_User input ) {
  return ({ /* cicili#Let5828 */
      __auto_type __h_matchbox  = input ;
      // ----------
      ({ /* cicili#Let5832 */
        __auto_type match5831  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5831 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5835 */
          bool __h_case_result  = (true  &&  (((match5831 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5836 */
                (unboxed  =  (((match5831 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5841 */
              ({ /* cicili#Let5845 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let5847 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5848 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn5850 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5855 */
                      BoxedCons_Rc_BTree_int_User (a_b (head ), fmap_Functor_List_Rc_BTree_int_User (a_b , tail ));
                    }) : ({ /* cicili#Let5862 */
                      // ----------
                      ;
                      ({ /* cicili#Progn5864 */
                        BoxedNil_Rc_BTree_int_User ();
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5869 */
              // ----------
              ;
              ({ /* cicili#Progn5871 */
                BoxedNil_Rc_BTree_int_User ();
              });
            }));
        });
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
  { /* cicili#Let5885 */
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
  return ({ /* cicili#Let5903 */
      typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      ;
      ({ /* cicili#Let5905 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn5906 */
                (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn5908 */
                (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn5913 */
            (((len_List_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? ({ /* cicili#Let5919 */
                __auto_type tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5921 */
                  __auto_type tree  = tree ;
                  // ----------
                  ((void)(tree -> __h_table -> freeClass ));
                  tree ;
                });
                // ----------
                Branch_BTree_int_User (wrap_List_BTree_int_User_pair_t (({ /* cicili#Let5929 */
                    __auto_type match5928  = nth_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                    typeof((((match5928 . __h_data ). Just ). __h_0_mem )) nitem ;
                    // ----------
                    ;
                    ({ /* cicili#Let5933 */
                      bool __h_case_result  = (true  &&  (((match5928 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5934 */
                            (nitem  =  (((match5928 . __h_data ). Just ). __h_0_mem ) );
                            true ;
                          }) ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* cicili#Progn5939 */
                          nitem ;
                        }) : ({ /* cicili#Let5943 */
                          // ----------
                          ;
                          ({ /* cicili#Progn5945 */
                            ((BTree_int_User_pair_t){ });
                          });
                        }));
                    });
                  })), pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Internal_BTree_int_User (take_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ), ({ /* cicili#Let5956 */
                      __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5958 */
                        __auto_type r1  = take_List_Rc_BTree_int_User (L_BTree_int_User , children );
                        // ----------
                        ((void)((r1 . __h_table )-> freeData ));
                        r1 ;
                      });
                      // ----------
                      fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5968 */
                          Rc_BTree_int_User __ciciliC_5967 (Rc_BTree_int_User __h_value ) {
                            return clone_Rc_BTree_int_User (__h_value );
                          }
                          __ciciliC_5967 ;
                        }), r1 );
                    }))), new_Rc_BTree_int_User (Internal_BTree_int_User (drop_List_BTree_int_User_pair_t (L_BTree_int_User , items ), ({ /* cicili#Let5979 */
                      __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5981 */
                        __auto_type r1  = drop_List_Rc_BTree_int_User (L_BTree_int_User , children );
                        // ----------
                        ((void)((r1 . __h_table )-> freeData ));
                        r1 ;
                      });
                      // ----------
                      fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5991 */
                          Rc_BTree_int_User __ciciliC_5990 (Rc_BTree_int_User __h_value ) {
                            return clone_Rc_BTree_int_User (__h_value );
                          }
                          __ciciliC_5990 ;
                        }), r1 );
                    })))}), 2));
              }) : tree );
          }) : ({ /* cicili#Let5998 */
            typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            ;
            ({ /* cicili#Let6000 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn6001 */
                      (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn6003 */
                      (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn6008 */
                  (((len_List_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? ({ /* cicili#Let6014 */
                      __auto_type tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6016 */
                        __auto_type tree  = tree ;
                        // ----------
                        ((void)(tree -> __h_table -> freeClass ));
                        tree ;
                      });
                      // ----------
                      Branch_BTree_int_User (wrap_List_BTree_int_User_pair_t (({ /* cicili#Let6024 */
                          __auto_type match6023  = nth_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                          typeof((((match6023 . __h_data ). Just ). __h_0_mem )) nitem ;
                          // ----------
                          ;
                          ({ /* cicili#Let6028 */
                            bool __h_case_result  = (true  &&  (((match6023 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6029 */
                                  (nitem  =  (((match6023 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn6034 */
                                nitem ;
                              }) : ({ /* cicili#Let6038 */
                                // ----------
                                ;
                                ({ /* cicili#Progn6040 */
                                  ((BTree_int_User_pair_t){ });
                                });
                              }));
                          });
                        })), pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Internal_BTree_int_User (take_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ), ({ /* cicili#Let6051 */
                            __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6053 */
                              __auto_type r1  = take_List_Rc_BTree_int_User (L_BTree_int_User , children );
                              // ----------
                              ((void)((r1 . __h_table )-> freeData ));
                              r1 ;
                            });
                            // ----------
                            fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6063 */
                                Rc_BTree_int_User __ciciliC_6062 (Rc_BTree_int_User __h_value ) {
                                  return clone_Rc_BTree_int_User (__h_value );
                                }
                                __ciciliC_6062 ;
                              }), r1 );
                          }))), new_Rc_BTree_int_User (Internal_BTree_int_User (drop_List_BTree_int_User_pair_t (L_BTree_int_User , items ), ({ /* cicili#Let6074 */
                            __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6076 */
                              __auto_type r1  = drop_List_Rc_BTree_int_User (L_BTree_int_User , children );
                              // ----------
                              ((void)((r1 . __h_table )-> freeData ));
                              r1 ;
                            });
                            // ----------
                            fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6086 */
                                Rc_BTree_int_User __ciciliC_6085 (Rc_BTree_int_User __h_value ) {
                                  return clone_Rc_BTree_int_User (__h_value );
                                }
                                __ciciliC_6085 ;
                              }), r1 );
                          })))}), 2));
                    }) : tree );
                }) : ({ /* cicili#Let6093 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  ;
                  ({ /* cicili#Let6095 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn6096 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn6101 */
                        (((len_List_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? ({ /* cicili#Let6107 */
                            __auto_type tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6109 */
                              __auto_type tree  = tree ;
                              // ----------
                              ((void)(tree -> __h_table -> freeClass ));
                              tree ;
                            });
                            // ----------
                            Branch_BTree_int_User (wrap_List_BTree_int_User_pair_t (({ /* cicili#Let6117 */
                                __auto_type match6116  = nth_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                                typeof((((match6116 . __h_data ). Just ). __h_0_mem )) nitem ;
                                // ----------
                                ;
                                ({ /* cicili#Let6121 */
                                  bool __h_case_result  = (true  &&  (((match6116 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6122 */
                                        (nitem  =  (((match6116 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn6127 */
                                      nitem ;
                                    }) : ({ /* cicili#Let6131 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn6133 */
                                        ((BTree_int_User_pair_t){ });
                                      });
                                    }));
                                });
                              })), pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Leaf_BTree_int_User (take_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ))), new_Rc_BTree_int_User (Leaf_BTree_int_User (drop_List_BTree_int_User_pair_t (L_BTree_int_User , items )))}), 2));
                          }) : tree );
                      }) : ({ /* cicili#Let6150 */
                        // ----------
                        ;
                        ({ /* cicili#Progn6152 */
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
  return ({ /* cicili#Let6158 */
      typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      ;
      ({ /* cicili#Let6160 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn6161 */
                (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn6163 */
                (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn6168 */
            (((len_List_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? Branch_BTree_int_User (wrap_List_BTree_int_User_pair_t (({ /* cicili#Let6178 */
                __auto_type match6177  = nth_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                typeof((((match6177 . __h_data ). Just ). __h_0_mem )) nitem ;
                // ----------
                ;
                ({ /* cicili#Let6182 */
                  bool __h_case_result  = (true  &&  (((match6177 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6183 */
                        (nitem  =  (((match6177 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6188 */
                      nitem ;
                    }) : ({ /* cicili#Let6192 */
                      // ----------
                      ;
                      ({ /* cicili#Progn6194 */
                        ((BTree_int_User_pair_t){ });
                      });
                    }));
                });
              })), pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Internal_BTree_int_User (take_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ), ({ /* cicili#Let6205 */
                  __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6207 */
                    __auto_type r1  = take_List_Rc_BTree_int_User (L_BTree_int_User , children );
                    // ----------
                    ((void)((r1 . __h_table )-> freeData ));
                    r1 ;
                  });
                  // ----------
                  fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6217 */
                      Rc_BTree_int_User __ciciliC_6216 (Rc_BTree_int_User __h_value ) {
                        return clone_Rc_BTree_int_User (__h_value );
                      }
                      __ciciliC_6216 ;
                    }), r1 );
                }))), new_Rc_BTree_int_User (Internal_BTree_int_User (drop_List_BTree_int_User_pair_t (L_BTree_int_User , items ), ({ /* cicili#Let6228 */
                  __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6230 */
                    __auto_type r1  = drop_List_Rc_BTree_int_User (L_BTree_int_User , children );
                    // ----------
                    ((void)((r1 . __h_table )-> freeData ));
                    r1 ;
                  });
                  // ----------
                  fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6240 */
                      Rc_BTree_int_User __ciciliC_6239 (Rc_BTree_int_User __h_value ) {
                        return clone_Rc_BTree_int_User (__h_value );
                      }
                      __ciciliC_6239 ;
                    }), r1 );
                })))}), 2)) : tree );
          }) : ({ /* cicili#Let6247 */
            typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            ;
            ({ /* cicili#Let6249 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn6250 */
                      (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn6252 */
                      (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn6257 */
                  (((len_List_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? Branch_BTree_int_User (wrap_List_BTree_int_User_pair_t (({ /* cicili#Let6267 */
                      __auto_type match6266  = nth_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                      typeof((((match6266 . __h_data ). Just ). __h_0_mem )) nitem ;
                      // ----------
                      ;
                      ({ /* cicili#Let6271 */
                        bool __h_case_result  = (true  &&  (((match6266 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6272 */
                              (nitem  =  (((match6266 . __h_data ). Just ). __h_0_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn6277 */
                            nitem ;
                          }) : ({ /* cicili#Let6281 */
                            // ----------
                            ;
                            ({ /* cicili#Progn6283 */
                              ((BTree_int_User_pair_t){ });
                            });
                          }));
                      });
                    })), pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Internal_BTree_int_User (take_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ), ({ /* cicili#Let6294 */
                        __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6296 */
                          __auto_type r1  = take_List_Rc_BTree_int_User (L_BTree_int_User , children );
                          // ----------
                          ((void)((r1 . __h_table )-> freeData ));
                          r1 ;
                        });
                        // ----------
                        fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6306 */
                            Rc_BTree_int_User __ciciliC_6305 (Rc_BTree_int_User __h_value ) {
                              return clone_Rc_BTree_int_User (__h_value );
                            }
                            __ciciliC_6305 ;
                          }), r1 );
                      }))), new_Rc_BTree_int_User (Internal_BTree_int_User (drop_List_BTree_int_User_pair_t (L_BTree_int_User , items ), ({ /* cicili#Let6317 */
                        __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6319 */
                          __auto_type r1  = drop_List_Rc_BTree_int_User (L_BTree_int_User , children );
                          // ----------
                          ((void)((r1 . __h_table )-> freeData ));
                          r1 ;
                        });
                        // ----------
                        fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6329 */
                            Rc_BTree_int_User __ciciliC_6328 (Rc_BTree_int_User __h_value ) {
                              return clone_Rc_BTree_int_User (__h_value );
                            }
                            __ciciliC_6328 ;
                          }), r1 );
                      })))}), 2)) : tree );
                }) : ({ /* cicili#Let6336 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  ;
                  ({ /* cicili#Let6338 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn6339 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn6344 */
                        (((len_List_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? Branch_BTree_int_User (wrap_List_BTree_int_User_pair_t (({ /* cicili#Let6354 */
                            __auto_type match6353  = nth_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                            typeof((((match6353 . __h_data ). Just ). __h_0_mem )) nitem ;
                            // ----------
                            ;
                            ({ /* cicili#Let6358 */
                              bool __h_case_result  = (true  &&  (((match6353 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6359 */
                                    (nitem  =  (((match6353 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* cicili#Progn6364 */
                                  nitem ;
                                }) : ({ /* cicili#Let6368 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Progn6370 */
                                    ((BTree_int_User_pair_t){ });
                                  });
                                }));
                            });
                          })), pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Leaf_BTree_int_User (take_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ))), new_Rc_BTree_int_User (Leaf_BTree_int_User (drop_List_BTree_int_User_pair_t (L_BTree_int_User , items )))}), 2)) : tree );
                      }) : ({ /* cicili#Let6387 */
                        // ----------
                        ;
                        ({ /* cicili#Progn6389 */
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
  return ({ /* cicili#Let6396 */
      __auto_type merged  = Internal_BTree_int_User (append_List_BTree_int_User_pair_t (left_items , right_items ), ({ /* cicili#Let6401 */
        __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6403 */
          __auto_type r1  = append_List_Rc_BTree_int_User (left_children , right_children );
          // ----------
          ((void)((r1 . __h_table )-> freeData ));
          r1 ;
        });
        // ----------
        fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6412 */
            Rc_BTree_int_User __ciciliC_6411 (Rc_BTree_int_User __h_value ) {
              return clone_Rc_BTree_int_User (__h_value );
            }
            __ciciliC_6411 ;
          }), r1 );
      }));
      // ----------
      ({ /* cicili#Let6420 */
        __auto_type tmp_child  = splitForDelete_BTree_int_User (merged );
        typeof((((tmp_child -> __h_data ). Branch ). __h_0_mem )) tmp_items ;
        typeof((((tmp_child -> __h_data ). Branch ). __h_1_mem )) tmp_children ;
        // ----------
        ;
        ({ /* cicili#Let6423 */
          bool __h_case_result  = (true  &&  (((tmp_child -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn6424 */
                  (tmp_items  =  (((tmp_child -> __h_data ). Branch ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn6426 */
                  (tmp_children  =  (((tmp_child -> __h_data ). Branch ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6431 */
              ({ /* cicili#Let6434 */
                __auto_type __h_matchbox  = tmp_items ;
                // ----------
                ({ /* cicili#Let6438 */
                  __auto_type match6437  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                  typeof((((match6437 . __h_data ). Just ). __h_0_mem )) unboxed ;
                  // ----------
                  ;
                  ({ /* cicili#Let6441 */
                    bool __h_case_result  = (true  &&  (((match6437 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6442 */
                          (unboxed  =  (((match6437 . __h_data ). Just ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn6447 */
                        ({ /* cicili#Let6451 */
                          typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                          // ----------
                          ;
                          ({ /* cicili#Let6453 */
                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn6454 */
                                  (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn6459 */
                                ({ /* cicili#Let6462 */
                                  __auto_type merged  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6464 */
                                    __auto_type merged  = merged ;
                                    // ----------
                                    ((void)(merged -> __h_table -> freeClass ));
                                    merged ;
                                  });
                                  __auto_type tmp_child  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6467 */
                                    __auto_type tmp_child  = tmp_child ;
                                    // ----------
                                    ((void)(tmp_child -> __h_table -> freeClass ));
                                    tmp_child ;
                                  });
                                  // ----------
                                  Internal_BTree_int_User (replaceAt_List_BTree_int_User_pair_t (items , head , pitem_index ), ({ /* cicili#Let6474 */
                                      __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6476 */
                                        __auto_type r1  = deleteAt_List_Rc_BTree_int_User (children , pchild_index );
                                        // ----------
                                        ((void)((r1 . __h_table )-> freeData ));
                                        r1 ;
                                      });
                                      __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6480 */
                                        __auto_type r2  = take_List_Rc_BTree_int_User (pchild_index , r1 );
                                        // ----------
                                        ((void)((r2 . __h_table )-> freeData ));
                                        r2 ;
                                      });
                                      __auto_type r3  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6484 */
                                        __auto_type r3  = drop_List_Rc_BTree_int_User ((pchild_index  +  1 ), r1 );
                                        // ----------
                                        ((void)((r3 . __h_table )-> freeData ));
                                        r3 ;
                                      });
                                      __auto_type r4  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6488 */
                                        __auto_type r4  = append_List_Rc_BTree_int_User (tmp_children , r3 );
                                        // ----------
                                        ((void)((r4 . __h_table )-> freeData ));
                                        r4 ;
                                      });
                                      __auto_type r5  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6492 */
                                        __auto_type r5  = append_List_Rc_BTree_int_User (r2 , r4 );
                                        // ----------
                                        ((void)((r5 . __h_table )-> freeData ));
                                        r5 ;
                                      });
                                      // ----------
                                      fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6501 */
                                          Rc_BTree_int_User __ciciliC_6500 (Rc_BTree_int_User __h_value ) {
                                            return clone_Rc_BTree_int_User (__h_value );
                                          }
                                          __ciciliC_6500 ;
                                        }), r5 );
                                    }));
                                });
                              }) : ({ /* cicili#Let6508 */
                                // ----------
                                ;
                                ({ /* cicili#Progn6510 */
                                  Leaf_BTree_int_User (BoxedNil_BTree_int_User_pair_t ());
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let6516 */
                        // ----------
                        ;
                        ({ /* cicili#Progn6518 */
                          Leaf_BTree_int_User (BoxedNil_BTree_int_User_pair_t ());
                        });
                      }));
                  });
                });
              });
            }) : ({ /* cicili#Let6524 */
              // ----------
              ;
              ({ /* cicili#Let6526 */
                bool __h_case_result  = (true  &&  ((tmp_child -> __h_ctor ) ==  __h_Internal_t  ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn6530 */
                    Internal_BTree_int_User (deleteAt_List_BTree_int_User_pair_t (items , pitem_index ), ({ /* cicili#Let6536 */
                        __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6538 */
                          __auto_type r1  = deleteAt_List_Rc_BTree_int_User (children , pchild_index );
                          // ----------
                          ((void)((r1 . __h_table )-> freeData ));
                          r1 ;
                        });
                        __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6542 */
                          __auto_type r2  = new_Rc_BTree_int_User (merged );
                          // ----------
                          ((void)((r2 . __h_table )-> freeData ));
                          r2 ;
                        });
                        __auto_type r3  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6546 */
                          __auto_type r3  = replaceAt_List_Rc_BTree_int_User (r1 , r2 , pchild_index );
                          // ----------
                          ((void)((r3 . __h_table )-> freeData ));
                          r3 ;
                        });
                        // ----------
                        fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6555 */
                            Rc_BTree_int_User __ciciliC_6554 (Rc_BTree_int_User __h_value ) {
                              return clone_Rc_BTree_int_User (__h_value );
                            }
                            __ciciliC_6554 ;
                          }), r3 );
                      }));
                  }) : ({ /* cicili#Let6562 */
                    // ----------
                    ;
                    ({ /* cicili#Progn6564 */
                      Leaf_BTree_int_User (BoxedNil_BTree_int_User_pair_t ());
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
    return ({ /* cicili#Let6591 */
        __auto_type match6590  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
        typeof((((match6590 . __h_data ). Just ). __h_0_mem )) right_child_rc ;
        // ----------
        ;
        ({ /* cicili#Let6594 */
          bool __h_case_result  = (true  &&  (((match6590 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6595 */
                (right_child_rc  =  (((match6590 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6600 */
              ({ /* cicili#Let6603 */
                __auto_type __h_matchbox  = right_child_rc ;
                // ----------
                ({ /* cicili#Let6607 */
                  __auto_type match6606  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                  typeof((((match6606 . __h_data ). Just ). __h_0_mem )) unboxed ;
                  // ----------
                  ;
                  ({ /* cicili#Let6610 */
                    bool __h_case_result  = (true  &&  (((match6606 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6611 */
                          (unboxed  =  (((match6606 . __h_data ). Just ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn6616 */
                        ({ /* cicili#Let6620 */
                          typeof((((unboxed -> __h_data ). Leaf ). __h_0_mem )) right_child_items ;
                          // ----------
                          ;
                          ({ /* cicili#Let6622 */
                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn6623 */
                                  (right_child_items  =  (((unboxed -> __h_data ). Leaf ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn6628 */
                                (((hasLen_List_BTree_int_User_pair_t (right_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let6635 */
                                    __auto_type __h_matchbox  = right_child_items ;
                                    // ----------
                                    ({ /* cicili#Let6639 */
                                      __auto_type match6638  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                      typeof((((match6638 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                      // ----------
                                      ;
                                      ({ /* cicili#Let6642 */
                                        bool __h_case_result  = (true  &&  (((match6638 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6643 */
                                              (unboxed  =  (((match6638 . __h_data ). Just ). __h_0_mem ) );
                                              true ;
                                            }) ) );
                                        // ----------
                                        
                                        ((__h_case_result ) ? ({ /* cicili#Progn6648 */
                                            ({ /* cicili#Let6652 */
                                              __auto_type first  = unboxed ;
                                              typeof((((first -> __h_data ). Cons ). __h_0_mem )) first_item ;
                                              typeof((((first -> __h_data ). Cons ). __h_1_mem )) tail ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let6654 */
                                                bool __h_case_result  = (true  &&  (((first -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn6655 */
                                                        (first_item  =  (((first -> __h_data ). Cons ). __h_0_mem ) );
                                                        true ;
                                                      }) &&  ({ /* cicili#Progn6657 */
                                                        (tail  =  (((first -> __h_data ). Cons ). __h_1_mem ) );
                                                        true ;
                                                      }) ) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn6662 */
                                                    Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , first_item , current ), ({ /* cicili#Let6670 */
                                                        __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6672 */
                                                          __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                                          // ----------
                                                          ((void)((r1 . __h_table )-> freeData ));
                                                          r1 ;
                                                        });
                                                        __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6676 */
                                                          __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6682 */
                                                            Rc_BTree_int_User __ciciliC_6681 (Rc_BTree_int_User __h_value ) {
                                                              return clone_Rc_BTree_int_User (__h_value );
                                                            }
                                                            __ciciliC_6681 ;
                                                          }), r1 );
                                                          // ----------
                                                          ((void)((r2 . __h_table )-> freeData ));
                                                          r2 ;
                                                        });
                                                        __auto_type r3  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6689 */
                                                          __auto_type r3  = drop_List_Rc_BTree_int_User ((index  +  2 ), children );
                                                          // ----------
                                                          ((void)((r3 . __h_table )-> freeData ));
                                                          r3 ;
                                                        });
                                                        __auto_type r4  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6693 */
                                                          __auto_type r4  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6699 */
                                                            Rc_BTree_int_User __ciciliC_6698 (Rc_BTree_int_User __h_value ) {
                                                              return clone_Rc_BTree_int_User (__h_value );
                                                            }
                                                            __ciciliC_6698 ;
                                                          }), r3 );
                                                          // ----------
                                                          ((void)((r4 . __h_table )-> freeData ));
                                                          r4 ;
                                                        });
                                                        __auto_type r5  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6706 */
                                                          __auto_type r5  = take_List_BTree_int_User_pair_t (1, current );
                                                          // ----------
                                                          ((void)((r5 . __h_table )-> freeData ));
                                                          r5 ;
                                                        });
                                                        __auto_type r7  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6710 */
                                                          __auto_type r7  = pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Leaf_BTree_int_User (append_List_BTree_int_User_pair_t (child_items , r5 ))), new_Rc_BTree_int_User (Leaf_BTree_int_User (clone_Box_List_BTree_int_User_pair_t (tail )))}), 2);
                                                          // ----------
                                                          ((void)((r7 . __h_table )-> freeData ));
                                                          r7 ;
                                                        });
                                                        __auto_type r6  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6723 */
                                                          __auto_type r6  = append_List_Rc_BTree_int_User (r7 , r4 );
                                                          // ----------
                                                          ((void)((r6 . __h_table )-> freeData ));
                                                          r6 ;
                                                        });
                                                        // ----------
                                                        append_List_Rc_BTree_int_User (r2 , r6 );
                                                      })));
                                                  }) : ({ /* cicili#Let6730 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn6732 */
                                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight R1"));
                                                    });
                                                  }));
                                              });
                                            });
                                          }) : ({ /* cicili#Let6739 */
                                            // ----------
                                            ;
                                            ({ /* cicili#Progn6741 */
                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CONS ());
                                            });
                                          }));
                                      });
                                    });
                                  }) : ({ /* cicili#Let6747 */
                                    __auto_type __h_matchbox  = current ;
                                    // ----------
                                    ({ /* cicili#Let6751 */
                                      __auto_type match6750  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                      typeof((((match6750 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                      // ----------
                                      ;
                                      ({ /* cicili#Let6754 */
                                        bool __h_case_result  = (true  &&  (((match6750 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6755 */
                                              (unboxed  =  (((match6750 . __h_data ). Just ). __h_0_mem ) );
                                              true ;
                                            }) ) );
                                        // ----------
                                        
                                        ((__h_case_result ) ? ({ /* cicili#Progn6760 */
                                            ({ /* cicili#Let6764 */
                                              typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let6766 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn6767 */
                                                      (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn6772 */
                                                    Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (delete_List_BTree_int_User_pair_t (items , current ), ({ /* cicili#Let6780 */
                                                        __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6782 */
                                                          __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                                          // ----------
                                                          ((void)((r1 . __h_table )-> freeData ));
                                                          r1 ;
                                                        });
                                                        __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6786 */
                                                          __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6792 */
                                                            Rc_BTree_int_User __ciciliC_6791 (Rc_BTree_int_User __h_value ) {
                                                              return clone_Rc_BTree_int_User (__h_value );
                                                            }
                                                            __ciciliC_6791 ;
                                                          }), r1 );
                                                          // ----------
                                                          ((void)((r2 . __h_table )-> freeData ));
                                                          r2 ;
                                                        });
                                                        __auto_type r3  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6799 */
                                                          __auto_type r3  = drop_List_Rc_BTree_int_User ((index  +  2 ), children );
                                                          // ----------
                                                          ((void)((r3 . __h_table )-> freeData ));
                                                          r3 ;
                                                        });
                                                        __auto_type r4  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6803 */
                                                          __auto_type r4  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6809 */
                                                            Rc_BTree_int_User __ciciliC_6808 (Rc_BTree_int_User __h_value ) {
                                                              return clone_Rc_BTree_int_User (__h_value );
                                                            }
                                                            __ciciliC_6808 ;
                                                          }), r3 );
                                                          // ----------
                                                          ((void)((r4 . __h_table )-> freeData ));
                                                          r4 ;
                                                        });
                                                        __auto_type r5  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6816 */
                                                          __auto_type r5  = wrap_List_BTree_int_User_pair_t (head );
                                                          // ----------
                                                          ((void)((r5 . __h_table )-> freeData ));
                                                          r5 ;
                                                        });
                                                        __auto_type r6  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6820 */
                                                          __auto_type r6  = append_List_BTree_int_User_pair_t (child_items , r5 );
                                                          // ----------
                                                          ((void)((r6 . __h_table )-> freeData ));
                                                          r6 ;
                                                        });
                                                        __auto_type r8  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6824 */
                                                          __auto_type r8  = push_List_Rc_BTree_int_User (new_Rc_BTree_int_User (Leaf_BTree_int_User (append_List_BTree_int_User_pair_t (r6 , right_child_items ))), r4 );
                                                          // ----------
                                                          ((void)((r8 . __h_table )-> freeData ));
                                                          r8 ;
                                                        });
                                                        // ----------
                                                        append_List_Rc_BTree_int_User (r2 , r8 );
                                                      })));
                                                  }) : ({ /* cicili#Let6835 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn6837 */
                                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight R2"));
                                                    });
                                                  }));
                                              });
                                            });
                                          }) : ({ /* cicili#Let6844 */
                                            // ----------
                                            ;
                                            ({ /* cicili#Progn6846 */
                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CONS ());
                                            });
                                          }));
                                      });
                                    });
                                  }));
                              }) : ({ /* cicili#Let6853 */
                                // ----------
                                ;
                                ({ /* cicili#Progn6855 */
                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight 3"));
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let6862 */
                        // ----------
                        ;
                        ({ /* cicili#Progn6864 */
                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight 3"));
                        });
                      }));
                  });
                });
              });
            }) : ({ /* cicili#Let6871 */
              // ----------
              ;
              ({ /* cicili#Progn6873 */
                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight 4"));
              });
            }));
        });
      });
  }
  Either_BTree_int_User_Error_BTree_int_User borrowLeft (List_BTree_int_User_pair_t child_items ) {
    return ({ /* cicili#Let6885 */
        typeof((((wleft . __h_data ). Just ). __h_0_mem )) left ;
        // ----------
        ;
        ({ /* cicili#Let6887 */
          bool __h_case_result  = (true  &&  (((wleft . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6888 */
                (left  =  (((wleft . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6893 */
              ({ /* cicili#Let6896 */
                __auto_type __h_matchbox  = left ;
                // ----------
                ({ /* cicili#Let6900 */
                  __auto_type match6899  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                  typeof((((match6899 . __h_data ). Just ). __h_0_mem )) unboxed ;
                  // ----------
                  ;
                  ({ /* cicili#Let6903 */
                    bool __h_case_result  = (true  &&  (((match6899 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6904 */
                          (unboxed  =  (((match6899 . __h_data ). Just ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn6909 */
                        ({ /* cicili#Let6913 */
                          typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) left_item ;
                          // ----------
                          ;
                          ({ /* cicili#Let6915 */
                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn6916 */
                                  (left_item  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn6921 */
                                ({ /* cicili#Let6925 */
                                  __auto_type match6924  = nth_List_Rc_BTree_int_User ((index  -  1 ), children );
                                  typeof((((match6924 . __h_data ). Just ). __h_0_mem )) left_child_rc ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let6928 */
                                    bool __h_case_result  = (true  &&  (((match6924 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6929 */
                                          (left_child_rc  =  (((match6924 . __h_data ). Just ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn6934 */
                                        ({ /* cicili#Let6937 */
                                          __auto_type __h_matchbox  = left_child_rc ;
                                          // ----------
                                          ({ /* cicili#Let6941 */
                                            __auto_type match6940  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                            typeof((((match6940 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                            // ----------
                                            ;
                                            ({ /* cicili#Let6944 */
                                              bool __h_case_result  = (true  &&  (((match6940 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6945 */
                                                    (unboxed  =  (((match6940 . __h_data ). Just ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              
                                              ((__h_case_result ) ? ({ /* cicili#Progn6950 */
                                                  ({ /* cicili#Let6954 */
                                                    typeof((((unboxed -> __h_data ). Leaf ). __h_0_mem )) left_child_items ;
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Let6956 */
                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn6957 */
                                                            (left_child_items  =  (((unboxed -> __h_data ). Leaf ). __h_0_mem ) );
                                                            true ;
                                                          }) ) );
                                                      // ----------
                                                      
                                                      ((__h_case_result ) ? ({ /* cicili#Progn6962 */
                                                          (((hasLen_List_BTree_int_User_pair_t (left_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let6969 */
                                                              __auto_type last  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6971 */
                                                                __auto_type last  = last_List_BTree_int_User_pair_t (left_child_items );
                                                                // ----------
                                                                ((void)((last . __h_table )-> freeData ));
                                                                last ;
                                                              });
                                                              // ----------
                                                              ({ /* cicili#Let6976 */
                                                                __auto_type __h_matchbox  = last ;
                                                                // ----------
                                                                ({ /* cicili#Let6980 */
                                                                  __auto_type match6979  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                  typeof((((match6979 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                  // ----------
                                                                  ;
                                                                  ({ /* cicili#Let6983 */
                                                                    bool __h_case_result  = (true  &&  (((match6979 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6984 */
                                                                          (unboxed  =  (((match6979 . __h_data ). Just ). __h_0_mem ) );
                                                                          true ;
                                                                        }) ) );
                                                                    // ----------
                                                                    
                                                                    ((__h_case_result ) ? ({ /* cicili#Progn6989 */
                                                                        ({ /* cicili#Let6993 */
                                                                          typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) last_item ;
                                                                          // ----------
                                                                          ;
                                                                          ({ /* cicili#Let6995 */
                                                                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn6996 */
                                                                                  (last_item  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                                                                                  true ;
                                                                                }) ) );
                                                                            // ----------
                                                                            
                                                                            ((__h_case_result ) ? ({ /* cicili#Progn7001 */
                                                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , last_item , left ), ({ /* cicili#Let7009 */
                                                                                    __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7011 */
                                                                                      __auto_type r1  = take_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                                                      // ----------
                                                                                      ((void)((r1 . __h_table )-> freeData ));
                                                                                      r1 ;
                                                                                    });
                                                                                    __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7015 */
                                                                                      __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn7021 */
                                                                                        Rc_BTree_int_User __ciciliC_7020 (Rc_BTree_int_User __h_value ) {
                                                                                          return clone_Rc_BTree_int_User (__h_value );
                                                                                        }
                                                                                        __ciciliC_7020 ;
                                                                                      }), r1 );
                                                                                      // ----------
                                                                                      ((void)((r2 . __h_table )-> freeData ));
                                                                                      r2 ;
                                                                                    });
                                                                                    __auto_type r3  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7028 */
                                                                                      __auto_type r3  = drop_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                                      // ----------
                                                                                      ((void)((r3 . __h_table )-> freeData ));
                                                                                      r3 ;
                                                                                    });
                                                                                    __auto_type r4  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7032 */
                                                                                      __auto_type r4  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn7038 */
                                                                                        Rc_BTree_int_User __ciciliC_7037 (Rc_BTree_int_User __h_value ) {
                                                                                          return clone_Rc_BTree_int_User (__h_value );
                                                                                        }
                                                                                        __ciciliC_7037 ;
                                                                                      }), r3 );
                                                                                      // ----------
                                                                                      ((void)((r4 . __h_table )-> freeData ));
                                                                                      r4 ;
                                                                                    });
                                                                                    __auto_type r5  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7045 */
                                                                                      __auto_type r5  = pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Leaf_BTree_int_User (init_List_BTree_int_User_pair_t (left_child_items ))), new_Rc_BTree_int_User (Leaf_BTree_int_User (push_List_BTree_int_User_pair_t (left_item , child_items )))}), 2);
                                                                                      // ----------
                                                                                      ((void)((r5 . __h_table )-> freeData ));
                                                                                      r5 ;
                                                                                    });
                                                                                    __auto_type r7  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7058 */
                                                                                      __auto_type r7  = append_List_Rc_BTree_int_User (r5 , r4 );
                                                                                      // ----------
                                                                                      ((void)((r7 . __h_table )-> freeData ));
                                                                                      r7 ;
                                                                                    });
                                                                                    // ----------
                                                                                    append_List_Rc_BTree_int_User (r2 , r7 );
                                                                                  })));
                                                                              }) : ({ /* cicili#Let7065 */
                                                                                // ----------
                                                                                ;
                                                                                ({ /* cicili#Progn7067 */
                                                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowLeft 2"));
                                                                                });
                                                                              }));
                                                                          });
                                                                        });
                                                                      }) : ({ /* cicili#Let7074 */
                                                                        // ----------
                                                                        ;
                                                                        ({ /* cicili#Progn7076 */
                                                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CONS ());
                                                                        });
                                                                      }));
                                                                  });
                                                                });
                                                              });
                                                            }) : ({ /* cicili#Let7083 */
                                                              __auto_type match7082  = borrowRight (child_items );
                                                              // ----------
                                                              ;
                                                              ({ /* cicili#Let7085 */
                                                                bool __h_case_result  = (true  &&  ((match7082 . __h_ctor ) ==  __h_Left_t  ) );
                                                                // ----------
                                                                
                                                                ((__h_case_result ) ? ({ /* cicili#Progn7089 */
                                                                    Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (delete_List_BTree_int_User_pair_t (items , left ), ({ /* cicili#Let7097 */
                                                                        __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7099 */
                                                                          __auto_type r1  = take_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                                          // ----------
                                                                          ((void)((r1 . __h_table )-> freeData ));
                                                                          r1 ;
                                                                        });
                                                                        __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7103 */
                                                                          __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn7109 */
                                                                            Rc_BTree_int_User __ciciliC_7108 (Rc_BTree_int_User __h_value ) {
                                                                              return clone_Rc_BTree_int_User (__h_value );
                                                                            }
                                                                            __ciciliC_7108 ;
                                                                          }), r1 );
                                                                          // ----------
                                                                          ((void)((r2 . __h_table )-> freeData ));
                                                                          r2 ;
                                                                        });
                                                                        __auto_type r3  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7116 */
                                                                          __auto_type r3  = drop_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                          // ----------
                                                                          ((void)((r3 . __h_table )-> freeData ));
                                                                          r3 ;
                                                                        });
                                                                        __auto_type r4  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7120 */
                                                                          __auto_type r4  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn7126 */
                                                                            Rc_BTree_int_User __ciciliC_7125 (Rc_BTree_int_User __h_value ) {
                                                                              return clone_Rc_BTree_int_User (__h_value );
                                                                            }
                                                                            __ciciliC_7125 ;
                                                                          }), r3 );
                                                                          // ----------
                                                                          ((void)((r4 . __h_table )-> freeData ));
                                                                          r4 ;
                                                                        });
                                                                        __auto_type r8  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7133 */
                                                                          __auto_type r8  = wrap_List_BTree_int_User_pair_t (left_item );
                                                                          // ----------
                                                                          ((void)((r8 . __h_table )-> freeData ));
                                                                          r8 ;
                                                                        });
                                                                        __auto_type r5  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7137 */
                                                                          __auto_type r5  = append_List_BTree_int_User_pair_t (left_child_items , r8 );
                                                                          // ----------
                                                                          ((void)((r5 . __h_table )-> freeData ));
                                                                          r5 ;
                                                                        });
                                                                        __auto_type r7  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7141 */
                                                                          __auto_type r7  = push_List_Rc_BTree_int_User (new_Rc_BTree_int_User (Leaf_BTree_int_User (append_List_BTree_int_User_pair_t (r5 , child_items ))), r4 );
                                                                          // ----------
                                                                          ((void)((r7 . __h_table )-> freeData ));
                                                                          r7 ;
                                                                        });
                                                                        // ----------
                                                                        append_List_Rc_BTree_int_User (r2 , r7 );
                                                                      })));
                                                                  }) : ({ /* cicili#Let7152 */
                                                                    __auto_type right  = match7082 ;
                                                                    // ----------
                                                                    ;
                                                                    ({ /* cicili#Progn7154 */
                                                                      right ;
                                                                    });
                                                                  }));
                                                              });
                                                            }));
                                                        }) : ({ /* cicili#Let7158 */
                                                          // ----------
                                                          ;
                                                          ({ /* cicili#Progn7160 */
                                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowLeft 3"));
                                                          });
                                                        }));
                                                    });
                                                  });
                                                }) : ({ /* cicili#Let7167 */
                                                  // ----------
                                                  ;
                                                  ({ /* cicili#Progn7169 */
                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowLeft 4"));
                                                  });
                                                }));
                                            });
                                          });
                                        });
                                      }) : ({ /* cicili#Let7176 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn7178 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowLeft 5"));
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let7185 */
                                // ----------
                                ;
                                ({ /* cicili#Progn7187 */
                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowLeft 6"));
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let7194 */
                        // ----------
                        ;
                        ({ /* cicili#Progn7196 */
                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CONS ());
                        });
                      }));
                  });
                });
              });
            }) : ({ /* cicili#Let7203 */
              // ----------
              ;
              ({ /* cicili#Progn7205 */
                borrowRight (child_items );
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let7209 */
      __auto_type result  = ({ /* cicili#Let7212 */
        typeof((((nchild -> __h_data ). Branch ). __h_0_mem )) child_items ;
        // ----------
        ;
        ({ /* cicili#Let7214 */
          bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn7215 */
                (child_items  =  (((nchild -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn7220 */
              (((hasLen_List_BTree_int_User_pair_t (child_items , (L_BTree_int_User  -  1 )) ==  (L_BTree_int_User  -  1 ) )) ? Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (clone_Box_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let7232 */
                  __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7234 */
                    __auto_type r1  = new_Rc_BTree_int_User (nchild );
                    // ----------
                    ((void)((r1 . __h_table )-> freeData ));
                    r1 ;
                  });
                  __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7238 */
                    __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                    // ----------
                    ((void)((r2 . __h_table )-> freeData ));
                    r2 ;
                  });
                  // ----------
                  fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn7247 */
                      Rc_BTree_int_User __ciciliC_7246 (Rc_BTree_int_User __h_value ) {
                        return clone_Rc_BTree_int_User (__h_value );
                      }
                      __ciciliC_7246 ;
                    }), r2 );
                }))) : ({ /* cicili#Let7253 */
                  __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7255 */
                    __auto_type nchild  = nchild ;
                    // ----------
                    ((void)(nchild -> __h_table -> freeClass ));
                    nchild ;
                  });
                  // ----------
                  borrowLeft (child_items );
                }));
            }) : ({ /* cicili#Let7260 */
              typeof((((nchild -> __h_data ). Internal ). __h_0_mem )) child_items ;
              // ----------
              ;
              ({ /* cicili#Let7262 */
                bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn7263 */
                      (child_items  =  (((nchild -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn7268 */
                    (((hasLen_List_BTree_int_User_pair_t (child_items , (L_BTree_int_User  -  1 )) ==  (L_BTree_int_User  -  1 ) )) ? Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (clone_Box_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let7280 */
                        __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7282 */
                          __auto_type r1  = new_Rc_BTree_int_User (nchild );
                          // ----------
                          ((void)((r1 . __h_table )-> freeData ));
                          r1 ;
                        });
                        __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7286 */
                          __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                          // ----------
                          ((void)((r2 . __h_table )-> freeData ));
                          r2 ;
                        });
                        // ----------
                        fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn7295 */
                            Rc_BTree_int_User __ciciliC_7294 (Rc_BTree_int_User __h_value ) {
                              return clone_Rc_BTree_int_User (__h_value );
                            }
                            __ciciliC_7294 ;
                          }), r2 );
                      }))) : ({ /* cicili#Let7301 */
                        __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7303 */
                          __auto_type nchild  = nchild ;
                          // ----------
                          ((void)(nchild -> __h_table -> freeClass ));
                          nchild ;
                        });
                        // ----------
                        borrowLeft (child_items );
                      }));
                  }) : ({ /* cicili#Let7308 */
                    typeof((((nchild -> __h_data ). Leaf ). __h_0_mem )) child_items ;
                    // ----------
                    ;
                    ({ /* cicili#Let7310 */
                      bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn7311 */
                            (child_items  =  (((nchild -> __h_data ). Leaf ). __h_0_mem ) );
                            true ;
                          }) ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* cicili#Progn7316 */
                          (((hasLen_List_BTree_int_User_pair_t (child_items , (L_BTree_int_User  -  1 )) ==  (L_BTree_int_User  -  1 ) )) ? Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (clone_Box_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let7328 */
                              __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7330 */
                                __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                // ----------
                                ((void)((r1 . __h_table )-> freeData ));
                                r1 ;
                              });
                              __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7334 */
                                __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                                // ----------
                                ((void)((r2 . __h_table )-> freeData ));
                                r2 ;
                              });
                              // ----------
                              fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn7343 */
                                  Rc_BTree_int_User __ciciliC_7342 (Rc_BTree_int_User __h_value ) {
                                    return clone_Rc_BTree_int_User (__h_value );
                                  }
                                  __ciciliC_7342 ;
                                }), r2 );
                            }))) : ({ /* cicili#Let7349 */
                              __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7351 */
                                __auto_type nchild  = nchild ;
                                // ----------
                                ((void)(nchild -> __h_table -> freeClass ));
                                nchild ;
                              });
                              // ----------
                              borrowLeft (child_items );
                            }));
                        }) : ({ /* cicili#Let7356 */
                          // ----------
                          ;
                          ({ /* cicili#Progn7358 */
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
    return ({ /* cicili#Let7383 */
        __auto_type match7382  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
        typeof((((match7382 . __h_data ). Just ). __h_0_mem )) right_child_rc ;
        // ----------
        ;
        ({ /* cicili#Let7386 */
          bool __h_case_result  = (true  &&  (((match7382 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7387 */
                (right_child_rc  =  (((match7382 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn7392 */
              ({ /* cicili#Let7396 */
                __auto_type match7395  = get_Rc_BTree_int_User (right_child_rc );
                typeof((((match7395 . __h_data ). Just ). __h_0_mem )) right_child ;
                // ----------
                ;
                ({ /* cicili#Let7399 */
                  bool __h_case_result  = (true  &&  (((match7395 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7400 */
                        (right_child  =  (((match7395 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn7405 */
                      ({ /* cicili#Let7409 */
                        typeof((((right_child -> __h_data ). Branch ). __h_0_mem )) right_child_items ;
                        typeof((((right_child -> __h_data ). Branch ). __h_1_mem )) right_child_children ;
                        // ----------
                        ;
                        ({ /* cicili#Let7411 */
                          bool __h_case_result  = (true  &&  (((right_child -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn7412 */
                                  (right_child_items  =  (((right_child -> __h_data ). Branch ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn7414 */
                                  (right_child_children  =  (((right_child -> __h_data ). Branch ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn7419 */
                              (((hasLen_List_BTree_int_User_pair_t (right_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let7428 */
                                  __auto_type match7426  = min_BTree_int_User (right_child );
                                  typeof((((match7426 . __h_data ). Just ). __h_0_mem )) min ;
                                  typeof((min . __h_0_mem )) min_key ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let7431 */
                                    bool __h_case_result  = (true  &&  (((match7426 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn7432 */
                                            (min  =  (((match7426 . __h_data ). Just ). __h_0_mem ) );
                                            true ;
                                          }) &&  (true  &&  ({ /* cicili#Progn7434 */
                                              (min_key  =  (min . __h_0_mem ) );
                                              true ;
                                            }) ) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn7439 */
                                        ({ /* cicili#Let7443 */
                                          __auto_type match7442  = delete_BTree_int_User (right_child , min_key , NULL );
                                          typeof((((match7442 . __h_data ). Right ). __h_0_mem )) nchild ;
                                          // ----------
                                          ;
                                          ({ /* cicili#Let7446 */
                                            bool __h_case_result  = (true  &&  (((match7442 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn7447 */
                                                  (nchild  =  (((match7442 . __h_data ). Right ). __h_0_mem ) );
                                                  true ;
                                                }) ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* cicili#Progn7452 */
                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , min , current ), ({ /* cicili#Let7460 */
                                                    __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7462 */
                                                      __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                      // ----------
                                                      ((void)((r1 . __h_table )-> freeData ));
                                                      r1 ;
                                                    });
                                                    __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7466 */
                                                      __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , (index  +  1 ));
                                                      // ----------
                                                      ((void)((r2 . __h_table )-> freeData ));
                                                      r2 ;
                                                    });
                                                    // ----------
                                                    fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn7475 */
                                                        Rc_BTree_int_User __ciciliC_7474 (Rc_BTree_int_User __h_value ) {
                                                          return clone_Rc_BTree_int_User (__h_value );
                                                        }
                                                        __ciciliC_7474 ;
                                                      }), r2 );
                                                  })));
                                              }) : ({ /* cicili#Let7482 */
                                                __auto_type left  = match7442 ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Progn7484 */
                                                  left ;
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* cicili#Let7488 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn7490 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 1"));
                                        });
                                      }));
                                  });
                                }) : ({ /* cicili#Let7496 */
                                  __auto_type __h_matchbox  = current ;
                                  // ----------
                                  ({ /* cicili#Let7500 */
                                    __auto_type match7499  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                    typeof((((match7499 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                    // ----------
                                    ;
                                    ({ /* cicili#Let7503 */
                                      bool __h_case_result  = (true  &&  (((match7499 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7504 */
                                            (unboxed  =  (((match7499 . __h_data ). Just ). __h_0_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn7509 */
                                          ({ /* cicili#Let7514 */
                                            typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) current_item ;
                                            typeof((current_item . __h_0_mem )) current_key ;
                                            // ----------
                                            ;
                                            ({ /* cicili#Let7516 */
                                              bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn7517 */
                                                      (current_item  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                                                      true ;
                                                    }) &&  (true  &&  ({ /* cicili#Progn7519 */
                                                        (current_key  =  (current_item . __h_0_mem ) );
                                                        true ;
                                                      }) ) ) ) );
                                              // ----------
                                              
                                              ((__h_case_result ) ? ({ /* cicili#Progn7524 */
                                                  ({ /* cicili#Let7527 */
                                                    __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7529 */
                                                      __auto_type r1  = push_List_BTree_int_User_pair_t (current_item , right_child_items );
                                                      // ----------
                                                      ((void)((r1 . __h_table )-> freeData ));
                                                      r1 ;
                                                    });
                                                    __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7533 */
                                                      __auto_type r2  = append_List_Rc_BTree_int_User (left_child_children , right_child_children );
                                                      // ----------
                                                      ((void)((r2 . __h_table )-> freeData ));
                                                      r2 ;
                                                    });
                                                    __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7537 */
                                                      __auto_type r4  = Internal_BTree_int_User (append_List_BTree_int_User_pair_t (left_child_items , r1 ), fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn7546 */
                                                        Rc_BTree_int_User __ciciliC_7545 (Rc_BTree_int_User __h_value ) {
                                                          return clone_Rc_BTree_int_User (__h_value );
                                                        }
                                                        __ciciliC_7545 ;
                                                      }), r2 ));
                                                      // ----------
                                                      ((void)(r4 -> __h_table -> freeClass ));
                                                      r4 ;
                                                    });
                                                    __auto_type r5  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7553 */
                                                      __auto_type r5  = take_List_Rc_BTree_int_User (index , children );
                                                      // ----------
                                                      ((void)((r5 . __h_table )-> freeData ));
                                                      r5 ;
                                                    });
                                                    __auto_type r7  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7557 */
                                                      __auto_type r7  = drop_List_Rc_BTree_int_User ((index  +  2 ), children );
                                                      // ----------
                                                      ((void)((r7 . __h_table )-> freeData ));
                                                      r7 ;
                                                    });
                                                    // ----------
                                                    ({ /* cicili#Let7563 */
                                                      __auto_type match7562  = delete_BTree_int_User (r4 , current_key , NULL );
                                                      typeof((((match7562 . __h_data ). Right ). __h_0_mem )) ntree ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let7566 */
                                                        bool __h_case_result  = (true  &&  (((match7562 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn7567 */
                                                              (ntree  =  (((match7562 . __h_data ). Right ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn7572 */
                                                            ({ /* cicili#Let7576 */
                                                              __auto_type tmp_result  = splitForDelete_BTree_int_User (ntree );
                                                              typeof((((tmp_result -> __h_data ). Branch ). __h_0_mem )) branch_items ;
                                                              typeof((((tmp_result -> __h_data ). Branch ). __h_1_mem )) branch_children ;
                                                              // ----------
                                                              ;
                                                              ({ /* cicili#Let7579 */
                                                                bool __h_case_result  = (true  &&  (((tmp_result -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn7580 */
                                                                        (branch_items  =  (((tmp_result -> __h_data ). Branch ). __h_0_mem ) );
                                                                        true ;
                                                                      }) &&  ({ /* cicili#Progn7582 */
                                                                        (branch_children  =  (((tmp_result -> __h_data ). Branch ). __h_1_mem ) );
                                                                        true ;
                                                                      }) ) ) );
                                                                // ----------
                                                                
                                                                ((__h_case_result ) ? ({ /* cicili#Progn7587 */
                                                                    ({ /* cicili#Let7590 */
                                                                      __auto_type __h_matchbox  = branch_items ;
                                                                      // ----------
                                                                      ({ /* cicili#Let7594 */
                                                                        __auto_type match7593  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                        typeof((((match7593 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                        // ----------
                                                                        ;
                                                                        ({ /* cicili#Let7597 */
                                                                          bool __h_case_result  = (true  &&  (((match7593 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7598 */
                                                                                (unboxed  =  (((match7593 . __h_data ). Just ). __h_0_mem ) );
                                                                                true ;
                                                                              }) ) );
                                                                          // ----------
                                                                          
                                                                          ((__h_case_result ) ? ({ /* cicili#Progn7603 */
                                                                              ({ /* cicili#Let7607 */
                                                                                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) branch_head ;
                                                                                // ----------
                                                                                ;
                                                                                ({ /* cicili#Let7609 */
                                                                                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn7610 */
                                                                                        (branch_head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                                                                                        true ;
                                                                                      }) ) );
                                                                                  // ----------
                                                                                  
                                                                                  ((__h_case_result ) ? ({ /* cicili#Progn7615 */
                                                                                      ({ /* cicili#Let7618 */
                                                                                        __auto_type ntree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7620 */
                                                                                          __auto_type ntree  = ntree ;
                                                                                          // ----------
                                                                                          ((void)(ntree -> __h_table -> freeClass ));
                                                                                          ntree ;
                                                                                        });
                                                                                        __auto_type tmp_result  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7623 */
                                                                                          __auto_type tmp_result  = tmp_result ;
                                                                                          // ----------
                                                                                          ((void)(tmp_result -> __h_table -> freeClass ));
                                                                                          tmp_result ;
                                                                                        });
                                                                                        // ----------
                                                                                        Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , branch_head , current ), ({ /* cicili#Let7632 */
                                                                                            __auto_type r10  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7634 */
                                                                                              __auto_type r10  = append_List_Rc_BTree_int_User (branch_children , r7 );
                                                                                              // ----------
                                                                                              ((void)((r10 . __h_table )-> freeData ));
                                                                                              r10 ;
                                                                                            });
                                                                                            __auto_type r11  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7638 */
                                                                                              __auto_type r11  = append_List_Rc_BTree_int_User (r5 , r10 );
                                                                                              // ----------
                                                                                              ((void)((r11 . __h_table )-> freeData ));
                                                                                              r11 ;
                                                                                            });
                                                                                            // ----------
                                                                                            fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn7647 */
                                                                                                Rc_BTree_int_User __ciciliC_7646 (Rc_BTree_int_User __h_value ) {
                                                                                                  return clone_Rc_BTree_int_User (__h_value );
                                                                                                }
                                                                                                __ciciliC_7646 ;
                                                                                              }), r11 );
                                                                                          })));
                                                                                      });
                                                                                    }) : ({ /* cicili#Let7654 */
                                                                                      // ----------
                                                                                      ;
                                                                                      ({ /* cicili#Progn7656 */
                                                                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 2"));
                                                                                      });
                                                                                    }));
                                                                                });
                                                                              });
                                                                            }) : ({ /* cicili#Let7663 */
                                                                              // ----------
                                                                              ;
                                                                              ({ /* cicili#Progn7665 */
                                                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CONS ());
                                                                              });
                                                                            }));
                                                                        });
                                                                      });
                                                                    });
                                                                  }) : ({ /* cicili#Let7672 */
                                                                    // ----------
                                                                    ;
                                                                    ({ /* cicili#Let7674 */
                                                                      bool __h_case_result  = (true  &&  ((tmp_result -> __h_ctor ) ==  __h_Internal_t  ) );
                                                                      // ----------
                                                                      
                                                                      ((__h_case_result ) ? ({ /* cicili#Progn7678 */
                                                                          Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (delete_List_BTree_int_User_pair_t (items , current ), ({ /* cicili#Let7686 */
                                                                              __auto_type r9  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7688 */
                                                                                __auto_type r9  = new_Rc_BTree_int_User (ntree );
                                                                                // ----------
                                                                                ((void)((r9 . __h_table )-> freeData ));
                                                                                r9 ;
                                                                              });
                                                                              __auto_type r10  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7692 */
                                                                                __auto_type r10  = push_List_Rc_BTree_int_User (r9 , r7 );
                                                                                // ----------
                                                                                ((void)((r10 . __h_table )-> freeData ));
                                                                                r10 ;
                                                                              });
                                                                              __auto_type r11  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7696 */
                                                                                __auto_type r11  = append_List_Rc_BTree_int_User (r5 , r10 );
                                                                                // ----------
                                                                                ((void)((r11 . __h_table )-> freeData ));
                                                                                r11 ;
                                                                              });
                                                                              // ----------
                                                                              fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn7705 */
                                                                                  Rc_BTree_int_User __ciciliC_7704 (Rc_BTree_int_User __h_value ) {
                                                                                    return clone_Rc_BTree_int_User (__h_value );
                                                                                  }
                                                                                  __ciciliC_7704 ;
                                                                                }), r11 );
                                                                            })));
                                                                        }) : ({ /* cicili#Let7712 */
                                                                          // ----------
                                                                          ;
                                                                          ({ /* cicili#Progn7714 */
                                                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 3"));
                                                                          });
                                                                        }));
                                                                    });
                                                                  }));
                                                              });
                                                            });
                                                          }) : ({ /* cicili#Let7721 */
                                                            __auto_type left  = match7562 ;
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn7723 */
                                                              left ;
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  });
                                                }) : ({ /* cicili#Let7727 */
                                                  // ----------
                                                  ;
                                                  ({ /* cicili#Progn7729 */
                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 4"));
                                                  });
                                                }));
                                            });
                                          });
                                        }) : ({ /* cicili#Let7736 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Progn7738 */
                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CONS ());
                                          });
                                        }));
                                    });
                                  });
                                }));
                            }) : ({ /* cicili#Let7745 */
                              typeof((((right_child -> __h_data ). Internal ). __h_0_mem )) right_child_items ;
                              typeof((((right_child -> __h_data ). Internal ). __h_1_mem )) right_child_children ;
                              // ----------
                              ;
                              ({ /* cicili#Let7747 */
                                bool __h_case_result  = (true  &&  (((right_child -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn7748 */
                                        (right_child_items  =  (((right_child -> __h_data ). Internal ). __h_0_mem ) );
                                        true ;
                                      }) &&  ({ /* cicili#Progn7750 */
                                        (right_child_children  =  (((right_child -> __h_data ). Internal ). __h_1_mem ) );
                                        true ;
                                      }) ) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn7755 */
                                    (((hasLen_List_BTree_int_User_pair_t (right_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let7764 */
                                        __auto_type match7762  = min_BTree_int_User (right_child );
                                        typeof((((match7762 . __h_data ). Just ). __h_0_mem )) min ;
                                        typeof((min . __h_0_mem )) min_key ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let7767 */
                                          bool __h_case_result  = (true  &&  (((match7762 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn7768 */
                                                  (min  =  (((match7762 . __h_data ). Just ). __h_0_mem ) );
                                                  true ;
                                                }) &&  (true  &&  ({ /* cicili#Progn7770 */
                                                    (min_key  =  (min . __h_0_mem ) );
                                                    true ;
                                                  }) ) ) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn7775 */
                                              ({ /* cicili#Let7779 */
                                                __auto_type match7778  = delete_BTree_int_User (right_child , min_key , NULL );
                                                typeof((((match7778 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let7782 */
                                                  bool __h_case_result  = (true  &&  (((match7778 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn7783 */
                                                        (nchild  =  (((match7778 . __h_data ). Right ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn7788 */
                                                      Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , min , current ), ({ /* cicili#Let7796 */
                                                          __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7798 */
                                                            __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                            // ----------
                                                            ((void)((r1 . __h_table )-> freeData ));
                                                            r1 ;
                                                          });
                                                          __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7802 */
                                                            __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , (index  +  1 ));
                                                            // ----------
                                                            ((void)((r2 . __h_table )-> freeData ));
                                                            r2 ;
                                                          });
                                                          // ----------
                                                          fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn7811 */
                                                              Rc_BTree_int_User __ciciliC_7810 (Rc_BTree_int_User __h_value ) {
                                                                return clone_Rc_BTree_int_User (__h_value );
                                                              }
                                                              __ciciliC_7810 ;
                                                            }), r2 );
                                                        })));
                                                    }) : ({ /* cicili#Let7818 */
                                                      __auto_type left  = match7778 ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn7820 */
                                                        left ;
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let7824 */
                                              // ----------
                                              ;
                                              ({ /* cicili#Progn7826 */
                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 1"));
                                              });
                                            }));
                                        });
                                      }) : ({ /* cicili#Let7832 */
                                        __auto_type __h_matchbox  = current ;
                                        // ----------
                                        ({ /* cicili#Let7836 */
                                          __auto_type match7835  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                          typeof((((match7835 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                          // ----------
                                          ;
                                          ({ /* cicili#Let7839 */
                                            bool __h_case_result  = (true  &&  (((match7835 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7840 */
                                                  (unboxed  =  (((match7835 . __h_data ). Just ). __h_0_mem ) );
                                                  true ;
                                                }) ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* cicili#Progn7845 */
                                                ({ /* cicili#Let7850 */
                                                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) current_item ;
                                                  typeof((current_item . __h_0_mem )) current_key ;
                                                  // ----------
                                                  ;
                                                  ({ /* cicili#Let7852 */
                                                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn7853 */
                                                            (current_item  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                                                            true ;
                                                          }) &&  (true  &&  ({ /* cicili#Progn7855 */
                                                              (current_key  =  (current_item . __h_0_mem ) );
                                                              true ;
                                                            }) ) ) ) );
                                                    // ----------
                                                    
                                                    ((__h_case_result ) ? ({ /* cicili#Progn7860 */
                                                        ({ /* cicili#Let7863 */
                                                          __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7865 */
                                                            __auto_type r1  = push_List_BTree_int_User_pair_t (current_item , right_child_items );
                                                            // ----------
                                                            ((void)((r1 . __h_table )-> freeData ));
                                                            r1 ;
                                                          });
                                                          __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7869 */
                                                            __auto_type r2  = append_List_Rc_BTree_int_User (left_child_children , right_child_children );
                                                            // ----------
                                                            ((void)((r2 . __h_table )-> freeData ));
                                                            r2 ;
                                                          });
                                                          __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7873 */
                                                            __auto_type r4  = Internal_BTree_int_User (append_List_BTree_int_User_pair_t (left_child_items , r1 ), fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn7882 */
                                                              Rc_BTree_int_User __ciciliC_7881 (Rc_BTree_int_User __h_value ) {
                                                                return clone_Rc_BTree_int_User (__h_value );
                                                              }
                                                              __ciciliC_7881 ;
                                                            }), r2 ));
                                                            // ----------
                                                            ((void)(r4 -> __h_table -> freeClass ));
                                                            r4 ;
                                                          });
                                                          __auto_type r5  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7889 */
                                                            __auto_type r5  = take_List_Rc_BTree_int_User (index , children );
                                                            // ----------
                                                            ((void)((r5 . __h_table )-> freeData ));
                                                            r5 ;
                                                          });
                                                          __auto_type r7  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7893 */
                                                            __auto_type r7  = drop_List_Rc_BTree_int_User ((index  +  2 ), children );
                                                            // ----------
                                                            ((void)((r7 . __h_table )-> freeData ));
                                                            r7 ;
                                                          });
                                                          // ----------
                                                          ({ /* cicili#Let7899 */
                                                            __auto_type match7898  = delete_BTree_int_User (r4 , current_key , NULL );
                                                            typeof((((match7898 . __h_data ). Right ). __h_0_mem )) ntree ;
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Let7902 */
                                                              bool __h_case_result  = (true  &&  (((match7898 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn7903 */
                                                                    (ntree  =  (((match7898 . __h_data ). Right ). __h_0_mem ) );
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              
                                                              ((__h_case_result ) ? ({ /* cicili#Progn7908 */
                                                                  ({ /* cicili#Let7912 */
                                                                    __auto_type tmp_result  = splitForDelete_BTree_int_User (ntree );
                                                                    typeof((((tmp_result -> __h_data ). Branch ). __h_0_mem )) branch_items ;
                                                                    typeof((((tmp_result -> __h_data ). Branch ). __h_1_mem )) branch_children ;
                                                                    // ----------
                                                                    ;
                                                                    ({ /* cicili#Let7915 */
                                                                      bool __h_case_result  = (true  &&  (((tmp_result -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn7916 */
                                                                              (branch_items  =  (((tmp_result -> __h_data ). Branch ). __h_0_mem ) );
                                                                              true ;
                                                                            }) &&  ({ /* cicili#Progn7918 */
                                                                              (branch_children  =  (((tmp_result -> __h_data ). Branch ). __h_1_mem ) );
                                                                              true ;
                                                                            }) ) ) );
                                                                      // ----------
                                                                      
                                                                      ((__h_case_result ) ? ({ /* cicili#Progn7923 */
                                                                          ({ /* cicili#Let7926 */
                                                                            __auto_type __h_matchbox  = branch_items ;
                                                                            // ----------
                                                                            ({ /* cicili#Let7930 */
                                                                              __auto_type match7929  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                              typeof((((match7929 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                              // ----------
                                                                              ;
                                                                              ({ /* cicili#Let7933 */
                                                                                bool __h_case_result  = (true  &&  (((match7929 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7934 */
                                                                                      (unboxed  =  (((match7929 . __h_data ). Just ). __h_0_mem ) );
                                                                                      true ;
                                                                                    }) ) );
                                                                                // ----------
                                                                                
                                                                                ((__h_case_result ) ? ({ /* cicili#Progn7939 */
                                                                                    ({ /* cicili#Let7943 */
                                                                                      typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) branch_head ;
                                                                                      // ----------
                                                                                      ;
                                                                                      ({ /* cicili#Let7945 */
                                                                                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn7946 */
                                                                                              (branch_head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                                                                                              true ;
                                                                                            }) ) );
                                                                                        // ----------
                                                                                        
                                                                                        ((__h_case_result ) ? ({ /* cicili#Progn7951 */
                                                                                            ({ /* cicili#Let7954 */
                                                                                              __auto_type ntree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7956 */
                                                                                                __auto_type ntree  = ntree ;
                                                                                                // ----------
                                                                                                ((void)(ntree -> __h_table -> freeClass ));
                                                                                                ntree ;
                                                                                              });
                                                                                              __auto_type tmp_result  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7959 */
                                                                                                __auto_type tmp_result  = tmp_result ;
                                                                                                // ----------
                                                                                                ((void)(tmp_result -> __h_table -> freeClass ));
                                                                                                tmp_result ;
                                                                                              });
                                                                                              // ----------
                                                                                              Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , branch_head , current ), ({ /* cicili#Let7968 */
                                                                                                  __auto_type r10  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7970 */
                                                                                                    __auto_type r10  = append_List_Rc_BTree_int_User (branch_children , r7 );
                                                                                                    // ----------
                                                                                                    ((void)((r10 . __h_table )-> freeData ));
                                                                                                    r10 ;
                                                                                                  });
                                                                                                  __auto_type r11  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7974 */
                                                                                                    __auto_type r11  = append_List_Rc_BTree_int_User (r5 , r10 );
                                                                                                    // ----------
                                                                                                    ((void)((r11 . __h_table )-> freeData ));
                                                                                                    r11 ;
                                                                                                  });
                                                                                                  // ----------
                                                                                                  fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn7983 */
                                                                                                      Rc_BTree_int_User __ciciliC_7982 (Rc_BTree_int_User __h_value ) {
                                                                                                        return clone_Rc_BTree_int_User (__h_value );
                                                                                                      }
                                                                                                      __ciciliC_7982 ;
                                                                                                    }), r11 );
                                                                                                })));
                                                                                            });
                                                                                          }) : ({ /* cicili#Let7990 */
                                                                                            // ----------
                                                                                            ;
                                                                                            ({ /* cicili#Progn7992 */
                                                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 2"));
                                                                                            });
                                                                                          }));
                                                                                      });
                                                                                    });
                                                                                  }) : ({ /* cicili#Let7999 */
                                                                                    // ----------
                                                                                    ;
                                                                                    ({ /* cicili#Progn8001 */
                                                                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CONS ());
                                                                                    });
                                                                                  }));
                                                                              });
                                                                            });
                                                                          });
                                                                        }) : ({ /* cicili#Let8008 */
                                                                          // ----------
                                                                          ;
                                                                          ({ /* cicili#Let8010 */
                                                                            bool __h_case_result  = (true  &&  ((tmp_result -> __h_ctor ) ==  __h_Internal_t  ) );
                                                                            // ----------
                                                                            
                                                                            ((__h_case_result ) ? ({ /* cicili#Progn8014 */
                                                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (delete_List_BTree_int_User_pair_t (items , current ), ({ /* cicili#Let8022 */
                                                                                    __auto_type r9  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8024 */
                                                                                      __auto_type r9  = new_Rc_BTree_int_User (ntree );
                                                                                      // ----------
                                                                                      ((void)((r9 . __h_table )-> freeData ));
                                                                                      r9 ;
                                                                                    });
                                                                                    __auto_type r10  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8028 */
                                                                                      __auto_type r10  = push_List_Rc_BTree_int_User (r9 , r7 );
                                                                                      // ----------
                                                                                      ((void)((r10 . __h_table )-> freeData ));
                                                                                      r10 ;
                                                                                    });
                                                                                    __auto_type r11  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8032 */
                                                                                      __auto_type r11  = append_List_Rc_BTree_int_User (r5 , r10 );
                                                                                      // ----------
                                                                                      ((void)((r11 . __h_table )-> freeData ));
                                                                                      r11 ;
                                                                                    });
                                                                                    // ----------
                                                                                    fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn8041 */
                                                                                        Rc_BTree_int_User __ciciliC_8040 (Rc_BTree_int_User __h_value ) {
                                                                                          return clone_Rc_BTree_int_User (__h_value );
                                                                                        }
                                                                                        __ciciliC_8040 ;
                                                                                      }), r11 );
                                                                                  })));
                                                                              }) : ({ /* cicili#Let8048 */
                                                                                // ----------
                                                                                ;
                                                                                ({ /* cicili#Progn8050 */
                                                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 3"));
                                                                                });
                                                                              }));
                                                                          });
                                                                        }));
                                                                    });
                                                                  });
                                                                }) : ({ /* cicili#Let8057 */
                                                                  __auto_type left  = match7898 ;
                                                                  // ----------
                                                                  ;
                                                                  ({ /* cicili#Progn8059 */
                                                                    left ;
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        });
                                                      }) : ({ /* cicili#Let8063 */
                                                        // ----------
                                                        ;
                                                        ({ /* cicili#Progn8065 */
                                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 4"));
                                                        });
                                                      }));
                                                  });
                                                });
                                              }) : ({ /* cicili#Let8072 */
                                                // ----------
                                                ;
                                                ({ /* cicili#Progn8074 */
                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CONS ());
                                                });
                                              }));
                                          });
                                        });
                                      }));
                                  }) : ({ /* cicili#Let8081 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn8083 */
                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 5"));
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let8090 */
                      // ----------
                      ;
                      ({ /* cicili#Progn8092 */
                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 6"));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let8099 */
              // ----------
              ;
              ({ /* cicili#Progn8101 */
                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 7"));
              });
            }));
        });
      });
  }
  Either_BTree_int_User_Error_BTree_int_User borrowRightLeaf (List_BTree_int_User_pair_t left_child_items ) {
    return ({ /* cicili#Let8114 */
        __auto_type match8113  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
        typeof((((match8113 . __h_data ). Just ). __h_0_mem )) right_child_rc ;
        // ----------
        ;
        ({ /* cicili#Let8117 */
          bool __h_case_result  = (true  &&  (((match8113 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8118 */
                (right_child_rc  =  (((match8113 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn8123 */
              ({ /* cicili#Let8127 */
                __auto_type match8126  = get_Rc_BTree_int_User (right_child_rc );
                typeof((((match8126 . __h_data ). Just ). __h_0_mem )) right_child ;
                // ----------
                ;
                ({ /* cicili#Let8130 */
                  bool __h_case_result  = (true  &&  (((match8126 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8131 */
                        (right_child  =  (((match8126 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn8136 */
                      ({ /* cicili#Let8140 */
                        typeof((((right_child -> __h_data ). Leaf ). __h_0_mem )) right_child_items ;
                        // ----------
                        ;
                        ({ /* cicili#Let8142 */
                          bool __h_case_result  = (true  &&  (((right_child -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn8143 */
                                (right_child_items  =  (((right_child -> __h_data ). Leaf ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn8148 */
                              (((hasLen_List_BTree_int_User_pair_t (right_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let8157 */
                                  __auto_type match8155  = min_BTree_int_User (right_child );
                                  typeof((((match8155 . __h_data ). Just ). __h_0_mem )) min ;
                                  typeof((min . __h_0_mem )) min_key ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let8160 */
                                    bool __h_case_result  = (true  &&  (((match8155 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn8161 */
                                            (min  =  (((match8155 . __h_data ). Just ). __h_0_mem ) );
                                            true ;
                                          }) &&  (true  &&  ({ /* cicili#Progn8163 */
                                              (min_key  =  (min . __h_0_mem ) );
                                              true ;
                                            }) ) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn8168 */
                                        ({ /* cicili#Let8172 */
                                          __auto_type match8171  = delete_BTree_int_User (right_child , min_key , NULL );
                                          typeof((((match8171 . __h_data ). Right ). __h_0_mem )) nchild ;
                                          // ----------
                                          ;
                                          ({ /* cicili#Let8175 */
                                            bool __h_case_result  = (true  &&  (((match8171 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn8176 */
                                                  (nchild  =  (((match8171 . __h_data ). Right ). __h_0_mem ) );
                                                  true ;
                                                }) ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* cicili#Progn8181 */
                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , min , current ), ({ /* cicili#Let8189 */
                                                    __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8191 */
                                                      __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                      // ----------
                                                      ((void)((r1 . __h_table )-> freeData ));
                                                      r1 ;
                                                    });
                                                    __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8195 */
                                                      __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , (index  +  1 ));
                                                      // ----------
                                                      ((void)((r2 . __h_table )-> freeData ));
                                                      r2 ;
                                                    });
                                                    // ----------
                                                    fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn8204 */
                                                        Rc_BTree_int_User __ciciliC_8203 (Rc_BTree_int_User __h_value ) {
                                                          return clone_Rc_BTree_int_User (__h_value );
                                                        }
                                                        __ciciliC_8203 ;
                                                      }), r2 );
                                                  })));
                                              }) : ({ /* cicili#Let8211 */
                                                __auto_type left  = match8171 ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Progn8213 */
                                                  left ;
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* cicili#Let8217 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn8219 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 8"));
                                        });
                                      }));
                                  });
                                }) : Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (delete_List_BTree_int_User_pair_t (items , current ), ({ /* cicili#Let8230 */
                                  __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8232 */
                                    __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                    // ----------
                                    ((void)((r1 . __h_table )-> freeData ));
                                    r1 ;
                                  });
                                  __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8236 */
                                    __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn8242 */
                                      Rc_BTree_int_User __ciciliC_8241 (Rc_BTree_int_User __h_value ) {
                                        return clone_Rc_BTree_int_User (__h_value );
                                      }
                                      __ciciliC_8241 ;
                                    }), r1 );
                                    // ----------
                                    ((void)((r2 . __h_table )-> freeData ));
                                    r2 ;
                                  });
                                  __auto_type r3  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8249 */
                                    __auto_type r3  = drop_List_Rc_BTree_int_User ((index  +  2 ), children );
                                    // ----------
                                    ((void)((r3 . __h_table )-> freeData ));
                                    r3 ;
                                  });
                                  __auto_type r4  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8253 */
                                    __auto_type r4  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn8259 */
                                      Rc_BTree_int_User __ciciliC_8258 (Rc_BTree_int_User __h_value ) {
                                        return clone_Rc_BTree_int_User (__h_value );
                                      }
                                      __ciciliC_8258 ;
                                    }), r3 );
                                    // ----------
                                    ((void)((r4 . __h_table )-> freeData ));
                                    r4 ;
                                  });
                                  __auto_type r5  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8266 */
                                    __auto_type r5  = push_List_Rc_BTree_int_User (new_Rc_BTree_int_User (Leaf_BTree_int_User (append_List_BTree_int_User_pair_t (left_child_items , right_child_items ))), r4 );
                                    // ----------
                                    ((void)((r5 . __h_table )-> freeData ));
                                    r5 ;
                                  });
                                  // ----------
                                  append_List_Rc_BTree_int_User (r2 , r5 );
                                }))));
                            }) : ({ /* cicili#Let8277 */
                              // ----------
                              ;
                              ({ /* cicili#Progn8279 */
                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 9"));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let8286 */
                      // ----------
                      ;
                      ({ /* cicili#Progn8288 */
                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 10"));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let8295 */
              // ----------
              ;
              ({ /* cicili#Progn8297 */
                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 11"));
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let8304 */
      __auto_type result  = ({ /* cicili#Let8307 */
        __auto_type match8306  = nth_List_Rc_BTree_int_User (index , children );
        typeof((((match8306 . __h_data ). Just ). __h_0_mem )) left_child_rc ;
        // ----------
        ;
        ({ /* cicili#Let8310 */
          bool __h_case_result  = (true  &&  (((match8306 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8311 */
                (left_child_rc  =  (((match8306 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn8316 */
              ({ /* cicili#Let8320 */
                __auto_type match8319  = get_Rc_BTree_int_User (left_child_rc );
                typeof((((match8319 . __h_data ). Just ). __h_0_mem )) left_child ;
                // ----------
                ;
                ({ /* cicili#Let8323 */
                  bool __h_case_result  = (true  &&  (((match8319 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8324 */
                        (left_child  =  (((match8319 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn8329 */
                      ({ /* cicili#Let8333 */
                        typeof((((left_child -> __h_data ). Branch ). __h_0_mem )) left_child_items ;
                        typeof((((left_child -> __h_data ). Branch ). __h_1_mem )) left_child_children ;
                        // ----------
                        ;
                        ({ /* cicili#Let8335 */
                          bool __h_case_result  = (true  &&  (((left_child -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn8336 */
                                  (left_child_items  =  (((left_child -> __h_data ). Branch ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn8338 */
                                  (left_child_children  =  (((left_child -> __h_data ). Branch ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn8343 */
                              (((hasLen_List_BTree_int_User_pair_t (left_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let8352 */
                                  __auto_type match8350  = max_BTree_int_User (left_child );
                                  typeof((((match8350 . __h_data ). Just ). __h_0_mem )) max ;
                                  typeof((max . __h_0_mem )) max_key ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let8355 */
                                    bool __h_case_result  = (true  &&  (((match8350 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn8356 */
                                            (max  =  (((match8350 . __h_data ). Just ). __h_0_mem ) );
                                            true ;
                                          }) &&  (true  &&  ({ /* cicili#Progn8358 */
                                              (max_key  =  (max . __h_0_mem ) );
                                              true ;
                                            }) ) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn8363 */
                                        ({ /* cicili#Let8367 */
                                          __auto_type match8366  = delete_BTree_int_User (left_child , max_key , NULL );
                                          typeof((((match8366 . __h_data ). Right ). __h_0_mem )) nchild ;
                                          // ----------
                                          ;
                                          ({ /* cicili#Let8370 */
                                            bool __h_case_result  = (true  &&  (((match8366 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn8371 */
                                                  (nchild  =  (((match8366 . __h_data ). Right ). __h_0_mem ) );
                                                  true ;
                                                }) ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* cicili#Progn8376 */
                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , max , current ), ({ /* cicili#Let8384 */
                                                    __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8386 */
                                                      __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                      // ----------
                                                      ((void)((r1 . __h_table )-> freeData ));
                                                      r1 ;
                                                    });
                                                    __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8390 */
                                                      __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                                                      // ----------
                                                      ((void)((r2 . __h_table )-> freeData ));
                                                      r2 ;
                                                    });
                                                    // ----------
                                                    fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn8399 */
                                                        Rc_BTree_int_User __ciciliC_8398 (Rc_BTree_int_User __h_value ) {
                                                          return clone_Rc_BTree_int_User (__h_value );
                                                        }
                                                        __ciciliC_8398 ;
                                                      }), r2 );
                                                  })));
                                              }) : ({ /* cicili#Let8406 */
                                                __auto_type left  = match8366 ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Progn8408 */
                                                  left ;
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* cicili#Let8412 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn8414 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 12"));
                                        });
                                      }));
                                  });
                                }) : borrowRightInternal (left_child_items , left_child_children ));
                            }) : ({ /* cicili#Let8421 */
                              typeof((((left_child -> __h_data ). Internal ). __h_0_mem )) left_child_items ;
                              typeof((((left_child -> __h_data ). Internal ). __h_1_mem )) left_child_children ;
                              // ----------
                              ;
                              ({ /* cicili#Let8423 */
                                bool __h_case_result  = (true  &&  (((left_child -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn8424 */
                                        (left_child_items  =  (((left_child -> __h_data ). Internal ). __h_0_mem ) );
                                        true ;
                                      }) &&  ({ /* cicili#Progn8426 */
                                        (left_child_children  =  (((left_child -> __h_data ). Internal ). __h_1_mem ) );
                                        true ;
                                      }) ) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn8431 */
                                    (((hasLen_List_BTree_int_User_pair_t (left_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let8440 */
                                        __auto_type match8438  = max_BTree_int_User (left_child );
                                        typeof((((match8438 . __h_data ). Just ). __h_0_mem )) max ;
                                        typeof((max . __h_0_mem )) max_key ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let8443 */
                                          bool __h_case_result  = (true  &&  (((match8438 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn8444 */
                                                  (max  =  (((match8438 . __h_data ). Just ). __h_0_mem ) );
                                                  true ;
                                                }) &&  (true  &&  ({ /* cicili#Progn8446 */
                                                    (max_key  =  (max . __h_0_mem ) );
                                                    true ;
                                                  }) ) ) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn8451 */
                                              ({ /* cicili#Let8455 */
                                                __auto_type match8454  = delete_BTree_int_User (left_child , max_key , NULL );
                                                typeof((((match8454 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let8458 */
                                                  bool __h_case_result  = (true  &&  (((match8454 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn8459 */
                                                        (nchild  =  (((match8454 . __h_data ). Right ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn8464 */
                                                      Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , max , current ), ({ /* cicili#Let8472 */
                                                          __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8474 */
                                                            __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                            // ----------
                                                            ((void)((r1 . __h_table )-> freeData ));
                                                            r1 ;
                                                          });
                                                          __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8478 */
                                                            __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                                                            // ----------
                                                            ((void)((r2 . __h_table )-> freeData ));
                                                            r2 ;
                                                          });
                                                          // ----------
                                                          fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn8487 */
                                                              Rc_BTree_int_User __ciciliC_8486 (Rc_BTree_int_User __h_value ) {
                                                                return clone_Rc_BTree_int_User (__h_value );
                                                              }
                                                              __ciciliC_8486 ;
                                                            }), r2 );
                                                        })));
                                                    }) : ({ /* cicili#Let8494 */
                                                      __auto_type left  = match8454 ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn8496 */
                                                        left ;
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let8500 */
                                              // ----------
                                              ;
                                              ({ /* cicili#Progn8502 */
                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 12"));
                                              });
                                            }));
                                        });
                                      }) : borrowRightInternal (left_child_items , left_child_children ));
                                  }) : ({ /* cicili#Let8509 */
                                    typeof((((left_child -> __h_data ). Leaf ). __h_0_mem )) left_child_items ;
                                    // ----------
                                    ;
                                    ({ /* cicili#Let8511 */
                                      bool __h_case_result  = (true  &&  (((left_child -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn8512 */
                                            (left_child_items  =  (((left_child -> __h_data ). Leaf ). __h_0_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn8517 */
                                          (((hasLen_List_BTree_int_User_pair_t (left_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let8526 */
                                              __auto_type match8524  = max_BTree_int_User (left_child );
                                              typeof((((match8524 . __h_data ). Just ). __h_0_mem )) max ;
                                              typeof((max . __h_0_mem )) max_key ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let8529 */
                                                bool __h_case_result  = (true  &&  (((match8524 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn8530 */
                                                        (max  =  (((match8524 . __h_data ). Just ). __h_0_mem ) );
                                                        true ;
                                                      }) &&  (true  &&  ({ /* cicili#Progn8532 */
                                                          (max_key  =  (max . __h_0_mem ) );
                                                          true ;
                                                        }) ) ) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn8537 */
                                                    ({ /* cicili#Let8541 */
                                                      __auto_type match8540  = delete_BTree_int_User (left_child , max_key , NULL );
                                                      typeof((((match8540 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let8544 */
                                                        bool __h_case_result  = (true  &&  (((match8540 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn8545 */
                                                              (nchild  =  (((match8540 . __h_data ). Right ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn8550 */
                                                            Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , max , current ), ({ /* cicili#Let8558 */
                                                                __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8560 */
                                                                  __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                                  // ----------
                                                                  ((void)((r1 . __h_table )-> freeData ));
                                                                  r1 ;
                                                                });
                                                                __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8564 */
                                                                  __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                                                                  // ----------
                                                                  ((void)((r2 . __h_table )-> freeData ));
                                                                  r2 ;
                                                                });
                                                                // ----------
                                                                fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn8573 */
                                                                    Rc_BTree_int_User __ciciliC_8572 (Rc_BTree_int_User __h_value ) {
                                                                      return clone_Rc_BTree_int_User (__h_value );
                                                                    }
                                                                    __ciciliC_8572 ;
                                                                  }), r2 );
                                                              })));
                                                          }) : ({ /* cicili#Let8580 */
                                                            __auto_type left  = match8540 ;
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn8582 */
                                                              left ;
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  }) : ({ /* cicili#Let8586 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn8588 */
                                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 13"));
                                                    });
                                                  }));
                                              });
                                            }) : borrowRightLeaf (left_child_items ));
                                        }) : ({ /* cicili#Let8595 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Progn8597 */
                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 14"));
                                          });
                                        }));
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let8604 */
                      // ----------
                      ;
                      ({ /* cicili#Progn8606 */
                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 15"));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let8613 */
              // ----------
              ;
              ({ /* cicili#Progn8615 */
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
    return ({ /* cicili#Let8643 */
        __auto_type result  = ({ /* cicili#Let8645 */
          __auto_type __h_matchbox  = current ;
          // ----------
          ({ /* cicili#Let8649 */
            __auto_type match8648  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match8648 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8652 */
              bool __h_case_result  = (true  &&  (((match8648 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8653 */
                    (unboxed  =  (((match8648 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn8658 */
                  ({ /* cicili#Let8663 */
                    typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                    typeof((head . __h_0_mem )) key ;
                    typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                    // ----------
                    ;
                    ({ /* cicili#Let8665 */
                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn8666 */
                                (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                                true ;
                              }) &&  (true  &&  ({ /* cicili#Progn8668 */
                                  (key  =  (head . __h_0_mem ) );
                                  true ;
                                }) ) ) &&  ({ /* cicili#Progn8670 */
                              (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                              true ;
                            }) ) ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* cicili#Progn8675 */
                          ({ /* cicili#Let8679 */
                            __auto_type match8678  = compareKey (skey , key );
                            // ----------
                            ;
                            ({ /* cicili#Let8681 */
                              bool __h_case_result  = (true  &&  ((match8678 . __h_ctor ) ==  __h_LT_t  ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* cicili#Progn8685 */
                                  ({ /* cicili#Let8689 */
                                    __auto_type match8688  = nth_List_Rc_BTree_int_User (index , children );
                                    typeof((((match8688 . __h_data ). Just ). __h_0_mem )) child ;
                                    // ----------
                                    ;
                                    ({ /* cicili#Let8692 */
                                      bool __h_case_result  = (true  &&  (((match8688 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8693 */
                                            (child  =  (((match8688 . __h_data ). Just ). __h_0_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn8698 */
                                          ({ /* cicili#Let8702 */
                                            __auto_type match8701  = get_Rc_BTree_int_User (child );
                                            typeof((((match8701 . __h_data ). Just ). __h_0_mem )) tr ;
                                            // ----------
                                            ;
                                            ({ /* cicili#Let8705 */
                                              bool __h_case_result  = (true  &&  (((match8701 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8706 */
                                                    (tr  =  (((match8701 . __h_data ). Just ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              
                                              ((__h_case_result ) ? ({ /* cicili#Progn8711 */
                                                  ({ /* cicili#Let8715 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Let8717 */
                                                      bool __h_case_result  = (true  &&  ((tr -> __h_ctor ) ==  __h_Branch_t  ) );
                                                      // ----------
                                                      
                                                      ((__h_case_result ) ? ({ /* cicili#Progn8721 */
                                                          ({ /* cicili#Let8725 */
                                                            __auto_type match8724  = deleteWithParent_BTree_int_User (tree , (((index  >  0 )) ? (index  -  1 ) : index ), index , tr , skey , callback );
                                                            typeof((((match8724 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Let8728 */
                                                              bool __h_case_result  = (true  &&  (((match8724 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn8729 */
                                                                    (nchild  =  (((match8724 . __h_data ). Right ). __h_0_mem ) );
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              
                                                              ((__h_case_result ) ? ({ /* cicili#Progn8734 */
                                                                  ({ /* cicili#Let8738 */
                                                                    typeof((((nchild -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                                                    typeof((((nchild -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                                                    // ----------
                                                                    ;
                                                                    ({ /* cicili#Let8740 */
                                                                      bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn8741 */
                                                                              (child_items  =  (((nchild -> __h_data ). Branch ). __h_0_mem ) );
                                                                              true ;
                                                                            }) &&  ({ /* cicili#Progn8743 */
                                                                              (child_children  =  (((nchild -> __h_data ). Branch ). __h_1_mem ) );
                                                                              true ;
                                                                            }) ) ) );
                                                                      // ----------
                                                                      
                                                                      ((__h_case_result ) ? ({ /* cicili#Progn8748 */
                                                                          ({ /* cicili#Let8752 */
                                                                            __auto_type match8751  = nth_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                                            typeof((((match8751 . __h_data ). Just ). __h_0_mem )) wleft ;
                                                                            // ----------
                                                                            ;
                                                                            ({ /* cicili#Let8755 */
                                                                              bool __h_case_result  = (true  &&  (((match8751 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8756 */
                                                                                    (wleft  =  (((match8751 . __h_data ). Just ). __h_0_mem ) );
                                                                                    true ;
                                                                                  }) ) );
                                                                              // ----------
                                                                              
                                                                              ((__h_case_result ) ? ({ /* cicili#Progn8761 */
                                                                                  ({ /* cicili#Let8764 */
                                                                                    __auto_type __h_matchbox  = wleft ;
                                                                                    // ----------
                                                                                    ({ /* cicili#Let8768 */
                                                                                      __auto_type match8767  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                      typeof((((match8767 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                      // ----------
                                                                                      ;
                                                                                      ({ /* cicili#Let8771 */
                                                                                        bool __h_case_result  = (true  &&  (((match8767 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8772 */
                                                                                              (unboxed  =  (((match8767 . __h_data ). Just ). __h_0_mem ) );
                                                                                              true ;
                                                                                            }) ) );
                                                                                        // ----------
                                                                                        
                                                                                        ((__h_case_result ) ? ({ /* cicili#Progn8777 */
                                                                                            ({ /* cicili#Let8781 */
                                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) left_items ;
                                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) left_children ;
                                                                                              // ----------
                                                                                              ;
                                                                                              ({ /* cicili#Let8783 */
                                                                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn8784 */
                                                                                                        (left_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                                        true ;
                                                                                                      }) &&  ({ /* cicili#Progn8786 */
                                                                                                        (left_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                                        true ;
                                                                                                      }) ) ) );
                                                                                                // ----------
                                                                                                
                                                                                                ((__h_case_result ) ? ({ /* cicili#Progn8791 */
                                                                                                    ({ /* cicili#Let8794 */
                                                                                                      __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8796 */
                                                                                                        __auto_type nchild  = nchild ;
                                                                                                        // ----------
                                                                                                        ((void)(nchild -> __h_table -> freeClass ));
                                                                                                        nchild ;
                                                                                                      });
                                                                                                      // ----------
                                                                                                      Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), (((index  >  0 )) ? (index  -  1 ) : index ), left_items , left_children , child_items , child_children ));
                                                                                                    });
                                                                                                  }) : ({ /* cicili#Let8804 */
                                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) left_items ;
                                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) left_children ;
                                                                                                    // ----------
                                                                                                    ;
                                                                                                    ({ /* cicili#Let8806 */
                                                                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn8807 */
                                                                                                              (left_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                              true ;
                                                                                                            }) &&  ({ /* cicili#Progn8809 */
                                                                                                              (left_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                              true ;
                                                                                                            }) ) ) );
                                                                                                      // ----------
                                                                                                      
                                                                                                      ((__h_case_result ) ? ({ /* cicili#Progn8814 */
                                                                                                          ({ /* cicili#Let8817 */
                                                                                                            __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8819 */
                                                                                                              __auto_type nchild  = nchild ;
                                                                                                              // ----------
                                                                                                              ((void)(nchild -> __h_table -> freeClass ));
                                                                                                              nchild ;
                                                                                                            });
                                                                                                            // ----------
                                                                                                            Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), (((index  >  0 )) ? (index  -  1 ) : index ), left_items , left_children , child_items , child_children ));
                                                                                                          });
                                                                                                        }) : ({ /* cicili#Let8827 */
                                                                                                          // ----------
                                                                                                          ;
                                                                                                          ({ /* cicili#Progn8829 */
                                                                                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL1-1"));
                                                                                                          });
                                                                                                        }));
                                                                                                    });
                                                                                                  }));
                                                                                              });
                                                                                            });
                                                                                          }) : ({ /* cicili#Let8836 */
                                                                                            // ----------
                                                                                            ;
                                                                                            ({ /* cicili#Progn8838 */
                                                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL1"));
                                                                                            });
                                                                                          }));
                                                                                      });
                                                                                    });
                                                                                  });
                                                                                }) : ({ /* cicili#Let8845 */
                                                                                  // ----------
                                                                                  ;
                                                                                  ({ /* cicili#Progn8847 */
                                                                                    ({ /* cicili#Let8851 */
                                                                                      __auto_type match8850  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                                      typeof((((match8850 . __h_data ). Just ). __h_0_mem )) wright ;
                                                                                      // ----------
                                                                                      ;
                                                                                      ({ /* cicili#Let8854 */
                                                                                        bool __h_case_result  = (true  &&  (((match8850 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8855 */
                                                                                              (wright  =  (((match8850 . __h_data ). Just ). __h_0_mem ) );
                                                                                              true ;
                                                                                            }) ) );
                                                                                        // ----------
                                                                                        
                                                                                        ((__h_case_result ) ? ({ /* cicili#Progn8860 */
                                                                                            ({ /* cicili#Let8863 */
                                                                                              __auto_type __h_matchbox  = wright ;
                                                                                              // ----------
                                                                                              ({ /* cicili#Let8867 */
                                                                                                __auto_type match8866  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                                typeof((((match8866 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                                // ----------
                                                                                                ;
                                                                                                ({ /* cicili#Let8870 */
                                                                                                  bool __h_case_result  = (true  &&  (((match8866 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8871 */
                                                                                                        (unboxed  =  (((match8866 . __h_data ). Just ). __h_0_mem ) );
                                                                                                        true ;
                                                                                                      }) ) );
                                                                                                  // ----------
                                                                                                  
                                                                                                  ((__h_case_result ) ? ({ /* cicili#Progn8876 */
                                                                                                      ({ /* cicili#Let8880 */
                                                                                                        typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) right_items ;
                                                                                                        typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) right_children ;
                                                                                                        // ----------
                                                                                                        ;
                                                                                                        ({ /* cicili#Let8882 */
                                                                                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn8883 */
                                                                                                                  (right_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                                                  true ;
                                                                                                                }) &&  ({ /* cicili#Progn8885 */
                                                                                                                  (right_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                                                  true ;
                                                                                                                }) ) ) );
                                                                                                          // ----------
                                                                                                          
                                                                                                          ((__h_case_result ) ? ({ /* cicili#Progn8890 */
                                                                                                              ({ /* cicili#Let8893 */
                                                                                                                __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8895 */
                                                                                                                  __auto_type nchild  = nchild ;
                                                                                                                  // ----------
                                                                                                                  ((void)(nchild -> __h_table -> freeClass ));
                                                                                                                  nchild ;
                                                                                                                });
                                                                                                                // ----------
                                                                                                                Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), index , child_items , child_children , right_items , right_children ));
                                                                                                              });
                                                                                                            }) : ({ /* cicili#Let8903 */
                                                                                                              typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) right_items ;
                                                                                                              typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) right_children ;
                                                                                                              // ----------
                                                                                                              ;
                                                                                                              ({ /* cicili#Let8905 */
                                                                                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn8906 */
                                                                                                                        (right_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                                        true ;
                                                                                                                      }) &&  ({ /* cicili#Progn8908 */
                                                                                                                        (right_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                                        true ;
                                                                                                                      }) ) ) );
                                                                                                                // ----------
                                                                                                                
                                                                                                                ((__h_case_result ) ? ({ /* cicili#Progn8913 */
                                                                                                                    ({ /* cicili#Let8916 */
                                                                                                                      __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8918 */
                                                                                                                        __auto_type nchild  = nchild ;
                                                                                                                        // ----------
                                                                                                                        ((void)(nchild -> __h_table -> freeClass ));
                                                                                                                        nchild ;
                                                                                                                      });
                                                                                                                      // ----------
                                                                                                                      Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), index , child_items , child_children , right_items , right_children ));
                                                                                                                    });
                                                                                                                  }) : ({ /* cicili#Let8926 */
                                                                                                                    // ----------
                                                                                                                    ;
                                                                                                                    ({ /* cicili#Progn8928 */
                                                                                                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR2-1"));
                                                                                                                    });
                                                                                                                  }));
                                                                                                              });
                                                                                                            }));
                                                                                                        });
                                                                                                      });
                                                                                                    }) : ({ /* cicili#Let8935 */
                                                                                                      // ----------
                                                                                                      ;
                                                                                                      ({ /* cicili#Progn8937 */
                                                                                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR2"));
                                                                                                      });
                                                                                                    }));
                                                                                                });
                                                                                              });
                                                                                            });
                                                                                          }) : ({ /* cicili#Let8944 */
                                                                                            // ----------
                                                                                            ;
                                                                                            ({ /* cicili#Progn8946 */
                                                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR1"));
                                                                                            });
                                                                                          }));
                                                                                      });
                                                                                    });
                                                                                  });
                                                                                }));
                                                                            });
                                                                          });
                                                                        }) : ({ /* cicili#Let8953 */
                                                                          // ----------
                                                                          ;
                                                                          ({ /* cicili#Progn8955 */
                                                                            Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (clone_Box_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let8963 */
                                                                                __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8965 */
                                                                                  __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                                                  // ----------
                                                                                  ((void)((r1 . __h_table )-> freeData ));
                                                                                  r1 ;
                                                                                });
                                                                                __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8969 */
                                                                                  __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                                                                                  // ----------
                                                                                  ((void)((r2 . __h_table )-> freeData ));
                                                                                  r2 ;
                                                                                });
                                                                                // ----------
                                                                                fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn8978 */
                                                                                    Rc_BTree_int_User __ciciliC_8977 (Rc_BTree_int_User __h_value ) {
                                                                                      return clone_Rc_BTree_int_User (__h_value );
                                                                                    }
                                                                                    __ciciliC_8977 ;
                                                                                  }), r2 );
                                                                              })));
                                                                          });
                                                                        }));
                                                                    });
                                                                  });
                                                                }) : ({ /* cicili#Let8985 */
                                                                  __auto_type left  = match8724 ;
                                                                  // ----------
                                                                  ;
                                                                  ({ /* cicili#Progn8987 */
                                                                    left ;
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        }) : ({ /* cicili#Let8991 */
                                                          // ----------
                                                          ;
                                                          ({ /* cicili#Let8993 */
                                                            bool __h_case_result  = (true  &&  ((tr -> __h_ctor ) ==  __h_Internal_t  ) );
                                                            // ----------
                                                            
                                                            ((__h_case_result ) ? ({ /* cicili#Progn8997 */
                                                                ({ /* cicili#Let9001 */
                                                                  __auto_type match9000  = deleteWithParent_BTree_int_User (tree , (((index  >  0 )) ? (index  -  1 ) : index ), index , tr , skey , callback );
                                                                  typeof((((match9000 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                                  // ----------
                                                                  ;
                                                                  ({ /* cicili#Let9004 */
                                                                    bool __h_case_result  = (true  &&  (((match9000 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn9005 */
                                                                          (nchild  =  (((match9000 . __h_data ). Right ). __h_0_mem ) );
                                                                          true ;
                                                                        }) ) );
                                                                    // ----------
                                                                    
                                                                    ((__h_case_result ) ? ({ /* cicili#Progn9010 */
                                                                        ({ /* cicili#Let9014 */
                                                                          typeof((((nchild -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                                                          typeof((((nchild -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                                                          // ----------
                                                                          ;
                                                                          ({ /* cicili#Let9016 */
                                                                            bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9017 */
                                                                                    (child_items  =  (((nchild -> __h_data ). Branch ). __h_0_mem ) );
                                                                                    true ;
                                                                                  }) &&  ({ /* cicili#Progn9019 */
                                                                                    (child_children  =  (((nchild -> __h_data ). Branch ). __h_1_mem ) );
                                                                                    true ;
                                                                                  }) ) ) );
                                                                            // ----------
                                                                            
                                                                            ((__h_case_result ) ? ({ /* cicili#Progn9024 */
                                                                                ({ /* cicili#Let9028 */
                                                                                  __auto_type match9027  = nth_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                                                  typeof((((match9027 . __h_data ). Just ). __h_0_mem )) wleft ;
                                                                                  // ----------
                                                                                  ;
                                                                                  ({ /* cicili#Let9031 */
                                                                                    bool __h_case_result  = (true  &&  (((match9027 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9032 */
                                                                                          (wleft  =  (((match9027 . __h_data ). Just ). __h_0_mem ) );
                                                                                          true ;
                                                                                        }) ) );
                                                                                    // ----------
                                                                                    
                                                                                    ((__h_case_result ) ? ({ /* cicili#Progn9037 */
                                                                                        ({ /* cicili#Let9040 */
                                                                                          __auto_type __h_matchbox  = wleft ;
                                                                                          // ----------
                                                                                          ({ /* cicili#Let9044 */
                                                                                            __auto_type match9043  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                            typeof((((match9043 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                            // ----------
                                                                                            ;
                                                                                            ({ /* cicili#Let9047 */
                                                                                              bool __h_case_result  = (true  &&  (((match9043 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9048 */
                                                                                                    (unboxed  =  (((match9043 . __h_data ). Just ). __h_0_mem ) );
                                                                                                    true ;
                                                                                                  }) ) );
                                                                                              // ----------
                                                                                              
                                                                                              ((__h_case_result ) ? ({ /* cicili#Progn9053 */
                                                                                                  ({ /* cicili#Let9057 */
                                                                                                    typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) left_items ;
                                                                                                    typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) left_children ;
                                                                                                    // ----------
                                                                                                    ;
                                                                                                    ({ /* cicili#Let9059 */
                                                                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9060 */
                                                                                                              (left_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                                              true ;
                                                                                                            }) &&  ({ /* cicili#Progn9062 */
                                                                                                              (left_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                                              true ;
                                                                                                            }) ) ) );
                                                                                                      // ----------
                                                                                                      
                                                                                                      ((__h_case_result ) ? ({ /* cicili#Progn9067 */
                                                                                                          ({ /* cicili#Let9070 */
                                                                                                            __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9072 */
                                                                                                              __auto_type nchild  = nchild ;
                                                                                                              // ----------
                                                                                                              ((void)(nchild -> __h_table -> freeClass ));
                                                                                                              nchild ;
                                                                                                            });
                                                                                                            // ----------
                                                                                                            Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), (((index  >  0 )) ? (index  -  1 ) : index ), left_items , left_children , child_items , child_children ));
                                                                                                          });
                                                                                                        }) : ({ /* cicili#Let9080 */
                                                                                                          typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) left_items ;
                                                                                                          typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) left_children ;
                                                                                                          // ----------
                                                                                                          ;
                                                                                                          ({ /* cicili#Let9082 */
                                                                                                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn9083 */
                                                                                                                    (left_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                                    true ;
                                                                                                                  }) &&  ({ /* cicili#Progn9085 */
                                                                                                                    (left_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                                    true ;
                                                                                                                  }) ) ) );
                                                                                                            // ----------
                                                                                                            
                                                                                                            ((__h_case_result ) ? ({ /* cicili#Progn9090 */
                                                                                                                ({ /* cicili#Let9093 */
                                                                                                                  __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9095 */
                                                                                                                    __auto_type nchild  = nchild ;
                                                                                                                    // ----------
                                                                                                                    ((void)(nchild -> __h_table -> freeClass ));
                                                                                                                    nchild ;
                                                                                                                  });
                                                                                                                  // ----------
                                                                                                                  Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), (((index  >  0 )) ? (index  -  1 ) : index ), left_items , left_children , child_items , child_children ));
                                                                                                                });
                                                                                                              }) : ({ /* cicili#Let9103 */
                                                                                                                // ----------
                                                                                                                ;
                                                                                                                ({ /* cicili#Progn9105 */
                                                                                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL1-1"));
                                                                                                                });
                                                                                                              }));
                                                                                                          });
                                                                                                        }));
                                                                                                    });
                                                                                                  });
                                                                                                }) : ({ /* cicili#Let9112 */
                                                                                                  // ----------
                                                                                                  ;
                                                                                                  ({ /* cicili#Progn9114 */
                                                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL1"));
                                                                                                  });
                                                                                                }));
                                                                                            });
                                                                                          });
                                                                                        });
                                                                                      }) : ({ /* cicili#Let9121 */
                                                                                        // ----------
                                                                                        ;
                                                                                        ({ /* cicili#Progn9123 */
                                                                                          ({ /* cicili#Let9127 */
                                                                                            __auto_type match9126  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                                            typeof((((match9126 . __h_data ). Just ). __h_0_mem )) wright ;
                                                                                            // ----------
                                                                                            ;
                                                                                            ({ /* cicili#Let9130 */
                                                                                              bool __h_case_result  = (true  &&  (((match9126 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9131 */
                                                                                                    (wright  =  (((match9126 . __h_data ). Just ). __h_0_mem ) );
                                                                                                    true ;
                                                                                                  }) ) );
                                                                                              // ----------
                                                                                              
                                                                                              ((__h_case_result ) ? ({ /* cicili#Progn9136 */
                                                                                                  ({ /* cicili#Let9139 */
                                                                                                    __auto_type __h_matchbox  = wright ;
                                                                                                    // ----------
                                                                                                    ({ /* cicili#Let9143 */
                                                                                                      __auto_type match9142  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                                      typeof((((match9142 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                                      // ----------
                                                                                                      ;
                                                                                                      ({ /* cicili#Let9146 */
                                                                                                        bool __h_case_result  = (true  &&  (((match9142 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9147 */
                                                                                                              (unboxed  =  (((match9142 . __h_data ). Just ). __h_0_mem ) );
                                                                                                              true ;
                                                                                                            }) ) );
                                                                                                        // ----------
                                                                                                        
                                                                                                        ((__h_case_result ) ? ({ /* cicili#Progn9152 */
                                                                                                            ({ /* cicili#Let9156 */
                                                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) right_items ;
                                                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) right_children ;
                                                                                                              // ----------
                                                                                                              ;
                                                                                                              ({ /* cicili#Let9158 */
                                                                                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9159 */
                                                                                                                        (right_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                                                        true ;
                                                                                                                      }) &&  ({ /* cicili#Progn9161 */
                                                                                                                        (right_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                                                        true ;
                                                                                                                      }) ) ) );
                                                                                                                // ----------
                                                                                                                
                                                                                                                ((__h_case_result ) ? ({ /* cicili#Progn9166 */
                                                                                                                    ({ /* cicili#Let9169 */
                                                                                                                      __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9171 */
                                                                                                                        __auto_type nchild  = nchild ;
                                                                                                                        // ----------
                                                                                                                        ((void)(nchild -> __h_table -> freeClass ));
                                                                                                                        nchild ;
                                                                                                                      });
                                                                                                                      // ----------
                                                                                                                      Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), index , child_items , child_children , right_items , right_children ));
                                                                                                                    });
                                                                                                                  }) : ({ /* cicili#Let9179 */
                                                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) right_items ;
                                                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) right_children ;
                                                                                                                    // ----------
                                                                                                                    ;
                                                                                                                    ({ /* cicili#Let9181 */
                                                                                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn9182 */
                                                                                                                              (right_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                                              true ;
                                                                                                                            }) &&  ({ /* cicili#Progn9184 */
                                                                                                                              (right_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                                              true ;
                                                                                                                            }) ) ) );
                                                                                                                      // ----------
                                                                                                                      
                                                                                                                      ((__h_case_result ) ? ({ /* cicili#Progn9189 */
                                                                                                                          ({ /* cicili#Let9192 */
                                                                                                                            __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9194 */
                                                                                                                              __auto_type nchild  = nchild ;
                                                                                                                              // ----------
                                                                                                                              ((void)(nchild -> __h_table -> freeClass ));
                                                                                                                              nchild ;
                                                                                                                            });
                                                                                                                            // ----------
                                                                                                                            Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), index , child_items , child_children , right_items , right_children ));
                                                                                                                          });
                                                                                                                        }) : ({ /* cicili#Let9202 */
                                                                                                                          // ----------
                                                                                                                          ;
                                                                                                                          ({ /* cicili#Progn9204 */
                                                                                                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR2-1"));
                                                                                                                          });
                                                                                                                        }));
                                                                                                                    });
                                                                                                                  }));
                                                                                                              });
                                                                                                            });
                                                                                                          }) : ({ /* cicili#Let9211 */
                                                                                                            // ----------
                                                                                                            ;
                                                                                                            ({ /* cicili#Progn9213 */
                                                                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR2"));
                                                                                                            });
                                                                                                          }));
                                                                                                      });
                                                                                                    });
                                                                                                  });
                                                                                                }) : ({ /* cicili#Let9220 */
                                                                                                  // ----------
                                                                                                  ;
                                                                                                  ({ /* cicili#Progn9222 */
                                                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR1"));
                                                                                                  });
                                                                                                }));
                                                                                            });
                                                                                          });
                                                                                        });
                                                                                      }));
                                                                                  });
                                                                                });
                                                                              }) : ({ /* cicili#Let9229 */
                                                                                // ----------
                                                                                ;
                                                                                ({ /* cicili#Progn9231 */
                                                                                  Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (clone_Box_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let9239 */
                                                                                      __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9241 */
                                                                                        __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                                                        // ----------
                                                                                        ((void)((r1 . __h_table )-> freeData ));
                                                                                        r1 ;
                                                                                      });
                                                                                      __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9245 */
                                                                                        __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                                                                                        // ----------
                                                                                        ((void)((r2 . __h_table )-> freeData ));
                                                                                        r2 ;
                                                                                      });
                                                                                      // ----------
                                                                                      fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn9254 */
                                                                                          Rc_BTree_int_User __ciciliC_9253 (Rc_BTree_int_User __h_value ) {
                                                                                            return clone_Rc_BTree_int_User (__h_value );
                                                                                          }
                                                                                          __ciciliC_9253 ;
                                                                                        }), r2 );
                                                                                    })));
                                                                                });
                                                                              }));
                                                                          });
                                                                        });
                                                                      }) : ({ /* cicili#Let9261 */
                                                                        __auto_type left  = match9000 ;
                                                                        // ----------
                                                                        ;
                                                                        ({ /* cicili#Progn9263 */
                                                                          left ;
                                                                        });
                                                                      }));
                                                                  });
                                                                });
                                                              }) : ({ /* cicili#Let9267 */
                                                                // ----------
                                                                ;
                                                                ({ /* cicili#Progn9269 */
                                                                  ({ /* cicili#Let9273 */
                                                                    __auto_type match9272  = deleteWithParent_BTree_int_User (tree , (((index  >  0 )) ? (index  -  1 ) : index ), index , tr , skey , callback );
                                                                    typeof((((match9272 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                                    // ----------
                                                                    ;
                                                                    ({ /* cicili#Let9276 */
                                                                      bool __h_case_result  = (true  &&  (((match9272 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn9277 */
                                                                            (nchild  =  (((match9272 . __h_data ). Right ). __h_0_mem ) );
                                                                            true ;
                                                                          }) ) );
                                                                      // ----------
                                                                      
                                                                      ((__h_case_result ) ? ({ /* cicili#Progn9282 */
                                                                          borrowLeaf_BTree_int_User (items , children , wleft , current , index , nchild , callback );
                                                                        }) : ({ /* cicili#Let9287 */
                                                                          __auto_type left  = match9272 ;
                                                                          // ----------
                                                                          ;
                                                                          ({ /* cicili#Progn9289 */
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
                                                }) : ({ /* cicili#Let9293 */
                                                  // ----------
                                                  ;
                                                  ({ /* cicili#Progn9295 */
                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CHILD (head , index ));
                                                  });
                                                }));
                                            });
                                          });
                                        }) : ({ /* cicili#Let9302 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Progn9304 */
                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_NOT_FOUND (skey ));
                                          });
                                        }));
                                    });
                                  });
                                }) : ({ /* cicili#Let9311 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Let9313 */
                                    bool __h_case_result  = (true  &&  ((match8678 . __h_ctor ) ==  __h_EQ_t  ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn9317 */
                                        ({ /* cicili#Let9320 */
                                          __auto_type result  = borrowInternal_BTree_int_User (tree , items , children , current , index , callback );
                                          // ----------
                                          { /* cicili#Let9325 */
                                            // ----------
                                            ;
                                            ({ /* cicili#Let9327 */
                                              bool __h_case_result  = (true  &&  ((result . __h_ctor ) ==  __h_Right_t  ) );
                                              // ----------
                                              
                                              if (__h_case_result )
                                                { /* cicili#Block9332 */
                                                  if (callback )
                                                    { /* cicili#Block9336 */
                                                      callback (head );
                                                    }
                                                }
                                            });
                                          }
                                          result ;
                                        });
                                      }) : ({ /* cicili#Let9340 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn9342 */
                                          deleteInternal (tree , items , children , Just_List_BTree_int_User_pair_t (current ), tail , (index  +  1 ));
                                        });
                                      }));
                                  });
                                }));
                            });
                          });
                        }) : ({ /* cicili#Let9347 */
                          // ----------
                          ;
                          ({ /* cicili#Progn9349 */
                            ({ /* cicili#Let9353 */
                              __auto_type match9352  = nth_List_Rc_BTree_int_User (index , children );
                              typeof((((match9352 . __h_data ). Just ). __h_0_mem )) child ;
                              // ----------
                              ;
                              ({ /* cicili#Let9356 */
                                bool __h_case_result  = (true  &&  (((match9352 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9357 */
                                      (child  =  (((match9352 . __h_data ). Just ). __h_0_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn9362 */
                                    ({ /* cicili#Let9366 */
                                      __auto_type match9365  = get_Rc_BTree_int_User (child );
                                      typeof((((match9365 . __h_data ). Just ). __h_0_mem )) tr ;
                                      // ----------
                                      ;
                                      ({ /* cicili#Let9369 */
                                        bool __h_case_result  = (true  &&  (((match9365 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9370 */
                                              (tr  =  (((match9365 . __h_data ). Just ). __h_0_mem ) );
                                              true ;
                                            }) ) );
                                        // ----------
                                        
                                        ((__h_case_result ) ? ({ /* cicili#Progn9375 */
                                            ({ /* cicili#Let9379 */
                                              // ----------
                                              ;
                                              ({ /* cicili#Let9381 */
                                                bool __h_case_result  = (true  &&  ((tr -> __h_ctor ) ==  __h_Branch_t  ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn9385 */
                                                    ({ /* cicili#Let9389 */
                                                      __auto_type match9388  = deleteWithParent_BTree_int_User (tree , (index  -  1 ), index , tr , skey , callback );
                                                      typeof((((match9388 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let9392 */
                                                        bool __h_case_result  = (true  &&  (((match9388 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn9393 */
                                                              (nchild  =  (((match9388 . __h_data ). Right ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn9398 */
                                                            ({ /* cicili#Let9402 */
                                                              typeof((((nchild -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                                              typeof((((nchild -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                                              // ----------
                                                              ;
                                                              ({ /* cicili#Let9404 */
                                                                bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9405 */
                                                                        (child_items  =  (((nchild -> __h_data ). Branch ). __h_0_mem ) );
                                                                        true ;
                                                                      }) &&  ({ /* cicili#Progn9407 */
                                                                        (child_children  =  (((nchild -> __h_data ). Branch ). __h_1_mem ) );
                                                                        true ;
                                                                      }) ) ) );
                                                                // ----------
                                                                
                                                                ((__h_case_result ) ? ({ /* cicili#Progn9412 */
                                                                    ({ /* cicili#Let9416 */
                                                                      __auto_type match9415  = nth_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                                      typeof((((match9415 . __h_data ). Just ). __h_0_mem )) wleft ;
                                                                      // ----------
                                                                      ;
                                                                      ({ /* cicili#Let9419 */
                                                                        bool __h_case_result  = (true  &&  (((match9415 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9420 */
                                                                              (wleft  =  (((match9415 . __h_data ). Just ). __h_0_mem ) );
                                                                              true ;
                                                                            }) ) );
                                                                        // ----------
                                                                        
                                                                        ((__h_case_result ) ? ({ /* cicili#Progn9425 */
                                                                            ({ /* cicili#Let9428 */
                                                                              __auto_type __h_matchbox  = wleft ;
                                                                              // ----------
                                                                              ({ /* cicili#Let9432 */
                                                                                __auto_type match9431  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                typeof((((match9431 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                // ----------
                                                                                ;
                                                                                ({ /* cicili#Let9435 */
                                                                                  bool __h_case_result  = (true  &&  (((match9431 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9436 */
                                                                                        (unboxed  =  (((match9431 . __h_data ). Just ). __h_0_mem ) );
                                                                                        true ;
                                                                                      }) ) );
                                                                                  // ----------
                                                                                  
                                                                                  ((__h_case_result ) ? ({ /* cicili#Progn9441 */
                                                                                      ({ /* cicili#Let9445 */
                                                                                        typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) left_items ;
                                                                                        typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) left_children ;
                                                                                        // ----------
                                                                                        ;
                                                                                        ({ /* cicili#Let9447 */
                                                                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9448 */
                                                                                                  (left_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                                  true ;
                                                                                                }) &&  ({ /* cicili#Progn9450 */
                                                                                                  (left_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                                  true ;
                                                                                                }) ) ) );
                                                                                          // ----------
                                                                                          
                                                                                          ((__h_case_result ) ? ({ /* cicili#Progn9455 */
                                                                                              ({ /* cicili#Let9458 */
                                                                                                __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9460 */
                                                                                                  __auto_type nchild  = nchild ;
                                                                                                  // ----------
                                                                                                  ((void)(nchild -> __h_table -> freeClass ));
                                                                                                  nchild ;
                                                                                                });
                                                                                                // ----------
                                                                                                Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), (index  -  1 ), left_items , left_children , child_items , child_children ));
                                                                                              });
                                                                                            }) : ({ /* cicili#Let9468 */
                                                                                              typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) left_items ;
                                                                                              typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) left_children ;
                                                                                              // ----------
                                                                                              ;
                                                                                              ({ /* cicili#Let9470 */
                                                                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn9471 */
                                                                                                        (left_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                        true ;
                                                                                                      }) &&  ({ /* cicili#Progn9473 */
                                                                                                        (left_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                        true ;
                                                                                                      }) ) ) );
                                                                                                // ----------
                                                                                                
                                                                                                ((__h_case_result ) ? ({ /* cicili#Progn9478 */
                                                                                                    ({ /* cicili#Let9481 */
                                                                                                      __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9483 */
                                                                                                        __auto_type nchild  = nchild ;
                                                                                                        // ----------
                                                                                                        ((void)(nchild -> __h_table -> freeClass ));
                                                                                                        nchild ;
                                                                                                      });
                                                                                                      // ----------
                                                                                                      Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), (index  -  1 ), left_items , left_children , child_items , child_children ));
                                                                                                    });
                                                                                                  }) : ({ /* cicili#Let9491 */
                                                                                                    // ----------
                                                                                                    ;
                                                                                                    ({ /* cicili#Progn9493 */
                                                                                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL111"));
                                                                                                    });
                                                                                                  }));
                                                                                              });
                                                                                            }));
                                                                                        });
                                                                                      });
                                                                                    }) : ({ /* cicili#Let9500 */
                                                                                      // ----------
                                                                                      ;
                                                                                      ({ /* cicili#Progn9502 */
                                                                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL11"));
                                                                                      });
                                                                                    }));
                                                                                });
                                                                              });
                                                                            });
                                                                          }) : ({ /* cicili#Let9509 */
                                                                            // ----------
                                                                            ;
                                                                            ({ /* cicili#Progn9511 */
                                                                              ({ /* cicili#Let9515 */
                                                                                __auto_type match9514  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                                typeof((((match9514 . __h_data ). Just ). __h_0_mem )) wright ;
                                                                                // ----------
                                                                                ;
                                                                                ({ /* cicili#Let9518 */
                                                                                  bool __h_case_result  = (true  &&  (((match9514 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9519 */
                                                                                        (wright  =  (((match9514 . __h_data ). Just ). __h_0_mem ) );
                                                                                        true ;
                                                                                      }) ) );
                                                                                  // ----------
                                                                                  
                                                                                  ((__h_case_result ) ? ({ /* cicili#Progn9524 */
                                                                                      ({ /* cicili#Let9527 */
                                                                                        __auto_type __h_matchbox  = wright ;
                                                                                        // ----------
                                                                                        ({ /* cicili#Let9531 */
                                                                                          __auto_type match9530  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                          typeof((((match9530 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                          // ----------
                                                                                          ;
                                                                                          ({ /* cicili#Let9534 */
                                                                                            bool __h_case_result  = (true  &&  (((match9530 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9535 */
                                                                                                  (unboxed  =  (((match9530 . __h_data ). Just ). __h_0_mem ) );
                                                                                                  true ;
                                                                                                }) ) );
                                                                                            // ----------
                                                                                            
                                                                                            ((__h_case_result ) ? ({ /* cicili#Progn9540 */
                                                                                                ({ /* cicili#Let9544 */
                                                                                                  typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) right_items ;
                                                                                                  typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) right_children ;
                                                                                                  // ----------
                                                                                                  ;
                                                                                                  ({ /* cicili#Let9546 */
                                                                                                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9547 */
                                                                                                            (right_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                                            true ;
                                                                                                          }) &&  ({ /* cicili#Progn9549 */
                                                                                                            (right_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                                            true ;
                                                                                                          }) ) ) );
                                                                                                    // ----------
                                                                                                    
                                                                                                    ((__h_case_result ) ? ({ /* cicili#Progn9554 */
                                                                                                        ({ /* cicili#Let9557 */
                                                                                                          __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9559 */
                                                                                                            __auto_type nchild  = nchild ;
                                                                                                            // ----------
                                                                                                            ((void)(nchild -> __h_table -> freeClass ));
                                                                                                            nchild ;
                                                                                                          });
                                                                                                          // ----------
                                                                                                          Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), index , child_items , child_children , right_items , right_children ));
                                                                                                        });
                                                                                                      }) : ({ /* cicili#Let9567 */
                                                                                                        typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) right_items ;
                                                                                                        typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) right_children ;
                                                                                                        // ----------
                                                                                                        ;
                                                                                                        ({ /* cicili#Let9569 */
                                                                                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn9570 */
                                                                                                                  (right_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                                  true ;
                                                                                                                }) &&  ({ /* cicili#Progn9572 */
                                                                                                                  (right_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                                  true ;
                                                                                                                }) ) ) );
                                                                                                          // ----------
                                                                                                          
                                                                                                          ((__h_case_result ) ? ({ /* cicili#Progn9577 */
                                                                                                              ({ /* cicili#Let9580 */
                                                                                                                __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9582 */
                                                                                                                  __auto_type nchild  = nchild ;
                                                                                                                  // ----------
                                                                                                                  ((void)(nchild -> __h_table -> freeClass ));
                                                                                                                  nchild ;
                                                                                                                });
                                                                                                                // ----------
                                                                                                                Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), index , child_items , child_children , right_items , right_children ));
                                                                                                              });
                                                                                                            }) : ({ /* cicili#Let9590 */
                                                                                                              // ----------
                                                                                                              ;
                                                                                                              ({ /* cicili#Progn9592 */
                                                                                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR222"));
                                                                                                              });
                                                                                                            }));
                                                                                                        });
                                                                                                      }));
                                                                                                  });
                                                                                                });
                                                                                              }) : ({ /* cicili#Let9599 */
                                                                                                // ----------
                                                                                                ;
                                                                                                ({ /* cicili#Progn9601 */
                                                                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR22"));
                                                                                                });
                                                                                              }));
                                                                                          });
                                                                                        });
                                                                                      });
                                                                                    }) : ({ /* cicili#Let9608 */
                                                                                      // ----------
                                                                                      ;
                                                                                      ({ /* cicili#Progn9610 */
                                                                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR221"));
                                                                                      });
                                                                                    }));
                                                                                });
                                                                              });
                                                                            });
                                                                          }));
                                                                      });
                                                                    });
                                                                  }) : ({ /* cicili#Let9617 */
                                                                    // ----------
                                                                    ;
                                                                    ({ /* cicili#Progn9619 */
                                                                      Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (clone_Box_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let9627 */
                                                                          __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9629 */
                                                                            __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                                            // ----------
                                                                            ((void)((r1 . __h_table )-> freeData ));
                                                                            r1 ;
                                                                          });
                                                                          __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9633 */
                                                                            __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                                                                            // ----------
                                                                            ((void)((r2 . __h_table )-> freeData ));
                                                                            r2 ;
                                                                          });
                                                                          // ----------
                                                                          fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn9642 */
                                                                              Rc_BTree_int_User __ciciliC_9641 (Rc_BTree_int_User __h_value ) {
                                                                                return clone_Rc_BTree_int_User (__h_value );
                                                                              }
                                                                              __ciciliC_9641 ;
                                                                            }), r2 );
                                                                        })));
                                                                    });
                                                                  }));
                                                              });
                                                            });
                                                          }) : ({ /* cicili#Let9649 */
                                                            __auto_type left  = match9388 ;
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn9651 */
                                                              left ;
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  }) : ({ /* cicili#Let9655 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Let9657 */
                                                      bool __h_case_result  = (true  &&  ((tr -> __h_ctor ) ==  __h_Internal_t  ) );
                                                      // ----------
                                                      
                                                      ((__h_case_result ) ? ({ /* cicili#Progn9661 */
                                                          ({ /* cicili#Let9665 */
                                                            __auto_type match9664  = deleteWithParent_BTree_int_User (tree , (index  -  1 ), index , tr , skey , callback );
                                                            typeof((((match9664 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Let9668 */
                                                              bool __h_case_result  = (true  &&  (((match9664 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn9669 */
                                                                    (nchild  =  (((match9664 . __h_data ). Right ). __h_0_mem ) );
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              
                                                              ((__h_case_result ) ? ({ /* cicili#Progn9674 */
                                                                  ({ /* cicili#Let9678 */
                                                                    typeof((((nchild -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                                                    typeof((((nchild -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                                                    // ----------
                                                                    ;
                                                                    ({ /* cicili#Let9680 */
                                                                      bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9681 */
                                                                              (child_items  =  (((nchild -> __h_data ). Branch ). __h_0_mem ) );
                                                                              true ;
                                                                            }) &&  ({ /* cicili#Progn9683 */
                                                                              (child_children  =  (((nchild -> __h_data ). Branch ). __h_1_mem ) );
                                                                              true ;
                                                                            }) ) ) );
                                                                      // ----------
                                                                      
                                                                      ((__h_case_result ) ? ({ /* cicili#Progn9688 */
                                                                          ({ /* cicili#Let9692 */
                                                                            __auto_type match9691  = nth_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                                            typeof((((match9691 . __h_data ). Just ). __h_0_mem )) wleft ;
                                                                            // ----------
                                                                            ;
                                                                            ({ /* cicili#Let9695 */
                                                                              bool __h_case_result  = (true  &&  (((match9691 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9696 */
                                                                                    (wleft  =  (((match9691 . __h_data ). Just ). __h_0_mem ) );
                                                                                    true ;
                                                                                  }) ) );
                                                                              // ----------
                                                                              
                                                                              ((__h_case_result ) ? ({ /* cicili#Progn9701 */
                                                                                  ({ /* cicili#Let9704 */
                                                                                    __auto_type __h_matchbox  = wleft ;
                                                                                    // ----------
                                                                                    ({ /* cicili#Let9708 */
                                                                                      __auto_type match9707  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                      typeof((((match9707 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                      // ----------
                                                                                      ;
                                                                                      ({ /* cicili#Let9711 */
                                                                                        bool __h_case_result  = (true  &&  (((match9707 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9712 */
                                                                                              (unboxed  =  (((match9707 . __h_data ). Just ). __h_0_mem ) );
                                                                                              true ;
                                                                                            }) ) );
                                                                                        // ----------
                                                                                        
                                                                                        ((__h_case_result ) ? ({ /* cicili#Progn9717 */
                                                                                            ({ /* cicili#Let9721 */
                                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) left_items ;
                                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) left_children ;
                                                                                              // ----------
                                                                                              ;
                                                                                              ({ /* cicili#Let9723 */
                                                                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9724 */
                                                                                                        (left_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                                        true ;
                                                                                                      }) &&  ({ /* cicili#Progn9726 */
                                                                                                        (left_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                                        true ;
                                                                                                      }) ) ) );
                                                                                                // ----------
                                                                                                
                                                                                                ((__h_case_result ) ? ({ /* cicili#Progn9731 */
                                                                                                    ({ /* cicili#Let9734 */
                                                                                                      __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9736 */
                                                                                                        __auto_type nchild  = nchild ;
                                                                                                        // ----------
                                                                                                        ((void)(nchild -> __h_table -> freeClass ));
                                                                                                        nchild ;
                                                                                                      });
                                                                                                      // ----------
                                                                                                      Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), (index  -  1 ), left_items , left_children , child_items , child_children ));
                                                                                                    });
                                                                                                  }) : ({ /* cicili#Let9744 */
                                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) left_items ;
                                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) left_children ;
                                                                                                    // ----------
                                                                                                    ;
                                                                                                    ({ /* cicili#Let9746 */
                                                                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn9747 */
                                                                                                              (left_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                              true ;
                                                                                                            }) &&  ({ /* cicili#Progn9749 */
                                                                                                              (left_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                              true ;
                                                                                                            }) ) ) );
                                                                                                      // ----------
                                                                                                      
                                                                                                      ((__h_case_result ) ? ({ /* cicili#Progn9754 */
                                                                                                          ({ /* cicili#Let9757 */
                                                                                                            __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9759 */
                                                                                                              __auto_type nchild  = nchild ;
                                                                                                              // ----------
                                                                                                              ((void)(nchild -> __h_table -> freeClass ));
                                                                                                              nchild ;
                                                                                                            });
                                                                                                            // ----------
                                                                                                            Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), (index  -  1 ), left_items , left_children , child_items , child_children ));
                                                                                                          });
                                                                                                        }) : ({ /* cicili#Let9767 */
                                                                                                          // ----------
                                                                                                          ;
                                                                                                          ({ /* cicili#Progn9769 */
                                                                                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL111"));
                                                                                                          });
                                                                                                        }));
                                                                                                    });
                                                                                                  }));
                                                                                              });
                                                                                            });
                                                                                          }) : ({ /* cicili#Let9776 */
                                                                                            // ----------
                                                                                            ;
                                                                                            ({ /* cicili#Progn9778 */
                                                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL11"));
                                                                                            });
                                                                                          }));
                                                                                      });
                                                                                    });
                                                                                  });
                                                                                }) : ({ /* cicili#Let9785 */
                                                                                  // ----------
                                                                                  ;
                                                                                  ({ /* cicili#Progn9787 */
                                                                                    ({ /* cicili#Let9791 */
                                                                                      __auto_type match9790  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                                      typeof((((match9790 . __h_data ). Just ). __h_0_mem )) wright ;
                                                                                      // ----------
                                                                                      ;
                                                                                      ({ /* cicili#Let9794 */
                                                                                        bool __h_case_result  = (true  &&  (((match9790 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9795 */
                                                                                              (wright  =  (((match9790 . __h_data ). Just ). __h_0_mem ) );
                                                                                              true ;
                                                                                            }) ) );
                                                                                        // ----------
                                                                                        
                                                                                        ((__h_case_result ) ? ({ /* cicili#Progn9800 */
                                                                                            ({ /* cicili#Let9803 */
                                                                                              __auto_type __h_matchbox  = wright ;
                                                                                              // ----------
                                                                                              ({ /* cicili#Let9807 */
                                                                                                __auto_type match9806  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                                typeof((((match9806 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                                // ----------
                                                                                                ;
                                                                                                ({ /* cicili#Let9810 */
                                                                                                  bool __h_case_result  = (true  &&  (((match9806 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9811 */
                                                                                                        (unboxed  =  (((match9806 . __h_data ). Just ). __h_0_mem ) );
                                                                                                        true ;
                                                                                                      }) ) );
                                                                                                  // ----------
                                                                                                  
                                                                                                  ((__h_case_result ) ? ({ /* cicili#Progn9816 */
                                                                                                      ({ /* cicili#Let9820 */
                                                                                                        typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) right_items ;
                                                                                                        typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) right_children ;
                                                                                                        // ----------
                                                                                                        ;
                                                                                                        ({ /* cicili#Let9822 */
                                                                                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9823 */
                                                                                                                  (right_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                                                  true ;
                                                                                                                }) &&  ({ /* cicili#Progn9825 */
                                                                                                                  (right_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                                                  true ;
                                                                                                                }) ) ) );
                                                                                                          // ----------
                                                                                                          
                                                                                                          ((__h_case_result ) ? ({ /* cicili#Progn9830 */
                                                                                                              ({ /* cicili#Let9833 */
                                                                                                                __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9835 */
                                                                                                                  __auto_type nchild  = nchild ;
                                                                                                                  // ----------
                                                                                                                  ((void)(nchild -> __h_table -> freeClass ));
                                                                                                                  nchild ;
                                                                                                                });
                                                                                                                // ----------
                                                                                                                Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), index , child_items , child_children , right_items , right_children ));
                                                                                                              });
                                                                                                            }) : ({ /* cicili#Let9843 */
                                                                                                              typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) right_items ;
                                                                                                              typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) right_children ;
                                                                                                              // ----------
                                                                                                              ;
                                                                                                              ({ /* cicili#Let9845 */
                                                                                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn9846 */
                                                                                                                        (right_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                                        true ;
                                                                                                                      }) &&  ({ /* cicili#Progn9848 */
                                                                                                                        (right_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                                        true ;
                                                                                                                      }) ) ) );
                                                                                                                // ----------
                                                                                                                
                                                                                                                ((__h_case_result ) ? ({ /* cicili#Progn9853 */
                                                                                                                    ({ /* cicili#Let9856 */
                                                                                                                      __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9858 */
                                                                                                                        __auto_type nchild  = nchild ;
                                                                                                                        // ----------
                                                                                                                        ((void)(nchild -> __h_table -> freeClass ));
                                                                                                                        nchild ;
                                                                                                                      });
                                                                                                                      // ----------
                                                                                                                      Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), index , child_items , child_children , right_items , right_children ));
                                                                                                                    });
                                                                                                                  }) : ({ /* cicili#Let9866 */
                                                                                                                    // ----------
                                                                                                                    ;
                                                                                                                    ({ /* cicili#Progn9868 */
                                                                                                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR222"));
                                                                                                                    });
                                                                                                                  }));
                                                                                                              });
                                                                                                            }));
                                                                                                        });
                                                                                                      });
                                                                                                    }) : ({ /* cicili#Let9875 */
                                                                                                      // ----------
                                                                                                      ;
                                                                                                      ({ /* cicili#Progn9877 */
                                                                                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR22"));
                                                                                                      });
                                                                                                    }));
                                                                                                });
                                                                                              });
                                                                                            });
                                                                                          }) : ({ /* cicili#Let9884 */
                                                                                            // ----------
                                                                                            ;
                                                                                            ({ /* cicili#Progn9886 */
                                                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR221"));
                                                                                            });
                                                                                          }));
                                                                                      });
                                                                                    });
                                                                                  });
                                                                                }));
                                                                            });
                                                                          });
                                                                        }) : ({ /* cicili#Let9893 */
                                                                          // ----------
                                                                          ;
                                                                          ({ /* cicili#Progn9895 */
                                                                            Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (clone_Box_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let9903 */
                                                                                __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9905 */
                                                                                  __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                                                  // ----------
                                                                                  ((void)((r1 . __h_table )-> freeData ));
                                                                                  r1 ;
                                                                                });
                                                                                __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9909 */
                                                                                  __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                                                                                  // ----------
                                                                                  ((void)((r2 . __h_table )-> freeData ));
                                                                                  r2 ;
                                                                                });
                                                                                // ----------
                                                                                fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn9918 */
                                                                                    Rc_BTree_int_User __ciciliC_9917 (Rc_BTree_int_User __h_value ) {
                                                                                      return clone_Rc_BTree_int_User (__h_value );
                                                                                    }
                                                                                    __ciciliC_9917 ;
                                                                                  }), r2 );
                                                                              })));
                                                                          });
                                                                        }));
                                                                    });
                                                                  });
                                                                }) : ({ /* cicili#Let9925 */
                                                                  __auto_type left  = match9664 ;
                                                                  // ----------
                                                                  ;
                                                                  ({ /* cicili#Progn9927 */
                                                                    left ;
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        }) : ({ /* cicili#Let9931 */
                                                          // ----------
                                                          ;
                                                          ({ /* cicili#Progn9933 */
                                                            ({ /* cicili#Let9937 */
                                                              __auto_type match9936  = deleteWithParent_BTree_int_User (tree , (index  -  1 ), index , tr , skey , callback );
                                                              typeof((((match9936 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                              // ----------
                                                              ;
                                                              ({ /* cicili#Let9940 */
                                                                bool __h_case_result  = (true  &&  (((match9936 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn9941 */
                                                                      (nchild  =  (((match9936 . __h_data ). Right ). __h_0_mem ) );
                                                                      true ;
                                                                    }) ) );
                                                                // ----------
                                                                
                                                                ((__h_case_result ) ? ({ /* cicili#Progn9946 */
                                                                    borrowLeaf_BTree_int_User (items , children , wleft , current , index , nchild , callback );
                                                                  }) : ({ /* cicili#Let9951 */
                                                                    __auto_type left  = match9936 ;
                                                                    // ----------
                                                                    ;
                                                                    ({ /* cicili#Progn9953 */
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
                                          }) : ({ /* cicili#Let9957 */
                                            // ----------
                                            ;
                                            ({ /* cicili#Progn9959 */
                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CHILD (head , index ));
                                            });
                                          }));
                                      });
                                    });
                                  }) : ({ /* cicili#Let9966 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn9968 */
                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_NOT_FOUND (skey ));
                                    });
                                  }));
                              });
                            });
                          });
                        }));
                    });
                  });
                }) : ({ /* cicili#Let9975 */
                  // ----------
                  ;
                  ({ /* cicili#Progn9977 */
                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CONS ());
                  });
                }));
            });
          });
        });
        // ----------
        ({ /* cicili#Let9986 */
          __auto_type rs  = ({ /* cicili#Let9989 */
            typeof((((result . __h_data ). Right ). __h_0_mem )) ntr ;
            // ----------
            ;
            ({ /* cicili#Let9991 */
              bool __h_case_result  = (true  &&  (((result . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn9992 */
                    (ntr  =  (((result . __h_data ). Right ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn9997 */
                  ({ /* cicili#Let10001 */
                    typeof((((ntr -> __h_data ). Branch ). __h_0_mem )) items ;
                    typeof((((ntr -> __h_data ). Branch ). __h_1_mem )) children ;
                    // ----------
                    ;
                    ({ /* cicili#Let10003 */
                      bool __h_case_result  = (true  &&  (((ntr -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn10004 */
                              (items  =  (((ntr -> __h_data ). Branch ). __h_0_mem ) );
                              true ;
                            }) &&  ({ /* cicili#Progn10006 */
                              (children  =  (((ntr -> __h_data ). Branch ). __h_1_mem ) );
                              true ;
                            }) ) ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* cicili#Progn10011 */
                          ({ /* cicili#Let10014 */
                            __auto_type items_len  = hasLen_List_BTree_int_User_pair_t (items , (L_BTree_int_User  -  1 ));
                            // ----------
                            (((items_len  ==  (L_BTree_int_User  -  1 ) )) ? result  : ({ /* cicili#Let10022 */
                                typeof((((wparent . __h_data ). Just ). __h_0_mem )) ptree ;
                                // ----------
                                ;
                                ({ /* cicili#Let10024 */
                                  bool __h_case_result  = (true  &&  (((wparent . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10025 */
                                        (ptree  =  (((wparent . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn10030 */
                                      ({ /* cicili#Let10034 */
                                        typeof((((ptree -> __h_data ). Branch ). __h_0_mem )) pitems ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let10036 */
                                          bool __h_case_result  = (true  &&  (((ptree -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn10037 */
                                                (pitems  =  (((ptree -> __h_data ). Branch ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn10042 */
                                              ({ /* cicili#Let10046 */
                                                __auto_type match10045  = nth_List_BTree_int_User_pair_t (pitem_index , pitems );
                                                typeof((((match10045 . __h_data ). Just ). __h_0_mem )) bitem ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let10049 */
                                                  bool __h_case_result  = (true  &&  (((match10045 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10050 */
                                                        (bitem  =  (((match10045 . __h_data ). Just ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn10055 */
                                                      ({ /* cicili#Let10058 */
                                                        __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10060 */
                                                          __auto_type ntr  = ntr ;
                                                          // ----------
                                                          ((void)(ntr -> __h_table -> freeClass ));
                                                          ntr ;
                                                        });
                                                        // ----------
                                                        Right_BTree_int_User_Error_BTree_int_User (Branch_BTree_int_User (insertAt_List_BTree_int_User_pair_t (items , bitem , ({ /* cicili#Let10070 */
                                                            __auto_type match10069  = compareKey (({ /* cicili#Let10073 */
                                                              typeof((bitem . __h_0_mem )) key ;
                                                              // ----------
                                                              ;
                                                              ({ /* cicili#Let10075 */
                                                                bool __h_case_result  = (true  &&  ({ /* cicili#Progn10076 */
                                                                    (key  =  (bitem . __h_0_mem ) );
                                                                    true ;
                                                                  }) );
                                                                // ----------
                                                                
                                                                ((__h_case_result ) ? ({ /* cicili#Progn10081 */
                                                                    key ;
                                                                  }) : ({ /* cicili#Let10085 */
                                                                    // ----------
                                                                    ;
                                                                    ({ /* cicili#Progn10087 */
                                                                      skey ;
                                                                    });
                                                                  }));
                                                              });
                                                            }), ({ /* cicili#Let10090 */
                                                              __auto_type __h_matchbox  = items ;
                                                              // ----------
                                                              ({ /* cicili#Let10094 */
                                                                __auto_type match10093  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                typeof((((match10093 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                // ----------
                                                                ;
                                                                ({ /* cicili#Let10097 */
                                                                  bool __h_case_result  = (true  &&  (((match10093 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10098 */
                                                                        (unboxed  =  (((match10093 . __h_data ). Just ). __h_0_mem ) );
                                                                        true ;
                                                                      }) ) );
                                                                  // ----------
                                                                  
                                                                  ((__h_case_result ) ? ({ /* cicili#Progn10103 */
                                                                      ({ /* cicili#Let10108 */
                                                                        typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) __h_match10106_0_arg ;
                                                                        typeof((__h_match10106_0_arg . __h_0_mem )) key ;
                                                                        // ----------
                                                                        ;
                                                                        ({ /* cicili#Let10110 */
                                                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn10111 */
                                                                                  (__h_match10106_0_arg  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                                                                                  true ;
                                                                                }) &&  (true  &&  ({ /* cicili#Progn10113 */
                                                                                    (key  =  (__h_match10106_0_arg . __h_0_mem ) );
                                                                                    true ;
                                                                                  }) ) ) ) );
                                                                          // ----------
                                                                          
                                                                          ((__h_case_result ) ? ({ /* cicili#Progn10118 */
                                                                              key ;
                                                                            }) : ({ /* cicili#Let10122 */
                                                                              // ----------
                                                                              ;
                                                                              ({ /* cicili#Progn10124 */
                                                                                skey ;
                                                                              });
                                                                            }));
                                                                        });
                                                                      });
                                                                    }) : ({ /* cicili#Let10128 */
                                                                      // ----------
                                                                      ;
                                                                      ({ /* cicili#Progn10130 */
                                                                        skey ;
                                                                      });
                                                                    }));
                                                                });
                                                              });
                                                            }));
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Let10133 */
                                                              bool __h_case_result  = (true  &&  ((match10069 . __h_ctor ) ==  __h_LT_t  ) );
                                                              // ----------
                                                              
                                                              ((__h_case_result ) ? ({ /* cicili#Progn10137 */
                                                                  0;
                                                                }) : ({ /* cicili#Let10141 */
                                                                  // ----------
                                                                  ;
                                                                  ({ /* cicili#Progn10143 */
                                                                    items_len ;
                                                                  });
                                                                }));
                                                            });
                                                          })), fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn10150 */
                                                            Rc_BTree_int_User __ciciliC_10149 (Rc_BTree_int_User __h_value ) {
                                                              return clone_Rc_BTree_int_User (__h_value );
                                                            }
                                                            __ciciliC_10149 ;
                                                          }), children )));
                                                      });
                                                    }) : ({ /* cicili#Let10157 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn10159 */
                                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 2"));
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let10166 */
                                              typeof((((ptree -> __h_data ). Internal ). __h_0_mem )) pitems ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let10168 */
                                                bool __h_case_result  = (true  &&  (((ptree -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn10169 */
                                                      (pitems  =  (((ptree -> __h_data ). Internal ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn10174 */
                                                    ({ /* cicili#Let10178 */
                                                      __auto_type match10177  = nth_List_BTree_int_User_pair_t (pitem_index , pitems );
                                                      typeof((((match10177 . __h_data ). Just ). __h_0_mem )) bitem ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let10181 */
                                                        bool __h_case_result  = (true  &&  (((match10177 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10182 */
                                                              (bitem  =  (((match10177 . __h_data ). Just ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn10187 */
                                                            ({ /* cicili#Let10190 */
                                                              __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10192 */
                                                                __auto_type ntr  = ntr ;
                                                                // ----------
                                                                ((void)(ntr -> __h_table -> freeClass ));
                                                                ntr ;
                                                              });
                                                              // ----------
                                                              Right_BTree_int_User_Error_BTree_int_User (Branch_BTree_int_User (insertAt_List_BTree_int_User_pair_t (items , bitem , ({ /* cicili#Let10202 */
                                                                  __auto_type match10201  = compareKey (({ /* cicili#Let10205 */
                                                                    typeof((bitem . __h_0_mem )) key ;
                                                                    // ----------
                                                                    ;
                                                                    ({ /* cicili#Let10207 */
                                                                      bool __h_case_result  = (true  &&  ({ /* cicili#Progn10208 */
                                                                          (key  =  (bitem . __h_0_mem ) );
                                                                          true ;
                                                                        }) );
                                                                      // ----------
                                                                      
                                                                      ((__h_case_result ) ? ({ /* cicili#Progn10213 */
                                                                          key ;
                                                                        }) : ({ /* cicili#Let10217 */
                                                                          // ----------
                                                                          ;
                                                                          ({ /* cicili#Progn10219 */
                                                                            skey ;
                                                                          });
                                                                        }));
                                                                    });
                                                                  }), ({ /* cicili#Let10222 */
                                                                    __auto_type __h_matchbox  = items ;
                                                                    // ----------
                                                                    ({ /* cicili#Let10226 */
                                                                      __auto_type match10225  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                      typeof((((match10225 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                      // ----------
                                                                      ;
                                                                      ({ /* cicili#Let10229 */
                                                                        bool __h_case_result  = (true  &&  (((match10225 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10230 */
                                                                              (unboxed  =  (((match10225 . __h_data ). Just ). __h_0_mem ) );
                                                                              true ;
                                                                            }) ) );
                                                                        // ----------
                                                                        
                                                                        ((__h_case_result ) ? ({ /* cicili#Progn10235 */
                                                                            ({ /* cicili#Let10240 */
                                                                              typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) __h_match10238_0_arg ;
                                                                              typeof((__h_match10238_0_arg . __h_0_mem )) key ;
                                                                              // ----------
                                                                              ;
                                                                              ({ /* cicili#Let10242 */
                                                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn10243 */
                                                                                        (__h_match10238_0_arg  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                                                                                        true ;
                                                                                      }) &&  (true  &&  ({ /* cicili#Progn10245 */
                                                                                          (key  =  (__h_match10238_0_arg . __h_0_mem ) );
                                                                                          true ;
                                                                                        }) ) ) ) );
                                                                                // ----------
                                                                                
                                                                                ((__h_case_result ) ? ({ /* cicili#Progn10250 */
                                                                                    key ;
                                                                                  }) : ({ /* cicili#Let10254 */
                                                                                    // ----------
                                                                                    ;
                                                                                    ({ /* cicili#Progn10256 */
                                                                                      skey ;
                                                                                    });
                                                                                  }));
                                                                              });
                                                                            });
                                                                          }) : ({ /* cicili#Let10260 */
                                                                            // ----------
                                                                            ;
                                                                            ({ /* cicili#Progn10262 */
                                                                              skey ;
                                                                            });
                                                                          }));
                                                                      });
                                                                    });
                                                                  }));
                                                                  // ----------
                                                                  ;
                                                                  ({ /* cicili#Let10265 */
                                                                    bool __h_case_result  = (true  &&  ((match10201 . __h_ctor ) ==  __h_LT_t  ) );
                                                                    // ----------
                                                                    
                                                                    ((__h_case_result ) ? ({ /* cicili#Progn10269 */
                                                                        0;
                                                                      }) : ({ /* cicili#Let10273 */
                                                                        // ----------
                                                                        ;
                                                                        ({ /* cicili#Progn10275 */
                                                                          items_len ;
                                                                        });
                                                                      }));
                                                                  });
                                                                })), fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn10282 */
                                                                  Rc_BTree_int_User __ciciliC_10281 (Rc_BTree_int_User __h_value ) {
                                                                    return clone_Rc_BTree_int_User (__h_value );
                                                                  }
                                                                  __ciciliC_10281 ;
                                                                }), children )));
                                                            });
                                                          }) : ({ /* cicili#Let10289 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn10291 */
                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 2"));
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  }) : ({ /* cicili#Let10298 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn10300 */
                                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 1"));
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let10307 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn10309 */
                                        (((items_len  ==  0 )) ? ({ /* cicili#Let10313 */
                                            __auto_type __h_matchbox  = children ;
                                            // ----------
                                            ({ /* cicili#Let10317 */
                                              __auto_type match10316  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                              typeof((((match10316 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let10320 */
                                                bool __h_case_result  = (true  &&  (((match10316 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10321 */
                                                      (unboxed  =  (((match10316 . __h_data ). Just ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn10326 */
                                                    ({ /* cicili#Let10330 */
                                                      typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let10332 */
                                                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn10333 */
                                                              (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn10338 */
                                                            ({ /* cicili#Let10341 */
                                                              __auto_type __h_matchbox  = clone_Rc_BTree_int_User (head );
                                                              // ----------
                                                              ({ /* cicili#Let10346 */
                                                                __auto_type match10345  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                typeof((((match10345 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                // ----------
                                                                ;
                                                                ({ /* cicili#Let10349 */
                                                                  bool __h_case_result  = (true  &&  (((match10345 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10350 */
                                                                        (unboxed  =  (((match10345 . __h_data ). Just ). __h_0_mem ) );
                                                                        true ;
                                                                      }) ) );
                                                                  // ----------
                                                                  
                                                                  ((__h_case_result ) ? ({ /* cicili#Progn10355 */
                                                                      ({ /* cicili#Let10359 */
                                                                        __auto_type chtr  = unboxed ;
                                                                        // ----------
                                                                        ;
                                                                        ({ /* cicili#Progn10361 */
                                                                          ({ /* cicili#Let10364 */
                                                                            __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10366 */
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
                                                                    }) : ({ /* cicili#Let10373 */
                                                                      // ----------
                                                                      ;
                                                                      ({ /* cicili#Progn10375 */
                                                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 3"));
                                                                      });
                                                                    }));
                                                                });
                                                              });
                                                            });
                                                          }) : ({ /* cicili#Let10382 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn10384 */
                                                              result ;
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  }) : ({ /* cicili#Let10388 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn10390 */
                                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CONS ());
                                                    });
                                                  }));
                                              });
                                            });
                                          }) : result );
                                      });
                                    }));
                                });
                              }));
                          });
                        }) : ({ /* cicili#Let10397 */
                          typeof((((ntr -> __h_data ). Internal ). __h_0_mem )) items ;
                          typeof((((ntr -> __h_data ). Internal ). __h_1_mem )) children ;
                          // ----------
                          ;
                          ({ /* cicili#Let10399 */
                            bool __h_case_result  = (true  &&  (((ntr -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn10400 */
                                    (items  =  (((ntr -> __h_data ). Internal ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn10402 */
                                    (children  =  (((ntr -> __h_data ). Internal ). __h_1_mem ) );
                                    true ;
                                  }) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn10407 */
                                ({ /* cicili#Let10410 */
                                  __auto_type items_len  = hasLen_List_BTree_int_User_pair_t (items , (L_BTree_int_User  -  1 ));
                                  // ----------
                                  (((items_len  ==  (L_BTree_int_User  -  1 ) )) ? result  : ({ /* cicili#Let10418 */
                                      typeof((((wparent . __h_data ). Just ). __h_0_mem )) ptree ;
                                      // ----------
                                      ;
                                      ({ /* cicili#Let10420 */
                                        bool __h_case_result  = (true  &&  (((wparent . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10421 */
                                              (ptree  =  (((wparent . __h_data ). Just ). __h_0_mem ) );
                                              true ;
                                            }) ) );
                                        // ----------
                                        
                                        ((__h_case_result ) ? ({ /* cicili#Progn10426 */
                                            ({ /* cicili#Let10430 */
                                              typeof((((ptree -> __h_data ). Branch ). __h_0_mem )) pitems ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let10432 */
                                                bool __h_case_result  = (true  &&  (((ptree -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn10433 */
                                                      (pitems  =  (((ptree -> __h_data ). Branch ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn10438 */
                                                    ({ /* cicili#Let10442 */
                                                      __auto_type match10441  = nth_List_BTree_int_User_pair_t (pitem_index , pitems );
                                                      typeof((((match10441 . __h_data ). Just ). __h_0_mem )) bitem ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let10445 */
                                                        bool __h_case_result  = (true  &&  (((match10441 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10446 */
                                                              (bitem  =  (((match10441 . __h_data ). Just ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn10451 */
                                                            ({ /* cicili#Let10454 */
                                                              __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10456 */
                                                                __auto_type ntr  = ntr ;
                                                                // ----------
                                                                ((void)(ntr -> __h_table -> freeClass ));
                                                                ntr ;
                                                              });
                                                              // ----------
                                                              Right_BTree_int_User_Error_BTree_int_User (Branch_BTree_int_User (insertAt_List_BTree_int_User_pair_t (items , bitem , ({ /* cicili#Let10466 */
                                                                  __auto_type match10465  = compareKey (({ /* cicili#Let10469 */
                                                                    typeof((bitem . __h_0_mem )) key ;
                                                                    // ----------
                                                                    ;
                                                                    ({ /* cicili#Let10471 */
                                                                      bool __h_case_result  = (true  &&  ({ /* cicili#Progn10472 */
                                                                          (key  =  (bitem . __h_0_mem ) );
                                                                          true ;
                                                                        }) );
                                                                      // ----------
                                                                      
                                                                      ((__h_case_result ) ? ({ /* cicili#Progn10477 */
                                                                          key ;
                                                                        }) : ({ /* cicili#Let10481 */
                                                                          // ----------
                                                                          ;
                                                                          ({ /* cicili#Progn10483 */
                                                                            skey ;
                                                                          });
                                                                        }));
                                                                    });
                                                                  }), ({ /* cicili#Let10486 */
                                                                    __auto_type __h_matchbox  = items ;
                                                                    // ----------
                                                                    ({ /* cicili#Let10490 */
                                                                      __auto_type match10489  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                      typeof((((match10489 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                      // ----------
                                                                      ;
                                                                      ({ /* cicili#Let10493 */
                                                                        bool __h_case_result  = (true  &&  (((match10489 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10494 */
                                                                              (unboxed  =  (((match10489 . __h_data ). Just ). __h_0_mem ) );
                                                                              true ;
                                                                            }) ) );
                                                                        // ----------
                                                                        
                                                                        ((__h_case_result ) ? ({ /* cicili#Progn10499 */
                                                                            ({ /* cicili#Let10504 */
                                                                              typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) __h_match10502_0_arg ;
                                                                              typeof((__h_match10502_0_arg . __h_0_mem )) key ;
                                                                              // ----------
                                                                              ;
                                                                              ({ /* cicili#Let10506 */
                                                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn10507 */
                                                                                        (__h_match10502_0_arg  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                                                                                        true ;
                                                                                      }) &&  (true  &&  ({ /* cicili#Progn10509 */
                                                                                          (key  =  (__h_match10502_0_arg . __h_0_mem ) );
                                                                                          true ;
                                                                                        }) ) ) ) );
                                                                                // ----------
                                                                                
                                                                                ((__h_case_result ) ? ({ /* cicili#Progn10514 */
                                                                                    key ;
                                                                                  }) : ({ /* cicili#Let10518 */
                                                                                    // ----------
                                                                                    ;
                                                                                    ({ /* cicili#Progn10520 */
                                                                                      skey ;
                                                                                    });
                                                                                  }));
                                                                              });
                                                                            });
                                                                          }) : ({ /* cicili#Let10524 */
                                                                            // ----------
                                                                            ;
                                                                            ({ /* cicili#Progn10526 */
                                                                              skey ;
                                                                            });
                                                                          }));
                                                                      });
                                                                    });
                                                                  }));
                                                                  // ----------
                                                                  ;
                                                                  ({ /* cicili#Let10529 */
                                                                    bool __h_case_result  = (true  &&  ((match10465 . __h_ctor ) ==  __h_LT_t  ) );
                                                                    // ----------
                                                                    
                                                                    ((__h_case_result ) ? ({ /* cicili#Progn10533 */
                                                                        0;
                                                                      }) : ({ /* cicili#Let10537 */
                                                                        // ----------
                                                                        ;
                                                                        ({ /* cicili#Progn10539 */
                                                                          items_len ;
                                                                        });
                                                                      }));
                                                                  });
                                                                })), fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn10546 */
                                                                  Rc_BTree_int_User __ciciliC_10545 (Rc_BTree_int_User __h_value ) {
                                                                    return clone_Rc_BTree_int_User (__h_value );
                                                                  }
                                                                  __ciciliC_10545 ;
                                                                }), children )));
                                                            });
                                                          }) : ({ /* cicili#Let10553 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn10555 */
                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 2"));
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  }) : ({ /* cicili#Let10562 */
                                                    typeof((((ptree -> __h_data ). Internal ). __h_0_mem )) pitems ;
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Let10564 */
                                                      bool __h_case_result  = (true  &&  (((ptree -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn10565 */
                                                            (pitems  =  (((ptree -> __h_data ). Internal ). __h_0_mem ) );
                                                            true ;
                                                          }) ) );
                                                      // ----------
                                                      
                                                      ((__h_case_result ) ? ({ /* cicili#Progn10570 */
                                                          ({ /* cicili#Let10574 */
                                                            __auto_type match10573  = nth_List_BTree_int_User_pair_t (pitem_index , pitems );
                                                            typeof((((match10573 . __h_data ). Just ). __h_0_mem )) bitem ;
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Let10577 */
                                                              bool __h_case_result  = (true  &&  (((match10573 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10578 */
                                                                    (bitem  =  (((match10573 . __h_data ). Just ). __h_0_mem ) );
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              
                                                              ((__h_case_result ) ? ({ /* cicili#Progn10583 */
                                                                  ({ /* cicili#Let10586 */
                                                                    __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10588 */
                                                                      __auto_type ntr  = ntr ;
                                                                      // ----------
                                                                      ((void)(ntr -> __h_table -> freeClass ));
                                                                      ntr ;
                                                                    });
                                                                    // ----------
                                                                    Right_BTree_int_User_Error_BTree_int_User (Branch_BTree_int_User (insertAt_List_BTree_int_User_pair_t (items , bitem , ({ /* cicili#Let10598 */
                                                                        __auto_type match10597  = compareKey (({ /* cicili#Let10601 */
                                                                          typeof((bitem . __h_0_mem )) key ;
                                                                          // ----------
                                                                          ;
                                                                          ({ /* cicili#Let10603 */
                                                                            bool __h_case_result  = (true  &&  ({ /* cicili#Progn10604 */
                                                                                (key  =  (bitem . __h_0_mem ) );
                                                                                true ;
                                                                              }) );
                                                                            // ----------
                                                                            
                                                                            ((__h_case_result ) ? ({ /* cicili#Progn10609 */
                                                                                key ;
                                                                              }) : ({ /* cicili#Let10613 */
                                                                                // ----------
                                                                                ;
                                                                                ({ /* cicili#Progn10615 */
                                                                                  skey ;
                                                                                });
                                                                              }));
                                                                          });
                                                                        }), ({ /* cicili#Let10618 */
                                                                          __auto_type __h_matchbox  = items ;
                                                                          // ----------
                                                                          ({ /* cicili#Let10622 */
                                                                            __auto_type match10621  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                            typeof((((match10621 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                            // ----------
                                                                            ;
                                                                            ({ /* cicili#Let10625 */
                                                                              bool __h_case_result  = (true  &&  (((match10621 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10626 */
                                                                                    (unboxed  =  (((match10621 . __h_data ). Just ). __h_0_mem ) );
                                                                                    true ;
                                                                                  }) ) );
                                                                              // ----------
                                                                              
                                                                              ((__h_case_result ) ? ({ /* cicili#Progn10631 */
                                                                                  ({ /* cicili#Let10636 */
                                                                                    typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) __h_match10634_0_arg ;
                                                                                    typeof((__h_match10634_0_arg . __h_0_mem )) key ;
                                                                                    // ----------
                                                                                    ;
                                                                                    ({ /* cicili#Let10638 */
                                                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn10639 */
                                                                                              (__h_match10634_0_arg  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                                                                                              true ;
                                                                                            }) &&  (true  &&  ({ /* cicili#Progn10641 */
                                                                                                (key  =  (__h_match10634_0_arg . __h_0_mem ) );
                                                                                                true ;
                                                                                              }) ) ) ) );
                                                                                      // ----------
                                                                                      
                                                                                      ((__h_case_result ) ? ({ /* cicili#Progn10646 */
                                                                                          key ;
                                                                                        }) : ({ /* cicili#Let10650 */
                                                                                          // ----------
                                                                                          ;
                                                                                          ({ /* cicili#Progn10652 */
                                                                                            skey ;
                                                                                          });
                                                                                        }));
                                                                                    });
                                                                                  });
                                                                                }) : ({ /* cicili#Let10656 */
                                                                                  // ----------
                                                                                  ;
                                                                                  ({ /* cicili#Progn10658 */
                                                                                    skey ;
                                                                                  });
                                                                                }));
                                                                            });
                                                                          });
                                                                        }));
                                                                        // ----------
                                                                        ;
                                                                        ({ /* cicili#Let10661 */
                                                                          bool __h_case_result  = (true  &&  ((match10597 . __h_ctor ) ==  __h_LT_t  ) );
                                                                          // ----------
                                                                          
                                                                          ((__h_case_result ) ? ({ /* cicili#Progn10665 */
                                                                              0;
                                                                            }) : ({ /* cicili#Let10669 */
                                                                              // ----------
                                                                              ;
                                                                              ({ /* cicili#Progn10671 */
                                                                                items_len ;
                                                                              });
                                                                            }));
                                                                        });
                                                                      })), fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn10678 */
                                                                        Rc_BTree_int_User __ciciliC_10677 (Rc_BTree_int_User __h_value ) {
                                                                          return clone_Rc_BTree_int_User (__h_value );
                                                                        }
                                                                        __ciciliC_10677 ;
                                                                      }), children )));
                                                                  });
                                                                }) : ({ /* cicili#Let10685 */
                                                                  // ----------
                                                                  ;
                                                                  ({ /* cicili#Progn10687 */
                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 2"));
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        }) : ({ /* cicili#Let10694 */
                                                          // ----------
                                                          ;
                                                          ({ /* cicili#Progn10696 */
                                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 1"));
                                                          });
                                                        }));
                                                    });
                                                  }));
                                              });
                                            });
                                          }) : ({ /* cicili#Let10703 */
                                            // ----------
                                            ;
                                            ({ /* cicili#Progn10705 */
                                              (((items_len  ==  0 )) ? ({ /* cicili#Let10709 */
                                                  __auto_type __h_matchbox  = children ;
                                                  // ----------
                                                  ({ /* cicili#Let10713 */
                                                    __auto_type match10712  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                    typeof((((match10712 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Let10716 */
                                                      bool __h_case_result  = (true  &&  (((match10712 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10717 */
                                                            (unboxed  =  (((match10712 . __h_data ). Just ). __h_0_mem ) );
                                                            true ;
                                                          }) ) );
                                                      // ----------
                                                      
                                                      ((__h_case_result ) ? ({ /* cicili#Progn10722 */
                                                          ({ /* cicili#Let10726 */
                                                            typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Let10728 */
                                                              bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn10729 */
                                                                    (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              
                                                              ((__h_case_result ) ? ({ /* cicili#Progn10734 */
                                                                  ({ /* cicili#Let10737 */
                                                                    __auto_type __h_matchbox  = clone_Rc_BTree_int_User (head );
                                                                    // ----------
                                                                    ({ /* cicili#Let10742 */
                                                                      __auto_type match10741  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                      typeof((((match10741 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                      // ----------
                                                                      ;
                                                                      ({ /* cicili#Let10745 */
                                                                        bool __h_case_result  = (true  &&  (((match10741 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10746 */
                                                                              (unboxed  =  (((match10741 . __h_data ). Just ). __h_0_mem ) );
                                                                              true ;
                                                                            }) ) );
                                                                        // ----------
                                                                        
                                                                        ((__h_case_result ) ? ({ /* cicili#Progn10751 */
                                                                            ({ /* cicili#Let10755 */
                                                                              __auto_type chtr  = unboxed ;
                                                                              // ----------
                                                                              ;
                                                                              ({ /* cicili#Progn10757 */
                                                                                ({ /* cicili#Let10760 */
                                                                                  __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10762 */
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
                                                                          }) : ({ /* cicili#Let10769 */
                                                                            // ----------
                                                                            ;
                                                                            ({ /* cicili#Progn10771 */
                                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 3"));
                                                                            });
                                                                          }));
                                                                      });
                                                                    });
                                                                  });
                                                                }) : ({ /* cicili#Let10778 */
                                                                  // ----------
                                                                  ;
                                                                  ({ /* cicili#Progn10780 */
                                                                    result ;
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        }) : ({ /* cicili#Let10784 */
                                                          // ----------
                                                          ;
                                                          ({ /* cicili#Progn10786 */
                                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CONS ());
                                                          });
                                                        }));
                                                    });
                                                  });
                                                }) : result );
                                            });
                                          }));
                                      });
                                    }));
                                });
                              }) : ({ /* cicili#Let10793 */
                                // ----------
                                ;
                                ({ /* cicili#Progn10795 */
                                  result ;
                                });
                              }));
                          });
                        }));
                    });
                  });
                }) : ({ /* cicili#Let10799 */
                  // ----------
                  ;
                  ({ /* cicili#Progn10801 */
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
    return ({ /* cicili#Let10816 */
        __auto_type __h_matchbox  = current ;
        // ----------
        ({ /* cicili#Let10820 */
          __auto_type match10819  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match10819 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let10823 */
            bool __h_case_result  = (true  &&  (((match10819 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10824 */
                  (unboxed  =  (((match10819 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn10829 */
                ({ /* cicili#Let10834 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                  typeof((head . __h_0_mem )) key ;
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  ;
                  ({ /* cicili#Let10836 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn10837 */
                              (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                              true ;
                            }) &&  (true  &&  ({ /* cicili#Progn10839 */
                                (key  =  (head . __h_0_mem ) );
                                true ;
                              }) ) ) &&  ({ /* cicili#Progn10841 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn10846 */
                        ({ /* cicili#Let10850 */
                          __auto_type match10849  = compareKey (skey , key );
                          // ----------
                          ;
                          ({ /* cicili#Let10852 */
                            bool __h_case_result  = (true  &&  ((match10849 . __h_ctor ) ==  __h_LT_t  ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn10856 */
                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_NOT_FOUND (skey ));
                              }) : ({ /* cicili#Let10863 */
                                // ----------
                                ;
                                ({ /* cicili#Let10865 */
                                  bool __h_case_result  = (true  &&  ((match10849 . __h_ctor ) ==  __h_EQ_t  ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn10869 */
                                      ({ /* cicili#Let10872 */
                                        __auto_type result  = Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (delete_List_BTree_int_User_pair_t (items , current )));
                                        // ----------
                                        { /* cicili#Let10881 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Let10883 */
                                            bool __h_case_result  = (true  &&  ((result . __h_ctor ) ==  __h_Right_t  ) );
                                            // ----------
                                            
                                            if (__h_case_result )
                                              { /* cicili#Block10888 */
                                                if (callback )
                                                  { /* cicili#Block10892 */
                                                    callback (head );
                                                  }
                                              }
                                          });
                                        }
                                        result ;
                                      });
                                    }) : ({ /* cicili#Let10896 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn10898 */
                                        deleteLeaf (items , tail , (index  +  1 ));
                                      });
                                    }));
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let10902 */
                        // ----------
                        ;
                        ({ /* cicili#Progn10904 */
                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_NOT_FOUND (skey ));
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let10911 */
                // ----------
                ;
                ({ /* cicili#Progn10913 */
                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CONS ());
                });
              }));
          });
        });
      });
  }
  return ({ /* cicili#Let10921 */
      __auto_type result  = ({ /* cicili#Let10924 */
        typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
        typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
        // ----------
        ;
        ({ /* cicili#Let10926 */
          bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn10927 */
                  (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn10929 */
                  (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn10934 */
              deleteInternal (Just_BTree_int_User (tree ), items , children , Nothing_List_BTree_int_User_pair_t (), items , 0);
            }) : ({ /* cicili#Let10940 */
              typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
              typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
              // ----------
              ;
              ({ /* cicili#Let10942 */
                bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn10943 */
                        (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                        true ;
                      }) &&  ({ /* cicili#Progn10945 */
                        (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                        true ;
                      }) ) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn10950 */
                    deleteInternal (Just_BTree_int_User (tree ), items , children , Nothing_List_BTree_int_User_pair_t (), items , 0);
                  }) : ({ /* cicili#Let10956 */
                    typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                    // ----------
                    ;
                    ({ /* cicili#Let10958 */
                      bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn10959 */
                            (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                            true ;
                          }) ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* cicili#Progn10964 */
                          deleteLeaf (items , items , 0);
                        }) : ({ /* cicili#Let10968 */
                          // ----------
                          ;
                          ({ /* cicili#Progn10970 */
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
  return ({ /* cicili#Let10993 */
      typeof((((keys -> __h_data ). Cons ). __h_0_mem )) khead ;
      typeof((((keys -> __h_data ). Cons ). __h_1_mem )) ktail ;
      // ----------
      ;
      ({ /* cicili#Let10995 */
        bool __h_case_result  = (true  &&  (((keys -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn10996 */
                (khead  =  (((keys -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn10998 */
                (ktail  =  (((keys -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn11003 */
            ({ /* cicili#Let11007 */
              typeof((((values -> __h_data ). Cons ). __h_0_mem )) vhead ;
              typeof((((values -> __h_data ). Cons ). __h_1_mem )) vtail ;
              // ----------
              ;
              ({ /* cicili#Let11009 */
                bool __h_case_result  = (true  &&  (((values -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn11010 */
                        (vhead  =  (((values -> __h_data ). Cons ). __h_0_mem ) );
                        true ;
                      }) &&  ({ /* cicili#Progn11012 */
                        (vtail  =  (((values -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn11017 */
                    ({ /* cicili#Let11020 */
                      __auto_type etree  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let11022 */
                        __auto_type etree  = fromLists_BTree_int_User (ktail , vtail );
                        // ----------
                        ((void)((etree . __h_table )-> freeData ));
                        etree ;
                      });
                      // ----------
                      ({ /* cicili#Let11028 */
                        typeof((((etree . __h_data ). Right ). __h_0_mem )) tree ;
                        // ----------
                        ;
                        ({ /* cicili#Let11030 */
                          bool __h_case_result  = (true  &&  (((etree . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn11031 */
                                (tree  =  (((etree . __h_data ). Right ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn11036 */
                              ({ /* cicili#Let11039 */
                                __auto_type tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let11041 */
                                  __auto_type tree  = tree ;
                                  // ----------
                                  ((void)(tree -> __h_table -> freeClass ));
                                  tree ;
                                });
                                // ----------
                                insert_BTree_int_User (tree , khead , vhead );
                              });
                            }) : ({ /* cicili#Let11047 */
                              // ----------
                              ;
                              ({ /* cicili#Progn11049 */
                                etree ;
                              });
                            }));
                        });
                      });
                    });
                  }) : ({ /* cicili#Let11053 */
                    // ----------
                    ;
                    ({ /* cicili#Progn11055 */
                      Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (BoxedNil_BTree_int_User_pair_t ()));
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let11063 */
            // ----------
            ;
            ({ /* cicili#Progn11065 */
              Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (BoxedNil_BTree_int_User_pair_t ()));
            });
          }));
      });
    });
}
Either_BTree_int_User_Error_BTree_int_User pure_BTree_int_User (int keys [], User values [], size_t len ) {
  return ({ /* cicili#Let11076 */
      BTree_int_User tree  = Leaf_BTree_int_User (BoxedNil_BTree_int_User_pair_t ());
      // ----------
      for (size_t i  = 0; (i  <  len  ); (++i )) {
          { /* cicili#Let11084 */
            __auto_type match11083  = insert_BTree_int_User (tree , keys [i ], values [i ]);
            typeof((((match11083 . __h_data ). Right ). __h_0_mem )) new_tree ;
            // ----------
            ;
            ({ /* cicili#Let11087 */
              bool __h_case_result  = (true  &&  (((match11083 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn11088 */
                    (new_tree  =  (((match11083 . __h_data ). Right ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block11094 */
                  { /* cicili#Block11096 */
                    free_BTree_int_User ((&tree ));
                    tree  = new_tree ;
                  }
                }
              else
                { /* cicili#Let11102 */
                  __auto_type left  = match11083 ;
                  // ----------
                  ;
                  { /* cicili#Block11104 */
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
    return ({ /* cicili#Let11113 */
        __auto_type __h_matchbox  = children ;
        // ----------
        ({ /* cicili#Let11117 */
          __auto_type match11116  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match11116 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let11120 */
            bool __h_case_result  = (true  &&  (((match11116 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11121 */
                  (unboxed  =  (((match11116 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn11126 */
                ({ /* cicili#Let11130 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  ;
                  ({ /* cicili#Let11132 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn11133 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn11135 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn11140 */
                        (({ /* cicili#Let11143 */
                            __auto_type __h_matchbox  = tail ;
                            // ----------
                            ({ /* cicili#Let11147 */
                              __auto_type match11146  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                              typeof((((match11146 . __h_data ). Just ). __h_0_mem )) unboxed ;
                              // ----------
                              ;
                              ({ /* cicili#Let11150 */
                                bool __h_case_result  = (true  &&  (((match11146 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11151 */
                                      (unboxed  =  (((match11146 . __h_data ). Just ). __h_0_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn11156 */
                                    ({ /* cicili#Let11160 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Let11162 */
                                        bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Cons_t  ) );
                                        // ----------
                                        
                                        ((__h_case_result ) ? ({ /* cicili#Progn11166 */
                                            ({ /* cicili#Let11170 */
                                              __auto_type match11169  = get_Rc_BTree_int_User (head );
                                              typeof((((match11169 . __h_data ). Just ). __h_0_mem )) tr ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let11173 */
                                                bool __h_case_result  = (true  &&  (((match11169 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11174 */
                                                      (tr  =  (((match11169 . __h_data ). Just ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn11179 */
                                                    (showTree (indent , tr ) +  fprintf (file , "\n") );
                                                  }) : ({ /* cicili#Let11183 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn11185 */
                                                      0;
                                                    });
                                                  }));
                                              });
                                            });
                                          }) : ({ /* cicili#Let11189 */
                                            // ----------
                                            ;
                                            ({ /* cicili#Progn11191 */
                                              ({ /* cicili#Let11195 */
                                                __auto_type match11194  = get_Rc_BTree_int_User (head );
                                                typeof((((match11194 . __h_data ). Just ). __h_0_mem )) tr ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let11198 */
                                                  bool __h_case_result  = (true  &&  (((match11194 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11199 */
                                                        (tr  =  (((match11194 . __h_data ). Just ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn11204 */
                                                      showTree (indent , tr );
                                                    }) : ({ /* cicili#Let11208 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn11210 */
                                                        0;
                                                      });
                                                    }));
                                                });
                                              });
                                            });
                                          }));
                                      });
                                    });
                                  }) : ({ /* cicili#Let11214 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn11216 */
                                      0;
                                    });
                                  }));
                              });
                            });
                          }) +  showChildren (indent , tail ) );
                      }) : ({ /* cicili#Let11220 */
                        // ----------
                        ;
                        ({ /* cicili#Progn11222 */
                          0;
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let11226 */
                // ----------
                ;
                ({ /* cicili#Progn11228 */
                  0;
                });
              }));
          });
        });
      });
  }
  size_t showTree (int indent , BTree_int_User tree ) {
    return (fprintf (file , "%d%*c", indent , (indent  *  2 ), ' ') +  ({ /* cicili#Let11234 */
          typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
          typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
          // ----------
          ;
          ({ /* cicili#Let11236 */
            bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn11237 */
                    (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn11239 */
                    (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                    true ;
                  }) ) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn11244 */
                (show_List_BTree_int_User_pair_t (file , items ) +  ({ /* cicili#Let11248 */
                    __auto_type __h_matchbox  = children ;
                    // ----------
                    ({ /* cicili#Let11252 */
                      __auto_type match11251  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                      typeof((((match11251 . __h_data ). Just ). __h_0_mem )) unboxed ;
                      // ----------
                      ;
                      ({ /* cicili#Let11255 */
                        bool __h_case_result  = (true  &&  (((match11251 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11256 */
                              (unboxed  =  (((match11251 . __h_data ). Just ). __h_0_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn11261 */
                            ({ /* cicili#Let11265 */
                              // ----------
                              ;
                              ({ /* cicili#Let11267 */
                                bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Cons_t  ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn11271 */
                                    (fprintf (file , "\n") +  showChildren ((indent  +  1 ), children ) );
                                  }) : ({ /* cicili#Let11275 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn11277 */
                                      0;
                                    });
                                  }));
                              });
                            });
                          }) : ({ /* cicili#Let11281 */
                            // ----------
                            ;
                            ({ /* cicili#Progn11283 */
                              0;
                            });
                          }));
                      });
                    });
                  }) );
              }) : ({ /* cicili#Let11287 */
                typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
                typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
                // ----------
                ;
                ({ /* cicili#Let11289 */
                  bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn11290 */
                          (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn11292 */
                          (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn11297 */
                      (show_List_BTree_int_User_pair_t (file , items ) +  ({ /* cicili#Let11301 */
                          __auto_type __h_matchbox  = children ;
                          // ----------
                          ({ /* cicili#Let11305 */
                            __auto_type match11304  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                            typeof((((match11304 . __h_data ). Just ). __h_0_mem )) unboxed ;
                            // ----------
                            ;
                            ({ /* cicili#Let11308 */
                              bool __h_case_result  = (true  &&  (((match11304 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11309 */
                                    (unboxed  =  (((match11304 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* cicili#Progn11314 */
                                  ({ /* cicili#Let11318 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Let11320 */
                                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Cons_t  ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn11324 */
                                          (fprintf (file , "\n") +  showChildren ((indent  +  1 ), children ) );
                                        }) : ({ /* cicili#Let11328 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Progn11330 */
                                            0;
                                          });
                                        }));
                                    });
                                  });
                                }) : ({ /* cicili#Let11334 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Progn11336 */
                                    0;
                                  });
                                }));
                            });
                          });
                        }) );
                    }) : ({ /* cicili#Let11340 */
                      typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                      // ----------
                      ;
                      ({ /* cicili#Let11342 */
                        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn11343 */
                              (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn11348 */
                            show_List_BTree_int_User_pair_t (file , items );
                          }) : ({ /* cicili#Let11353 */
                            // ----------
                            ;
                            ({ /* cicili#Progn11355 */
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
    ({ /* cicili#Let11363 */
      __auto_type __h_matchbox  = currentChild ;
      // ----------
      { /* cicili#Let11367 */
        __auto_type match11366  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match11366 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let11370 */
          bool __h_case_result  = (true  &&  (((match11366 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11371 */
                (unboxed  =  (((match11366 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block11377 */
              { /* cicili#Let11381 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) wheadC ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tailC ;
                // ----------
                ;
                ({ /* cicili#Let11383 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn11384 */
                          (wheadC  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn11386 */
                          (tailC  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block11392 */
                      { /* cicili#Let11396 */
                        __auto_type match11395  = get_Rc_BTree_int_User (wheadC );
                        typeof((((match11395 . __h_data ). Just ). __h_0_mem )) headC ;
                        // ----------
                        ;
                        ({ /* cicili#Let11399 */
                          bool __h_case_result  = (true  &&  (((match11395 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11400 */
                                (headC  =  (((match11395 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          if (__h_case_result )
                            { /* cicili#Block11406 */
                              ({ /* cicili#Let11409 */
                                __auto_type __h_matchbox  = tailC ;
                                // ----------
                                { /* cicili#Let11413 */
                                  __auto_type match11412  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                  typeof((((match11412 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let11416 */
                                    bool __h_case_result  = (true  &&  (((match11412 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11417 */
                                          (unboxed  =  (((match11412 . __h_data ). Just ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    if (__h_case_result )
                                      { /* cicili#Block11423 */
                                        { /* cicili#Let11427 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Let11429 */
                                            bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Cons_t  ) );
                                            // ----------
                                            
                                            if (__h_case_result )
                                              { /* cicili#Block11434 */
                                                { /* cicili#Block11436 */
                                                  { /* cicili#Let11440 */
                                                    typeof((((headC -> __h_data ). Branch ). __h_0_mem )) items ;
                                                    typeof((((headC -> __h_data ). Branch ). __h_1_mem )) children ;
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Let11442 */
                                                      bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn11443 */
                                                              (items  =  (((headC -> __h_data ). Branch ). __h_0_mem ) );
                                                              true ;
                                                            }) &&  ({ /* cicili#Progn11445 */
                                                              (children  =  (((headC -> __h_data ). Branch ). __h_1_mem ) );
                                                              true ;
                                                            }) ) ) );
                                                      // ----------
                                                      
                                                      if (__h_case_result )
                                                        { /* cicili#Block11451 */
                                                          traverseInternal (items , children );
                                                        }
                                                      else
                                                        { /* cicili#Let11456 */
                                                          typeof((((headC -> __h_data ). Internal ). __h_0_mem )) items ;
                                                          typeof((((headC -> __h_data ). Internal ). __h_1_mem )) children ;
                                                          // ----------
                                                          ;
                                                          ({ /* cicili#Let11458 */
                                                            bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn11459 */
                                                                    (items  =  (((headC -> __h_data ). Internal ). __h_0_mem ) );
                                                                    true ;
                                                                  }) &&  ({ /* cicili#Progn11461 */
                                                                    (children  =  (((headC -> __h_data ). Internal ). __h_1_mem ) );
                                                                    true ;
                                                                  }) ) ) );
                                                            // ----------
                                                            
                                                            if (__h_case_result )
                                                              { /* cicili#Block11467 */
                                                                traverseInternal (items , children );
                                                              }
                                                            else
                                                              { /* cicili#Let11472 */
                                                                typeof((((headC -> __h_data ). Leaf ). __h_0_mem )) items ;
                                                                // ----------
                                                                ;
                                                                ({ /* cicili#Let11474 */
                                                                  bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn11475 */
                                                                        (items  =  (((headC -> __h_data ). Leaf ). __h_0_mem ) );
                                                                        true ;
                                                                      }) ) );
                                                                  // ----------
                                                                  
                                                                  if (__h_case_result )
                                                                    { /* cicili#Block11481 */
                                                                      traverseLeaf (items , True ());
                                                                    }
                                                                });
                                                              }
                                                          });
                                                        }
                                                    });
                                                  }
                                                  ({ /* cicili#Let11484 */
                                                    __auto_type __h_matchbox  = currentItem ;
                                                    // ----------
                                                    { /* cicili#Let11488 */
                                                      __auto_type match11487  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                      typeof((((match11487 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let11491 */
                                                        bool __h_case_result  = (true  &&  (((match11487 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11492 */
                                                              (unboxed  =  (((match11487 . __h_data ). Just ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        
                                                        if (__h_case_result )
                                                          { /* cicili#Block11498 */
                                                            { /* cicili#Let11502 */
                                                              typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) headI ;
                                                              typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tailI ;
                                                              // ----------
                                                              ;
                                                              ({ /* cicili#Let11504 */
                                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn11505 */
                                                                        (headI  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                                                                        true ;
                                                                      }) &&  ({ /* cicili#Progn11507 */
                                                                        (tailI  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                                                                        true ;
                                                                      }) ) ) );
                                                                // ----------
                                                                
                                                                if (__h_case_result )
                                                                  { /* cicili#Block11513 */
                                                                    { /* cicili#Block11515 */
                                                                      callback (headI , True ());
                                                                      traverseInternal (tailI , tailC );
                                                                    }
                                                                  }
                                                              });
                                                            }
                                                          }
                                                        else
                                                          { /* cicili#Let11520 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Let11522 */
                                                              bool __h_case_result  = (true  &&  ((match11487 . __h_ctor ) ==  __h_Nothing_t  ) );
                                                              // ----------
                                                              
                                                              if (__h_case_result )
                                                                { /* cicili#Block11527 */
                                                                  False ();
                                                                }
                                                            });
                                                          }
                                                      });
                                                    }
                                                  });
                                                }
                                              }
                                            else
                                              { /* cicili#Let11532 */
                                                // ----------
                                                ;
                                                { /* cicili#Block11534 */
                                                  { /* cicili#Block11536 */
                                                    { /* cicili#Let11540 */
                                                      typeof((((headC -> __h_data ). Branch ). __h_0_mem )) items ;
                                                      typeof((((headC -> __h_data ). Branch ). __h_1_mem )) children ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let11542 */
                                                        bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn11543 */
                                                                (items  =  (((headC -> __h_data ). Branch ). __h_0_mem ) );
                                                                true ;
                                                              }) &&  ({ /* cicili#Progn11545 */
                                                                (children  =  (((headC -> __h_data ). Branch ). __h_1_mem ) );
                                                                true ;
                                                              }) ) ) );
                                                        // ----------
                                                        
                                                        if (__h_case_result )
                                                          { /* cicili#Block11551 */
                                                            traverseInternal (items , children );
                                                          }
                                                        else
                                                          { /* cicili#Let11556 */
                                                            typeof((((headC -> __h_data ). Internal ). __h_0_mem )) items ;
                                                            typeof((((headC -> __h_data ). Internal ). __h_1_mem )) children ;
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Let11558 */
                                                              bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn11559 */
                                                                      (items  =  (((headC -> __h_data ). Internal ). __h_0_mem ) );
                                                                      true ;
                                                                    }) &&  ({ /* cicili#Progn11561 */
                                                                      (children  =  (((headC -> __h_data ). Internal ). __h_1_mem ) );
                                                                      true ;
                                                                    }) ) ) );
                                                              // ----------
                                                              
                                                              if (__h_case_result )
                                                                { /* cicili#Block11567 */
                                                                  traverseInternal (items , children );
                                                                }
                                                              else
                                                                { /* cicili#Let11572 */
                                                                  typeof((((headC -> __h_data ). Leaf ). __h_0_mem )) items ;
                                                                  // ----------
                                                                  ;
                                                                  ({ /* cicili#Let11574 */
                                                                    bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn11575 */
                                                                          (items  =  (((headC -> __h_data ). Leaf ). __h_0_mem ) );
                                                                          true ;
                                                                        }) ) );
                                                                    // ----------
                                                                    
                                                                    if (__h_case_result )
                                                                      { /* cicili#Block11581 */
                                                                        traverseLeaf (items , False ());
                                                                      }
                                                                  });
                                                                }
                                                            });
                                                          }
                                                      });
                                                    }
                                                    ({ /* cicili#Let11584 */
                                                      __auto_type __h_matchbox  = currentItem ;
                                                      // ----------
                                                      { /* cicili#Let11588 */
                                                        __auto_type match11587  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                        typeof((((match11587 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                        // ----------
                                                        ;
                                                        ({ /* cicili#Let11591 */
                                                          bool __h_case_result  = (true  &&  (((match11587 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11592 */
                                                                (unboxed  =  (((match11587 . __h_data ). Just ). __h_0_mem ) );
                                                                true ;
                                                              }) ) );
                                                          // ----------
                                                          
                                                          if (__h_case_result )
                                                            { /* cicili#Block11598 */
                                                              { /* cicili#Let11602 */
                                                                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) headI ;
                                                                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tailI ;
                                                                // ----------
                                                                ;
                                                                ({ /* cicili#Let11604 */
                                                                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn11605 */
                                                                          (headI  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                                                                          true ;
                                                                        }) &&  ({ /* cicili#Progn11607 */
                                                                          (tailI  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                                                                          true ;
                                                                        }) ) ) );
                                                                  // ----------
                                                                  
                                                                  if (__h_case_result )
                                                                    { /* cicili#Block11613 */
                                                                      { /* cicili#Block11615 */
                                                                        callback (headI , False ());
                                                                        traverseInternal (tailI , tailC );
                                                                      }
                                                                    }
                                                                });
                                                              }
                                                            }
                                                          else
                                                            { /* cicili#Let11620 */
                                                              // ----------
                                                              ;
                                                              ({ /* cicili#Let11622 */
                                                                bool __h_case_result  = (true  &&  ((match11587 . __h_ctor ) ==  __h_Nothing_t  ) );
                                                                // ----------
                                                                
                                                                if (__h_case_result )
                                                                  { /* cicili#Block11627 */
                                                                    False ();
                                                                  }
                                                              });
                                                            }
                                                        });
                                                      }
                                                    });
                                                  }
                                                }
                                              }
                                          });
                                        }
                                      }
                                    else
                                      { /* cicili#Let11632 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Let11634 */
                                          bool __h_case_result  = (true  &&  ((match11412 . __h_ctor ) ==  __h_Nothing_t  ) );
                                          // ----------
                                          
                                          if (__h_case_result )
                                            { /* cicili#Block11639 */
                                              False ();
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
                });
              }
            }
          else
            { /* cicili#Let11644 */
              // ----------
              ;
              ({ /* cicili#Let11646 */
                bool __h_case_result  = (true  &&  ((match11366 . __h_ctor ) ==  __h_Nothing_t  ) );
                // ----------
                
                if (__h_case_result )
                  { /* cicili#Block11651 */
                    False ();
                  }
              });
            }
        });
      }
    });
  }
  void traverseLeaf (List_BTree_int_User_pair_t current , Bool hasNextLeaf ) {
    ({ /* cicili#Let11657 */
      __auto_type __h_matchbox  = current ;
      // ----------
      { /* cicili#Let11661 */
        __auto_type match11660  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match11660 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let11664 */
          bool __h_case_result  = (true  &&  (((match11660 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11665 */
                (unboxed  =  (((match11660 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block11671 */
              { /* cicili#Let11675 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let11677 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn11678 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn11680 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block11686 */
                      { /* cicili#Block11688 */
                        callback (head , ({ /* cicili#Let11692 */
                            // ----------
                            ;
                            ({ /* cicili#Let11694 */
                              bool __h_case_result  = (true  &&  ((hasNextLeaf . __h_ctor ) ==  __h_True_t  ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* cicili#Progn11698 */
                                  hasNextLeaf ;
                                }) : ({ /* cicili#Let11702 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Progn11704 */
                                    ({ /* cicili#Let11707 */
                                      __auto_type __h_matchbox  = tail ;
                                      // ----------
                                      ({ /* cicili#Let11711 */
                                        __auto_type match11710  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                        typeof((((match11710 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let11714 */
                                          bool __h_case_result  = (true  &&  (((match11710 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11715 */
                                                (unboxed  =  (((match11710 . __h_data ). Just ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn11720 */
                                              ({ /* cicili#Let11724 */
                                                // ----------
                                                ;
                                                ({ /* cicili#Let11726 */
                                                  bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Cons_t  ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn11730 */
                                                      True ();
                                                    }) : ({ /* cicili#Let11734 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn11736 */
                                                        False ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let11740 */
                                              // ----------
                                              ;
                                              ({ /* cicili#Progn11742 */
                                                False ();
                                              });
                                            }));
                                        });
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
          else
            { /* cicili#Let11747 */
              // ----------
              ;
              ({ /* cicili#Let11749 */
                bool __h_case_result  = (true  &&  ((match11660 . __h_ctor ) ==  __h_Nothing_t  ) );
                // ----------
                
                if (__h_case_result )
                  { /* cicili#Block11754 */
                    False ();
                  }
              });
            }
        });
      }
    });
  }
  { /* cicili#Let11759 */
    typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
    typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
    // ----------
    ;
    ({ /* cicili#Let11761 */
      bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn11762 */
              (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
              true ;
            }) &&  ({ /* cicili#Progn11764 */
              (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block11770 */
          traverseInternal (items , children );
        }
      else
        { /* cicili#Let11775 */
          typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
          typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
          // ----------
          ;
          ({ /* cicili#Let11777 */
            bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn11778 */
                    (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn11780 */
                    (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                    true ;
                  }) ) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block11786 */
                traverseInternal (items , children );
              }
            else
              { /* cicili#Let11791 */
                typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                // ----------
                ;
                ({ /* cicili#Let11793 */
                  bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn11794 */
                        (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block11800 */
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
    return ({ /* cicili#Let11815 */
        __auto_type __h_matchbox  = current ;
        // ----------
        ({ /* cicili#Let11819 */
          __auto_type match11818  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match11818 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let11822 */
            bool __h_case_result  = (true  &&  (((match11818 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11823 */
                  (unboxed  =  (((match11818 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn11828 */
                ({ /* cicili#Let11832 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  ;
                  ({ /* cicili#Let11834 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn11835 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn11837 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn11842 */
                        ({ /* cicili#Let11845 */
                          __auto_type __h_matchbox  = tail ;
                          // ----------
                          ({ /* cicili#Let11849 */
                            __auto_type match11848  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                            typeof((((match11848 . __h_data ). Just ). __h_0_mem )) unboxed ;
                            // ----------
                            ;
                            ({ /* cicili#Let11852 */
                              bool __h_case_result  = (true  &&  (((match11848 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11853 */
                                    (unboxed  =  (((match11848 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* cicili#Progn11858 */
                                  ({ /* cicili#Let11862 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Let11864 */
                                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Nil_t  ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn11868 */
                                          ({ /* cicili#Let11872 */
                                            __auto_type match11871  = get_Rc_BTree_int_User (head );
                                            typeof((((match11871 . __h_data ). Just ). __h_0_mem )) child ;
                                            // ----------
                                            ;
                                            ({ /* cicili#Let11875 */
                                              bool __h_case_result  = (true  &&  (((match11871 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11876 */
                                                    (child  =  (((match11871 . __h_data ). Just ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              
                                              ((__h_case_result ) ? ({ /* cicili#Progn11881 */
                                                  ({ /* cicili#Let11885 */
                                                    typeof((((child -> __h_data ). Branch ). __h_1_mem )) nchildren ;
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Let11887 */
                                                      bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn11888 */
                                                            (nchildren  =  (((child -> __h_data ). Branch ). __h_1_mem ) );
                                                            true ;
                                                          }) ) );
                                                      // ----------
                                                      
                                                      ((__h_case_result ) ? ({ /* cicili#Progn11893 */
                                                          maxInternal (nchildren );
                                                        }) : ({ /* cicili#Let11897 */
                                                          typeof((((child -> __h_data ). Internal ). __h_1_mem )) nchildren ;
                                                          // ----------
                                                          ;
                                                          ({ /* cicili#Let11899 */
                                                            bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn11900 */
                                                                  (nchildren  =  (((child -> __h_data ). Internal ). __h_1_mem ) );
                                                                  true ;
                                                                }) ) );
                                                            // ----------
                                                            
                                                            ((__h_case_result ) ? ({ /* cicili#Progn11905 */
                                                                maxInternal (nchildren );
                                                              }) : ({ /* cicili#Let11909 */
                                                                typeof((((child -> __h_data ). Leaf ). __h_0_mem )) items ;
                                                                // ----------
                                                                ;
                                                                ({ /* cicili#Let11911 */
                                                                  bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn11912 */
                                                                        (items  =  (((child -> __h_data ). Leaf ). __h_0_mem ) );
                                                                        true ;
                                                                      }) ) );
                                                                  // ----------
                                                                  
                                                                  ((__h_case_result ) ? ({ /* cicili#Progn11917 */
                                                                      maxLeaf (items );
                                                                    }) : ({ /* cicili#Let11921 */
                                                                      // ----------
                                                                      ;
                                                                      ({ /* cicili#Progn11923 */
                                                                        Nothing_BTree_int_User_pair_t ();
                                                                      });
                                                                    }));
                                                                });
                                                              }));
                                                          });
                                                        }));
                                                    });
                                                  });
                                                }) : ({ /* cicili#Let11928 */
                                                  // ----------
                                                  ;
                                                  ({ /* cicili#Progn11930 */
                                                    Nothing_BTree_int_User_pair_t ();
                                                  });
                                                }));
                                            });
                                          });
                                        }) : ({ /* cicili#Let11935 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Progn11937 */
                                            maxInternal (tail );
                                          });
                                        }));
                                    });
                                  });
                                }) : ({ /* cicili#Let11941 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Progn11943 */
                                    Nothing_BTree_int_User_pair_t ();
                                  });
                                }));
                            });
                          });
                        });
                      }) : ({ /* cicili#Let11948 */
                        // ----------
                        ;
                        ({ /* cicili#Progn11950 */
                          Nothing_BTree_int_User_pair_t ();
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let11955 */
                // ----------
                ;
                ({ /* cicili#Progn11957 */
                  Nothing_BTree_int_User_pair_t ();
                });
              }));
          });
        });
      });
  }
  Maybe_BTree_int_User_pair_t maxLeaf (List_BTree_int_User_pair_t current ) {
    return ({ /* cicili#Let11964 */
        __auto_type __h_matchbox  = current ;
        // ----------
        ({ /* cicili#Let11968 */
          __auto_type match11967  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match11967 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let11971 */
            bool __h_case_result  = (true  &&  (((match11967 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11972 */
                  (unboxed  =  (((match11967 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn11977 */
                ({ /* cicili#Let11981 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  ;
                  ({ /* cicili#Let11983 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn11984 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn11986 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn11991 */
                        ({ /* cicili#Let11994 */
                          __auto_type __h_matchbox  = tail ;
                          // ----------
                          ({ /* cicili#Let11998 */
                            __auto_type match11997  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                            typeof((((match11997 . __h_data ). Just ). __h_0_mem )) unboxed ;
                            // ----------
                            ;
                            ({ /* cicili#Let12001 */
                              bool __h_case_result  = (true  &&  (((match11997 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12002 */
                                    (unboxed  =  (((match11997 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* cicili#Progn12007 */
                                  ({ /* cicili#Let12011 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Let12013 */
                                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Nil_t  ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn12017 */
                                          Just_BTree_int_User_pair_t (head );
                                        }) : ({ /* cicili#Let12022 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Progn12024 */
                                            maxLeaf (tail );
                                          });
                                        }));
                                    });
                                  });
                                }) : ({ /* cicili#Let12028 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Progn12030 */
                                    Nothing_BTree_int_User_pair_t ();
                                  });
                                }));
                            });
                          });
                        });
                      }) : ({ /* cicili#Let12035 */
                        // ----------
                        ;
                        ({ /* cicili#Progn12037 */
                          Nothing_BTree_int_User_pair_t ();
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let12042 */
                // ----------
                ;
                ({ /* cicili#Progn12044 */
                  Nothing_BTree_int_User_pair_t ();
                });
              }));
          });
        });
      });
  }
  return ({ /* cicili#Let12050 */
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      ;
      ({ /* cicili#Let12052 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn12053 */
              (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn12058 */
            maxInternal (children );
          }) : ({ /* cicili#Let12062 */
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            ;
            ({ /* cicili#Let12064 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn12065 */
                    (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn12070 */
                  maxInternal (children );
                }) : ({ /* cicili#Let12074 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  ;
                  ({ /* cicili#Let12076 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn12077 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn12082 */
                        maxLeaf (items );
                      }) : ({ /* cicili#Let12086 */
                        // ----------
                        ;
                        ({ /* cicili#Progn12088 */
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
    return ({ /* cicili#Let12102 */
        __auto_type __h_matchbox  = first ;
        // ----------
        ({ /* cicili#Let12106 */
          __auto_type match12105  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match12105 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let12109 */
            bool __h_case_result  = (true  &&  (((match12105 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12110 */
                  (unboxed  =  (((match12105 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn12115 */
                ({ /* cicili#Let12119 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                  // ----------
                  ;
                  ({ /* cicili#Let12121 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn12122 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn12127 */
                        ({ /* cicili#Let12131 */
                          __auto_type match12130  = get_Rc_BTree_int_User (head );
                          typeof((((match12130 . __h_data ). Just ). __h_0_mem )) child ;
                          // ----------
                          ;
                          ({ /* cicili#Let12134 */
                            bool __h_case_result  = (true  &&  (((match12130 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12135 */
                                  (child  =  (((match12130 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn12140 */
                                ({ /* cicili#Let12144 */
                                  typeof((((child -> __h_data ). Branch ). __h_1_mem )) nchildren ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let12146 */
                                    bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn12147 */
                                          (nchildren  =  (((child -> __h_data ). Branch ). __h_1_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn12152 */
                                        minInternal (nchildren );
                                      }) : ({ /* cicili#Let12156 */
                                        typeof((((child -> __h_data ). Internal ). __h_1_mem )) nchildren ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let12158 */
                                          bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn12159 */
                                                (nchildren  =  (((child -> __h_data ). Internal ). __h_1_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn12164 */
                                              minInternal (nchildren );
                                            }) : ({ /* cicili#Let12168 */
                                              typeof((((child -> __h_data ). Leaf ). __h_0_mem )) items ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let12170 */
                                                bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn12171 */
                                                      (items  =  (((child -> __h_data ). Leaf ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn12176 */
                                                    minLeaf (items );
                                                  }) : ({ /* cicili#Let12180 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn12182 */
                                                      Nothing_BTree_int_User_pair_t ();
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let12187 */
                                // ----------
                                ;
                                ({ /* cicili#Progn12189 */
                                  Nothing_BTree_int_User_pair_t ();
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let12194 */
                        // ----------
                        ;
                        ({ /* cicili#Progn12196 */
                          Nothing_BTree_int_User_pair_t ();
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let12201 */
                // ----------
                ;
                ({ /* cicili#Progn12203 */
                  Nothing_BTree_int_User_pair_t ();
                });
              }));
          });
        });
      });
  }
  Maybe_BTree_int_User_pair_t minLeaf (List_BTree_int_User_pair_t first ) {
    return ({ /* cicili#Let12210 */
        __auto_type __h_matchbox  = first ;
        // ----------
        ({ /* cicili#Let12214 */
          __auto_type match12213  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match12213 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let12217 */
            bool __h_case_result  = (true  &&  (((match12213 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12218 */
                  (unboxed  =  (((match12213 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn12223 */
                ({ /* cicili#Let12227 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                  // ----------
                  ;
                  ({ /* cicili#Let12229 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn12230 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn12235 */
                        Just_BTree_int_User_pair_t (head );
                      }) : ({ /* cicili#Let12240 */
                        // ----------
                        ;
                        ({ /* cicili#Progn12242 */
                          Nothing_BTree_int_User_pair_t ();
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let12247 */
                // ----------
                ;
                ({ /* cicili#Progn12249 */
                  Nothing_BTree_int_User_pair_t ();
                });
              }));
          });
        });
      });
  }
  return ({ /* cicili#Let12255 */
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      ;
      ({ /* cicili#Let12257 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn12258 */
              (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn12263 */
            minInternal (children );
          }) : ({ /* cicili#Let12267 */
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            ;
            ({ /* cicili#Let12269 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn12270 */
                    (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn12275 */
                  minInternal (children );
                }) : ({ /* cicili#Let12279 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  ;
                  ({ /* cicili#Let12281 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn12282 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn12287 */
                        minLeaf (items );
                      }) : ({ /* cicili#Let12291 */
                        // ----------
                        ;
                        ({ /* cicili#Progn12293 */
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
    return ({ /* cicili#Let12309 */
        __auto_type __h_matchbox  = current ;
        // ----------
        ({ /* cicili#Let12313 */
          __auto_type match12312  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match12312 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let12316 */
            bool __h_case_result  = (true  &&  (((match12312 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12317 */
                  (unboxed  =  (((match12312 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn12322 */
                ({ /* cicili#Let12327 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                  typeof((head . __h_0_mem )) key ;
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  ;
                  ({ /* cicili#Let12329 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn12330 */
                              (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                              true ;
                            }) &&  (true  &&  ({ /* cicili#Progn12332 */
                                (key  =  (head . __h_0_mem ) );
                                true ;
                              }) ) ) &&  ({ /* cicili#Progn12334 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn12339 */
                        ({ /* cicili#Let12343 */
                          __auto_type match12342  = compareKey (skey , key );
                          // ----------
                          ;
                          ({ /* cicili#Let12345 */
                            bool __h_case_result  = (true  &&  ((match12342 . __h_ctor ) ==  __h_LT_t  ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn12349 */
                                ({ /* cicili#Let12353 */
                                  __auto_type match12352  = nth_List_Rc_BTree_int_User (index , children );
                                  typeof((((match12352 . __h_data ). Just ). __h_0_mem )) node ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let12356 */
                                    bool __h_case_result  = (true  &&  (((match12352 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12357 */
                                          (node  =  (((match12352 . __h_data ). Just ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn12362 */
                                        ({ /* cicili#Let12366 */
                                          __auto_type match12365  = get_Rc_BTree_int_User (node );
                                          typeof((((match12365 . __h_data ). Just ). __h_0_mem )) tr ;
                                          // ----------
                                          ;
                                          ({ /* cicili#Let12369 */
                                            bool __h_case_result  = (true  &&  (((match12365 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12370 */
                                                  (tr  =  (((match12365 . __h_data ). Just ). __h_0_mem ) );
                                                  true ;
                                                }) ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* cicili#Progn12375 */
                                                search_BTree_int_User (tr , skey );
                                              }) : ({ /* cicili#Let12380 */
                                                // ----------
                                                ;
                                                ({ /* cicili#Progn12382 */
                                                  Nothing_BTree_int_User_pair_t ();
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* cicili#Let12387 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn12389 */
                                          Nothing_BTree_int_User_pair_t ();
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let12394 */
                                // ----------
                                ;
                                ({ /* cicili#Let12396 */
                                  bool __h_case_result  = (true  &&  ((match12342 . __h_ctor ) ==  __h_EQ_t  ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn12400 */
                                      Just_BTree_int_User_pair_t (head );
                                    }) : ({ /* cicili#Let12405 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn12407 */
                                        ({ /* cicili#Let12410 */
                                          __auto_type __h_matchbox  = tail ;
                                          // ----------
                                          ({ /* cicili#Let12414 */
                                            __auto_type match12413  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                            typeof((((match12413 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                            // ----------
                                            ;
                                            ({ /* cicili#Let12417 */
                                              bool __h_case_result  = (true  &&  (((match12413 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12418 */
                                                    (unboxed  =  (((match12413 . __h_data ). Just ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              
                                              ((__h_case_result ) ? ({ /* cicili#Progn12423 */
                                                  ({ /* cicili#Let12427 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Let12429 */
                                                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Nil_t  ) );
                                                      // ----------
                                                      
                                                      ((__h_case_result ) ? ({ /* cicili#Progn12433 */
                                                          ({ /* cicili#Let12437 */
                                                            __auto_type match12436  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                            typeof((((match12436 . __h_data ). Just ). __h_0_mem )) node ;
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Let12440 */
                                                              bool __h_case_result  = (true  &&  (((match12436 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12441 */
                                                                    (node  =  (((match12436 . __h_data ). Just ). __h_0_mem ) );
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              
                                                              ((__h_case_result ) ? ({ /* cicili#Progn12446 */
                                                                  ({ /* cicili#Let12450 */
                                                                    __auto_type match12449  = get_Rc_BTree_int_User (node );
                                                                    typeof((((match12449 . __h_data ). Just ). __h_0_mem )) tr ;
                                                                    // ----------
                                                                    ;
                                                                    ({ /* cicili#Let12453 */
                                                                      bool __h_case_result  = (true  &&  (((match12449 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12454 */
                                                                            (tr  =  (((match12449 . __h_data ). Just ). __h_0_mem ) );
                                                                            true ;
                                                                          }) ) );
                                                                      // ----------
                                                                      
                                                                      ((__h_case_result ) ? ({ /* cicili#Progn12459 */
                                                                          search_BTree_int_User (tr , skey );
                                                                        }) : ({ /* cicili#Let12464 */
                                                                          // ----------
                                                                          ;
                                                                          ({ /* cicili#Progn12466 */
                                                                            Nothing_BTree_int_User_pair_t ();
                                                                          });
                                                                        }));
                                                                    });
                                                                  });
                                                                }) : ({ /* cicili#Let12471 */
                                                                  // ----------
                                                                  ;
                                                                  ({ /* cicili#Progn12473 */
                                                                    Nothing_BTree_int_User_pair_t ();
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        }) : ({ /* cicili#Let12478 */
                                                          // ----------
                                                          ;
                                                          ({ /* cicili#Progn12480 */
                                                            searchInternal (children , tail , (index  +  1 ));
                                                          });
                                                        }));
                                                    });
                                                  });
                                                }) : ({ /* cicili#Let12484 */
                                                  // ----------
                                                  ;
                                                  ({ /* cicili#Progn12486 */
                                                    Nothing_BTree_int_User_pair_t ();
                                                  });
                                                }));
                                            });
                                          });
                                        });
                                      });
                                    }));
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let12491 */
                        // ----------
                        ;
                        ({ /* cicili#Progn12493 */
                          Nothing_BTree_int_User_pair_t ();
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let12498 */
                // ----------
                ;
                ({ /* cicili#Progn12500 */
                  Nothing_BTree_int_User_pair_t ();
                });
              }));
          });
        });
      });
  }
  Maybe_BTree_int_User_pair_t searchLeaf (List_BTree_int_User_pair_t current , size_t index ) {
    return ({ /* cicili#Let12508 */
        __auto_type __h_matchbox  = current ;
        // ----------
        ({ /* cicili#Let12512 */
          __auto_type match12511  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match12511 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let12515 */
            bool __h_case_result  = (true  &&  (((match12511 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12516 */
                  (unboxed  =  (((match12511 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn12521 */
                ({ /* cicili#Let12526 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                  typeof((head . __h_0_mem )) key ;
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  ;
                  ({ /* cicili#Let12528 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn12529 */
                              (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                              true ;
                            }) &&  (true  &&  ({ /* cicili#Progn12531 */
                                (key  =  (head . __h_0_mem ) );
                                true ;
                              }) ) ) &&  ({ /* cicili#Progn12533 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn12538 */
                        ({ /* cicili#Let12542 */
                          __auto_type match12541  = compareKey (skey , key );
                          // ----------
                          ;
                          ({ /* cicili#Let12544 */
                            bool __h_case_result  = (true  &&  ((match12541 . __h_ctor ) ==  __h_EQ_t  ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn12548 */
                                Just_BTree_int_User_pair_t (head );
                              }) : ({ /* cicili#Let12553 */
                                // ----------
                                ;
                                ({ /* cicili#Progn12555 */
                                  ({ /* cicili#Let12558 */
                                    __auto_type __h_matchbox  = tail ;
                                    // ----------
                                    ({ /* cicili#Let12562 */
                                      __auto_type match12561  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                      typeof((((match12561 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                      // ----------
                                      ;
                                      ({ /* cicili#Let12565 */
                                        bool __h_case_result  = (true  &&  (((match12561 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12566 */
                                              (unboxed  =  (((match12561 . __h_data ). Just ). __h_0_mem ) );
                                              true ;
                                            }) ) );
                                        // ----------
                                        
                                        ((__h_case_result ) ? ({ /* cicili#Progn12571 */
                                            ({ /* cicili#Let12575 */
                                              // ----------
                                              ;
                                              ({ /* cicili#Let12577 */
                                                bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Nil_t  ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn12581 */
                                                    Nothing_BTree_int_User_pair_t ();
                                                  }) : ({ /* cicili#Let12586 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn12588 */
                                                      searchLeaf (tail , (index  +  1 ));
                                                    });
                                                  }));
                                              });
                                            });
                                          }) : ({ /* cicili#Let12592 */
                                            // ----------
                                            ;
                                            ({ /* cicili#Progn12594 */
                                              Nothing_BTree_int_User_pair_t ();
                                            });
                                          }));
                                      });
                                    });
                                  });
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let12599 */
                        // ----------
                        ;
                        ({ /* cicili#Progn12601 */
                          Nothing_BTree_int_User_pair_t ();
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let12606 */
                // ----------
                ;
                ({ /* cicili#Progn12608 */
                  Nothing_BTree_int_User_pair_t ();
                });
              }));
          });
        });
      });
  }
  return ({ /* cicili#Let12614 */
      typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      ;
      ({ /* cicili#Let12616 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn12617 */
                (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn12619 */
                (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn12624 */
            searchInternal (children , items , 0);
          }) : ({ /* cicili#Let12628 */
            typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            ;
            ({ /* cicili#Let12630 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn12631 */
                      (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn12633 */
                      (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn12638 */
                  searchInternal (children , items , 0);
                }) : ({ /* cicili#Let12642 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  ;
                  ({ /* cicili#Let12644 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn12645 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn12650 */
                        searchLeaf (items , 0);
                      }) : ({ /* cicili#Let12654 */
                        // ----------
                        ;
                        ({ /* cicili#Progn12656 */
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
    { /* cicili#Block12668 */
      return Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_INVALID_ORDER (5));
    }
  Either_BTree_int_User_Error_BTree_int_User insertInternal (List_BTree_int_User_pair_t items , List_Rc_BTree_int_User children , List_BTree_int_User_pair_t current , size_t index ) {
    return ({ /* cicili#Let12678 */
        __auto_type __h_matchbox  = current ;
        // ----------
        ({ /* cicili#Let12682 */
          __auto_type match12681  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match12681 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let12685 */
            bool __h_case_result  = (true  &&  (((match12681 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12686 */
                  (unboxed  =  (((match12681 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn12691 */
                ({ /* cicili#Let12696 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                  typeof((head . __h_0_mem )) key ;
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  ;
                  ({ /* cicili#Let12698 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn12699 */
                              (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                              true ;
                            }) &&  (true  &&  ({ /* cicili#Progn12701 */
                                (key  =  (head . __h_0_mem ) );
                                true ;
                              }) ) ) &&  ({ /* cicili#Progn12703 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn12708 */
                        ({ /* cicili#Let12712 */
                          __auto_type match12711  = compareKey (skey , key );
                          // ----------
                          ;
                          ({ /* cicili#Let12714 */
                            bool __h_case_result  = (true  &&  ((match12711 . __h_ctor ) ==  __h_LT_t  ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn12718 */
                                ({ /* cicili#Let12722 */
                                  __auto_type match12721  = nth_List_Rc_BTree_int_User (index , children );
                                  typeof((((match12721 . __h_data ). Just ). __h_0_mem )) child ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let12725 */
                                    bool __h_case_result  = (true  &&  (((match12721 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12726 */
                                          (child  =  (((match12721 . __h_data ). Just ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn12731 */
                                        ({ /* cicili#Let12735 */
                                          __auto_type match12734  = get_Rc_BTree_int_User (child );
                                          typeof((((match12734 . __h_data ). Just ). __h_0_mem )) tr ;
                                          // ----------
                                          ;
                                          ({ /* cicili#Let12738 */
                                            bool __h_case_result  = (true  &&  (((match12734 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12739 */
                                                  (tr  =  (((match12734 . __h_data ). Just ). __h_0_mem ) );
                                                  true ;
                                                }) ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* cicili#Progn12744 */
                                                ({ /* cicili#Let12748 */
                                                  __auto_type match12747  = insert_BTree_int_User (tr , skey , svalue );
                                                  typeof((((match12747 . __h_data ). Right ). __h_0_mem )) child_tree ;
                                                  // ----------
                                                  ;
                                                  ({ /* cicili#Let12751 */
                                                    bool __h_case_result  = (true  &&  (((match12747 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn12752 */
                                                          (child_tree  =  (((match12747 . __h_data ). Right ). __h_0_mem ) );
                                                          true ;
                                                        }) ) );
                                                    // ----------
                                                    
                                                    ((__h_case_result ) ? ({ /* cicili#Progn12757 */
                                                        ({ /* cicili#Let12761 */
                                                          typeof((((child_tree -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                                          typeof((((child_tree -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                                          // ----------
                                                          ;
                                                          ({ /* cicili#Let12763 */
                                                            bool __h_case_result  = (true  &&  (((child_tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn12764 */
                                                                    (child_items  =  (((child_tree -> __h_data ). Branch ). __h_0_mem ) );
                                                                    true ;
                                                                  }) &&  ({ /* cicili#Progn12766 */
                                                                    (child_children  =  (((child_tree -> __h_data ). Branch ). __h_1_mem ) );
                                                                    true ;
                                                                  }) ) ) );
                                                            // ----------
                                                            
                                                            ((__h_case_result ) ? ({ /* cicili#Progn12771 */
                                                                ({ /* cicili#Let12774 */
                                                                  __auto_type __h_matchbox  = child_items ;
                                                                  // ----------
                                                                  ({ /* cicili#Let12778 */
                                                                    __auto_type match12777  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                    typeof((((match12777 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                    // ----------
                                                                    ;
                                                                    ({ /* cicili#Let12781 */
                                                                      bool __h_case_result  = (true  &&  (((match12777 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12782 */
                                                                            (unboxed  =  (((match12777 . __h_data ). Just ). __h_0_mem ) );
                                                                            true ;
                                                                          }) ) );
                                                                      // ----------
                                                                      
                                                                      ((__h_case_result ) ? ({ /* cicili#Progn12787 */
                                                                          ({ /* cicili#Let12791 */
                                                                            typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) single_item ;
                                                                            typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) nil_tail ;
                                                                            // ----------
                                                                            ;
                                                                            ({ /* cicili#Let12793 */
                                                                              bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn12794 */
                                                                                      (single_item  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                                                                                      true ;
                                                                                    }) &&  ({ /* cicili#Progn12796 */
                                                                                      (nil_tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                                                                                      true ;
                                                                                    }) ) ) );
                                                                              // ----------
                                                                              
                                                                              ((__h_case_result ) ? ({ /* cicili#Progn12801 */
                                                                                  ({ /* cicili#Let12804 */
                                                                                    __auto_type __h_matchbox  = nil_tail ;
                                                                                    // ----------
                                                                                    ({ /* cicili#Let12808 */
                                                                                      __auto_type match12807  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                      typeof((((match12807 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                      // ----------
                                                                                      ;
                                                                                      ({ /* cicili#Let12811 */
                                                                                        bool __h_case_result  = (true  &&  (((match12807 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12812 */
                                                                                              (unboxed  =  (((match12807 . __h_data ). Just ). __h_0_mem ) );
                                                                                              true ;
                                                                                            }) ) );
                                                                                        // ----------
                                                                                        
                                                                                        ((__h_case_result ) ? ({ /* cicili#Progn12817 */
                                                                                            ({ /* cicili#Let12821 */
                                                                                              // ----------
                                                                                              ;
                                                                                              ({ /* cicili#Let12823 */
                                                                                                bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Nil_t  ) );
                                                                                                // ----------
                                                                                                
                                                                                                ((__h_case_result ) ? ({ /* cicili#Progn12827 */
                                                                                                    ({ /* cicili#Let12830 */
                                                                                                      __auto_type child_tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12832 */
                                                                                                        __auto_type child_tree  = child_tree ;
                                                                                                        // ----------
                                                                                                        ((void)(child_tree -> __h_table -> freeClass ));
                                                                                                        child_tree ;
                                                                                                      });
                                                                                                      // ----------
                                                                                                      Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (insert_List_BTree_int_User_pair_t (items , single_item , current ), ({ /* cicili#Let12841 */
                                                                                                          __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let12843 */
                                                                                                            __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                                                                                            // ----------
                                                                                                            ((void)((r1 . __h_table )-> freeData ));
                                                                                                            r1 ;
                                                                                                          });
                                                                                                          __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let12847 */
                                                                                                            __auto_type r2  = drop_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                                                            // ----------
                                                                                                            ((void)((r2 . __h_table )-> freeData ));
                                                                                                            r2 ;
                                                                                                          });
                                                                                                          __auto_type r3  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let12851 */
                                                                                                            __auto_type r3  = append_List_Rc_BTree_int_User (child_children , r2 );
                                                                                                            // ----------
                                                                                                            ((void)((r3 . __h_table )-> freeData ));
                                                                                                            r3 ;
                                                                                                          });
                                                                                                          __auto_type r4  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let12855 */
                                                                                                            __auto_type r4  = append_List_Rc_BTree_int_User (r1 , r3 );
                                                                                                            // ----------
                                                                                                            ((void)((r4 . __h_table )-> freeData ));
                                                                                                            r4 ;
                                                                                                          });
                                                                                                          // ----------
                                                                                                          fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn12864 */
                                                                                                              Rc_BTree_int_User __ciciliC_12863 (Rc_BTree_int_User __h_value ) {
                                                                                                                return clone_Rc_BTree_int_User (__h_value );
                                                                                                              }
                                                                                                              __ciciliC_12863 ;
                                                                                                            }), r4 );
                                                                                                        })));
                                                                                                    });
                                                                                                  }) : ({ /* cicili#Let12871 */
                                                                                                    // ----------
                                                                                                    ;
                                                                                                    ({ /* cicili#Progn12873 */
                                                                                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_INVALID_BRANCH (child_tree ));
                                                                                                    });
                                                                                                  }));
                                                                                              });
                                                                                            });
                                                                                          }) : ({ /* cicili#Let12880 */
                                                                                            // ----------
                                                                                            ;
                                                                                            ({ /* cicili#Progn12882 */
                                                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CONS ());
                                                                                            });
                                                                                          }));
                                                                                      });
                                                                                    });
                                                                                  });
                                                                                }) : ({ /* cicili#Let12889 */
                                                                                  // ----------
                                                                                  ;
                                                                                  ({ /* cicili#Progn12891 */
                                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_INVALID_BRANCH (child_tree ));
                                                                                  });
                                                                                }));
                                                                            });
                                                                          });
                                                                        }) : ({ /* cicili#Let12898 */
                                                                          // ----------
                                                                          ;
                                                                          ({ /* cicili#Progn12900 */
                                                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CONS ());
                                                                          });
                                                                        }));
                                                                    });
                                                                  });
                                                                });
                                                              }) : ({ /* cicili#Let12907 */
                                                                // ----------
                                                                ;
                                                                ({ /* cicili#Let12909 */
                                                                  bool __h_case_result  = (true  &&  ((child_tree -> __h_ctor ) ==  __h_Internal_t  ) );
                                                                  // ----------
                                                                  
                                                                  ((__h_case_result ) ? ({ /* cicili#Progn12913 */
                                                                      Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (clone_Box_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let12921 */
                                                                          __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let12923 */
                                                                            __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                                                            // ----------
                                                                            ((void)((r1 . __h_table )-> freeData ));
                                                                            r1 ;
                                                                          });
                                                                          __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let12927 */
                                                                            __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn12933 */
                                                                              Rc_BTree_int_User __ciciliC_12932 (Rc_BTree_int_User __h_value ) {
                                                                                return clone_Rc_BTree_int_User (__h_value );
                                                                              }
                                                                              __ciciliC_12932 ;
                                                                            }), r1 );
                                                                            // ----------
                                                                            ((void)((r2 . __h_table )-> freeData ));
                                                                            r2 ;
                                                                          });
                                                                          __auto_type r3  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let12940 */
                                                                            __auto_type r3  = drop_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                            // ----------
                                                                            ((void)((r3 . __h_table )-> freeData ));
                                                                            r3 ;
                                                                          });
                                                                          __auto_type r4  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let12944 */
                                                                            __auto_type r4  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn12950 */
                                                                              Rc_BTree_int_User __ciciliC_12949 (Rc_BTree_int_User __h_value ) {
                                                                                return clone_Rc_BTree_int_User (__h_value );
                                                                              }
                                                                              __ciciliC_12949 ;
                                                                            }), r3 );
                                                                            // ----------
                                                                            ((void)((r4 . __h_table )-> freeData ));
                                                                            r4 ;
                                                                          });
                                                                          __auto_type r5  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let12957 */
                                                                            __auto_type r5  = push_List_Rc_BTree_int_User (new_Rc_BTree_int_User (child_tree ), r4 );
                                                                            // ----------
                                                                            ((void)((r5 . __h_table )-> freeData ));
                                                                            r5 ;
                                                                          });
                                                                          // ----------
                                                                          append_List_Rc_BTree_int_User (r2 , r5 );
                                                                        })));
                                                                    }) : ({ /* cicili#Let12965 */
                                                                      // ----------
                                                                      ;
                                                                      ({ /* cicili#Progn12967 */
                                                                        Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (clone_Box_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let12975 */
                                                                            __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let12977 */
                                                                              __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                                                              // ----------
                                                                              ((void)((r1 . __h_table )-> freeData ));
                                                                              r1 ;
                                                                            });
                                                                            __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let12981 */
                                                                              __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn12987 */
                                                                                Rc_BTree_int_User __ciciliC_12986 (Rc_BTree_int_User __h_value ) {
                                                                                  return clone_Rc_BTree_int_User (__h_value );
                                                                                }
                                                                                __ciciliC_12986 ;
                                                                              }), r1 );
                                                                              // ----------
                                                                              ((void)((r2 . __h_table )-> freeData ));
                                                                              r2 ;
                                                                            });
                                                                            __auto_type r3  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let12994 */
                                                                              __auto_type r3  = drop_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                              // ----------
                                                                              ((void)((r3 . __h_table )-> freeData ));
                                                                              r3 ;
                                                                            });
                                                                            __auto_type r4  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let12998 */
                                                                              __auto_type r4  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn13004 */
                                                                                Rc_BTree_int_User __ciciliC_13003 (Rc_BTree_int_User __h_value ) {
                                                                                  return clone_Rc_BTree_int_User (__h_value );
                                                                                }
                                                                                __ciciliC_13003 ;
                                                                              }), r3 );
                                                                              // ----------
                                                                              ((void)((r4 . __h_table )-> freeData ));
                                                                              r4 ;
                                                                            });
                                                                            __auto_type r5  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let13011 */
                                                                              __auto_type r5  = push_List_Rc_BTree_int_User (new_Rc_BTree_int_User (child_tree ), r4 );
                                                                              // ----------
                                                                              ((void)((r5 . __h_table )-> freeData ));
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
                                                      }) : ({ /* cicili#Let13019 */
                                                        __auto_type left  = match12747 ;
                                                        // ----------
                                                        ;
                                                        ({ /* cicili#Progn13021 */
                                                          left ;
                                                        });
                                                      }));
                                                  });
                                                });
                                              }) : ({ /* cicili#Let13025 */
                                                // ----------
                                                ;
                                                ({ /* cicili#Progn13027 */
                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CHILD (head , index ));
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* cicili#Let13034 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn13036 */
                                          Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (insert_List_BTree_int_User_pair_t (items , ((BTree_int_User_pair_t){ skey , svalue }), current )));
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let13046 */
                                // ----------
                                ;
                                ({ /* cicili#Let13048 */
                                  bool __h_case_result  = (true  &&  ((match12711 . __h_ctor ) ==  __h_EQ_t  ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn13052 */
                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_UNIQUE_KEY (head ));
                                    }) : ({ /* cicili#Let13059 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn13061 */
                                        insertInternal (items , children , tail , (index  +  1 ));
                                      });
                                    }));
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let13065 */
                        // ----------
                        ;
                        ({ /* cicili#Progn13067 */
                          ({ /* cicili#Let13071 */
                            __auto_type match13070  = nth_List_Rc_BTree_int_User (index , children );
                            typeof((((match13070 . __h_data ). Just ). __h_0_mem )) child ;
                            // ----------
                            ;
                            ({ /* cicili#Let13074 */
                              bool __h_case_result  = (true  &&  (((match13070 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn13075 */
                                    (child  =  (((match13070 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* cicili#Progn13080 */
                                  ({ /* cicili#Let13084 */
                                    __auto_type match13083  = get_Rc_BTree_int_User (child );
                                    typeof((((match13083 . __h_data ). Just ). __h_0_mem )) tr ;
                                    // ----------
                                    ;
                                    ({ /* cicili#Let13087 */
                                      bool __h_case_result  = (true  &&  (((match13083 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn13088 */
                                            (tr  =  (((match13083 . __h_data ). Just ). __h_0_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn13093 */
                                          ({ /* cicili#Let13097 */
                                            __auto_type match13096  = insert_BTree_int_User (tr , skey , svalue );
                                            typeof((((match13096 . __h_data ). Right ). __h_0_mem )) child_tree ;
                                            // ----------
                                            ;
                                            ({ /* cicili#Let13100 */
                                              bool __h_case_result  = (true  &&  (((match13096 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn13101 */
                                                    (child_tree  =  (((match13096 . __h_data ). Right ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              
                                              ((__h_case_result ) ? ({ /* cicili#Progn13106 */
                                                  ({ /* cicili#Let13110 */
                                                    typeof((((child_tree -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                                    typeof((((child_tree -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Let13112 */
                                                      bool __h_case_result  = (true  &&  (((child_tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn13113 */
                                                              (child_items  =  (((child_tree -> __h_data ). Branch ). __h_0_mem ) );
                                                              true ;
                                                            }) &&  ({ /* cicili#Progn13115 */
                                                              (child_children  =  (((child_tree -> __h_data ). Branch ). __h_1_mem ) );
                                                              true ;
                                                            }) ) ) );
                                                      // ----------
                                                      
                                                      ((__h_case_result ) ? ({ /* cicili#Progn13120 */
                                                          ({ /* cicili#Let13123 */
                                                            __auto_type __h_matchbox  = child_items ;
                                                            // ----------
                                                            ({ /* cicili#Let13127 */
                                                              __auto_type match13126  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                              typeof((((match13126 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                              // ----------
                                                              ;
                                                              ({ /* cicili#Let13130 */
                                                                bool __h_case_result  = (true  &&  (((match13126 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn13131 */
                                                                      (unboxed  =  (((match13126 . __h_data ). Just ). __h_0_mem ) );
                                                                      true ;
                                                                    }) ) );
                                                                // ----------
                                                                
                                                                ((__h_case_result ) ? ({ /* cicili#Progn13136 */
                                                                    ({ /* cicili#Let13140 */
                                                                      typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) single_item ;
                                                                      typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) nil_tail ;
                                                                      // ----------
                                                                      ;
                                                                      ({ /* cicili#Let13142 */
                                                                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn13143 */
                                                                                (single_item  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                                                                                true ;
                                                                              }) &&  ({ /* cicili#Progn13145 */
                                                                                (nil_tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                                                                                true ;
                                                                              }) ) ) );
                                                                        // ----------
                                                                        
                                                                        ((__h_case_result ) ? ({ /* cicili#Progn13150 */
                                                                            ({ /* cicili#Let13153 */
                                                                              __auto_type __h_matchbox  = nil_tail ;
                                                                              // ----------
                                                                              ({ /* cicili#Let13157 */
                                                                                __auto_type match13156  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                typeof((((match13156 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                // ----------
                                                                                ;
                                                                                ({ /* cicili#Let13160 */
                                                                                  bool __h_case_result  = (true  &&  (((match13156 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn13161 */
                                                                                        (unboxed  =  (((match13156 . __h_data ). Just ). __h_0_mem ) );
                                                                                        true ;
                                                                                      }) ) );
                                                                                  // ----------
                                                                                  
                                                                                  ((__h_case_result ) ? ({ /* cicili#Progn13166 */
                                                                                      ({ /* cicili#Let13170 */
                                                                                        // ----------
                                                                                        ;
                                                                                        ({ /* cicili#Let13172 */
                                                                                          bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Nil_t  ) );
                                                                                          // ----------
                                                                                          
                                                                                          ((__h_case_result ) ? ({ /* cicili#Progn13176 */
                                                                                              ({ /* cicili#Let13179 */
                                                                                                __auto_type child_tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let13181 */
                                                                                                  __auto_type child_tree  = child_tree ;
                                                                                                  // ----------
                                                                                                  ((void)(child_tree -> __h_table -> freeClass ));
                                                                                                  child_tree ;
                                                                                                });
                                                                                                // ----------
                                                                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (insert_List_BTree_int_User_pair_t (items , single_item , current ), ({ /* cicili#Let13190 */
                                                                                                    __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let13192 */
                                                                                                      __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                                                                                      // ----------
                                                                                                      ((void)((r1 . __h_table )-> freeData ));
                                                                                                      r1 ;
                                                                                                    });
                                                                                                    __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let13196 */
                                                                                                      __auto_type r2  = drop_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                                                      // ----------
                                                                                                      ((void)((r2 . __h_table )-> freeData ));
                                                                                                      r2 ;
                                                                                                    });
                                                                                                    __auto_type r3  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let13200 */
                                                                                                      __auto_type r3  = append_List_Rc_BTree_int_User (child_children , r2 );
                                                                                                      // ----------
                                                                                                      ((void)((r3 . __h_table )-> freeData ));
                                                                                                      r3 ;
                                                                                                    });
                                                                                                    __auto_type r4  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let13204 */
                                                                                                      __auto_type r4  = append_List_Rc_BTree_int_User (r1 , r3 );
                                                                                                      // ----------
                                                                                                      ((void)((r4 . __h_table )-> freeData ));
                                                                                                      r4 ;
                                                                                                    });
                                                                                                    // ----------
                                                                                                    fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn13213 */
                                                                                                        Rc_BTree_int_User __ciciliC_13212 (Rc_BTree_int_User __h_value ) {
                                                                                                          return clone_Rc_BTree_int_User (__h_value );
                                                                                                        }
                                                                                                        __ciciliC_13212 ;
                                                                                                      }), r4 );
                                                                                                  })));
                                                                                              });
                                                                                            }) : ({ /* cicili#Let13220 */
                                                                                              // ----------
                                                                                              ;
                                                                                              ({ /* cicili#Progn13222 */
                                                                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_INVALID_BRANCH (child_tree ));
                                                                                              });
                                                                                            }));
                                                                                        });
                                                                                      });
                                                                                    }) : ({ /* cicili#Let13229 */
                                                                                      // ----------
                                                                                      ;
                                                                                      ({ /* cicili#Progn13231 */
                                                                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CONS ());
                                                                                      });
                                                                                    }));
                                                                                });
                                                                              });
                                                                            });
                                                                          }) : ({ /* cicili#Let13238 */
                                                                            // ----------
                                                                            ;
                                                                            ({ /* cicili#Progn13240 */
                                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_INVALID_BRANCH (child_tree ));
                                                                            });
                                                                          }));
                                                                      });
                                                                    });
                                                                  }) : ({ /* cicili#Let13247 */
                                                                    // ----------
                                                                    ;
                                                                    ({ /* cicili#Progn13249 */
                                                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CONS ());
                                                                    });
                                                                  }));
                                                              });
                                                            });
                                                          });
                                                        }) : ({ /* cicili#Let13256 */
                                                          // ----------
                                                          ;
                                                          ({ /* cicili#Let13258 */
                                                            bool __h_case_result  = (true  &&  ((child_tree -> __h_ctor ) ==  __h_Internal_t  ) );
                                                            // ----------
                                                            
                                                            ((__h_case_result ) ? ({ /* cicili#Progn13262 */
                                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (clone_Box_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let13270 */
                                                                    __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let13272 */
                                                                      __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                                                      // ----------
                                                                      ((void)((r1 . __h_table )-> freeData ));
                                                                      r1 ;
                                                                    });
                                                                    __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let13276 */
                                                                      __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn13282 */
                                                                        Rc_BTree_int_User __ciciliC_13281 (Rc_BTree_int_User __h_value ) {
                                                                          return clone_Rc_BTree_int_User (__h_value );
                                                                        }
                                                                        __ciciliC_13281 ;
                                                                      }), r1 );
                                                                      // ----------
                                                                      ((void)((r2 . __h_table )-> freeData ));
                                                                      r2 ;
                                                                    });
                                                                    __auto_type r3  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let13289 */
                                                                      __auto_type r3  = wrap_List_Rc_BTree_int_User (new_Rc_BTree_int_User (child_tree ));
                                                                      // ----------
                                                                      ((void)((r3 . __h_table )-> freeData ));
                                                                      r3 ;
                                                                    });
                                                                    // ----------
                                                                    append_List_Rc_BTree_int_User (r2 , r3 );
                                                                  })));
                                                              }) : ({ /* cicili#Let13297 */
                                                                // ----------
                                                                ;
                                                                ({ /* cicili#Progn13299 */
                                                                  Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (clone_Box_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let13307 */
                                                                      __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let13309 */
                                                                        __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                                                        // ----------
                                                                        ((void)((r1 . __h_table )-> freeData ));
                                                                        r1 ;
                                                                      });
                                                                      __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let13313 */
                                                                        __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn13319 */
                                                                          Rc_BTree_int_User __ciciliC_13318 (Rc_BTree_int_User __h_value ) {
                                                                            return clone_Rc_BTree_int_User (__h_value );
                                                                          }
                                                                          __ciciliC_13318 ;
                                                                        }), r1 );
                                                                        // ----------
                                                                        ((void)((r2 . __h_table )-> freeData ));
                                                                        r2 ;
                                                                      });
                                                                      __auto_type r3  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let13326 */
                                                                        __auto_type r3  = wrap_List_Rc_BTree_int_User (new_Rc_BTree_int_User (child_tree ));
                                                                        // ----------
                                                                        ((void)((r3 . __h_table )-> freeData ));
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
                                                }) : ({ /* cicili#Let13334 */
                                                  __auto_type left  = match13096 ;
                                                  // ----------
                                                  ;
                                                  ({ /* cicili#Progn13336 */
                                                    left ;
                                                  });
                                                }));
                                            });
                                          });
                                        }) : ({ /* cicili#Let13340 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Progn13342 */
                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CHILD (head , index ));
                                          });
                                        }));
                                    });
                                  });
                                }) : ({ /* cicili#Let13349 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Progn13351 */
                                    Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (({ /* cicili#Let13358 */
                                        __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let13360 */
                                          __auto_type r1  = wrap_List_BTree_int_User_pair_t (((BTree_int_User_pair_t){ skey , svalue }));
                                          // ----------
                                          ((void)((r1 . __h_table )-> freeData ));
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
              }) : ({ /* cicili#Let13368 */
                // ----------
                ;
                ({ /* cicili#Progn13370 */
                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CONS ());
                });
              }));
          });
        });
      });
  }
  Either_BTree_int_User_Error_BTree_int_User insertLeaf (List_BTree_int_User_pair_t items , List_BTree_int_User_pair_t current , size_t index ) {
    return ({ /* cicili#Let13383 */
        __auto_type __h_matchbox  = current ;
        // ----------
        ({ /* cicili#Let13387 */
          __auto_type match13386  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match13386 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let13390 */
            bool __h_case_result  = (true  &&  (((match13386 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn13391 */
                  (unboxed  =  (((match13386 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn13396 */
                ({ /* cicili#Let13401 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                  typeof((head . __h_0_mem )) key ;
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  ;
                  ({ /* cicili#Let13403 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn13404 */
                              (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                              true ;
                            }) &&  (true  &&  ({ /* cicili#Progn13406 */
                                (key  =  (head . __h_0_mem ) );
                                true ;
                              }) ) ) &&  ({ /* cicili#Progn13408 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn13413 */
                        ({ /* cicili#Let13417 */
                          __auto_type match13416  = compareKey (skey , key );
                          // ----------
                          ;
                          ({ /* cicili#Let13419 */
                            bool __h_case_result  = (true  &&  ((match13416 . __h_ctor ) ==  __h_LT_t  ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn13423 */
                                Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (insert_List_BTree_int_User_pair_t (items , ((BTree_int_User_pair_t){ skey , svalue }), current )));
                              }) : ({ /* cicili#Let13433 */
                                // ----------
                                ;
                                ({ /* cicili#Let13435 */
                                  bool __h_case_result  = (true  &&  ((match13416 . __h_ctor ) ==  __h_EQ_t  ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn13439 */
                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_UNIQUE_KEY (head ));
                                    }) : ({ /* cicili#Let13446 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn13448 */
                                        insertLeaf (items , tail , (index  +  1 ));
                                      });
                                    }));
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let13452 */
                        // ----------
                        ;
                        ({ /* cicili#Progn13454 */
                          Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (({ /* cicili#Let13461 */
                              __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let13463 */
                                __auto_type r1  = wrap_List_BTree_int_User_pair_t (((BTree_int_User_pair_t){ skey , svalue }));
                                // ----------
                                ((void)((r1 . __h_table )-> freeData ));
                                r1 ;
                              });
                              // ----------
                              append_List_BTree_int_User_pair_t (items , r1 );
                            })));
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let13471 */
                // ----------
                ;
                ({ /* cicili#Progn13473 */
                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CONS ());
                });
              }));
          });
        });
      });
  }
  return ({ /* cicili#Let13482 */
      typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      ;
      ({ /* cicili#Let13484 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn13485 */
                (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn13487 */
                (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn13492 */
            ({ /* cicili#Let13496 */
              __auto_type match13495  = insertInternal (items , children , items , 0);
              typeof((((match13495 . __h_data ). Right ). __h_0_mem )) tr ;
              // ----------
              ;
              ({ /* cicili#Let13498 */
                bool __h_case_result  = (true  &&  (((match13495 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn13499 */
                      (tr  =  (((match13495 . __h_data ). Right ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn13504 */
                    Right_BTree_int_User_Error_BTree_int_User (split_BTree_int_User (tr ));
                  }) : ({ /* cicili#Let13511 */
                    __auto_type left  = match13495 ;
                    // ----------
                    ;
                    ({ /* cicili#Progn13513 */
                      left ;
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let13517 */
            typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            ;
            ({ /* cicili#Let13519 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn13520 */
                      (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn13522 */
                      (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn13527 */
                  ({ /* cicili#Let13531 */
                    __auto_type match13530  = insertInternal (items , children , items , 0);
                    typeof((((match13530 . __h_data ). Right ). __h_0_mem )) tr ;
                    // ----------
                    ;
                    ({ /* cicili#Let13533 */
                      bool __h_case_result  = (true  &&  (((match13530 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn13534 */
                            (tr  =  (((match13530 . __h_data ). Right ). __h_0_mem ) );
                            true ;
                          }) ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* cicili#Progn13539 */
                          Right_BTree_int_User_Error_BTree_int_User (split_BTree_int_User (tr ));
                        }) : ({ /* cicili#Let13546 */
                          __auto_type left  = match13530 ;
                          // ----------
                          ;
                          ({ /* cicili#Progn13548 */
                            left ;
                          });
                        }));
                    });
                  });
                }) : ({ /* cicili#Let13552 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  ;
                  ({ /* cicili#Let13554 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn13555 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn13560 */
                        ({ /* cicili#Let13564 */
                          __auto_type match13563  = insertLeaf (items , items , 0);
                          typeof((((match13563 . __h_data ). Right ). __h_0_mem )) tr ;
                          // ----------
                          ;
                          ({ /* cicili#Let13566 */
                            bool __h_case_result  = (true  &&  (((match13563 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn13567 */
                                  (tr  =  (((match13563 . __h_data ). Right ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn13572 */
                                Right_BTree_int_User_Error_BTree_int_User (split_BTree_int_User (tr ));
                              }) : ({ /* cicili#Let13579 */
                                __auto_type left  = match13563 ;
                                // ----------
                                ;
                                ({ /* cicili#Progn13581 */
                                  left ;
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let13585 */
                        // ----------
                        ;
                        ({ /* cicili#Progn13587 */
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
  { /* cicili#Let13596 */
    __auto_type this  = (*this_ptr );
    // ----------
    void freeChildren (List_Rc_BTree_int_User children ) {
      ({ /* cicili#Let13600 */
        __auto_type __h_matchbox  = children ;
        // ----------
        { /* cicili#Let13604 */
          __auto_type match13603  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match13603 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let13607 */
            bool __h_case_result  = (true  &&  (((match13603 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn13608 */
                  (unboxed  =  (((match13603 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block13614 */
                { /* cicili#Let13618 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  ;
                  ({ /* cicili#Let13620 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn13621 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn13623 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block13629 */
                        { /* cicili#Block13631 */
                          free_Rc_BTree_int_User (&head );
                          freeChildren (tail );
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let13637 */
                // ----------
                ;
                ({ /* cicili#Let13639 */
                  bool __h_case_result  = (true  &&  ((match13603 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block13644 */
                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CONS ());
                    }
                });
              }
          });
        }
      });
    }
    { /* cicili#Let13652 */
      typeof((((this -> __h_data ). Branch ). __h_0_mem )) items ;
      typeof((((this -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      ;
      ({ /* cicili#Let13654 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn13655 */
                (items  =  (((this -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn13657 */
                (children  =  (((this -> __h_data ). Branch ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block13663 */
            { /* cicili#Block13665 */
              free_Box_List_BTree_int_User_pair_t ((&items ));
              freeChildren (children );
              free_Box_List_Rc_BTree_int_User ((&children ));
              free (this );
            }
          }
        else
          { /* cicili#Let13676 */
            typeof((((this -> __h_data ). Internal ). __h_0_mem )) items ;
            typeof((((this -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            ;
            ({ /* cicili#Let13678 */
              bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn13679 */
                      (items  =  (((this -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn13681 */
                      (children  =  (((this -> __h_data ). Internal ). __h_1_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block13687 */
                  { /* cicili#Block13689 */
                    free_Box_List_BTree_int_User_pair_t ((&items ));
                    freeChildren (children );
                    free_Box_List_Rc_BTree_int_User ((&children ));
                    free (this );
                  }
                }
              else
                { /* cicili#Let13700 */
                  typeof((((this -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  ;
                  ({ /* cicili#Let13702 */
                    bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn13703 */
                          (items  =  (((this -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block13709 */
                        { /* cicili#Block13711 */
                          free_Box_List_BTree_int_User_pair_t ((&items ));
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
  { /* cicili#Let13723 */
    BTree_int_User instance  = malloc (sizeof(class_BTree_int_User));
    // ----------
    (*instance ) = ((class_BTree_int_User){ get_BTree_int_User__H_Table (), __h_Branch_t , .__h_data.Branch = { items , children }});
    return instance ;
  }
}
BTree_int_User Internal_BTree_int_User (List_BTree_int_User_pair_t items , List_Rc_BTree_int_User children ) {
  { /* cicili#Let13731 */
    BTree_int_User instance  = malloc (sizeof(class_BTree_int_User));
    // ----------
    (*instance ) = ((class_BTree_int_User){ get_BTree_int_User__H_Table (), __h_Internal_t , .__h_data.Internal = { items , children }});
    return instance ;
  }
}
BTree_int_User Leaf_BTree_int_User (List_BTree_int_User_pair_t items ) {
  { /* cicili#Let13739 */
    BTree_int_User instance  = malloc (sizeof(class_BTree_int_User));
    // ----------
    (*instance ) = ((class_BTree_int_User){ get_BTree_int_User__H_Table (), __h___t , .__h_data._ = { items }});
    return instance ;
  }
}
#endif /* __BTree_int_User__H_IMPL__ */ 
void insertMany (BTree_int_User * pwtree , int from , int to ) {
  { /* cicili#Let13745 */
    char keyStr [10];
    // ----------
    for (int i  = from ; (i  <=  to  ); (++i )) {
        sprintf (keyStr , "%d", i );
        { /* cicili#Let13749 */
          String name  = ({ /* cicili#Let13751 */
            __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let13753 */
              __auto_type r1  = new_String_Const ("User ");
              // ----------
              ((void)(r1 -> __h_table -> freeClass ));
              r1 ;
            });
            __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let13756 */
              __auto_type r2  = new_String_Const (keyStr );
              // ----------
              ((void)(r2 -> __h_table -> freeClass ));
              r2 ;
            });
            // ----------
            append_String (r1 , r2 );
          });
          // ----------
          { /* cicili#Let13762 */
            __auto_type match13761  = insert_BTree_int_User ((*pwtree ), i , ((User){ new_Cell_String (name ), (i  +  2000 )}));
            typeof((((match13761 . __h_data ). Right ). __h_0_mem )) new_tree ;
            // ----------
            ;
            ({ /* cicili#Let13766 */
              bool __h_case_result  = (true  &&  (((match13761 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn13767 */
                    (new_tree  =  (((match13761 . __h_data ). Right ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block13773 */
                  { /* cicili#Block13775 */
                    free_BTree_int_User (pwtree );
                    (*pwtree ) = new_tree ;
                  }
                }
              else
                { /* cicili#Let13781 */
                  typeof((((match13761 . __h_data ). Left ). __h_0_mem )) err ;
                  // ----------
                  ;
                  ({ /* cicili#Let13783 */
                    bool __h_case_result  = (true  &&  (((match13761 . __h_ctor ) ==  __h_Left_t  ) &&  ({ /* cicili#Progn13784 */
                          (err  =  (((match13761 . __h_data ). Left ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block13790 */
                        ({ /* cicili#Let13793 */
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
void __ciciliL_13798 (BTree_int_User_pair_t item ) {
  { /* cicili#Let13803 */
    typeof((item . __h_1_mem )) __h_match13801_1_arg ;
    typeof((__h_match13801_1_arg . __h_0_mem )) wname ;
    // ----------
    ;
    ({ /* cicili#Let13805 */
      bool __h_case_result  = (true  &&  (({ /* cicili#Progn13806 */
            (__h_match13801_1_arg  =  (item . __h_1_mem ) );
            true ;
          }) &&  (true  &&  ({ /* cicili#Progn13808 */
              (wname  =  (__h_match13801_1_arg . __h_0_mem ) );
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block13814 */
          { /* cicili#Block13816 */
            free_Cell_String ((&wname ));
          }
        }
    });
  }
}
void deleteMany (BTree_int_User * pwtree , int from , int to ) {
  { /* cicili#Let13797 */
    __auto_type item_deallocator  = __ciciliL_13798 ;
    // ----------
    for (int i  = from ; (i  <=  to  ); (++i )) {
        { /* cicili#Let13825 */
          __auto_type match13824  = delete_BTree_int_User ((*pwtree ), i , item_deallocator );
          typeof((((match13824 . __h_data ). Right ). __h_0_mem )) new_tree ;
          // ----------
          ;
          ({ /* cicili#Let13828 */
            bool __h_case_result  = (true  &&  (((match13824 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn13829 */
                  (new_tree  =  (((match13824 . __h_data ). Right ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block13835 */
                { /* cicili#Block13837 */
                  free_BTree_int_User (pwtree );
                  (*pwtree ) = new_tree ;
                }
              }
            else
              { /* cicili#Let13843 */
                typeof((((match13824 . __h_data ). Left ). __h_0_mem )) err ;
                // ----------
                ;
                ({ /* cicili#Let13845 */
                  bool __h_case_result  = (true  &&  (((match13824 . __h_ctor ) ==  __h_Left_t  ) &&  ({ /* cicili#Progn13846 */
                        (err  =  (((match13824 . __h_data ). Left ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block13852 */
                      ({ /* cicili#Let13855 */
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
      { /* cicili#Let13863 */
        __auto_type match13862  = search_BTree_int_User ((*pwtree ), i );
        // ----------
        ;
        ({ /* cicili#Let13866 */
          bool __h_case_result  = (true  &&  ((match13862 . __h_ctor ) ==  __h_Just_t  ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block13871 */
              
            }
          else
            { /* cicili#Let13878 */
              // ----------
              ;
              ({ /* cicili#Let13880 */
                bool __h_case_result  = (true  &&  ((match13862 . __h_ctor ) ==  __h_Nothing_t  ) );
                // ----------
                
                if (__h_case_result )
                  { /* cicili#Block13885 */
                    ({ /* cicili#Let13888 */
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
  { /* cicili#Let13895 */
    __auto_type start  = time (NULL );
    BTree_int_User wtree  = Leaf_BTree_int_User (BoxedNil_BTree_int_User_pair_t ());
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
