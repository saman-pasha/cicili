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
typedef struct ciciliOOfsDXI5U_FbKRkKR3SY21XS8rk_ {
  Cell_String __h_0_mem ;
  int __h_1_mem ;
} ciciliOOfsDXI5U_FbKRkKR3SY21XS8rk_;
typedef ciciliOOfsDXI5U_FbKRkKR3SY21XS8rk_ User ;
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
    List_User (*drop) (int index , List_User list );
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
List_User drop_List_User (int index , List_User list );
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
        
        ({ /* cicili#Let332 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn333 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn335 */
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
              
              ({ /* cicili#Progn348 */
                ({ /* cicili#Let350 */
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
  return (((buf  ==  NULL  )) ? Nil_User () : ({ /* cicili#Let361 */
        User item  = (*buf );
        // ----------
        (((len  ==  0 )) ? Nil_User () : Cons_User (item , pure_List_User ((++buf ), (--len ))));
      }));
}
int show_List_User (CFile file , List_User list ) {
  return ({ /* cicili#Let371 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let375 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn376 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn378 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn381 */
            (({ /* cicili#Let385 */
                // ----------
                
                ({ /* cicili#Let389 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn391 */
                      (({ /* cicili#Let397 */
                          typeof((head . __h_0_mem )) wname ;
                          typeof((head . __h_1_mem )) salary ;
                          // ----------
                          
                          ({ /* cicili#Let401 */
                            bool __h_case_result  = (true  &&  (({ /* cicili#Progn402 */
                                  (wname  =  (head . __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn404 */
                                  (salary  =  (head . __h_1_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn407 */
                                ({ /* cicili#Let411 */
                                  __auto_type match410  = get_Cell_String (wname );
                                  typeof((((match410 . __h_data ). Just ). __h_0_mem )) name ;
                                  // ----------
                                  
                                  ({ /* cicili#Let416 */
                                    bool __h_case_result  = (true  &&  (((match410 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn417 */
                                          (name  =  (((match410 . __h_data ). Just ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    ((__h_case_result ) ? ({ /* cicili#Progn420 */
                                        (fprintf (file , "('") +  show_String (file , name ) +  fprintf (file , "', %d)", salary ) );
                                      }) : ({ /* cicili#Let424 */
                                        // ----------
                                        
                                        ({ /* cicili#Progn428 */
                                          fprintf (file , "item is deleted in another version!");
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let432 */
                                // ----------
                                
                                ({ /* cicili#Progn436 */
                                  0;
                                });
                              }));
                          });
                        }) +  fprintf (file , "%s", " ") );
                    }) : ({ /* cicili#Let440 */
                      // ----------
                      
                      ({ /* cicili#Progn444 */
                        ({ /* cicili#Let450 */
                          typeof((head . __h_0_mem )) wname ;
                          typeof((head . __h_1_mem )) salary ;
                          // ----------
                          
                          ({ /* cicili#Let454 */
                            bool __h_case_result  = (true  &&  (({ /* cicili#Progn455 */
                                  (wname  =  (head . __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn457 */
                                  (salary  =  (head . __h_1_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn460 */
                                ({ /* cicili#Let464 */
                                  __auto_type match463  = get_Cell_String (wname );
                                  typeof((((match463 . __h_data ). Just ). __h_0_mem )) name ;
                                  // ----------
                                  
                                  ({ /* cicili#Let469 */
                                    bool __h_case_result  = (true  &&  (((match463 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn470 */
                                          (name  =  (((match463 . __h_data ). Just ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    ((__h_case_result ) ? ({ /* cicili#Progn473 */
                                        (fprintf (file , "('") +  show_String (file , name ) +  fprintf (file , "', %d)", salary ) );
                                      }) : ({ /* cicili#Let477 */
                                        // ----------
                                        
                                        ({ /* cicili#Progn481 */
                                          fprintf (file , "item is deleted in another version!");
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let485 */
                                // ----------
                                
                                ({ /* cicili#Progn489 */
                                  0;
                                });
                              }));
                          });
                        });
                      });
                    }));
                });
              }) +  show_List_User (file , tail ) );
          }) : ({ /* cicili#Let494 */
            // ----------
            
            ({ /* cicili#Progn498 */
              0;
            });
          }));
      });
    });
}
List_User copy_List_User (List_User list ) {
  return ({ /* cicili#Let504 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let508 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn509 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn511 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn514 */
            Cons_User (head , copy_List_User (tail ));
          }) : ({ /* cicili#Let520 */
            // ----------
            
            ({ /* cicili#Progn524 */
              Nil_User ();
            });
          }));
      });
    });
}
List_User replaceAt_List_User (List_User list , User item , int index ) {
  return ({ /* cicili#Let531 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let535 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn536 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn538 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn541 */
            Cons_User (head , replaceAt_List_User (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let547 */
            // ----------
            
            ({ /* cicili#Progn551 */
              ({ /* cicili#Let555 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let559 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn560 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn563 */
                      Cons_User (item , copy_List_User (taill ));
                    }) : ({ /* cicili#Let569 */
                      // ----------
                      
                      ({ /* cicili#Progn573 */
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
  return ({ /* cicili#Let580 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let584 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn585 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn587 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn590 */
            Cons_User (head , deleteAt_List_User (tail , (index  -  1 )));
          }) : ({ /* cicili#Let596 */
            // ----------
            
            ({ /* cicili#Progn600 */
              ({ /* cicili#Let604 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let608 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn609 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn612 */
                      copy_List_User (taill );
                    }) : ({ /* cicili#Let617 */
                      // ----------
                      
                      ({ /* cicili#Progn621 */
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
List_User insertAt_List_User (List_User llist , User item , int index ) {
  return ({ /* cicili#Let628 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let632 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn633 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn635 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn638 */
            Cons_User (head , insertAt_List_User (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let644 */
            // ----------
            
            ({ /* cicili#Progn648 */
              Cons_User (item , copy_List_User (llist ));
            });
          }));
      });
    });
}
List_User replace_List_User (List_User list , User item , List_User aimed ) {
  return ({ /* cicili#Let656 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let660 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn661 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn663 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn666 */
            Cons_User (head , replace_List_User (tail , item , aimed ));
          }) : ({ /* cicili#Let672 */
            // ----------
            
            ({ /* cicili#Progn676 */
              ({ /* cicili#Let680 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let684 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn685 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn688 */
                      Cons_User (item , copy_List_User (taill ));
                    }) : ({ /* cicili#Let694 */
                      // ----------
                      
                      ({ /* cicili#Progn698 */
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
  return ({ /* cicili#Let705 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let709 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn710 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn712 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn715 */
            Cons_User (head , delete_List_User (tail , aimed ));
          }) : ({ /* cicili#Let721 */
            // ----------
            
            ({ /* cicili#Progn725 */
              ({ /* cicili#Let729 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let733 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn734 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn737 */
                      copy_List_User (taill );
                    }) : ({ /* cicili#Let742 */
                      // ----------
                      
                      ({ /* cicili#Progn746 */
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
  return ({ /* cicili#Let753 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let757 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn758 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn760 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (llist  !=  rlist  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn763 */
            Cons_User (head , insert_List_User (tail , item , rlist ));
          }) : ({ /* cicili#Let769 */
            // ----------
            
            ({ /* cicili#Progn773 */
              Cons_User (item , copy_List_User (rlist ));
            });
          }));
      });
    });
}
List_User reverse_List_User (List_User list ) {
  List_User _reverse (List_User list , List_User rlist ) {
    return ({ /* cicili#Let782 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let786 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn787 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn789 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn792 */
              _reverse (tail , Cons_User (head , rlist ));
            }) : ({ /* cicili#Let797 */
              // ----------
              
              ({ /* cicili#Progn801 */
                rlist ;
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let805 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let809 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn810 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn812 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn815 */
            _reverse (tail , Cons_User (head , Nil_User ()));
          }) : ({ /* cicili#Let821 */
            // ----------
            
            ({ /* cicili#Progn825 */
              list ;
            });
          }));
      });
    });
}
List_User append_List_User (List_User llist , List_User rlist ) {
  return ({ /* cicili#Let831 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let835 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn836 */
                (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn838 */
                (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn841 */
            Cons_User (head , append_List_User (tail , rlist ));
          }) : ({ /* cicili#Let847 */
            // ----------
            
            ({ /* cicili#Progn851 */
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
  return (((len  <=  0 )) ? Nil_User () : ({ /* cicili#Let864 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let868 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn869 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn871 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn874 */
              Cons_User (head , take_List_User ((--len ), tail ));
            }) : ({ /* cicili#Let880 */
              // ----------
              
              ({ /* cicili#Progn884 */
                Nil_User ();
              });
            }));
        });
      }));
}
List_User last_List_User (List_User list ) {
  return ({ /* cicili#Let891 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let895 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn896 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn899 */
            ({ /* cicili#Let903 */
              // ----------
              
              ({ /* cicili#Let907 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn909 */
                    copy_List_User (list );
                  }) : ({ /* cicili#Let914 */
                    // ----------
                    
                    ({ /* cicili#Progn918 */
                      last_List_User (tail );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let923 */
            // ----------
            
            ({ /* cicili#Progn927 */
              Nil_User ();
            });
          }));
      });
    });
}
List_User init_List_User (List_User list ) {
  return ({ /* cicili#Let935 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let939 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn940 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn942 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn945 */
            Cons_User (head , init_List_User (tail ));
          }) : ({ /* cicili#Let951 */
            // ----------
            
            ({ /* cicili#Progn955 */
              Nil_User ();
            });
          }));
      });
    });
}
int hasLen_List_User (List_User list , int desired ) {
  return ({ /* cicili#Let962 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let966 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn967 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn970 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_User (tail , (--desired )) ));
          }) : ({ /* cicili#Let976 */
            // ----------
            
            ({ /* cicili#Progn980 */
              0;
            });
          }));
      });
    });
}
int len_List_User (List_User list ) {
  return ({ /* cicili#Let986 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let990 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn991 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn994 */
            (1 +  len_List_User (tail ) );
          }) : ({ /* cicili#Let999 */
            // ----------
            
            ({ /* cicili#Progn1003 */
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
  return (((len  <=  0 )) ? copy_List_User (list ) : ({ /* cicili#Let1014 */
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let1018 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn1019 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn1022 */
              drop_List_User ((--len ), tail );
            }) : ({ /* cicili#Let1027 */
              // ----------
              
              ({ /* cicili#Progn1031 */
                Nil_User ();
              });
            }));
        });
      }));
}
Maybe_User head_List_User (List_User list ) {
  return ({ /* cicili#Let1039 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      // ----------
      
      ({ /* cicili#Let1043 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn1044 */
              (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn1047 */
            Just_User (head );
          }) : ({ /* cicili#Let1052 */
            // ----------
            
            ({ /* cicili#Progn1056 */
              Nothing_User ();
            });
          }));
      });
    });
}
List_User nthcdr_List_User (int index , List_User list ) {
  return ({ /* cicili#Let1063 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let1067 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn1068 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn1071 */
            nthcdr_List_User ((--index ), tail );
          }) : ({ /* cicili#Let1076 */
            // ----------
            
            ({ /* cicili#Progn1080 */
              list ;
            });
          }));
      });
    });
}
Maybe_User nth_List_User (int index , List_User list ) {
  return ({ /* cicili#Let1087 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let1091 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn1092 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn1094 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn1097 */
            (((index  ==  0 )) ? Just_User (head ) : (((index  <  0 )) ? Nothing_User () : nth_List_User ((--index ), tail )));
          }) : ({ /* cicili#Let1106 */
            // ----------
            
            ({ /* cicili#Progn1110 */
              Nothing_User ();
            });
          }));
      });
    });
}
void free_List_User (List_User * this_ptr ) {
  { /* cicili#Let1115 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let1119 */
      typeof((((this -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let1123 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn1124 */
              (tail  =  (((this -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block1128 */
            { /* cicili#Block1130 */
              free (this );
              free_List_User ((&tail ));
            }
          }
        else
          { /* cicili#Let1138 */
            // ----------
            
            ({ /* cicili#Let1142 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Nil_t  ) );
              // ----------
              if (__h_case_result )
                { /* cicili#Block1145 */
                  { /* cicili#Block1147 */
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
  { /* cicili#Let1158 */
    List_User instance  = malloc (sizeof(class_List_User));
    // ----------
    (*instance ) = ((class_List_User){ get_List_User__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
List_User Nil_User () {
  { /* cicili#Let1164 */
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
  { /* cicili#Let1181 */
    Maybe_List_User instance  = ((Maybe_List_User){ get_Maybe_List_User__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_User Nothing_List_User () {
  { /* cicili#Let1186 */
    Maybe_List_User instance  = ((Maybe_List_User){ get_Maybe_List_User__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_User__H_IMPL__ */ 
typedef struct class_BTree_int_User * BTree_int_User ;
typedef struct cicilip8cwWRLaSkEmX6DploZHOdmwNDQ_ {
  int __h_0_mem ;
  User __h_1_mem ;
} cicilip8cwWRLaSkEmX6DploZHOdmwNDQ_;
typedef cicilip8cwWRLaSkEmX6DploZHOdmwNDQ_ BTree_int_User_pair_t ;
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
  union { /* ciciliUnion1211 */
    struct { /* ciciliStruct1212 */
    } ERR_INVALID_OBJECT , _6 ;
    struct { /* ciciliStruct1213 */
      int __h_0_mem ;
    } ERR_INVALID_ORDER , _5 ;
    struct { /* ciciliStruct1214 */
      BTree_int_User_pair_t __h_0_mem ;
    } ERR_UNIQUE_KEY , _4 ;
    struct { /* ciciliStruct1215 */
      int __h_0_mem ;
    } ERR_NOT_FOUND , _3 ;
    struct { /* ciciliStruct1216 */
      BTree_int_User_pair_t __h_0_mem ;
      int __h_1_mem ;
    } ERR_ACCESS_DEAD_CHILD , _2 ;
    struct { /* ciciliStruct1217 */
      BTree_int_User __h_0_mem ;
    } ERR_INVALID_BRANCH , _1 ;
    struct { /* ciciliStruct1218 */
      char * __h_0_mem ;
    } ERR_CANT_BORROW , _ ;
  } __h_data ;
} BTree_int_User_Error;
BTree_int_User_Error BTree_int_User_ERR_INVALID_OBJECT ();
BTree_int_User_Error BTree_int_User_ERR_INVALID_ORDER (int order );
BTree_int_User_Error BTree_int_User_ERR_UNIQUE_KEY (BTree_int_User_pair_t item );
BTree_int_User_Error BTree_int_User_ERR_NOT_FOUND (int key );
BTree_int_User_Error BTree_int_User_ERR_ACCESS_DEAD_CHILD (BTree_int_User_pair_t item , int index );
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
  union { /* ciciliUnion1265 */
    struct { /* ciciliStruct1266 */
      BTree_int_User __h_0_mem ;
    } Right , _1 ;
    struct { /* ciciliStruct1267 */
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
  union { /* ciciliUnion1293 */
    struct { /* ciciliStruct1294 */
      BTree_int_User __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct1295 */
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
  union { /* ciciliUnion1323 */
    struct { /* ciciliStruct1324 */
      BTree_int_User_pair_t __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct1325 */
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
    List_BTree_int_User_pair_t (*drop) (int index , List_BTree_int_User_pair_t list );
    Maybe_BTree_int_User_pair_t (*head) (List_BTree_int_User_pair_t list );
    List_BTree_int_User_pair_t (*nthcdr) (int index , List_BTree_int_User_pair_t list );
    Maybe_BTree_int_User_pair_t (*nth) (int index , List_BTree_int_User_pair_t list );
} List_BTree_int_User_pair_t__H_Table;
typedef struct class_List_BTree_int_User_pair_t {
  const List_BTree_int_User_pair_t__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion1375 */
    struct { /* ciciliStruct1376 */
      BTree_int_User_pair_t __h_0_mem ;
      List_BTree_int_User_pair_t __h_1_mem ;
    } Cons , _1 ;
    struct { /* ciciliStruct1377 */
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
List_BTree_int_User_pair_t drop_List_BTree_int_User_pair_t (int index , List_BTree_int_User_pair_t list );
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
  union { /* ciciliUnion1477 */
    struct { /* ciciliStruct1478 */
      List_BTree_int_User_pair_t __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct1479 */
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
  union { /* ciciliUnion1509 */
    struct { /* ciciliStruct1510 */
      BTree_int_User __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct1511 */
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
  union { /* ciciliUnion1541 */
    struct { /* ciciliStruct1542 */
      BTree_int_User * __h_0_mem ;
      int * __h_1_mem ;
      size_t __h_2_mem ;
    } Hold , _1 ;
    struct { /* ciciliStruct1543 */
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
  union { /* ciciliUnion1585 */
    struct { /* ciciliStruct1586 */
      Rc_BTree_int_User __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct1587 */
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
    List_Rc_BTree_int_User (*drop) (int index , List_Rc_BTree_int_User list );
    Maybe_Rc_BTree_int_User (*head) (List_Rc_BTree_int_User list );
    List_Rc_BTree_int_User (*nthcdr) (int index , List_Rc_BTree_int_User list );
    Maybe_Rc_BTree_int_User (*nth) (int index , List_Rc_BTree_int_User list );
} List_Rc_BTree_int_User__H_Table;
typedef struct class_List_Rc_BTree_int_User {
  const List_Rc_BTree_int_User__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion1637 */
    struct { /* ciciliStruct1638 */
      Rc_BTree_int_User __h_0_mem ;
      List_Rc_BTree_int_User __h_1_mem ;
    } Cons , _1 ;
    struct { /* ciciliStruct1639 */
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
List_Rc_BTree_int_User drop_List_Rc_BTree_int_User (int index , List_Rc_BTree_int_User list );
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
  union { /* ciciliUnion1739 */
    struct { /* ciciliStruct1740 */
      List_Rc_BTree_int_User __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct1741 */
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
  union { /* ciciliUnion1776 */
    struct { /* ciciliStruct1777 */
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
    Either_BTree_int_User_Error_BTree_int_User (*pure) (int keys [], User values [], int len );
    int (*show) (CFile file , BTree_int_User tree );
    void (*traverse) (BTree_int_User tree ,   void (*callback) (BTree_int_User_pair_t item , Bool hasNext ));
    Maybe_BTree_int_User_pair_t (*max) (BTree_int_User tree );
    Maybe_BTree_int_User_pair_t (*min) (BTree_int_User tree );
    Either_BTree_int_User_Error_BTree_int_User (*delete) (BTree_int_User tree , int skey ,   void (*callback) (BTree_int_User_pair_t item ));
    Maybe_BTree_int_User_pair_t (*search) (BTree_int_User tree , int skey );
    Either_BTree_int_User_Error_BTree_int_User (*insert) (BTree_int_User tree , int skey , User svalue );
    int (*order) ();
} BTree_int_User__H_Table;
typedef struct class_BTree_int_User {
  const BTree_int_User__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion1836 */
    struct { /* ciciliStruct1837 */
      List_BTree_int_User_pair_t __h_0_mem ;
      List_Rc_BTree_int_User __h_1_mem ;
    } Branch , _2 ;
    struct { /* ciciliStruct1838 */
      List_BTree_int_User_pair_t __h_0_mem ;
      List_Rc_BTree_int_User __h_1_mem ;
    } Internal , _1 ;
    struct { /* ciciliStruct1839 */
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
Either_BTree_int_User_Error_BTree_int_User pure_BTree_int_User (int keys [], User values [], int len );
int show_BTree_int_User (CFile file , BTree_int_User tree );
void traverse_BTree_int_User (BTree_int_User tree , void (*callback) (BTree_int_User_pair_t item , Bool hasNext ));
Maybe_BTree_int_User_pair_t max_BTree_int_User (BTree_int_User tree );
Maybe_BTree_int_User_pair_t min_BTree_int_User (BTree_int_User tree );
Either_BTree_int_User_Error_BTree_int_User delete_BTree_int_User (BTree_int_User tree , int skey , void (*callback) (BTree_int_User_pair_t item ));
Maybe_BTree_int_User_pair_t search_BTree_int_User (BTree_int_User tree , int skey );
Either_BTree_int_User_Error_BTree_int_User insert_BTree_int_User (BTree_int_User tree , int skey , User svalue );
int order_BTree_int_User ();
BTree_int_User__H_Table * const get_BTree_int_User__H_Table ();
void free_BTree_int_User (BTree_int_User * this_ptr );
#endif /* __BTree_int_User__H_DECL__ */ 
#ifndef __BTree_int_User_Error__H_IMPL__
#define __BTree_int_User_Error__H_IMPL__
void show_BTree_int_User_Error (BTree_int_User_Error error ) {
  { /* cicili#Let1916 */
    // ----------
    
    ({ /* cicili#Let1920 */
      bool __h_case_result  = (true  &&  ((error . __h_ctor ) ==  __h_ERR_INVALID_OBJECT_t  ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block1923 */
          printf ("invalid B-Tree object");
        }
      else
        { /* cicili#Let1928 */
          typeof((((error . __h_data ). ERR_INVALID_ORDER ). __h_0_mem )) order ;
          // ----------
          
          ({ /* cicili#Let1932 */
            bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_INVALID_ORDER_t  ) &&  ({ /* cicili#Progn1933 */
                  (order  =  (((error . __h_data ). ERR_INVALID_ORDER ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            if (__h_case_result )
              { /* cicili#Block1937 */
                printf ("invalid B-Tree order: %d", order );
              }
            else
              { /* cicili#Let1942 */
                typeof((((error . __h_data ). ERR_UNIQUE_KEY ). __h_0_mem )) item ;
                // ----------
                
                ({ /* cicili#Let1946 */
                  bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_UNIQUE_KEY_t  ) &&  ({ /* cicili#Progn1947 */
                        (item  =  (((error . __h_data ). ERR_UNIQUE_KEY ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  if (__h_case_result )
                    { /* cicili#Block1951 */
                      { /* cicili#Block1953 */
                        printf ("unique key: ");
                        ({ /* cicili#Let1960 */
                          typeof((item . __h_0_mem )) id ;
                          typeof((item . __h_1_mem )) __h_match1958_1_arg ;
                          typeof((__h_match1958_1_arg . __h_0_mem )) wname ;
                          typeof((__h_match1958_1_arg . __h_1_mem )) salary ;
                          // ----------
                          
                          ({ /* cicili#Let1964 */
                            bool __h_case_result  = (true  &&  ((({ /* cicili#Progn1965 */
                                    (id  =  (item . __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn1967 */
                                    (__h_match1958_1_arg  =  (item . __h_1_mem ) );
                                    true ;
                                  }) ) &&  (true  &&  (({ /* cicili#Progn1969 */
                                      (wname  =  (__h_match1958_1_arg . __h_0_mem ) );
                                      true ;
                                    }) &&  ({ /* cicili#Progn1971 */
                                      (salary  =  (__h_match1958_1_arg . __h_1_mem ) );
                                      true ;
                                    }) ) ) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn1974 */
                                ({ /* cicili#Let1978 */
                                  __auto_type match1977  = get_Cell_String (wname );
                                  typeof((((match1977 . __h_data ). Just ). __h_0_mem )) name ;
                                  // ----------
                                  
                                  ({ /* cicili#Let1983 */
                                    bool __h_case_result  = (true  &&  (((match1977 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn1984 */
                                          (name  =  (((match1977 . __h_data ). Just ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    ((__h_case_result ) ? ({ /* cicili#Progn1987 */
                                        (fprintf (stdout , "(%d, '", id ) +  show_String (stdout , name ) +  fprintf (stdout , "', %d)", salary ) );
                                      }) : ({ /* cicili#Let1991 */
                                        // ----------
                                        
                                        ({ /* cicili#Progn1995 */
                                          fprintf (stdout , "%d, but item is deleted in another version!", id );
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let1999 */
                                // ----------
                                
                                ({ /* cicili#Progn2003 */
                                  0;
                                });
                              }));
                          });
                        });
                      }
                    }
                  else
                    { /* cicili#Let2008 */
                      typeof((((error . __h_data ). ERR_NOT_FOUND ). __h_0_mem )) key ;
                      // ----------
                      
                      ({ /* cicili#Let2012 */
                        bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_NOT_FOUND_t  ) &&  ({ /* cicili#Progn2013 */
                              (key  =  (((error . __h_data ). ERR_NOT_FOUND ). __h_0_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        if (__h_case_result )
                          { /* cicili#Block2017 */
                            { /* cicili#Block2019 */
                              printf ("key not found: ");
                              fprintf (stdout , "%d", key );
                            }
                          }
                        else
                          { /* cicili#Let2027 */
                            typeof((((error . __h_data ). ERR_ACCESS_DEAD_CHILD ). __h_0_mem )) item ;
                            typeof((((error . __h_data ). ERR_ACCESS_DEAD_CHILD ). __h_1_mem )) index ;
                            // ----------
                            
                            ({ /* cicili#Let2031 */
                              bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_ACCESS_DEAD_CHILD_t  ) &&  (({ /* cicili#Progn2032 */
                                      (item  =  (((error . __h_data ). ERR_ACCESS_DEAD_CHILD ). __h_0_mem ) );
                                      true ;
                                    }) &&  ({ /* cicili#Progn2034 */
                                      (index  =  (((error . __h_data ). ERR_ACCESS_DEAD_CHILD ). __h_1_mem ) );
                                      true ;
                                    }) ) ) );
                              // ----------
                              if (__h_case_result )
                                { /* cicili#Block2038 */
                                  { /* cicili#Block2040 */
                                    printf ("dead child at index: %d of item: ", index );
                                    ({ /* cicili#Let2047 */
                                      typeof((item . __h_0_mem )) id ;
                                      typeof((item . __h_1_mem )) __h_match2045_1_arg ;
                                      typeof((__h_match2045_1_arg . __h_0_mem )) wname ;
                                      typeof((__h_match2045_1_arg . __h_1_mem )) salary ;
                                      // ----------
                                      
                                      ({ /* cicili#Let2051 */
                                        bool __h_case_result  = (true  &&  ((({ /* cicili#Progn2052 */
                                                (id  =  (item . __h_0_mem ) );
                                                true ;
                                              }) &&  ({ /* cicili#Progn2054 */
                                                (__h_match2045_1_arg  =  (item . __h_1_mem ) );
                                                true ;
                                              }) ) &&  (true  &&  (({ /* cicili#Progn2056 */
                                                  (wname  =  (__h_match2045_1_arg . __h_0_mem ) );
                                                  true ;
                                                }) &&  ({ /* cicili#Progn2058 */
                                                  (salary  =  (__h_match2045_1_arg . __h_1_mem ) );
                                                  true ;
                                                }) ) ) ) );
                                        // ----------
                                        ((__h_case_result ) ? ({ /* cicili#Progn2061 */
                                            ({ /* cicili#Let2065 */
                                              __auto_type match2064  = get_Cell_String (wname );
                                              typeof((((match2064 . __h_data ). Just ). __h_0_mem )) name ;
                                              // ----------
                                              
                                              ({ /* cicili#Let2070 */
                                                bool __h_case_result  = (true  &&  (((match2064 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2071 */
                                                      (name  =  (((match2064 . __h_data ). Just ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                ((__h_case_result ) ? ({ /* cicili#Progn2074 */
                                                    (fprintf (stdout , "(%d, '", id ) +  show_String (stdout , name ) +  fprintf (stdout , "', %d)", salary ) );
                                                  }) : ({ /* cicili#Let2078 */
                                                    // ----------
                                                    
                                                    ({ /* cicili#Progn2082 */
                                                      fprintf (stdout , "%d, but item is deleted in another version!", id );
                                                    });
                                                  }));
                                              });
                                            });
                                          }) : ({ /* cicili#Let2086 */
                                            // ----------
                                            
                                            ({ /* cicili#Progn2090 */
                                              0;
                                            });
                                          }));
                                      });
                                    });
                                  }
                                }
                              else
                                { /* cicili#Let2095 */
                                  typeof((((error . __h_data ). ERR_INVALID_BRANCH ). __h_0_mem )) branch ;
                                  // ----------
                                  
                                  ({ /* cicili#Let2099 */
                                    bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_INVALID_BRANCH_t  ) &&  ({ /* cicili#Progn2100 */
                                          (branch  =  (((error . __h_data ). ERR_INVALID_BRANCH ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    if (__h_case_result )
                                      { /* cicili#Block2104 */
                                        { /* cicili#Block2106 */
                                          printf ("invalid branch: ");
                                          (branch -> __h_table -> show )(stdout , branch );
                                        }
                                      }
                                    else
                                      { /* cicili#Let2113 */
                                        typeof((((error . __h_data ). ERR_CANT_BORROW ). __h_0_mem )) reason ;
                                        // ----------
                                        
                                        ({ /* cicili#Let2117 */
                                          bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_CANT_BORROW_t  ) &&  ({ /* cicili#Progn2118 */
                                                (reason  =  (((error . __h_data ). ERR_CANT_BORROW ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          if (__h_case_result )
                                            { /* cicili#Block2122 */
                                              printf ("borrow error: %s", reason );
                                            }
                                          else
                                            { /* cicili#Let2127 */
                                              // ----------
                                              
                                              { /* cicili#Block2131 */
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
  { /* cicili#Let2143 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_INVALID_OBJECT_t });
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_INVALID_ORDER (int order ) {
  { /* cicili#Let2148 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_INVALID_ORDER_t , .__h_data.ERR_INVALID_ORDER = { order }});
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_UNIQUE_KEY (BTree_int_User_pair_t item ) {
  { /* cicili#Let2153 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_UNIQUE_KEY_t , .__h_data.ERR_UNIQUE_KEY = { item }});
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_NOT_FOUND (int key ) {
  { /* cicili#Let2159 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_NOT_FOUND_t , .__h_data.ERR_NOT_FOUND = { key }});
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_ACCESS_DEAD_CHILD (BTree_int_User_pair_t item , int index ) {
  { /* cicili#Let2164 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_ACCESS_DEAD_CHILD_t , .__h_data.ERR_ACCESS_DEAD_CHILD = { item , index }});
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_INVALID_BRANCH (BTree_int_User branch ) {
  { /* cicili#Let2170 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_INVALID_BRANCH_t , .__h_data.ERR_INVALID_BRANCH = { branch }});
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_CANT_BORROW (char * reason ) {
  { /* cicili#Let2175 */
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
  { /* cicili#Let2191 */
    Either_BTree_int_User_Error_BTree_int_User instance  = ((Either_BTree_int_User_Error_BTree_int_User){ get_Either_BTree_int_User_Error_BTree_int_User__H_Table (), __h_Right_t , .__h_data.Right = { value }});
    // ----------
    return instance ;
  }
}
Either_BTree_int_User_Error_BTree_int_User Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_Error error ) {
  { /* cicili#Let2196 */
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
  { /* cicili#Let2212 */
    Maybe_BTree_int_User instance  = ((Maybe_BTree_int_User){ get_Maybe_BTree_int_User__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_BTree_int_User Nothing_BTree_int_User () {
  { /* cicili#Let2217 */
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
  { /* cicili#Let2235 */
    Maybe_BTree_int_User_pair_t instance  = ((Maybe_BTree_int_User_pair_t){ get_Maybe_BTree_int_User_pair_t__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_BTree_int_User_pair_t Nothing_BTree_int_User_pair_t () {
  { /* cicili#Let2240 */
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
    return ({ /* cicili#Let2250 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let2254 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn2255 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2257 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn2260 */
              ({ /* cicili#Let2262 */
                BTree_int_User_pair_t * arr  = array (tail , (count  +  1 ));
                // ----------
                arr [count ] = head ;
                arr ;
              });
            }) : ({ /* cicili#Let2266 */
              // ----------
              
              ({ /* cicili#Progn2270 */
                ({ /* cicili#Let2272 */
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
  return (((buf  ==  NULL  )) ? Nil_BTree_int_User_pair_t () : ({ /* cicili#Let2283 */
        BTree_int_User_pair_t item  = (*buf );
        // ----------
        (((len  ==  0 )) ? Nil_BTree_int_User_pair_t () : Cons_BTree_int_User_pair_t (item , pure_List_BTree_int_User_pair_t ((++buf ), (--len ))));
      }));
}
int show_List_BTree_int_User_pair_t (CFile file , List_BTree_int_User_pair_t list ) {
  return ({ /* cicili#Let2293 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let2297 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn2298 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn2300 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn2303 */
            (({ /* cicili#Let2307 */
                // ----------
                
                ({ /* cicili#Let2311 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn2313 */
                      (({ /* cicili#Let2320 */
                          typeof((head . __h_0_mem )) id ;
                          typeof((head . __h_1_mem )) __h_match2318_1_arg ;
                          typeof((__h_match2318_1_arg . __h_0_mem )) wname ;
                          typeof((__h_match2318_1_arg . __h_1_mem )) salary ;
                          // ----------
                          
                          ({ /* cicili#Let2324 */
                            bool __h_case_result  = (true  &&  ((({ /* cicili#Progn2325 */
                                    (id  =  (head . __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn2327 */
                                    (__h_match2318_1_arg  =  (head . __h_1_mem ) );
                                    true ;
                                  }) ) &&  (true  &&  (({ /* cicili#Progn2329 */
                                      (wname  =  (__h_match2318_1_arg . __h_0_mem ) );
                                      true ;
                                    }) &&  ({ /* cicili#Progn2331 */
                                      (salary  =  (__h_match2318_1_arg . __h_1_mem ) );
                                      true ;
                                    }) ) ) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn2334 */
                                ({ /* cicili#Let2338 */
                                  __auto_type match2337  = get_Cell_String (wname );
                                  typeof((((match2337 . __h_data ). Just ). __h_0_mem )) name ;
                                  // ----------
                                  
                                  ({ /* cicili#Let2343 */
                                    bool __h_case_result  = (true  &&  (((match2337 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2344 */
                                          (name  =  (((match2337 . __h_data ). Just ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    ((__h_case_result ) ? ({ /* cicili#Progn2347 */
                                        (fprintf (file , "(%d, '", id ) +  show_String (file , name ) +  fprintf (file , "', %d)", salary ) );
                                      }) : ({ /* cicili#Let2351 */
                                        // ----------
                                        
                                        ({ /* cicili#Progn2355 */
                                          fprintf (file , "%d, but item is deleted in another version!", id );
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let2359 */
                                // ----------
                                
                                ({ /* cicili#Progn2363 */
                                  0;
                                });
                              }));
                          });
                        }) +  fprintf (file , "%s", " ") );
                    }) : ({ /* cicili#Let2367 */
                      // ----------
                      
                      ({ /* cicili#Progn2371 */
                        ({ /* cicili#Let2378 */
                          typeof((head . __h_0_mem )) id ;
                          typeof((head . __h_1_mem )) __h_match2376_1_arg ;
                          typeof((__h_match2376_1_arg . __h_0_mem )) wname ;
                          typeof((__h_match2376_1_arg . __h_1_mem )) salary ;
                          // ----------
                          
                          ({ /* cicili#Let2382 */
                            bool __h_case_result  = (true  &&  ((({ /* cicili#Progn2383 */
                                    (id  =  (head . __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn2385 */
                                    (__h_match2376_1_arg  =  (head . __h_1_mem ) );
                                    true ;
                                  }) ) &&  (true  &&  (({ /* cicili#Progn2387 */
                                      (wname  =  (__h_match2376_1_arg . __h_0_mem ) );
                                      true ;
                                    }) &&  ({ /* cicili#Progn2389 */
                                      (salary  =  (__h_match2376_1_arg . __h_1_mem ) );
                                      true ;
                                    }) ) ) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn2392 */
                                ({ /* cicili#Let2396 */
                                  __auto_type match2395  = get_Cell_String (wname );
                                  typeof((((match2395 . __h_data ). Just ). __h_0_mem )) name ;
                                  // ----------
                                  
                                  ({ /* cicili#Let2401 */
                                    bool __h_case_result  = (true  &&  (((match2395 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2402 */
                                          (name  =  (((match2395 . __h_data ). Just ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    ((__h_case_result ) ? ({ /* cicili#Progn2405 */
                                        (fprintf (file , "(%d, '", id ) +  show_String (file , name ) +  fprintf (file , "', %d)", salary ) );
                                      }) : ({ /* cicili#Let2409 */
                                        // ----------
                                        
                                        ({ /* cicili#Progn2413 */
                                          fprintf (file , "%d, but item is deleted in another version!", id );
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let2417 */
                                // ----------
                                
                                ({ /* cicili#Progn2421 */
                                  0;
                                });
                              }));
                          });
                        });
                      });
                    }));
                });
              }) +  show_List_BTree_int_User_pair_t (file , tail ) );
          }) : ({ /* cicili#Let2426 */
            // ----------
            
            ({ /* cicili#Progn2430 */
              0;
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t copy_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
  return ({ /* cicili#Let2436 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let2440 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn2441 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn2443 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn2446 */
            Cons_BTree_int_User_pair_t (head , copy_List_BTree_int_User_pair_t (tail ));
          }) : ({ /* cicili#Let2452 */
            // ----------
            
            ({ /* cicili#Progn2456 */
              Nil_BTree_int_User_pair_t ();
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t replaceAt_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , BTree_int_User_pair_t item , int index ) {
  return ({ /* cicili#Let2463 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let2467 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn2468 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2470 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn2473 */
            Cons_BTree_int_User_pair_t (head , replaceAt_List_BTree_int_User_pair_t (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let2479 */
            // ----------
            
            ({ /* cicili#Progn2483 */
              ({ /* cicili#Let2487 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let2491 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn2492 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn2495 */
                      Cons_BTree_int_User_pair_t (item , copy_List_BTree_int_User_pair_t (taill ));
                    }) : ({ /* cicili#Let2501 */
                      // ----------
                      
                      ({ /* cicili#Progn2505 */
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
  return ({ /* cicili#Let2512 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let2516 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn2517 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2519 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn2522 */
            Cons_BTree_int_User_pair_t (head , deleteAt_List_BTree_int_User_pair_t (tail , (index  -  1 )));
          }) : ({ /* cicili#Let2528 */
            // ----------
            
            ({ /* cicili#Progn2532 */
              ({ /* cicili#Let2536 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let2540 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn2541 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn2544 */
                      copy_List_BTree_int_User_pair_t (taill );
                    }) : ({ /* cicili#Let2549 */
                      // ----------
                      
                      ({ /* cicili#Progn2553 */
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
List_BTree_int_User_pair_t insertAt_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t llist , BTree_int_User_pair_t item , int index ) {
  return ({ /* cicili#Let2560 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let2564 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn2565 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2567 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn2570 */
            Cons_BTree_int_User_pair_t (head , insertAt_List_BTree_int_User_pair_t (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let2576 */
            // ----------
            
            ({ /* cicili#Progn2580 */
              Cons_BTree_int_User_pair_t (item , copy_List_BTree_int_User_pair_t (llist ));
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t replace_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , BTree_int_User_pair_t item , List_BTree_int_User_pair_t aimed ) {
  return ({ /* cicili#Let2588 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let2592 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn2593 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2595 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn2598 */
            Cons_BTree_int_User_pair_t (head , replace_List_BTree_int_User_pair_t (tail , item , aimed ));
          }) : ({ /* cicili#Let2604 */
            // ----------
            
            ({ /* cicili#Progn2608 */
              ({ /* cicili#Let2612 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let2616 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn2617 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn2620 */
                      Cons_BTree_int_User_pair_t (item , copy_List_BTree_int_User_pair_t (taill ));
                    }) : ({ /* cicili#Let2626 */
                      // ----------
                      
                      ({ /* cicili#Progn2630 */
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
  return ({ /* cicili#Let2637 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let2641 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn2642 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2644 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn2647 */
            Cons_BTree_int_User_pair_t (head , delete_List_BTree_int_User_pair_t (tail , aimed ));
          }) : ({ /* cicili#Let2653 */
            // ----------
            
            ({ /* cicili#Progn2657 */
              ({ /* cicili#Let2661 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let2665 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn2666 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn2669 */
                      copy_List_BTree_int_User_pair_t (taill );
                    }) : ({ /* cicili#Let2674 */
                      // ----------
                      
                      ({ /* cicili#Progn2678 */
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
  return ({ /* cicili#Let2685 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let2689 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn2690 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2692 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (llist  !=  rlist  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn2695 */
            Cons_BTree_int_User_pair_t (head , insert_List_BTree_int_User_pair_t (tail , item , rlist ));
          }) : ({ /* cicili#Let2701 */
            // ----------
            
            ({ /* cicili#Progn2705 */
              Cons_BTree_int_User_pair_t (item , copy_List_BTree_int_User_pair_t (rlist ));
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t reverse_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
  List_BTree_int_User_pair_t _reverse (List_BTree_int_User_pair_t list , List_BTree_int_User_pair_t rlist ) {
    return ({ /* cicili#Let2714 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let2718 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn2719 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2721 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn2724 */
              _reverse (tail , Cons_BTree_int_User_pair_t (head , rlist ));
            }) : ({ /* cicili#Let2729 */
              // ----------
              
              ({ /* cicili#Progn2733 */
                rlist ;
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let2737 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let2741 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn2742 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn2744 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn2747 */
            _reverse (tail , Cons_BTree_int_User_pair_t (head , Nil_BTree_int_User_pair_t ()));
          }) : ({ /* cicili#Let2753 */
            // ----------
            
            ({ /* cicili#Progn2757 */
              list ;
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t append_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t llist , List_BTree_int_User_pair_t rlist ) {
  return ({ /* cicili#Let2763 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let2767 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn2768 */
                (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn2770 */
                (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn2773 */
            Cons_BTree_int_User_pair_t (head , append_List_BTree_int_User_pair_t (tail , rlist ));
          }) : ({ /* cicili#Let2779 */
            // ----------
            
            ({ /* cicili#Progn2783 */
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
  return (((len  <=  0 )) ? Nil_BTree_int_User_pair_t () : ({ /* cicili#Let2796 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let2800 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn2801 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2803 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn2806 */
              Cons_BTree_int_User_pair_t (head , take_List_BTree_int_User_pair_t ((--len ), tail ));
            }) : ({ /* cicili#Let2812 */
              // ----------
              
              ({ /* cicili#Progn2816 */
                Nil_BTree_int_User_pair_t ();
              });
            }));
        });
      }));
}
List_BTree_int_User_pair_t last_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
  return ({ /* cicili#Let2823 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let2827 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn2828 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn2831 */
            ({ /* cicili#Let2835 */
              // ----------
              
              ({ /* cicili#Let2839 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn2841 */
                    copy_List_BTree_int_User_pair_t (list );
                  }) : ({ /* cicili#Let2846 */
                    // ----------
                    
                    ({ /* cicili#Progn2850 */
                      last_List_BTree_int_User_pair_t (tail );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let2855 */
            // ----------
            
            ({ /* cicili#Progn2859 */
              Nil_BTree_int_User_pair_t ();
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t init_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
  return ({ /* cicili#Let2867 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let2871 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn2872 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2874 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn2877 */
            Cons_BTree_int_User_pair_t (head , init_List_BTree_int_User_pair_t (tail ));
          }) : ({ /* cicili#Let2883 */
            // ----------
            
            ({ /* cicili#Progn2887 */
              Nil_BTree_int_User_pair_t ();
            });
          }));
      });
    });
}
int hasLen_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , int desired ) {
  return ({ /* cicili#Let2894 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let2898 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn2899 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn2902 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_BTree_int_User_pair_t (tail , (--desired )) ));
          }) : ({ /* cicili#Let2908 */
            // ----------
            
            ({ /* cicili#Progn2912 */
              0;
            });
          }));
      });
    });
}
int len_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
  return ({ /* cicili#Let2918 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let2922 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn2923 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn2926 */
            (1 +  len_List_BTree_int_User_pair_t (tail ) );
          }) : ({ /* cicili#Let2931 */
            // ----------
            
            ({ /* cicili#Progn2935 */
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
  return (((len  <=  0 )) ? copy_List_BTree_int_User_pair_t (list ) : ({ /* cicili#Let2946 */
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let2950 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn2951 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn2954 */
              drop_List_BTree_int_User_pair_t ((--len ), tail );
            }) : ({ /* cicili#Let2959 */
              // ----------
              
              ({ /* cicili#Progn2963 */
                Nil_BTree_int_User_pair_t ();
              });
            }));
        });
      }));
}
Maybe_BTree_int_User_pair_t head_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
  return ({ /* cicili#Let2971 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      // ----------
      
      ({ /* cicili#Let2975 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn2976 */
              (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn2979 */
            Just_BTree_int_User_pair_t (head );
          }) : ({ /* cicili#Let2984 */
            // ----------
            
            ({ /* cicili#Progn2988 */
              Nothing_BTree_int_User_pair_t ();
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t nthcdr_List_BTree_int_User_pair_t (int index , List_BTree_int_User_pair_t list ) {
  return ({ /* cicili#Let2995 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let2999 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3000 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3003 */
            nthcdr_List_BTree_int_User_pair_t ((--index ), tail );
          }) : ({ /* cicili#Let3008 */
            // ----------
            
            ({ /* cicili#Progn3012 */
              list ;
            });
          }));
      });
    });
}
Maybe_BTree_int_User_pair_t nth_List_BTree_int_User_pair_t (int index , List_BTree_int_User_pair_t list ) {
  return ({ /* cicili#Let3019 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3023 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3024 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn3026 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3029 */
            (((index  ==  0 )) ? Just_BTree_int_User_pair_t (head ) : (((index  <  0 )) ? Nothing_BTree_int_User_pair_t () : nth_List_BTree_int_User_pair_t ((--index ), tail )));
          }) : ({ /* cicili#Let3038 */
            // ----------
            
            ({ /* cicili#Progn3042 */
              Nothing_BTree_int_User_pair_t ();
            });
          }));
      });
    });
}
void free_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t * this_ptr ) {
  { /* cicili#Let3047 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let3051 */
      typeof((((this -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3055 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3056 */
              (tail  =  (((this -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block3060 */
            { /* cicili#Block3062 */
              free (this );
              free_List_BTree_int_User_pair_t ((&tail ));
            }
          }
        else
          { /* cicili#Let3070 */
            // ----------
            
            ({ /* cicili#Let3074 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Nil_t  ) );
              // ----------
              if (__h_case_result )
                { /* cicili#Block3077 */
                  { /* cicili#Block3079 */
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
  { /* cicili#Let3090 */
    List_BTree_int_User_pair_t instance  = malloc (sizeof(class_List_BTree_int_User_pair_t));
    // ----------
    (*instance ) = ((class_List_BTree_int_User_pair_t){ get_List_BTree_int_User_pair_t__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
List_BTree_int_User_pair_t Nil_BTree_int_User_pair_t () {
  { /* cicili#Let3096 */
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
  { /* cicili#Let3113 */
    Maybe_List_BTree_int_User_pair_t instance  = ((Maybe_List_BTree_int_User_pair_t){ get_Maybe_List_BTree_int_User_pair_t__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_BTree_int_User_pair_t Nothing_List_BTree_int_User_pair_t () {
  { /* cicili#Let3118 */
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
  { /* cicili#Let3138 */
    Maybe_BTree_int_User instance  = ((Maybe_BTree_int_User){ get_Maybe_BTree_int_User__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_BTree_int_User Nothing_BTree_int_User () {
  { /* cicili#Let3143 */
    Maybe_BTree_int_User instance  = ((Maybe_BTree_int_User){ get_Maybe_BTree_int_User__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_BTree_int_User__H_IMPL__ */ 
#ifndef __Rc_BTree_int_User__H_IMPL__
#define __Rc_BTree_int_User__H_IMPL__
Rc_BTree_int_User new_Rc_BTree_int_User (BTree_int_User pointer ) {
  return ({ /* cicili#Let3150 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      __auto_type holder  = ((BTree_int_User *)malloc (sizeof(BTree_int_User *)));
      // ----------
      (*count ) = 1;
      (*holder ) = pointer ;
      __h_Hold_BTree_int_User (holder , count , ((size_t)pointer ));
    });
}
Rc_BTree_int_User clone_Rc_BTree_int_User (Rc_BTree_int_User rc ) {
  return ({ /* cicili#Let3159 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      
      ({ /* cicili#Let3163 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn3164 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3166 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn3168 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3171 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Progn3174 */
                (++(*count ));
                __h_Hold_BTree_int_User (pointer , count , address );
              }) : Gone_BTree_int_User ());
          }) : ({ /* cicili#Let3180 */
            // ----------
            
            ({ /* cicili#Progn3184 */
              Gone_BTree_int_User ();
            });
          }));
      });
    });
}
Maybe_BTree_int_User take_Rc_BTree_int_User (Rc_BTree_int_User * this ) {
  return ({ /* cicili#Let3192 */
      typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      
      ({ /* cicili#Let3196 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn3197 */
                  (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3199 */
                  (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn3201 */
                (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3204 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Let3208 */
                __auto_type result  = Just_BTree_int_User ((*pointer ));
                // ----------
                if ((*count ) ==  1 )
                  { /* cicili#Block3214 */
                    (*count ) = 0;
                    free (((void *)count ));
                    (*pointer ) = NULL ;
                    free (((void *)pointer ));
                    (*this ) = Gone_BTree_int_User ();
                  }
                else
                  (--(*count ));
                result ;
              }) : Nothing_BTree_int_User ());
          }) : ({ /* cicili#Let3221 */
            // ----------
            
            ({ /* cicili#Progn3225 */
              Nothing_BTree_int_User ();
            });
          }));
      });
    });
}
Maybe_BTree_int_User get_Rc_BTree_int_User (Rc_BTree_int_User rc ) {
  return ({ /* cicili#Let3233 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      
      ({ /* cicili#Let3237 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn3238 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3240 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn3242 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3245 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) >  0 ) )) ? Just_BTree_int_User ((*pointer )) : Nothing_BTree_int_User ());
          }) : ({ /* cicili#Let3252 */
            // ----------
            
            ({ /* cicili#Progn3256 */
              Nothing_BTree_int_User ();
            });
          }));
      });
    });
}
void free_Rc_BTree_int_User (Rc_BTree_int_User * this ) {
  { /* cicili#Let3265 */
    typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
    typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
    // ----------
    
    ({ /* cicili#Let3269 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn3270 */
                (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn3272 */
                (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                true ;
              }) ) &&  ({ /* cicili#Progn3274 */
              (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
              true ;
            }) ) ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block3278 */
          if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
            { /* cicili#Block3282 */
              if ((*count ) ==  1 )
                { /* cicili#Block3285 */
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
        }
      else
        { /* cicili#Let3295 */
          // ----------
          
          ({ /* cicili#Let3299 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Gone_t  ) );
            // ----------
            if (__h_case_result )
              { /* cicili#Block3302 */
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
  { /* cicili#Let3313 */
    Rc_BTree_int_User instance  = ((Rc_BTree_int_User){ get_Rc_BTree_int_User__H_Table (), __h_Hold_t , .__h_data.Hold = { pointer , count , address }});
    // ----------
    return instance ;
  }
}
Rc_BTree_int_User Gone_BTree_int_User () {
  { /* cicili#Let3318 */
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
  { /* cicili#Let3336 */
    Maybe_Rc_BTree_int_User instance  = ((Maybe_Rc_BTree_int_User){ get_Maybe_Rc_BTree_int_User__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_Rc_BTree_int_User Nothing_Rc_BTree_int_User () {
  { /* cicili#Let3341 */
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
    return ({ /* cicili#Let3351 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let3355 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3356 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3358 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn3361 */
              ({ /* cicili#Let3363 */
                Rc_BTree_int_User * arr  = array (tail , (count  +  1 ));
                // ----------
                arr [count ] = head ;
                arr ;
              });
            }) : ({ /* cicili#Let3367 */
              // ----------
              
              ({ /* cicili#Progn3371 */
                ({ /* cicili#Let3373 */
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
  return (((buf  ==  NULL  )) ? Nil_Rc_BTree_int_User () : ({ /* cicili#Let3384 */
        Rc_BTree_int_User item  = (*buf );
        // ----------
        (((len  ==  0 )) ? Nil_Rc_BTree_int_User () : Cons_Rc_BTree_int_User (item , pure_List_Rc_BTree_int_User ((++buf ), (--len ))));
      }));
}
int show_List_Rc_BTree_int_User (CFile file , List_Rc_BTree_int_User list ) {
  return ({ /* cicili#Let3394 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3398 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3399 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn3401 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3404 */
            (({ /* cicili#Let3408 */
                // ----------
                
                ({ /* cicili#Let3412 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn3414 */
                      (({ /* cicili#Let3422 */
                          __auto_type match3421  = get_Rc_BTree_int_User (head );
                          typeof((((match3421 . __h_data ). Just ). __h_0_mem )) child ;
                          // ----------
                          
                          ({ /* cicili#Let3427 */
                            bool __h_case_result  = (true  &&  (((match3421 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3428 */
                                  (child  =  (((match3421 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn3431 */
                                show_BTree_int_User (file , child );
                              }) : ({ /* cicili#Let3436 */
                                // ----------
                                
                                ({ /* cicili#Progn3440 */
                                  0;
                                });
                              }));
                          });
                        }) +  fprintf (file , "%s", " ") );
                    }) : ({ /* cicili#Let3444 */
                      // ----------
                      
                      ({ /* cicili#Progn3448 */
                        ({ /* cicili#Let3456 */
                          __auto_type match3455  = get_Rc_BTree_int_User (head );
                          typeof((((match3455 . __h_data ). Just ). __h_0_mem )) child ;
                          // ----------
                          
                          ({ /* cicili#Let3461 */
                            bool __h_case_result  = (true  &&  (((match3455 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3462 */
                                  (child  =  (((match3455 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn3465 */
                                show_BTree_int_User (file , child );
                              }) : ({ /* cicili#Let3470 */
                                // ----------
                                
                                ({ /* cicili#Progn3474 */
                                  0;
                                });
                              }));
                          });
                        });
                      });
                    }));
                });
              }) +  show_List_Rc_BTree_int_User (file , tail ) );
          }) : ({ /* cicili#Let3479 */
            // ----------
            
            ({ /* cicili#Progn3483 */
              0;
            });
          }));
      });
    });
}
List_Rc_BTree_int_User copy_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
  return ({ /* cicili#Let3489 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3493 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3494 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn3496 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3499 */
            Cons_Rc_BTree_int_User (head , copy_List_Rc_BTree_int_User (tail ));
          }) : ({ /* cicili#Let3505 */
            // ----------
            
            ({ /* cicili#Progn3509 */
              Nil_Rc_BTree_int_User ();
            });
          }));
      });
    });
}
List_Rc_BTree_int_User replaceAt_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , Rc_BTree_int_User item , int index ) {
  return ({ /* cicili#Let3516 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3520 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3521 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3523 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3526 */
            Cons_Rc_BTree_int_User (head , replaceAt_List_Rc_BTree_int_User (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let3532 */
            // ----------
            
            ({ /* cicili#Progn3536 */
              ({ /* cicili#Let3540 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let3544 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3545 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn3548 */
                      Cons_Rc_BTree_int_User (item , copy_List_Rc_BTree_int_User (taill ));
                    }) : ({ /* cicili#Let3554 */
                      // ----------
                      
                      ({ /* cicili#Progn3558 */
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
  return ({ /* cicili#Let3565 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3569 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3570 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3572 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3575 */
            Cons_Rc_BTree_int_User (head , deleteAt_List_Rc_BTree_int_User (tail , (index  -  1 )));
          }) : ({ /* cicili#Let3581 */
            // ----------
            
            ({ /* cicili#Progn3585 */
              ({ /* cicili#Let3589 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let3593 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3594 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn3597 */
                      copy_List_Rc_BTree_int_User (taill );
                    }) : ({ /* cicili#Let3602 */
                      // ----------
                      
                      ({ /* cicili#Progn3606 */
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
List_Rc_BTree_int_User insertAt_List_Rc_BTree_int_User (List_Rc_BTree_int_User llist , Rc_BTree_int_User item , int index ) {
  return ({ /* cicili#Let3613 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3617 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3618 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3620 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3623 */
            Cons_Rc_BTree_int_User (head , insertAt_List_Rc_BTree_int_User (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let3629 */
            // ----------
            
            ({ /* cicili#Progn3633 */
              Cons_Rc_BTree_int_User (item , copy_List_Rc_BTree_int_User (llist ));
            });
          }));
      });
    });
}
List_Rc_BTree_int_User replace_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , Rc_BTree_int_User item , List_Rc_BTree_int_User aimed ) {
  return ({ /* cicili#Let3641 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3645 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3646 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3648 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3651 */
            Cons_Rc_BTree_int_User (head , replace_List_Rc_BTree_int_User (tail , item , aimed ));
          }) : ({ /* cicili#Let3657 */
            // ----------
            
            ({ /* cicili#Progn3661 */
              ({ /* cicili#Let3665 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let3669 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3670 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn3673 */
                      Cons_Rc_BTree_int_User (item , copy_List_Rc_BTree_int_User (taill ));
                    }) : ({ /* cicili#Let3679 */
                      // ----------
                      
                      ({ /* cicili#Progn3683 */
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
  return ({ /* cicili#Let3690 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3694 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3695 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3697 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3700 */
            Cons_Rc_BTree_int_User (head , delete_List_Rc_BTree_int_User (tail , aimed ));
          }) : ({ /* cicili#Let3706 */
            // ----------
            
            ({ /* cicili#Progn3710 */
              ({ /* cicili#Let3714 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                
                ({ /* cicili#Let3718 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3719 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn3722 */
                      copy_List_Rc_BTree_int_User (taill );
                    }) : ({ /* cicili#Let3727 */
                      // ----------
                      
                      ({ /* cicili#Progn3731 */
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
  return ({ /* cicili#Let3738 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3742 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3743 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3745 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (llist  !=  rlist  ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3748 */
            Cons_Rc_BTree_int_User (head , insert_List_Rc_BTree_int_User (tail , item , rlist ));
          }) : ({ /* cicili#Let3754 */
            // ----------
            
            ({ /* cicili#Progn3758 */
              Cons_Rc_BTree_int_User (item , copy_List_Rc_BTree_int_User (rlist ));
            });
          }));
      });
    });
}
List_Rc_BTree_int_User reverse_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
  List_Rc_BTree_int_User _reverse (List_Rc_BTree_int_User list , List_Rc_BTree_int_User rlist ) {
    return ({ /* cicili#Let3767 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let3771 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3772 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3774 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn3777 */
              _reverse (tail , Cons_Rc_BTree_int_User (head , rlist ));
            }) : ({ /* cicili#Let3782 */
              // ----------
              
              ({ /* cicili#Progn3786 */
                rlist ;
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let3790 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3794 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3795 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn3797 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3800 */
            _reverse (tail , Cons_Rc_BTree_int_User (head , Nil_Rc_BTree_int_User ()));
          }) : ({ /* cicili#Let3806 */
            // ----------
            
            ({ /* cicili#Progn3810 */
              list ;
            });
          }));
      });
    });
}
List_Rc_BTree_int_User append_List_Rc_BTree_int_User (List_Rc_BTree_int_User llist , List_Rc_BTree_int_User rlist ) {
  return ({ /* cicili#Let3816 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3820 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3821 */
                (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn3823 */
                (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3826 */
            Cons_Rc_BTree_int_User (head , append_List_Rc_BTree_int_User (tail , rlist ));
          }) : ({ /* cicili#Let3832 */
            // ----------
            
            ({ /* cicili#Progn3836 */
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
  return (((len  <=  0 )) ? Nil_Rc_BTree_int_User () : ({ /* cicili#Let3849 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let3853 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3854 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3856 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn3859 */
              Cons_Rc_BTree_int_User (head , take_List_Rc_BTree_int_User ((--len ), tail ));
            }) : ({ /* cicili#Let3865 */
              // ----------
              
              ({ /* cicili#Progn3869 */
                Nil_Rc_BTree_int_User ();
              });
            }));
        });
      }));
}
List_Rc_BTree_int_User last_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
  return ({ /* cicili#Let3876 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3880 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3881 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3884 */
            ({ /* cicili#Let3888 */
              // ----------
              
              ({ /* cicili#Let3892 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn3894 */
                    copy_List_Rc_BTree_int_User (list );
                  }) : ({ /* cicili#Let3899 */
                    // ----------
                    
                    ({ /* cicili#Progn3903 */
                      last_List_Rc_BTree_int_User (tail );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let3908 */
            // ----------
            
            ({ /* cicili#Progn3912 */
              Nil_Rc_BTree_int_User ();
            });
          }));
      });
    });
}
List_Rc_BTree_int_User init_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
  return ({ /* cicili#Let3920 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3924 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3925 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn3927 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3930 */
            Cons_Rc_BTree_int_User (head , init_List_Rc_BTree_int_User (tail ));
          }) : ({ /* cicili#Let3936 */
            // ----------
            
            ({ /* cicili#Progn3940 */
              Nil_Rc_BTree_int_User ();
            });
          }));
      });
    });
}
int hasLen_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , int desired ) {
  return ({ /* cicili#Let3947 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3951 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3952 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3955 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_Rc_BTree_int_User (tail , (--desired )) ));
          }) : ({ /* cicili#Let3961 */
            // ----------
            
            ({ /* cicili#Progn3965 */
              0;
            });
          }));
      });
    });
}
int len_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
  return ({ /* cicili#Let3971 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let3975 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3976 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn3979 */
            (1 +  len_List_Rc_BTree_int_User (tail ) );
          }) : ({ /* cicili#Let3984 */
            // ----------
            
            ({ /* cicili#Progn3988 */
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
  return (((len  <=  0 )) ? copy_List_Rc_BTree_int_User (list ) : ({ /* cicili#Let3999 */
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let4003 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn4004 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn4007 */
              drop_List_Rc_BTree_int_User ((--len ), tail );
            }) : ({ /* cicili#Let4012 */
              // ----------
              
              ({ /* cicili#Progn4016 */
                Nil_Rc_BTree_int_User ();
              });
            }));
        });
      }));
}
Maybe_Rc_BTree_int_User head_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
  return ({ /* cicili#Let4024 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      // ----------
      
      ({ /* cicili#Let4028 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn4029 */
              (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn4032 */
            Just_Rc_BTree_int_User (head );
          }) : ({ /* cicili#Let4037 */
            // ----------
            
            ({ /* cicili#Progn4041 */
              Nothing_Rc_BTree_int_User ();
            });
          }));
      });
    });
}
List_Rc_BTree_int_User nthcdr_List_Rc_BTree_int_User (int index , List_Rc_BTree_int_User list ) {
  return ({ /* cicili#Let4048 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let4052 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn4053 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn4056 */
            nthcdr_List_Rc_BTree_int_User ((--index ), tail );
          }) : ({ /* cicili#Let4061 */
            // ----------
            
            ({ /* cicili#Progn4065 */
              list ;
            });
          }));
      });
    });
}
Maybe_Rc_BTree_int_User nth_List_Rc_BTree_int_User (int index , List_Rc_BTree_int_User list ) {
  return ({ /* cicili#Let4072 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let4076 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn4077 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn4079 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn4082 */
            (((index  ==  0 )) ? Just_Rc_BTree_int_User (head ) : (((index  <  0 )) ? Nothing_Rc_BTree_int_User () : nth_List_Rc_BTree_int_User ((--index ), tail )));
          }) : ({ /* cicili#Let4091 */
            // ----------
            
            ({ /* cicili#Progn4095 */
              Nothing_Rc_BTree_int_User ();
            });
          }));
      });
    });
}
void free_List_Rc_BTree_int_User (List_Rc_BTree_int_User * this_ptr ) {
  { /* cicili#Let4100 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let4104 */
      typeof((((this -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let4108 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn4109 */
              (tail  =  (((this -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block4113 */
            { /* cicili#Block4115 */
              free (this );
              free_List_Rc_BTree_int_User ((&tail ));
            }
          }
        else
          { /* cicili#Let4123 */
            // ----------
            
            ({ /* cicili#Let4127 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Nil_t  ) );
              // ----------
              if (__h_case_result )
                { /* cicili#Block4130 */
                  { /* cicili#Block4132 */
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
  { /* cicili#Let4143 */
    List_Rc_BTree_int_User instance  = malloc (sizeof(class_List_Rc_BTree_int_User));
    // ----------
    (*instance ) = ((class_List_Rc_BTree_int_User){ get_List_Rc_BTree_int_User__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
List_Rc_BTree_int_User Nil_Rc_BTree_int_User () {
  { /* cicili#Let4149 */
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
  { /* cicili#Let4166 */
    Maybe_List_Rc_BTree_int_User instance  = ((Maybe_List_Rc_BTree_int_User){ get_Maybe_List_Rc_BTree_int_User__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_Rc_BTree_int_User Nothing_List_Rc_BTree_int_User () {
  { /* cicili#Let4171 */
    Maybe_List_Rc_BTree_int_User instance  = ((Maybe_List_Rc_BTree_int_User){ get_Maybe_List_Rc_BTree_int_User__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_Rc_BTree_int_User__H_IMPL__ */ 
#ifndef __Functor_List_Rc_BTree_int_User__H_IMPL__
#define __Functor_List_Rc_BTree_int_User__H_IMPL__
List_Rc_BTree_int_User fmap_Functor_List_Rc_BTree_int_User (Rc_BTree_int_User_to_Rc_BTree_int_User_t a_b , List_Rc_BTree_int_User input ) {
  return ({ /* cicili#Let4185 */
      typeof((((input -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((input -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let4189 */
        bool __h_case_result  = (true  &&  (((input -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn4190 */
                (head  =  (((input -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn4192 */
                (tail  =  (((input -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn4195 */
            Cons_Rc_BTree_int_User (a_b (head ), fmap_Functor_List_Rc_BTree_int_User (a_b , tail ));
          }) : ({ /* cicili#Let4202 */
            // ----------
            
            ({ /* cicili#Progn4206 */
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
  { /* cicili#Let4220 */
    Functor_List_Rc_BTree_int_User instance  = ((Functor_List_Rc_BTree_int_User){ get_Functor_List_Rc_BTree_int_User__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Functor_List_Rc_BTree_int_User__H_IMPL__ */ 
Functor_List_Rc_BTree_int_User get_Functor_List_Rc_BTree_int_User () {
  return Functor_List_Rc_BTree_int_User_ctor ();
}
int U_BTree_int_User  = 3;
int L_BTree_int_User  = 2;
BTree_int_User split_BTree_int_User (BTree_int_User tree ) {
  return ({ /* cicili#Let4238 */
      typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      
      ({ /* cicili#Let4242 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn4243 */
                (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn4245 */
                (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn4248 */
            (((len_List_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? ({ /* cicili#Let4254 */
                __auto_type tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4256 */
                  __auto_type tree  = tree ;
                  // ----------
                  ((void)(tree -> __h_table -> freeClass ));
                  tree ;
                });
                // ----------
                Branch_BTree_int_User (wrap_List_BTree_int_User_pair_t (({ /* cicili#Let4264 */
                    __auto_type match4263  = nth_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                    typeof((((match4263 . __h_data ). Just ). __h_0_mem )) nitem ;
                    // ----------
                    
                    ({ /* cicili#Let4270 */
                      bool __h_case_result  = (true  &&  (((match4263 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4271 */
                            (nitem  =  (((match4263 . __h_data ). Just ). __h_0_mem ) );
                            true ;
                          }) ) );
                      // ----------
                      ((__h_case_result ) ? ({ /* cicili#Progn4274 */
                          nitem ;
                        }) : ({ /* cicili#Let4278 */
                          // ----------
                          
                          ({ /* cicili#Progn4282 */
                            ((BTree_int_User_pair_t){ });
                          });
                        }));
                    });
                  })), pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Internal_BTree_int_User (take_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ), ({ /* cicili#Let4293 */
                      __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4295 */
                        __auto_type r1  = take_List_Rc_BTree_int_User (L_BTree_int_User , children );
                        // ----------
                        ((void)(r1 -> __h_table -> freeClass ));
                        r1 ;
                      });
                      // ----------
                      fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4305 */
                          Rc_BTree_int_User __ciciliC_4304 (Rc_BTree_int_User __h_value ) {
                            return clone_Rc_BTree_int_User (__h_value );
                          }
                          __ciciliC_4304 ;
                        }), r1 );
                    }))), new_Rc_BTree_int_User (Internal_BTree_int_User (drop_List_BTree_int_User_pair_t (L_BTree_int_User , items ), ({ /* cicili#Let4316 */
                      __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4318 */
                        __auto_type r1  = drop_List_Rc_BTree_int_User (L_BTree_int_User , children );
                        // ----------
                        ((void)(r1 -> __h_table -> freeClass ));
                        r1 ;
                      });
                      // ----------
                      fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4328 */
                          Rc_BTree_int_User __ciciliC_4327 (Rc_BTree_int_User __h_value ) {
                            return clone_Rc_BTree_int_User (__h_value );
                          }
                          __ciciliC_4327 ;
                        }), r1 );
                    })))}), 2));
              }) : tree );
          }) : ({ /* cicili#Let4335 */
            typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            
            ({ /* cicili#Let4339 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn4340 */
                      (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn4342 */
                      (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              ((__h_case_result ) ? ({ /* cicili#Progn4345 */
                  (((len_List_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? ({ /* cicili#Let4351 */
                      __auto_type tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4353 */
                        __auto_type tree  = tree ;
                        // ----------
                        ((void)(tree -> __h_table -> freeClass ));
                        tree ;
                      });
                      // ----------
                      Branch_BTree_int_User (wrap_List_BTree_int_User_pair_t (({ /* cicili#Let4361 */
                          __auto_type match4360  = nth_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                          typeof((((match4360 . __h_data ). Just ). __h_0_mem )) nitem ;
                          // ----------
                          
                          ({ /* cicili#Let4367 */
                            bool __h_case_result  = (true  &&  (((match4360 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4368 */
                                  (nitem  =  (((match4360 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn4371 */
                                nitem ;
                              }) : ({ /* cicili#Let4375 */
                                // ----------
                                
                                ({ /* cicili#Progn4379 */
                                  ((BTree_int_User_pair_t){ });
                                });
                              }));
                          });
                        })), pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Internal_BTree_int_User (take_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ), ({ /* cicili#Let4390 */
                            __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4392 */
                              __auto_type r1  = take_List_Rc_BTree_int_User (L_BTree_int_User , children );
                              // ----------
                              ((void)(r1 -> __h_table -> freeClass ));
                              r1 ;
                            });
                            // ----------
                            fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4402 */
                                Rc_BTree_int_User __ciciliC_4401 (Rc_BTree_int_User __h_value ) {
                                  return clone_Rc_BTree_int_User (__h_value );
                                }
                                __ciciliC_4401 ;
                              }), r1 );
                          }))), new_Rc_BTree_int_User (Internal_BTree_int_User (drop_List_BTree_int_User_pair_t (L_BTree_int_User , items ), ({ /* cicili#Let4413 */
                            __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4415 */
                              __auto_type r1  = drop_List_Rc_BTree_int_User (L_BTree_int_User , children );
                              // ----------
                              ((void)(r1 -> __h_table -> freeClass ));
                              r1 ;
                            });
                            // ----------
                            fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4425 */
                                Rc_BTree_int_User __ciciliC_4424 (Rc_BTree_int_User __h_value ) {
                                  return clone_Rc_BTree_int_User (__h_value );
                                }
                                __ciciliC_4424 ;
                              }), r1 );
                          })))}), 2));
                    }) : tree );
                }) : ({ /* cicili#Let4432 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  
                  ({ /* cicili#Let4436 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn4437 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn4440 */
                        (((len_List_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? ({ /* cicili#Let4446 */
                            __auto_type tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4448 */
                              __auto_type tree  = tree ;
                              // ----------
                              ((void)(tree -> __h_table -> freeClass ));
                              tree ;
                            });
                            // ----------
                            Branch_BTree_int_User (wrap_List_BTree_int_User_pair_t (({ /* cicili#Let4456 */
                                __auto_type match4455  = nth_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                                typeof((((match4455 . __h_data ). Just ). __h_0_mem )) nitem ;
                                // ----------
                                
                                ({ /* cicili#Let4462 */
                                  bool __h_case_result  = (true  &&  (((match4455 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4463 */
                                        (nitem  =  (((match4455 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  ((__h_case_result ) ? ({ /* cicili#Progn4466 */
                                      nitem ;
                                    }) : ({ /* cicili#Let4470 */
                                      // ----------
                                      
                                      ({ /* cicili#Progn4474 */
                                        ((BTree_int_User_pair_t){ });
                                      });
                                    }));
                                });
                              })), pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Leaf_BTree_int_User (take_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ))), new_Rc_BTree_int_User (Leaf_BTree_int_User (drop_List_BTree_int_User_pair_t (L_BTree_int_User , items )))}), 2));
                          }) : tree );
                      }) : ({ /* cicili#Let4491 */
                        // ----------
                        
                        ({ /* cicili#Progn4495 */
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
  return ({ /* cicili#Let4501 */
      typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      
      ({ /* cicili#Let4505 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn4506 */
                (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn4508 */
                (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn4511 */
            (((len_List_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? Branch_BTree_int_User (wrap_List_BTree_int_User_pair_t (({ /* cicili#Let4521 */
                __auto_type match4520  = nth_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                typeof((((match4520 . __h_data ). Just ). __h_0_mem )) nitem ;
                // ----------
                
                ({ /* cicili#Let4527 */
                  bool __h_case_result  = (true  &&  (((match4520 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4528 */
                        (nitem  =  (((match4520 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn4531 */
                      nitem ;
                    }) : ({ /* cicili#Let4535 */
                      // ----------
                      
                      ({ /* cicili#Progn4539 */
                        ((BTree_int_User_pair_t){ });
                      });
                    }));
                });
              })), pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Internal_BTree_int_User (take_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ), ({ /* cicili#Let4550 */
                  __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4552 */
                    __auto_type r1  = take_List_Rc_BTree_int_User (L_BTree_int_User , children );
                    // ----------
                    ((void)(r1 -> __h_table -> freeClass ));
                    r1 ;
                  });
                  // ----------
                  fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4562 */
                      Rc_BTree_int_User __ciciliC_4561 (Rc_BTree_int_User __h_value ) {
                        return clone_Rc_BTree_int_User (__h_value );
                      }
                      __ciciliC_4561 ;
                    }), r1 );
                }))), new_Rc_BTree_int_User (Internal_BTree_int_User (drop_List_BTree_int_User_pair_t (L_BTree_int_User , items ), ({ /* cicili#Let4573 */
                  __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4575 */
                    __auto_type r1  = drop_List_Rc_BTree_int_User (L_BTree_int_User , children );
                    // ----------
                    ((void)(r1 -> __h_table -> freeClass ));
                    r1 ;
                  });
                  // ----------
                  fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4585 */
                      Rc_BTree_int_User __ciciliC_4584 (Rc_BTree_int_User __h_value ) {
                        return clone_Rc_BTree_int_User (__h_value );
                      }
                      __ciciliC_4584 ;
                    }), r1 );
                })))}), 2)) : tree );
          }) : ({ /* cicili#Let4592 */
            typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            
            ({ /* cicili#Let4596 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn4597 */
                      (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn4599 */
                      (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              ((__h_case_result ) ? ({ /* cicili#Progn4602 */
                  (((len_List_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? Branch_BTree_int_User (wrap_List_BTree_int_User_pair_t (({ /* cicili#Let4612 */
                      __auto_type match4611  = nth_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                      typeof((((match4611 . __h_data ). Just ). __h_0_mem )) nitem ;
                      // ----------
                      
                      ({ /* cicili#Let4618 */
                        bool __h_case_result  = (true  &&  (((match4611 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4619 */
                              (nitem  =  (((match4611 . __h_data ). Just ). __h_0_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        ((__h_case_result ) ? ({ /* cicili#Progn4622 */
                            nitem ;
                          }) : ({ /* cicili#Let4626 */
                            // ----------
                            
                            ({ /* cicili#Progn4630 */
                              ((BTree_int_User_pair_t){ });
                            });
                          }));
                      });
                    })), pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Internal_BTree_int_User (take_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ), ({ /* cicili#Let4641 */
                        __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4643 */
                          __auto_type r1  = take_List_Rc_BTree_int_User (L_BTree_int_User , children );
                          // ----------
                          ((void)(r1 -> __h_table -> freeClass ));
                          r1 ;
                        });
                        // ----------
                        fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4653 */
                            Rc_BTree_int_User __ciciliC_4652 (Rc_BTree_int_User __h_value ) {
                              return clone_Rc_BTree_int_User (__h_value );
                            }
                            __ciciliC_4652 ;
                          }), r1 );
                      }))), new_Rc_BTree_int_User (Internal_BTree_int_User (drop_List_BTree_int_User_pair_t (L_BTree_int_User , items ), ({ /* cicili#Let4664 */
                        __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4666 */
                          __auto_type r1  = drop_List_Rc_BTree_int_User (L_BTree_int_User , children );
                          // ----------
                          ((void)(r1 -> __h_table -> freeClass ));
                          r1 ;
                        });
                        // ----------
                        fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4676 */
                            Rc_BTree_int_User __ciciliC_4675 (Rc_BTree_int_User __h_value ) {
                              return clone_Rc_BTree_int_User (__h_value );
                            }
                            __ciciliC_4675 ;
                          }), r1 );
                      })))}), 2)) : tree );
                }) : ({ /* cicili#Let4683 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  
                  ({ /* cicili#Let4687 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn4688 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn4691 */
                        (((len_List_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? Branch_BTree_int_User (wrap_List_BTree_int_User_pair_t (({ /* cicili#Let4701 */
                            __auto_type match4700  = nth_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                            typeof((((match4700 . __h_data ). Just ). __h_0_mem )) nitem ;
                            // ----------
                            
                            ({ /* cicili#Let4707 */
                              bool __h_case_result  = (true  &&  (((match4700 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4708 */
                                    (nitem  =  (((match4700 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              ((__h_case_result ) ? ({ /* cicili#Progn4711 */
                                  nitem ;
                                }) : ({ /* cicili#Let4715 */
                                  // ----------
                                  
                                  ({ /* cicili#Progn4719 */
                                    ((BTree_int_User_pair_t){ });
                                  });
                                }));
                            });
                          })), pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Leaf_BTree_int_User (take_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ))), new_Rc_BTree_int_User (Leaf_BTree_int_User (drop_List_BTree_int_User_pair_t (L_BTree_int_User , items )))}), 2)) : tree );
                      }) : ({ /* cicili#Let4736 */
                        // ----------
                        
                        ({ /* cicili#Progn4740 */
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
BTree_int_User mergeUp_BTree_int_User (List_BTree_int_User_pair_t items , List_Rc_BTree_int_User children , int pitem_index , int pchild_index , List_BTree_int_User_pair_t left_items , List_Rc_BTree_int_User left_children , List_BTree_int_User_pair_t right_items , List_Rc_BTree_int_User right_children ) {
  return ({ /* cicili#Let4747 */
      __auto_type merged  = Internal_BTree_int_User (append_List_BTree_int_User_pair_t (left_items , right_items ), ({ /* cicili#Let4752 */
        __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4754 */
          __auto_type r1  = append_List_Rc_BTree_int_User (left_children , right_children );
          // ----------
          ((void)(r1 -> __h_table -> freeClass ));
          r1 ;
        });
        // ----------
        fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4763 */
            Rc_BTree_int_User __ciciliC_4762 (Rc_BTree_int_User __h_value ) {
              return clone_Rc_BTree_int_User (__h_value );
            }
            __ciciliC_4762 ;
          }), r1 );
      }));
      // ----------
      ({ /* cicili#Let4772 */
        __auto_type tmp_child  = splitForDelete_BTree_int_User (merged );
        typeof((((tmp_child -> __h_data ). Branch ). __h_0_mem )) __h_match4770_0_arg ;
        typeof((((__h_match4770_0_arg -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((tmp_child -> __h_data ). Branch ). __h_1_mem )) tmp_children ;
        // ----------
        
        ({ /* cicili#Let4777 */
          bool __h_case_result  = (true  &&  (((tmp_child -> __h_ctor ) ==  __h_Branch_t  ) &&  ((({ /* cicili#Progn4778 */
                    (__h_match4770_0_arg  =  (((tmp_child -> __h_data ). Branch ). __h_0_mem ) );
                    true ;
                  }) &&  (true  &&  (((__h_match4770_0_arg -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn4780 */
                        (head  =  (((__h_match4770_0_arg -> __h_data ). Cons ). __h_0_mem ) );
                        true ;
                      }) ) ) ) &&  ({ /* cicili#Progn4782 */
                  (tmp_children  =  (((tmp_child -> __h_data ). Branch ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn4785 */
              ({ /* cicili#Let4788 */
                __auto_type merged  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4790 */
                  __auto_type merged  = merged ;
                  // ----------
                  ((void)(merged -> __h_table -> freeClass ));
                  merged ;
                });
                __auto_type tmp_child  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4793 */
                  __auto_type tmp_child  = tmp_child ;
                  // ----------
                  ((void)(tmp_child -> __h_table -> freeClass ));
                  tmp_child ;
                });
                // ----------
                Internal_BTree_int_User (replaceAt_List_BTree_int_User_pair_t (items , head , pitem_index ), ({ /* cicili#Let4800 */
                    __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4802 */
                      __auto_type r1  = deleteAt_List_Rc_BTree_int_User (children , pchild_index );
                      // ----------
                      ((void)(r1 -> __h_table -> freeClass ));
                      r1 ;
                    });
                    __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4806 */
                      __auto_type r2  = take_List_Rc_BTree_int_User (pchild_index , r1 );
                      // ----------
                      ((void)(r2 -> __h_table -> freeClass ));
                      r2 ;
                    });
                    __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4810 */
                      __auto_type r3  = drop_List_Rc_BTree_int_User ((pchild_index  +  1 ), r1 );
                      // ----------
                      ((void)(r3 -> __h_table -> freeClass ));
                      r3 ;
                    });
                    __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4814 */
                      __auto_type r4  = append_List_Rc_BTree_int_User (tmp_children , r3 );
                      // ----------
                      ((void)(r4 -> __h_table -> freeClass ));
                      r4 ;
                    });
                    __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4818 */
                      __auto_type r5  = append_List_Rc_BTree_int_User (r2 , r4 );
                      // ----------
                      ((void)(r5 -> __h_table -> freeClass ));
                      r5 ;
                    });
                    // ----------
                    fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4827 */
                        Rc_BTree_int_User __ciciliC_4826 (Rc_BTree_int_User __h_value ) {
                          return clone_Rc_BTree_int_User (__h_value );
                        }
                        __ciciliC_4826 ;
                      }), r5 );
                  }));
              });
            }) : ({ /* cicili#Let4834 */
              // ----------
              
              ({ /* cicili#Let4838 */
                bool __h_case_result  = (true  &&  ((tmp_child -> __h_ctor ) ==  __h_Internal_t  ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn4840 */
                    Internal_BTree_int_User (deleteAt_List_BTree_int_User_pair_t (items , pitem_index ), ({ /* cicili#Let4846 */
                        __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4848 */
                          __auto_type r1  = deleteAt_List_Rc_BTree_int_User (children , pchild_index );
                          // ----------
                          ((void)(r1 -> __h_table -> freeClass ));
                          r1 ;
                        });
                        __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let4852 */
                          __auto_type r2  = new_Rc_BTree_int_User (merged );
                          // ----------
                          ((void)((r2 . __h_table )-> freeData ));
                          r2 ;
                        });
                        __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4856 */
                          __auto_type r3  = replaceAt_List_Rc_BTree_int_User (r1 , r2 , pchild_index );
                          // ----------
                          ((void)(r3 -> __h_table -> freeClass ));
                          r3 ;
                        });
                        // ----------
                        fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4865 */
                            Rc_BTree_int_User __ciciliC_4864 (Rc_BTree_int_User __h_value ) {
                              return clone_Rc_BTree_int_User (__h_value );
                            }
                            __ciciliC_4864 ;
                          }), r3 );
                      }));
                  }) : ({ /* cicili#Let4872 */
                    // ----------
                    
                    ({ /* cicili#Progn4876 */
                      Leaf_BTree_int_User (Nil_BTree_int_User_pair_t ());
                    });
                  }));
              });
            }));
        });
      });
    });
}
Either_BTree_int_User_Error_BTree_int_User deleteWithParent_BTree_int_User (Maybe_BTree_int_User wparent , int pitem_index , int pchild_index , BTree_int_User tree , int skey , void (*callback) (BTree_int_User_pair_t item ));
Either_BTree_int_User_Error_BTree_int_User borrowLeaf_BTree_int_User (List_BTree_int_User_pair_t items , List_Rc_BTree_int_User children , Maybe_List_BTree_int_User_pair_t wleft , List_BTree_int_User_pair_t current , int index , BTree_int_User nchild , void (*callback) (BTree_int_User_pair_t item )) {
  Either_BTree_int_User_Error_BTree_int_User borrowRight (List_BTree_int_User_pair_t child_items ) {
    return ({ /* cicili#Let4903 */
        __auto_type match4902  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
        typeof((((match4902 . __h_data ). Just ). __h_0_mem )) right_child_rc ;
        // ----------
        
        ({ /* cicili#Let4908 */
          bool __h_case_result  = (true  &&  (((match4902 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4909 */
                (right_child_rc  =  (((match4902 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn4912 */
              ({ /* cicili#Let4915 */
                __auto_type __h_matchbox  = right_child_rc ;
                // ----------
                ({ /* cicili#Let4919 */
                  __auto_type match4918  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                  typeof((((match4918 . __h_data ). Just ). __h_0_mem )) unboxed ;
                  // ----------
                  
                  ({ /* cicili#Let4924 */
                    bool __h_case_result  = (true  &&  (((match4918 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4925 */
                          (unboxed  =  (((match4918 . __h_data ). Just ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn4928 */
                        ({ /* cicili#Let4932 */
                          typeof((((unboxed -> __h_data ). Leaf ). __h_0_mem )) right_child_items ;
                          // ----------
                          
                          ({ /* cicili#Let4936 */
                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn4937 */
                                  (right_child_items  =  (((unboxed -> __h_data ). Leaf ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn4940 */
                                (((hasLen_List_BTree_int_User_pair_t (right_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let4948 */
                                    __auto_type first  = right_child_items ;
                                    typeof((((first -> __h_data ). Cons ). __h_0_mem )) first_item ;
                                    typeof((((first -> __h_data ). Cons ). __h_1_mem )) tail ;
                                    // ----------
                                    
                                    ({ /* cicili#Let4952 */
                                      bool __h_case_result  = (true  &&  (((first -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn4953 */
                                              (first_item  =  (((first -> __h_data ). Cons ). __h_0_mem ) );
                                              true ;
                                            }) &&  ({ /* cicili#Progn4955 */
                                              (tail  =  (((first -> __h_data ). Cons ). __h_1_mem ) );
                                              true ;
                                            }) ) ) );
                                      // ----------
                                      ((__h_case_result ) ? ({ /* cicili#Progn4958 */
                                          Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , first_item , current ), ({ /* cicili#Let4966 */
                                              __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4968 */
                                                __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                                // ----------
                                                ((void)(r1 -> __h_table -> freeClass ));
                                                r1 ;
                                              });
                                              __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4972 */
                                                __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4978 */
                                                  Rc_BTree_int_User __ciciliC_4977 (Rc_BTree_int_User __h_value ) {
                                                    return clone_Rc_BTree_int_User (__h_value );
                                                  }
                                                  __ciciliC_4977 ;
                                                }), r1 );
                                                // ----------
                                                ((void)(r2 -> __h_table -> freeClass ));
                                                r2 ;
                                              });
                                              __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4985 */
                                                __auto_type r3  = drop_List_Rc_BTree_int_User ((index  +  2 ), children );
                                                // ----------
                                                ((void)(r3 -> __h_table -> freeClass ));
                                                r3 ;
                                              });
                                              __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let4989 */
                                                __auto_type r4  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn4995 */
                                                  Rc_BTree_int_User __ciciliC_4994 (Rc_BTree_int_User __h_value ) {
                                                    return clone_Rc_BTree_int_User (__h_value );
                                                  }
                                                  __ciciliC_4994 ;
                                                }), r3 );
                                                // ----------
                                                ((void)(r4 -> __h_table -> freeClass ));
                                                r4 ;
                                              });
                                              __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5002 */
                                                __auto_type r5  = take_List_BTree_int_User_pair_t (1, current );
                                                // ----------
                                                ((void)(r5 -> __h_table -> freeClass ));
                                                r5 ;
                                              });
                                              __auto_type r7  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5006 */
                                                __auto_type r7  = pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Leaf_BTree_int_User (append_List_BTree_int_User_pair_t (child_items , r5 ))), new_Rc_BTree_int_User (Leaf_BTree_int_User (copy_List_BTree_int_User_pair_t (tail )))}), 2);
                                                // ----------
                                                ((void)(r7 -> __h_table -> freeClass ));
                                                r7 ;
                                              });
                                              __auto_type r6  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5019 */
                                                __auto_type r6  = append_List_Rc_BTree_int_User (r7 , r4 );
                                                // ----------
                                                ((void)(r6 -> __h_table -> freeClass ));
                                                r6 ;
                                              });
                                              // ----------
                                              append_List_Rc_BTree_int_User (r2 , r6 );
                                            })));
                                        }) : ({ /* cicili#Let5026 */
                                          // ----------
                                          
                                          ({ /* cicili#Progn5030 */
                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight R1"));
                                          });
                                        }));
                                    });
                                  }) : ({ /* cicili#Let5037 */
                                    typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
                                    // ----------
                                    
                                    ({ /* cicili#Let5041 */
                                      bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5042 */
                                            (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      ((__h_case_result ) ? ({ /* cicili#Progn5045 */
                                          Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (delete_List_BTree_int_User_pair_t (items , current ), ({ /* cicili#Let5053 */
                                              __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5055 */
                                                __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                                // ----------
                                                ((void)(r1 -> __h_table -> freeClass ));
                                                r1 ;
                                              });
                                              __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5059 */
                                                __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5065 */
                                                  Rc_BTree_int_User __ciciliC_5064 (Rc_BTree_int_User __h_value ) {
                                                    return clone_Rc_BTree_int_User (__h_value );
                                                  }
                                                  __ciciliC_5064 ;
                                                }), r1 );
                                                // ----------
                                                ((void)(r2 -> __h_table -> freeClass ));
                                                r2 ;
                                              });
                                              __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5072 */
                                                __auto_type r3  = drop_List_Rc_BTree_int_User ((index  +  2 ), children );
                                                // ----------
                                                ((void)(r3 -> __h_table -> freeClass ));
                                                r3 ;
                                              });
                                              __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5076 */
                                                __auto_type r4  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5082 */
                                                  Rc_BTree_int_User __ciciliC_5081 (Rc_BTree_int_User __h_value ) {
                                                    return clone_Rc_BTree_int_User (__h_value );
                                                  }
                                                  __ciciliC_5081 ;
                                                }), r3 );
                                                // ----------
                                                ((void)(r4 -> __h_table -> freeClass ));
                                                r4 ;
                                              });
                                              __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5089 */
                                                __auto_type r5  = wrap_List_BTree_int_User_pair_t (head );
                                                // ----------
                                                ((void)(r5 -> __h_table -> freeClass ));
                                                r5 ;
                                              });
                                              __auto_type r6  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5093 */
                                                __auto_type r6  = append_List_BTree_int_User_pair_t (child_items , r5 );
                                                // ----------
                                                ((void)(r6 -> __h_table -> freeClass ));
                                                r6 ;
                                              });
                                              __auto_type r8  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5097 */
                                                __auto_type r8  = push_List_Rc_BTree_int_User (new_Rc_BTree_int_User (Leaf_BTree_int_User (append_List_BTree_int_User_pair_t (r6 , right_child_items ))), r4 );
                                                // ----------
                                                ((void)(r8 -> __h_table -> freeClass ));
                                                r8 ;
                                              });
                                              // ----------
                                              append_List_Rc_BTree_int_User (r2 , r8 );
                                            })));
                                        }) : ({ /* cicili#Let5108 */
                                          // ----------
                                          
                                          ({ /* cicili#Progn5112 */
                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight R2"));
                                          });
                                        }));
                                    });
                                  }));
                              }) : ({ /* cicili#Let5119 */
                                // ----------
                                
                                ({ /* cicili#Progn5123 */
                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight 3"));
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let5130 */
                        // ----------
                        
                        ({ /* cicili#Progn5134 */
                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight 3"));
                        });
                      }));
                  });
                });
              });
            }) : ({ /* cicili#Let5141 */
              // ----------
              
              ({ /* cicili#Progn5145 */
                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight 4"));
              });
            }));
        });
      });
  }
  Either_BTree_int_User_Error_BTree_int_User borrowLeft (List_BTree_int_User_pair_t child_items ) {
    return ({ /* cicili#Let5158 */
        typeof((((wleft . __h_data ). Just ). __h_0_mem )) left ;
        typeof((((left -> __h_data ). Cons ). __h_0_mem )) left_item ;
        // ----------
        
        ({ /* cicili#Let5162 */
          bool __h_case_result  = (true  &&  (((wleft . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn5163 */
                  (left  =  (((wleft . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) &&  (true  &&  (((left -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5165 */
                      (left_item  =  (((left -> __h_data ). Cons ). __h_0_mem ) );
                      true ;
                    }) ) ) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn5168 */
              ({ /* cicili#Let5172 */
                __auto_type match5171  = nth_List_Rc_BTree_int_User ((index  -  1 ), children );
                typeof((((match5171 . __h_data ). Just ). __h_0_mem )) left_child_rc ;
                // ----------
                
                ({ /* cicili#Let5177 */
                  bool __h_case_result  = (true  &&  (((match5171 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5178 */
                        (left_child_rc  =  (((match5171 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn5181 */
                      ({ /* cicili#Let5184 */
                        __auto_type __h_matchbox  = left_child_rc ;
                        // ----------
                        ({ /* cicili#Let5188 */
                          __auto_type match5187  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                          typeof((((match5187 . __h_data ). Just ). __h_0_mem )) unboxed ;
                          // ----------
                          
                          ({ /* cicili#Let5193 */
                            bool __h_case_result  = (true  &&  (((match5187 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5194 */
                                  (unboxed  =  (((match5187 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn5197 */
                                ({ /* cicili#Let5201 */
                                  typeof((((unboxed -> __h_data ). Leaf ). __h_0_mem )) left_child_items ;
                                  // ----------
                                  
                                  ({ /* cicili#Let5205 */
                                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn5206 */
                                          (left_child_items  =  (((unboxed -> __h_data ). Leaf ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    ((__h_case_result ) ? ({ /* cicili#Progn5209 */
                                        (((hasLen_List_BTree_int_User_pair_t (left_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let5217 */
                                            __auto_type last  = last_List_BTree_int_User_pair_t (left_child_items );
                                            typeof((((last -> __h_data ). Cons ). __h_0_mem )) last_item ;
                                            // ----------
                                            
                                            ({ /* cicili#Let5222 */
                                              bool __h_case_result  = (true  &&  (((last -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5223 */
                                                    (last_item  =  (((last -> __h_data ). Cons ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              ((__h_case_result ) ? ({ /* cicili#Progn5226 */
                                                  ({ /* cicili#Let5229 */
                                                    __auto_type last  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5231 */
                                                      __auto_type last  = last ;
                                                      // ----------
                                                      ((void)(last -> __h_table -> freeClass ));
                                                      last ;
                                                    });
                                                    // ----------
                                                    Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , last_item , left ), ({ /* cicili#Let5240 */
                                                        __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5242 */
                                                          __auto_type r1  = take_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                          // ----------
                                                          ((void)(r1 -> __h_table -> freeClass ));
                                                          r1 ;
                                                        });
                                                        __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5246 */
                                                          __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5252 */
                                                            Rc_BTree_int_User __ciciliC_5251 (Rc_BTree_int_User __h_value ) {
                                                              return clone_Rc_BTree_int_User (__h_value );
                                                            }
                                                            __ciciliC_5251 ;
                                                          }), r1 );
                                                          // ----------
                                                          ((void)(r2 -> __h_table -> freeClass ));
                                                          r2 ;
                                                        });
                                                        __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5259 */
                                                          __auto_type r3  = drop_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                          // ----------
                                                          ((void)(r3 -> __h_table -> freeClass ));
                                                          r3 ;
                                                        });
                                                        __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5263 */
                                                          __auto_type r4  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5269 */
                                                            Rc_BTree_int_User __ciciliC_5268 (Rc_BTree_int_User __h_value ) {
                                                              return clone_Rc_BTree_int_User (__h_value );
                                                            }
                                                            __ciciliC_5268 ;
                                                          }), r3 );
                                                          // ----------
                                                          ((void)(r4 -> __h_table -> freeClass ));
                                                          r4 ;
                                                        });
                                                        __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5276 */
                                                          __auto_type r5  = pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Leaf_BTree_int_User (init_List_BTree_int_User_pair_t (left_child_items ))), new_Rc_BTree_int_User (Leaf_BTree_int_User (push_List_BTree_int_User_pair_t (left_item , child_items )))}), 2);
                                                          // ----------
                                                          ((void)(r5 -> __h_table -> freeClass ));
                                                          r5 ;
                                                        });
                                                        __auto_type r7  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5289 */
                                                          __auto_type r7  = append_List_Rc_BTree_int_User (r5 , r4 );
                                                          // ----------
                                                          ((void)(r7 -> __h_table -> freeClass ));
                                                          r7 ;
                                                        });
                                                        // ----------
                                                        append_List_Rc_BTree_int_User (r2 , r7 );
                                                      })));
                                                  });
                                                }) : ({ /* cicili#Let5296 */
                                                  // ----------
                                                  
                                                  ({ /* cicili#Progn5300 */
                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowLeft 2"));
                                                  });
                                                }));
                                            });
                                          }) : ({ /* cicili#Let5307 */
                                            __auto_type match5306  = borrowRight (child_items );
                                            // ----------
                                            
                                            ({ /* cicili#Let5311 */
                                              bool __h_case_result  = (true  &&  ((match5306 . __h_ctor ) ==  __h_Left_t  ) );
                                              // ----------
                                              ((__h_case_result ) ? ({ /* cicili#Progn5313 */
                                                  Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (delete_List_BTree_int_User_pair_t (items , left ), ({ /* cicili#Let5321 */
                                                      __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5323 */
                                                        __auto_type r1  = take_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                        // ----------
                                                        ((void)(r1 -> __h_table -> freeClass ));
                                                        r1 ;
                                                      });
                                                      __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5327 */
                                                        __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5333 */
                                                          Rc_BTree_int_User __ciciliC_5332 (Rc_BTree_int_User __h_value ) {
                                                            return clone_Rc_BTree_int_User (__h_value );
                                                          }
                                                          __ciciliC_5332 ;
                                                        }), r1 );
                                                        // ----------
                                                        ((void)(r2 -> __h_table -> freeClass ));
                                                        r2 ;
                                                      });
                                                      __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5340 */
                                                        __auto_type r3  = drop_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                        // ----------
                                                        ((void)(r3 -> __h_table -> freeClass ));
                                                        r3 ;
                                                      });
                                                      __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5344 */
                                                        __auto_type r4  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5350 */
                                                          Rc_BTree_int_User __ciciliC_5349 (Rc_BTree_int_User __h_value ) {
                                                            return clone_Rc_BTree_int_User (__h_value );
                                                          }
                                                          __ciciliC_5349 ;
                                                        }), r3 );
                                                        // ----------
                                                        ((void)(r4 -> __h_table -> freeClass ));
                                                        r4 ;
                                                      });
                                                      __auto_type r8  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5357 */
                                                        __auto_type r8  = wrap_List_BTree_int_User_pair_t (left_item );
                                                        // ----------
                                                        ((void)(r8 -> __h_table -> freeClass ));
                                                        r8 ;
                                                      });
                                                      __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5361 */
                                                        __auto_type r5  = append_List_BTree_int_User_pair_t (left_child_items , r8 );
                                                        // ----------
                                                        ((void)(r5 -> __h_table -> freeClass ));
                                                        r5 ;
                                                      });
                                                      __auto_type r7  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5365 */
                                                        __auto_type r7  = push_List_Rc_BTree_int_User (new_Rc_BTree_int_User (Leaf_BTree_int_User (append_List_BTree_int_User_pair_t (r5 , child_items ))), r4 );
                                                        // ----------
                                                        ((void)(r7 -> __h_table -> freeClass ));
                                                        r7 ;
                                                      });
                                                      // ----------
                                                      append_List_Rc_BTree_int_User (r2 , r7 );
                                                    })));
                                                }) : ({ /* cicili#Let5376 */
                                                  __auto_type right  = match5306 ;
                                                  // ----------
                                                  
                                                  ({ /* cicili#Progn5380 */
                                                    right ;
                                                  });
                                                }));
                                            });
                                          }));
                                      }) : ({ /* cicili#Let5384 */
                                        // ----------
                                        
                                        ({ /* cicili#Progn5388 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowLeft 3"));
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let5395 */
                                // ----------
                                
                                ({ /* cicili#Progn5399 */
                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowLeft 4"));
                                });
                              }));
                          });
                        });
                      });
                    }) : ({ /* cicili#Let5406 */
                      // ----------
                      
                      ({ /* cicili#Progn5410 */
                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowLeft 5"));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5417 */
              // ----------
              
              ({ /* cicili#Progn5421 */
                borrowRight (child_items );
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let5425 */
      __auto_type result  = ({ /* cicili#Let5428 */
        typeof((((nchild -> __h_data ). Branch ). __h_0_mem )) child_items ;
        // ----------
        
        ({ /* cicili#Let5432 */
          bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn5433 */
                (child_items  =  (((nchild -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn5436 */
              (((hasLen_List_BTree_int_User_pair_t (child_items , (L_BTree_int_User  -  1 )) ==  (L_BTree_int_User  -  1 ) )) ? Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let5448 */
                  __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5450 */
                    __auto_type r1  = new_Rc_BTree_int_User (nchild );
                    // ----------
                    ((void)((r1 . __h_table )-> freeData ));
                    r1 ;
                  });
                  __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5454 */
                    __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                    // ----------
                    ((void)(r2 -> __h_table -> freeClass ));
                    r2 ;
                  });
                  // ----------
                  fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5463 */
                      Rc_BTree_int_User __ciciliC_5462 (Rc_BTree_int_User __h_value ) {
                        return clone_Rc_BTree_int_User (__h_value );
                      }
                      __ciciliC_5462 ;
                    }), r2 );
                }))) : ({ /* cicili#Let5469 */
                  __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5471 */
                    __auto_type nchild  = nchild ;
                    // ----------
                    ((void)(nchild -> __h_table -> freeClass ));
                    nchild ;
                  });
                  // ----------
                  borrowLeft (child_items );
                }));
            }) : ({ /* cicili#Let5476 */
              typeof((((nchild -> __h_data ). Internal ). __h_0_mem )) child_items ;
              // ----------
              
              ({ /* cicili#Let5480 */
                bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn5481 */
                      (child_items  =  (((nchild -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn5484 */
                    (((hasLen_List_BTree_int_User_pair_t (child_items , (L_BTree_int_User  -  1 )) ==  (L_BTree_int_User  -  1 ) )) ? Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let5496 */
                        __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5498 */
                          __auto_type r1  = new_Rc_BTree_int_User (nchild );
                          // ----------
                          ((void)((r1 . __h_table )-> freeData ));
                          r1 ;
                        });
                        __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5502 */
                          __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                          // ----------
                          ((void)(r2 -> __h_table -> freeClass ));
                          r2 ;
                        });
                        // ----------
                        fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5511 */
                            Rc_BTree_int_User __ciciliC_5510 (Rc_BTree_int_User __h_value ) {
                              return clone_Rc_BTree_int_User (__h_value );
                            }
                            __ciciliC_5510 ;
                          }), r2 );
                      }))) : ({ /* cicili#Let5517 */
                        __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5519 */
                          __auto_type nchild  = nchild ;
                          // ----------
                          ((void)(nchild -> __h_table -> freeClass ));
                          nchild ;
                        });
                        // ----------
                        borrowLeft (child_items );
                      }));
                  }) : ({ /* cicili#Let5524 */
                    typeof((((nchild -> __h_data ). Leaf ). __h_0_mem )) child_items ;
                    // ----------
                    
                    ({ /* cicili#Let5528 */
                      bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn5529 */
                            (child_items  =  (((nchild -> __h_data ). Leaf ). __h_0_mem ) );
                            true ;
                          }) ) );
                      // ----------
                      ((__h_case_result ) ? ({ /* cicili#Progn5532 */
                          (((hasLen_List_BTree_int_User_pair_t (child_items , (L_BTree_int_User  -  1 )) ==  (L_BTree_int_User  -  1 ) )) ? Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let5544 */
                              __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5546 */
                                __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                // ----------
                                ((void)((r1 . __h_table )-> freeData ));
                                r1 ;
                              });
                              __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5550 */
                                __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                                // ----------
                                ((void)(r2 -> __h_table -> freeClass ));
                                r2 ;
                              });
                              // ----------
                              fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5559 */
                                  Rc_BTree_int_User __ciciliC_5558 (Rc_BTree_int_User __h_value ) {
                                    return clone_Rc_BTree_int_User (__h_value );
                                  }
                                  __ciciliC_5558 ;
                                }), r2 );
                            }))) : ({ /* cicili#Let5565 */
                              __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5567 */
                                __auto_type nchild  = nchild ;
                                // ----------
                                ((void)(nchild -> __h_table -> freeClass ));
                                nchild ;
                              });
                              // ----------
                              borrowLeft (child_items );
                            }));
                        }) : ({ /* cicili#Let5572 */
                          // ----------
                          
                          ({ /* cicili#Progn5576 */
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
Either_BTree_int_User_Error_BTree_int_User borrowInternal_BTree_int_User (Maybe_BTree_int_User wtree , List_BTree_int_User_pair_t items , List_Rc_BTree_int_User children , List_BTree_int_User_pair_t current , int index , void (*callback) (BTree_int_User_pair_t item )) {
  Either_BTree_int_User_Error_BTree_int_User borrowRightInternal (List_BTree_int_User_pair_t left_child_items , List_Rc_BTree_int_User left_child_children ) {
    return ({ /* cicili#Let5601 */
        __auto_type match5600  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
        typeof((((match5600 . __h_data ). Just ). __h_0_mem )) right_child_rc ;
        // ----------
        
        ({ /* cicili#Let5606 */
          bool __h_case_result  = (true  &&  (((match5600 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5607 */
                (right_child_rc  =  (((match5600 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn5610 */
              ({ /* cicili#Let5614 */
                __auto_type match5613  = get_Rc_BTree_int_User (right_child_rc );
                typeof((((match5613 . __h_data ). Just ). __h_0_mem )) right_child ;
                // ----------
                
                ({ /* cicili#Let5619 */
                  bool __h_case_result  = (true  &&  (((match5613 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5620 */
                        (right_child  =  (((match5613 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn5623 */
                      ({ /* cicili#Let5627 */
                        typeof((((right_child -> __h_data ). Branch ). __h_0_mem )) right_child_items ;
                        typeof((((right_child -> __h_data ). Branch ). __h_1_mem )) right_child_children ;
                        // ----------
                        
                        ({ /* cicili#Let5631 */
                          bool __h_case_result  = (true  &&  (((right_child -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn5632 */
                                  (right_child_items  =  (((right_child -> __h_data ). Branch ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn5634 */
                                  (right_child_children  =  (((right_child -> __h_data ). Branch ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn5637 */
                              (((hasLen_List_BTree_int_User_pair_t (right_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let5646 */
                                  __auto_type match5644  = min_BTree_int_User (right_child );
                                  typeof((((match5644 . __h_data ). Just ). __h_0_mem )) min ;
                                  typeof((min . __h_0_mem )) min_key ;
                                  // ----------
                                  
                                  ({ /* cicili#Let5651 */
                                    bool __h_case_result  = (true  &&  (((match5644 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn5652 */
                                            (min  =  (((match5644 . __h_data ). Just ). __h_0_mem ) );
                                            true ;
                                          }) &&  (true  &&  ({ /* cicili#Progn5654 */
                                              (min_key  =  (min . __h_0_mem ) );
                                              true ;
                                            }) ) ) ) );
                                    // ----------
                                    ((__h_case_result ) ? ({ /* cicili#Progn5657 */
                                        ({ /* cicili#Let5661 */
                                          __auto_type match5660  = delete_BTree_int_User (right_child , min_key , NULL );
                                          typeof((((match5660 . __h_data ). Right ). __h_0_mem )) nchild ;
                                          // ----------
                                          
                                          ({ /* cicili#Let5666 */
                                            bool __h_case_result  = (true  &&  (((match5660 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn5667 */
                                                  (nchild  =  (((match5660 . __h_data ). Right ). __h_0_mem ) );
                                                  true ;
                                                }) ) );
                                            // ----------
                                            ((__h_case_result ) ? ({ /* cicili#Progn5670 */
                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , min , current ), ({ /* cicili#Let5678 */
                                                    __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5680 */
                                                      __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                      // ----------
                                                      ((void)((r1 . __h_table )-> freeData ));
                                                      r1 ;
                                                    });
                                                    __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5684 */
                                                      __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , (index  +  1 ));
                                                      // ----------
                                                      ((void)(r2 -> __h_table -> freeClass ));
                                                      r2 ;
                                                    });
                                                    // ----------
                                                    fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5693 */
                                                        Rc_BTree_int_User __ciciliC_5692 (Rc_BTree_int_User __h_value ) {
                                                          return clone_Rc_BTree_int_User (__h_value );
                                                        }
                                                        __ciciliC_5692 ;
                                                      }), r2 );
                                                  })));
                                              }) : ({ /* cicili#Let5700 */
                                                __auto_type left  = match5660 ;
                                                // ----------
                                                
                                                ({ /* cicili#Progn5704 */
                                                  left ;
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* cicili#Let5708 */
                                        // ----------
                                        
                                        ({ /* cicili#Progn5712 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 1"));
                                        });
                                      }));
                                  });
                                }) : ({ /* cicili#Let5720 */
                                  typeof((((current -> __h_data ). Cons ). __h_0_mem )) current_item ;
                                  typeof((current_item . __h_0_mem )) current_key ;
                                  // ----------
                                  
                                  ({ /* cicili#Let5724 */
                                    bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5725 */
                                            (current_item  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                                            true ;
                                          }) &&  (true  &&  ({ /* cicili#Progn5727 */
                                              (current_key  =  (current_item . __h_0_mem ) );
                                              true ;
                                            }) ) ) ) );
                                    // ----------
                                    ((__h_case_result ) ? ({ /* cicili#Progn5730 */
                                        ({ /* cicili#Let5733 */
                                          __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5735 */
                                            __auto_type r1  = push_List_BTree_int_User_pair_t (current_item , right_child_items );
                                            // ----------
                                            ((void)(r1 -> __h_table -> freeClass ));
                                            r1 ;
                                          });
                                          __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5739 */
                                            __auto_type r2  = append_List_Rc_BTree_int_User (left_child_children , right_child_children );
                                            // ----------
                                            ((void)(r2 -> __h_table -> freeClass ));
                                            r2 ;
                                          });
                                          __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5743 */
                                            __auto_type r4  = Internal_BTree_int_User (append_List_BTree_int_User_pair_t (left_child_items , r1 ), fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5752 */
                                              Rc_BTree_int_User __ciciliC_5751 (Rc_BTree_int_User __h_value ) {
                                                return clone_Rc_BTree_int_User (__h_value );
                                              }
                                              __ciciliC_5751 ;
                                            }), r2 ));
                                            // ----------
                                            ((void)(r4 -> __h_table -> freeClass ));
                                            r4 ;
                                          });
                                          __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5759 */
                                            __auto_type r5  = take_List_Rc_BTree_int_User (index , children );
                                            // ----------
                                            ((void)(r5 -> __h_table -> freeClass ));
                                            r5 ;
                                          });
                                          __auto_type r7  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5763 */
                                            __auto_type r7  = drop_List_Rc_BTree_int_User ((index  +  2 ), children );
                                            // ----------
                                            ((void)(r7 -> __h_table -> freeClass ));
                                            r7 ;
                                          });
                                          // ----------
                                          ({ /* cicili#Let5769 */
                                            __auto_type match5768  = delete_BTree_int_User (r4 , current_key , NULL );
                                            typeof((((match5768 . __h_data ). Right ). __h_0_mem )) ntree ;
                                            // ----------
                                            
                                            ({ /* cicili#Let5774 */
                                              bool __h_case_result  = (true  &&  (((match5768 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn5775 */
                                                    (ntree  =  (((match5768 . __h_data ). Right ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              ((__h_case_result ) ? ({ /* cicili#Progn5778 */
                                                  ({ /* cicili#Let5782 */
                                                    __auto_type tmp_result  = splitForDelete_BTree_int_User (ntree );
                                                    typeof((((tmp_result -> __h_data ). Branch ). __h_0_mem )) branch_items ;
                                                    typeof((((tmp_result -> __h_data ). Branch ). __h_1_mem )) branch_children ;
                                                    // ----------
                                                    
                                                    ({ /* cicili#Let5787 */
                                                      bool __h_case_result  = (true  &&  (((tmp_result -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn5788 */
                                                              (branch_items  =  (((tmp_result -> __h_data ). Branch ). __h_0_mem ) );
                                                              true ;
                                                            }) &&  ({ /* cicili#Progn5790 */
                                                              (branch_children  =  (((tmp_result -> __h_data ). Branch ). __h_1_mem ) );
                                                              true ;
                                                            }) ) ) );
                                                      // ----------
                                                      ((__h_case_result ) ? ({ /* cicili#Progn5793 */
                                                          ({ /* cicili#Let5797 */
                                                            typeof((((branch_items -> __h_data ). Cons ). __h_0_mem )) branch_head ;
                                                            // ----------
                                                            
                                                            ({ /* cicili#Let5801 */
                                                              bool __h_case_result  = (true  &&  (((branch_items -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5802 */
                                                                    (branch_head  =  (((branch_items -> __h_data ). Cons ). __h_0_mem ) );
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              ((__h_case_result ) ? ({ /* cicili#Progn5805 */
                                                                  ({ /* cicili#Let5808 */
                                                                    __auto_type ntree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5810 */
                                                                      __auto_type ntree  = ntree ;
                                                                      // ----------
                                                                      ((void)(ntree -> __h_table -> freeClass ));
                                                                      ntree ;
                                                                    });
                                                                    __auto_type tmp_result  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5813 */
                                                                      __auto_type tmp_result  = tmp_result ;
                                                                      // ----------
                                                                      ((void)(tmp_result -> __h_table -> freeClass ));
                                                                      tmp_result ;
                                                                    });
                                                                    // ----------
                                                                    Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , branch_head , current ), ({ /* cicili#Let5822 */
                                                                        __auto_type r10  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5824 */
                                                                          __auto_type r10  = append_List_Rc_BTree_int_User (branch_children , r7 );
                                                                          // ----------
                                                                          ((void)(r10 -> __h_table -> freeClass ));
                                                                          r10 ;
                                                                        });
                                                                        __auto_type r11  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5828 */
                                                                          __auto_type r11  = append_List_Rc_BTree_int_User (r5 , r10 );
                                                                          // ----------
                                                                          ((void)(r11 -> __h_table -> freeClass ));
                                                                          r11 ;
                                                                        });
                                                                        // ----------
                                                                        fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5837 */
                                                                            Rc_BTree_int_User __ciciliC_5836 (Rc_BTree_int_User __h_value ) {
                                                                              return clone_Rc_BTree_int_User (__h_value );
                                                                            }
                                                                            __ciciliC_5836 ;
                                                                          }), r11 );
                                                                      })));
                                                                  });
                                                                }) : ({ /* cicili#Let5844 */
                                                                  // ----------
                                                                  
                                                                  ({ /* cicili#Progn5848 */
                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 2"));
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        }) : ({ /* cicili#Let5855 */
                                                          // ----------
                                                          
                                                          ({ /* cicili#Let5859 */
                                                            bool __h_case_result  = (true  &&  ((tmp_result -> __h_ctor ) ==  __h_Internal_t  ) );
                                                            // ----------
                                                            ((__h_case_result ) ? ({ /* cicili#Progn5861 */
                                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (delete_List_BTree_int_User_pair_t (items , current ), ({ /* cicili#Let5869 */
                                                                    __auto_type r9  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5871 */
                                                                      __auto_type r9  = new_Rc_BTree_int_User (ntree );
                                                                      // ----------
                                                                      ((void)((r9 . __h_table )-> freeData ));
                                                                      r9 ;
                                                                    });
                                                                    __auto_type r10  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5875 */
                                                                      __auto_type r10  = push_List_Rc_BTree_int_User (r9 , r7 );
                                                                      // ----------
                                                                      ((void)(r10 -> __h_table -> freeClass ));
                                                                      r10 ;
                                                                    });
                                                                    __auto_type r11  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5879 */
                                                                      __auto_type r11  = append_List_Rc_BTree_int_User (r5 , r10 );
                                                                      // ----------
                                                                      ((void)(r11 -> __h_table -> freeClass ));
                                                                      r11 ;
                                                                    });
                                                                    // ----------
                                                                    fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5888 */
                                                                        Rc_BTree_int_User __ciciliC_5887 (Rc_BTree_int_User __h_value ) {
                                                                          return clone_Rc_BTree_int_User (__h_value );
                                                                        }
                                                                        __ciciliC_5887 ;
                                                                      }), r11 );
                                                                  })));
                                                              }) : ({ /* cicili#Let5895 */
                                                                // ----------
                                                                
                                                                ({ /* cicili#Progn5899 */
                                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 3"));
                                                                });
                                                              }));
                                                          });
                                                        }));
                                                    });
                                                  });
                                                }) : ({ /* cicili#Let5906 */
                                                  __auto_type left  = match5768 ;
                                                  // ----------
                                                  
                                                  ({ /* cicili#Progn5910 */
                                                    left ;
                                                  });
                                                }));
                                            });
                                          });
                                        });
                                      }) : ({ /* cicili#Let5914 */
                                        // ----------
                                        
                                        ({ /* cicili#Progn5918 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 4"));
                                        });
                                      }));
                                  });
                                }));
                            }) : ({ /* cicili#Let5925 */
                              typeof((((right_child -> __h_data ). Internal ). __h_0_mem )) right_child_items ;
                              typeof((((right_child -> __h_data ). Internal ). __h_1_mem )) right_child_children ;
                              // ----------
                              
                              ({ /* cicili#Let5929 */
                                bool __h_case_result  = (true  &&  (((right_child -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn5930 */
                                        (right_child_items  =  (((right_child -> __h_data ). Internal ). __h_0_mem ) );
                                        true ;
                                      }) &&  ({ /* cicili#Progn5932 */
                                        (right_child_children  =  (((right_child -> __h_data ). Internal ). __h_1_mem ) );
                                        true ;
                                      }) ) ) );
                                // ----------
                                ((__h_case_result ) ? ({ /* cicili#Progn5935 */
                                    (((hasLen_List_BTree_int_User_pair_t (right_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let5944 */
                                        __auto_type match5942  = min_BTree_int_User (right_child );
                                        typeof((((match5942 . __h_data ). Just ). __h_0_mem )) min ;
                                        typeof((min . __h_0_mem )) min_key ;
                                        // ----------
                                        
                                        ({ /* cicili#Let5949 */
                                          bool __h_case_result  = (true  &&  (((match5942 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn5950 */
                                                  (min  =  (((match5942 . __h_data ). Just ). __h_0_mem ) );
                                                  true ;
                                                }) &&  (true  &&  ({ /* cicili#Progn5952 */
                                                    (min_key  =  (min . __h_0_mem ) );
                                                    true ;
                                                  }) ) ) ) );
                                          // ----------
                                          ((__h_case_result ) ? ({ /* cicili#Progn5955 */
                                              ({ /* cicili#Let5959 */
                                                __auto_type match5958  = delete_BTree_int_User (right_child , min_key , NULL );
                                                typeof((((match5958 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                // ----------
                                                
                                                ({ /* cicili#Let5964 */
                                                  bool __h_case_result  = (true  &&  (((match5958 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn5965 */
                                                        (nchild  =  (((match5958 . __h_data ). Right ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  ((__h_case_result ) ? ({ /* cicili#Progn5968 */
                                                      Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , min , current ), ({ /* cicili#Let5976 */
                                                          __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5978 */
                                                            __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                            // ----------
                                                            ((void)((r1 . __h_table )-> freeData ));
                                                            r1 ;
                                                          });
                                                          __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5982 */
                                                            __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , (index  +  1 ));
                                                            // ----------
                                                            ((void)(r2 -> __h_table -> freeClass ));
                                                            r2 ;
                                                          });
                                                          // ----------
                                                          fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5991 */
                                                              Rc_BTree_int_User __ciciliC_5990 (Rc_BTree_int_User __h_value ) {
                                                                return clone_Rc_BTree_int_User (__h_value );
                                                              }
                                                              __ciciliC_5990 ;
                                                            }), r2 );
                                                        })));
                                                    }) : ({ /* cicili#Let5998 */
                                                      __auto_type left  = match5958 ;
                                                      // ----------
                                                      
                                                      ({ /* cicili#Progn6002 */
                                                        left ;
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let6006 */
                                              // ----------
                                              
                                              ({ /* cicili#Progn6010 */
                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 1"));
                                              });
                                            }));
                                        });
                                      }) : ({ /* cicili#Let6018 */
                                        typeof((((current -> __h_data ). Cons ). __h_0_mem )) current_item ;
                                        typeof((current_item . __h_0_mem )) current_key ;
                                        // ----------
                                        
                                        ({ /* cicili#Let6022 */
                                          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn6023 */
                                                  (current_item  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                                                  true ;
                                                }) &&  (true  &&  ({ /* cicili#Progn6025 */
                                                    (current_key  =  (current_item . __h_0_mem ) );
                                                    true ;
                                                  }) ) ) ) );
                                          // ----------
                                          ((__h_case_result ) ? ({ /* cicili#Progn6028 */
                                              ({ /* cicili#Let6031 */
                                                __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6033 */
                                                  __auto_type r1  = push_List_BTree_int_User_pair_t (current_item , right_child_items );
                                                  // ----------
                                                  ((void)(r1 -> __h_table -> freeClass ));
                                                  r1 ;
                                                });
                                                __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6037 */
                                                  __auto_type r2  = append_List_Rc_BTree_int_User (left_child_children , right_child_children );
                                                  // ----------
                                                  ((void)(r2 -> __h_table -> freeClass ));
                                                  r2 ;
                                                });
                                                __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6041 */
                                                  __auto_type r4  = Internal_BTree_int_User (append_List_BTree_int_User_pair_t (left_child_items , r1 ), fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6050 */
                                                    Rc_BTree_int_User __ciciliC_6049 (Rc_BTree_int_User __h_value ) {
                                                      return clone_Rc_BTree_int_User (__h_value );
                                                    }
                                                    __ciciliC_6049 ;
                                                  }), r2 ));
                                                  // ----------
                                                  ((void)(r4 -> __h_table -> freeClass ));
                                                  r4 ;
                                                });
                                                __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6057 */
                                                  __auto_type r5  = take_List_Rc_BTree_int_User (index , children );
                                                  // ----------
                                                  ((void)(r5 -> __h_table -> freeClass ));
                                                  r5 ;
                                                });
                                                __auto_type r7  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6061 */
                                                  __auto_type r7  = drop_List_Rc_BTree_int_User ((index  +  2 ), children );
                                                  // ----------
                                                  ((void)(r7 -> __h_table -> freeClass ));
                                                  r7 ;
                                                });
                                                // ----------
                                                ({ /* cicili#Let6067 */
                                                  __auto_type match6066  = delete_BTree_int_User (r4 , current_key , NULL );
                                                  typeof((((match6066 . __h_data ). Right ). __h_0_mem )) ntree ;
                                                  // ----------
                                                  
                                                  ({ /* cicili#Let6072 */
                                                    bool __h_case_result  = (true  &&  (((match6066 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn6073 */
                                                          (ntree  =  (((match6066 . __h_data ). Right ). __h_0_mem ) );
                                                          true ;
                                                        }) ) );
                                                    // ----------
                                                    ((__h_case_result ) ? ({ /* cicili#Progn6076 */
                                                        ({ /* cicili#Let6080 */
                                                          __auto_type tmp_result  = splitForDelete_BTree_int_User (ntree );
                                                          typeof((((tmp_result -> __h_data ). Branch ). __h_0_mem )) branch_items ;
                                                          typeof((((tmp_result -> __h_data ). Branch ). __h_1_mem )) branch_children ;
                                                          // ----------
                                                          
                                                          ({ /* cicili#Let6085 */
                                                            bool __h_case_result  = (true  &&  (((tmp_result -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn6086 */
                                                                    (branch_items  =  (((tmp_result -> __h_data ). Branch ). __h_0_mem ) );
                                                                    true ;
                                                                  }) &&  ({ /* cicili#Progn6088 */
                                                                    (branch_children  =  (((tmp_result -> __h_data ). Branch ). __h_1_mem ) );
                                                                    true ;
                                                                  }) ) ) );
                                                            // ----------
                                                            ((__h_case_result ) ? ({ /* cicili#Progn6091 */
                                                                ({ /* cicili#Let6095 */
                                                                  typeof((((branch_items -> __h_data ). Cons ). __h_0_mem )) branch_head ;
                                                                  // ----------
                                                                  
                                                                  ({ /* cicili#Let6099 */
                                                                    bool __h_case_result  = (true  &&  (((branch_items -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn6100 */
                                                                          (branch_head  =  (((branch_items -> __h_data ). Cons ). __h_0_mem ) );
                                                                          true ;
                                                                        }) ) );
                                                                    // ----------
                                                                    ((__h_case_result ) ? ({ /* cicili#Progn6103 */
                                                                        ({ /* cicili#Let6106 */
                                                                          __auto_type ntree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6108 */
                                                                            __auto_type ntree  = ntree ;
                                                                            // ----------
                                                                            ((void)(ntree -> __h_table -> freeClass ));
                                                                            ntree ;
                                                                          });
                                                                          __auto_type tmp_result  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6111 */
                                                                            __auto_type tmp_result  = tmp_result ;
                                                                            // ----------
                                                                            ((void)(tmp_result -> __h_table -> freeClass ));
                                                                            tmp_result ;
                                                                          });
                                                                          // ----------
                                                                          Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , branch_head , current ), ({ /* cicili#Let6120 */
                                                                              __auto_type r10  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6122 */
                                                                                __auto_type r10  = append_List_Rc_BTree_int_User (branch_children , r7 );
                                                                                // ----------
                                                                                ((void)(r10 -> __h_table -> freeClass ));
                                                                                r10 ;
                                                                              });
                                                                              __auto_type r11  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6126 */
                                                                                __auto_type r11  = append_List_Rc_BTree_int_User (r5 , r10 );
                                                                                // ----------
                                                                                ((void)(r11 -> __h_table -> freeClass ));
                                                                                r11 ;
                                                                              });
                                                                              // ----------
                                                                              fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6135 */
                                                                                  Rc_BTree_int_User __ciciliC_6134 (Rc_BTree_int_User __h_value ) {
                                                                                    return clone_Rc_BTree_int_User (__h_value );
                                                                                  }
                                                                                  __ciciliC_6134 ;
                                                                                }), r11 );
                                                                            })));
                                                                        });
                                                                      }) : ({ /* cicili#Let6142 */
                                                                        // ----------
                                                                        
                                                                        ({ /* cicili#Progn6146 */
                                                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 2"));
                                                                        });
                                                                      }));
                                                                  });
                                                                });
                                                              }) : ({ /* cicili#Let6153 */
                                                                // ----------
                                                                
                                                                ({ /* cicili#Let6157 */
                                                                  bool __h_case_result  = (true  &&  ((tmp_result -> __h_ctor ) ==  __h_Internal_t  ) );
                                                                  // ----------
                                                                  ((__h_case_result ) ? ({ /* cicili#Progn6159 */
                                                                      Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (delete_List_BTree_int_User_pair_t (items , current ), ({ /* cicili#Let6167 */
                                                                          __auto_type r9  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6169 */
                                                                            __auto_type r9  = new_Rc_BTree_int_User (ntree );
                                                                            // ----------
                                                                            ((void)((r9 . __h_table )-> freeData ));
                                                                            r9 ;
                                                                          });
                                                                          __auto_type r10  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6173 */
                                                                            __auto_type r10  = push_List_Rc_BTree_int_User (r9 , r7 );
                                                                            // ----------
                                                                            ((void)(r10 -> __h_table -> freeClass ));
                                                                            r10 ;
                                                                          });
                                                                          __auto_type r11  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6177 */
                                                                            __auto_type r11  = append_List_Rc_BTree_int_User (r5 , r10 );
                                                                            // ----------
                                                                            ((void)(r11 -> __h_table -> freeClass ));
                                                                            r11 ;
                                                                          });
                                                                          // ----------
                                                                          fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6186 */
                                                                              Rc_BTree_int_User __ciciliC_6185 (Rc_BTree_int_User __h_value ) {
                                                                                return clone_Rc_BTree_int_User (__h_value );
                                                                              }
                                                                              __ciciliC_6185 ;
                                                                            }), r11 );
                                                                        })));
                                                                    }) : ({ /* cicili#Let6193 */
                                                                      // ----------
                                                                      
                                                                      ({ /* cicili#Progn6197 */
                                                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 3"));
                                                                      });
                                                                    }));
                                                                });
                                                              }));
                                                          });
                                                        });
                                                      }) : ({ /* cicili#Let6204 */
                                                        __auto_type left  = match6066 ;
                                                        // ----------
                                                        
                                                        ({ /* cicili#Progn6208 */
                                                          left ;
                                                        });
                                                      }));
                                                  });
                                                });
                                              });
                                            }) : ({ /* cicili#Let6212 */
                                              // ----------
                                              
                                              ({ /* cicili#Progn6216 */
                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 4"));
                                              });
                                            }));
                                        });
                                      }));
                                  }) : ({ /* cicili#Let6223 */
                                    // ----------
                                    
                                    ({ /* cicili#Progn6227 */
                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 5"));
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let6234 */
                      // ----------
                      
                      ({ /* cicili#Progn6238 */
                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 6"));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6245 */
              // ----------
              
              ({ /* cicili#Progn6249 */
                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 7"));
              });
            }));
        });
      });
  }
  Either_BTree_int_User_Error_BTree_int_User borrowRightLeaf (List_BTree_int_User_pair_t left_child_items ) {
    return ({ /* cicili#Let6262 */
        __auto_type match6261  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
        typeof((((match6261 . __h_data ). Just ). __h_0_mem )) right_child_rc ;
        // ----------
        
        ({ /* cicili#Let6267 */
          bool __h_case_result  = (true  &&  (((match6261 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6268 */
                (right_child_rc  =  (((match6261 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn6271 */
              ({ /* cicili#Let6275 */
                __auto_type match6274  = get_Rc_BTree_int_User (right_child_rc );
                typeof((((match6274 . __h_data ). Just ). __h_0_mem )) right_child ;
                // ----------
                
                ({ /* cicili#Let6280 */
                  bool __h_case_result  = (true  &&  (((match6274 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6281 */
                        (right_child  =  (((match6274 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn6284 */
                      ({ /* cicili#Let6288 */
                        typeof((((right_child -> __h_data ). Leaf ). __h_0_mem )) right_child_items ;
                        // ----------
                        
                        ({ /* cicili#Let6292 */
                          bool __h_case_result  = (true  &&  (((right_child -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn6293 */
                                (right_child_items  =  (((right_child -> __h_data ). Leaf ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn6296 */
                              (((hasLen_List_BTree_int_User_pair_t (right_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let6305 */
                                  __auto_type match6303  = min_BTree_int_User (right_child );
                                  typeof((((match6303 . __h_data ). Just ). __h_0_mem )) min ;
                                  typeof((min . __h_0_mem )) min_key ;
                                  // ----------
                                  
                                  ({ /* cicili#Let6310 */
                                    bool __h_case_result  = (true  &&  (((match6303 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn6311 */
                                            (min  =  (((match6303 . __h_data ). Just ). __h_0_mem ) );
                                            true ;
                                          }) &&  (true  &&  ({ /* cicili#Progn6313 */
                                              (min_key  =  (min . __h_0_mem ) );
                                              true ;
                                            }) ) ) ) );
                                    // ----------
                                    ((__h_case_result ) ? ({ /* cicili#Progn6316 */
                                        ({ /* cicili#Let6320 */
                                          __auto_type match6319  = delete_BTree_int_User (right_child , min_key , NULL );
                                          typeof((((match6319 . __h_data ). Right ). __h_0_mem )) nchild ;
                                          // ----------
                                          
                                          ({ /* cicili#Let6325 */
                                            bool __h_case_result  = (true  &&  (((match6319 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn6326 */
                                                  (nchild  =  (((match6319 . __h_data ). Right ). __h_0_mem ) );
                                                  true ;
                                                }) ) );
                                            // ----------
                                            ((__h_case_result ) ? ({ /* cicili#Progn6329 */
                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , min , current ), ({ /* cicili#Let6337 */
                                                    __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6339 */
                                                      __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                      // ----------
                                                      ((void)((r1 . __h_table )-> freeData ));
                                                      r1 ;
                                                    });
                                                    __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6343 */
                                                      __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , (index  +  1 ));
                                                      // ----------
                                                      ((void)(r2 -> __h_table -> freeClass ));
                                                      r2 ;
                                                    });
                                                    // ----------
                                                    fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6352 */
                                                        Rc_BTree_int_User __ciciliC_6351 (Rc_BTree_int_User __h_value ) {
                                                          return clone_Rc_BTree_int_User (__h_value );
                                                        }
                                                        __ciciliC_6351 ;
                                                      }), r2 );
                                                  })));
                                              }) : ({ /* cicili#Let6359 */
                                                __auto_type left  = match6319 ;
                                                // ----------
                                                
                                                ({ /* cicili#Progn6363 */
                                                  left ;
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* cicili#Let6367 */
                                        // ----------
                                        
                                        ({ /* cicili#Progn6371 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 8"));
                                        });
                                      }));
                                  });
                                }) : Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (delete_List_BTree_int_User_pair_t (items , current ), ({ /* cicili#Let6382 */
                                  __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6384 */
                                    __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                    // ----------
                                    ((void)(r1 -> __h_table -> freeClass ));
                                    r1 ;
                                  });
                                  __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6388 */
                                    __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6394 */
                                      Rc_BTree_int_User __ciciliC_6393 (Rc_BTree_int_User __h_value ) {
                                        return clone_Rc_BTree_int_User (__h_value );
                                      }
                                      __ciciliC_6393 ;
                                    }), r1 );
                                    // ----------
                                    ((void)(r2 -> __h_table -> freeClass ));
                                    r2 ;
                                  });
                                  __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6401 */
                                    __auto_type r3  = drop_List_Rc_BTree_int_User ((index  +  2 ), children );
                                    // ----------
                                    ((void)(r3 -> __h_table -> freeClass ));
                                    r3 ;
                                  });
                                  __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6405 */
                                    __auto_type r4  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6411 */
                                      Rc_BTree_int_User __ciciliC_6410 (Rc_BTree_int_User __h_value ) {
                                        return clone_Rc_BTree_int_User (__h_value );
                                      }
                                      __ciciliC_6410 ;
                                    }), r3 );
                                    // ----------
                                    ((void)(r4 -> __h_table -> freeClass ));
                                    r4 ;
                                  });
                                  __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6418 */
                                    __auto_type r5  = push_List_Rc_BTree_int_User (new_Rc_BTree_int_User (Leaf_BTree_int_User (append_List_BTree_int_User_pair_t (left_child_items , right_child_items ))), r4 );
                                    // ----------
                                    ((void)(r5 -> __h_table -> freeClass ));
                                    r5 ;
                                  });
                                  // ----------
                                  append_List_Rc_BTree_int_User (r2 , r5 );
                                }))));
                            }) : ({ /* cicili#Let6429 */
                              // ----------
                              
                              ({ /* cicili#Progn6433 */
                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 9"));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let6440 */
                      // ----------
                      
                      ({ /* cicili#Progn6444 */
                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 10"));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6451 */
              // ----------
              
              ({ /* cicili#Progn6455 */
                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 11"));
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let6462 */
      __auto_type result  = ({ /* cicili#Let6465 */
        __auto_type match6464  = nth_List_Rc_BTree_int_User (index , children );
        typeof((((match6464 . __h_data ). Just ). __h_0_mem )) left_child_rc ;
        // ----------
        
        ({ /* cicili#Let6470 */
          bool __h_case_result  = (true  &&  (((match6464 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6471 */
                (left_child_rc  =  (((match6464 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn6474 */
              ({ /* cicili#Let6478 */
                __auto_type match6477  = get_Rc_BTree_int_User (left_child_rc );
                typeof((((match6477 . __h_data ). Just ). __h_0_mem )) left_child ;
                // ----------
                
                ({ /* cicili#Let6483 */
                  bool __h_case_result  = (true  &&  (((match6477 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6484 */
                        (left_child  =  (((match6477 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn6487 */
                      ({ /* cicili#Let6491 */
                        typeof((((left_child -> __h_data ). Branch ). __h_0_mem )) left_child_items ;
                        typeof((((left_child -> __h_data ). Branch ). __h_1_mem )) left_child_children ;
                        // ----------
                        
                        ({ /* cicili#Let6495 */
                          bool __h_case_result  = (true  &&  (((left_child -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn6496 */
                                  (left_child_items  =  (((left_child -> __h_data ). Branch ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn6498 */
                                  (left_child_children  =  (((left_child -> __h_data ). Branch ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn6501 */
                              (((hasLen_List_BTree_int_User_pair_t (left_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let6510 */
                                  __auto_type match6508  = max_BTree_int_User (left_child );
                                  typeof((((match6508 . __h_data ). Just ). __h_0_mem )) max ;
                                  typeof((max . __h_0_mem )) max_key ;
                                  // ----------
                                  
                                  ({ /* cicili#Let6515 */
                                    bool __h_case_result  = (true  &&  (((match6508 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn6516 */
                                            (max  =  (((match6508 . __h_data ). Just ). __h_0_mem ) );
                                            true ;
                                          }) &&  (true  &&  ({ /* cicili#Progn6518 */
                                              (max_key  =  (max . __h_0_mem ) );
                                              true ;
                                            }) ) ) ) );
                                    // ----------
                                    ((__h_case_result ) ? ({ /* cicili#Progn6521 */
                                        ({ /* cicili#Let6525 */
                                          __auto_type match6524  = delete_BTree_int_User (left_child , max_key , NULL );
                                          typeof((((match6524 . __h_data ). Right ). __h_0_mem )) nchild ;
                                          // ----------
                                          
                                          ({ /* cicili#Let6530 */
                                            bool __h_case_result  = (true  &&  (((match6524 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn6531 */
                                                  (nchild  =  (((match6524 . __h_data ). Right ). __h_0_mem ) );
                                                  true ;
                                                }) ) );
                                            // ----------
                                            ((__h_case_result ) ? ({ /* cicili#Progn6534 */
                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , max , current ), ({ /* cicili#Let6542 */
                                                    __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6544 */
                                                      __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                      // ----------
                                                      ((void)((r1 . __h_table )-> freeData ));
                                                      r1 ;
                                                    });
                                                    __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6548 */
                                                      __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                                                      // ----------
                                                      ((void)(r2 -> __h_table -> freeClass ));
                                                      r2 ;
                                                    });
                                                    // ----------
                                                    fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6557 */
                                                        Rc_BTree_int_User __ciciliC_6556 (Rc_BTree_int_User __h_value ) {
                                                          return clone_Rc_BTree_int_User (__h_value );
                                                        }
                                                        __ciciliC_6556 ;
                                                      }), r2 );
                                                  })));
                                              }) : ({ /* cicili#Let6564 */
                                                __auto_type left  = match6524 ;
                                                // ----------
                                                
                                                ({ /* cicili#Progn6568 */
                                                  left ;
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* cicili#Let6572 */
                                        // ----------
                                        
                                        ({ /* cicili#Progn6576 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 12"));
                                        });
                                      }));
                                  });
                                }) : borrowRightInternal (left_child_items , left_child_children ));
                            }) : ({ /* cicili#Let6583 */
                              typeof((((left_child -> __h_data ). Internal ). __h_0_mem )) left_child_items ;
                              typeof((((left_child -> __h_data ). Internal ). __h_1_mem )) left_child_children ;
                              // ----------
                              
                              ({ /* cicili#Let6587 */
                                bool __h_case_result  = (true  &&  (((left_child -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn6588 */
                                        (left_child_items  =  (((left_child -> __h_data ). Internal ). __h_0_mem ) );
                                        true ;
                                      }) &&  ({ /* cicili#Progn6590 */
                                        (left_child_children  =  (((left_child -> __h_data ). Internal ). __h_1_mem ) );
                                        true ;
                                      }) ) ) );
                                // ----------
                                ((__h_case_result ) ? ({ /* cicili#Progn6593 */
                                    (((hasLen_List_BTree_int_User_pair_t (left_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let6602 */
                                        __auto_type match6600  = max_BTree_int_User (left_child );
                                        typeof((((match6600 . __h_data ). Just ). __h_0_mem )) max ;
                                        typeof((max . __h_0_mem )) max_key ;
                                        // ----------
                                        
                                        ({ /* cicili#Let6607 */
                                          bool __h_case_result  = (true  &&  (((match6600 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn6608 */
                                                  (max  =  (((match6600 . __h_data ). Just ). __h_0_mem ) );
                                                  true ;
                                                }) &&  (true  &&  ({ /* cicili#Progn6610 */
                                                    (max_key  =  (max . __h_0_mem ) );
                                                    true ;
                                                  }) ) ) ) );
                                          // ----------
                                          ((__h_case_result ) ? ({ /* cicili#Progn6613 */
                                              ({ /* cicili#Let6617 */
                                                __auto_type match6616  = delete_BTree_int_User (left_child , max_key , NULL );
                                                typeof((((match6616 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                // ----------
                                                
                                                ({ /* cicili#Let6622 */
                                                  bool __h_case_result  = (true  &&  (((match6616 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn6623 */
                                                        (nchild  =  (((match6616 . __h_data ). Right ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  ((__h_case_result ) ? ({ /* cicili#Progn6626 */
                                                      Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , max , current ), ({ /* cicili#Let6634 */
                                                          __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6636 */
                                                            __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                            // ----------
                                                            ((void)((r1 . __h_table )-> freeData ));
                                                            r1 ;
                                                          });
                                                          __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6640 */
                                                            __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                                                            // ----------
                                                            ((void)(r2 -> __h_table -> freeClass ));
                                                            r2 ;
                                                          });
                                                          // ----------
                                                          fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6649 */
                                                              Rc_BTree_int_User __ciciliC_6648 (Rc_BTree_int_User __h_value ) {
                                                                return clone_Rc_BTree_int_User (__h_value );
                                                              }
                                                              __ciciliC_6648 ;
                                                            }), r2 );
                                                        })));
                                                    }) : ({ /* cicili#Let6656 */
                                                      __auto_type left  = match6616 ;
                                                      // ----------
                                                      
                                                      ({ /* cicili#Progn6660 */
                                                        left ;
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let6664 */
                                              // ----------
                                              
                                              ({ /* cicili#Progn6668 */
                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 12"));
                                              });
                                            }));
                                        });
                                      }) : borrowRightInternal (left_child_items , left_child_children ));
                                  }) : ({ /* cicili#Let6675 */
                                    typeof((((left_child -> __h_data ). Leaf ). __h_0_mem )) left_child_items ;
                                    // ----------
                                    
                                    ({ /* cicili#Let6679 */
                                      bool __h_case_result  = (true  &&  (((left_child -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn6680 */
                                            (left_child_items  =  (((left_child -> __h_data ). Leaf ). __h_0_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      ((__h_case_result ) ? ({ /* cicili#Progn6683 */
                                          (((hasLen_List_BTree_int_User_pair_t (left_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let6692 */
                                              __auto_type match6690  = max_BTree_int_User (left_child );
                                              typeof((((match6690 . __h_data ). Just ). __h_0_mem )) max ;
                                              typeof((max . __h_0_mem )) max_key ;
                                              // ----------
                                              
                                              ({ /* cicili#Let6697 */
                                                bool __h_case_result  = (true  &&  (((match6690 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn6698 */
                                                        (max  =  (((match6690 . __h_data ). Just ). __h_0_mem ) );
                                                        true ;
                                                      }) &&  (true  &&  ({ /* cicili#Progn6700 */
                                                          (max_key  =  (max . __h_0_mem ) );
                                                          true ;
                                                        }) ) ) ) );
                                                // ----------
                                                ((__h_case_result ) ? ({ /* cicili#Progn6703 */
                                                    ({ /* cicili#Let6707 */
                                                      __auto_type match6706  = delete_BTree_int_User (left_child , max_key , NULL );
                                                      typeof((((match6706 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                      // ----------
                                                      
                                                      ({ /* cicili#Let6712 */
                                                        bool __h_case_result  = (true  &&  (((match6706 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn6713 */
                                                              (nchild  =  (((match6706 . __h_data ). Right ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        ((__h_case_result ) ? ({ /* cicili#Progn6716 */
                                                            Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , max , current ), ({ /* cicili#Let6724 */
                                                                __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6726 */
                                                                  __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                                  // ----------
                                                                  ((void)((r1 . __h_table )-> freeData ));
                                                                  r1 ;
                                                                });
                                                                __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6730 */
                                                                  __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                                                                  // ----------
                                                                  ((void)(r2 -> __h_table -> freeClass ));
                                                                  r2 ;
                                                                });
                                                                // ----------
                                                                fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6739 */
                                                                    Rc_BTree_int_User __ciciliC_6738 (Rc_BTree_int_User __h_value ) {
                                                                      return clone_Rc_BTree_int_User (__h_value );
                                                                    }
                                                                    __ciciliC_6738 ;
                                                                  }), r2 );
                                                              })));
                                                          }) : ({ /* cicili#Let6746 */
                                                            __auto_type left  = match6706 ;
                                                            // ----------
                                                            
                                                            ({ /* cicili#Progn6750 */
                                                              left ;
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  }) : ({ /* cicili#Let6754 */
                                                    // ----------
                                                    
                                                    ({ /* cicili#Progn6758 */
                                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 13"));
                                                    });
                                                  }));
                                              });
                                            }) : borrowRightLeaf (left_child_items ));
                                        }) : ({ /* cicili#Let6765 */
                                          // ----------
                                          
                                          ({ /* cicili#Progn6769 */
                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 14"));
                                          });
                                        }));
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let6776 */
                      // ----------
                      
                      ({ /* cicili#Progn6780 */
                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 15"));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let6787 */
              // ----------
              
              ({ /* cicili#Progn6791 */
                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 16"));
              });
            }));
        });
      });
      // ----------
      result ;
    });
}
Either_BTree_int_User_Error_BTree_int_User deleteWithParent_BTree_int_User (Maybe_BTree_int_User wparent , int pitem_index , int pchild_index , BTree_int_User tree , int skey , void (*callback) (BTree_int_User_pair_t item )) {
  Either_BTree_int_User_Error_BTree_int_User deleteInternal (Maybe_BTree_int_User tree , List_BTree_int_User_pair_t items , List_Rc_BTree_int_User children , Maybe_List_BTree_int_User_pair_t wleft , List_BTree_int_User_pair_t current , int index ) {
    return ({ /* cicili#Let6819 */
        __auto_type result  = ({ /* cicili#Let6823 */
          typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
          typeof((head . __h_0_mem )) key ;
          typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
          // ----------
          
          ({ /* cicili#Let6827 */
            bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn6828 */
                      (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                      true ;
                    }) &&  (true  &&  ({ /* cicili#Progn6830 */
                        (key  =  (head . __h_0_mem ) );
                        true ;
                      }) ) ) &&  ({ /* cicili#Progn6832 */
                    (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                    true ;
                  }) ) ) );
            // ----------
            ((__h_case_result ) ? ({ /* cicili#Progn6835 */
                ({ /* cicili#Let6839 */
                  __auto_type match6838  = compareKey (skey , key );
                  // ----------
                  
                  ({ /* cicili#Let6843 */
                    bool __h_case_result  = (true  &&  ((match6838 . __h_ctor ) ==  __h_LT_t  ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn6845 */
                        ({ /* cicili#Let6849 */
                          __auto_type match6848  = nth_List_Rc_BTree_int_User (index , children );
                          typeof((((match6848 . __h_data ). Just ). __h_0_mem )) child ;
                          // ----------
                          
                          ({ /* cicili#Let6854 */
                            bool __h_case_result  = (true  &&  (((match6848 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6855 */
                                  (child  =  (((match6848 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn6858 */
                                ({ /* cicili#Let6862 */
                                  __auto_type match6861  = get_Rc_BTree_int_User (child );
                                  typeof((((match6861 . __h_data ). Just ). __h_0_mem )) tr ;
                                  // ----------
                                  
                                  ({ /* cicili#Let6867 */
                                    bool __h_case_result  = (true  &&  (((match6861 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6868 */
                                          (tr  =  (((match6861 . __h_data ). Just ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    ((__h_case_result ) ? ({ /* cicili#Progn6871 */
                                        ({ /* cicili#Let6875 */
                                          // ----------
                                          
                                          ({ /* cicili#Let6879 */
                                            bool __h_case_result  = (true  &&  ((tr -> __h_ctor ) ==  __h_Branch_t  ) );
                                            // ----------
                                            ((__h_case_result ) ? ({ /* cicili#Progn6881 */
                                                ({ /* cicili#Let6885 */
                                                  __auto_type match6884  = deleteWithParent_BTree_int_User (tree , (((index  >  0 )) ? (index  -  1 ) : index ), index , tr , skey , callback );
                                                  typeof((((match6884 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                  // ----------
                                                  
                                                  ({ /* cicili#Let6890 */
                                                    bool __h_case_result  = (true  &&  (((match6884 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn6891 */
                                                          (nchild  =  (((match6884 . __h_data ). Right ). __h_0_mem ) );
                                                          true ;
                                                        }) ) );
                                                    // ----------
                                                    ((__h_case_result ) ? ({ /* cicili#Progn6894 */
                                                        ({ /* cicili#Let6898 */
                                                          typeof((((nchild -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                                          typeof((((nchild -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                                          // ----------
                                                          
                                                          ({ /* cicili#Let6902 */
                                                            bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn6903 */
                                                                    (child_items  =  (((nchild -> __h_data ). Branch ). __h_0_mem ) );
                                                                    true ;
                                                                  }) &&  ({ /* cicili#Progn6905 */
                                                                    (child_children  =  (((nchild -> __h_data ). Branch ). __h_1_mem ) );
                                                                    true ;
                                                                  }) ) ) );
                                                            // ----------
                                                            ((__h_case_result ) ? ({ /* cicili#Progn6908 */
                                                                ({ /* cicili#Let6912 */
                                                                  __auto_type match6911  = nth_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                                  typeof((((match6911 . __h_data ). Just ). __h_0_mem )) wleft ;
                                                                  // ----------
                                                                  
                                                                  ({ /* cicili#Let6917 */
                                                                    bool __h_case_result  = (true  &&  (((match6911 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6918 */
                                                                          (wleft  =  (((match6911 . __h_data ). Just ). __h_0_mem ) );
                                                                          true ;
                                                                        }) ) );
                                                                    // ----------
                                                                    ((__h_case_result ) ? ({ /* cicili#Progn6921 */
                                                                        ({ /* cicili#Let6924 */
                                                                          __auto_type __h_matchbox  = wleft ;
                                                                          // ----------
                                                                          ({ /* cicili#Let6928 */
                                                                            __auto_type match6927  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                            typeof((((match6927 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                            // ----------
                                                                            
                                                                            ({ /* cicili#Let6933 */
                                                                              bool __h_case_result  = (true  &&  (((match6927 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6934 */
                                                                                    (unboxed  =  (((match6927 . __h_data ). Just ). __h_0_mem ) );
                                                                                    true ;
                                                                                  }) ) );
                                                                              // ----------
                                                                              ((__h_case_result ) ? ({ /* cicili#Progn6937 */
                                                                                  ({ /* cicili#Let6941 */
                                                                                    typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) left_items ;
                                                                                    typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) left_children ;
                                                                                    // ----------
                                                                                    
                                                                                    ({ /* cicili#Let6945 */
                                                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn6946 */
                                                                                              (left_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                              true ;
                                                                                            }) &&  ({ /* cicili#Progn6948 */
                                                                                              (left_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                              true ;
                                                                                            }) ) ) );
                                                                                      // ----------
                                                                                      ((__h_case_result ) ? ({ /* cicili#Progn6951 */
                                                                                          ({ /* cicili#Let6954 */
                                                                                            __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6956 */
                                                                                              __auto_type nchild  = nchild ;
                                                                                              // ----------
                                                                                              ((void)(nchild -> __h_table -> freeClass ));
                                                                                              nchild ;
                                                                                            });
                                                                                            // ----------
                                                                                            Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), (((index  >  0 )) ? (index  -  1 ) : index ), left_items , left_children , child_items , child_children ));
                                                                                          });
                                                                                        }) : ({ /* cicili#Let6964 */
                                                                                          typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) left_items ;
                                                                                          typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) left_children ;
                                                                                          // ----------
                                                                                          
                                                                                          ({ /* cicili#Let6968 */
                                                                                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn6969 */
                                                                                                    (left_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                    true ;
                                                                                                  }) &&  ({ /* cicili#Progn6971 */
                                                                                                    (left_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                    true ;
                                                                                                  }) ) ) );
                                                                                            // ----------
                                                                                            ((__h_case_result ) ? ({ /* cicili#Progn6974 */
                                                                                                ({ /* cicili#Let6977 */
                                                                                                  __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6979 */
                                                                                                    __auto_type nchild  = nchild ;
                                                                                                    // ----------
                                                                                                    ((void)(nchild -> __h_table -> freeClass ));
                                                                                                    nchild ;
                                                                                                  });
                                                                                                  // ----------
                                                                                                  Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), (((index  >  0 )) ? (index  -  1 ) : index ), left_items , left_children , child_items , child_children ));
                                                                                                });
                                                                                              }) : ({ /* cicili#Let6987 */
                                                                                                // ----------
                                                                                                
                                                                                                ({ /* cicili#Progn6991 */
                                                                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL1-1"));
                                                                                                });
                                                                                              }));
                                                                                          });
                                                                                        }));
                                                                                    });
                                                                                  });
                                                                                }) : ({ /* cicili#Let6998 */
                                                                                  // ----------
                                                                                  
                                                                                  ({ /* cicili#Progn7002 */
                                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL1"));
                                                                                  });
                                                                                }));
                                                                            });
                                                                          });
                                                                        });
                                                                      }) : ({ /* cicili#Let7009 */
                                                                        // ----------
                                                                        
                                                                        ({ /* cicili#Progn7013 */
                                                                          ({ /* cicili#Let7017 */
                                                                            __auto_type match7016  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                            typeof((((match7016 . __h_data ). Just ). __h_0_mem )) wright ;
                                                                            // ----------
                                                                            
                                                                            ({ /* cicili#Let7022 */
                                                                              bool __h_case_result  = (true  &&  (((match7016 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7023 */
                                                                                    (wright  =  (((match7016 . __h_data ). Just ). __h_0_mem ) );
                                                                                    true ;
                                                                                  }) ) );
                                                                              // ----------
                                                                              ((__h_case_result ) ? ({ /* cicili#Progn7026 */
                                                                                  ({ /* cicili#Let7029 */
                                                                                    __auto_type __h_matchbox  = wright ;
                                                                                    // ----------
                                                                                    ({ /* cicili#Let7033 */
                                                                                      __auto_type match7032  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                      typeof((((match7032 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                      // ----------
                                                                                      
                                                                                      ({ /* cicili#Let7038 */
                                                                                        bool __h_case_result  = (true  &&  (((match7032 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7039 */
                                                                                              (unboxed  =  (((match7032 . __h_data ). Just ). __h_0_mem ) );
                                                                                              true ;
                                                                                            }) ) );
                                                                                        // ----------
                                                                                        ((__h_case_result ) ? ({ /* cicili#Progn7042 */
                                                                                            ({ /* cicili#Let7046 */
                                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) right_items ;
                                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) right_children ;
                                                                                              // ----------
                                                                                              
                                                                                              ({ /* cicili#Let7050 */
                                                                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn7051 */
                                                                                                        (right_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                                        true ;
                                                                                                      }) &&  ({ /* cicili#Progn7053 */
                                                                                                        (right_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                                        true ;
                                                                                                      }) ) ) );
                                                                                                // ----------
                                                                                                ((__h_case_result ) ? ({ /* cicili#Progn7056 */
                                                                                                    ({ /* cicili#Let7059 */
                                                                                                      __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7061 */
                                                                                                        __auto_type nchild  = nchild ;
                                                                                                        // ----------
                                                                                                        ((void)(nchild -> __h_table -> freeClass ));
                                                                                                        nchild ;
                                                                                                      });
                                                                                                      // ----------
                                                                                                      Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), index , child_items , child_children , right_items , right_children ));
                                                                                                    });
                                                                                                  }) : ({ /* cicili#Let7069 */
                                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) right_items ;
                                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) right_children ;
                                                                                                    // ----------
                                                                                                    
                                                                                                    ({ /* cicili#Let7073 */
                                                                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn7074 */
                                                                                                              (right_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                              true ;
                                                                                                            }) &&  ({ /* cicili#Progn7076 */
                                                                                                              (right_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                              true ;
                                                                                                            }) ) ) );
                                                                                                      // ----------
                                                                                                      ((__h_case_result ) ? ({ /* cicili#Progn7079 */
                                                                                                          ({ /* cicili#Let7082 */
                                                                                                            __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7084 */
                                                                                                              __auto_type nchild  = nchild ;
                                                                                                              // ----------
                                                                                                              ((void)(nchild -> __h_table -> freeClass ));
                                                                                                              nchild ;
                                                                                                            });
                                                                                                            // ----------
                                                                                                            Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), index , child_items , child_children , right_items , right_children ));
                                                                                                          });
                                                                                                        }) : ({ /* cicili#Let7092 */
                                                                                                          // ----------
                                                                                                          
                                                                                                          ({ /* cicili#Progn7096 */
                                                                                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR2-1"));
                                                                                                          });
                                                                                                        }));
                                                                                                    });
                                                                                                  }));
                                                                                              });
                                                                                            });
                                                                                          }) : ({ /* cicili#Let7103 */
                                                                                            // ----------
                                                                                            
                                                                                            ({ /* cicili#Progn7107 */
                                                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR2"));
                                                                                            });
                                                                                          }));
                                                                                      });
                                                                                    });
                                                                                  });
                                                                                }) : ({ /* cicili#Let7114 */
                                                                                  // ----------
                                                                                  
                                                                                  ({ /* cicili#Progn7118 */
                                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR1"));
                                                                                  });
                                                                                }));
                                                                            });
                                                                          });
                                                                        });
                                                                      }));
                                                                  });
                                                                });
                                                              }) : ({ /* cicili#Let7125 */
                                                                // ----------
                                                                
                                                                ({ /* cicili#Progn7129 */
                                                                  Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let7137 */
                                                                      __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7139 */
                                                                        __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                                        // ----------
                                                                        ((void)((r1 . __h_table )-> freeData ));
                                                                        r1 ;
                                                                      });
                                                                      __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7143 */
                                                                        __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                                                                        // ----------
                                                                        ((void)(r2 -> __h_table -> freeClass ));
                                                                        r2 ;
                                                                      });
                                                                      // ----------
                                                                      fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn7152 */
                                                                          Rc_BTree_int_User __ciciliC_7151 (Rc_BTree_int_User __h_value ) {
                                                                            return clone_Rc_BTree_int_User (__h_value );
                                                                          }
                                                                          __ciciliC_7151 ;
                                                                        }), r2 );
                                                                    })));
                                                                });
                                                              }));
                                                          });
                                                        });
                                                      }) : ({ /* cicili#Let7159 */
                                                        __auto_type left  = match6884 ;
                                                        // ----------
                                                        
                                                        ({ /* cicili#Progn7163 */
                                                          left ;
                                                        });
                                                      }));
                                                  });
                                                });
                                              }) : ({ /* cicili#Let7167 */
                                                // ----------
                                                
                                                ({ /* cicili#Let7171 */
                                                  bool __h_case_result  = (true  &&  ((tr -> __h_ctor ) ==  __h_Internal_t  ) );
                                                  // ----------
                                                  ((__h_case_result ) ? ({ /* cicili#Progn7173 */
                                                      ({ /* cicili#Let7177 */
                                                        __auto_type match7176  = deleteWithParent_BTree_int_User (tree , (((index  >  0 )) ? (index  -  1 ) : index ), index , tr , skey , callback );
                                                        typeof((((match7176 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                        // ----------
                                                        
                                                        ({ /* cicili#Let7182 */
                                                          bool __h_case_result  = (true  &&  (((match7176 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn7183 */
                                                                (nchild  =  (((match7176 . __h_data ). Right ). __h_0_mem ) );
                                                                true ;
                                                              }) ) );
                                                          // ----------
                                                          ((__h_case_result ) ? ({ /* cicili#Progn7186 */
                                                              ({ /* cicili#Let7190 */
                                                                typeof((((nchild -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                                                typeof((((nchild -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                                                // ----------
                                                                
                                                                ({ /* cicili#Let7194 */
                                                                  bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn7195 */
                                                                          (child_items  =  (((nchild -> __h_data ). Branch ). __h_0_mem ) );
                                                                          true ;
                                                                        }) &&  ({ /* cicili#Progn7197 */
                                                                          (child_children  =  (((nchild -> __h_data ). Branch ). __h_1_mem ) );
                                                                          true ;
                                                                        }) ) ) );
                                                                  // ----------
                                                                  ((__h_case_result ) ? ({ /* cicili#Progn7200 */
                                                                      ({ /* cicili#Let7204 */
                                                                        __auto_type match7203  = nth_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                                        typeof((((match7203 . __h_data ). Just ). __h_0_mem )) wleft ;
                                                                        // ----------
                                                                        
                                                                        ({ /* cicili#Let7209 */
                                                                          bool __h_case_result  = (true  &&  (((match7203 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7210 */
                                                                                (wleft  =  (((match7203 . __h_data ). Just ). __h_0_mem ) );
                                                                                true ;
                                                                              }) ) );
                                                                          // ----------
                                                                          ((__h_case_result ) ? ({ /* cicili#Progn7213 */
                                                                              ({ /* cicili#Let7216 */
                                                                                __auto_type __h_matchbox  = wleft ;
                                                                                // ----------
                                                                                ({ /* cicili#Let7220 */
                                                                                  __auto_type match7219  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                  typeof((((match7219 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                  // ----------
                                                                                  
                                                                                  ({ /* cicili#Let7225 */
                                                                                    bool __h_case_result  = (true  &&  (((match7219 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7226 */
                                                                                          (unboxed  =  (((match7219 . __h_data ). Just ). __h_0_mem ) );
                                                                                          true ;
                                                                                        }) ) );
                                                                                    // ----------
                                                                                    ((__h_case_result ) ? ({ /* cicili#Progn7229 */
                                                                                        ({ /* cicili#Let7233 */
                                                                                          typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) left_items ;
                                                                                          typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) left_children ;
                                                                                          // ----------
                                                                                          
                                                                                          ({ /* cicili#Let7237 */
                                                                                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn7238 */
                                                                                                    (left_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                                    true ;
                                                                                                  }) &&  ({ /* cicili#Progn7240 */
                                                                                                    (left_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                                    true ;
                                                                                                  }) ) ) );
                                                                                            // ----------
                                                                                            ((__h_case_result ) ? ({ /* cicili#Progn7243 */
                                                                                                ({ /* cicili#Let7246 */
                                                                                                  __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7248 */
                                                                                                    __auto_type nchild  = nchild ;
                                                                                                    // ----------
                                                                                                    ((void)(nchild -> __h_table -> freeClass ));
                                                                                                    nchild ;
                                                                                                  });
                                                                                                  // ----------
                                                                                                  Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), (((index  >  0 )) ? (index  -  1 ) : index ), left_items , left_children , child_items , child_children ));
                                                                                                });
                                                                                              }) : ({ /* cicili#Let7256 */
                                                                                                typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) left_items ;
                                                                                                typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) left_children ;
                                                                                                // ----------
                                                                                                
                                                                                                ({ /* cicili#Let7260 */
                                                                                                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn7261 */
                                                                                                          (left_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                          true ;
                                                                                                        }) &&  ({ /* cicili#Progn7263 */
                                                                                                          (left_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                          true ;
                                                                                                        }) ) ) );
                                                                                                  // ----------
                                                                                                  ((__h_case_result ) ? ({ /* cicili#Progn7266 */
                                                                                                      ({ /* cicili#Let7269 */
                                                                                                        __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7271 */
                                                                                                          __auto_type nchild  = nchild ;
                                                                                                          // ----------
                                                                                                          ((void)(nchild -> __h_table -> freeClass ));
                                                                                                          nchild ;
                                                                                                        });
                                                                                                        // ----------
                                                                                                        Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), (((index  >  0 )) ? (index  -  1 ) : index ), left_items , left_children , child_items , child_children ));
                                                                                                      });
                                                                                                    }) : ({ /* cicili#Let7279 */
                                                                                                      // ----------
                                                                                                      
                                                                                                      ({ /* cicili#Progn7283 */
                                                                                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL1-1"));
                                                                                                      });
                                                                                                    }));
                                                                                                });
                                                                                              }));
                                                                                          });
                                                                                        });
                                                                                      }) : ({ /* cicili#Let7290 */
                                                                                        // ----------
                                                                                        
                                                                                        ({ /* cicili#Progn7294 */
                                                                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL1"));
                                                                                        });
                                                                                      }));
                                                                                  });
                                                                                });
                                                                              });
                                                                            }) : ({ /* cicili#Let7301 */
                                                                              // ----------
                                                                              
                                                                              ({ /* cicili#Progn7305 */
                                                                                ({ /* cicili#Let7309 */
                                                                                  __auto_type match7308  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                                  typeof((((match7308 . __h_data ). Just ). __h_0_mem )) wright ;
                                                                                  // ----------
                                                                                  
                                                                                  ({ /* cicili#Let7314 */
                                                                                    bool __h_case_result  = (true  &&  (((match7308 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7315 */
                                                                                          (wright  =  (((match7308 . __h_data ). Just ). __h_0_mem ) );
                                                                                          true ;
                                                                                        }) ) );
                                                                                    // ----------
                                                                                    ((__h_case_result ) ? ({ /* cicili#Progn7318 */
                                                                                        ({ /* cicili#Let7321 */
                                                                                          __auto_type __h_matchbox  = wright ;
                                                                                          // ----------
                                                                                          ({ /* cicili#Let7325 */
                                                                                            __auto_type match7324  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                            typeof((((match7324 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                            // ----------
                                                                                            
                                                                                            ({ /* cicili#Let7330 */
                                                                                              bool __h_case_result  = (true  &&  (((match7324 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7331 */
                                                                                                    (unboxed  =  (((match7324 . __h_data ). Just ). __h_0_mem ) );
                                                                                                    true ;
                                                                                                  }) ) );
                                                                                              // ----------
                                                                                              ((__h_case_result ) ? ({ /* cicili#Progn7334 */
                                                                                                  ({ /* cicili#Let7338 */
                                                                                                    typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) right_items ;
                                                                                                    typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) right_children ;
                                                                                                    // ----------
                                                                                                    
                                                                                                    ({ /* cicili#Let7342 */
                                                                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn7343 */
                                                                                                              (right_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                                              true ;
                                                                                                            }) &&  ({ /* cicili#Progn7345 */
                                                                                                              (right_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                                              true ;
                                                                                                            }) ) ) );
                                                                                                      // ----------
                                                                                                      ((__h_case_result ) ? ({ /* cicili#Progn7348 */
                                                                                                          ({ /* cicili#Let7351 */
                                                                                                            __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7353 */
                                                                                                              __auto_type nchild  = nchild ;
                                                                                                              // ----------
                                                                                                              ((void)(nchild -> __h_table -> freeClass ));
                                                                                                              nchild ;
                                                                                                            });
                                                                                                            // ----------
                                                                                                            Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), index , child_items , child_children , right_items , right_children ));
                                                                                                          });
                                                                                                        }) : ({ /* cicili#Let7361 */
                                                                                                          typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) right_items ;
                                                                                                          typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) right_children ;
                                                                                                          // ----------
                                                                                                          
                                                                                                          ({ /* cicili#Let7365 */
                                                                                                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn7366 */
                                                                                                                    (right_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                                    true ;
                                                                                                                  }) &&  ({ /* cicili#Progn7368 */
                                                                                                                    (right_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                                    true ;
                                                                                                                  }) ) ) );
                                                                                                            // ----------
                                                                                                            ((__h_case_result ) ? ({ /* cicili#Progn7371 */
                                                                                                                ({ /* cicili#Let7374 */
                                                                                                                  __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7376 */
                                                                                                                    __auto_type nchild  = nchild ;
                                                                                                                    // ----------
                                                                                                                    ((void)(nchild -> __h_table -> freeClass ));
                                                                                                                    nchild ;
                                                                                                                  });
                                                                                                                  // ----------
                                                                                                                  Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), index , child_items , child_children , right_items , right_children ));
                                                                                                                });
                                                                                                              }) : ({ /* cicili#Let7384 */
                                                                                                                // ----------
                                                                                                                
                                                                                                                ({ /* cicili#Progn7388 */
                                                                                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR2-1"));
                                                                                                                });
                                                                                                              }));
                                                                                                          });
                                                                                                        }));
                                                                                                    });
                                                                                                  });
                                                                                                }) : ({ /* cicili#Let7395 */
                                                                                                  // ----------
                                                                                                  
                                                                                                  ({ /* cicili#Progn7399 */
                                                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR2"));
                                                                                                  });
                                                                                                }));
                                                                                            });
                                                                                          });
                                                                                        });
                                                                                      }) : ({ /* cicili#Let7406 */
                                                                                        // ----------
                                                                                        
                                                                                        ({ /* cicili#Progn7410 */
                                                                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR1"));
                                                                                        });
                                                                                      }));
                                                                                  });
                                                                                });
                                                                              });
                                                                            }));
                                                                        });
                                                                      });
                                                                    }) : ({ /* cicili#Let7417 */
                                                                      // ----------
                                                                      
                                                                      ({ /* cicili#Progn7421 */
                                                                        Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let7429 */
                                                                            __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7431 */
                                                                              __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                                              // ----------
                                                                              ((void)((r1 . __h_table )-> freeData ));
                                                                              r1 ;
                                                                            });
                                                                            __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7435 */
                                                                              __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                                                                              // ----------
                                                                              ((void)(r2 -> __h_table -> freeClass ));
                                                                              r2 ;
                                                                            });
                                                                            // ----------
                                                                            fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn7444 */
                                                                                Rc_BTree_int_User __ciciliC_7443 (Rc_BTree_int_User __h_value ) {
                                                                                  return clone_Rc_BTree_int_User (__h_value );
                                                                                }
                                                                                __ciciliC_7443 ;
                                                                              }), r2 );
                                                                          })));
                                                                      });
                                                                    }));
                                                                });
                                                              });
                                                            }) : ({ /* cicili#Let7451 */
                                                              __auto_type left  = match7176 ;
                                                              // ----------
                                                              
                                                              ({ /* cicili#Progn7455 */
                                                                left ;
                                                              });
                                                            }));
                                                        });
                                                      });
                                                    }) : ({ /* cicili#Let7459 */
                                                      // ----------
                                                      
                                                      ({ /* cicili#Progn7463 */
                                                        ({ /* cicili#Let7467 */
                                                          __auto_type match7466  = deleteWithParent_BTree_int_User (tree , (((index  >  0 )) ? (index  -  1 ) : index ), index , tr , skey , callback );
                                                          typeof((((match7466 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                          // ----------
                                                          
                                                          ({ /* cicili#Let7472 */
                                                            bool __h_case_result  = (true  &&  (((match7466 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn7473 */
                                                                  (nchild  =  (((match7466 . __h_data ). Right ). __h_0_mem ) );
                                                                  true ;
                                                                }) ) );
                                                            // ----------
                                                            ((__h_case_result ) ? ({ /* cicili#Progn7476 */
                                                                borrowLeaf_BTree_int_User (items , children , wleft , current , index , nchild , callback );
                                                              }) : ({ /* cicili#Let7481 */
                                                                __auto_type left  = match7466 ;
                                                                // ----------
                                                                
                                                                ({ /* cicili#Progn7485 */
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
                                      }) : ({ /* cicili#Let7489 */
                                        // ----------
                                        
                                        ({ /* cicili#Progn7493 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CHILD (head , index ));
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let7500 */
                                // ----------
                                
                                ({ /* cicili#Progn7504 */
                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_NOT_FOUND (skey ));
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let7511 */
                        // ----------
                        
                        ({ /* cicili#Let7515 */
                          bool __h_case_result  = (true  &&  ((match6838 . __h_ctor ) ==  __h_EQ_t  ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn7517 */
                              ({ /* cicili#Let7520 */
                                __auto_type result  = borrowInternal_BTree_int_User (tree , items , children , current , index , callback );
                                // ----------
                                { /* cicili#Let7525 */
                                  // ----------
                                  
                                  ({ /* cicili#Let7529 */
                                    bool __h_case_result  = (true  &&  ((result . __h_ctor ) ==  __h_Right_t  ) );
                                    // ----------
                                    if (__h_case_result )
                                      { /* cicili#Block7532 */
                                        if (callback )
                                          { /* cicili#Block7536 */
                                            callback (head );
                                          }
                                      }
                                  });
                                }
                                result ;
                              });
                            }) : ({ /* cicili#Let7540 */
                              // ----------
                              
                              ({ /* cicili#Progn7544 */
                                deleteInternal (tree , items , children , Just_List_BTree_int_User_pair_t (current ), tail , (index  +  1 ));
                              });
                            }));
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let7549 */
                // ----------
                
                ({ /* cicili#Progn7553 */
                  ({ /* cicili#Let7557 */
                    __auto_type match7556  = nth_List_Rc_BTree_int_User (index , children );
                    typeof((((match7556 . __h_data ). Just ). __h_0_mem )) child ;
                    // ----------
                    
                    ({ /* cicili#Let7562 */
                      bool __h_case_result  = (true  &&  (((match7556 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7563 */
                            (child  =  (((match7556 . __h_data ). Just ). __h_0_mem ) );
                            true ;
                          }) ) );
                      // ----------
                      ((__h_case_result ) ? ({ /* cicili#Progn7566 */
                          ({ /* cicili#Let7570 */
                            __auto_type match7569  = get_Rc_BTree_int_User (child );
                            typeof((((match7569 . __h_data ). Just ). __h_0_mem )) tr ;
                            // ----------
                            
                            ({ /* cicili#Let7575 */
                              bool __h_case_result  = (true  &&  (((match7569 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7576 */
                                    (tr  =  (((match7569 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              ((__h_case_result ) ? ({ /* cicili#Progn7579 */
                                  ({ /* cicili#Let7583 */
                                    // ----------
                                    
                                    ({ /* cicili#Let7587 */
                                      bool __h_case_result  = (true  &&  ((tr -> __h_ctor ) ==  __h_Branch_t  ) );
                                      // ----------
                                      ((__h_case_result ) ? ({ /* cicili#Progn7589 */
                                          ({ /* cicili#Let7593 */
                                            __auto_type match7592  = deleteWithParent_BTree_int_User (tree , (index  -  1 ), index , tr , skey , callback );
                                            typeof((((match7592 . __h_data ). Right ). __h_0_mem )) nchild ;
                                            // ----------
                                            
                                            ({ /* cicili#Let7598 */
                                              bool __h_case_result  = (true  &&  (((match7592 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn7599 */
                                                    (nchild  =  (((match7592 . __h_data ). Right ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              ((__h_case_result ) ? ({ /* cicili#Progn7602 */
                                                  ({ /* cicili#Let7606 */
                                                    typeof((((nchild -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                                    typeof((((nchild -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                                    // ----------
                                                    
                                                    ({ /* cicili#Let7610 */
                                                      bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn7611 */
                                                              (child_items  =  (((nchild -> __h_data ). Branch ). __h_0_mem ) );
                                                              true ;
                                                            }) &&  ({ /* cicili#Progn7613 */
                                                              (child_children  =  (((nchild -> __h_data ). Branch ). __h_1_mem ) );
                                                              true ;
                                                            }) ) ) );
                                                      // ----------
                                                      ((__h_case_result ) ? ({ /* cicili#Progn7616 */
                                                          ({ /* cicili#Let7620 */
                                                            __auto_type match7619  = nth_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                            typeof((((match7619 . __h_data ). Just ). __h_0_mem )) wleft ;
                                                            // ----------
                                                            
                                                            ({ /* cicili#Let7625 */
                                                              bool __h_case_result  = (true  &&  (((match7619 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7626 */
                                                                    (wleft  =  (((match7619 . __h_data ). Just ). __h_0_mem ) );
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              ((__h_case_result ) ? ({ /* cicili#Progn7629 */
                                                                  ({ /* cicili#Let7632 */
                                                                    __auto_type __h_matchbox  = wleft ;
                                                                    // ----------
                                                                    ({ /* cicili#Let7636 */
                                                                      __auto_type match7635  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                      typeof((((match7635 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                      // ----------
                                                                      
                                                                      ({ /* cicili#Let7641 */
                                                                        bool __h_case_result  = (true  &&  (((match7635 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7642 */
                                                                              (unboxed  =  (((match7635 . __h_data ). Just ). __h_0_mem ) );
                                                                              true ;
                                                                            }) ) );
                                                                        // ----------
                                                                        ((__h_case_result ) ? ({ /* cicili#Progn7645 */
                                                                            ({ /* cicili#Let7649 */
                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) left_items ;
                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) left_children ;
                                                                              // ----------
                                                                              
                                                                              ({ /* cicili#Let7653 */
                                                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn7654 */
                                                                                        (left_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                        true ;
                                                                                      }) &&  ({ /* cicili#Progn7656 */
                                                                                        (left_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                        true ;
                                                                                      }) ) ) );
                                                                                // ----------
                                                                                ((__h_case_result ) ? ({ /* cicili#Progn7659 */
                                                                                    ({ /* cicili#Let7662 */
                                                                                      __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7664 */
                                                                                        __auto_type nchild  = nchild ;
                                                                                        // ----------
                                                                                        ((void)(nchild -> __h_table -> freeClass ));
                                                                                        nchild ;
                                                                                      });
                                                                                      // ----------
                                                                                      Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), (index  -  1 ), left_items , left_children , child_items , child_children ));
                                                                                    });
                                                                                  }) : ({ /* cicili#Let7672 */
                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) left_items ;
                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) left_children ;
                                                                                    // ----------
                                                                                    
                                                                                    ({ /* cicili#Let7676 */
                                                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn7677 */
                                                                                              (left_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                              true ;
                                                                                            }) &&  ({ /* cicili#Progn7679 */
                                                                                              (left_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                              true ;
                                                                                            }) ) ) );
                                                                                      // ----------
                                                                                      ((__h_case_result ) ? ({ /* cicili#Progn7682 */
                                                                                          ({ /* cicili#Let7685 */
                                                                                            __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7687 */
                                                                                              __auto_type nchild  = nchild ;
                                                                                              // ----------
                                                                                              ((void)(nchild -> __h_table -> freeClass ));
                                                                                              nchild ;
                                                                                            });
                                                                                            // ----------
                                                                                            Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), (index  -  1 ), left_items , left_children , child_items , child_children ));
                                                                                          });
                                                                                        }) : ({ /* cicili#Let7695 */
                                                                                          // ----------
                                                                                          
                                                                                          ({ /* cicili#Progn7699 */
                                                                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL111"));
                                                                                          });
                                                                                        }));
                                                                                    });
                                                                                  }));
                                                                              });
                                                                            });
                                                                          }) : ({ /* cicili#Let7706 */
                                                                            // ----------
                                                                            
                                                                            ({ /* cicili#Progn7710 */
                                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL11"));
                                                                            });
                                                                          }));
                                                                      });
                                                                    });
                                                                  });
                                                                }) : ({ /* cicili#Let7717 */
                                                                  // ----------
                                                                  
                                                                  ({ /* cicili#Progn7721 */
                                                                    ({ /* cicili#Let7725 */
                                                                      __auto_type match7724  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                      typeof((((match7724 . __h_data ). Just ). __h_0_mem )) wright ;
                                                                      // ----------
                                                                      
                                                                      ({ /* cicili#Let7730 */
                                                                        bool __h_case_result  = (true  &&  (((match7724 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7731 */
                                                                              (wright  =  (((match7724 . __h_data ). Just ). __h_0_mem ) );
                                                                              true ;
                                                                            }) ) );
                                                                        // ----------
                                                                        ((__h_case_result ) ? ({ /* cicili#Progn7734 */
                                                                            ({ /* cicili#Let7737 */
                                                                              __auto_type __h_matchbox  = wright ;
                                                                              // ----------
                                                                              ({ /* cicili#Let7741 */
                                                                                __auto_type match7740  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                typeof((((match7740 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                // ----------
                                                                                
                                                                                ({ /* cicili#Let7746 */
                                                                                  bool __h_case_result  = (true  &&  (((match7740 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7747 */
                                                                                        (unboxed  =  (((match7740 . __h_data ). Just ). __h_0_mem ) );
                                                                                        true ;
                                                                                      }) ) );
                                                                                  // ----------
                                                                                  ((__h_case_result ) ? ({ /* cicili#Progn7750 */
                                                                                      ({ /* cicili#Let7754 */
                                                                                        typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) right_items ;
                                                                                        typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) right_children ;
                                                                                        // ----------
                                                                                        
                                                                                        ({ /* cicili#Let7758 */
                                                                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn7759 */
                                                                                                  (right_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                                  true ;
                                                                                                }) &&  ({ /* cicili#Progn7761 */
                                                                                                  (right_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                                  true ;
                                                                                                }) ) ) );
                                                                                          // ----------
                                                                                          ((__h_case_result ) ? ({ /* cicili#Progn7764 */
                                                                                              ({ /* cicili#Let7767 */
                                                                                                __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7769 */
                                                                                                  __auto_type nchild  = nchild ;
                                                                                                  // ----------
                                                                                                  ((void)(nchild -> __h_table -> freeClass ));
                                                                                                  nchild ;
                                                                                                });
                                                                                                // ----------
                                                                                                Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), index , child_items , child_children , right_items , right_children ));
                                                                                              });
                                                                                            }) : ({ /* cicili#Let7777 */
                                                                                              typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) right_items ;
                                                                                              typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) right_children ;
                                                                                              // ----------
                                                                                              
                                                                                              ({ /* cicili#Let7781 */
                                                                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn7782 */
                                                                                                        (right_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                        true ;
                                                                                                      }) &&  ({ /* cicili#Progn7784 */
                                                                                                        (right_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                        true ;
                                                                                                      }) ) ) );
                                                                                                // ----------
                                                                                                ((__h_case_result ) ? ({ /* cicili#Progn7787 */
                                                                                                    ({ /* cicili#Let7790 */
                                                                                                      __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7792 */
                                                                                                        __auto_type nchild  = nchild ;
                                                                                                        // ----------
                                                                                                        ((void)(nchild -> __h_table -> freeClass ));
                                                                                                        nchild ;
                                                                                                      });
                                                                                                      // ----------
                                                                                                      Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), index , child_items , child_children , right_items , right_children ));
                                                                                                    });
                                                                                                  }) : ({ /* cicili#Let7800 */
                                                                                                    // ----------
                                                                                                    
                                                                                                    ({ /* cicili#Progn7804 */
                                                                                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR222"));
                                                                                                    });
                                                                                                  }));
                                                                                              });
                                                                                            }));
                                                                                        });
                                                                                      });
                                                                                    }) : ({ /* cicili#Let7811 */
                                                                                      // ----------
                                                                                      
                                                                                      ({ /* cicili#Progn7815 */
                                                                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR22"));
                                                                                      });
                                                                                    }));
                                                                                });
                                                                              });
                                                                            });
                                                                          }) : ({ /* cicili#Let7822 */
                                                                            // ----------
                                                                            
                                                                            ({ /* cicili#Progn7826 */
                                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR221"));
                                                                            });
                                                                          }));
                                                                      });
                                                                    });
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        }) : ({ /* cicili#Let7833 */
                                                          // ----------
                                                          
                                                          ({ /* cicili#Progn7837 */
                                                            Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let7845 */
                                                                __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7847 */
                                                                  __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                                  // ----------
                                                                  ((void)((r1 . __h_table )-> freeData ));
                                                                  r1 ;
                                                                });
                                                                __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7851 */
                                                                  __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                                                                  // ----------
                                                                  ((void)(r2 -> __h_table -> freeClass ));
                                                                  r2 ;
                                                                });
                                                                // ----------
                                                                fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn7860 */
                                                                    Rc_BTree_int_User __ciciliC_7859 (Rc_BTree_int_User __h_value ) {
                                                                      return clone_Rc_BTree_int_User (__h_value );
                                                                    }
                                                                    __ciciliC_7859 ;
                                                                  }), r2 );
                                                              })));
                                                          });
                                                        }));
                                                    });
                                                  });
                                                }) : ({ /* cicili#Let7867 */
                                                  __auto_type left  = match7592 ;
                                                  // ----------
                                                  
                                                  ({ /* cicili#Progn7871 */
                                                    left ;
                                                  });
                                                }));
                                            });
                                          });
                                        }) : ({ /* cicili#Let7875 */
                                          // ----------
                                          
                                          ({ /* cicili#Let7879 */
                                            bool __h_case_result  = (true  &&  ((tr -> __h_ctor ) ==  __h_Internal_t  ) );
                                            // ----------
                                            ((__h_case_result ) ? ({ /* cicili#Progn7881 */
                                                ({ /* cicili#Let7885 */
                                                  __auto_type match7884  = deleteWithParent_BTree_int_User (tree , (index  -  1 ), index , tr , skey , callback );
                                                  typeof((((match7884 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                  // ----------
                                                  
                                                  ({ /* cicili#Let7890 */
                                                    bool __h_case_result  = (true  &&  (((match7884 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn7891 */
                                                          (nchild  =  (((match7884 . __h_data ). Right ). __h_0_mem ) );
                                                          true ;
                                                        }) ) );
                                                    // ----------
                                                    ((__h_case_result ) ? ({ /* cicili#Progn7894 */
                                                        ({ /* cicili#Let7898 */
                                                          typeof((((nchild -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                                          typeof((((nchild -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                                          // ----------
                                                          
                                                          ({ /* cicili#Let7902 */
                                                            bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn7903 */
                                                                    (child_items  =  (((nchild -> __h_data ). Branch ). __h_0_mem ) );
                                                                    true ;
                                                                  }) &&  ({ /* cicili#Progn7905 */
                                                                    (child_children  =  (((nchild -> __h_data ). Branch ). __h_1_mem ) );
                                                                    true ;
                                                                  }) ) ) );
                                                            // ----------
                                                            ((__h_case_result ) ? ({ /* cicili#Progn7908 */
                                                                ({ /* cicili#Let7912 */
                                                                  __auto_type match7911  = nth_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                                  typeof((((match7911 . __h_data ). Just ). __h_0_mem )) wleft ;
                                                                  // ----------
                                                                  
                                                                  ({ /* cicili#Let7917 */
                                                                    bool __h_case_result  = (true  &&  (((match7911 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7918 */
                                                                          (wleft  =  (((match7911 . __h_data ). Just ). __h_0_mem ) );
                                                                          true ;
                                                                        }) ) );
                                                                    // ----------
                                                                    ((__h_case_result ) ? ({ /* cicili#Progn7921 */
                                                                        ({ /* cicili#Let7924 */
                                                                          __auto_type __h_matchbox  = wleft ;
                                                                          // ----------
                                                                          ({ /* cicili#Let7928 */
                                                                            __auto_type match7927  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                            typeof((((match7927 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                            // ----------
                                                                            
                                                                            ({ /* cicili#Let7933 */
                                                                              bool __h_case_result  = (true  &&  (((match7927 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7934 */
                                                                                    (unboxed  =  (((match7927 . __h_data ). Just ). __h_0_mem ) );
                                                                                    true ;
                                                                                  }) ) );
                                                                              // ----------
                                                                              ((__h_case_result ) ? ({ /* cicili#Progn7937 */
                                                                                  ({ /* cicili#Let7941 */
                                                                                    typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) left_items ;
                                                                                    typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) left_children ;
                                                                                    // ----------
                                                                                    
                                                                                    ({ /* cicili#Let7945 */
                                                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn7946 */
                                                                                              (left_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                              true ;
                                                                                            }) &&  ({ /* cicili#Progn7948 */
                                                                                              (left_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                              true ;
                                                                                            }) ) ) );
                                                                                      // ----------
                                                                                      ((__h_case_result ) ? ({ /* cicili#Progn7951 */
                                                                                          ({ /* cicili#Let7954 */
                                                                                            __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7956 */
                                                                                              __auto_type nchild  = nchild ;
                                                                                              // ----------
                                                                                              ((void)(nchild -> __h_table -> freeClass ));
                                                                                              nchild ;
                                                                                            });
                                                                                            // ----------
                                                                                            Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), (index  -  1 ), left_items , left_children , child_items , child_children ));
                                                                                          });
                                                                                        }) : ({ /* cicili#Let7964 */
                                                                                          typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) left_items ;
                                                                                          typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) left_children ;
                                                                                          // ----------
                                                                                          
                                                                                          ({ /* cicili#Let7968 */
                                                                                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn7969 */
                                                                                                    (left_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                    true ;
                                                                                                  }) &&  ({ /* cicili#Progn7971 */
                                                                                                    (left_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                    true ;
                                                                                                  }) ) ) );
                                                                                            // ----------
                                                                                            ((__h_case_result ) ? ({ /* cicili#Progn7974 */
                                                                                                ({ /* cicili#Let7977 */
                                                                                                  __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7979 */
                                                                                                    __auto_type nchild  = nchild ;
                                                                                                    // ----------
                                                                                                    ((void)(nchild -> __h_table -> freeClass ));
                                                                                                    nchild ;
                                                                                                  });
                                                                                                  // ----------
                                                                                                  Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), (index  -  1 ), left_items , left_children , child_items , child_children ));
                                                                                                });
                                                                                              }) : ({ /* cicili#Let7987 */
                                                                                                // ----------
                                                                                                
                                                                                                ({ /* cicili#Progn7991 */
                                                                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL111"));
                                                                                                });
                                                                                              }));
                                                                                          });
                                                                                        }));
                                                                                    });
                                                                                  });
                                                                                }) : ({ /* cicili#Let7998 */
                                                                                  // ----------
                                                                                  
                                                                                  ({ /* cicili#Progn8002 */
                                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL11"));
                                                                                  });
                                                                                }));
                                                                            });
                                                                          });
                                                                        });
                                                                      }) : ({ /* cicili#Let8009 */
                                                                        // ----------
                                                                        
                                                                        ({ /* cicili#Progn8013 */
                                                                          ({ /* cicili#Let8017 */
                                                                            __auto_type match8016  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                            typeof((((match8016 . __h_data ). Just ). __h_0_mem )) wright ;
                                                                            // ----------
                                                                            
                                                                            ({ /* cicili#Let8022 */
                                                                              bool __h_case_result  = (true  &&  (((match8016 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8023 */
                                                                                    (wright  =  (((match8016 . __h_data ). Just ). __h_0_mem ) );
                                                                                    true ;
                                                                                  }) ) );
                                                                              // ----------
                                                                              ((__h_case_result ) ? ({ /* cicili#Progn8026 */
                                                                                  ({ /* cicili#Let8029 */
                                                                                    __auto_type __h_matchbox  = wright ;
                                                                                    // ----------
                                                                                    ({ /* cicili#Let8033 */
                                                                                      __auto_type match8032  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                      typeof((((match8032 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                      // ----------
                                                                                      
                                                                                      ({ /* cicili#Let8038 */
                                                                                        bool __h_case_result  = (true  &&  (((match8032 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8039 */
                                                                                              (unboxed  =  (((match8032 . __h_data ). Just ). __h_0_mem ) );
                                                                                              true ;
                                                                                            }) ) );
                                                                                        // ----------
                                                                                        ((__h_case_result ) ? ({ /* cicili#Progn8042 */
                                                                                            ({ /* cicili#Let8046 */
                                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) right_items ;
                                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) right_children ;
                                                                                              // ----------
                                                                                              
                                                                                              ({ /* cicili#Let8050 */
                                                                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn8051 */
                                                                                                        (right_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                                        true ;
                                                                                                      }) &&  ({ /* cicili#Progn8053 */
                                                                                                        (right_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                                        true ;
                                                                                                      }) ) ) );
                                                                                                // ----------
                                                                                                ((__h_case_result ) ? ({ /* cicili#Progn8056 */
                                                                                                    ({ /* cicili#Let8059 */
                                                                                                      __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8061 */
                                                                                                        __auto_type nchild  = nchild ;
                                                                                                        // ----------
                                                                                                        ((void)(nchild -> __h_table -> freeClass ));
                                                                                                        nchild ;
                                                                                                      });
                                                                                                      // ----------
                                                                                                      Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), index , child_items , child_children , right_items , right_children ));
                                                                                                    });
                                                                                                  }) : ({ /* cicili#Let8069 */
                                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) right_items ;
                                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) right_children ;
                                                                                                    // ----------
                                                                                                    
                                                                                                    ({ /* cicili#Let8073 */
                                                                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn8074 */
                                                                                                              (right_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                              true ;
                                                                                                            }) &&  ({ /* cicili#Progn8076 */
                                                                                                              (right_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                              true ;
                                                                                                            }) ) ) );
                                                                                                      // ----------
                                                                                                      ((__h_case_result ) ? ({ /* cicili#Progn8079 */
                                                                                                          ({ /* cicili#Let8082 */
                                                                                                            __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8084 */
                                                                                                              __auto_type nchild  = nchild ;
                                                                                                              // ----------
                                                                                                              ((void)(nchild -> __h_table -> freeClass ));
                                                                                                              nchild ;
                                                                                                            });
                                                                                                            // ----------
                                                                                                            Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), index , child_items , child_children , right_items , right_children ));
                                                                                                          });
                                                                                                        }) : ({ /* cicili#Let8092 */
                                                                                                          // ----------
                                                                                                          
                                                                                                          ({ /* cicili#Progn8096 */
                                                                                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR222"));
                                                                                                          });
                                                                                                        }));
                                                                                                    });
                                                                                                  }));
                                                                                              });
                                                                                            });
                                                                                          }) : ({ /* cicili#Let8103 */
                                                                                            // ----------
                                                                                            
                                                                                            ({ /* cicili#Progn8107 */
                                                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR22"));
                                                                                            });
                                                                                          }));
                                                                                      });
                                                                                    });
                                                                                  });
                                                                                }) : ({ /* cicili#Let8114 */
                                                                                  // ----------
                                                                                  
                                                                                  ({ /* cicili#Progn8118 */
                                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR221"));
                                                                                  });
                                                                                }));
                                                                            });
                                                                          });
                                                                        });
                                                                      }));
                                                                  });
                                                                });
                                                              }) : ({ /* cicili#Let8125 */
                                                                // ----------
                                                                
                                                                ({ /* cicili#Progn8129 */
                                                                  Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let8137 */
                                                                      __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8139 */
                                                                        __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                                        // ----------
                                                                        ((void)((r1 . __h_table )-> freeData ));
                                                                        r1 ;
                                                                      });
                                                                      __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8143 */
                                                                        __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                                                                        // ----------
                                                                        ((void)(r2 -> __h_table -> freeClass ));
                                                                        r2 ;
                                                                      });
                                                                      // ----------
                                                                      fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn8152 */
                                                                          Rc_BTree_int_User __ciciliC_8151 (Rc_BTree_int_User __h_value ) {
                                                                            return clone_Rc_BTree_int_User (__h_value );
                                                                          }
                                                                          __ciciliC_8151 ;
                                                                        }), r2 );
                                                                    })));
                                                                });
                                                              }));
                                                          });
                                                        });
                                                      }) : ({ /* cicili#Let8159 */
                                                        __auto_type left  = match7884 ;
                                                        // ----------
                                                        
                                                        ({ /* cicili#Progn8163 */
                                                          left ;
                                                        });
                                                      }));
                                                  });
                                                });
                                              }) : ({ /* cicili#Let8167 */
                                                // ----------
                                                
                                                ({ /* cicili#Progn8171 */
                                                  ({ /* cicili#Let8175 */
                                                    __auto_type match8174  = deleteWithParent_BTree_int_User (tree , (index  -  1 ), index , tr , skey , callback );
                                                    typeof((((match8174 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                    // ----------
                                                    
                                                    ({ /* cicili#Let8180 */
                                                      bool __h_case_result  = (true  &&  (((match8174 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn8181 */
                                                            (nchild  =  (((match8174 . __h_data ). Right ). __h_0_mem ) );
                                                            true ;
                                                          }) ) );
                                                      // ----------
                                                      ((__h_case_result ) ? ({ /* cicili#Progn8184 */
                                                          borrowLeaf_BTree_int_User (items , children , wleft , current , index , nchild , callback );
                                                        }) : ({ /* cicili#Let8189 */
                                                          __auto_type left  = match8174 ;
                                                          // ----------
                                                          
                                                          ({ /* cicili#Progn8193 */
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
                                }) : ({ /* cicili#Let8197 */
                                  // ----------
                                  
                                  ({ /* cicili#Progn8201 */
                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CHILD (head , index ));
                                  });
                                }));
                            });
                          });
                        }) : ({ /* cicili#Let8208 */
                          // ----------
                          
                          ({ /* cicili#Progn8212 */
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
        ({ /* cicili#Let8221 */
          __auto_type rs  = ({ /* cicili#Let8224 */
            typeof((((result . __h_data ). Right ). __h_0_mem )) ntr ;
            // ----------
            
            ({ /* cicili#Let8228 */
              bool __h_case_result  = (true  &&  (((result . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn8229 */
                    (ntr  =  (((result . __h_data ). Right ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              ((__h_case_result ) ? ({ /* cicili#Progn8232 */
                  ({ /* cicili#Let8236 */
                    typeof((((ntr -> __h_data ). Branch ). __h_0_mem )) items ;
                    typeof((((ntr -> __h_data ). Branch ). __h_1_mem )) children ;
                    // ----------
                    
                    ({ /* cicili#Let8240 */
                      bool __h_case_result  = (true  &&  (((ntr -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn8241 */
                              (items  =  (((ntr -> __h_data ). Branch ). __h_0_mem ) );
                              true ;
                            }) &&  ({ /* cicili#Progn8243 */
                              (children  =  (((ntr -> __h_data ). Branch ). __h_1_mem ) );
                              true ;
                            }) ) ) );
                      // ----------
                      ((__h_case_result ) ? ({ /* cicili#Progn8246 */
                          ({ /* cicili#Let8249 */
                            __auto_type items_len  = hasLen_List_BTree_int_User_pair_t (items , (L_BTree_int_User  -  1 ));
                            // ----------
                            (((items_len  ==  (L_BTree_int_User  -  1 ) )) ? result  : ({ /* cicili#Let8257 */
                                typeof((((wparent . __h_data ). Just ). __h_0_mem )) ptree ;
                                // ----------
                                
                                ({ /* cicili#Let8261 */
                                  bool __h_case_result  = (true  &&  (((wparent . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8262 */
                                        (ptree  =  (((wparent . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  ((__h_case_result ) ? ({ /* cicili#Progn8265 */
                                      ({ /* cicili#Let8269 */
                                        typeof((((ptree -> __h_data ). Branch ). __h_0_mem )) pitems ;
                                        // ----------
                                        
                                        ({ /* cicili#Let8273 */
                                          bool __h_case_result  = (true  &&  (((ptree -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn8274 */
                                                (pitems  =  (((ptree -> __h_data ). Branch ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          ((__h_case_result ) ? ({ /* cicili#Progn8277 */
                                              ({ /* cicili#Let8281 */
                                                __auto_type match8280  = nth_List_BTree_int_User_pair_t (pitem_index , pitems );
                                                typeof((((match8280 . __h_data ). Just ). __h_0_mem )) bitem ;
                                                // ----------
                                                
                                                ({ /* cicili#Let8286 */
                                                  bool __h_case_result  = (true  &&  (((match8280 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8287 */
                                                        (bitem  =  (((match8280 . __h_data ). Just ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  ((__h_case_result ) ? ({ /* cicili#Progn8290 */
                                                      ({ /* cicili#Let8293 */
                                                        __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8295 */
                                                          __auto_type ntr  = ntr ;
                                                          // ----------
                                                          ((void)(ntr -> __h_table -> freeClass ));
                                                          ntr ;
                                                        });
                                                        // ----------
                                                        Right_BTree_int_User_Error_BTree_int_User (Branch_BTree_int_User (insertAt_List_BTree_int_User_pair_t (items , bitem , index ), fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn8308 */
                                                            Rc_BTree_int_User __ciciliC_8307 (Rc_BTree_int_User __h_value ) {
                                                              return clone_Rc_BTree_int_User (__h_value );
                                                            }
                                                            __ciciliC_8307 ;
                                                          }), children )));
                                                      });
                                                    }) : ({ /* cicili#Let8315 */
                                                      // ----------
                                                      
                                                      ({ /* cicili#Progn8319 */
                                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 2"));
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let8326 */
                                              typeof((((ptree -> __h_data ). Internal ). __h_0_mem )) pitems ;
                                              // ----------
                                              
                                              ({ /* cicili#Let8330 */
                                                bool __h_case_result  = (true  &&  (((ptree -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn8331 */
                                                      (pitems  =  (((ptree -> __h_data ). Internal ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                ((__h_case_result ) ? ({ /* cicili#Progn8334 */
                                                    ({ /* cicili#Let8338 */
                                                      __auto_type match8337  = nth_List_BTree_int_User_pair_t (pitem_index , pitems );
                                                      typeof((((match8337 . __h_data ). Just ). __h_0_mem )) bitem ;
                                                      // ----------
                                                      
                                                      ({ /* cicili#Let8343 */
                                                        bool __h_case_result  = (true  &&  (((match8337 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8344 */
                                                              (bitem  =  (((match8337 . __h_data ). Just ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        ((__h_case_result ) ? ({ /* cicili#Progn8347 */
                                                            ({ /* cicili#Let8350 */
                                                              __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8352 */
                                                                __auto_type ntr  = ntr ;
                                                                // ----------
                                                                ((void)(ntr -> __h_table -> freeClass ));
                                                                ntr ;
                                                              });
                                                              // ----------
                                                              Right_BTree_int_User_Error_BTree_int_User (Branch_BTree_int_User (insertAt_List_BTree_int_User_pair_t (items , bitem , index ), fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn8365 */
                                                                  Rc_BTree_int_User __ciciliC_8364 (Rc_BTree_int_User __h_value ) {
                                                                    return clone_Rc_BTree_int_User (__h_value );
                                                                  }
                                                                  __ciciliC_8364 ;
                                                                }), children )));
                                                            });
                                                          }) : ({ /* cicili#Let8372 */
                                                            // ----------
                                                            
                                                            ({ /* cicili#Progn8376 */
                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 2"));
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  }) : ({ /* cicili#Let8383 */
                                                    // ----------
                                                    
                                                    ({ /* cicili#Progn8387 */
                                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 1"));
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let8394 */
                                      // ----------
                                      
                                      ({ /* cicili#Progn8398 */
                                        (((items_len  ==  0 )) ? ({ /* cicili#Let8403 */
                                            typeof((((children -> __h_data ). Cons ). __h_0_mem )) head ;
                                            // ----------
                                            
                                            ({ /* cicili#Let8407 */
                                              bool __h_case_result  = (true  &&  (((children -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn8408 */
                                                    (head  =  (((children -> __h_data ). Cons ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              ((__h_case_result ) ? ({ /* cicili#Progn8411 */
                                                  ({ /* cicili#Let8414 */
                                                    __auto_type __h_matchbox  = clone_Rc_BTree_int_User (head );
                                                    // ----------
                                                    ({ /* cicili#Let8419 */
                                                      __auto_type match8418  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                      typeof((((match8418 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                      // ----------
                                                      
                                                      ({ /* cicili#Let8424 */
                                                        bool __h_case_result  = (true  &&  (((match8418 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8425 */
                                                              (unboxed  =  (((match8418 . __h_data ). Just ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        ((__h_case_result ) ? ({ /* cicili#Progn8428 */
                                                            ({ /* cicili#Let8432 */
                                                              __auto_type chtr  = unboxed ;
                                                              // ----------
                                                              
                                                              ({ /* cicili#Progn8436 */
                                                                ({ /* cicili#Let8439 */
                                                                  __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8441 */
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
                                                          }) : ({ /* cicili#Let8448 */
                                                            // ----------
                                                            
                                                            ({ /* cicili#Progn8452 */
                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 3"));
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  });
                                                }) : ({ /* cicili#Let8459 */
                                                  // ----------
                                                  
                                                  ({ /* cicili#Progn8463 */
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
                        }) : ({ /* cicili#Let8467 */
                          typeof((((ntr -> __h_data ). Internal ). __h_0_mem )) items ;
                          typeof((((ntr -> __h_data ). Internal ). __h_1_mem )) children ;
                          // ----------
                          
                          ({ /* cicili#Let8471 */
                            bool __h_case_result  = (true  &&  (((ntr -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn8472 */
                                    (items  =  (((ntr -> __h_data ). Internal ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn8474 */
                                    (children  =  (((ntr -> __h_data ). Internal ). __h_1_mem ) );
                                    true ;
                                  }) ) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn8477 */
                                ({ /* cicili#Let8480 */
                                  __auto_type items_len  = hasLen_List_BTree_int_User_pair_t (items , (L_BTree_int_User  -  1 ));
                                  // ----------
                                  (((items_len  ==  (L_BTree_int_User  -  1 ) )) ? result  : ({ /* cicili#Let8488 */
                                      typeof((((wparent . __h_data ). Just ). __h_0_mem )) ptree ;
                                      // ----------
                                      
                                      ({ /* cicili#Let8492 */
                                        bool __h_case_result  = (true  &&  (((wparent . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8493 */
                                              (ptree  =  (((wparent . __h_data ). Just ). __h_0_mem ) );
                                              true ;
                                            }) ) );
                                        // ----------
                                        ((__h_case_result ) ? ({ /* cicili#Progn8496 */
                                            ({ /* cicili#Let8500 */
                                              typeof((((ptree -> __h_data ). Branch ). __h_0_mem )) pitems ;
                                              // ----------
                                              
                                              ({ /* cicili#Let8504 */
                                                bool __h_case_result  = (true  &&  (((ptree -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn8505 */
                                                      (pitems  =  (((ptree -> __h_data ). Branch ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                ((__h_case_result ) ? ({ /* cicili#Progn8508 */
                                                    ({ /* cicili#Let8512 */
                                                      __auto_type match8511  = nth_List_BTree_int_User_pair_t (pitem_index , pitems );
                                                      typeof((((match8511 . __h_data ). Just ). __h_0_mem )) bitem ;
                                                      // ----------
                                                      
                                                      ({ /* cicili#Let8517 */
                                                        bool __h_case_result  = (true  &&  (((match8511 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8518 */
                                                              (bitem  =  (((match8511 . __h_data ). Just ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        ((__h_case_result ) ? ({ /* cicili#Progn8521 */
                                                            ({ /* cicili#Let8524 */
                                                              __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8526 */
                                                                __auto_type ntr  = ntr ;
                                                                // ----------
                                                                ((void)(ntr -> __h_table -> freeClass ));
                                                                ntr ;
                                                              });
                                                              // ----------
                                                              Right_BTree_int_User_Error_BTree_int_User (Branch_BTree_int_User (insertAt_List_BTree_int_User_pair_t (items , bitem , index ), fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn8539 */
                                                                  Rc_BTree_int_User __ciciliC_8538 (Rc_BTree_int_User __h_value ) {
                                                                    return clone_Rc_BTree_int_User (__h_value );
                                                                  }
                                                                  __ciciliC_8538 ;
                                                                }), children )));
                                                            });
                                                          }) : ({ /* cicili#Let8546 */
                                                            // ----------
                                                            
                                                            ({ /* cicili#Progn8550 */
                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 2"));
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  }) : ({ /* cicili#Let8557 */
                                                    typeof((((ptree -> __h_data ). Internal ). __h_0_mem )) pitems ;
                                                    // ----------
                                                    
                                                    ({ /* cicili#Let8561 */
                                                      bool __h_case_result  = (true  &&  (((ptree -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn8562 */
                                                            (pitems  =  (((ptree -> __h_data ). Internal ). __h_0_mem ) );
                                                            true ;
                                                          }) ) );
                                                      // ----------
                                                      ((__h_case_result ) ? ({ /* cicili#Progn8565 */
                                                          ({ /* cicili#Let8569 */
                                                            __auto_type match8568  = nth_List_BTree_int_User_pair_t (pitem_index , pitems );
                                                            typeof((((match8568 . __h_data ). Just ). __h_0_mem )) bitem ;
                                                            // ----------
                                                            
                                                            ({ /* cicili#Let8574 */
                                                              bool __h_case_result  = (true  &&  (((match8568 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8575 */
                                                                    (bitem  =  (((match8568 . __h_data ). Just ). __h_0_mem ) );
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              ((__h_case_result ) ? ({ /* cicili#Progn8578 */
                                                                  ({ /* cicili#Let8581 */
                                                                    __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8583 */
                                                                      __auto_type ntr  = ntr ;
                                                                      // ----------
                                                                      ((void)(ntr -> __h_table -> freeClass ));
                                                                      ntr ;
                                                                    });
                                                                    // ----------
                                                                    Right_BTree_int_User_Error_BTree_int_User (Branch_BTree_int_User (insertAt_List_BTree_int_User_pair_t (items , bitem , index ), fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn8596 */
                                                                        Rc_BTree_int_User __ciciliC_8595 (Rc_BTree_int_User __h_value ) {
                                                                          return clone_Rc_BTree_int_User (__h_value );
                                                                        }
                                                                        __ciciliC_8595 ;
                                                                      }), children )));
                                                                  });
                                                                }) : ({ /* cicili#Let8603 */
                                                                  // ----------
                                                                  
                                                                  ({ /* cicili#Progn8607 */
                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 2"));
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        }) : ({ /* cicili#Let8614 */
                                                          // ----------
                                                          
                                                          ({ /* cicili#Progn8618 */
                                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 1"));
                                                          });
                                                        }));
                                                    });
                                                  }));
                                              });
                                            });
                                          }) : ({ /* cicili#Let8625 */
                                            // ----------
                                            
                                            ({ /* cicili#Progn8629 */
                                              (((items_len  ==  0 )) ? ({ /* cicili#Let8634 */
                                                  typeof((((children -> __h_data ). Cons ). __h_0_mem )) head ;
                                                  // ----------
                                                  
                                                  ({ /* cicili#Let8638 */
                                                    bool __h_case_result  = (true  &&  (((children -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn8639 */
                                                          (head  =  (((children -> __h_data ). Cons ). __h_0_mem ) );
                                                          true ;
                                                        }) ) );
                                                    // ----------
                                                    ((__h_case_result ) ? ({ /* cicili#Progn8642 */
                                                        ({ /* cicili#Let8645 */
                                                          __auto_type __h_matchbox  = clone_Rc_BTree_int_User (head );
                                                          // ----------
                                                          ({ /* cicili#Let8650 */
                                                            __auto_type match8649  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                            typeof((((match8649 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                            // ----------
                                                            
                                                            ({ /* cicili#Let8655 */
                                                              bool __h_case_result  = (true  &&  (((match8649 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8656 */
                                                                    (unboxed  =  (((match8649 . __h_data ). Just ). __h_0_mem ) );
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              ((__h_case_result ) ? ({ /* cicili#Progn8659 */
                                                                  ({ /* cicili#Let8663 */
                                                                    __auto_type chtr  = unboxed ;
                                                                    // ----------
                                                                    
                                                                    ({ /* cicili#Progn8667 */
                                                                      ({ /* cicili#Let8670 */
                                                                        __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8672 */
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
                                                                }) : ({ /* cicili#Let8679 */
                                                                  // ----------
                                                                  
                                                                  ({ /* cicili#Progn8683 */
                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 3"));
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        });
                                                      }) : ({ /* cicili#Let8690 */
                                                        // ----------
                                                        
                                                        ({ /* cicili#Progn8694 */
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
                              }) : ({ /* cicili#Let8698 */
                                // ----------
                                
                                ({ /* cicili#Progn8702 */
                                  result ;
                                });
                              }));
                          });
                        }));
                    });
                  });
                }) : ({ /* cicili#Let8706 */
                  // ----------
                  
                  ({ /* cicili#Progn8710 */
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
  Either_BTree_int_User_Error_BTree_int_User deleteLeaf (List_BTree_int_User_pair_t items , List_BTree_int_User_pair_t current , int index ) {
    return ({ /* cicili#Let8727 */
        typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((head . __h_0_mem )) key ;
        typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let8731 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn8732 */
                    (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                    true ;
                  }) &&  (true  &&  ({ /* cicili#Progn8734 */
                      (key  =  (head . __h_0_mem ) );
                      true ;
                    }) ) ) &&  ({ /* cicili#Progn8736 */
                  (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn8739 */
              ({ /* cicili#Let8743 */
                __auto_type match8742  = compareKey (skey , key );
                // ----------
                
                ({ /* cicili#Let8747 */
                  bool __h_case_result  = (true  &&  ((match8742 . __h_ctor ) ==  __h_LT_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn8749 */
                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_NOT_FOUND (skey ));
                    }) : ({ /* cicili#Let8756 */
                      // ----------
                      
                      ({ /* cicili#Let8760 */
                        bool __h_case_result  = (true  &&  ((match8742 . __h_ctor ) ==  __h_EQ_t  ) );
                        // ----------
                        ((__h_case_result ) ? ({ /* cicili#Progn8762 */
                            ({ /* cicili#Let8765 */
                              __auto_type result  = Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (delete_List_BTree_int_User_pair_t (items , current )));
                              // ----------
                              { /* cicili#Let8774 */
                                // ----------
                                
                                ({ /* cicili#Let8778 */
                                  bool __h_case_result  = (true  &&  ((result . __h_ctor ) ==  __h_Right_t  ) );
                                  // ----------
                                  if (__h_case_result )
                                    { /* cicili#Block8781 */
                                      if (callback )
                                        { /* cicili#Block8785 */
                                          callback (head );
                                        }
                                    }
                                });
                              }
                              result ;
                            });
                          }) : ({ /* cicili#Let8789 */
                            // ----------
                            
                            ({ /* cicili#Progn8793 */
                              deleteLeaf (items , tail , (index  +  1 ));
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let8797 */
              // ----------
              
              ({ /* cicili#Progn8801 */
                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_NOT_FOUND (skey ));
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let8809 */
      __auto_type result  = ({ /* cicili#Let8812 */
        typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
        typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
        // ----------
        
        ({ /* cicili#Let8816 */
          bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn8817 */
                  (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn8819 */
                  (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn8822 */
              deleteInternal (Just_BTree_int_User (tree ), items , children , Nothing_List_BTree_int_User_pair_t (), items , 0);
            }) : ({ /* cicili#Let8828 */
              typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
              typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
              // ----------
              
              ({ /* cicili#Let8832 */
                bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn8833 */
                        (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                        true ;
                      }) &&  ({ /* cicili#Progn8835 */
                        (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                        true ;
                      }) ) ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn8838 */
                    deleteInternal (Just_BTree_int_User (tree ), items , children , Nothing_List_BTree_int_User_pair_t (), items , 0);
                  }) : ({ /* cicili#Let8844 */
                    typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                    // ----------
                    
                    ({ /* cicili#Let8848 */
                      bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn8849 */
                            (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                            true ;
                          }) ) );
                      // ----------
                      ((__h_case_result ) ? ({ /* cicili#Progn8852 */
                          deleteLeaf (items , items , 0);
                        }) : ({ /* cicili#Let8856 */
                          // ----------
                          
                          ({ /* cicili#Progn8860 */
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
  return ({ /* cicili#Let8883 */
      typeof((((keys -> __h_data ). Cons ). __h_0_mem )) khead ;
      typeof((((keys -> __h_data ). Cons ). __h_1_mem )) ktail ;
      // ----------
      
      ({ /* cicili#Let8887 */
        bool __h_case_result  = (true  &&  (((keys -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn8888 */
                (khead  =  (((keys -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn8890 */
                (ktail  =  (((keys -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn8893 */
            ({ /* cicili#Let8897 */
              typeof((((values -> __h_data ). Cons ). __h_0_mem )) vhead ;
              typeof((((values -> __h_data ). Cons ). __h_1_mem )) vtail ;
              // ----------
              
              ({ /* cicili#Let8901 */
                bool __h_case_result  = (true  &&  (((values -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn8902 */
                        (vhead  =  (((values -> __h_data ). Cons ). __h_0_mem ) );
                        true ;
                      }) &&  ({ /* cicili#Progn8904 */
                        (vtail  =  (((values -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn8907 */
                    ({ /* cicili#Let8910 */
                      __auto_type etree  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8912 */
                        __auto_type etree  = fromLists_BTree_int_User (ktail , vtail );
                        // ----------
                        ((void)((etree . __h_table )-> freeData ));
                        etree ;
                      });
                      // ----------
                      ({ /* cicili#Let8918 */
                        typeof((((etree . __h_data ). Right ). __h_0_mem )) tree ;
                        // ----------
                        
                        ({ /* cicili#Let8922 */
                          bool __h_case_result  = (true  &&  (((etree . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn8923 */
                                (tree  =  (((etree . __h_data ). Right ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn8926 */
                              ({ /* cicili#Let8929 */
                                __auto_type tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8931 */
                                  __auto_type tree  = tree ;
                                  // ----------
                                  ((void)(tree -> __h_table -> freeClass ));
                                  tree ;
                                });
                                // ----------
                                insert_BTree_int_User (tree , khead , vhead );
                              });
                            }) : ({ /* cicili#Let8937 */
                              // ----------
                              
                              ({ /* cicili#Progn8941 */
                                etree ;
                              });
                            }));
                        });
                      });
                    });
                  }) : ({ /* cicili#Let8945 */
                    // ----------
                    
                    ({ /* cicili#Progn8949 */
                      Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (Nil_BTree_int_User_pair_t ()));
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let8957 */
            // ----------
            
            ({ /* cicili#Progn8961 */
              Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (Nil_BTree_int_User_pair_t ()));
            });
          }));
      });
    });
}
Either_BTree_int_User_Error_BTree_int_User pure_BTree_int_User (int keys [], User values [], int len ) {
  return ({ /* cicili#Let8972 */
      BTree_int_User tree  = Leaf_BTree_int_User (Nil_BTree_int_User_pair_t ());
      // ----------
      for (int i  = 0; (i  <  len  ); (++i )) {
          { /* cicili#Let8980 */
            __auto_type match8979  = insert_BTree_int_User (tree , keys [i ], values [i ]);
            typeof((((match8979 . __h_data ). Right ). __h_0_mem )) new_tree ;
            // ----------
            
            ({ /* cicili#Let8985 */
              bool __h_case_result  = (true  &&  (((match8979 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn8986 */
                    (new_tree  =  (((match8979 . __h_data ). Right ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              if (__h_case_result )
                { /* cicili#Block8990 */
                  { /* cicili#Block8992 */
                    free_BTree_int_User ((&tree ));
                    tree  = new_tree ;
                  }
                }
              else
                { /* cicili#Let8998 */
                  __auto_type left  = match8979 ;
                  // ----------
                  
                  { /* cicili#Block9002 */
                    return left ;
                  }
                }
            });
          }
      }
      Right_BTree_int_User_Error_BTree_int_User (tree );
    });
}
int show_BTree_int_User (CFile file , BTree_int_User tree ) {
  auto int showTree (int indent , BTree_int_User tree );
  int showChildren (int indent , List_Rc_BTree_int_User children ) {
    return ({ /* cicili#Let9012 */
        typeof((((children -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((children -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let9016 */
          bool __h_case_result  = (true  &&  (((children -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn9017 */
                  (head  =  (((children -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn9019 */
                  (tail  =  (((children -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn9022 */
              (({ /* cicili#Let9026 */
                  // ----------
                  
                  ({ /* cicili#Let9030 */
                    bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn9032 */
                        ({ /* cicili#Let9036 */
                          __auto_type match9035  = get_Rc_BTree_int_User (head );
                          typeof((((match9035 . __h_data ). Just ). __h_0_mem )) tr ;
                          // ----------
                          
                          ({ /* cicili#Let9041 */
                            bool __h_case_result  = (true  &&  (((match9035 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9042 */
                                  (tr  =  (((match9035 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn9045 */
                                (showTree (indent , tr ) +  fprintf (file , "\n") );
                              }) : ({ /* cicili#Let9049 */
                                // ----------
                                
                                ({ /* cicili#Progn9053 */
                                  0;
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let9057 */
                        // ----------
                        
                        ({ /* cicili#Progn9061 */
                          ({ /* cicili#Let9065 */
                            __auto_type match9064  = get_Rc_BTree_int_User (head );
                            typeof((((match9064 . __h_data ). Just ). __h_0_mem )) tr ;
                            // ----------
                            
                            ({ /* cicili#Let9070 */
                              bool __h_case_result  = (true  &&  (((match9064 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9071 */
                                    (tr  =  (((match9064 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              ((__h_case_result ) ? ({ /* cicili#Progn9074 */
                                  showTree (indent , tr );
                                }) : ({ /* cicili#Let9078 */
                                  // ----------
                                  
                                  ({ /* cicili#Progn9082 */
                                    0;
                                  });
                                }));
                            });
                          });
                        });
                      }));
                  });
                }) +  showChildren (indent , tail ) );
            }) : ({ /* cicili#Let9086 */
              // ----------
              
              ({ /* cicili#Progn9090 */
                0;
              });
            }));
        });
      });
  }
  int showTree (int indent , BTree_int_User tree ) {
    return (fprintf (file , "%d%*c", indent , (indent  *  2 ), ' ') +  ({ /* cicili#Let9096 */
          typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
          typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
          // ----------
          
          ({ /* cicili#Let9100 */
            bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9101 */
                    (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn9103 */
                    (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                    true ;
                  }) ) ) );
            // ----------
            ((__h_case_result ) ? ({ /* cicili#Progn9106 */
                (show_List_BTree_int_User_pair_t (file , items ) +  ({ /* cicili#Let9111 */
                    // ----------
                    
                    ({ /* cicili#Let9115 */
                      bool __h_case_result  = (true  &&  ((children -> __h_ctor ) ==  __h_Cons_t  ) );
                      // ----------
                      ((__h_case_result ) ? ({ /* cicili#Progn9117 */
                          (fprintf (file , "\n") +  showChildren ((indent  +  1 ), children ) );
                        }) : ({ /* cicili#Let9121 */
                          // ----------
                          
                          ({ /* cicili#Progn9125 */
                            0;
                          });
                        }));
                    });
                  }) );
              }) : ({ /* cicili#Let9129 */
                typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
                typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
                // ----------
                
                ({ /* cicili#Let9133 */
                  bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn9134 */
                          (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn9136 */
                          (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn9139 */
                      (show_List_BTree_int_User_pair_t (file , items ) +  ({ /* cicili#Let9144 */
                          // ----------
                          
                          ({ /* cicili#Let9148 */
                            bool __h_case_result  = (true  &&  ((children -> __h_ctor ) ==  __h_Cons_t  ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn9150 */
                                (fprintf (file , "\n") +  showChildren ((indent  +  1 ), children ) );
                              }) : ({ /* cicili#Let9154 */
                                // ----------
                                
                                ({ /* cicili#Progn9158 */
                                  0;
                                });
                              }));
                          });
                        }) );
                    }) : ({ /* cicili#Let9162 */
                      typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                      // ----------
                      
                      ({ /* cicili#Let9166 */
                        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn9167 */
                              (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        ((__h_case_result ) ? ({ /* cicili#Progn9170 */
                            show_List_BTree_int_User_pair_t (file , items );
                          }) : ({ /* cicili#Let9175 */
                            // ----------
                            
                            ({ /* cicili#Progn9179 */
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
    { /* cicili#Let9188 */
      typeof((((currentChild -> __h_data ). Cons ). __h_0_mem )) wheadC ;
      typeof((((currentChild -> __h_data ). Cons ). __h_1_mem )) tailC ;
      // ----------
      
      ({ /* cicili#Let9192 */
        bool __h_case_result  = (true  &&  (((currentChild -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn9193 */
                (wheadC  =  (((currentChild -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn9195 */
                (tailC  =  (((currentChild -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block9199 */
            { /* cicili#Let9203 */
              __auto_type match9202  = get_Rc_BTree_int_User (wheadC );
              typeof((((match9202 . __h_data ). Just ). __h_0_mem )) headC ;
              // ----------
              
              ({ /* cicili#Let9208 */
                bool __h_case_result  = (true  &&  (((match9202 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9209 */
                      (headC  =  (((match9202 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                if (__h_case_result )
                  { /* cicili#Block9213 */
                    { /* cicili#Let9217 */
                      // ----------
                      
                      ({ /* cicili#Let9221 */
                        bool __h_case_result  = (true  &&  ((tailC -> __h_ctor ) ==  __h_Cons_t  ) );
                        // ----------
                        if (__h_case_result )
                          { /* cicili#Block9224 */
                            { /* cicili#Block9226 */
                              { /* cicili#Let9230 */
                                typeof((((headC -> __h_data ). Branch ). __h_0_mem )) items ;
                                typeof((((headC -> __h_data ). Branch ). __h_1_mem )) children ;
                                // ----------
                                
                                ({ /* cicili#Let9234 */
                                  bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9235 */
                                          (items  =  (((headC -> __h_data ). Branch ). __h_0_mem ) );
                                          true ;
                                        }) &&  ({ /* cicili#Progn9237 */
                                          (children  =  (((headC -> __h_data ). Branch ). __h_1_mem ) );
                                          true ;
                                        }) ) ) );
                                  // ----------
                                  if (__h_case_result )
                                    { /* cicili#Block9241 */
                                      traverseInternal (items , children );
                                    }
                                  else
                                    { /* cicili#Let9246 */
                                      typeof((((headC -> __h_data ). Internal ). __h_0_mem )) items ;
                                      typeof((((headC -> __h_data ). Internal ). __h_1_mem )) children ;
                                      // ----------
                                      
                                      ({ /* cicili#Let9250 */
                                        bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn9251 */
                                                (items  =  (((headC -> __h_data ). Internal ). __h_0_mem ) );
                                                true ;
                                              }) &&  ({ /* cicili#Progn9253 */
                                                (children  =  (((headC -> __h_data ). Internal ). __h_1_mem ) );
                                                true ;
                                              }) ) ) );
                                        // ----------
                                        if (__h_case_result )
                                          { /* cicili#Block9257 */
                                            traverseInternal (items , children );
                                          }
                                        else
                                          { /* cicili#Let9262 */
                                            typeof((((headC -> __h_data ). Leaf ). __h_0_mem )) items ;
                                            // ----------
                                            
                                            ({ /* cicili#Let9266 */
                                              bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn9267 */
                                                    (items  =  (((headC -> __h_data ). Leaf ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              if (__h_case_result )
                                                { /* cicili#Block9271 */
                                                  traverseLeaf (items , True ());
                                                }
                                            });
                                          }
                                      });
                                    }
                                });
                              }
                              { /* cicili#Let9275 */
                                typeof((((currentItem -> __h_data ). Cons ). __h_0_mem )) headI ;
                                typeof((((currentItem -> __h_data ). Cons ). __h_1_mem )) tailI ;
                                // ----------
                                
                                ({ /* cicili#Let9279 */
                                  bool __h_case_result  = (true  &&  (((currentItem -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn9280 */
                                          (headI  =  (((currentItem -> __h_data ). Cons ). __h_0_mem ) );
                                          true ;
                                        }) &&  ({ /* cicili#Progn9282 */
                                          (tailI  =  (((currentItem -> __h_data ). Cons ). __h_1_mem ) );
                                          true ;
                                        }) ) ) );
                                  // ----------
                                  if (__h_case_result )
                                    { /* cicili#Block9286 */
                                      { /* cicili#Block9288 */
                                        callback (headI , True ());
                                        traverseInternal (tailI , tailC );
                                      }
                                    }
                                });
                              }
                            }
                          }
                        else
                          { /* cicili#Let9293 */
                            // ----------
                            
                            { /* cicili#Block9297 */
                              { /* cicili#Block9299 */
                                { /* cicili#Let9303 */
                                  typeof((((headC -> __h_data ). Branch ). __h_0_mem )) items ;
                                  typeof((((headC -> __h_data ). Branch ). __h_1_mem )) children ;
                                  // ----------
                                  
                                  ({ /* cicili#Let9307 */
                                    bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9308 */
                                            (items  =  (((headC -> __h_data ). Branch ). __h_0_mem ) );
                                            true ;
                                          }) &&  ({ /* cicili#Progn9310 */
                                            (children  =  (((headC -> __h_data ). Branch ). __h_1_mem ) );
                                            true ;
                                          }) ) ) );
                                    // ----------
                                    if (__h_case_result )
                                      { /* cicili#Block9314 */
                                        traverseInternal (items , children );
                                      }
                                    else
                                      { /* cicili#Let9319 */
                                        typeof((((headC -> __h_data ). Internal ). __h_0_mem )) items ;
                                        typeof((((headC -> __h_data ). Internal ). __h_1_mem )) children ;
                                        // ----------
                                        
                                        ({ /* cicili#Let9323 */
                                          bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn9324 */
                                                  (items  =  (((headC -> __h_data ). Internal ). __h_0_mem ) );
                                                  true ;
                                                }) &&  ({ /* cicili#Progn9326 */
                                                  (children  =  (((headC -> __h_data ). Internal ). __h_1_mem ) );
                                                  true ;
                                                }) ) ) );
                                          // ----------
                                          if (__h_case_result )
                                            { /* cicili#Block9330 */
                                              traverseInternal (items , children );
                                            }
                                          else
                                            { /* cicili#Let9335 */
                                              typeof((((headC -> __h_data ). Leaf ). __h_0_mem )) items ;
                                              // ----------
                                              
                                              ({ /* cicili#Let9339 */
                                                bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn9340 */
                                                      (items  =  (((headC -> __h_data ). Leaf ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                if (__h_case_result )
                                                  { /* cicili#Block9344 */
                                                    traverseLeaf (items , False ());
                                                  }
                                              });
                                            }
                                        });
                                      }
                                  });
                                }
                                { /* cicili#Let9348 */
                                  typeof((((currentItem -> __h_data ). Cons ). __h_0_mem )) headI ;
                                  typeof((((currentItem -> __h_data ). Cons ). __h_1_mem )) tailI ;
                                  // ----------
                                  
                                  ({ /* cicili#Let9352 */
                                    bool __h_case_result  = (true  &&  (((currentItem -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn9353 */
                                            (headI  =  (((currentItem -> __h_data ). Cons ). __h_0_mem ) );
                                            true ;
                                          }) &&  ({ /* cicili#Progn9355 */
                                            (tailI  =  (((currentItem -> __h_data ). Cons ). __h_1_mem ) );
                                            true ;
                                          }) ) ) );
                                    // ----------
                                    if (__h_case_result )
                                      { /* cicili#Block9359 */
                                        { /* cicili#Block9361 */
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
    { /* cicili#Let9368 */
      typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      
      ({ /* cicili#Let9372 */
        bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn9373 */
                (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn9375 */
                (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block9379 */
            { /* cicili#Block9381 */
              callback (head , ({ /* cicili#Let9385 */
                  // ----------
                  
                  ({ /* cicili#Let9389 */
                    bool __h_case_result  = (true  &&  ((hasNextLeaf . __h_ctor ) ==  __h_True_t  ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn9391 */
                        hasNextLeaf ;
                      }) : ({ /* cicili#Let9395 */
                        // ----------
                        
                        ({ /* cicili#Progn9399 */
                          ({ /* cicili#Let9403 */
                            // ----------
                            
                            ({ /* cicili#Let9407 */
                              bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                              // ----------
                              ((__h_case_result ) ? ({ /* cicili#Progn9409 */
                                  True ();
                                }) : ({ /* cicili#Let9413 */
                                  // ----------
                                  
                                  ({ /* cicili#Progn9417 */
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
  { /* cicili#Let9422 */
    typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
    typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
    // ----------
    
    ({ /* cicili#Let9426 */
      bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9427 */
              (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
              true ;
            }) &&  ({ /* cicili#Progn9429 */
              (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
              true ;
            }) ) ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block9433 */
          traverseInternal (items , children );
        }
      else
        { /* cicili#Let9438 */
          typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
          typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
          // ----------
          
          ({ /* cicili#Let9442 */
            bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn9443 */
                    (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn9445 */
                    (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                    true ;
                  }) ) ) );
            // ----------
            if (__h_case_result )
              { /* cicili#Block9449 */
                traverseInternal (items , children );
              }
            else
              { /* cicili#Let9454 */
                typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                // ----------
                
                ({ /* cicili#Let9458 */
                  bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn9459 */
                        (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  if (__h_case_result )
                    { /* cicili#Block9463 */
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
    return ({ /* cicili#Let9479 */
        typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let9483 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn9484 */
                  (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn9486 */
                  (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn9489 */
              ({ /* cicili#Let9493 */
                // ----------
                
                ({ /* cicili#Let9497 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn9499 */
                      ({ /* cicili#Let9503 */
                        __auto_type match9502  = get_Rc_BTree_int_User (head );
                        typeof((((match9502 . __h_data ). Just ). __h_0_mem )) child ;
                        // ----------
                        
                        ({ /* cicili#Let9508 */
                          bool __h_case_result  = (true  &&  (((match9502 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9509 */
                                (child  =  (((match9502 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn9512 */
                              ({ /* cicili#Let9516 */
                                typeof((((child -> __h_data ). Branch ). __h_1_mem )) nchildren ;
                                // ----------
                                
                                ({ /* cicili#Let9520 */
                                  bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn9521 */
                                        (nchildren  =  (((child -> __h_data ). Branch ). __h_1_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  ((__h_case_result ) ? ({ /* cicili#Progn9524 */
                                      maxInternal (nchildren );
                                    }) : ({ /* cicili#Let9528 */
                                      typeof((((child -> __h_data ). Internal ). __h_1_mem )) nchildren ;
                                      // ----------
                                      
                                      ({ /* cicili#Let9532 */
                                        bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn9533 */
                                              (nchildren  =  (((child -> __h_data ). Internal ). __h_1_mem ) );
                                              true ;
                                            }) ) );
                                        // ----------
                                        ((__h_case_result ) ? ({ /* cicili#Progn9536 */
                                            maxInternal (nchildren );
                                          }) : ({ /* cicili#Let9540 */
                                            typeof((((child -> __h_data ). Leaf ). __h_0_mem )) items ;
                                            // ----------
                                            
                                            ({ /* cicili#Let9544 */
                                              bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn9545 */
                                                    (items  =  (((child -> __h_data ). Leaf ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              ((__h_case_result ) ? ({ /* cicili#Progn9548 */
                                                  maxLeaf (items );
                                                }) : ({ /* cicili#Let9552 */
                                                  // ----------
                                                  
                                                  ({ /* cicili#Progn9556 */
                                                    Nothing_BTree_int_User_pair_t ();
                                                  });
                                                }));
                                            });
                                          }));
                                      });
                                    }));
                                });
                              });
                            }) : ({ /* cicili#Let9561 */
                              // ----------
                              
                              ({ /* cicili#Progn9565 */
                                Nothing_BTree_int_User_pair_t ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let9570 */
                      // ----------
                      
                      ({ /* cicili#Progn9574 */
                        maxInternal (tail );
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let9578 */
              // ----------
              
              ({ /* cicili#Progn9582 */
                Nothing_BTree_int_User_pair_t ();
              });
            }));
        });
      });
  }
  Maybe_BTree_int_User_pair_t maxLeaf (List_BTree_int_User_pair_t current ) {
    return ({ /* cicili#Let9590 */
        typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let9594 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn9595 */
                  (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn9597 */
                  (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn9600 */
              ({ /* cicili#Let9604 */
                // ----------
                
                ({ /* cicili#Let9608 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn9610 */
                      Just_BTree_int_User_pair_t (head );
                    }) : ({ /* cicili#Let9615 */
                      // ----------
                      
                      ({ /* cicili#Progn9619 */
                        maxLeaf (tail );
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let9623 */
              // ----------
              
              ({ /* cicili#Progn9627 */
                Nothing_BTree_int_User_pair_t ();
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let9633 */
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      
      ({ /* cicili#Let9637 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn9638 */
              (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn9641 */
            maxInternal (children );
          }) : ({ /* cicili#Let9645 */
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            
            ({ /* cicili#Let9649 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn9650 */
                    (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                    true ;
                  }) ) );
              // ----------
              ((__h_case_result ) ? ({ /* cicili#Progn9653 */
                  maxInternal (children );
                }) : ({ /* cicili#Let9657 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  
                  ({ /* cicili#Let9661 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn9662 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn9665 */
                        maxLeaf (items );
                      }) : ({ /* cicili#Let9669 */
                        // ----------
                        
                        ({ /* cicili#Progn9673 */
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
    return ({ /* cicili#Let9688 */
        typeof((((first -> __h_data ). Cons ). __h_0_mem )) head ;
        // ----------
        
        ({ /* cicili#Let9692 */
          bool __h_case_result  = (true  &&  (((first -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn9693 */
                (head  =  (((first -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn9696 */
              ({ /* cicili#Let9700 */
                __auto_type match9699  = get_Rc_BTree_int_User (head );
                typeof((((match9699 . __h_data ). Just ). __h_0_mem )) child ;
                // ----------
                
                ({ /* cicili#Let9705 */
                  bool __h_case_result  = (true  &&  (((match9699 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9706 */
                        (child  =  (((match9699 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn9709 */
                      ({ /* cicili#Let9713 */
                        typeof((((child -> __h_data ). Branch ). __h_1_mem )) nchildren ;
                        // ----------
                        
                        ({ /* cicili#Let9717 */
                          bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn9718 */
                                (nchildren  =  (((child -> __h_data ). Branch ). __h_1_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn9721 */
                              minInternal (nchildren );
                            }) : ({ /* cicili#Let9725 */
                              typeof((((child -> __h_data ). Internal ). __h_1_mem )) nchildren ;
                              // ----------
                              
                              ({ /* cicili#Let9729 */
                                bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn9730 */
                                      (nchildren  =  (((child -> __h_data ). Internal ). __h_1_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                ((__h_case_result ) ? ({ /* cicili#Progn9733 */
                                    minInternal (nchildren );
                                  }) : ({ /* cicili#Let9737 */
                                    typeof((((child -> __h_data ). Leaf ). __h_0_mem )) items ;
                                    // ----------
                                    
                                    ({ /* cicili#Let9741 */
                                      bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn9742 */
                                            (items  =  (((child -> __h_data ). Leaf ). __h_0_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      ((__h_case_result ) ? ({ /* cicili#Progn9745 */
                                          minLeaf (items );
                                        }) : ({ /* cicili#Let9749 */
                                          // ----------
                                          
                                          ({ /* cicili#Progn9753 */
                                            Nothing_BTree_int_User_pair_t ();
                                          });
                                        }));
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let9758 */
                      // ----------
                      
                      ({ /* cicili#Progn9762 */
                        Nothing_BTree_int_User_pair_t ();
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let9767 */
              // ----------
              
              ({ /* cicili#Progn9771 */
                Nothing_BTree_int_User_pair_t ();
              });
            }));
        });
      });
  }
  Maybe_BTree_int_User_pair_t minLeaf (List_BTree_int_User_pair_t first ) {
    return ({ /* cicili#Let9779 */
        typeof((((first -> __h_data ). Cons ). __h_0_mem )) head ;
        // ----------
        
        ({ /* cicili#Let9783 */
          bool __h_case_result  = (true  &&  (((first -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn9784 */
                (head  =  (((first -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn9787 */
              Just_BTree_int_User_pair_t (head );
            }) : ({ /* cicili#Let9792 */
              // ----------
              
              ({ /* cicili#Progn9796 */
                Nothing_BTree_int_User_pair_t ();
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let9802 */
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      
      ({ /* cicili#Let9806 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn9807 */
              (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn9810 */
            minInternal (children );
          }) : ({ /* cicili#Let9814 */
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            
            ({ /* cicili#Let9818 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn9819 */
                    (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                    true ;
                  }) ) );
              // ----------
              ((__h_case_result ) ? ({ /* cicili#Progn9822 */
                  minInternal (children );
                }) : ({ /* cicili#Let9826 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  
                  ({ /* cicili#Let9830 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn9831 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn9834 */
                        minLeaf (items );
                      }) : ({ /* cicili#Let9838 */
                        // ----------
                        
                        ({ /* cicili#Progn9842 */
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
  Maybe_BTree_int_User_pair_t searchInternal (List_Rc_BTree_int_User children , List_BTree_int_User_pair_t current , int index ) {
    return ({ /* cicili#Let9860 */
        typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((head . __h_0_mem )) key ;
        typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let9864 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn9865 */
                    (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                    true ;
                  }) &&  (true  &&  ({ /* cicili#Progn9867 */
                      (key  =  (head . __h_0_mem ) );
                      true ;
                    }) ) ) &&  ({ /* cicili#Progn9869 */
                  (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn9872 */
              ({ /* cicili#Let9876 */
                __auto_type match9875  = compareKey (skey , key );
                // ----------
                
                ({ /* cicili#Let9880 */
                  bool __h_case_result  = (true  &&  ((match9875 . __h_ctor ) ==  __h_LT_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn9882 */
                      ({ /* cicili#Let9886 */
                        __auto_type match9885  = nth_List_Rc_BTree_int_User (index , children );
                        typeof((((match9885 . __h_data ). Just ). __h_0_mem )) node ;
                        // ----------
                        
                        ({ /* cicili#Let9891 */
                          bool __h_case_result  = (true  &&  (((match9885 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9892 */
                                (node  =  (((match9885 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn9895 */
                              ({ /* cicili#Let9899 */
                                __auto_type match9898  = get_Rc_BTree_int_User (node );
                                typeof((((match9898 . __h_data ). Just ). __h_0_mem )) tr ;
                                // ----------
                                
                                ({ /* cicili#Let9904 */
                                  bool __h_case_result  = (true  &&  (((match9898 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9905 */
                                        (tr  =  (((match9898 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  ((__h_case_result ) ? ({ /* cicili#Progn9908 */
                                      search_BTree_int_User (tr , skey );
                                    }) : ({ /* cicili#Let9913 */
                                      // ----------
                                      
                                      ({ /* cicili#Progn9917 */
                                        Nothing_BTree_int_User_pair_t ();
                                      });
                                    }));
                                });
                              });
                            }) : ({ /* cicili#Let9922 */
                              // ----------
                              
                              ({ /* cicili#Progn9926 */
                                Nothing_BTree_int_User_pair_t ();
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let9931 */
                      // ----------
                      
                      ({ /* cicili#Let9935 */
                        bool __h_case_result  = (true  &&  ((match9875 . __h_ctor ) ==  __h_EQ_t  ) );
                        // ----------
                        ((__h_case_result ) ? ({ /* cicili#Progn9937 */
                            Just_BTree_int_User_pair_t (head );
                          }) : ({ /* cicili#Let9942 */
                            // ----------
                            
                            ({ /* cicili#Progn9946 */
                              ({ /* cicili#Let9950 */
                                // ----------
                                
                                ({ /* cicili#Let9954 */
                                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                                  // ----------
                                  ((__h_case_result ) ? ({ /* cicili#Progn9956 */
                                      ({ /* cicili#Let9960 */
                                        __auto_type match9959  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
                                        typeof((((match9959 . __h_data ). Just ). __h_0_mem )) node ;
                                        // ----------
                                        
                                        ({ /* cicili#Let9965 */
                                          bool __h_case_result  = (true  &&  (((match9959 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9966 */
                                                (node  =  (((match9959 . __h_data ). Just ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          ((__h_case_result ) ? ({ /* cicili#Progn9969 */
                                              ({ /* cicili#Let9973 */
                                                __auto_type match9972  = get_Rc_BTree_int_User (node );
                                                typeof((((match9972 . __h_data ). Just ). __h_0_mem )) tr ;
                                                // ----------
                                                
                                                ({ /* cicili#Let9978 */
                                                  bool __h_case_result  = (true  &&  (((match9972 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9979 */
                                                        (tr  =  (((match9972 . __h_data ). Just ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  ((__h_case_result ) ? ({ /* cicili#Progn9982 */
                                                      search_BTree_int_User (tr , skey );
                                                    }) : ({ /* cicili#Let9987 */
                                                      // ----------
                                                      
                                                      ({ /* cicili#Progn9991 */
                                                        Nothing_BTree_int_User_pair_t ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let9996 */
                                              // ----------
                                              
                                              ({ /* cicili#Progn10000 */
                                                Nothing_BTree_int_User_pair_t ();
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let10005 */
                                      // ----------
                                      
                                      ({ /* cicili#Progn10009 */
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
            }) : ({ /* cicili#Let10013 */
              // ----------
              
              ({ /* cicili#Progn10017 */
                Nothing_BTree_int_User_pair_t ();
              });
            }));
        });
      });
  }
  Maybe_BTree_int_User_pair_t searchLeaf (List_BTree_int_User_pair_t current , int index ) {
    return ({ /* cicili#Let10027 */
        typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((head . __h_0_mem )) key ;
        typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let10031 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn10032 */
                    (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                    true ;
                  }) &&  (true  &&  ({ /* cicili#Progn10034 */
                      (key  =  (head . __h_0_mem ) );
                      true ;
                    }) ) ) &&  ({ /* cicili#Progn10036 */
                  (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn10039 */
              ({ /* cicili#Let10043 */
                __auto_type match10042  = compareKey (skey , key );
                // ----------
                
                ({ /* cicili#Let10047 */
                  bool __h_case_result  = (true  &&  ((match10042 . __h_ctor ) ==  __h_EQ_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn10049 */
                      Just_BTree_int_User_pair_t (head );
                    }) : ({ /* cicili#Let10054 */
                      // ----------
                      
                      ({ /* cicili#Progn10058 */
                        ({ /* cicili#Let10062 */
                          // ----------
                          
                          ({ /* cicili#Let10066 */
                            bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn10068 */
                                Nothing_BTree_int_User_pair_t ();
                              }) : ({ /* cicili#Let10073 */
                                // ----------
                                
                                ({ /* cicili#Progn10077 */
                                  searchLeaf (tail , (index  +  1 ));
                                });
                              }));
                          });
                        });
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let10081 */
              // ----------
              
              ({ /* cicili#Progn10085 */
                Nothing_BTree_int_User_pair_t ();
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let10091 */
      typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      
      ({ /* cicili#Let10095 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn10096 */
                (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn10098 */
                (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn10101 */
            searchInternal (children , items , 0);
          }) : ({ /* cicili#Let10105 */
            typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            
            ({ /* cicili#Let10109 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn10110 */
                      (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn10112 */
                      (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              ((__h_case_result ) ? ({ /* cicili#Progn10115 */
                  searchInternal (children , items , 0);
                }) : ({ /* cicili#Let10119 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  
                  ({ /* cicili#Let10123 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn10124 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn10127 */
                        searchLeaf (items , 0);
                      }) : ({ /* cicili#Let10131 */
                        // ----------
                        
                        ({ /* cicili#Progn10135 */
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
    { /* cicili#Block10147 */
      return Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_INVALID_ORDER (3));
    }
  Either_BTree_int_User_Error_BTree_int_User insertInternal (List_BTree_int_User_pair_t items , List_Rc_BTree_int_User children , List_BTree_int_User_pair_t current , int index ) {
    return ({ /* cicili#Let10159 */
        typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((head . __h_0_mem )) key ;
        typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let10163 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn10164 */
                    (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                    true ;
                  }) &&  (true  &&  ({ /* cicili#Progn10166 */
                      (key  =  (head . __h_0_mem ) );
                      true ;
                    }) ) ) &&  ({ /* cicili#Progn10168 */
                  (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn10171 */
              ({ /* cicili#Let10175 */
                __auto_type match10174  = compareKey (skey , key );
                // ----------
                
                ({ /* cicili#Let10179 */
                  bool __h_case_result  = (true  &&  ((match10174 . __h_ctor ) ==  __h_LT_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn10181 */
                      ({ /* cicili#Let10185 */
                        __auto_type match10184  = nth_List_Rc_BTree_int_User (index , children );
                        typeof((((match10184 . __h_data ). Just ). __h_0_mem )) child ;
                        // ----------
                        
                        ({ /* cicili#Let10190 */
                          bool __h_case_result  = (true  &&  (((match10184 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10191 */
                                (child  =  (((match10184 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          ((__h_case_result ) ? ({ /* cicili#Progn10194 */
                              ({ /* cicili#Let10198 */
                                __auto_type match10197  = get_Rc_BTree_int_User (child );
                                typeof((((match10197 . __h_data ). Just ). __h_0_mem )) tr ;
                                // ----------
                                
                                ({ /* cicili#Let10203 */
                                  bool __h_case_result  = (true  &&  (((match10197 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10204 */
                                        (tr  =  (((match10197 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  ((__h_case_result ) ? ({ /* cicili#Progn10207 */
                                      ({ /* cicili#Let10211 */
                                        __auto_type match10210  = insert_BTree_int_User (tr , skey , svalue );
                                        typeof((((match10210 . __h_data ). Right ). __h_0_mem )) child_tree ;
                                        // ----------
                                        
                                        ({ /* cicili#Let10216 */
                                          bool __h_case_result  = (true  &&  (((match10210 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn10217 */
                                                (child_tree  =  (((match10210 . __h_data ). Right ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          ((__h_case_result ) ? ({ /* cicili#Progn10220 */
                                              ({ /* cicili#Let10224 */
                                                typeof((((child_tree -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                                typeof((((child_tree -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                                // ----------
                                                
                                                ({ /* cicili#Let10228 */
                                                  bool __h_case_result  = (true  &&  (((child_tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn10229 */
                                                          (child_items  =  (((child_tree -> __h_data ). Branch ). __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn10231 */
                                                          (child_children  =  (((child_tree -> __h_data ). Branch ). __h_1_mem ) );
                                                          true ;
                                                        }) ) ) );
                                                  // ----------
                                                  ((__h_case_result ) ? ({ /* cicili#Progn10234 */
                                                      ({ /* cicili#Let10239 */
                                                        typeof((((child_items -> __h_data ). Cons ). __h_0_mem )) single_item ;
                                                        typeof((((child_items -> __h_data ). Cons ). __h_1_mem )) __h_match10237_1_arg ;
                                                        // ----------
                                                        
                                                        ({ /* cicili#Let10243 */
                                                          bool __h_case_result  = (true  &&  (((child_items -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn10244 */
                                                                    (single_item  =  (((child_items -> __h_data ). Cons ). __h_0_mem ) );
                                                                    true ;
                                                                  }) &&  ({ /* cicili#Progn10246 */
                                                                    (__h_match10237_1_arg  =  (((child_items -> __h_data ). Cons ). __h_1_mem ) );
                                                                    true ;
                                                                  }) ) &&  (true  &&  ((__h_match10237_1_arg -> __h_ctor ) ==  __h_Nil_t  ) ) ) ) );
                                                          // ----------
                                                          ((__h_case_result ) ? ({ /* cicili#Progn10249 */
                                                              ({ /* cicili#Let10252 */
                                                                __auto_type child_tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10254 */
                                                                  __auto_type child_tree  = child_tree ;
                                                                  // ----------
                                                                  ((void)(child_tree -> __h_table -> freeClass ));
                                                                  child_tree ;
                                                                });
                                                                // ----------
                                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (insert_List_BTree_int_User_pair_t (items , single_item , current ), ({ /* cicili#Let10263 */
                                                                    __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10265 */
                                                                      __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                                                      // ----------
                                                                      ((void)(r1 -> __h_table -> freeClass ));
                                                                      r1 ;
                                                                    });
                                                                    __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10269 */
                                                                      __auto_type r2  = drop_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                      // ----------
                                                                      ((void)(r2 -> __h_table -> freeClass ));
                                                                      r2 ;
                                                                    });
                                                                    __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10273 */
                                                                      __auto_type r3  = append_List_Rc_BTree_int_User (child_children , r2 );
                                                                      // ----------
                                                                      ((void)(r3 -> __h_table -> freeClass ));
                                                                      r3 ;
                                                                    });
                                                                    __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10277 */
                                                                      __auto_type r4  = append_List_Rc_BTree_int_User (r1 , r3 );
                                                                      // ----------
                                                                      ((void)(r4 -> __h_table -> freeClass ));
                                                                      r4 ;
                                                                    });
                                                                    // ----------
                                                                    fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn10286 */
                                                                        Rc_BTree_int_User __ciciliC_10285 (Rc_BTree_int_User __h_value ) {
                                                                          return clone_Rc_BTree_int_User (__h_value );
                                                                        }
                                                                        __ciciliC_10285 ;
                                                                      }), r4 );
                                                                  })));
                                                              });
                                                            }) : ({ /* cicili#Let10293 */
                                                              // ----------
                                                              
                                                              ({ /* cicili#Progn10297 */
                                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_INVALID_BRANCH (child_tree ));
                                                              });
                                                            }));
                                                        });
                                                      });
                                                    }) : ({ /* cicili#Let10304 */
                                                      // ----------
                                                      
                                                      ({ /* cicili#Let10308 */
                                                        bool __h_case_result  = (true  &&  ((child_tree -> __h_ctor ) ==  __h_Internal_t  ) );
                                                        // ----------
                                                        ((__h_case_result ) ? ({ /* cicili#Progn10310 */
                                                            Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let10318 */
                                                                __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10320 */
                                                                  __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                                                  // ----------
                                                                  ((void)(r1 -> __h_table -> freeClass ));
                                                                  r1 ;
                                                                });
                                                                __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10324 */
                                                                  __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn10330 */
                                                                    Rc_BTree_int_User __ciciliC_10329 (Rc_BTree_int_User __h_value ) {
                                                                      return clone_Rc_BTree_int_User (__h_value );
                                                                    }
                                                                    __ciciliC_10329 ;
                                                                  }), r1 );
                                                                  // ----------
                                                                  ((void)(r2 -> __h_table -> freeClass ));
                                                                  r2 ;
                                                                });
                                                                __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10337 */
                                                                  __auto_type r3  = drop_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                  // ----------
                                                                  ((void)(r3 -> __h_table -> freeClass ));
                                                                  r3 ;
                                                                });
                                                                __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10341 */
                                                                  __auto_type r4  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn10347 */
                                                                    Rc_BTree_int_User __ciciliC_10346 (Rc_BTree_int_User __h_value ) {
                                                                      return clone_Rc_BTree_int_User (__h_value );
                                                                    }
                                                                    __ciciliC_10346 ;
                                                                  }), r3 );
                                                                  // ----------
                                                                  ((void)(r4 -> __h_table -> freeClass ));
                                                                  r4 ;
                                                                });
                                                                __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10354 */
                                                                  __auto_type r5  = push_List_Rc_BTree_int_User (new_Rc_BTree_int_User (child_tree ), r4 );
                                                                  // ----------
                                                                  ((void)(r5 -> __h_table -> freeClass ));
                                                                  r5 ;
                                                                });
                                                                // ----------
                                                                append_List_Rc_BTree_int_User (r2 , r5 );
                                                              })));
                                                          }) : ({ /* cicili#Let10362 */
                                                            // ----------
                                                            
                                                            ({ /* cicili#Progn10366 */
                                                              Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let10374 */
                                                                  __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10376 */
                                                                    __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                                                    // ----------
                                                                    ((void)(r1 -> __h_table -> freeClass ));
                                                                    r1 ;
                                                                  });
                                                                  __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10380 */
                                                                    __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn10386 */
                                                                      Rc_BTree_int_User __ciciliC_10385 (Rc_BTree_int_User __h_value ) {
                                                                        return clone_Rc_BTree_int_User (__h_value );
                                                                      }
                                                                      __ciciliC_10385 ;
                                                                    }), r1 );
                                                                    // ----------
                                                                    ((void)(r2 -> __h_table -> freeClass ));
                                                                    r2 ;
                                                                  });
                                                                  __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10393 */
                                                                    __auto_type r3  = drop_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                    // ----------
                                                                    ((void)(r3 -> __h_table -> freeClass ));
                                                                    r3 ;
                                                                  });
                                                                  __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10397 */
                                                                    __auto_type r4  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn10403 */
                                                                      Rc_BTree_int_User __ciciliC_10402 (Rc_BTree_int_User __h_value ) {
                                                                        return clone_Rc_BTree_int_User (__h_value );
                                                                      }
                                                                      __ciciliC_10402 ;
                                                                    }), r3 );
                                                                    // ----------
                                                                    ((void)(r4 -> __h_table -> freeClass ));
                                                                    r4 ;
                                                                  });
                                                                  __auto_type r5  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10410 */
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
                                            }) : ({ /* cicili#Let10418 */
                                              __auto_type left  = match10210 ;
                                              // ----------
                                              
                                              ({ /* cicili#Progn10422 */
                                                left ;
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let10426 */
                                      // ----------
                                      
                                      ({ /* cicili#Progn10430 */
                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CHILD (head , index ));
                                      });
                                    }));
                                });
                              });
                            }) : ({ /* cicili#Let10437 */
                              // ----------
                              
                              ({ /* cicili#Progn10441 */
                                Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (insert_List_BTree_int_User_pair_t (items , ((BTree_int_User_pair_t){ skey , svalue }), current )));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let10451 */
                      // ----------
                      
                      ({ /* cicili#Let10455 */
                        bool __h_case_result  = (true  &&  ((match10174 . __h_ctor ) ==  __h_EQ_t  ) );
                        // ----------
                        ((__h_case_result ) ? ({ /* cicili#Progn10457 */
                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_UNIQUE_KEY (head ));
                          }) : ({ /* cicili#Let10464 */
                            // ----------
                            
                            ({ /* cicili#Progn10468 */
                              insertInternal (items , children , tail , (index  +  1 ));
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let10472 */
              // ----------
              
              ({ /* cicili#Progn10476 */
                ({ /* cicili#Let10480 */
                  __auto_type match10479  = nth_List_Rc_BTree_int_User (index , children );
                  typeof((((match10479 . __h_data ). Just ). __h_0_mem )) child ;
                  // ----------
                  
                  ({ /* cicili#Let10485 */
                    bool __h_case_result  = (true  &&  (((match10479 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10486 */
                          (child  =  (((match10479 . __h_data ). Just ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn10489 */
                        ({ /* cicili#Let10493 */
                          __auto_type match10492  = get_Rc_BTree_int_User (child );
                          typeof((((match10492 . __h_data ). Just ). __h_0_mem )) tr ;
                          // ----------
                          
                          ({ /* cicili#Let10498 */
                            bool __h_case_result  = (true  &&  (((match10492 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10499 */
                                  (tr  =  (((match10492 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn10502 */
                                ({ /* cicili#Let10506 */
                                  __auto_type match10505  = insert_BTree_int_User (tr , skey , svalue );
                                  typeof((((match10505 . __h_data ). Right ). __h_0_mem )) child_tree ;
                                  // ----------
                                  
                                  ({ /* cicili#Let10511 */
                                    bool __h_case_result  = (true  &&  (((match10505 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn10512 */
                                          (child_tree  =  (((match10505 . __h_data ). Right ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    ((__h_case_result ) ? ({ /* cicili#Progn10515 */
                                        ({ /* cicili#Let10519 */
                                          typeof((((child_tree -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                          typeof((((child_tree -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                          // ----------
                                          
                                          ({ /* cicili#Let10523 */
                                            bool __h_case_result  = (true  &&  (((child_tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn10524 */
                                                    (child_items  =  (((child_tree -> __h_data ). Branch ). __h_0_mem ) );
                                                    true ;
                                                  }) &&  ({ /* cicili#Progn10526 */
                                                    (child_children  =  (((child_tree -> __h_data ). Branch ). __h_1_mem ) );
                                                    true ;
                                                  }) ) ) );
                                            // ----------
                                            ((__h_case_result ) ? ({ /* cicili#Progn10529 */
                                                ({ /* cicili#Let10534 */
                                                  typeof((((child_items -> __h_data ). Cons ). __h_0_mem )) single_item ;
                                                  typeof((((child_items -> __h_data ). Cons ). __h_1_mem )) __h_match10532_1_arg ;
                                                  // ----------
                                                  
                                                  ({ /* cicili#Let10538 */
                                                    bool __h_case_result  = (true  &&  (((child_items -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn10539 */
                                                              (single_item  =  (((child_items -> __h_data ). Cons ). __h_0_mem ) );
                                                              true ;
                                                            }) &&  ({ /* cicili#Progn10541 */
                                                              (__h_match10532_1_arg  =  (((child_items -> __h_data ). Cons ). __h_1_mem ) );
                                                              true ;
                                                            }) ) &&  (true  &&  ((__h_match10532_1_arg -> __h_ctor ) ==  __h_Nil_t  ) ) ) ) );
                                                    // ----------
                                                    ((__h_case_result ) ? ({ /* cicili#Progn10544 */
                                                        ({ /* cicili#Let10547 */
                                                          __auto_type child_tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10549 */
                                                            __auto_type child_tree  = child_tree ;
                                                            // ----------
                                                            ((void)(child_tree -> __h_table -> freeClass ));
                                                            child_tree ;
                                                          });
                                                          // ----------
                                                          Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (insert_List_BTree_int_User_pair_t (items , single_item , current ), ({ /* cicili#Let10558 */
                                                              __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10560 */
                                                                __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                                                // ----------
                                                                ((void)(r1 -> __h_table -> freeClass ));
                                                                r1 ;
                                                              });
                                                              __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10564 */
                                                                __auto_type r2  = drop_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                // ----------
                                                                ((void)(r2 -> __h_table -> freeClass ));
                                                                r2 ;
                                                              });
                                                              __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10568 */
                                                                __auto_type r3  = append_List_Rc_BTree_int_User (child_children , r2 );
                                                                // ----------
                                                                ((void)(r3 -> __h_table -> freeClass ));
                                                                r3 ;
                                                              });
                                                              __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10572 */
                                                                __auto_type r4  = append_List_Rc_BTree_int_User (r1 , r3 );
                                                                // ----------
                                                                ((void)(r4 -> __h_table -> freeClass ));
                                                                r4 ;
                                                              });
                                                              // ----------
                                                              fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn10581 */
                                                                  Rc_BTree_int_User __ciciliC_10580 (Rc_BTree_int_User __h_value ) {
                                                                    return clone_Rc_BTree_int_User (__h_value );
                                                                  }
                                                                  __ciciliC_10580 ;
                                                                }), r4 );
                                                            })));
                                                        });
                                                      }) : ({ /* cicili#Let10588 */
                                                        // ----------
                                                        
                                                        ({ /* cicili#Progn10592 */
                                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_INVALID_BRANCH (child_tree ));
                                                        });
                                                      }));
                                                  });
                                                });
                                              }) : ({ /* cicili#Let10599 */
                                                // ----------
                                                
                                                ({ /* cicili#Let10603 */
                                                  bool __h_case_result  = (true  &&  ((child_tree -> __h_ctor ) ==  __h_Internal_t  ) );
                                                  // ----------
                                                  ((__h_case_result ) ? ({ /* cicili#Progn10605 */
                                                      Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let10613 */
                                                          __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10615 */
                                                            __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                                            // ----------
                                                            ((void)(r1 -> __h_table -> freeClass ));
                                                            r1 ;
                                                          });
                                                          __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10619 */
                                                            __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn10625 */
                                                              Rc_BTree_int_User __ciciliC_10624 (Rc_BTree_int_User __h_value ) {
                                                                return clone_Rc_BTree_int_User (__h_value );
                                                              }
                                                              __ciciliC_10624 ;
                                                            }), r1 );
                                                            // ----------
                                                            ((void)(r2 -> __h_table -> freeClass ));
                                                            r2 ;
                                                          });
                                                          __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10632 */
                                                            __auto_type r3  = wrap_List_Rc_BTree_int_User (new_Rc_BTree_int_User (child_tree ));
                                                            // ----------
                                                            ((void)(r3 -> __h_table -> freeClass ));
                                                            r3 ;
                                                          });
                                                          // ----------
                                                          append_List_Rc_BTree_int_User (r2 , r3 );
                                                        })));
                                                    }) : ({ /* cicili#Let10640 */
                                                      // ----------
                                                      
                                                      ({ /* cicili#Progn10644 */
                                                        Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (copy_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let10652 */
                                                            __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10654 */
                                                              __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                                              // ----------
                                                              ((void)(r1 -> __h_table -> freeClass ));
                                                              r1 ;
                                                            });
                                                            __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10658 */
                                                              __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn10664 */
                                                                Rc_BTree_int_User __ciciliC_10663 (Rc_BTree_int_User __h_value ) {
                                                                  return clone_Rc_BTree_int_User (__h_value );
                                                                }
                                                                __ciciliC_10663 ;
                                                              }), r1 );
                                                              // ----------
                                                              ((void)(r2 -> __h_table -> freeClass ));
                                                              r2 ;
                                                            });
                                                            __auto_type r3  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10671 */
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
                                      }) : ({ /* cicili#Let10679 */
                                        __auto_type left  = match10505 ;
                                        // ----------
                                        
                                        ({ /* cicili#Progn10683 */
                                          left ;
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let10687 */
                                // ----------
                                
                                ({ /* cicili#Progn10691 */
                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CHILD (head , index ));
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let10698 */
                        // ----------
                        
                        ({ /* cicili#Progn10702 */
                          Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (({ /* cicili#Let10709 */
                              __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10711 */
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
  Either_BTree_int_User_Error_BTree_int_User insertLeaf (List_BTree_int_User_pair_t items , List_BTree_int_User_pair_t current , int index ) {
    return ({ /* cicili#Let10727 */
        typeof((((current -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((head . __h_0_mem )) key ;
        typeof((((current -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let10731 */
          bool __h_case_result  = (true  &&  (((current -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn10732 */
                    (head  =  (((current -> __h_data ). Cons ). __h_0_mem ) );
                    true ;
                  }) &&  (true  &&  ({ /* cicili#Progn10734 */
                      (key  =  (head . __h_0_mem ) );
                      true ;
                    }) ) ) &&  ({ /* cicili#Progn10736 */
                  (tail  =  (((current -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn10739 */
              ({ /* cicili#Let10743 */
                __auto_type match10742  = compareKey (skey , key );
                // ----------
                
                ({ /* cicili#Let10747 */
                  bool __h_case_result  = (true  &&  ((match10742 . __h_ctor ) ==  __h_LT_t  ) );
                  // ----------
                  ((__h_case_result ) ? ({ /* cicili#Progn10749 */
                      Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (insert_List_BTree_int_User_pair_t (items , ((BTree_int_User_pair_t){ skey , svalue }), current )));
                    }) : ({ /* cicili#Let10759 */
                      // ----------
                      
                      ({ /* cicili#Let10763 */
                        bool __h_case_result  = (true  &&  ((match10742 . __h_ctor ) ==  __h_EQ_t  ) );
                        // ----------
                        ((__h_case_result ) ? ({ /* cicili#Progn10765 */
                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_UNIQUE_KEY (head ));
                          }) : ({ /* cicili#Let10772 */
                            // ----------
                            
                            ({ /* cicili#Progn10776 */
                              insertLeaf (items , tail , (index  +  1 ));
                            });
                          }));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let10780 */
              // ----------
              
              ({ /* cicili#Progn10784 */
                Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (({ /* cicili#Let10791 */
                    __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10793 */
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
  return ({ /* cicili#Let10803 */
      typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      
      ({ /* cicili#Let10807 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn10808 */
                (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn10810 */
                (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn10813 */
            ({ /* cicili#Let10817 */
              __auto_type match10816  = insertInternal (items , children , items , 0);
              typeof((((match10816 . __h_data ). Right ). __h_0_mem )) tr ;
              // ----------
              
              ({ /* cicili#Let10821 */
                bool __h_case_result  = (true  &&  (((match10816 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn10822 */
                      (tr  =  (((match10816 . __h_data ). Right ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn10825 */
                    Right_BTree_int_User_Error_BTree_int_User (split_BTree_int_User (tr ));
                  }) : ({ /* cicili#Let10832 */
                    __auto_type left  = match10816 ;
                    // ----------
                    
                    ({ /* cicili#Progn10836 */
                      left ;
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let10840 */
            typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            
            ({ /* cicili#Let10844 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn10845 */
                      (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn10847 */
                      (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              ((__h_case_result ) ? ({ /* cicili#Progn10850 */
                  ({ /* cicili#Let10854 */
                    __auto_type match10853  = insertInternal (items , children , items , 0);
                    typeof((((match10853 . __h_data ). Right ). __h_0_mem )) tr ;
                    // ----------
                    
                    ({ /* cicili#Let10858 */
                      bool __h_case_result  = (true  &&  (((match10853 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn10859 */
                            (tr  =  (((match10853 . __h_data ). Right ). __h_0_mem ) );
                            true ;
                          }) ) );
                      // ----------
                      ((__h_case_result ) ? ({ /* cicili#Progn10862 */
                          Right_BTree_int_User_Error_BTree_int_User (split_BTree_int_User (tr ));
                        }) : ({ /* cicili#Let10869 */
                          __auto_type left  = match10853 ;
                          // ----------
                          
                          ({ /* cicili#Progn10873 */
                            left ;
                          });
                        }));
                    });
                  });
                }) : ({ /* cicili#Let10877 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  
                  ({ /* cicili#Let10881 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn10882 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    ((__h_case_result ) ? ({ /* cicili#Progn10885 */
                        ({ /* cicili#Let10889 */
                          __auto_type match10888  = insertLeaf (items , items , 0);
                          typeof((((match10888 . __h_data ). Right ). __h_0_mem )) tr ;
                          // ----------
                          
                          ({ /* cicili#Let10893 */
                            bool __h_case_result  = (true  &&  (((match10888 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn10894 */
                                  (tr  =  (((match10888 . __h_data ). Right ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            ((__h_case_result ) ? ({ /* cicili#Progn10897 */
                                Right_BTree_int_User_Error_BTree_int_User (split_BTree_int_User (tr ));
                              }) : ({ /* cicili#Let10904 */
                                __auto_type left  = match10888 ;
                                // ----------
                                
                                ({ /* cicili#Progn10908 */
                                  left ;
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let10912 */
                        // ----------
                        
                        ({ /* cicili#Progn10916 */
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
int order_BTree_int_User () {
  return 3;
}
void free_BTree_int_User (BTree_int_User * this_ptr ) {
  { /* cicili#Let10925 */
    __auto_type this  = (*this_ptr );
    // ----------
    void freeChildren (List_Rc_BTree_int_User children ) {
      { /* cicili#Let10930 */
        typeof((((children -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((children -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        
        ({ /* cicili#Let10934 */
          bool __h_case_result  = (true  &&  (((children -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn10935 */
                  (head  =  (((children -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn10937 */
                  (tail  =  (((children -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          if (__h_case_result )
            { /* cicili#Block10941 */
              { /* cicili#Block10943 */
                free_Rc_BTree_int_User (&head );
                freeChildren (tail );
              }
            }
        });
      }
    }
    { /* cicili#Let10949 */
      typeof((((this -> __h_data ). Branch ). __h_0_mem )) items ;
      typeof((((this -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      
      ({ /* cicili#Let10953 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn10954 */
                (items  =  (((this -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn10956 */
                (children  =  (((this -> __h_data ). Branch ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block10960 */
            { /* cicili#Block10962 */
              free_List_BTree_int_User_pair_t ((&items ));
              freeChildren (children );
              free_List_Rc_BTree_int_User ((&children ));
              free (this );
            }
          }
        else
          { /* cicili#Let10973 */
            typeof((((this -> __h_data ). Internal ). __h_0_mem )) items ;
            typeof((((this -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            
            ({ /* cicili#Let10977 */
              bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn10978 */
                      (items  =  (((this -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn10980 */
                      (children  =  (((this -> __h_data ). Internal ). __h_1_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              if (__h_case_result )
                { /* cicili#Block10984 */
                  { /* cicili#Block10986 */
                    free_List_BTree_int_User_pair_t ((&items ));
                    freeChildren (children );
                    free_List_Rc_BTree_int_User ((&children ));
                    free (this );
                  }
                }
              else
                { /* cicili#Let10997 */
                  typeof((((this -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  
                  ({ /* cicili#Let11001 */
                    bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn11002 */
                          (items  =  (((this -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    if (__h_case_result )
                      { /* cicili#Block11006 */
                        { /* cicili#Block11008 */
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
  { /* cicili#Let11020 */
    BTree_int_User instance  = malloc (sizeof(class_BTree_int_User));
    // ----------
    (*instance ) = ((class_BTree_int_User){ get_BTree_int_User__H_Table (), __h_Branch_t , .__h_data.Branch = { items , children }});
    return instance ;
  }
}
BTree_int_User Internal_BTree_int_User (List_BTree_int_User_pair_t items , List_Rc_BTree_int_User children ) {
  { /* cicili#Let11028 */
    BTree_int_User instance  = malloc (sizeof(class_BTree_int_User));
    // ----------
    (*instance ) = ((class_BTree_int_User){ get_BTree_int_User__H_Table (), __h_Internal_t , .__h_data.Internal = { items , children }});
    return instance ;
  }
}
BTree_int_User Leaf_BTree_int_User (List_BTree_int_User_pair_t items ) {
  { /* cicili#Let11036 */
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
  union { /* ciciliUnion11056 */
    struct { /* ciciliStruct11057 */
      BTree_int_User __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct11058 */
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
  union { /* ciciliUnion11097 */
    struct { /* ciciliStruct11098 */
      BTree_int_User * __h_0_mem ;
      int * __h_1_mem ;
      size_t __h_2_mem ;
      pthread_mutex_t * __h_3_mem ;
    } Hold , _1 ;
    struct { /* ciciliStruct11099 */
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
  { /* cicili#Let11154 */
    Maybe_BTree_int_User instance  = ((Maybe_BTree_int_User){ get_Maybe_BTree_int_User__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_BTree_int_User Nothing_BTree_int_User () {
  { /* cicili#Let11159 */
    Maybe_BTree_int_User instance  = ((Maybe_BTree_int_User){ get_Maybe_BTree_int_User__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_BTree_int_User__H_IMPL__ */ 
#ifndef __Arc_BTree_int_User__H_IMPL__
#define __Arc_BTree_int_User__H_IMPL__
void lock_Arc_BTree_int_User (Arc_BTree_int_User arc , void (*alive_callback) (BTree_int_User pointer ), void (*dead_callback) ()) {
  { /* cicili#Let11168 */
    typeof((((arc . __h_data ). Hold ). __h_0_mem )) pointer ;
    typeof((((arc . __h_data ). Hold ). __h_1_mem )) count ;
    typeof((((arc . __h_data ). Hold ). __h_2_mem )) address ;
    typeof((((arc . __h_data ). Hold ). __h_3_mem )) mutex ;
    // ----------
    
    ({ /* cicili#Let11172 */
      bool __h_case_result  = (true  &&  (((arc . __h_ctor ) ==  __h_Hold_t  ) &&  (((({ /* cicili#Progn11173 */
                  (pointer  =  (((arc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn11175 */
                  (count  =  (((arc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn11177 */
                (address  =  (((arc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) &&  ({ /* cicili#Progn11179 */
              (mutex  =  (((arc . __h_data ). Hold ). __h_3_mem ) );
              true ;
            }) ) ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block11183 */
          { /* cicili#Block11186 */
            pthread_mutex_lock (mutex );
            if (pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) >  0 ) )
              alive_callback ((*pointer ));
            else
              dead_callback ();
            pthread_mutex_unlock (mutex );
          }
        }
      else
        { /* cicili#Let11193 */
          // ----------
          
          ({ /* cicili#Let11197 */
            bool __h_case_result  = (true  &&  ((arc . __h_ctor ) ==  __h_Gone_t  ) );
            // ----------
            if (__h_case_result )
              { /* cicili#Block11200 */
                dead_callback ();
              }
          });
        }
    });
  }
}
Arc_BTree_int_User new_Arc_BTree_int_User (BTree_int_User pointer , pthread_mutex_t * mutex ) {
  return ({ /* cicili#Let11208 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      __auto_type holder  = ((BTree_int_User *)malloc (sizeof(BTree_int_User *)));
      // ----------
      (*count ) = 1;
      (*holder ) = pointer ;
      __h_AtomicHold_BTree_int_User (holder , count , ((size_t)pointer ), mutex );
    });
}
Arc_BTree_int_User clone_Arc_BTree_int_User (Arc_BTree_int_User arc ) {
  return ({ /* cicili#Let11216 */
      typeof((((arc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((arc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((arc . __h_data ). Hold ). __h_2_mem )) address ;
      typeof((((arc . __h_data ). Hold ). __h_3_mem )) mutex ;
      // ----------
      
      ({ /* cicili#Let11220 */
        bool __h_case_result  = (true  &&  (((arc . __h_ctor ) ==  __h_Hold_t  ) &&  (((({ /* cicili#Progn11221 */
                    (pointer  =  (((arc . __h_data ). Hold ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn11223 */
                    (count  =  (((arc . __h_data ). Hold ). __h_1_mem ) );
                    true ;
                  }) ) &&  ({ /* cicili#Progn11225 */
                  (address  =  (((arc . __h_data ). Hold ). __h_2_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn11227 */
                (mutex  =  (((arc . __h_data ). Hold ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn11230 */
            ({ /* cicili#Progn11233 */
              pthread_mutex_lock (mutex );
              __auto_type lock_result  = ({ /* cicili#Progn11235 */
                    (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Progn11238 */
                        (++(*count ));
                        __h_AtomicHold_BTree_int_User (pointer , count , address , mutex );
                      }) : AtomicGone_BTree_int_User ());
                  });
              pthread_mutex_unlock (mutex );
              lock_result ;
            });
          }) : ({ /* cicili#Let11244 */
            // ----------
            
            ({ /* cicili#Progn11248 */
              AtomicGone_BTree_int_User ();
            });
          }));
      });
    });
}
Maybe_BTree_int_User take_Arc_BTree_int_User (Arc_BTree_int_User * this ) {
  return ({ /* cicili#Let11257 */
      typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
      typeof((((this -> __h_data ). Hold ). __h_3_mem )) mutex ;
      // ----------
      
      ({ /* cicili#Let11261 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  (((({ /* cicili#Progn11262 */
                    (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn11264 */
                    (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                    true ;
                  }) ) &&  ({ /* cicili#Progn11266 */
                  (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn11268 */
                (mutex  =  (((this -> __h_data ). Hold ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn11271 */
            ({ /* cicili#Progn11274 */
              pthread_mutex_lock (mutex );
              __auto_type lock_result  = ({ /* cicili#Progn11276 */
                    (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Let11280 */
                        __auto_type result  = Just_BTree_int_User ((*pointer ));
                        // ----------
                        if ((*count ) ==  1 )
                          { /* cicili#Block11286 */
                            (*count ) = 0;
                            free (((void *)count ));
                            (*pointer ) = NULL ;
                            free (((void *)pointer ));
                            (*this ) = AtomicGone_BTree_int_User ();
                          }
                        else
                          (--(*count ));
                        result ;
                      }) : Nothing_BTree_int_User ());
                  });
              pthread_mutex_unlock (mutex );
              lock_result ;
            });
          }) : ({ /* cicili#Let11293 */
            // ----------
            
            ({ /* cicili#Progn11297 */
              Nothing_BTree_int_User ();
            });
          }));
      });
    });
}
Maybe_BTree_int_User get_Arc_BTree_int_User (Arc_BTree_int_User arc ) {
  return ({ /* cicili#Let11306 */
      typeof((((arc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((arc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((arc . __h_data ). Hold ). __h_2_mem )) address ;
      typeof((((arc . __h_data ). Hold ). __h_3_mem )) mutex ;
      // ----------
      
      ({ /* cicili#Let11310 */
        bool __h_case_result  = (true  &&  (((arc . __h_ctor ) ==  __h_Hold_t  ) &&  (((({ /* cicili#Progn11311 */
                    (pointer  =  (((arc . __h_data ). Hold ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn11313 */
                    (count  =  (((arc . __h_data ). Hold ). __h_1_mem ) );
                    true ;
                  }) ) &&  ({ /* cicili#Progn11315 */
                  (address  =  (((arc . __h_data ). Hold ). __h_2_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn11317 */
                (mutex  =  (((arc . __h_data ). Hold ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn11320 */
            ({ /* cicili#Progn11323 */
              pthread_mutex_lock (mutex );
              __auto_type lock_result  = ({ /* cicili#Progn11325 */
                    (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) >  0 ) )) ? Just_BTree_int_User ((*pointer )) : Nothing_BTree_int_User ());
                  });
              pthread_mutex_unlock (mutex );
              lock_result ;
            });
          }) : ({ /* cicili#Let11332 */
            // ----------
            
            ({ /* cicili#Progn11336 */
              Nothing_BTree_int_User ();
            });
          }));
      });
    });
}
void free_Arc_BTree_int_User (Arc_BTree_int_User * this ) {
  { /* cicili#Let11346 */
    typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
    typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
    typeof((((this -> __h_data ). Hold ). __h_3_mem )) mutex ;
    // ----------
    
    ({ /* cicili#Let11350 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  (((({ /* cicili#Progn11351 */
                  (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn11353 */
                  (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn11355 */
                (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) &&  ({ /* cicili#Progn11357 */
              (mutex  =  (((this -> __h_data ). Hold ). __h_3_mem ) );
              true ;
            }) ) ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block11361 */
          { /* cicili#Block11364 */
            pthread_mutex_lock (mutex );
            if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
              { /* cicili#Block11368 */
                if ((*count ) ==  1 )
                  { /* cicili#Block11371 */
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
            pthread_mutex_unlock (mutex );
          }
        }
      else
        { /* cicili#Let11381 */
          // ----------
          
          ({ /* cicili#Let11385 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Gone_t  ) );
            // ----------
            if (__h_case_result )
              { /* cicili#Block11388 */
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
  { /* cicili#Let11399 */
    Arc_BTree_int_User instance  = ((Arc_BTree_int_User){ get_Arc_BTree_int_User__H_Table (), __h_Hold_t , .__h_data.Hold = { pointer , count , address , mutex }});
    // ----------
    return instance ;
  }
}
Arc_BTree_int_User AtomicGone_BTree_int_User () {
  { /* cicili#Let11404 */
    Arc_BTree_int_User instance  = ((Arc_BTree_int_User){ get_Arc_BTree_int_User__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Arc_BTree_int_User__H_IMPL__ */ 
void __ciciliL_11476 () {
  ({ /* cicili#Let11479 */
    __auto_type tmp_stdout  = stdout ;
    // ----------
    stdout  = stderr ;
    printf ("Bad Rc! (writer i)\n");
    exit (-1);
    stdout  = tmp_stdout ;
  });
}
void insertMany (Arc_BTree_int_User * pwtree , int from , int to ) {
  { /* cicili#Let11408 */
    char keyStr [10];
    // ----------
    for (int i  = from ; (i  <=  to  ); (++i )) {
        sprintf (keyStr , "%d", i );
        { /* cicili#Let11412 */
          String name  = ({ /* cicili#Let11414 */
            __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let11416 */
              __auto_type r1  = new_String_Const ("User ");
              // ----------
              ((void)(r1 -> __h_table -> freeClass ));
              r1 ;
            });
            __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let11419 */
              __auto_type r2  = new_String_Const (keyStr );
              // ----------
              ((void)(r2 -> __h_table -> freeClass ));
              r2 ;
            });
            // ----------
            append_String (r1 , r2 );
          });
          // ----------
          lock_Arc_BTree_int_User ((*pwtree ), ({ /* cicili#Progn11425 */
              void __ciciliC_11424 (BTree_int_User tree ) {
                { /* cicili#Let11430 */
                  __auto_type match11429  = insert_BTree_int_User (tree , i , ((User){ new_Cell_String (name ), (i  +  2000 )}));
                  typeof((((match11429 . __h_data ). Right ). __h_0_mem )) new_tree ;
                  // ----------
                  
                  ({ /* cicili#Let11436 */
                    bool __h_case_result  = (true  &&  (((match11429 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn11437 */
                          (new_tree  =  (((match11429 . __h_data ). Right ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    if (__h_case_result )
                      { /* cicili#Block11441 */
                        { /* cicili#Block11443 */
                          { /* cicili#Block11446 */
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
                      { /* cicili#Let11458 */
                        typeof((((match11429 . __h_data ). Left ). __h_0_mem )) err ;
                        // ----------
                        
                        ({ /* cicili#Let11462 */
                          bool __h_case_result  = (true  &&  (((match11429 . __h_ctor ) ==  __h_Left_t  ) &&  ({ /* cicili#Progn11463 */
                                (err  =  (((match11429 . __h_data ). Left ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          if (__h_case_result )
                            { /* cicili#Block11467 */
                              { /* cicili#Block11470 */
                                pthread_mutex_lock ((&outlock ));
                                ({ /* cicili#Let11473 */
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
              __ciciliC_11424 ;
            }), __ciciliL_11476 );
          usleep (5);
        }
    }
  }
}
void __ciciliL_11484 (BTree_int_User_pair_t item ) {
  { /* cicili#Let11489 */
    typeof((item . __h_0_mem )) key ;
    typeof((item . __h_1_mem )) __h_match11487_1_arg ;
    typeof((__h_match11487_1_arg . __h_0_mem )) wname ;
    // ----------
    
    ({ /* cicili#Let11493 */
      bool __h_case_result  = (true  &&  ((({ /* cicili#Progn11494 */
              (key  =  (item . __h_0_mem ) );
              true ;
            }) &&  ({ /* cicili#Progn11496 */
              (__h_match11487_1_arg  =  (item . __h_1_mem ) );
              true ;
            }) ) &&  (true  &&  ({ /* cicili#Progn11498 */
              (wname  =  (__h_match11487_1_arg . __h_0_mem ) );
              true ;
            }) ) ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block11502 */
          { /* cicili#Block11505 */
            pthread_mutex_lock ((&outlock ));
            printf ("Deleted: %d, ", key );
            { /* cicili#Let11509 */
              __auto_type match11508  = get_Cell_String (wname );
              typeof((((match11508 . __h_data ). Just ). __h_0_mem )) name ;
              // ----------
              
              ({ /* cicili#Let11514 */
                bool __h_case_result  = (true  &&  (((match11508 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11515 */
                      (name  =  (((match11508 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                if (__h_case_result )
                  { /* cicili#Block11519 */
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
void __ciciliL_11574 () {
  ({ /* cicili#Let11577 */
    __auto_type tmp_stdout  = stdout ;
    // ----------
    stdout  = stderr ;
    printf ("Bad Rc! (writer d)\n");
    exit (-1);
    stdout  = tmp_stdout ;
  });
}
void deleteMany (Arc_BTree_int_User * pwtree , int from , int to ) {
  { /* cicili#Let11483 */
    __auto_type item_deallocator  = __ciciliL_11484 ;
    // ----------
    for (int i  = from ; (i  <=  to  ); (++i )) {
        lock_Arc_BTree_int_User ((*pwtree ), ({ /* cicili#Progn11528 */
            void __ciciliC_11527 (BTree_int_User tree ) {
              { /* cicili#Let11533 */
                __auto_type match11532  = delete_BTree_int_User (tree , i , item_deallocator );
                typeof((((match11532 . __h_data ). Right ). __h_0_mem )) new_tree ;
                // ----------
                
                ({ /* cicili#Let11538 */
                  bool __h_case_result  = (true  &&  (((match11532 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn11539 */
                        (new_tree  =  (((match11532 . __h_data ). Right ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  if (__h_case_result )
                    { /* cicili#Block11543 */
                      { /* cicili#Block11545 */
                        free_Arc_BTree_int_User (pwtree );
                        (*pwtree ) = new_Arc_BTree_int_User (new_tree , (&treeArc ));
                      }
                    }
                  else
                    { /* cicili#Let11556 */
                      typeof((((match11532 . __h_data ). Left ). __h_0_mem )) err ;
                      // ----------
                      
                      ({ /* cicili#Let11560 */
                        bool __h_case_result  = (true  &&  (((match11532 . __h_ctor ) ==  __h_Left_t  ) &&  ({ /* cicili#Progn11561 */
                              (err  =  (((match11532 . __h_data ). Left ). __h_0_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        if (__h_case_result )
                          { /* cicili#Block11565 */
                            { /* cicili#Block11568 */
                              pthread_mutex_lock ((&outlock ));
                              ({ /* cicili#Let11571 */
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
            __ciciliC_11527 ;
          }), __ciciliL_11574 );
        usleep (5);
    }
  }
}
void freeRcTree (Arc_BTree_int_User * pnwtree ) {
  free_Arc_BTree_int_User (pnwtree );
}
void searchMany (Arc_BTree_int_User * pwtree , int from , int to ) {
  while (true ) {
      { /* cicili#Let11589 */
        // ----------
        
        ({ /* cicili#Let11593 */
          bool __h_case_result  = (true  &&  ((doQuit . __h_ctor ) ==  __h_True_t  ) );
          // ----------
          if (__h_case_result )
            { /* cicili#Block11596 */
              return ;
            }
        });
      }
      ({ /* cicili#Let11599 */
        __auto_type nwtree  __attribute__((__cleanup__(freeRcTree ))) = clone_Arc_BTree_int_User ((*pwtree ));
        // ----------
        { /* cicili#Let11604 */
          __auto_type match11603  = get_Arc_BTree_int_User (nwtree );
          typeof((((match11603 . __h_data ). Just ). __h_0_mem )) tree ;
          // ----------
          
          ({ /* cicili#Let11609 */
            bool __h_case_result  = (true  &&  (((match11603 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11610 */
                  (tree  =  (((match11603 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            if (__h_case_result )
              { /* cicili#Block11614 */
                for (int i  = from ; (i  <=  to  ); (++i )) {
                    { /* cicili#Let11620 */
                      __auto_type match11619  = search_BTree_int_User (tree , i );
                      typeof((((match11619 . __h_data ). Just ). __h_0_mem )) item ;
                      // ----------
                      
                      ({ /* cicili#Let11625 */
                        bool __h_case_result  = (true  &&  (((match11619 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11626 */
                              (item  =  (((match11619 . __h_data ). Just ). __h_0_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        if (__h_case_result )
                          { /* cicili#Block11630 */
                            { /* cicili#Block11633 */
                              pthread_mutex_lock ((&outlock ));
                              fprintf (stdout , "thread: %lu, Search Found: ", ((unsigned long )pthread_self ()));
                              ({ /* cicili#Let11642 */
                                typeof((item . __h_0_mem )) id ;
                                typeof((item . __h_1_mem )) __h_match11640_1_arg ;
                                typeof((__h_match11640_1_arg . __h_0_mem )) wname ;
                                typeof((__h_match11640_1_arg . __h_1_mem )) salary ;
                                // ----------
                                
                                ({ /* cicili#Let11646 */
                                  bool __h_case_result  = (true  &&  ((({ /* cicili#Progn11647 */
                                          (id  =  (item . __h_0_mem ) );
                                          true ;
                                        }) &&  ({ /* cicili#Progn11649 */
                                          (__h_match11640_1_arg  =  (item . __h_1_mem ) );
                                          true ;
                                        }) ) &&  (true  &&  (({ /* cicili#Progn11651 */
                                            (wname  =  (__h_match11640_1_arg . __h_0_mem ) );
                                            true ;
                                          }) &&  ({ /* cicili#Progn11653 */
                                            (salary  =  (__h_match11640_1_arg . __h_1_mem ) );
                                            true ;
                                          }) ) ) ) );
                                  // ----------
                                  ((__h_case_result ) ? ({ /* cicili#Progn11656 */
                                      ({ /* cicili#Let11660 */
                                        __auto_type match11659  = get_Cell_String (wname );
                                        typeof((((match11659 . __h_data ). Just ). __h_0_mem )) name ;
                                        // ----------
                                        
                                        ({ /* cicili#Let11665 */
                                          bool __h_case_result  = (true  &&  (((match11659 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11666 */
                                                (name  =  (((match11659 . __h_data ). Just ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          ((__h_case_result ) ? ({ /* cicili#Progn11669 */
                                              (fprintf (stdout , "(%d, '", id ) +  show_String (stdout , name ) +  fprintf (stdout , "', %d)", salary ) );
                                            }) : ({ /* cicili#Let11673 */
                                              // ----------
                                              
                                              ({ /* cicili#Progn11677 */
                                                fprintf (stdout , "%d, but item is deleted in another version!", id );
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let11681 */
                                      // ----------
                                      
                                      ({ /* cicili#Progn11685 */
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
                          { /* cicili#Let11690 */
                            // ----------
                            
                            ({ /* cicili#Let11694 */
                              bool __h_case_result  = (true  &&  ((match11619 . __h_ctor ) ==  __h_Nothing_t  ) );
                              // ----------
                              if (__h_case_result )
                                { /* cicili#Block11697 */
                                  { /* cicili#Block11700 */
                                    pthread_mutex_lock ((&outlock ));
                                    ({ /* cicili#Let11703 */
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
typedef struct __ciciliC_Context_11727 {
    void (*routine) (struct __ciciliC_Context_11727 * context );
  struct { /* ciciliStruct11730 */
    Arc_BTree_int_User * pwtree ;
  } context ;
} __ciciliC_Context_11727;
typedef struct ciciliO40Yrb_V0tImx1X77Qgs6Ver8mk_ {
  void * context ;
} ciciliO40Yrb_V0tImx1X77Qgs6Ver8mk_;
void __ciciliL_11737 (struct ciciliO40Yrb_V0tImx1X77Qgs6Ver8mk_ * ciciliDefer11734_ptr ) {
  void * context  = (ciciliDefer11734_ptr -> context );
  free (context );
}
void __ciciliC_Context_11727___ciciliC_Routine_11728 (struct __ciciliC_Context_11727 * context ) {
  Arc_BTree_int_User * pwtree  = ((context -> context ). pwtree );
  struct ciciliO40Yrb_V0tImx1X77Qgs6Ver8mk_ ciciliDefer11734  __attribute__((__cleanup__(__ciciliL_11737 ))) = { context };
  searchMany (pwtree , 200, 200);
}
typedef struct __ciciliC_Context_11748 {
    void (*routine) (struct __ciciliC_Context_11748 * context );
  struct { /* ciciliStruct11751 */
    Arc_BTree_int_User * pwtree ;
  } context ;
} __ciciliC_Context_11748;
typedef struct cicilifEz9sS3cHnOlQNzwka_5_g7fCYY_ {
  void * context ;
} cicilifEz9sS3cHnOlQNzwka_5_g7fCYY_;
void __ciciliL_11758 (struct cicilifEz9sS3cHnOlQNzwka_5_g7fCYY_ * ciciliDefer11755_ptr ) {
  void * context  = (ciciliDefer11755_ptr -> context );
  free (context );
}
void __ciciliC_Context_11748___ciciliC_Routine_11749 (struct __ciciliC_Context_11748 * context ) {
  Arc_BTree_int_User * pwtree  = ((context -> context ). pwtree );
  struct cicilifEz9sS3cHnOlQNzwka_5_g7fCYY_ ciciliDefer11755  __attribute__((__cleanup__(__ciciliL_11758 ))) = { context };
  searchMany (pwtree , 500, 500);
}
typedef struct __ciciliC_Context_11769 {
    void (*routine) (struct __ciciliC_Context_11769 * context );
  struct { /* ciciliStruct11772 */
    Arc_BTree_int_User * pwtree ;
  } context ;
} __ciciliC_Context_11769;
typedef struct ciciliTlTZv4oddosoxKu7FnMWTNI_gOE_ {
  void * context ;
} ciciliTlTZv4oddosoxKu7FnMWTNI_gOE_;
void __ciciliL_11779 (struct ciciliTlTZv4oddosoxKu7FnMWTNI_gOE_ * ciciliDefer11776_ptr ) {
  void * context  = (ciciliDefer11776_ptr -> context );
  free (context );
}
void __ciciliC_Context_11769___ciciliC_Routine_11770 (struct __ciciliC_Context_11769 * context ) {
  Arc_BTree_int_User * pwtree  = ((context -> context ). pwtree );
  struct ciciliTlTZv4oddosoxKu7FnMWTNI_gOE_ ciciliDefer11776  __attribute__((__cleanup__(__ciciliL_11779 ))) = { context };
  searchMany (pwtree , 700, 700);
}
typedef struct __ciciliC_Context_11790 {
    void (*routine) (struct __ciciliC_Context_11790 * context );
  struct { /* ciciliStruct11793 */
    Arc_BTree_int_User * pwtree ;
  } context ;
} __ciciliC_Context_11790;
typedef struct ciciliiHfsBtygHeQnZlvKGH_TQQswvqs_ {
  void * context ;
} ciciliiHfsBtygHeQnZlvKGH_TQQswvqs_;
void __ciciliL_11800 (struct ciciliiHfsBtygHeQnZlvKGH_TQQswvqs_ * ciciliDefer11797_ptr ) {
  void * context  = (ciciliDefer11797_ptr -> context );
  free (context );
}
void __ciciliC_Context_11790___ciciliC_Routine_11791 (struct __ciciliC_Context_11790 * context ) {
  Arc_BTree_int_User * pwtree  = ((context -> context ). pwtree );
  struct ciciliiHfsBtygHeQnZlvKGH_TQQswvqs_ ciciliDefer11797  __attribute__((__cleanup__(__ciciliL_11800 ))) = { context };
  searchMany (pwtree , 1000, 1000);
}
int main () {
  fprintf (stdout , "Multi-thread pure functional manipulation of '%s' type into and from '%s' structure using '%s' key type.\n", "User", "BTree_int_User", "int");
  doQuit  = False ();
  { /* cicili#Let11713 */
    pthread_mutexattr_t attr ;
    // ----------
    pthread_mutexattr_init ((&attr ));
    pthread_mutexattr_settype ((&attr ), PTHREAD_MUTEX_RECURSIVE );
    pthread_mutex_init ((&treeArc ), (&attr ));
  }
  { /* cicili#Let11715 */
    Arc_BTree_int_User wtree  = new_Arc_BTree_int_User (Leaf_BTree_int_User (Nil_BTree_int_User_pair_t ()), (&treeArc ));
    Arc_BTree_int_User * pwtree  = (&wtree );
    __auto_type reader1  = ({ /* cicili#Let11724 */
      __auto_type closure11723  = ((struct __ciciliC_Context_11727 ){ __ciciliC_Context_11727___ciciliC_Routine_11728 , { pwtree }});
      void * data  = malloc (sizeof(closure11723));
      pthread_t thread11722 ;
      // ----------
      memcpy (data , (&closure11723 ), sizeof(closure11723));
      pthread_create ((&thread11722 ), NULL , ((        void * (*)(void *   ))(closure11723 . routine )), data );
      ;
      thread11722 ;
    });
    __auto_type reader2  = ({ /* cicili#Let11745 */
      __auto_type closure11744  = ((struct __ciciliC_Context_11748 ){ __ciciliC_Context_11748___ciciliC_Routine_11749 , { pwtree }});
      void * data  = malloc (sizeof(closure11744));
      pthread_t thread11743 ;
      // ----------
      memcpy (data , (&closure11744 ), sizeof(closure11744));
      pthread_create ((&thread11743 ), NULL , ((        void * (*)(void *   ))(closure11744 . routine )), data );
      ;
      thread11743 ;
    });
    __auto_type reader3  = ({ /* cicili#Let11766 */
      __auto_type closure11765  = ((struct __ciciliC_Context_11769 ){ __ciciliC_Context_11769___ciciliC_Routine_11770 , { pwtree }});
      void * data  = malloc (sizeof(closure11765));
      pthread_t thread11764 ;
      // ----------
      memcpy (data , (&closure11765 ), sizeof(closure11765));
      pthread_create ((&thread11764 ), NULL , ((        void * (*)(void *   ))(closure11765 . routine )), data );
      ;
      thread11764 ;
    });
    __auto_type reader4  = ({ /* cicili#Let11787 */
      __auto_type closure11786  = ((struct __ciciliC_Context_11790 ){ __ciciliC_Context_11790___ciciliC_Routine_11791 , { pwtree }});
      void * data  = malloc (sizeof(closure11786));
      pthread_t thread11785 ;
      // ----------
      memcpy (data , (&closure11786 ), sizeof(closure11786));
      pthread_create ((&thread11785 ), NULL , ((        void * (*)(void *   ))(closure11786 . routine )), data );
      ;
      thread11785 ;
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
