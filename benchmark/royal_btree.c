#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "haskell.h"
#include <time.h>
typedef struct ciciliSvNhmnW_kkR9vUbLF2ZcIUa76Vg_ {
  Cell_String __h_0_mem ;
  int __h_1_mem ;
} ciciliSvNhmnW_kkR9vUbLF2ZcIUa76Vg_;
typedef ciciliSvNhmnW_kkR9vUbLF2ZcIUa76Vg_ User ;
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
    User * (*toArray) (List_User list );
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
User * toArray_List_User (List_User list );
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
User * toArray_List_User (List_User list ) {
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
                ((User *)calloc (count , sizeof(User)));
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
  return (((buf  ==  NULL  )) ? Nil_User () : ({ /* cicili#Let355 */
        User item  = (*buf );
        // ----------
        (((len  ==  0 )) ? Nil_User () : Cons_User (item , pure_List_User ((++buf ), (--len ))));
      }));
}
size_t show_List_User (CFile file , List_User list ) {
  return ({ /* cicili#Let365 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let367 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn368 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn370 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn375 */
            (({ /* cicili#Let379 */
                // ----------
                ;
                ({ /* cicili#Let381 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn385 */
                      (({ /* cicili#Let391 */
                          typeof((head . __h_0_mem )) wname ;
                          typeof((head . __h_1_mem )) salary ;
                          // ----------
                          ;
                          ({ /* cicili#Let393 */
                            bool __h_case_result  = (true  &&  (({ /* cicili#Progn394 */
                                  (wname  =  (head . __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn396 */
                                  (salary  =  (head . __h_1_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn401 */
                                ({ /* cicili#Let405 */
                                  __auto_type match404  = get_Cell_String (wname );
                                  typeof((((match404 . __h_data ). Just ). __h_0_mem )) name ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let408 */
                                    bool __h_case_result  = (true  &&  (((match404 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn409 */
                                          (name  =  (((match404 . __h_data ). Just ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn414 */
                                        (fprintf (file , "('") +  show_String (file , name ) +  fprintf (file , "', %d)", salary ) );
                                      }) : ({ /* cicili#Let418 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn420 */
                                          fprintf (file , "item is deleted in another version!");
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let424 */
                                // ----------
                                ;
                                ({ /* cicili#Progn426 */
                                  0;
                                });
                              }));
                          });
                        }) +  fprintf (file , "%s", " ") );
                    }) : ({ /* cicili#Let430 */
                      // ----------
                      ;
                      ({ /* cicili#Progn432 */
                        ({ /* cicili#Let438 */
                          typeof((head . __h_0_mem )) wname ;
                          typeof((head . __h_1_mem )) salary ;
                          // ----------
                          ;
                          ({ /* cicili#Let440 */
                            bool __h_case_result  = (true  &&  (({ /* cicili#Progn441 */
                                  (wname  =  (head . __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn443 */
                                  (salary  =  (head . __h_1_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn448 */
                                ({ /* cicili#Let452 */
                                  __auto_type match451  = get_Cell_String (wname );
                                  typeof((((match451 . __h_data ). Just ). __h_0_mem )) name ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let455 */
                                    bool __h_case_result  = (true  &&  (((match451 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn456 */
                                          (name  =  (((match451 . __h_data ). Just ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn461 */
                                        (fprintf (file , "('") +  show_String (file , name ) +  fprintf (file , "', %d)", salary ) );
                                      }) : ({ /* cicili#Let465 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn467 */
                                          fprintf (file , "item is deleted in another version!");
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let471 */
                                // ----------
                                ;
                                ({ /* cicili#Progn473 */
                                  0;
                                });
                              }));
                          });
                        });
                      });
                    }));
                });
              }) +  show_List_User (file , tail ) );
          }) : ({ /* cicili#Let478 */
            // ----------
            ;
            ({ /* cicili#Progn480 */
              0;
            });
          }));
      });
    });
}
List_User copy_List_User (List_User list ) {
  return ({ /* cicili#Let486 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let488 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn489 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn491 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn496 */
            Cons_User (head , copy_List_User (tail ));
          }) : ({ /* cicili#Let502 */
            // ----------
            ;
            ({ /* cicili#Progn504 */
              Nil_User ();
            });
          }));
      });
    });
}
List_User replaceAt_List_User (List_User list , User item , size_t index ) {
  return ({ /* cicili#Let511 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let513 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn514 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn516 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn521 */
            Cons_User (head , replaceAt_List_User (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let527 */
            // ----------
            ;
            ({ /* cicili#Progn529 */
              ({ /* cicili#Let533 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let535 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn536 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn541 */
                      Cons_User (item , copy_List_User (taill ));
                    }) : ({ /* cicili#Let547 */
                      // ----------
                      ;
                      ({ /* cicili#Progn549 */
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
  return ({ /* cicili#Let556 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let558 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn559 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn561 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn566 */
            Cons_User (head , deleteAt_List_User (tail , (index  -  1 )));
          }) : ({ /* cicili#Let572 */
            // ----------
            ;
            ({ /* cicili#Progn574 */
              ({ /* cicili#Let578 */
                typeof((((list -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let580 */
                  bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn581 */
                        (taill  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn586 */
                      copy_List_User (taill );
                    }) : ({ /* cicili#Let591 */
                      // ----------
                      ;
                      ({ /* cicili#Progn593 */
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
  return ({ /* cicili#Let600 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let602 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn603 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn605 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn610 */
            Cons_User (head , insertAt_List_User (tail , item , (index  -  1 )));
          }) : ({ /* cicili#Let616 */
            // ----------
            ;
            ({ /* cicili#Progn618 */
              Cons_User (item , copy_List_User (list ));
            });
          }));
      });
    });
}
List_User replace_List_User (List_User list , User item , List_User aimed ) {
  return ({ /* cicili#Let626 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let628 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn629 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn631 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn636 */
            Cons_User (head , replace_List_User (tail , item , aimed ));
          }) : ({ /* cicili#Let642 */
            // ----------
            ;
            ({ /* cicili#Progn644 */
              ({ /* cicili#Let648 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let650 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn651 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn656 */
                      Cons_User (item , copy_List_User (taill ));
                    }) : ({ /* cicili#Let662 */
                      // ----------
                      ;
                      ({ /* cicili#Progn664 */
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
  return ({ /* cicili#Let671 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let673 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn674 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn676 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (list  !=  aimed  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn681 */
            Cons_User (head , delete_List_User (tail , aimed ));
          }) : ({ /* cicili#Let687 */
            // ----------
            ;
            ({ /* cicili#Progn689 */
              ({ /* cicili#Let693 */
                typeof((((aimed -> __h_data ). Cons ). __h_1_mem )) taill ;
                // ----------
                ;
                ({ /* cicili#Let695 */
                  bool __h_case_result  = (true  &&  (((aimed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn696 */
                        (taill  =  (((aimed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn701 */
                      copy_List_User (taill );
                    }) : ({ /* cicili#Let706 */
                      // ----------
                      ;
                      ({ /* cicili#Progn708 */
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
  return ({ /* cicili#Let715 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let717 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn718 */
                  (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn720 */
                  (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (llist  !=  rlist  ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn725 */
            Cons_User (head , insert_List_User (tail , item , rlist ));
          }) : ({ /* cicili#Let731 */
            // ----------
            ;
            ({ /* cicili#Progn733 */
              Cons_User (item , copy_List_User (rlist ));
            });
          }));
      });
    });
}
List_User reverse_List_User (List_User list ) {
  List_User _reverse (List_User list , List_User rlist ) {
    return ({ /* cicili#Let742 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let744 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn745 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn747 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn752 */
              _reverse (tail , Cons_User (head , rlist ));
            }) : ({ /* cicili#Let757 */
              // ----------
              ;
              ({ /* cicili#Progn759 */
                rlist ;
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let763 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let765 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn766 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn768 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn773 */
            _reverse (tail , Cons_User (head , Nil_User ()));
          }) : ({ /* cicili#Let779 */
            // ----------
            ;
            ({ /* cicili#Progn781 */
              list ;
            });
          }));
      });
    });
}
List_User append_List_User (List_User llist , List_User rlist ) {
  return ({ /* cicili#Let787 */
      typeof((((llist -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((llist -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let789 */
        bool __h_case_result  = (true  &&  (((llist -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn790 */
                (head  =  (((llist -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn792 */
                (tail  =  (((llist -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn797 */
            Cons_User (head , append_List_User (tail , rlist ));
          }) : ({ /* cicili#Let803 */
            // ----------
            ;
            ({ /* cicili#Progn805 */
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
  return (((len  <=  0 )) ? Nil_User () : ({ /* cicili#Let818 */
        typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let820 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn821 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn823 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn828 */
              Cons_User (head , take_List_User ((--len ), tail ));
            }) : ({ /* cicili#Let834 */
              // ----------
              ;
              ({ /* cicili#Progn836 */
                Nil_User ();
              });
            }));
        });
      }));
}
List_User last_List_User (List_User list ) {
  return ({ /* cicili#Let843 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let845 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn846 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn851 */
            ({ /* cicili#Let855 */
              // ----------
              ;
              ({ /* cicili#Let857 */
                bool __h_case_result  = (true  &&  ((tail -> __h_ctor ) ==  __h_Nil_t  ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn861 */
                    copy_List_User (list );
                  }) : ({ /* cicili#Let866 */
                    // ----------
                    ;
                    ({ /* cicili#Progn868 */
                      last_List_User (tail );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let873 */
            // ----------
            ;
            ({ /* cicili#Progn875 */
              Nil_User ();
            });
          }));
      });
    });
}
List_User init_List_User (List_User list ) {
  return ({ /* cicili#Let883 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let885 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn886 */
                  (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn888 */
                  (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                  true ;
                }) ) &&  (true  &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn893 */
            Cons_User (head , init_List_User (tail ));
          }) : ({ /* cicili#Let899 */
            // ----------
            ;
            ({ /* cicili#Progn901 */
              Nil_User ();
            });
          }));
      });
    });
}
size_t hasLen_List_User (List_User list , size_t desired ) {
  return ({ /* cicili#Let908 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let910 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn911 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn916 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_User (tail , (--desired )) ));
          }) : ({ /* cicili#Let922 */
            // ----------
            ;
            ({ /* cicili#Progn924 */
              0;
            });
          }));
      });
    });
}
size_t len_List_User (List_User list ) {
  return ({ /* cicili#Let930 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let932 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn933 */
              (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn938 */
            (1 +  len_List_User (tail ) );
          }) : ({ /* cicili#Let943 */
            // ----------
            ;
            ({ /* cicili#Progn945 */
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
  return (((len  <=  0 )) ? copy_List_User (list ) : ({ /* cicili#Let956 */
        typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
        // ----------
        ;
        ({ /* cicili#Let958 */
          bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn959 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn964 */
              drop_List_User ((--len ), tail );
            }) : ({ /* cicili#Let969 */
              // ----------
              ;
              ({ /* cicili#Progn971 */
                Nil_User ();
              });
            }));
        });
      }));
}
Maybe_User head_List_User (List_User list ) {
  return ({ /* cicili#Let979 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      // ----------
      ;
      ({ /* cicili#Let981 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn982 */
              (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn987 */
            Just_User (head );
          }) : ({ /* cicili#Let992 */
            // ----------
            ;
            ({ /* cicili#Progn994 */
              Nothing_User ();
            });
          }));
      });
    });
}
List_User nthcdr_List_User (size_t index , List_User list ) {
  return ({ /* cicili#Let1001 */
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let1003 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn1004 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn1009 */
            nthcdr_List_User ((--index ), tail );
          }) : ({ /* cicili#Let1014 */
            // ----------
            ;
            ({ /* cicili#Progn1016 */
              list ;
            });
          }));
      });
    });
}
Maybe_User nth_List_User (size_t index , List_User list ) {
  return ({ /* cicili#Let1023 */
      typeof((((list -> __h_data ). Cons ). __h_0_mem )) head ;
      typeof((((list -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let1025 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn1026 */
                (head  =  (((list -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn1028 */
                (tail  =  (((list -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn1033 */
            (((index  ==  0 )) ? Just_User (head ) : (((index  <  0 )) ? Nothing_User () : nth_List_User ((--index ), tail )));
          }) : ({ /* cicili#Let1042 */
            // ----------
            ;
            ({ /* cicili#Progn1044 */
              Nothing_User ();
            });
          }));
      });
    });
}
void free_List_User (List_User * this_ptr ) {
  { /* cicili#Let1049 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let1053 */
      typeof((((this -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let1055 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn1056 */
              (tail  =  (((this -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block1062 */
            { /* cicili#Block1064 */
              free (this );
              free_List_User ((&tail ));
            }
          }
        else
          { /* cicili#Let1072 */
            // ----------
            ;
            ({ /* cicili#Let1074 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Nil_t  ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block1079 */
                  { /* cicili#Block1081 */
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
  { /* cicili#Let1092 */
    List_User instance  = malloc (sizeof(class_List_User));
    // ----------
    (*instance ) = ((class_List_User){ get_List_User__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
List_User Nil_User () {
  { /* cicili#Let1098 */
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
  { /* cicili#Let1115 */
    Maybe_List_User instance  = ((Maybe_List_User){ get_Maybe_List_User__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_User Nothing_List_User () {
  { /* cicili#Let1120 */
    Maybe_List_User instance  = ((Maybe_List_User){ get_Maybe_List_User__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_User__H_IMPL__ */ 
typedef struct class_BTree_int_User * BTree_int_User ;
typedef struct ciciliJh_8C52AzB2eRH_tbnay2M9RO44_ {
  int __h_0_mem ;
  User __h_1_mem ;
} ciciliJh_8C52AzB2eRH_tbnay2M9RO44_;
typedef ciciliJh_8C52AzB2eRH_tbnay2M9RO44_ BTree_int_User_pair_t ;
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
  union { /* ciciliUnion1145 */
    struct { /* ciciliStruct1146 */
    } ERR_INVALID_OBJECT , _7 ;
    struct { /* ciciliStruct1147 */
      size_t __h_0_mem ;
    } ERR_INVALID_ORDER , _6 ;
    struct { /* ciciliStruct1148 */
      BTree_int_User_pair_t __h_0_mem ;
    } ERR_UNIQUE_KEY , _5 ;
    struct { /* ciciliStruct1149 */
      int __h_0_mem ;
    } ERR_NOT_FOUND , _4 ;
    struct { /* ciciliStruct1150 */
      BTree_int_User_pair_t __h_0_mem ;
      size_t __h_1_mem ;
    } ERR_ACCESS_DEAD_CHILD , _3 ;
    struct { /* ciciliStruct1151 */
      BTree_int_User __h_0_mem ;
    } ERR_INVALID_BRANCH , _2 ;
    struct { /* ciciliStruct1152 */
      char * __h_0_mem ;
    } ERR_CANT_BORROW , _1 ;
    struct { /* ciciliStruct1153 */
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
  union { /* ciciliUnion1294 */
    struct { /* ciciliStruct1295 */
      List_BTree_int_User_pair_t_x __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct1296 */
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
  union { /* ciciliUnion1326 */
    struct { /* ciciliStruct1327 */
      List_BTree_int_User_pair_t_x * __h_0_mem ;
      int * __h_1_mem ;
      size_t __h_2_mem ;
    } Hold , _1 ;
    struct { /* ciciliStruct1328 */
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
    BTree_int_User_pair_t * (*toArray) (List_BTree_int_User_pair_t list );
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
  union { /* ciciliUnion1390 */
    struct { /* ciciliStruct1391 */
      BTree_int_User_pair_t __h_0_mem ;
      List_BTree_int_User_pair_t __h_1_mem ;
    } Cons , _1 ;
    struct { /* ciciliStruct1392 */
    } Nil , _ ;
  } __h_data ;
} class_List_BTree_int_User_pair_t;
List_BTree_int_User_pair_t BoxedCons_BTree_int_User_pair_t (BTree_int_User_pair_t head , List_BTree_int_User_pair_t tail );
List_BTree_int_User_pair_t BoxedNil_BTree_int_User_pair_t ();
__attribute__((weak)) List_BTree_int_User_pair_t Default_List_BTree_int_User_pair_t () {
  return BoxedNil_BTree_int_User_pair_t ();
}
BTree_int_User_pair_t * toArray_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list );
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
  union { /* ciciliUnion1492 */
    struct { /* ciciliStruct1493 */
      List_BTree_int_User_pair_t __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct1494 */
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
  union { /* ciciliUnion1524 */
    struct { /* ciciliStruct1525 */
      BTree_int_User __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct1526 */
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
  union { /* ciciliUnion1556 */
    struct { /* ciciliStruct1557 */
      BTree_int_User * __h_0_mem ;
      int * __h_1_mem ;
      size_t __h_2_mem ;
    } Hold , _1 ;
    struct { /* ciciliStruct1558 */
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
  union { /* ciciliUnion1600 */
    struct { /* ciciliStruct1601 */
      Rc_BTree_int_User __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct1602 */
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
  union { /* ciciliUnion1633 */
    struct { /* ciciliStruct1634 */
      List_Rc_BTree_int_User_x __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct1635 */
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
  union { /* ciciliUnion1665 */
    struct { /* ciciliStruct1666 */
      List_Rc_BTree_int_User_x * __h_0_mem ;
      int * __h_1_mem ;
      size_t __h_2_mem ;
    } Hold , _1 ;
    struct { /* ciciliStruct1667 */
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
    Rc_BTree_int_User * (*toArray) (List_Rc_BTree_int_User list );
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
  union { /* ciciliUnion1729 */
    struct { /* ciciliStruct1730 */
      Rc_BTree_int_User __h_0_mem ;
      List_Rc_BTree_int_User __h_1_mem ;
    } Cons , _1 ;
    struct { /* ciciliStruct1731 */
    } Nil , _ ;
  } __h_data ;
} class_List_Rc_BTree_int_User;
List_Rc_BTree_int_User BoxedCons_Rc_BTree_int_User (Rc_BTree_int_User head , List_Rc_BTree_int_User tail );
List_Rc_BTree_int_User BoxedNil_Rc_BTree_int_User ();
__attribute__((weak)) List_Rc_BTree_int_User Default_List_Rc_BTree_int_User () {
  return BoxedNil_Rc_BTree_int_User ();
}
Rc_BTree_int_User * toArray_List_Rc_BTree_int_User (List_Rc_BTree_int_User list );
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
  union { /* ciciliUnion1831 */
    struct { /* ciciliStruct1832 */
      List_Rc_BTree_int_User __h_0_mem ;
    } Just , _1 ;
    struct { /* ciciliStruct1833 */
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
  union { /* ciciliUnion1868 */
    struct { /* ciciliStruct1869 */
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
  union { /* ciciliUnion1928 */
    struct { /* ciciliStruct1929 */
      List_BTree_int_User_pair_t __h_0_mem ;
      List_Rc_BTree_int_User __h_1_mem ;
    } Branch , _2 ;
    struct { /* ciciliStruct1930 */
      List_BTree_int_User_pair_t __h_0_mem ;
      List_Rc_BTree_int_User __h_1_mem ;
    } Internal , _1 ;
    struct { /* ciciliStruct1931 */
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
  { /* cicili#Let2008 */
    // ----------
    ;
    ({ /* cicili#Let2010 */
      bool __h_case_result  = (true  &&  ((error . __h_ctor ) ==  __h_ERR_INVALID_OBJECT_t  ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block2015 */
          printf ("invalid B-Tree object");
        }
      else
        { /* cicili#Let2020 */
          typeof((((error . __h_data ). ERR_INVALID_ORDER ). __h_0_mem )) order ;
          // ----------
          ;
          ({ /* cicili#Let2022 */
            bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_INVALID_ORDER_t  ) &&  ({ /* cicili#Progn2023 */
                  (order  =  (((error . __h_data ). ERR_INVALID_ORDER ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block2029 */
                printf ("invalid B-Tree order: %zu", order );
              }
            else
              { /* cicili#Let2034 */
                typeof((((error . __h_data ). ERR_UNIQUE_KEY ). __h_0_mem )) item ;
                // ----------
                ;
                ({ /* cicili#Let2036 */
                  bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_UNIQUE_KEY_t  ) &&  ({ /* cicili#Progn2037 */
                        (item  =  (((error . __h_data ). ERR_UNIQUE_KEY ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block2043 */
                      { /* cicili#Block2045 */
                        printf ("unique key: ");
                        ({ /* cicili#Let2052 */
                          typeof((item . __h_0_mem )) id ;
                          typeof((item . __h_1_mem )) __h_match2050_1_arg ;
                          typeof((__h_match2050_1_arg . __h_0_mem )) wname ;
                          typeof((__h_match2050_1_arg . __h_1_mem )) salary ;
                          // ----------
                          ;
                          ({ /* cicili#Let2054 */
                            bool __h_case_result  = (true  &&  ((({ /* cicili#Progn2055 */
                                    (id  =  (item . __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn2057 */
                                    (__h_match2050_1_arg  =  (item . __h_1_mem ) );
                                    true ;
                                  }) ) &&  (true  &&  (({ /* cicili#Progn2059 */
                                      (wname  =  (__h_match2050_1_arg . __h_0_mem ) );
                                      true ;
                                    }) &&  ({ /* cicili#Progn2061 */
                                      (salary  =  (__h_match2050_1_arg . __h_1_mem ) );
                                      true ;
                                    }) ) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn2066 */
                                ({ /* cicili#Let2070 */
                                  __auto_type match2069  = get_Cell_String (wname );
                                  typeof((((match2069 . __h_data ). Just ). __h_0_mem )) name ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let2073 */
                                    bool __h_case_result  = (true  &&  (((match2069 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2074 */
                                          (name  =  (((match2069 . __h_data ). Just ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn2079 */
                                        (fprintf (stdout , "(%d, '", id ) +  show_String (stdout , name ) +  fprintf (stdout , "', %d)", salary ) );
                                      }) : ({ /* cicili#Let2083 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn2085 */
                                          fprintf (stdout , "%d, but item is deleted in another version!", id );
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let2089 */
                                // ----------
                                ;
                                ({ /* cicili#Progn2091 */
                                  0;
                                });
                              }));
                          });
                        });
                      }
                    }
                  else
                    { /* cicili#Let2096 */
                      typeof((((error . __h_data ). ERR_NOT_FOUND ). __h_0_mem )) key ;
                      // ----------
                      ;
                      ({ /* cicili#Let2098 */
                        bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_NOT_FOUND_t  ) &&  ({ /* cicili#Progn2099 */
                              (key  =  (((error . __h_data ). ERR_NOT_FOUND ). __h_0_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        
                        if (__h_case_result )
                          { /* cicili#Block2105 */
                            { /* cicili#Block2107 */
                              printf ("key not found: ");
                              fprintf (stdout , "%d", key );
                            }
                          }
                        else
                          { /* cicili#Let2115 */
                            // ----------
                            ;
                            ({ /* cicili#Let2117 */
                              bool __h_case_result  = (true  &&  ((error . __h_ctor ) ==  __h_ERR_ACCESS_DEAD_CONS_t  ) );
                              // ----------
                              
                              if (__h_case_result )
                                { /* cicili#Block2122 */
                                  { /* cicili#Block2124 */
                                    printf ("dead cons");
                                  }
                                }
                              else
                                { /* cicili#Let2129 */
                                  typeof((((error . __h_data ). ERR_ACCESS_DEAD_CHILD ). __h_0_mem )) item ;
                                  typeof((((error . __h_data ). ERR_ACCESS_DEAD_CHILD ). __h_1_mem )) index ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let2131 */
                                    bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_ACCESS_DEAD_CHILD_t  ) &&  (({ /* cicili#Progn2132 */
                                            (item  =  (((error . __h_data ). ERR_ACCESS_DEAD_CHILD ). __h_0_mem ) );
                                            true ;
                                          }) &&  ({ /* cicili#Progn2134 */
                                            (index  =  (((error . __h_data ). ERR_ACCESS_DEAD_CHILD ). __h_1_mem ) );
                                            true ;
                                          }) ) ) );
                                    // ----------
                                    
                                    if (__h_case_result )
                                      { /* cicili#Block2140 */
                                        { /* cicili#Block2142 */
                                          printf ("dead child at index: %zu of item: ", index );
                                          ({ /* cicili#Let2149 */
                                            typeof((item . __h_0_mem )) id ;
                                            typeof((item . __h_1_mem )) __h_match2147_1_arg ;
                                            typeof((__h_match2147_1_arg . __h_0_mem )) wname ;
                                            typeof((__h_match2147_1_arg . __h_1_mem )) salary ;
                                            // ----------
                                            ;
                                            ({ /* cicili#Let2151 */
                                              bool __h_case_result  = (true  &&  ((({ /* cicili#Progn2152 */
                                                      (id  =  (item . __h_0_mem ) );
                                                      true ;
                                                    }) &&  ({ /* cicili#Progn2154 */
                                                      (__h_match2147_1_arg  =  (item . __h_1_mem ) );
                                                      true ;
                                                    }) ) &&  (true  &&  (({ /* cicili#Progn2156 */
                                                        (wname  =  (__h_match2147_1_arg . __h_0_mem ) );
                                                        true ;
                                                      }) &&  ({ /* cicili#Progn2158 */
                                                        (salary  =  (__h_match2147_1_arg . __h_1_mem ) );
                                                        true ;
                                                      }) ) ) ) );
                                              // ----------
                                              
                                              ((__h_case_result ) ? ({ /* cicili#Progn2163 */
                                                  ({ /* cicili#Let2167 */
                                                    __auto_type match2166  = get_Cell_String (wname );
                                                    typeof((((match2166 . __h_data ). Just ). __h_0_mem )) name ;
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Let2170 */
                                                      bool __h_case_result  = (true  &&  (((match2166 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2171 */
                                                            (name  =  (((match2166 . __h_data ). Just ). __h_0_mem ) );
                                                            true ;
                                                          }) ) );
                                                      // ----------
                                                      
                                                      ((__h_case_result ) ? ({ /* cicili#Progn2176 */
                                                          (fprintf (stdout , "(%d, '", id ) +  show_String (stdout , name ) +  fprintf (stdout , "', %d)", salary ) );
                                                        }) : ({ /* cicili#Let2180 */
                                                          // ----------
                                                          ;
                                                          ({ /* cicili#Progn2182 */
                                                            fprintf (stdout , "%d, but item is deleted in another version!", id );
                                                          });
                                                        }));
                                                    });
                                                  });
                                                }) : ({ /* cicili#Let2186 */
                                                  // ----------
                                                  ;
                                                  ({ /* cicili#Progn2188 */
                                                    0;
                                                  });
                                                }));
                                            });
                                          });
                                        }
                                      }
                                    else
                                      { /* cicili#Let2193 */
                                        typeof((((error . __h_data ). ERR_INVALID_BRANCH ). __h_0_mem )) branch ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let2195 */
                                          bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_INVALID_BRANCH_t  ) &&  ({ /* cicili#Progn2196 */
                                                (branch  =  (((error . __h_data ). ERR_INVALID_BRANCH ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          if (__h_case_result )
                                            { /* cicili#Block2202 */
                                              { /* cicili#Block2204 */
                                                printf ("invalid branch: ");
                                                (branch -> __h_table -> show )(stdout , branch );
                                              }
                                            }
                                          else
                                            { /* cicili#Let2211 */
                                              typeof((((error . __h_data ). ERR_CANT_BORROW ). __h_0_mem )) reason ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let2213 */
                                                bool __h_case_result  = (true  &&  (((error . __h_ctor ) ==  __h_ERR_CANT_BORROW_t  ) &&  ({ /* cicili#Progn2214 */
                                                      (reason  =  (((error . __h_data ). ERR_CANT_BORROW ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                if (__h_case_result )
                                                  { /* cicili#Block2220 */
                                                    printf ("borrow error: %s", reason );
                                                  }
                                                else
                                                  { /* cicili#Let2225 */
                                                    // ----------
                                                    ;
                                                    { /* cicili#Block2227 */
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
  { /* cicili#Let2239 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_INVALID_OBJECT_t });
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_INVALID_ORDER (size_t order ) {
  { /* cicili#Let2244 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_INVALID_ORDER_t , .__h_data.ERR_INVALID_ORDER = { order }});
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_UNIQUE_KEY (BTree_int_User_pair_t item ) {
  { /* cicili#Let2249 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_UNIQUE_KEY_t , .__h_data.ERR_UNIQUE_KEY = { item }});
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_NOT_FOUND (int key ) {
  { /* cicili#Let2255 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_NOT_FOUND_t , .__h_data.ERR_NOT_FOUND = { key }});
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_ACCESS_DEAD_CHILD (BTree_int_User_pair_t item , size_t index ) {
  { /* cicili#Let2260 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_ACCESS_DEAD_CHILD_t , .__h_data.ERR_ACCESS_DEAD_CHILD = { item , index }});
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_INVALID_BRANCH (BTree_int_User branch ) {
  { /* cicili#Let2266 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_INVALID_BRANCH_t , .__h_data.ERR_INVALID_BRANCH = { branch }});
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_CANT_BORROW (char * reason ) {
  { /* cicili#Let2271 */
    BTree_int_User_Error instance  = ((BTree_int_User_Error){ get_BTree_int_User_Error__H_Table (), __h_ERR_CANT_BORROW_t , .__h_data.ERR_CANT_BORROW = { reason }});
    // ----------
    return instance ;
  }
}
BTree_int_User_Error BTree_int_User_ERR_ACCESS_DEAD_CONS () {
  { /* cicili#Let2276 */
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
  { /* cicili#Let2292 */
    Either_BTree_int_User_Error_BTree_int_User instance  = ((Either_BTree_int_User_Error_BTree_int_User){ get_Either_BTree_int_User_Error_BTree_int_User__H_Table (), __h_Right_t , .__h_data.Right = { value }});
    // ----------
    return instance ;
  }
}
Either_BTree_int_User_Error_BTree_int_User Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_Error error ) {
  { /* cicili#Let2297 */
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
  { /* cicili#Let2313 */
    Maybe_BTree_int_User instance  = ((Maybe_BTree_int_User){ get_Maybe_BTree_int_User__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_BTree_int_User Nothing_BTree_int_User () {
  { /* cicili#Let2318 */
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
  { /* cicili#Let2336 */
    Maybe_BTree_int_User_pair_t instance  = ((Maybe_BTree_int_User_pair_t){ get_Maybe_BTree_int_User_pair_t__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_BTree_int_User_pair_t Nothing_BTree_int_User_pair_t () {
  { /* cicili#Let2341 */
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
  { /* cicili#Let2361 */
    Maybe_List_BTree_int_User_pair_t_x instance  = ((Maybe_List_BTree_int_User_pair_t_x){ get_Maybe_List_BTree_int_User_pair_t_x__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_BTree_int_User_pair_t_x Nothing_List_BTree_int_User_pair_t_x () {
  { /* cicili#Let2366 */
    Maybe_List_BTree_int_User_pair_t_x instance  = ((Maybe_List_BTree_int_User_pair_t_x){ get_Maybe_List_BTree_int_User_pair_t_x__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_BTree_int_User_pair_t_x__H_IMPL__ */ 
#ifndef __Box_List_BTree_int_User_pair_t__H_IMPL__
#define __Box_List_BTree_int_User_pair_t__H_IMPL__
Box_List_BTree_int_User_pair_t new_Box_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t_x pointer ) {
  return ({ /* cicili#Let2373 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      __auto_type holder  = ((List_BTree_int_User_pair_t_x *)malloc (sizeof(List_BTree_int_User_pair_t_x *)));
      // ----------
      (*count ) = 1;
      (*holder ) = pointer ;
      __h_Hold_List_BTree_int_User_pair_t_x (holder , count , ((size_t)pointer ));
    });
}
Box_List_BTree_int_User_pair_t clone_Box_List_BTree_int_User_pair_t (Box_List_BTree_int_User_pair_t rc ) {
  return ({ /* cicili#Let2382 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let2384 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn2385 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2387 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn2389 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn2394 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Progn2397 */
                (++(*count ));
                __h_Hold_List_BTree_int_User_pair_t_x (pointer , count , address );
              }) : Gone_List_BTree_int_User_pair_t_x ());
          }) : ({ /* cicili#Let2403 */
            // ----------
            ;
            ({ /* cicili#Progn2405 */
              Gone_List_BTree_int_User_pair_t_x ();
            });
          }));
      });
    });
}
Maybe_List_BTree_int_User_pair_t_x take_Box_List_BTree_int_User_pair_t (Box_List_BTree_int_User_pair_t * this ) {
  return ({ /* cicili#Let2413 */
      typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let2415 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn2416 */
                  (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2418 */
                  (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn2420 */
                (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn2425 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Let2429 */
                __auto_type result  = Just_List_BTree_int_User_pair_t_x ((*pointer ));
                // ----------
                if ((*count ) >=  1 )
                  { /* cicili#Block2435 */
                    (*count ) = 0;
                    (*pointer ) = NULL ;
                  }
                result ;
              }) : Nothing_List_BTree_int_User_pair_t_x ());
          }) : ({ /* cicili#Let2440 */
            // ----------
            ;
            ({ /* cicili#Progn2442 */
              Nothing_List_BTree_int_User_pair_t_x ();
            });
          }));
      });
    });
}
Maybe_List_BTree_int_User_pair_t_x get_Box_List_BTree_int_User_pair_t (Box_List_BTree_int_User_pair_t rc ) {
  return ({ /* cicili#Let2450 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let2452 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn2453 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn2455 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn2457 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn2462 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) >  0 ) )) ? Just_List_BTree_int_User_pair_t_x ((*pointer )) : Nothing_List_BTree_int_User_pair_t_x ());
          }) : ({ /* cicili#Let2469 */
            // ----------
            ;
            ({ /* cicili#Progn2471 */
              Nothing_List_BTree_int_User_pair_t_x ();
            });
          }));
      });
    });
}
void free_Box_List_BTree_int_User_pair_t (Box_List_BTree_int_User_pair_t * this ) {
  { /* cicili#Let2480 */
    typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
    typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
    // ----------
    ;
    ({ /* cicili#Let2482 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn2483 */
                (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn2485 */
                (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                true ;
              }) ) &&  ({ /* cicili#Progn2487 */
              (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block2493 */
          if (((*count ) ==  0 ) &&  ((*pointer ) ==  NULL  ) )
            { /* cicili#Block2496 */
              free (((void *)count ));
              free (((void *)pointer ));
              (*this ) = Gone_List_BTree_int_User_pair_t_x ();
            }
          else
            {
            if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
              { /* cicili#Block2504 */
                if ((*count ) ==  1 )
                  { /* cicili#Block2507 */
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
        { /* cicili#Let2517 */
          // ----------
          ;
          ({ /* cicili#Let2519 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Gone_t  ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block2524 */
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
  { /* cicili#Let2535 */
    Box_List_BTree_int_User_pair_t instance  = ((Box_List_BTree_int_User_pair_t){ get_Box_List_BTree_int_User_pair_t__H_Table (), __h_Hold_t , .__h_data.Hold = { pointer , count , address }});
    // ----------
    return instance ;
  }
}
Box_List_BTree_int_User_pair_t Gone_List_BTree_int_User_pair_t_x () {
  { /* cicili#Let2540 */
    Box_List_BTree_int_User_pair_t instance  = ((Box_List_BTree_int_User_pair_t){ get_Box_List_BTree_int_User_pair_t__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Box_List_BTree_int_User_pair_t__H_IMPL__ */ 
BTree_int_User_pair_t * toArray_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
  BTree_int_User_pair_t * array (List_BTree_int_User_pair_t list , size_t count ) {
    return ({ /* cicili#Let2547 */
        __auto_type __h_matchbox  = list ;
        // ----------
        ({ /* cicili#Let2551 */
          __auto_type match2550  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match2550 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let2554 */
            bool __h_case_result  = (true  &&  (((match2550 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2555 */
                  (unboxed  =  (((match2550 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn2560 */
                ({ /* cicili#Let2564 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  ;
                  ({ /* cicili#Let2566 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn2567 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn2569 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn2574 */
                        ({ /* cicili#Let2576 */
                          BTree_int_User_pair_t * arr  = array (tail , (count  +  1 ));
                          // ----------
                          arr [count ] = head ;
                          arr ;
                        });
                      }) : ({ /* cicili#Let2580 */
                        // ----------
                        ;
                        ({ /* cicili#Progn2582 */
                          ((BTree_int_User_pair_t *)calloc (count , sizeof(BTree_int_User_pair_t)));
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let2586 */
                // ----------
                ;
                ({ /* cicili#Progn2588 */
                  ((BTree_int_User_pair_t *)calloc (count , sizeof(BTree_int_User_pair_t)));
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
  return (((buf  ==  NULL  )) ? BoxedNil_BTree_int_User_pair_t () : ({ /* cicili#Let2599 */
        BTree_int_User_pair_t item  = (*buf );
        // ----------
        (((len  ==  0 )) ? BoxedNil_BTree_int_User_pair_t () : BoxedCons_BTree_int_User_pair_t (item , pure_List_BTree_int_User_pair_t ((++buf ), (--len ))));
      }));
}
size_t show_List_BTree_int_User_pair_t (CFile file , List_BTree_int_User_pair_t list ) {
  return ({ /* cicili#Let2608 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let2612 */
        __auto_type match2611  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match2611 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let2615 */
          bool __h_case_result  = (true  &&  (((match2611 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2616 */
                (unboxed  =  (((match2611 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2621 */
              ({ /* cicili#Let2625 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let2627 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn2628 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn2630 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2635 */
                      (({ /* cicili#Let2638 */
                          __auto_type __h_matchbox  = tail ;
                          // ----------
                          ({ /* cicili#Let2642 */
                            __auto_type match2641  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                            typeof((((match2641 . __h_data ). Just ). __h_0_mem )) unboxed ;
                            // ----------
                            ;
                            ({ /* cicili#Let2645 */
                              bool __h_case_result  = (true  &&  (((match2641 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2646 */
                                    (unboxed  =  (((match2641 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* cicili#Progn2651 */
                                  ({ /* cicili#Let2655 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Let2657 */
                                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Cons_t  ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn2661 */
                                          (({ /* cicili#Let2668 */
                                              typeof((head . __h_0_mem )) id ;
                                              typeof((head . __h_1_mem )) __h_match2666_1_arg ;
                                              typeof((__h_match2666_1_arg . __h_0_mem )) wname ;
                                              typeof((__h_match2666_1_arg . __h_1_mem )) salary ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let2670 */
                                                bool __h_case_result  = (true  &&  ((({ /* cicili#Progn2671 */
                                                        (id  =  (head . __h_0_mem ) );
                                                        true ;
                                                      }) &&  ({ /* cicili#Progn2673 */
                                                        (__h_match2666_1_arg  =  (head . __h_1_mem ) );
                                                        true ;
                                                      }) ) &&  (true  &&  (({ /* cicili#Progn2675 */
                                                          (wname  =  (__h_match2666_1_arg . __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn2677 */
                                                          (salary  =  (__h_match2666_1_arg . __h_1_mem ) );
                                                          true ;
                                                        }) ) ) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn2682 */
                                                    ({ /* cicili#Let2686 */
                                                      __auto_type match2685  = get_Cell_String (wname );
                                                      typeof((((match2685 . __h_data ). Just ). __h_0_mem )) name ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let2689 */
                                                        bool __h_case_result  = (true  &&  (((match2685 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2690 */
                                                              (name  =  (((match2685 . __h_data ). Just ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn2695 */
                                                            (fprintf (file , "(%d, '", id ) +  show_String (file , name ) +  fprintf (file , "', %d)", salary ) );
                                                          }) : ({ /* cicili#Let2699 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn2701 */
                                                              fprintf (file , "%d, but item is deleted in another version!", id );
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  }) : ({ /* cicili#Let2705 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn2707 */
                                                      0;
                                                    });
                                                  }));
                                              });
                                            }) +  fprintf (file , "%s", " ") );
                                        }) : ({ /* cicili#Let2711 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Progn2713 */
                                            ({ /* cicili#Let2720 */
                                              typeof((head . __h_0_mem )) id ;
                                              typeof((head . __h_1_mem )) __h_match2718_1_arg ;
                                              typeof((__h_match2718_1_arg . __h_0_mem )) wname ;
                                              typeof((__h_match2718_1_arg . __h_1_mem )) salary ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let2722 */
                                                bool __h_case_result  = (true  &&  ((({ /* cicili#Progn2723 */
                                                        (id  =  (head . __h_0_mem ) );
                                                        true ;
                                                      }) &&  ({ /* cicili#Progn2725 */
                                                        (__h_match2718_1_arg  =  (head . __h_1_mem ) );
                                                        true ;
                                                      }) ) &&  (true  &&  (({ /* cicili#Progn2727 */
                                                          (wname  =  (__h_match2718_1_arg . __h_0_mem ) );
                                                          true ;
                                                        }) &&  ({ /* cicili#Progn2729 */
                                                          (salary  =  (__h_match2718_1_arg . __h_1_mem ) );
                                                          true ;
                                                        }) ) ) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn2734 */
                                                    ({ /* cicili#Let2738 */
                                                      __auto_type match2737  = get_Cell_String (wname );
                                                      typeof((((match2737 . __h_data ). Just ). __h_0_mem )) name ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let2741 */
                                                        bool __h_case_result  = (true  &&  (((match2737 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2742 */
                                                              (name  =  (((match2737 . __h_data ). Just ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn2747 */
                                                            (fprintf (file , "(%d, '", id ) +  show_String (file , name ) +  fprintf (file , "', %d)", salary ) );
                                                          }) : ({ /* cicili#Let2751 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn2753 */
                                                              fprintf (file , "%d, but item is deleted in another version!", id );
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  }) : ({ /* cicili#Let2757 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn2759 */
                                                      0;
                                                    });
                                                  }));
                                              });
                                            });
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
                        }) +  show_List_BTree_int_User_pair_t (file , tail ) );
                    }) : ({ /* cicili#Let2770 */
                      // ----------
                      ;
                      ({ /* cicili#Progn2772 */
                        0;
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let2776 */
              // ----------
              ;
              ({ /* cicili#Progn2778 */
                0;
              });
            }));
        });
      });
    });
}
List_BTree_int_User_pair_t copy_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
  return ({ /* cicili#Let2783 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let2787 */
        __auto_type match2786  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match2786 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let2790 */
          bool __h_case_result  = (true  &&  (((match2786 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2791 */
                (unboxed  =  (((match2786 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2796 */
              ({ /* cicili#Let2800 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let2802 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn2803 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn2805 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2810 */
                      BoxedCons_BTree_int_User_pair_t (head , copy_List_BTree_int_User_pair_t (tail ));
                    }) : ({ /* cicili#Let2816 */
                      // ----------
                      ;
                      ({ /* cicili#Progn2818 */
                        BoxedNil_BTree_int_User_pair_t ();
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let2823 */
              // ----------
              ;
              ({ /* cicili#Progn2825 */
                BoxedNil_BTree_int_User_pair_t ();
              });
            }));
        });
      });
    });
}
List_BTree_int_User_pair_t replaceAt_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , BTree_int_User_pair_t item , size_t index ) {
  return ({ /* cicili#Let2831 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let2835 */
        __auto_type match2834  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match2834 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let2838 */
          bool __h_case_result  = (true  &&  (((match2834 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2839 */
                (unboxed  =  (((match2834 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2844 */
              ({ /* cicili#Let2848 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let2850 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn2851 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn2853 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) &&  (index  >  0 ) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2858 */
                      BoxedCons_BTree_int_User_pair_t (head , replaceAt_List_BTree_int_User_pair_t (tail , item , (index  -  1 )));
                    }) : ({ /* cicili#Let2864 */
                      // ----------
                      ;
                      ({ /* cicili#Progn2866 */
                        ({ /* cicili#Let2869 */
                          __auto_type __h_matchbox  = list ;
                          // ----------
                          ({ /* cicili#Let2873 */
                            __auto_type match2872  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                            typeof((((match2872 . __h_data ). Just ). __h_0_mem )) unboxed ;
                            // ----------
                            ;
                            ({ /* cicili#Let2876 */
                              bool __h_case_result  = (true  &&  (((match2872 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2877 */
                                    (unboxed  =  (((match2872 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* cicili#Progn2882 */
                                  ({ /* cicili#Let2886 */
                                    typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) taill ;
                                    // ----------
                                    ;
                                    ({ /* cicili#Let2888 */
                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn2889 */
                                            (taill  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn2894 */
                                          BoxedCons_BTree_int_User_pair_t (item , clone_Box_List_BTree_int_User_pair_t (taill ));
                                        }) : ({ /* cicili#Let2900 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Progn2902 */
                                            clone_Box_List_BTree_int_User_pair_t (list );
                                          });
                                        }));
                                    });
                                  });
                                }) : ({ /* cicili#Let2907 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Progn2909 */
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
            }) : ({ /* cicili#Let2914 */
              // ----------
              ;
              ({ /* cicili#Progn2916 */
                clone_Box_List_BTree_int_User_pair_t (list );
              });
            }));
        });
      });
    });
}
List_BTree_int_User_pair_t deleteAt_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , size_t index ) {
  return ({ /* cicili#Let2922 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let2926 */
        __auto_type match2925  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match2925 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let2929 */
          bool __h_case_result  = (true  &&  (((match2925 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2930 */
                (unboxed  =  (((match2925 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn2935 */
              ({ /* cicili#Let2939 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let2941 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn2942 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn2944 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) &&  (index  >  0 ) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn2949 */
                      BoxedCons_BTree_int_User_pair_t (head , deleteAt_List_BTree_int_User_pair_t (tail , (index  -  1 )));
                    }) : ({ /* cicili#Let2955 */
                      // ----------
                      ;
                      ({ /* cicili#Progn2957 */
                        ({ /* cicili#Let2960 */
                          __auto_type __h_matchbox  = list ;
                          // ----------
                          ({ /* cicili#Let2964 */
                            __auto_type match2963  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                            typeof((((match2963 . __h_data ). Just ). __h_0_mem )) unboxed ;
                            // ----------
                            ;
                            ({ /* cicili#Let2967 */
                              bool __h_case_result  = (true  &&  (((match2963 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn2968 */
                                    (unboxed  =  (((match2963 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* cicili#Progn2973 */
                                  ({ /* cicili#Let2977 */
                                    typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) taill ;
                                    // ----------
                                    ;
                                    ({ /* cicili#Let2979 */
                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn2980 */
                                            (taill  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn2985 */
                                          clone_Box_List_BTree_int_User_pair_t (taill );
                                        }) : ({ /* cicili#Let2990 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Progn2992 */
                                            clone_Box_List_BTree_int_User_pair_t (list );
                                          });
                                        }));
                                    });
                                  });
                                }) : ({ /* cicili#Let2997 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Progn2999 */
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
            }) : ({ /* cicili#Let3004 */
              // ----------
              ;
              ({ /* cicili#Progn3006 */
                clone_Box_List_BTree_int_User_pair_t (list );
              });
            }));
        });
      });
    });
}
List_BTree_int_User_pair_t insertAt_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , BTree_int_User_pair_t item , size_t index ) {
  return ({ /* cicili#Let3012 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let3016 */
        __auto_type match3015  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3015 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3019 */
          bool __h_case_result  = (true  &&  (((match3015 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3020 */
                (unboxed  =  (((match3015 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3025 */
              ({ /* cicili#Let3029 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let3031 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3032 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn3034 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) &&  (index  >  0 ) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3039 */
                      BoxedCons_BTree_int_User_pair_t (head , insertAt_List_BTree_int_User_pair_t (tail , item , (index  -  1 )));
                    }) : ({ /* cicili#Let3045 */
                      // ----------
                      ;
                      ({ /* cicili#Progn3047 */
                        BoxedCons_BTree_int_User_pair_t (item , clone_Box_List_BTree_int_User_pair_t (list ));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3053 */
              // ----------
              ;
              ({ /* cicili#Progn3055 */
                BoxedCons_BTree_int_User_pair_t (item , clone_Box_List_BTree_int_User_pair_t (list ));
              });
            }));
        });
      });
    });
}
List_BTree_int_User_pair_t replace_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , BTree_int_User_pair_t item , List_BTree_int_User_pair_t aimed ) {
  return ({ /* cicili#Let3063 */
      __auto_type match3062  = get_Box_List_BTree_int_User_pair_t (list );
      typeof((((match3062 . __h_data ). Just ). __h_0_mem )) listp ;
      // ----------
      ;
      ({ /* cicili#Let3066 */
        bool __h_case_result  = (true  &&  (((match3062 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3067 */
              (listp  =  (((match3062 . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3072 */
            ({ /* cicili#Let3076 */
              __auto_type match3075  = get_Box_List_BTree_int_User_pair_t (aimed );
              typeof((((match3075 . __h_data ). Just ). __h_0_mem )) aimedp ;
              // ----------
              ;
              ({ /* cicili#Let3079 */
                bool __h_case_result  = (true  &&  (((match3075 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3080 */
                      (aimedp  =  (((match3075 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn3085 */
                    ({ /* cicili#Let3089 */
                      typeof((((listp -> __h_data ). Cons ). __h_0_mem )) head ;
                      typeof((((listp -> __h_data ). Cons ). __h_1_mem )) tail ;
                      // ----------
                      ;
                      ({ /* cicili#Let3091 */
                        bool __h_case_result  = (true  &&  (((listp -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3092 */
                                  (head  =  (((listp -> __h_data ). Cons ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn3094 */
                                  (tail  =  (((listp -> __h_data ). Cons ). __h_1_mem ) );
                                  true ;
                                }) ) &&  (listp  !=  aimedp  ) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn3099 */
                            BoxedCons_BTree_int_User_pair_t (head , replace_List_BTree_int_User_pair_t (tail , item , aimed ));
                          }) : ({ /* cicili#Let3105 */
                            // ----------
                            ;
                            ({ /* cicili#Progn3107 */
                              ({ /* cicili#Let3111 */
                                typeof((((aimedp -> __h_data ). Cons ). __h_1_mem )) taill ;
                                // ----------
                                ;
                                ({ /* cicili#Let3113 */
                                  bool __h_case_result  = (true  &&  (((aimedp -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3114 */
                                        (taill  =  (((aimedp -> __h_data ). Cons ). __h_1_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn3119 */
                                      BoxedCons_BTree_int_User_pair_t (item , clone_Box_List_BTree_int_User_pair_t (taill ));
                                    }) : ({ /* cicili#Let3125 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn3127 */
                                        clone_Box_List_BTree_int_User_pair_t (list );
                                      });
                                    }));
                                });
                              });
                            });
                          }));
                      });
                    });
                  }) : ({ /* cicili#Let3132 */
                    // ----------
                    ;
                    ({ /* cicili#Progn3134 */
                      clone_Box_List_BTree_int_User_pair_t (list );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let3139 */
            // ----------
            ;
            ({ /* cicili#Progn3141 */
              clone_Box_List_BTree_int_User_pair_t (list );
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t delete_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , List_BTree_int_User_pair_t aimed ) {
  return ({ /* cicili#Let3148 */
      __auto_type match3147  = get_Box_List_BTree_int_User_pair_t (list );
      typeof((((match3147 . __h_data ). Just ). __h_0_mem )) listp ;
      // ----------
      ;
      ({ /* cicili#Let3151 */
        bool __h_case_result  = (true  &&  (((match3147 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3152 */
              (listp  =  (((match3147 . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3157 */
            ({ /* cicili#Let3161 */
              __auto_type match3160  = get_Box_List_BTree_int_User_pair_t (aimed );
              typeof((((match3160 . __h_data ). Just ). __h_0_mem )) aimedp ;
              // ----------
              ;
              ({ /* cicili#Let3164 */
                bool __h_case_result  = (true  &&  (((match3160 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3165 */
                      (aimedp  =  (((match3160 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn3170 */
                    ({ /* cicili#Let3174 */
                      typeof((((listp -> __h_data ). Cons ). __h_0_mem )) head ;
                      typeof((((listp -> __h_data ). Cons ). __h_1_mem )) tail ;
                      // ----------
                      ;
                      ({ /* cicili#Let3176 */
                        bool __h_case_result  = (true  &&  (((listp -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3177 */
                                  (head  =  (((listp -> __h_data ). Cons ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn3179 */
                                  (tail  =  (((listp -> __h_data ). Cons ). __h_1_mem ) );
                                  true ;
                                }) ) &&  (listp  !=  aimedp  ) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn3184 */
                            BoxedCons_BTree_int_User_pair_t (head , delete_List_BTree_int_User_pair_t (tail , aimed ));
                          }) : ({ /* cicili#Let3190 */
                            // ----------
                            ;
                            ({ /* cicili#Progn3192 */
                              ({ /* cicili#Let3196 */
                                typeof((((aimedp -> __h_data ). Cons ). __h_1_mem )) taill ;
                                // ----------
                                ;
                                ({ /* cicili#Let3198 */
                                  bool __h_case_result  = (true  &&  (((aimedp -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3199 */
                                        (taill  =  (((aimedp -> __h_data ). Cons ). __h_1_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn3204 */
                                      clone_Box_List_BTree_int_User_pair_t (taill );
                                    }) : ({ /* cicili#Let3209 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn3211 */
                                        clone_Box_List_BTree_int_User_pair_t (list );
                                      });
                                    }));
                                });
                              });
                            });
                          }));
                      });
                    });
                  }) : ({ /* cicili#Let3216 */
                    // ----------
                    ;
                    ({ /* cicili#Progn3218 */
                      clone_Box_List_BTree_int_User_pair_t (list );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let3223 */
            // ----------
            ;
            ({ /* cicili#Progn3225 */
              clone_Box_List_BTree_int_User_pair_t (list );
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t insert_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t llist , BTree_int_User_pair_t item , List_BTree_int_User_pair_t rlist ) {
  return ({ /* cicili#Let3232 */
      __auto_type match3231  = get_Box_List_BTree_int_User_pair_t (llist );
      typeof((((match3231 . __h_data ). Just ). __h_0_mem )) llistp ;
      // ----------
      ;
      ({ /* cicili#Let3235 */
        bool __h_case_result  = (true  &&  (((match3231 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3236 */
              (llistp  =  (((match3231 . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn3241 */
            ({ /* cicili#Let3245 */
              __auto_type match3244  = get_Box_List_BTree_int_User_pair_t (rlist );
              typeof((((match3244 . __h_data ). Just ). __h_0_mem )) rlistp ;
              // ----------
              ;
              ({ /* cicili#Let3248 */
                bool __h_case_result  = (true  &&  (((match3244 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3249 */
                      (rlistp  =  (((match3244 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn3254 */
                    ({ /* cicili#Let3258 */
                      typeof((((llistp -> __h_data ). Cons ). __h_0_mem )) head ;
                      typeof((((llistp -> __h_data ). Cons ). __h_1_mem )) tail ;
                      // ----------
                      ;
                      ({ /* cicili#Let3260 */
                        bool __h_case_result  = (true  &&  (((llistp -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn3261 */
                                  (head  =  (((llistp -> __h_data ). Cons ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn3263 */
                                  (tail  =  (((llistp -> __h_data ). Cons ). __h_1_mem ) );
                                  true ;
                                }) ) &&  (llistp  !=  rlistp  ) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn3268 */
                            BoxedCons_BTree_int_User_pair_t (head , insert_List_BTree_int_User_pair_t (tail , item , rlist ));
                          }) : ({ /* cicili#Let3274 */
                            // ----------
                            ;
                            ({ /* cicili#Progn3276 */
                              BoxedCons_BTree_int_User_pair_t (item , clone_Box_List_BTree_int_User_pair_t (rlist ));
                            });
                          }));
                      });
                    });
                  }) : ({ /* cicili#Let3282 */
                    // ----------
                    ;
                    ({ /* cicili#Progn3284 */
                      ({ /* cicili#Let3287 */
                        __auto_type nil_item  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let3289 */
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
          }) : ({ /* cicili#Let3296 */
            // ----------
            ;
            ({ /* cicili#Progn3298 */
              BoxedCons_BTree_int_User_pair_t (item , clone_Box_List_BTree_int_User_pair_t (rlist ));
            });
          }));
      });
    });
}
List_BTree_int_User_pair_t reverse_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
  List_BTree_int_User_pair_t _reverse (List_BTree_int_User_pair_t list , List_BTree_int_User_pair_t rlist ) {
    return ({ /* cicili#Let3306 */
        __auto_type __h_matchbox  = list ;
        // ----------
        ({ /* cicili#Let3310 */
          __auto_type match3309  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match3309 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let3313 */
            bool __h_case_result  = (true  &&  (((match3309 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3314 */
                  (unboxed  =  (((match3309 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn3319 */
                ({ /* cicili#Let3323 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  ;
                  ({ /* cicili#Let3325 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3326 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn3328 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn3333 */
                        _reverse (tail , BoxedCons_BTree_int_User_pair_t (head , rlist ));
                      }) : ({ /* cicili#Let3338 */
                        // ----------
                        ;
                        ({ /* cicili#Progn3340 */
                          clone_Box_List_BTree_int_User_pair_t (rlist );
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let3345 */
                // ----------
                ;
                ({ /* cicili#Progn3347 */
                  clone_Box_List_BTree_int_User_pair_t (rlist );
                });
              }));
          });
        });
      });
  }
  return ({ /* cicili#Let3351 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let3355 */
        __auto_type match3354  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3354 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3358 */
          bool __h_case_result  = (true  &&  (((match3354 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3359 */
                (unboxed  =  (((match3354 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3364 */
              ({ /* cicili#Let3368 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let3370 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3371 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn3373 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3378 */
                      _reverse (tail , BoxedCons_BTree_int_User_pair_t (head , BoxedNil_BTree_int_User_pair_t ()));
                    }) : ({ /* cicili#Let3384 */
                      // ----------
                      ;
                      ({ /* cicili#Progn3386 */
                        clone_Box_List_BTree_int_User_pair_t (list );
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3391 */
              // ----------
              ;
              ({ /* cicili#Progn3393 */
                clone_Box_List_BTree_int_User_pair_t (list );
              });
            }));
        });
      });
    });
}
List_BTree_int_User_pair_t append_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t llist , List_BTree_int_User_pair_t rlist ) {
  return ({ /* cicili#Let3399 */
      __auto_type __h_matchbox  = llist ;
      // ----------
      ({ /* cicili#Let3403 */
        __auto_type match3402  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3402 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3406 */
          bool __h_case_result  = (true  &&  (((match3402 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3407 */
                (unboxed  =  (((match3402 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3412 */
              ({ /* cicili#Let3416 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let3418 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3419 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn3421 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3426 */
                      BoxedCons_BTree_int_User_pair_t (head , append_List_BTree_int_User_pair_t (tail , rlist ));
                    }) : ({ /* cicili#Let3432 */
                      // ----------
                      ;
                      ({ /* cicili#Progn3434 */
                        clone_Box_List_BTree_int_User_pair_t (rlist );
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3439 */
              // ----------
              ;
              ({ /* cicili#Progn3441 */
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
  return (((len  <=  0 )) ? BoxedNil_BTree_int_User_pair_t () : ({ /* cicili#Let3453 */
        __auto_type __h_matchbox  = list ;
        // ----------
        ({ /* cicili#Let3457 */
          __auto_type match3456  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match3456 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let3460 */
            bool __h_case_result  = (true  &&  (((match3456 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3461 */
                  (unboxed  =  (((match3456 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn3466 */
                ({ /* cicili#Let3470 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  ;
                  ({ /* cicili#Let3472 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3473 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn3475 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn3480 */
                        BoxedCons_BTree_int_User_pair_t (head , take_List_BTree_int_User_pair_t ((--len ), tail ));
                      }) : ({ /* cicili#Let3486 */
                        // ----------
                        ;
                        ({ /* cicili#Progn3488 */
                          BoxedNil_BTree_int_User_pair_t ();
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let3493 */
                // ----------
                ;
                ({ /* cicili#Progn3495 */
                  BoxedNil_BTree_int_User_pair_t ();
                });
              }));
          });
        });
      }));
}
List_BTree_int_User_pair_t last_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
  return ({ /* cicili#Let3501 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let3505 */
        __auto_type match3504  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3504 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3508 */
          bool __h_case_result  = (true  &&  (((match3504 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3509 */
                (unboxed  =  (((match3504 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3514 */
              ({ /* cicili#Let3518 */
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let3520 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3521 */
                        (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3526 */
                      ({ /* cicili#Let3529 */
                        __auto_type __h_matchbox  = tail ;
                        // ----------
                        ({ /* cicili#Let3533 */
                          __auto_type match3532  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                          typeof((((match3532 . __h_data ). Just ). __h_0_mem )) unboxed ;
                          // ----------
                          ;
                          ({ /* cicili#Let3536 */
                            bool __h_case_result  = (true  &&  (((match3532 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3537 */
                                  (unboxed  =  (((match3532 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn3542 */
                                ({ /* cicili#Let3546 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Let3548 */
                                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Nil_t  ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn3552 */
                                        clone_Box_List_BTree_int_User_pair_t (list );
                                      }) : ({ /* cicili#Let3557 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn3559 */
                                          last_List_BTree_int_User_pair_t (tail );
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let3564 */
                                // ----------
                                ;
                                ({ /* cicili#Progn3566 */
                                  clone_Box_List_BTree_int_User_pair_t (list );
                                });
                              }));
                          });
                        });
                      });
                    }) : ({ /* cicili#Let3571 */
                      // ----------
                      ;
                      ({ /* cicili#Progn3573 */
                        clone_Box_List_BTree_int_User_pair_t (list );
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3578 */
              // ----------
              ;
              ({ /* cicili#Progn3580 */
                clone_Box_List_BTree_int_User_pair_t (list );
              });
            }));
        });
      });
    });
}
List_BTree_int_User_pair_t init_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
  return ({ /* cicili#Let3586 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let3590 */
        __auto_type match3589  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3589 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3593 */
          bool __h_case_result  = (true  &&  (((match3589 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3594 */
                (unboxed  =  (((match3589 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3599 */
              ({ /* cicili#Let3603 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let3605 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3606 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn3608 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3613 */
                      ({ /* cicili#Let3616 */
                        __auto_type __h_matchbox  = tail ;
                        // ----------
                        ({ /* cicili#Let3620 */
                          __auto_type match3619  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                          typeof((((match3619 . __h_data ). Just ). __h_0_mem )) unboxed ;
                          // ----------
                          ;
                          ({ /* cicili#Let3623 */
                            bool __h_case_result  = (true  &&  (((match3619 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3624 */
                                  (unboxed  =  (((match3619 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn3629 */
                                ({ /* cicili#Let3633 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Let3635 */
                                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Cons_t  ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn3639 */
                                        BoxedCons_BTree_int_User_pair_t (head , init_List_BTree_int_User_pair_t (tail ));
                                      }) : ({ /* cicili#Let3645 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn3647 */
                                          BoxedNil_BTree_int_User_pair_t ();
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let3652 */
                                // ----------
                                ;
                                ({ /* cicili#Progn3654 */
                                  BoxedNil_BTree_int_User_pair_t ();
                                });
                              }));
                          });
                        });
                      });
                    }) : ({ /* cicili#Let3659 */
                      // ----------
                      ;
                      ({ /* cicili#Progn3661 */
                        BoxedNil_BTree_int_User_pair_t ();
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3666 */
              // ----------
              ;
              ({ /* cicili#Progn3668 */
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
  return (((len  <=  0 )) ? clone_Box_List_BTree_int_User_pair_t (list ) : ({ /* cicili#Let3679 */
        __auto_type __h_matchbox  = list ;
        // ----------
        ({ /* cicili#Let3683 */
          __auto_type match3682  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match3682 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let3686 */
            bool __h_case_result  = (true  &&  (((match3682 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3687 */
                  (unboxed  =  (((match3682 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn3692 */
                ({ /* cicili#Let3696 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  ;
                  ({ /* cicili#Let3698 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3699 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn3704 */
                        drop_List_BTree_int_User_pair_t ((--len ), tail );
                      }) : ({ /* cicili#Let3709 */
                        // ----------
                        ;
                        ({ /* cicili#Progn3711 */
                          clone_Box_List_BTree_int_User_pair_t (list );
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let3716 */
                // ----------
                ;
                ({ /* cicili#Progn3718 */
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
  return ({ /* cicili#Let3728 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let3732 */
        __auto_type match3731  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3731 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3735 */
          bool __h_case_result  = (true  &&  (((match3731 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3736 */
                (unboxed  =  (((match3731 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3741 */
              ({ /* cicili#Let3745 */
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let3747 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3748 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) &&  (index  >  0 ) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3753 */
                      nthcdr_List_BTree_int_User_pair_t ((--index ), tail );
                    }) : ({ /* cicili#Let3758 */
                      // ----------
                      ;
                      ({ /* cicili#Progn3760 */
                        list ;
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3764 */
              // ----------
              ;
              ({ /* cicili#Progn3766 */
                list ;
              });
            }));
        });
      });
    });
}
Maybe_BTree_int_User_pair_t nth_List_BTree_int_User_pair_t (size_t index , List_BTree_int_User_pair_t list ) {
  return ({ /* cicili#Let3772 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let3776 */
        __auto_type match3775  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3775 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3779 */
          bool __h_case_result  = (true  &&  (((match3775 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3780 */
                (unboxed  =  (((match3775 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3785 */
              ({ /* cicili#Let3789 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let3791 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn3792 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn3794 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3799 */
                      (((index  ==  0 )) ? Just_BTree_int_User_pair_t (head ) : (((index  <  0 )) ? Nothing_BTree_int_User_pair_t () : nth_List_BTree_int_User_pair_t ((--index ), tail )));
                    }) : ({ /* cicili#Let3808 */
                      // ----------
                      ;
                      ({ /* cicili#Progn3810 */
                        Nothing_BTree_int_User_pair_t ();
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3815 */
              // ----------
              ;
              ({ /* cicili#Progn3817 */
                Nothing_BTree_int_User_pair_t ();
              });
            }));
        });
      });
    });
}
size_t hasLen_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list , size_t desired ) {
  return ({ /* cicili#Let3823 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let3827 */
        __auto_type match3826  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3826 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3830 */
          bool __h_case_result  = (true  &&  (((match3826 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3831 */
                (unboxed  =  (((match3826 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3836 */
              ({ /* cicili#Let3840 */
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let3842 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3843 */
                        (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3848 */
                      (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_BTree_int_User_pair_t (tail , (--desired )) ));
                    }) : ({ /* cicili#Let3854 */
                      // ----------
                      ;
                      ({ /* cicili#Progn3856 */
                        0;
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3860 */
              // ----------
              ;
              ({ /* cicili#Progn3862 */
                0;
              });
            }));
        });
      });
    });
}
size_t len_List_BTree_int_User_pair_t (List_BTree_int_User_pair_t list ) {
  return ({ /* cicili#Let3867 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let3871 */
        __auto_type match3870  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match3870 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let3874 */
          bool __h_case_result  = (true  &&  (((match3870 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn3875 */
                (unboxed  =  (((match3870 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn3880 */
              ({ /* cicili#Let3884 */
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let3886 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3887 */
                        (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn3892 */
                      (1 +  len_List_BTree_int_User_pair_t (tail ) );
                    }) : ({ /* cicili#Let3897 */
                      // ----------
                      ;
                      ({ /* cicili#Progn3899 */
                        0;
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let3903 */
              // ----------
              ;
              ({ /* cicili#Progn3905 */
                0;
              });
            }));
        });
      });
    });
}
void free_List_BTree_int_User_pair_t_x (List_BTree_int_User_pair_t_x * this_ptr ) {
  { /* cicili#Let3909 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let3915 */
      typeof((((this -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let3917 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn3918 */
              (tail  =  (((this -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block3924 */
            { /* cicili#Block3926 */
              free (this );
              free_Box_List_BTree_int_User_pair_t ((&tail ));
            }
          }
        else
          { /* cicili#Let3934 */
            // ----------
            ;
            ({ /* cicili#Let3936 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Nil_t  ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block3941 */
                  { /* cicili#Block3943 */
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
  { /* cicili#Let3954 */
    List_BTree_int_User_pair_t_x instance  = malloc (sizeof(class_List_BTree_int_User_pair_t));
    // ----------
    (*instance ) = ((class_List_BTree_int_User_pair_t){ get_List_BTree_int_User_pair_t__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return new_Box_List_BTree_int_User_pair_t (instance );
  }
}
List_BTree_int_User_pair_t BoxedNil_BTree_int_User_pair_t () {
  { /* cicili#Let3961 */
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
  { /* cicili#Let3979 */
    Maybe_List_BTree_int_User_pair_t instance  = ((Maybe_List_BTree_int_User_pair_t){ get_Maybe_List_BTree_int_User_pair_t__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_BTree_int_User_pair_t Nothing_List_BTree_int_User_pair_t () {
  { /* cicili#Let3984 */
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
  { /* cicili#Let4004 */
    Maybe_BTree_int_User instance  = ((Maybe_BTree_int_User){ get_Maybe_BTree_int_User__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_BTree_int_User Nothing_BTree_int_User () {
  { /* cicili#Let4009 */
    Maybe_BTree_int_User instance  = ((Maybe_BTree_int_User){ get_Maybe_BTree_int_User__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_BTree_int_User__H_IMPL__ */ 
#ifndef __Rc_BTree_int_User__H_IMPL__
#define __Rc_BTree_int_User__H_IMPL__
Rc_BTree_int_User new_Rc_BTree_int_User (BTree_int_User pointer ) {
  return ({ /* cicili#Let4016 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      __auto_type holder  = ((BTree_int_User *)malloc (sizeof(BTree_int_User *)));
      // ----------
      (*count ) = 1;
      (*holder ) = pointer ;
      __h_Hold_BTree_int_User (holder , count , ((size_t)pointer ));
    });
}
Rc_BTree_int_User clone_Rc_BTree_int_User (Rc_BTree_int_User rc ) {
  return ({ /* cicili#Let4025 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let4027 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn4028 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4030 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn4032 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4037 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Progn4040 */
                (++(*count ));
                __h_Hold_BTree_int_User (pointer , count , address );
              }) : Gone_BTree_int_User ());
          }) : ({ /* cicili#Let4046 */
            // ----------
            ;
            ({ /* cicili#Progn4048 */
              Gone_BTree_int_User ();
            });
          }));
      });
    });
}
Maybe_BTree_int_User take_Rc_BTree_int_User (Rc_BTree_int_User * this ) {
  return ({ /* cicili#Let4056 */
      typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let4058 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn4059 */
                  (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4061 */
                  (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn4063 */
                (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4068 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Let4072 */
                __auto_type result  = Just_BTree_int_User ((*pointer ));
                // ----------
                if ((*count ) >=  1 )
                  { /* cicili#Block4078 */
                    (*count ) = 0;
                    (*pointer ) = NULL ;
                  }
                result ;
              }) : Nothing_BTree_int_User ());
          }) : ({ /* cicili#Let4083 */
            // ----------
            ;
            ({ /* cicili#Progn4085 */
              Nothing_BTree_int_User ();
            });
          }));
      });
    });
}
Maybe_BTree_int_User get_Rc_BTree_int_User (Rc_BTree_int_User rc ) {
  return ({ /* cicili#Let4093 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let4095 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn4096 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4098 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn4100 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4105 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) >  0 ) )) ? Just_BTree_int_User ((*pointer )) : Nothing_BTree_int_User ());
          }) : ({ /* cicili#Let4112 */
            // ----------
            ;
            ({ /* cicili#Progn4114 */
              Nothing_BTree_int_User ();
            });
          }));
      });
    });
}
void free_Rc_BTree_int_User (Rc_BTree_int_User * this ) {
  { /* cicili#Let4123 */
    typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
    typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
    // ----------
    ;
    ({ /* cicili#Let4125 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn4126 */
                (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn4128 */
                (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                true ;
              }) ) &&  ({ /* cicili#Progn4130 */
              (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block4136 */
          if (((*count ) ==  0 ) &&  ((*pointer ) ==  NULL  ) )
            { /* cicili#Block4139 */
              free (((void *)count ));
              free (((void *)pointer ));
              (*this ) = Gone_BTree_int_User ();
            }
          else
            {
            if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
              { /* cicili#Block4147 */
                if ((*count ) ==  1 )
                  { /* cicili#Block4150 */
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
        { /* cicili#Let4160 */
          // ----------
          ;
          ({ /* cicili#Let4162 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Gone_t  ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block4167 */
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
  { /* cicili#Let4178 */
    Rc_BTree_int_User instance  = ((Rc_BTree_int_User){ get_Rc_BTree_int_User__H_Table (), __h_Hold_t , .__h_data.Hold = { pointer , count , address }});
    // ----------
    return instance ;
  }
}
Rc_BTree_int_User Gone_BTree_int_User () {
  { /* cicili#Let4183 */
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
  { /* cicili#Let4201 */
    Maybe_Rc_BTree_int_User instance  = ((Maybe_Rc_BTree_int_User){ get_Maybe_Rc_BTree_int_User__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_Rc_BTree_int_User Nothing_Rc_BTree_int_User () {
  { /* cicili#Let4206 */
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
  { /* cicili#Let4226 */
    Maybe_List_Rc_BTree_int_User_x instance  = ((Maybe_List_Rc_BTree_int_User_x){ get_Maybe_List_Rc_BTree_int_User_x__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_Rc_BTree_int_User_x Nothing_List_Rc_BTree_int_User_x () {
  { /* cicili#Let4231 */
    Maybe_List_Rc_BTree_int_User_x instance  = ((Maybe_List_Rc_BTree_int_User_x){ get_Maybe_List_Rc_BTree_int_User_x__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_Rc_BTree_int_User_x__H_IMPL__ */ 
#ifndef __Box_List_Rc_BTree_int_User__H_IMPL__
#define __Box_List_Rc_BTree_int_User__H_IMPL__
Box_List_Rc_BTree_int_User new_Box_List_Rc_BTree_int_User (List_Rc_BTree_int_User_x pointer ) {
  return ({ /* cicili#Let4238 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      __auto_type holder  = ((List_Rc_BTree_int_User_x *)malloc (sizeof(List_Rc_BTree_int_User_x *)));
      // ----------
      (*count ) = 1;
      (*holder ) = pointer ;
      __h_Hold_List_Rc_BTree_int_User_x (holder , count , ((size_t)pointer ));
    });
}
Box_List_Rc_BTree_int_User clone_Box_List_Rc_BTree_int_User (Box_List_Rc_BTree_int_User rc ) {
  return ({ /* cicili#Let4247 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let4249 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn4250 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4252 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn4254 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4259 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Progn4262 */
                (++(*count ));
                __h_Hold_List_Rc_BTree_int_User_x (pointer , count , address );
              }) : Gone_List_Rc_BTree_int_User_x ());
          }) : ({ /* cicili#Let4268 */
            // ----------
            ;
            ({ /* cicili#Progn4270 */
              Gone_List_Rc_BTree_int_User_x ();
            });
          }));
      });
    });
}
Maybe_List_Rc_BTree_int_User_x take_Box_List_Rc_BTree_int_User (Box_List_Rc_BTree_int_User * this ) {
  return ({ /* cicili#Let4278 */
      typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let4280 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn4281 */
                  (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4283 */
                  (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn4285 */
                (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4290 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) )) ? ({ /* cicili#Let4294 */
                __auto_type result  = Just_List_Rc_BTree_int_User_x ((*pointer ));
                // ----------
                if ((*count ) >=  1 )
                  { /* cicili#Block4300 */
                    (*count ) = 0;
                    (*pointer ) = NULL ;
                  }
                result ;
              }) : Nothing_List_Rc_BTree_int_User_x ());
          }) : ({ /* cicili#Let4305 */
            // ----------
            ;
            ({ /* cicili#Progn4307 */
              Nothing_List_Rc_BTree_int_User_x ();
            });
          }));
      });
    });
}
Maybe_List_Rc_BTree_int_User_x get_Box_List_Rc_BTree_int_User (Box_List_Rc_BTree_int_User rc ) {
  return ({ /* cicili#Let4315 */
      typeof((((rc . __h_data ). Hold ). __h_0_mem )) pointer ;
      typeof((((rc . __h_data ). Hold ). __h_1_mem )) count ;
      typeof((((rc . __h_data ). Hold ). __h_2_mem )) address ;
      // ----------
      ;
      ({ /* cicili#Let4317 */
        bool __h_case_result  = (true  &&  (((rc . __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn4318 */
                  (pointer  =  (((rc . __h_data ). Hold ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn4320 */
                  (count  =  (((rc . __h_data ). Hold ). __h_1_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn4322 */
                (address  =  (((rc . __h_data ). Hold ). __h_2_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4327 */
            (((pointer  &&  (((size_t)(*pointer )) ==  address  ) &&  ((*count ) >  0 ) )) ? Just_List_Rc_BTree_int_User_x ((*pointer )) : Nothing_List_Rc_BTree_int_User_x ());
          }) : ({ /* cicili#Let4334 */
            // ----------
            ;
            ({ /* cicili#Progn4336 */
              Nothing_List_Rc_BTree_int_User_x ();
            });
          }));
      });
    });
}
void free_Box_List_Rc_BTree_int_User (Box_List_Rc_BTree_int_User * this ) {
  { /* cicili#Let4345 */
    typeof((((this -> __h_data ). Hold ). __h_0_mem )) pointer ;
    typeof((((this -> __h_data ). Hold ). __h_1_mem )) count ;
    typeof((((this -> __h_data ). Hold ). __h_2_mem )) address ;
    // ----------
    ;
    ({ /* cicili#Let4347 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Hold_t  ) &&  ((({ /* cicili#Progn4348 */
                (pointer  =  (((this -> __h_data ). Hold ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn4350 */
                (count  =  (((this -> __h_data ). Hold ). __h_1_mem ) );
                true ;
              }) ) &&  ({ /* cicili#Progn4352 */
              (address  =  (((this -> __h_data ). Hold ). __h_2_mem ) );
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block4358 */
          if (((*count ) ==  0 ) &&  ((*pointer ) ==  NULL  ) )
            { /* cicili#Block4361 */
              free (((void *)count ));
              free (((void *)pointer ));
              (*this ) = Gone_List_Rc_BTree_int_User_x ();
            }
          else
            {
            if (pointer  &&  (((size_t)(*pointer )) ==  address  ) )
              { /* cicili#Block4369 */
                if ((*count ) ==  1 )
                  { /* cicili#Block4372 */
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
        { /* cicili#Let4382 */
          // ----------
          ;
          ({ /* cicili#Let4384 */
            bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Gone_t  ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block4389 */
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
  { /* cicili#Let4400 */
    Box_List_Rc_BTree_int_User instance  = ((Box_List_Rc_BTree_int_User){ get_Box_List_Rc_BTree_int_User__H_Table (), __h_Hold_t , .__h_data.Hold = { pointer , count , address }});
    // ----------
    return instance ;
  }
}
Box_List_Rc_BTree_int_User Gone_List_Rc_BTree_int_User_x () {
  { /* cicili#Let4405 */
    Box_List_Rc_BTree_int_User instance  = ((Box_List_Rc_BTree_int_User){ get_Box_List_Rc_BTree_int_User__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Box_List_Rc_BTree_int_User__H_IMPL__ */ 
Rc_BTree_int_User * toArray_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
  Rc_BTree_int_User * array (List_Rc_BTree_int_User list , size_t count ) {
    return ({ /* cicili#Let4412 */
        __auto_type __h_matchbox  = list ;
        // ----------
        ({ /* cicili#Let4416 */
          __auto_type match4415  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match4415 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let4419 */
            bool __h_case_result  = (true  &&  (((match4415 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4420 */
                  (unboxed  =  (((match4415 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn4425 */
                ({ /* cicili#Let4429 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  ;
                  ({ /* cicili#Let4431 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn4432 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn4434 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn4439 */
                        ({ /* cicili#Let4441 */
                          Rc_BTree_int_User * arr  = array (tail , (count  +  1 ));
                          // ----------
                          arr [count ] = head ;
                          arr ;
                        });
                      }) : ({ /* cicili#Let4445 */
                        // ----------
                        ;
                        ({ /* cicili#Progn4447 */
                          ((Rc_BTree_int_User *)calloc (count , sizeof(Rc_BTree_int_User)));
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let4451 */
                // ----------
                ;
                ({ /* cicili#Progn4453 */
                  ((Rc_BTree_int_User *)calloc (count , sizeof(Rc_BTree_int_User)));
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
  return (((buf  ==  NULL  )) ? BoxedNil_Rc_BTree_int_User () : ({ /* cicili#Let4464 */
        Rc_BTree_int_User item  = (*buf );
        // ----------
        (((len  ==  0 )) ? BoxedNil_Rc_BTree_int_User () : BoxedCons_Rc_BTree_int_User (item , pure_List_Rc_BTree_int_User ((++buf ), (--len ))));
      }));
}
size_t show_List_Rc_BTree_int_User (CFile file , List_Rc_BTree_int_User list ) {
  return ({ /* cicili#Let4473 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let4477 */
        __auto_type match4476  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match4476 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let4480 */
          bool __h_case_result  = (true  &&  (((match4476 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4481 */
                (unboxed  =  (((match4476 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn4486 */
              ({ /* cicili#Let4490 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let4492 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn4493 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn4495 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn4500 */
                      (({ /* cicili#Let4503 */
                          __auto_type __h_matchbox  = tail ;
                          // ----------
                          ({ /* cicili#Let4507 */
                            __auto_type match4506  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                            typeof((((match4506 . __h_data ). Just ). __h_0_mem )) unboxed ;
                            // ----------
                            ;
                            ({ /* cicili#Let4510 */
                              bool __h_case_result  = (true  &&  (((match4506 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4511 */
                                    (unboxed  =  (((match4506 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* cicili#Progn4516 */
                                  ({ /* cicili#Let4520 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Let4522 */
                                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Cons_t  ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn4526 */
                                          (({ /* cicili#Let4534 */
                                              __auto_type match4533  = get_Rc_BTree_int_User (head );
                                              typeof((((match4533 . __h_data ). Just ). __h_0_mem )) child ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let4537 */
                                                bool __h_case_result  = (true  &&  (((match4533 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4538 */
                                                      (child  =  (((match4533 . __h_data ). Just ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn4543 */
                                                    show_BTree_int_User (file , child );
                                                  }) : ({ /* cicili#Let4548 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn4550 */
                                                      0;
                                                    });
                                                  }));
                                              });
                                            }) +  fprintf (file , "%s", " ") );
                                        }) : ({ /* cicili#Let4554 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Progn4556 */
                                            ({ /* cicili#Let4564 */
                                              __auto_type match4563  = get_Rc_BTree_int_User (head );
                                              typeof((((match4563 . __h_data ). Just ). __h_0_mem )) child ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let4567 */
                                                bool __h_case_result  = (true  &&  (((match4563 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4568 */
                                                      (child  =  (((match4563 . __h_data ). Just ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn4573 */
                                                    show_BTree_int_User (file , child );
                                                  }) : ({ /* cicili#Let4578 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn4580 */
                                                      0;
                                                    });
                                                  }));
                                              });
                                            });
                                          });
                                        }));
                                    });
                                  });
                                }) : ({ /* cicili#Let4584 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Progn4586 */
                                    0;
                                  });
                                }));
                            });
                          });
                        }) +  show_List_Rc_BTree_int_User (file , tail ) );
                    }) : ({ /* cicili#Let4591 */
                      // ----------
                      ;
                      ({ /* cicili#Progn4593 */
                        0;
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let4597 */
              // ----------
              ;
              ({ /* cicili#Progn4599 */
                0;
              });
            }));
        });
      });
    });
}
List_Rc_BTree_int_User copy_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
  return ({ /* cicili#Let4604 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let4608 */
        __auto_type match4607  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match4607 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let4611 */
          bool __h_case_result  = (true  &&  (((match4607 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4612 */
                (unboxed  =  (((match4607 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn4617 */
              ({ /* cicili#Let4621 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let4623 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn4624 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn4626 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn4631 */
                      BoxedCons_Rc_BTree_int_User (head , copy_List_Rc_BTree_int_User (tail ));
                    }) : ({ /* cicili#Let4637 */
                      // ----------
                      ;
                      ({ /* cicili#Progn4639 */
                        BoxedNil_Rc_BTree_int_User ();
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let4644 */
              // ----------
              ;
              ({ /* cicili#Progn4646 */
                BoxedNil_Rc_BTree_int_User ();
              });
            }));
        });
      });
    });
}
List_Rc_BTree_int_User replaceAt_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , Rc_BTree_int_User item , size_t index ) {
  return ({ /* cicili#Let4652 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let4656 */
        __auto_type match4655  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match4655 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let4659 */
          bool __h_case_result  = (true  &&  (((match4655 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4660 */
                (unboxed  =  (((match4655 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn4665 */
              ({ /* cicili#Let4669 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let4671 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn4672 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn4674 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) &&  (index  >  0 ) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn4679 */
                      BoxedCons_Rc_BTree_int_User (head , replaceAt_List_Rc_BTree_int_User (tail , item , (index  -  1 )));
                    }) : ({ /* cicili#Let4685 */
                      // ----------
                      ;
                      ({ /* cicili#Progn4687 */
                        ({ /* cicili#Let4690 */
                          __auto_type __h_matchbox  = list ;
                          // ----------
                          ({ /* cicili#Let4694 */
                            __auto_type match4693  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                            typeof((((match4693 . __h_data ). Just ). __h_0_mem )) unboxed ;
                            // ----------
                            ;
                            ({ /* cicili#Let4697 */
                              bool __h_case_result  = (true  &&  (((match4693 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4698 */
                                    (unboxed  =  (((match4693 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* cicili#Progn4703 */
                                  ({ /* cicili#Let4707 */
                                    typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) taill ;
                                    // ----------
                                    ;
                                    ({ /* cicili#Let4709 */
                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn4710 */
                                            (taill  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn4715 */
                                          BoxedCons_Rc_BTree_int_User (item , clone_Box_List_Rc_BTree_int_User (taill ));
                                        }) : ({ /* cicili#Let4721 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Progn4723 */
                                            clone_Box_List_Rc_BTree_int_User (list );
                                          });
                                        }));
                                    });
                                  });
                                }) : ({ /* cicili#Let4728 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Progn4730 */
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
            }) : ({ /* cicili#Let4735 */
              // ----------
              ;
              ({ /* cicili#Progn4737 */
                clone_Box_List_Rc_BTree_int_User (list );
              });
            }));
        });
      });
    });
}
List_Rc_BTree_int_User deleteAt_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , size_t index ) {
  return ({ /* cicili#Let4743 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let4747 */
        __auto_type match4746  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match4746 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let4750 */
          bool __h_case_result  = (true  &&  (((match4746 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4751 */
                (unboxed  =  (((match4746 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn4756 */
              ({ /* cicili#Let4760 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let4762 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn4763 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn4765 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) &&  (index  >  0 ) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn4770 */
                      BoxedCons_Rc_BTree_int_User (head , deleteAt_List_Rc_BTree_int_User (tail , (index  -  1 )));
                    }) : ({ /* cicili#Let4776 */
                      // ----------
                      ;
                      ({ /* cicili#Progn4778 */
                        ({ /* cicili#Let4781 */
                          __auto_type __h_matchbox  = list ;
                          // ----------
                          ({ /* cicili#Let4785 */
                            __auto_type match4784  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                            typeof((((match4784 . __h_data ). Just ). __h_0_mem )) unboxed ;
                            // ----------
                            ;
                            ({ /* cicili#Let4788 */
                              bool __h_case_result  = (true  &&  (((match4784 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4789 */
                                    (unboxed  =  (((match4784 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* cicili#Progn4794 */
                                  ({ /* cicili#Let4798 */
                                    typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) taill ;
                                    // ----------
                                    ;
                                    ({ /* cicili#Let4800 */
                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn4801 */
                                            (taill  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn4806 */
                                          clone_Box_List_Rc_BTree_int_User (taill );
                                        }) : ({ /* cicili#Let4811 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Progn4813 */
                                            clone_Box_List_Rc_BTree_int_User (list );
                                          });
                                        }));
                                    });
                                  });
                                }) : ({ /* cicili#Let4818 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Progn4820 */
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
            }) : ({ /* cicili#Let4825 */
              // ----------
              ;
              ({ /* cicili#Progn4827 */
                clone_Box_List_Rc_BTree_int_User (list );
              });
            }));
        });
      });
    });
}
List_Rc_BTree_int_User insertAt_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , Rc_BTree_int_User item , size_t index ) {
  return ({ /* cicili#Let4833 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let4837 */
        __auto_type match4836  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match4836 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let4840 */
          bool __h_case_result  = (true  &&  (((match4836 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4841 */
                (unboxed  =  (((match4836 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn4846 */
              ({ /* cicili#Let4850 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let4852 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn4853 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn4855 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) &&  (index  >  0 ) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn4860 */
                      BoxedCons_Rc_BTree_int_User (head , insertAt_List_Rc_BTree_int_User (tail , item , (index  -  1 )));
                    }) : ({ /* cicili#Let4866 */
                      // ----------
                      ;
                      ({ /* cicili#Progn4868 */
                        BoxedCons_Rc_BTree_int_User (item , clone_Box_List_Rc_BTree_int_User (list ));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let4874 */
              // ----------
              ;
              ({ /* cicili#Progn4876 */
                BoxedCons_Rc_BTree_int_User (item , clone_Box_List_Rc_BTree_int_User (list ));
              });
            }));
        });
      });
    });
}
List_Rc_BTree_int_User replace_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , Rc_BTree_int_User item , List_Rc_BTree_int_User aimed ) {
  return ({ /* cicili#Let4884 */
      __auto_type match4883  = get_Box_List_Rc_BTree_int_User (list );
      typeof((((match4883 . __h_data ). Just ). __h_0_mem )) listp ;
      // ----------
      ;
      ({ /* cicili#Let4887 */
        bool __h_case_result  = (true  &&  (((match4883 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4888 */
              (listp  =  (((match4883 . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4893 */
            ({ /* cicili#Let4897 */
              __auto_type match4896  = get_Box_List_Rc_BTree_int_User (aimed );
              typeof((((match4896 . __h_data ). Just ). __h_0_mem )) aimedp ;
              // ----------
              ;
              ({ /* cicili#Let4900 */
                bool __h_case_result  = (true  &&  (((match4896 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4901 */
                      (aimedp  =  (((match4896 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn4906 */
                    ({ /* cicili#Let4910 */
                      typeof((((listp -> __h_data ). Cons ). __h_0_mem )) head ;
                      typeof((((listp -> __h_data ). Cons ). __h_1_mem )) tail ;
                      // ----------
                      ;
                      ({ /* cicili#Let4912 */
                        bool __h_case_result  = (true  &&  (((listp -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn4913 */
                                  (head  =  (((listp -> __h_data ). Cons ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn4915 */
                                  (tail  =  (((listp -> __h_data ). Cons ). __h_1_mem ) );
                                  true ;
                                }) ) &&  (listp  !=  aimedp  ) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn4920 */
                            BoxedCons_Rc_BTree_int_User (head , replace_List_Rc_BTree_int_User (tail , item , aimed ));
                          }) : ({ /* cicili#Let4926 */
                            // ----------
                            ;
                            ({ /* cicili#Progn4928 */
                              ({ /* cicili#Let4932 */
                                typeof((((aimedp -> __h_data ). Cons ). __h_1_mem )) taill ;
                                // ----------
                                ;
                                ({ /* cicili#Let4934 */
                                  bool __h_case_result  = (true  &&  (((aimedp -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn4935 */
                                        (taill  =  (((aimedp -> __h_data ). Cons ). __h_1_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn4940 */
                                      BoxedCons_Rc_BTree_int_User (item , clone_Box_List_Rc_BTree_int_User (taill ));
                                    }) : ({ /* cicili#Let4946 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn4948 */
                                        clone_Box_List_Rc_BTree_int_User (list );
                                      });
                                    }));
                                });
                              });
                            });
                          }));
                      });
                    });
                  }) : ({ /* cicili#Let4953 */
                    // ----------
                    ;
                    ({ /* cicili#Progn4955 */
                      clone_Box_List_Rc_BTree_int_User (list );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let4960 */
            // ----------
            ;
            ({ /* cicili#Progn4962 */
              clone_Box_List_Rc_BTree_int_User (list );
            });
          }));
      });
    });
}
List_Rc_BTree_int_User delete_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , List_Rc_BTree_int_User aimed ) {
  return ({ /* cicili#Let4969 */
      __auto_type match4968  = get_Box_List_Rc_BTree_int_User (list );
      typeof((((match4968 . __h_data ). Just ). __h_0_mem )) listp ;
      // ----------
      ;
      ({ /* cicili#Let4972 */
        bool __h_case_result  = (true  &&  (((match4968 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4973 */
              (listp  =  (((match4968 . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn4978 */
            ({ /* cicili#Let4982 */
              __auto_type match4981  = get_Box_List_Rc_BTree_int_User (aimed );
              typeof((((match4981 . __h_data ). Just ). __h_0_mem )) aimedp ;
              // ----------
              ;
              ({ /* cicili#Let4985 */
                bool __h_case_result  = (true  &&  (((match4981 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn4986 */
                      (aimedp  =  (((match4981 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn4991 */
                    ({ /* cicili#Let4995 */
                      typeof((((listp -> __h_data ). Cons ). __h_0_mem )) head ;
                      typeof((((listp -> __h_data ). Cons ). __h_1_mem )) tail ;
                      // ----------
                      ;
                      ({ /* cicili#Let4997 */
                        bool __h_case_result  = (true  &&  (((listp -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn4998 */
                                  (head  =  (((listp -> __h_data ). Cons ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn5000 */
                                  (tail  =  (((listp -> __h_data ). Cons ). __h_1_mem ) );
                                  true ;
                                }) ) &&  (listp  !=  aimedp  ) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn5005 */
                            BoxedCons_Rc_BTree_int_User (head , delete_List_Rc_BTree_int_User (tail , aimed ));
                          }) : ({ /* cicili#Let5011 */
                            // ----------
                            ;
                            ({ /* cicili#Progn5013 */
                              ({ /* cicili#Let5017 */
                                typeof((((aimedp -> __h_data ). Cons ). __h_1_mem )) taill ;
                                // ----------
                                ;
                                ({ /* cicili#Let5019 */
                                  bool __h_case_result  = (true  &&  (((aimedp -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5020 */
                                        (taill  =  (((aimedp -> __h_data ). Cons ). __h_1_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn5025 */
                                      clone_Box_List_Rc_BTree_int_User (taill );
                                    }) : ({ /* cicili#Let5030 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn5032 */
                                        clone_Box_List_Rc_BTree_int_User (list );
                                      });
                                    }));
                                });
                              });
                            });
                          }));
                      });
                    });
                  }) : ({ /* cicili#Let5037 */
                    // ----------
                    ;
                    ({ /* cicili#Progn5039 */
                      clone_Box_List_Rc_BTree_int_User (list );
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let5044 */
            // ----------
            ;
            ({ /* cicili#Progn5046 */
              clone_Box_List_Rc_BTree_int_User (list );
            });
          }));
      });
    });
}
List_Rc_BTree_int_User insert_List_Rc_BTree_int_User (List_Rc_BTree_int_User llist , Rc_BTree_int_User item , List_Rc_BTree_int_User rlist ) {
  return ({ /* cicili#Let5053 */
      __auto_type match5052  = get_Box_List_Rc_BTree_int_User (llist );
      typeof((((match5052 . __h_data ). Just ). __h_0_mem )) llistp ;
      // ----------
      ;
      ({ /* cicili#Let5056 */
        bool __h_case_result  = (true  &&  (((match5052 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5057 */
              (llistp  =  (((match5052 . __h_data ). Just ). __h_0_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn5062 */
            ({ /* cicili#Let5066 */
              __auto_type match5065  = get_Box_List_Rc_BTree_int_User (rlist );
              typeof((((match5065 . __h_data ). Just ). __h_0_mem )) rlistp ;
              // ----------
              ;
              ({ /* cicili#Let5069 */
                bool __h_case_result  = (true  &&  (((match5065 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5070 */
                      (rlistp  =  (((match5065 . __h_data ). Just ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn5075 */
                    ({ /* cicili#Let5079 */
                      typeof((((llistp -> __h_data ). Cons ). __h_0_mem )) head ;
                      typeof((((llistp -> __h_data ). Cons ). __h_1_mem )) tail ;
                      // ----------
                      ;
                      ({ /* cicili#Let5081 */
                        bool __h_case_result  = (true  &&  (((llistp -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn5082 */
                                  (head  =  (((llistp -> __h_data ). Cons ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn5084 */
                                  (tail  =  (((llistp -> __h_data ). Cons ). __h_1_mem ) );
                                  true ;
                                }) ) &&  (llistp  !=  rlistp  ) ) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn5089 */
                            BoxedCons_Rc_BTree_int_User (head , insert_List_Rc_BTree_int_User (tail , item , rlist ));
                          }) : ({ /* cicili#Let5095 */
                            // ----------
                            ;
                            ({ /* cicili#Progn5097 */
                              BoxedCons_Rc_BTree_int_User (item , clone_Box_List_Rc_BTree_int_User (rlist ));
                            });
                          }));
                      });
                    });
                  }) : ({ /* cicili#Let5103 */
                    // ----------
                    ;
                    ({ /* cicili#Progn5105 */
                      ({ /* cicili#Let5108 */
                        __auto_type nil_item  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5110 */
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
          }) : ({ /* cicili#Let5117 */
            // ----------
            ;
            ({ /* cicili#Progn5119 */
              BoxedCons_Rc_BTree_int_User (item , clone_Box_List_Rc_BTree_int_User (rlist ));
            });
          }));
      });
    });
}
List_Rc_BTree_int_User reverse_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
  List_Rc_BTree_int_User _reverse (List_Rc_BTree_int_User list , List_Rc_BTree_int_User rlist ) {
    return ({ /* cicili#Let5127 */
        __auto_type __h_matchbox  = list ;
        // ----------
        ({ /* cicili#Let5131 */
          __auto_type match5130  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match5130 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let5134 */
            bool __h_case_result  = (true  &&  (((match5130 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5135 */
                  (unboxed  =  (((match5130 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn5140 */
                ({ /* cicili#Let5144 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  ;
                  ({ /* cicili#Let5146 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5147 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn5149 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn5154 */
                        _reverse (tail , BoxedCons_Rc_BTree_int_User (head , rlist ));
                      }) : ({ /* cicili#Let5159 */
                        // ----------
                        ;
                        ({ /* cicili#Progn5161 */
                          clone_Box_List_Rc_BTree_int_User (rlist );
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let5166 */
                // ----------
                ;
                ({ /* cicili#Progn5168 */
                  clone_Box_List_Rc_BTree_int_User (rlist );
                });
              }));
          });
        });
      });
  }
  return ({ /* cicili#Let5172 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let5176 */
        __auto_type match5175  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5175 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5179 */
          bool __h_case_result  = (true  &&  (((match5175 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5180 */
                (unboxed  =  (((match5175 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5185 */
              ({ /* cicili#Let5189 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let5191 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5192 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn5194 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5199 */
                      _reverse (tail , BoxedCons_Rc_BTree_int_User (head , BoxedNil_Rc_BTree_int_User ()));
                    }) : ({ /* cicili#Let5205 */
                      // ----------
                      ;
                      ({ /* cicili#Progn5207 */
                        clone_Box_List_Rc_BTree_int_User (list );
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5212 */
              // ----------
              ;
              ({ /* cicili#Progn5214 */
                clone_Box_List_Rc_BTree_int_User (list );
              });
            }));
        });
      });
    });
}
List_Rc_BTree_int_User append_List_Rc_BTree_int_User (List_Rc_BTree_int_User llist , List_Rc_BTree_int_User rlist ) {
  return ({ /* cicili#Let5220 */
      __auto_type __h_matchbox  = llist ;
      // ----------
      ({ /* cicili#Let5224 */
        __auto_type match5223  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5223 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5227 */
          bool __h_case_result  = (true  &&  (((match5223 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5228 */
                (unboxed  =  (((match5223 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5233 */
              ({ /* cicili#Let5237 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let5239 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5240 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn5242 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5247 */
                      BoxedCons_Rc_BTree_int_User (head , append_List_Rc_BTree_int_User (tail , rlist ));
                    }) : ({ /* cicili#Let5253 */
                      // ----------
                      ;
                      ({ /* cicili#Progn5255 */
                        clone_Box_List_Rc_BTree_int_User (rlist );
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5260 */
              // ----------
              ;
              ({ /* cicili#Progn5262 */
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
  return (((len  <=  0 )) ? BoxedNil_Rc_BTree_int_User () : ({ /* cicili#Let5274 */
        __auto_type __h_matchbox  = list ;
        // ----------
        ({ /* cicili#Let5278 */
          __auto_type match5277  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match5277 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let5281 */
            bool __h_case_result  = (true  &&  (((match5277 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5282 */
                  (unboxed  =  (((match5277 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn5287 */
                ({ /* cicili#Let5291 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  ;
                  ({ /* cicili#Let5293 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5294 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn5296 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn5301 */
                        BoxedCons_Rc_BTree_int_User (head , take_List_Rc_BTree_int_User ((--len ), tail ));
                      }) : ({ /* cicili#Let5307 */
                        // ----------
                        ;
                        ({ /* cicili#Progn5309 */
                          BoxedNil_Rc_BTree_int_User ();
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let5314 */
                // ----------
                ;
                ({ /* cicili#Progn5316 */
                  BoxedNil_Rc_BTree_int_User ();
                });
              }));
          });
        });
      }));
}
List_Rc_BTree_int_User last_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
  return ({ /* cicili#Let5322 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let5326 */
        __auto_type match5325  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5325 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5329 */
          bool __h_case_result  = (true  &&  (((match5325 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5330 */
                (unboxed  =  (((match5325 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5335 */
              ({ /* cicili#Let5339 */
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let5341 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5342 */
                        (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5347 */
                      ({ /* cicili#Let5350 */
                        __auto_type __h_matchbox  = tail ;
                        // ----------
                        ({ /* cicili#Let5354 */
                          __auto_type match5353  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                          typeof((((match5353 . __h_data ). Just ). __h_0_mem )) unboxed ;
                          // ----------
                          ;
                          ({ /* cicili#Let5357 */
                            bool __h_case_result  = (true  &&  (((match5353 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5358 */
                                  (unboxed  =  (((match5353 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn5363 */
                                ({ /* cicili#Let5367 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Let5369 */
                                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Nil_t  ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn5373 */
                                        clone_Box_List_Rc_BTree_int_User (list );
                                      }) : ({ /* cicili#Let5378 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn5380 */
                                          last_List_Rc_BTree_int_User (tail );
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let5385 */
                                // ----------
                                ;
                                ({ /* cicili#Progn5387 */
                                  clone_Box_List_Rc_BTree_int_User (list );
                                });
                              }));
                          });
                        });
                      });
                    }) : ({ /* cicili#Let5392 */
                      // ----------
                      ;
                      ({ /* cicili#Progn5394 */
                        clone_Box_List_Rc_BTree_int_User (list );
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5399 */
              // ----------
              ;
              ({ /* cicili#Progn5401 */
                clone_Box_List_Rc_BTree_int_User (list );
              });
            }));
        });
      });
    });
}
List_Rc_BTree_int_User init_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
  return ({ /* cicili#Let5407 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let5411 */
        __auto_type match5410  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5410 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5414 */
          bool __h_case_result  = (true  &&  (((match5410 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5415 */
                (unboxed  =  (((match5410 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5420 */
              ({ /* cicili#Let5424 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let5426 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5427 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn5429 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5434 */
                      ({ /* cicili#Let5437 */
                        __auto_type __h_matchbox  = tail ;
                        // ----------
                        ({ /* cicili#Let5441 */
                          __auto_type match5440  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                          typeof((((match5440 . __h_data ). Just ). __h_0_mem )) unboxed ;
                          // ----------
                          ;
                          ({ /* cicili#Let5444 */
                            bool __h_case_result  = (true  &&  (((match5440 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5445 */
                                  (unboxed  =  (((match5440 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn5450 */
                                ({ /* cicili#Let5454 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Let5456 */
                                    bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Cons_t  ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn5460 */
                                        BoxedCons_Rc_BTree_int_User (head , init_List_Rc_BTree_int_User (tail ));
                                      }) : ({ /* cicili#Let5466 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn5468 */
                                          BoxedNil_Rc_BTree_int_User ();
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let5473 */
                                // ----------
                                ;
                                ({ /* cicili#Progn5475 */
                                  BoxedNil_Rc_BTree_int_User ();
                                });
                              }));
                          });
                        });
                      });
                    }) : ({ /* cicili#Let5480 */
                      // ----------
                      ;
                      ({ /* cicili#Progn5482 */
                        BoxedNil_Rc_BTree_int_User ();
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5487 */
              // ----------
              ;
              ({ /* cicili#Progn5489 */
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
  return (((len  <=  0 )) ? clone_Box_List_Rc_BTree_int_User (list ) : ({ /* cicili#Let5500 */
        __auto_type __h_matchbox  = list ;
        // ----------
        ({ /* cicili#Let5504 */
          __auto_type match5503  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match5503 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let5507 */
            bool __h_case_result  = (true  &&  (((match5503 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5508 */
                  (unboxed  =  (((match5503 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn5513 */
                ({ /* cicili#Let5517 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  ;
                  ({ /* cicili#Let5519 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5520 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn5525 */
                        drop_List_Rc_BTree_int_User ((--len ), tail );
                      }) : ({ /* cicili#Let5530 */
                        // ----------
                        ;
                        ({ /* cicili#Progn5532 */
                          clone_Box_List_Rc_BTree_int_User (list );
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let5537 */
                // ----------
                ;
                ({ /* cicili#Progn5539 */
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
  return ({ /* cicili#Let5549 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let5553 */
        __auto_type match5552  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5552 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5556 */
          bool __h_case_result  = (true  &&  (((match5552 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5557 */
                (unboxed  =  (((match5552 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5562 */
              ({ /* cicili#Let5566 */
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let5568 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5569 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) &&  (index  >  0 ) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5574 */
                      nthcdr_List_Rc_BTree_int_User ((--index ), tail );
                    }) : ({ /* cicili#Let5579 */
                      // ----------
                      ;
                      ({ /* cicili#Progn5581 */
                        list ;
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5585 */
              // ----------
              ;
              ({ /* cicili#Progn5587 */
                list ;
              });
            }));
        });
      });
    });
}
Maybe_Rc_BTree_int_User nth_List_Rc_BTree_int_User (size_t index , List_Rc_BTree_int_User list ) {
  return ({ /* cicili#Let5593 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let5597 */
        __auto_type match5596  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5596 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5600 */
          bool __h_case_result  = (true  &&  (((match5596 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5601 */
                (unboxed  =  (((match5596 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5606 */
              ({ /* cicili#Let5610 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let5612 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5613 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn5615 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5620 */
                      (((index  ==  0 )) ? Just_Rc_BTree_int_User (head ) : (((index  <  0 )) ? Nothing_Rc_BTree_int_User () : nth_List_Rc_BTree_int_User ((--index ), tail )));
                    }) : ({ /* cicili#Let5629 */
                      // ----------
                      ;
                      ({ /* cicili#Progn5631 */
                        Nothing_Rc_BTree_int_User ();
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5636 */
              // ----------
              ;
              ({ /* cicili#Progn5638 */
                Nothing_Rc_BTree_int_User ();
              });
            }));
        });
      });
    });
}
size_t hasLen_List_Rc_BTree_int_User (List_Rc_BTree_int_User list , size_t desired ) {
  return ({ /* cicili#Let5644 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let5648 */
        __auto_type match5647  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5647 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5651 */
          bool __h_case_result  = (true  &&  (((match5647 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5652 */
                (unboxed  =  (((match5647 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5657 */
              ({ /* cicili#Let5661 */
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let5663 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5664 */
                        (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5669 */
                      (((desired  ==  1 )) ? 1 : (1 +  hasLen_List_Rc_BTree_int_User (tail , (--desired )) ));
                    }) : ({ /* cicili#Let5675 */
                      // ----------
                      ;
                      ({ /* cicili#Progn5677 */
                        0;
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5681 */
              // ----------
              ;
              ({ /* cicili#Progn5683 */
                0;
              });
            }));
        });
      });
    });
}
size_t len_List_Rc_BTree_int_User (List_Rc_BTree_int_User list ) {
  return ({ /* cicili#Let5688 */
      __auto_type __h_matchbox  = list ;
      // ----------
      ({ /* cicili#Let5692 */
        __auto_type match5691  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5691 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5695 */
          bool __h_case_result  = (true  &&  (((match5691 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5696 */
                (unboxed  =  (((match5691 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5701 */
              ({ /* cicili#Let5705 */
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let5707 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5708 */
                        (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5713 */
                      (1 +  len_List_Rc_BTree_int_User (tail ) );
                    }) : ({ /* cicili#Let5718 */
                      // ----------
                      ;
                      ({ /* cicili#Progn5720 */
                        0;
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5724 */
              // ----------
              ;
              ({ /* cicili#Progn5726 */
                0;
              });
            }));
        });
      });
    });
}
void free_List_Rc_BTree_int_User_x (List_Rc_BTree_int_User_x * this_ptr ) {
  { /* cicili#Let5730 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let5736 */
      typeof((((this -> __h_data ). Cons ). __h_1_mem )) tail ;
      // ----------
      ;
      ({ /* cicili#Let5738 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn5739 */
              (tail  =  (((this -> __h_data ). Cons ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block5745 */
            { /* cicili#Block5747 */
              free (this );
              free_Box_List_Rc_BTree_int_User ((&tail ));
            }
          }
        else
          { /* cicili#Let5755 */
            // ----------
            ;
            ({ /* cicili#Let5757 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor ) ==  __h_Nil_t  ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block5762 */
                  { /* cicili#Block5764 */
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
  { /* cicili#Let5775 */
    List_Rc_BTree_int_User_x instance  = malloc (sizeof(class_List_Rc_BTree_int_User));
    // ----------
    (*instance ) = ((class_List_Rc_BTree_int_User){ get_List_Rc_BTree_int_User__H_Table (), __h_Cons_t , .__h_data.Cons = { head , tail }});
    return new_Box_List_Rc_BTree_int_User (instance );
  }
}
List_Rc_BTree_int_User BoxedNil_Rc_BTree_int_User () {
  { /* cicili#Let5782 */
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
  { /* cicili#Let5800 */
    Maybe_List_Rc_BTree_int_User instance  = ((Maybe_List_Rc_BTree_int_User){ get_Maybe_List_Rc_BTree_int_User__H_Table (), __h_Just_t , .__h_data.Just = { value }});
    // ----------
    return instance ;
  }
}
Maybe_List_Rc_BTree_int_User Nothing_List_Rc_BTree_int_User () {
  { /* cicili#Let5805 */
    Maybe_List_Rc_BTree_int_User instance  = ((Maybe_List_Rc_BTree_int_User){ get_Maybe_List_Rc_BTree_int_User__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __Maybe_List_Rc_BTree_int_User__H_IMPL__ */ 
#ifndef __Functor_List_Rc_BTree_int_User__H_IMPL__
#define __Functor_List_Rc_BTree_int_User__H_IMPL__
List_Rc_BTree_int_User fmap_Functor_List_Rc_BTree_int_User (Rc_BTree_int_User_to_Rc_BTree_int_User_t a_b , List_Rc_BTree_int_User input ) {
  return ({ /* cicili#Let5818 */
      __auto_type __h_matchbox  = input ;
      // ----------
      ({ /* cicili#Let5822 */
        __auto_type match5821  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match5821 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let5825 */
          bool __h_case_result  = (true  &&  (((match5821 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5826 */
                (unboxed  =  (((match5821 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn5831 */
              ({ /* cicili#Let5835 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let5837 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn5838 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn5840 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn5845 */
                      BoxedCons_Rc_BTree_int_User (a_b (head ), fmap_Functor_List_Rc_BTree_int_User (a_b , tail ));
                    }) : ({ /* cicili#Let5852 */
                      // ----------
                      ;
                      ({ /* cicili#Progn5854 */
                        BoxedNil_Rc_BTree_int_User ();
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let5859 */
              // ----------
              ;
              ({ /* cicili#Progn5861 */
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
  { /* cicili#Let5875 */
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
  return ({ /* cicili#Let5893 */
      typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      ;
      ({ /* cicili#Let5895 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn5896 */
                (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn5898 */
                (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn5903 */
            (((len_List_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? ({ /* cicili#Let5909 */
                __auto_type tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let5911 */
                  __auto_type tree  = tree ;
                  // ----------
                  ((void)(tree -> __h_table -> freeClass ));
                  tree ;
                });
                // ----------
                Branch_BTree_int_User (wrap_List_BTree_int_User_pair_t (({ /* cicili#Let5919 */
                    __auto_type match5918  = nth_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                    typeof((((match5918 . __h_data ). Just ). __h_0_mem )) nitem ;
                    // ----------
                    ;
                    ({ /* cicili#Let5923 */
                      bool __h_case_result  = (true  &&  (((match5918 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn5924 */
                            (nitem  =  (((match5918 . __h_data ). Just ). __h_0_mem ) );
                            true ;
                          }) ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* cicili#Progn5929 */
                          nitem ;
                        }) : ({ /* cicili#Let5933 */
                          // ----------
                          ;
                          ({ /* cicili#Progn5935 */
                            ((BTree_int_User_pair_t){ });
                          });
                        }));
                    });
                  })), pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Internal_BTree_int_User (take_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ), ({ /* cicili#Let5946 */
                      __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5948 */
                        __auto_type r1  = take_List_Rc_BTree_int_User (L_BTree_int_User , children );
                        // ----------
                        ((void)((r1 . __h_table )-> freeData ));
                        r1 ;
                      });
                      // ----------
                      fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5958 */
                          Rc_BTree_int_User __ciciliC_5957 (Rc_BTree_int_User __h_value ) {
                            return clone_Rc_BTree_int_User (__h_value );
                          }
                          __ciciliC_5957 ;
                        }), r1 );
                    }))), new_Rc_BTree_int_User (Internal_BTree_int_User (drop_List_BTree_int_User_pair_t (L_BTree_int_User , items ), ({ /* cicili#Let5969 */
                      __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let5971 */
                        __auto_type r1  = drop_List_Rc_BTree_int_User (L_BTree_int_User , children );
                        // ----------
                        ((void)((r1 . __h_table )-> freeData ));
                        r1 ;
                      });
                      // ----------
                      fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn5981 */
                          Rc_BTree_int_User __ciciliC_5980 (Rc_BTree_int_User __h_value ) {
                            return clone_Rc_BTree_int_User (__h_value );
                          }
                          __ciciliC_5980 ;
                        }), r1 );
                    })))}), 2));
              }) : tree );
          }) : ({ /* cicili#Let5988 */
            typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            ;
            ({ /* cicili#Let5990 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn5991 */
                      (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn5993 */
                      (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn5998 */
                  (((len_List_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? ({ /* cicili#Let6004 */
                      __auto_type tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6006 */
                        __auto_type tree  = tree ;
                        // ----------
                        ((void)(tree -> __h_table -> freeClass ));
                        tree ;
                      });
                      // ----------
                      Branch_BTree_int_User (wrap_List_BTree_int_User_pair_t (({ /* cicili#Let6014 */
                          __auto_type match6013  = nth_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                          typeof((((match6013 . __h_data ). Just ). __h_0_mem )) nitem ;
                          // ----------
                          ;
                          ({ /* cicili#Let6018 */
                            bool __h_case_result  = (true  &&  (((match6013 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6019 */
                                  (nitem  =  (((match6013 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn6024 */
                                nitem ;
                              }) : ({ /* cicili#Let6028 */
                                // ----------
                                ;
                                ({ /* cicili#Progn6030 */
                                  ((BTree_int_User_pair_t){ });
                                });
                              }));
                          });
                        })), pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Internal_BTree_int_User (take_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ), ({ /* cicili#Let6041 */
                            __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6043 */
                              __auto_type r1  = take_List_Rc_BTree_int_User (L_BTree_int_User , children );
                              // ----------
                              ((void)((r1 . __h_table )-> freeData ));
                              r1 ;
                            });
                            // ----------
                            fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6053 */
                                Rc_BTree_int_User __ciciliC_6052 (Rc_BTree_int_User __h_value ) {
                                  return clone_Rc_BTree_int_User (__h_value );
                                }
                                __ciciliC_6052 ;
                              }), r1 );
                          }))), new_Rc_BTree_int_User (Internal_BTree_int_User (drop_List_BTree_int_User_pair_t (L_BTree_int_User , items ), ({ /* cicili#Let6064 */
                            __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6066 */
                              __auto_type r1  = drop_List_Rc_BTree_int_User (L_BTree_int_User , children );
                              // ----------
                              ((void)((r1 . __h_table )-> freeData ));
                              r1 ;
                            });
                            // ----------
                            fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6076 */
                                Rc_BTree_int_User __ciciliC_6075 (Rc_BTree_int_User __h_value ) {
                                  return clone_Rc_BTree_int_User (__h_value );
                                }
                                __ciciliC_6075 ;
                              }), r1 );
                          })))}), 2));
                    }) : tree );
                }) : ({ /* cicili#Let6083 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  ;
                  ({ /* cicili#Let6085 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn6086 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn6091 */
                        (((len_List_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? ({ /* cicili#Let6097 */
                            __auto_type tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6099 */
                              __auto_type tree  = tree ;
                              // ----------
                              ((void)(tree -> __h_table -> freeClass ));
                              tree ;
                            });
                            // ----------
                            Branch_BTree_int_User (wrap_List_BTree_int_User_pair_t (({ /* cicili#Let6107 */
                                __auto_type match6106  = nth_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                                typeof((((match6106 . __h_data ). Just ). __h_0_mem )) nitem ;
                                // ----------
                                ;
                                ({ /* cicili#Let6111 */
                                  bool __h_case_result  = (true  &&  (((match6106 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6112 */
                                        (nitem  =  (((match6106 . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn6117 */
                                      nitem ;
                                    }) : ({ /* cicili#Let6121 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn6123 */
                                        ((BTree_int_User_pair_t){ });
                                      });
                                    }));
                                });
                              })), pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Leaf_BTree_int_User (take_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ))), new_Rc_BTree_int_User (Leaf_BTree_int_User (drop_List_BTree_int_User_pair_t (L_BTree_int_User , items )))}), 2));
                          }) : tree );
                      }) : ({ /* cicili#Let6140 */
                        // ----------
                        ;
                        ({ /* cicili#Progn6142 */
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
  return ({ /* cicili#Let6148 */
      typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      ;
      ({ /* cicili#Let6150 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn6151 */
                (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn6153 */
                (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn6158 */
            (((len_List_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? Branch_BTree_int_User (wrap_List_BTree_int_User_pair_t (({ /* cicili#Let6168 */
                __auto_type match6167  = nth_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                typeof((((match6167 . __h_data ). Just ). __h_0_mem )) nitem ;
                // ----------
                ;
                ({ /* cicili#Let6172 */
                  bool __h_case_result  = (true  &&  (((match6167 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6173 */
                        (nitem  =  (((match6167 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn6178 */
                      nitem ;
                    }) : ({ /* cicili#Let6182 */
                      // ----------
                      ;
                      ({ /* cicili#Progn6184 */
                        ((BTree_int_User_pair_t){ });
                      });
                    }));
                });
              })), pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Internal_BTree_int_User (take_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ), ({ /* cicili#Let6195 */
                  __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6197 */
                    __auto_type r1  = take_List_Rc_BTree_int_User (L_BTree_int_User , children );
                    // ----------
                    ((void)((r1 . __h_table )-> freeData ));
                    r1 ;
                  });
                  // ----------
                  fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6207 */
                      Rc_BTree_int_User __ciciliC_6206 (Rc_BTree_int_User __h_value ) {
                        return clone_Rc_BTree_int_User (__h_value );
                      }
                      __ciciliC_6206 ;
                    }), r1 );
                }))), new_Rc_BTree_int_User (Internal_BTree_int_User (drop_List_BTree_int_User_pair_t (L_BTree_int_User , items ), ({ /* cicili#Let6218 */
                  __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6220 */
                    __auto_type r1  = drop_List_Rc_BTree_int_User (L_BTree_int_User , children );
                    // ----------
                    ((void)((r1 . __h_table )-> freeData ));
                    r1 ;
                  });
                  // ----------
                  fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6230 */
                      Rc_BTree_int_User __ciciliC_6229 (Rc_BTree_int_User __h_value ) {
                        return clone_Rc_BTree_int_User (__h_value );
                      }
                      __ciciliC_6229 ;
                    }), r1 );
                })))}), 2)) : tree );
          }) : ({ /* cicili#Let6237 */
            typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            ;
            ({ /* cicili#Let6239 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn6240 */
                      (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn6242 */
                      (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn6247 */
                  (((len_List_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? Branch_BTree_int_User (wrap_List_BTree_int_User_pair_t (({ /* cicili#Let6257 */
                      __auto_type match6256  = nth_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                      typeof((((match6256 . __h_data ). Just ). __h_0_mem )) nitem ;
                      // ----------
                      ;
                      ({ /* cicili#Let6261 */
                        bool __h_case_result  = (true  &&  (((match6256 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6262 */
                              (nitem  =  (((match6256 . __h_data ). Just ). __h_0_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn6267 */
                            nitem ;
                          }) : ({ /* cicili#Let6271 */
                            // ----------
                            ;
                            ({ /* cicili#Progn6273 */
                              ((BTree_int_User_pair_t){ });
                            });
                          }));
                      });
                    })), pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Internal_BTree_int_User (take_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ), ({ /* cicili#Let6284 */
                        __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6286 */
                          __auto_type r1  = take_List_Rc_BTree_int_User (L_BTree_int_User , children );
                          // ----------
                          ((void)((r1 . __h_table )-> freeData ));
                          r1 ;
                        });
                        // ----------
                        fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6296 */
                            Rc_BTree_int_User __ciciliC_6295 (Rc_BTree_int_User __h_value ) {
                              return clone_Rc_BTree_int_User (__h_value );
                            }
                            __ciciliC_6295 ;
                          }), r1 );
                      }))), new_Rc_BTree_int_User (Internal_BTree_int_User (drop_List_BTree_int_User_pair_t (L_BTree_int_User , items ), ({ /* cicili#Let6307 */
                        __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6309 */
                          __auto_type r1  = drop_List_Rc_BTree_int_User (L_BTree_int_User , children );
                          // ----------
                          ((void)((r1 . __h_table )-> freeData ));
                          r1 ;
                        });
                        // ----------
                        fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6319 */
                            Rc_BTree_int_User __ciciliC_6318 (Rc_BTree_int_User __h_value ) {
                              return clone_Rc_BTree_int_User (__h_value );
                            }
                            __ciciliC_6318 ;
                          }), r1 );
                      })))}), 2)) : tree );
                }) : ({ /* cicili#Let6326 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  ;
                  ({ /* cicili#Let6328 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn6329 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn6334 */
                        (((len_List_BTree_int_User_pair_t (items ) >=  U_BTree_int_User  )) ? Branch_BTree_int_User (wrap_List_BTree_int_User_pair_t (({ /* cicili#Let6344 */
                            __auto_type match6343  = nth_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items );
                            typeof((((match6343 . __h_data ). Just ). __h_0_mem )) nitem ;
                            // ----------
                            ;
                            ({ /* cicili#Let6348 */
                              bool __h_case_result  = (true  &&  (((match6343 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6349 */
                                    (nitem  =  (((match6343 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* cicili#Progn6354 */
                                  nitem ;
                                }) : ({ /* cicili#Let6358 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Progn6360 */
                                    ((BTree_int_User_pair_t){ });
                                  });
                                }));
                            });
                          })), pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Leaf_BTree_int_User (take_List_BTree_int_User_pair_t ((L_BTree_int_User  -  1 ), items ))), new_Rc_BTree_int_User (Leaf_BTree_int_User (drop_List_BTree_int_User_pair_t (L_BTree_int_User , items )))}), 2)) : tree );
                      }) : ({ /* cicili#Let6377 */
                        // ----------
                        ;
                        ({ /* cicili#Progn6379 */
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
  return ({ /* cicili#Let6386 */
      __auto_type merged  = Internal_BTree_int_User (append_List_BTree_int_User_pair_t (left_items , right_items ), ({ /* cicili#Let6391 */
        __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6393 */
          __auto_type r1  = append_List_Rc_BTree_int_User (left_children , right_children );
          // ----------
          ((void)((r1 . __h_table )-> freeData ));
          r1 ;
        });
        // ----------
        fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6402 */
            Rc_BTree_int_User __ciciliC_6401 (Rc_BTree_int_User __h_value ) {
              return clone_Rc_BTree_int_User (__h_value );
            }
            __ciciliC_6401 ;
          }), r1 );
      }));
      // ----------
      ({ /* cicili#Let6410 */
        __auto_type tmp_child  = splitForDelete_BTree_int_User (merged );
        typeof((((tmp_child -> __h_data ). Branch ). __h_0_mem )) tmp_items ;
        typeof((((tmp_child -> __h_data ). Branch ). __h_1_mem )) tmp_children ;
        // ----------
        ;
        ({ /* cicili#Let6413 */
          bool __h_case_result  = (true  &&  (((tmp_child -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn6414 */
                  (tmp_items  =  (((tmp_child -> __h_data ). Branch ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn6416 */
                  (tmp_children  =  (((tmp_child -> __h_data ). Branch ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6421 */
              ({ /* cicili#Let6424 */
                __auto_type __h_matchbox  = tmp_items ;
                // ----------
                ({ /* cicili#Let6428 */
                  __auto_type match6427  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                  typeof((((match6427 . __h_data ). Just ). __h_0_mem )) unboxed ;
                  // ----------
                  ;
                  ({ /* cicili#Let6431 */
                    bool __h_case_result  = (true  &&  (((match6427 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6432 */
                          (unboxed  =  (((match6427 . __h_data ). Just ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn6437 */
                        ({ /* cicili#Let6441 */
                          typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                          // ----------
                          ;
                          ({ /* cicili#Let6443 */
                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn6444 */
                                  (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn6449 */
                                ({ /* cicili#Let6452 */
                                  __auto_type merged  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6454 */
                                    __auto_type merged  = merged ;
                                    // ----------
                                    ((void)(merged -> __h_table -> freeClass ));
                                    merged ;
                                  });
                                  __auto_type tmp_child  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let6457 */
                                    __auto_type tmp_child  = tmp_child ;
                                    // ----------
                                    ((void)(tmp_child -> __h_table -> freeClass ));
                                    tmp_child ;
                                  });
                                  // ----------
                                  Internal_BTree_int_User (replaceAt_List_BTree_int_User_pair_t (items , head , pitem_index ), ({ /* cicili#Let6464 */
                                      __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6466 */
                                        __auto_type r1  = deleteAt_List_Rc_BTree_int_User (children , pchild_index );
                                        // ----------
                                        ((void)((r1 . __h_table )-> freeData ));
                                        r1 ;
                                      });
                                      __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6470 */
                                        __auto_type r2  = take_List_Rc_BTree_int_User (pchild_index , r1 );
                                        // ----------
                                        ((void)((r2 . __h_table )-> freeData ));
                                        r2 ;
                                      });
                                      __auto_type r3  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6474 */
                                        __auto_type r3  = drop_List_Rc_BTree_int_User ((pchild_index  +  1 ), r1 );
                                        // ----------
                                        ((void)((r3 . __h_table )-> freeData ));
                                        r3 ;
                                      });
                                      __auto_type r4  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6478 */
                                        __auto_type r4  = append_List_Rc_BTree_int_User (tmp_children , r3 );
                                        // ----------
                                        ((void)((r4 . __h_table )-> freeData ));
                                        r4 ;
                                      });
                                      __auto_type r5  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6482 */
                                        __auto_type r5  = append_List_Rc_BTree_int_User (r2 , r4 );
                                        // ----------
                                        ((void)((r5 . __h_table )-> freeData ));
                                        r5 ;
                                      });
                                      // ----------
                                      fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6491 */
                                          Rc_BTree_int_User __ciciliC_6490 (Rc_BTree_int_User __h_value ) {
                                            return clone_Rc_BTree_int_User (__h_value );
                                          }
                                          __ciciliC_6490 ;
                                        }), r5 );
                                    }));
                                });
                              }) : ({ /* cicili#Let6498 */
                                // ----------
                                ;
                                ({ /* cicili#Progn6500 */
                                  Leaf_BTree_int_User (BoxedNil_BTree_int_User_pair_t ());
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let6506 */
                        // ----------
                        ;
                        ({ /* cicili#Progn6508 */
                          Leaf_BTree_int_User (BoxedNil_BTree_int_User_pair_t ());
                        });
                      }));
                  });
                });
              });
            }) : ({ /* cicili#Let6514 */
              // ----------
              ;
              ({ /* cicili#Let6516 */
                bool __h_case_result  = (true  &&  ((tmp_child -> __h_ctor ) ==  __h_Internal_t  ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn6520 */
                    Internal_BTree_int_User (deleteAt_List_BTree_int_User_pair_t (items , pitem_index ), ({ /* cicili#Let6526 */
                        __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6528 */
                          __auto_type r1  = deleteAt_List_Rc_BTree_int_User (children , pchild_index );
                          // ----------
                          ((void)((r1 . __h_table )-> freeData ));
                          r1 ;
                        });
                        __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6532 */
                          __auto_type r2  = new_Rc_BTree_int_User (merged );
                          // ----------
                          ((void)((r2 . __h_table )-> freeData ));
                          r2 ;
                        });
                        __auto_type r3  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6536 */
                          __auto_type r3  = replaceAt_List_Rc_BTree_int_User (r1 , r2 , pchild_index );
                          // ----------
                          ((void)((r3 . __h_table )-> freeData ));
                          r3 ;
                        });
                        // ----------
                        fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6545 */
                            Rc_BTree_int_User __ciciliC_6544 (Rc_BTree_int_User __h_value ) {
                              return clone_Rc_BTree_int_User (__h_value );
                            }
                            __ciciliC_6544 ;
                          }), r3 );
                      }));
                  }) : ({ /* cicili#Let6552 */
                    // ----------
                    ;
                    ({ /* cicili#Progn6554 */
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
    return ({ /* cicili#Let6581 */
        __auto_type match6580  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
        typeof((((match6580 . __h_data ). Just ). __h_0_mem )) right_child_rc ;
        // ----------
        ;
        ({ /* cicili#Let6584 */
          bool __h_case_result  = (true  &&  (((match6580 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6585 */
                (right_child_rc  =  (((match6580 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6590 */
              ({ /* cicili#Let6593 */
                __auto_type __h_matchbox  = right_child_rc ;
                // ----------
                ({ /* cicili#Let6597 */
                  __auto_type match6596  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                  typeof((((match6596 . __h_data ). Just ). __h_0_mem )) unboxed ;
                  // ----------
                  ;
                  ({ /* cicili#Let6600 */
                    bool __h_case_result  = (true  &&  (((match6596 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6601 */
                          (unboxed  =  (((match6596 . __h_data ). Just ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn6606 */
                        ({ /* cicili#Let6610 */
                          typeof((((unboxed -> __h_data ). Leaf ). __h_0_mem )) right_child_items ;
                          // ----------
                          ;
                          ({ /* cicili#Let6612 */
                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn6613 */
                                  (right_child_items  =  (((unboxed -> __h_data ). Leaf ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn6618 */
                                (((hasLen_List_BTree_int_User_pair_t (right_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let6625 */
                                    __auto_type __h_matchbox  = right_child_items ;
                                    // ----------
                                    ({ /* cicili#Let6629 */
                                      __auto_type match6628  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                      typeof((((match6628 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                      // ----------
                                      ;
                                      ({ /* cicili#Let6632 */
                                        bool __h_case_result  = (true  &&  (((match6628 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6633 */
                                              (unboxed  =  (((match6628 . __h_data ). Just ). __h_0_mem ) );
                                              true ;
                                            }) ) );
                                        // ----------
                                        
                                        ((__h_case_result ) ? ({ /* cicili#Progn6638 */
                                            ({ /* cicili#Let6642 */
                                              __auto_type first  = unboxed ;
                                              typeof((((first -> __h_data ). Cons ). __h_0_mem )) first_item ;
                                              typeof((((first -> __h_data ). Cons ). __h_1_mem )) tail ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let6644 */
                                                bool __h_case_result  = (true  &&  (((first -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn6645 */
                                                        (first_item  =  (((first -> __h_data ). Cons ). __h_0_mem ) );
                                                        true ;
                                                      }) &&  ({ /* cicili#Progn6647 */
                                                        (tail  =  (((first -> __h_data ). Cons ). __h_1_mem ) );
                                                        true ;
                                                      }) ) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn6652 */
                                                    Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , first_item , current ), ({ /* cicili#Let6660 */
                                                        __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6662 */
                                                          __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                                          // ----------
                                                          ((void)((r1 . __h_table )-> freeData ));
                                                          r1 ;
                                                        });
                                                        __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6666 */
                                                          __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6672 */
                                                            Rc_BTree_int_User __ciciliC_6671 (Rc_BTree_int_User __h_value ) {
                                                              return clone_Rc_BTree_int_User (__h_value );
                                                            }
                                                            __ciciliC_6671 ;
                                                          }), r1 );
                                                          // ----------
                                                          ((void)((r2 . __h_table )-> freeData ));
                                                          r2 ;
                                                        });
                                                        __auto_type r3  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6679 */
                                                          __auto_type r3  = drop_List_Rc_BTree_int_User ((index  +  2 ), children );
                                                          // ----------
                                                          ((void)((r3 . __h_table )-> freeData ));
                                                          r3 ;
                                                        });
                                                        __auto_type r4  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6683 */
                                                          __auto_type r4  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6689 */
                                                            Rc_BTree_int_User __ciciliC_6688 (Rc_BTree_int_User __h_value ) {
                                                              return clone_Rc_BTree_int_User (__h_value );
                                                            }
                                                            __ciciliC_6688 ;
                                                          }), r3 );
                                                          // ----------
                                                          ((void)((r4 . __h_table )-> freeData ));
                                                          r4 ;
                                                        });
                                                        __auto_type r5  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6696 */
                                                          __auto_type r5  = take_List_BTree_int_User_pair_t (1, current );
                                                          // ----------
                                                          ((void)((r5 . __h_table )-> freeData ));
                                                          r5 ;
                                                        });
                                                        __auto_type r7  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6700 */
                                                          __auto_type r7  = pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Leaf_BTree_int_User (append_List_BTree_int_User_pair_t (child_items , r5 ))), new_Rc_BTree_int_User (Leaf_BTree_int_User (clone_Box_List_BTree_int_User_pair_t (tail )))}), 2);
                                                          // ----------
                                                          ((void)((r7 . __h_table )-> freeData ));
                                                          r7 ;
                                                        });
                                                        __auto_type r6  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6713 */
                                                          __auto_type r6  = append_List_Rc_BTree_int_User (r7 , r4 );
                                                          // ----------
                                                          ((void)((r6 . __h_table )-> freeData ));
                                                          r6 ;
                                                        });
                                                        // ----------
                                                        append_List_Rc_BTree_int_User (r2 , r6 );
                                                      })));
                                                  }) : ({ /* cicili#Let6720 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn6722 */
                                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight R1"));
                                                    });
                                                  }));
                                              });
                                            });
                                          }) : ({ /* cicili#Let6729 */
                                            // ----------
                                            ;
                                            ({ /* cicili#Progn6731 */
                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CONS ());
                                            });
                                          }));
                                      });
                                    });
                                  }) : ({ /* cicili#Let6737 */
                                    __auto_type __h_matchbox  = current ;
                                    // ----------
                                    ({ /* cicili#Let6741 */
                                      __auto_type match6740  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                      typeof((((match6740 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                      // ----------
                                      ;
                                      ({ /* cicili#Let6744 */
                                        bool __h_case_result  = (true  &&  (((match6740 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6745 */
                                              (unboxed  =  (((match6740 . __h_data ). Just ). __h_0_mem ) );
                                              true ;
                                            }) ) );
                                        // ----------
                                        
                                        ((__h_case_result ) ? ({ /* cicili#Progn6750 */
                                            ({ /* cicili#Let6754 */
                                              typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let6756 */
                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn6757 */
                                                      (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn6762 */
                                                    Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (delete_List_BTree_int_User_pair_t (items , current ), ({ /* cicili#Let6770 */
                                                        __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6772 */
                                                          __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                                          // ----------
                                                          ((void)((r1 . __h_table )-> freeData ));
                                                          r1 ;
                                                        });
                                                        __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6776 */
                                                          __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6782 */
                                                            Rc_BTree_int_User __ciciliC_6781 (Rc_BTree_int_User __h_value ) {
                                                              return clone_Rc_BTree_int_User (__h_value );
                                                            }
                                                            __ciciliC_6781 ;
                                                          }), r1 );
                                                          // ----------
                                                          ((void)((r2 . __h_table )-> freeData ));
                                                          r2 ;
                                                        });
                                                        __auto_type r3  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6789 */
                                                          __auto_type r3  = drop_List_Rc_BTree_int_User ((index  +  2 ), children );
                                                          // ----------
                                                          ((void)((r3 . __h_table )-> freeData ));
                                                          r3 ;
                                                        });
                                                        __auto_type r4  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6793 */
                                                          __auto_type r4  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn6799 */
                                                            Rc_BTree_int_User __ciciliC_6798 (Rc_BTree_int_User __h_value ) {
                                                              return clone_Rc_BTree_int_User (__h_value );
                                                            }
                                                            __ciciliC_6798 ;
                                                          }), r3 );
                                                          // ----------
                                                          ((void)((r4 . __h_table )-> freeData ));
                                                          r4 ;
                                                        });
                                                        __auto_type r5  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6806 */
                                                          __auto_type r5  = wrap_List_BTree_int_User_pair_t (head );
                                                          // ----------
                                                          ((void)((r5 . __h_table )-> freeData ));
                                                          r5 ;
                                                        });
                                                        __auto_type r6  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6810 */
                                                          __auto_type r6  = append_List_BTree_int_User_pair_t (child_items , r5 );
                                                          // ----------
                                                          ((void)((r6 . __h_table )-> freeData ));
                                                          r6 ;
                                                        });
                                                        __auto_type r8  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6814 */
                                                          __auto_type r8  = push_List_Rc_BTree_int_User (new_Rc_BTree_int_User (Leaf_BTree_int_User (append_List_BTree_int_User_pair_t (r6 , right_child_items ))), r4 );
                                                          // ----------
                                                          ((void)((r8 . __h_table )-> freeData ));
                                                          r8 ;
                                                        });
                                                        // ----------
                                                        append_List_Rc_BTree_int_User (r2 , r8 );
                                                      })));
                                                  }) : ({ /* cicili#Let6825 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn6827 */
                                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight R2"));
                                                    });
                                                  }));
                                              });
                                            });
                                          }) : ({ /* cicili#Let6834 */
                                            // ----------
                                            ;
                                            ({ /* cicili#Progn6836 */
                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CONS ());
                                            });
                                          }));
                                      });
                                    });
                                  }));
                              }) : ({ /* cicili#Let6843 */
                                // ----------
                                ;
                                ({ /* cicili#Progn6845 */
                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight 3"));
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let6852 */
                        // ----------
                        ;
                        ({ /* cicili#Progn6854 */
                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight 3"));
                        });
                      }));
                  });
                });
              });
            }) : ({ /* cicili#Let6861 */
              // ----------
              ;
              ({ /* cicili#Progn6863 */
                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRight 4"));
              });
            }));
        });
      });
  }
  Either_BTree_int_User_Error_BTree_int_User borrowLeft (List_BTree_int_User_pair_t child_items ) {
    return ({ /* cicili#Let6875 */
        typeof((((wleft . __h_data ). Just ). __h_0_mem )) left ;
        // ----------
        ;
        ({ /* cicili#Let6877 */
          bool __h_case_result  = (true  &&  (((wleft . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6878 */
                (left  =  (((wleft . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn6883 */
              ({ /* cicili#Let6886 */
                __auto_type __h_matchbox  = left ;
                // ----------
                ({ /* cicili#Let6890 */
                  __auto_type match6889  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                  typeof((((match6889 . __h_data ). Just ). __h_0_mem )) unboxed ;
                  // ----------
                  ;
                  ({ /* cicili#Let6893 */
                    bool __h_case_result  = (true  &&  (((match6889 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6894 */
                          (unboxed  =  (((match6889 . __h_data ). Just ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn6899 */
                        ({ /* cicili#Let6903 */
                          typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) left_item ;
                          // ----------
                          ;
                          ({ /* cicili#Let6905 */
                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn6906 */
                                  (left_item  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn6911 */
                                ({ /* cicili#Let6915 */
                                  __auto_type match6914  = nth_List_Rc_BTree_int_User ((index  -  1 ), children );
                                  typeof((((match6914 . __h_data ). Just ). __h_0_mem )) left_child_rc ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let6918 */
                                    bool __h_case_result  = (true  &&  (((match6914 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6919 */
                                          (left_child_rc  =  (((match6914 . __h_data ). Just ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn6924 */
                                        ({ /* cicili#Let6927 */
                                          __auto_type __h_matchbox  = left_child_rc ;
                                          // ----------
                                          ({ /* cicili#Let6931 */
                                            __auto_type match6930  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                            typeof((((match6930 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                            // ----------
                                            ;
                                            ({ /* cicili#Let6934 */
                                              bool __h_case_result  = (true  &&  (((match6930 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6935 */
                                                    (unboxed  =  (((match6930 . __h_data ). Just ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              
                                              ((__h_case_result ) ? ({ /* cicili#Progn6940 */
                                                  ({ /* cicili#Let6944 */
                                                    typeof((((unboxed -> __h_data ). Leaf ). __h_0_mem )) left_child_items ;
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Let6946 */
                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn6947 */
                                                            (left_child_items  =  (((unboxed -> __h_data ). Leaf ). __h_0_mem ) );
                                                            true ;
                                                          }) ) );
                                                      // ----------
                                                      
                                                      ((__h_case_result ) ? ({ /* cicili#Progn6952 */
                                                          (((hasLen_List_BTree_int_User_pair_t (left_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let6959 */
                                                              __auto_type last  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let6961 */
                                                                __auto_type last  = last_List_BTree_int_User_pair_t (left_child_items );
                                                                // ----------
                                                                ((void)((last . __h_table )-> freeData ));
                                                                last ;
                                                              });
                                                              // ----------
                                                              ({ /* cicili#Let6966 */
                                                                __auto_type __h_matchbox  = last ;
                                                                // ----------
                                                                ({ /* cicili#Let6970 */
                                                                  __auto_type match6969  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                  typeof((((match6969 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                  // ----------
                                                                  ;
                                                                  ({ /* cicili#Let6973 */
                                                                    bool __h_case_result  = (true  &&  (((match6969 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn6974 */
                                                                          (unboxed  =  (((match6969 . __h_data ). Just ). __h_0_mem ) );
                                                                          true ;
                                                                        }) ) );
                                                                    // ----------
                                                                    
                                                                    ((__h_case_result ) ? ({ /* cicili#Progn6979 */
                                                                        ({ /* cicili#Let6983 */
                                                                          typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) last_item ;
                                                                          // ----------
                                                                          ;
                                                                          ({ /* cicili#Let6985 */
                                                                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn6986 */
                                                                                  (last_item  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                                                                                  true ;
                                                                                }) ) );
                                                                            // ----------
                                                                            
                                                                            ((__h_case_result ) ? ({ /* cicili#Progn6991 */
                                                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , last_item , left ), ({ /* cicili#Let6999 */
                                                                                    __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7001 */
                                                                                      __auto_type r1  = take_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                                                      // ----------
                                                                                      ((void)((r1 . __h_table )-> freeData ));
                                                                                      r1 ;
                                                                                    });
                                                                                    __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7005 */
                                                                                      __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn7011 */
                                                                                        Rc_BTree_int_User __ciciliC_7010 (Rc_BTree_int_User __h_value ) {
                                                                                          return clone_Rc_BTree_int_User (__h_value );
                                                                                        }
                                                                                        __ciciliC_7010 ;
                                                                                      }), r1 );
                                                                                      // ----------
                                                                                      ((void)((r2 . __h_table )-> freeData ));
                                                                                      r2 ;
                                                                                    });
                                                                                    __auto_type r3  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7018 */
                                                                                      __auto_type r3  = drop_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                                      // ----------
                                                                                      ((void)((r3 . __h_table )-> freeData ));
                                                                                      r3 ;
                                                                                    });
                                                                                    __auto_type r4  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7022 */
                                                                                      __auto_type r4  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn7028 */
                                                                                        Rc_BTree_int_User __ciciliC_7027 (Rc_BTree_int_User __h_value ) {
                                                                                          return clone_Rc_BTree_int_User (__h_value );
                                                                                        }
                                                                                        __ciciliC_7027 ;
                                                                                      }), r3 );
                                                                                      // ----------
                                                                                      ((void)((r4 . __h_table )-> freeData ));
                                                                                      r4 ;
                                                                                    });
                                                                                    __auto_type r5  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7035 */
                                                                                      __auto_type r5  = pure_List_Rc_BTree_int_User (((Rc_BTree_int_User[]){ new_Rc_BTree_int_User (Leaf_BTree_int_User (init_List_BTree_int_User_pair_t (left_child_items ))), new_Rc_BTree_int_User (Leaf_BTree_int_User (push_List_BTree_int_User_pair_t (left_item , child_items )))}), 2);
                                                                                      // ----------
                                                                                      ((void)((r5 . __h_table )-> freeData ));
                                                                                      r5 ;
                                                                                    });
                                                                                    __auto_type r7  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7048 */
                                                                                      __auto_type r7  = append_List_Rc_BTree_int_User (r5 , r4 );
                                                                                      // ----------
                                                                                      ((void)((r7 . __h_table )-> freeData ));
                                                                                      r7 ;
                                                                                    });
                                                                                    // ----------
                                                                                    append_List_Rc_BTree_int_User (r2 , r7 );
                                                                                  })));
                                                                              }) : ({ /* cicili#Let7055 */
                                                                                // ----------
                                                                                ;
                                                                                ({ /* cicili#Progn7057 */
                                                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowLeft 2"));
                                                                                });
                                                                              }));
                                                                          });
                                                                        });
                                                                      }) : ({ /* cicili#Let7064 */
                                                                        // ----------
                                                                        ;
                                                                        ({ /* cicili#Progn7066 */
                                                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CONS ());
                                                                        });
                                                                      }));
                                                                  });
                                                                });
                                                              });
                                                            }) : ({ /* cicili#Let7073 */
                                                              __auto_type match7072  = borrowRight (child_items );
                                                              // ----------
                                                              ;
                                                              ({ /* cicili#Let7075 */
                                                                bool __h_case_result  = (true  &&  ((match7072 . __h_ctor ) ==  __h_Left_t  ) );
                                                                // ----------
                                                                
                                                                ((__h_case_result ) ? ({ /* cicili#Progn7079 */
                                                                    Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (delete_List_BTree_int_User_pair_t (items , left ), ({ /* cicili#Let7087 */
                                                                        __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7089 */
                                                                          __auto_type r1  = take_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                                          // ----------
                                                                          ((void)((r1 . __h_table )-> freeData ));
                                                                          r1 ;
                                                                        });
                                                                        __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7093 */
                                                                          __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn7099 */
                                                                            Rc_BTree_int_User __ciciliC_7098 (Rc_BTree_int_User __h_value ) {
                                                                              return clone_Rc_BTree_int_User (__h_value );
                                                                            }
                                                                            __ciciliC_7098 ;
                                                                          }), r1 );
                                                                          // ----------
                                                                          ((void)((r2 . __h_table )-> freeData ));
                                                                          r2 ;
                                                                        });
                                                                        __auto_type r3  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7106 */
                                                                          __auto_type r3  = drop_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                          // ----------
                                                                          ((void)((r3 . __h_table )-> freeData ));
                                                                          r3 ;
                                                                        });
                                                                        __auto_type r4  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7110 */
                                                                          __auto_type r4  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn7116 */
                                                                            Rc_BTree_int_User __ciciliC_7115 (Rc_BTree_int_User __h_value ) {
                                                                              return clone_Rc_BTree_int_User (__h_value );
                                                                            }
                                                                            __ciciliC_7115 ;
                                                                          }), r3 );
                                                                          // ----------
                                                                          ((void)((r4 . __h_table )-> freeData ));
                                                                          r4 ;
                                                                        });
                                                                        __auto_type r8  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7123 */
                                                                          __auto_type r8  = wrap_List_BTree_int_User_pair_t (left_item );
                                                                          // ----------
                                                                          ((void)((r8 . __h_table )-> freeData ));
                                                                          r8 ;
                                                                        });
                                                                        __auto_type r5  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7127 */
                                                                          __auto_type r5  = append_List_BTree_int_User_pair_t (left_child_items , r8 );
                                                                          // ----------
                                                                          ((void)((r5 . __h_table )-> freeData ));
                                                                          r5 ;
                                                                        });
                                                                        __auto_type r7  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7131 */
                                                                          __auto_type r7  = push_List_Rc_BTree_int_User (new_Rc_BTree_int_User (Leaf_BTree_int_User (append_List_BTree_int_User_pair_t (r5 , child_items ))), r4 );
                                                                          // ----------
                                                                          ((void)((r7 . __h_table )-> freeData ));
                                                                          r7 ;
                                                                        });
                                                                        // ----------
                                                                        append_List_Rc_BTree_int_User (r2 , r7 );
                                                                      })));
                                                                  }) : ({ /* cicili#Let7142 */
                                                                    __auto_type right  = match7072 ;
                                                                    // ----------
                                                                    ;
                                                                    ({ /* cicili#Progn7144 */
                                                                      right ;
                                                                    });
                                                                  }));
                                                              });
                                                            }));
                                                        }) : ({ /* cicili#Let7148 */
                                                          // ----------
                                                          ;
                                                          ({ /* cicili#Progn7150 */
                                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowLeft 3"));
                                                          });
                                                        }));
                                                    });
                                                  });
                                                }) : ({ /* cicili#Let7157 */
                                                  // ----------
                                                  ;
                                                  ({ /* cicili#Progn7159 */
                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowLeft 4"));
                                                  });
                                                }));
                                            });
                                          });
                                        });
                                      }) : ({ /* cicili#Let7166 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn7168 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowLeft 5"));
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let7175 */
                                // ----------
                                ;
                                ({ /* cicili#Progn7177 */
                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowLeft 6"));
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let7184 */
                        // ----------
                        ;
                        ({ /* cicili#Progn7186 */
                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CONS ());
                        });
                      }));
                  });
                });
              });
            }) : ({ /* cicili#Let7193 */
              // ----------
              ;
              ({ /* cicili#Progn7195 */
                borrowRight (child_items );
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let7199 */
      __auto_type result  = ({ /* cicili#Let7202 */
        typeof((((nchild -> __h_data ). Branch ). __h_0_mem )) child_items ;
        // ----------
        ;
        ({ /* cicili#Let7204 */
          bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn7205 */
                (child_items  =  (((nchild -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn7210 */
              (((hasLen_List_BTree_int_User_pair_t (child_items , (L_BTree_int_User  -  1 )) ==  (L_BTree_int_User  -  1 ) )) ? Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (clone_Box_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let7222 */
                  __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7224 */
                    __auto_type r1  = new_Rc_BTree_int_User (nchild );
                    // ----------
                    ((void)((r1 . __h_table )-> freeData ));
                    r1 ;
                  });
                  __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7228 */
                    __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                    // ----------
                    ((void)((r2 . __h_table )-> freeData ));
                    r2 ;
                  });
                  // ----------
                  fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn7237 */
                      Rc_BTree_int_User __ciciliC_7236 (Rc_BTree_int_User __h_value ) {
                        return clone_Rc_BTree_int_User (__h_value );
                      }
                      __ciciliC_7236 ;
                    }), r2 );
                }))) : ({ /* cicili#Let7243 */
                  __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7245 */
                    __auto_type nchild  = nchild ;
                    // ----------
                    ((void)(nchild -> __h_table -> freeClass ));
                    nchild ;
                  });
                  // ----------
                  borrowLeft (child_items );
                }));
            }) : ({ /* cicili#Let7250 */
              typeof((((nchild -> __h_data ). Internal ). __h_0_mem )) child_items ;
              // ----------
              ;
              ({ /* cicili#Let7252 */
                bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn7253 */
                      (child_items  =  (((nchild -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn7258 */
                    (((hasLen_List_BTree_int_User_pair_t (child_items , (L_BTree_int_User  -  1 )) ==  (L_BTree_int_User  -  1 ) )) ? Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (clone_Box_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let7270 */
                        __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7272 */
                          __auto_type r1  = new_Rc_BTree_int_User (nchild );
                          // ----------
                          ((void)((r1 . __h_table )-> freeData ));
                          r1 ;
                        });
                        __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7276 */
                          __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                          // ----------
                          ((void)((r2 . __h_table )-> freeData ));
                          r2 ;
                        });
                        // ----------
                        fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn7285 */
                            Rc_BTree_int_User __ciciliC_7284 (Rc_BTree_int_User __h_value ) {
                              return clone_Rc_BTree_int_User (__h_value );
                            }
                            __ciciliC_7284 ;
                          }), r2 );
                      }))) : ({ /* cicili#Let7291 */
                        __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7293 */
                          __auto_type nchild  = nchild ;
                          // ----------
                          ((void)(nchild -> __h_table -> freeClass ));
                          nchild ;
                        });
                        // ----------
                        borrowLeft (child_items );
                      }));
                  }) : ({ /* cicili#Let7298 */
                    typeof((((nchild -> __h_data ). Leaf ). __h_0_mem )) child_items ;
                    // ----------
                    ;
                    ({ /* cicili#Let7300 */
                      bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn7301 */
                            (child_items  =  (((nchild -> __h_data ). Leaf ). __h_0_mem ) );
                            true ;
                          }) ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* cicili#Progn7306 */
                          (((hasLen_List_BTree_int_User_pair_t (child_items , (L_BTree_int_User  -  1 )) ==  (L_BTree_int_User  -  1 ) )) ? Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (clone_Box_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let7318 */
                              __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7320 */
                                __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                // ----------
                                ((void)((r1 . __h_table )-> freeData ));
                                r1 ;
                              });
                              __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7324 */
                                __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                                // ----------
                                ((void)((r2 . __h_table )-> freeData ));
                                r2 ;
                              });
                              // ----------
                              fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn7333 */
                                  Rc_BTree_int_User __ciciliC_7332 (Rc_BTree_int_User __h_value ) {
                                    return clone_Rc_BTree_int_User (__h_value );
                                  }
                                  __ciciliC_7332 ;
                                }), r2 );
                            }))) : ({ /* cicili#Let7339 */
                              __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7341 */
                                __auto_type nchild  = nchild ;
                                // ----------
                                ((void)(nchild -> __h_table -> freeClass ));
                                nchild ;
                              });
                              // ----------
                              borrowLeft (child_items );
                            }));
                        }) : ({ /* cicili#Let7346 */
                          // ----------
                          ;
                          ({ /* cicili#Progn7348 */
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
    return ({ /* cicili#Let7373 */
        __auto_type match7372  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
        typeof((((match7372 . __h_data ). Just ). __h_0_mem )) right_child_rc ;
        // ----------
        ;
        ({ /* cicili#Let7376 */
          bool __h_case_result  = (true  &&  (((match7372 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7377 */
                (right_child_rc  =  (((match7372 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn7382 */
              ({ /* cicili#Let7386 */
                __auto_type match7385  = get_Rc_BTree_int_User (right_child_rc );
                typeof((((match7385 . __h_data ). Just ). __h_0_mem )) right_child ;
                // ----------
                ;
                ({ /* cicili#Let7389 */
                  bool __h_case_result  = (true  &&  (((match7385 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7390 */
                        (right_child  =  (((match7385 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn7395 */
                      ({ /* cicili#Let7399 */
                        typeof((((right_child -> __h_data ). Branch ). __h_0_mem )) right_child_items ;
                        typeof((((right_child -> __h_data ). Branch ). __h_1_mem )) right_child_children ;
                        // ----------
                        ;
                        ({ /* cicili#Let7401 */
                          bool __h_case_result  = (true  &&  (((right_child -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn7402 */
                                  (right_child_items  =  (((right_child -> __h_data ). Branch ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn7404 */
                                  (right_child_children  =  (((right_child -> __h_data ). Branch ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn7409 */
                              (((hasLen_List_BTree_int_User_pair_t (right_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let7418 */
                                  __auto_type match7416  = min_BTree_int_User (right_child );
                                  typeof((((match7416 . __h_data ). Just ). __h_0_mem )) min ;
                                  typeof((min . __h_0_mem )) min_key ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let7421 */
                                    bool __h_case_result  = (true  &&  (((match7416 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn7422 */
                                            (min  =  (((match7416 . __h_data ). Just ). __h_0_mem ) );
                                            true ;
                                          }) &&  (true  &&  ({ /* cicili#Progn7424 */
                                              (min_key  =  (min . __h_0_mem ) );
                                              true ;
                                            }) ) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn7429 */
                                        ({ /* cicili#Let7433 */
                                          __auto_type match7432  = delete_BTree_int_User (right_child , min_key , NULL );
                                          typeof((((match7432 . __h_data ). Right ). __h_0_mem )) nchild ;
                                          // ----------
                                          ;
                                          ({ /* cicili#Let7436 */
                                            bool __h_case_result  = (true  &&  (((match7432 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn7437 */
                                                  (nchild  =  (((match7432 . __h_data ). Right ). __h_0_mem ) );
                                                  true ;
                                                }) ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* cicili#Progn7442 */
                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , min , current ), ({ /* cicili#Let7450 */
                                                    __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7452 */
                                                      __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                      // ----------
                                                      ((void)((r1 . __h_table )-> freeData ));
                                                      r1 ;
                                                    });
                                                    __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7456 */
                                                      __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , (index  +  1 ));
                                                      // ----------
                                                      ((void)((r2 . __h_table )-> freeData ));
                                                      r2 ;
                                                    });
                                                    // ----------
                                                    fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn7465 */
                                                        Rc_BTree_int_User __ciciliC_7464 (Rc_BTree_int_User __h_value ) {
                                                          return clone_Rc_BTree_int_User (__h_value );
                                                        }
                                                        __ciciliC_7464 ;
                                                      }), r2 );
                                                  })));
                                              }) : ({ /* cicili#Let7472 */
                                                __auto_type left  = match7432 ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Progn7474 */
                                                  left ;
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* cicili#Let7478 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn7480 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 1"));
                                        });
                                      }));
                                  });
                                }) : ({ /* cicili#Let7486 */
                                  __auto_type __h_matchbox  = current ;
                                  // ----------
                                  ({ /* cicili#Let7490 */
                                    __auto_type match7489  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                    typeof((((match7489 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                    // ----------
                                    ;
                                    ({ /* cicili#Let7493 */
                                      bool __h_case_result  = (true  &&  (((match7489 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7494 */
                                            (unboxed  =  (((match7489 . __h_data ). Just ). __h_0_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn7499 */
                                          ({ /* cicili#Let7504 */
                                            typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) current_item ;
                                            typeof((current_item . __h_0_mem )) current_key ;
                                            // ----------
                                            ;
                                            ({ /* cicili#Let7506 */
                                              bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn7507 */
                                                      (current_item  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                                                      true ;
                                                    }) &&  (true  &&  ({ /* cicili#Progn7509 */
                                                        (current_key  =  (current_item . __h_0_mem ) );
                                                        true ;
                                                      }) ) ) ) );
                                              // ----------
                                              
                                              ((__h_case_result ) ? ({ /* cicili#Progn7514 */
                                                  ({ /* cicili#Let7517 */
                                                    __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7519 */
                                                      __auto_type r1  = push_List_BTree_int_User_pair_t (current_item , right_child_items );
                                                      // ----------
                                                      ((void)((r1 . __h_table )-> freeData ));
                                                      r1 ;
                                                    });
                                                    __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7523 */
                                                      __auto_type r2  = append_List_Rc_BTree_int_User (left_child_children , right_child_children );
                                                      // ----------
                                                      ((void)((r2 . __h_table )-> freeData ));
                                                      r2 ;
                                                    });
                                                    __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7527 */
                                                      __auto_type r4  = Internal_BTree_int_User (append_List_BTree_int_User_pair_t (left_child_items , r1 ), fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn7536 */
                                                        Rc_BTree_int_User __ciciliC_7535 (Rc_BTree_int_User __h_value ) {
                                                          return clone_Rc_BTree_int_User (__h_value );
                                                        }
                                                        __ciciliC_7535 ;
                                                      }), r2 ));
                                                      // ----------
                                                      ((void)(r4 -> __h_table -> freeClass ));
                                                      r4 ;
                                                    });
                                                    __auto_type r5  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7543 */
                                                      __auto_type r5  = take_List_Rc_BTree_int_User (index , children );
                                                      // ----------
                                                      ((void)((r5 . __h_table )-> freeData ));
                                                      r5 ;
                                                    });
                                                    __auto_type r7  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7547 */
                                                      __auto_type r7  = drop_List_Rc_BTree_int_User ((index  +  2 ), children );
                                                      // ----------
                                                      ((void)((r7 . __h_table )-> freeData ));
                                                      r7 ;
                                                    });
                                                    // ----------
                                                    ({ /* cicili#Let7553 */
                                                      __auto_type match7552  = delete_BTree_int_User (r4 , current_key , NULL );
                                                      typeof((((match7552 . __h_data ). Right ). __h_0_mem )) ntree ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let7556 */
                                                        bool __h_case_result  = (true  &&  (((match7552 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn7557 */
                                                              (ntree  =  (((match7552 . __h_data ). Right ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn7562 */
                                                            ({ /* cicili#Let7566 */
                                                              __auto_type tmp_result  = splitForDelete_BTree_int_User (ntree );
                                                              typeof((((tmp_result -> __h_data ). Branch ). __h_0_mem )) branch_items ;
                                                              typeof((((tmp_result -> __h_data ). Branch ). __h_1_mem )) branch_children ;
                                                              // ----------
                                                              ;
                                                              ({ /* cicili#Let7569 */
                                                                bool __h_case_result  = (true  &&  (((tmp_result -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn7570 */
                                                                        (branch_items  =  (((tmp_result -> __h_data ). Branch ). __h_0_mem ) );
                                                                        true ;
                                                                      }) &&  ({ /* cicili#Progn7572 */
                                                                        (branch_children  =  (((tmp_result -> __h_data ). Branch ). __h_1_mem ) );
                                                                        true ;
                                                                      }) ) ) );
                                                                // ----------
                                                                
                                                                ((__h_case_result ) ? ({ /* cicili#Progn7577 */
                                                                    ({ /* cicili#Let7580 */
                                                                      __auto_type __h_matchbox  = branch_items ;
                                                                      // ----------
                                                                      ({ /* cicili#Let7584 */
                                                                        __auto_type match7583  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                        typeof((((match7583 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                        // ----------
                                                                        ;
                                                                        ({ /* cicili#Let7587 */
                                                                          bool __h_case_result  = (true  &&  (((match7583 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7588 */
                                                                                (unboxed  =  (((match7583 . __h_data ). Just ). __h_0_mem ) );
                                                                                true ;
                                                                              }) ) );
                                                                          // ----------
                                                                          
                                                                          ((__h_case_result ) ? ({ /* cicili#Progn7593 */
                                                                              ({ /* cicili#Let7597 */
                                                                                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) branch_head ;
                                                                                // ----------
                                                                                ;
                                                                                ({ /* cicili#Let7599 */
                                                                                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn7600 */
                                                                                        (branch_head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                                                                                        true ;
                                                                                      }) ) );
                                                                                  // ----------
                                                                                  
                                                                                  ((__h_case_result ) ? ({ /* cicili#Progn7605 */
                                                                                      ({ /* cicili#Let7608 */
                                                                                        __auto_type ntree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7610 */
                                                                                          __auto_type ntree  = ntree ;
                                                                                          // ----------
                                                                                          ((void)(ntree -> __h_table -> freeClass ));
                                                                                          ntree ;
                                                                                        });
                                                                                        __auto_type tmp_result  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7613 */
                                                                                          __auto_type tmp_result  = tmp_result ;
                                                                                          // ----------
                                                                                          ((void)(tmp_result -> __h_table -> freeClass ));
                                                                                          tmp_result ;
                                                                                        });
                                                                                        // ----------
                                                                                        Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , branch_head , current ), ({ /* cicili#Let7622 */
                                                                                            __auto_type r10  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7624 */
                                                                                              __auto_type r10  = append_List_Rc_BTree_int_User (branch_children , r7 );
                                                                                              // ----------
                                                                                              ((void)((r10 . __h_table )-> freeData ));
                                                                                              r10 ;
                                                                                            });
                                                                                            __auto_type r11  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7628 */
                                                                                              __auto_type r11  = append_List_Rc_BTree_int_User (r5 , r10 );
                                                                                              // ----------
                                                                                              ((void)((r11 . __h_table )-> freeData ));
                                                                                              r11 ;
                                                                                            });
                                                                                            // ----------
                                                                                            fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn7637 */
                                                                                                Rc_BTree_int_User __ciciliC_7636 (Rc_BTree_int_User __h_value ) {
                                                                                                  return clone_Rc_BTree_int_User (__h_value );
                                                                                                }
                                                                                                __ciciliC_7636 ;
                                                                                              }), r11 );
                                                                                          })));
                                                                                      });
                                                                                    }) : ({ /* cicili#Let7644 */
                                                                                      // ----------
                                                                                      ;
                                                                                      ({ /* cicili#Progn7646 */
                                                                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 2"));
                                                                                      });
                                                                                    }));
                                                                                });
                                                                              });
                                                                            }) : ({ /* cicili#Let7653 */
                                                                              // ----------
                                                                              ;
                                                                              ({ /* cicili#Progn7655 */
                                                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CONS ());
                                                                              });
                                                                            }));
                                                                        });
                                                                      });
                                                                    });
                                                                  }) : ({ /* cicili#Let7662 */
                                                                    // ----------
                                                                    ;
                                                                    ({ /* cicili#Let7664 */
                                                                      bool __h_case_result  = (true  &&  ((tmp_result -> __h_ctor ) ==  __h_Internal_t  ) );
                                                                      // ----------
                                                                      
                                                                      ((__h_case_result ) ? ({ /* cicili#Progn7668 */
                                                                          Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (delete_List_BTree_int_User_pair_t (items , current ), ({ /* cicili#Let7676 */
                                                                              __auto_type r9  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7678 */
                                                                                __auto_type r9  = new_Rc_BTree_int_User (ntree );
                                                                                // ----------
                                                                                ((void)((r9 . __h_table )-> freeData ));
                                                                                r9 ;
                                                                              });
                                                                              __auto_type r10  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7682 */
                                                                                __auto_type r10  = push_List_Rc_BTree_int_User (r9 , r7 );
                                                                                // ----------
                                                                                ((void)((r10 . __h_table )-> freeData ));
                                                                                r10 ;
                                                                              });
                                                                              __auto_type r11  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7686 */
                                                                                __auto_type r11  = append_List_Rc_BTree_int_User (r5 , r10 );
                                                                                // ----------
                                                                                ((void)((r11 . __h_table )-> freeData ));
                                                                                r11 ;
                                                                              });
                                                                              // ----------
                                                                              fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn7695 */
                                                                                  Rc_BTree_int_User __ciciliC_7694 (Rc_BTree_int_User __h_value ) {
                                                                                    return clone_Rc_BTree_int_User (__h_value );
                                                                                  }
                                                                                  __ciciliC_7694 ;
                                                                                }), r11 );
                                                                            })));
                                                                        }) : ({ /* cicili#Let7702 */
                                                                          // ----------
                                                                          ;
                                                                          ({ /* cicili#Progn7704 */
                                                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 3"));
                                                                          });
                                                                        }));
                                                                    });
                                                                  }));
                                                              });
                                                            });
                                                          }) : ({ /* cicili#Let7711 */
                                                            __auto_type left  = match7552 ;
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn7713 */
                                                              left ;
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  });
                                                }) : ({ /* cicili#Let7717 */
                                                  // ----------
                                                  ;
                                                  ({ /* cicili#Progn7719 */
                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 4"));
                                                  });
                                                }));
                                            });
                                          });
                                        }) : ({ /* cicili#Let7726 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Progn7728 */
                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CONS ());
                                          });
                                        }));
                                    });
                                  });
                                }));
                            }) : ({ /* cicili#Let7735 */
                              typeof((((right_child -> __h_data ). Internal ). __h_0_mem )) right_child_items ;
                              typeof((((right_child -> __h_data ). Internal ). __h_1_mem )) right_child_children ;
                              // ----------
                              ;
                              ({ /* cicili#Let7737 */
                                bool __h_case_result  = (true  &&  (((right_child -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn7738 */
                                        (right_child_items  =  (((right_child -> __h_data ). Internal ). __h_0_mem ) );
                                        true ;
                                      }) &&  ({ /* cicili#Progn7740 */
                                        (right_child_children  =  (((right_child -> __h_data ). Internal ). __h_1_mem ) );
                                        true ;
                                      }) ) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn7745 */
                                    (((hasLen_List_BTree_int_User_pair_t (right_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let7754 */
                                        __auto_type match7752  = min_BTree_int_User (right_child );
                                        typeof((((match7752 . __h_data ). Just ). __h_0_mem )) min ;
                                        typeof((min . __h_0_mem )) min_key ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let7757 */
                                          bool __h_case_result  = (true  &&  (((match7752 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn7758 */
                                                  (min  =  (((match7752 . __h_data ). Just ). __h_0_mem ) );
                                                  true ;
                                                }) &&  (true  &&  ({ /* cicili#Progn7760 */
                                                    (min_key  =  (min . __h_0_mem ) );
                                                    true ;
                                                  }) ) ) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn7765 */
                                              ({ /* cicili#Let7769 */
                                                __auto_type match7768  = delete_BTree_int_User (right_child , min_key , NULL );
                                                typeof((((match7768 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let7772 */
                                                  bool __h_case_result  = (true  &&  (((match7768 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn7773 */
                                                        (nchild  =  (((match7768 . __h_data ). Right ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn7778 */
                                                      Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , min , current ), ({ /* cicili#Let7786 */
                                                          __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7788 */
                                                            __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                            // ----------
                                                            ((void)((r1 . __h_table )-> freeData ));
                                                            r1 ;
                                                          });
                                                          __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7792 */
                                                            __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , (index  +  1 ));
                                                            // ----------
                                                            ((void)((r2 . __h_table )-> freeData ));
                                                            r2 ;
                                                          });
                                                          // ----------
                                                          fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn7801 */
                                                              Rc_BTree_int_User __ciciliC_7800 (Rc_BTree_int_User __h_value ) {
                                                                return clone_Rc_BTree_int_User (__h_value );
                                                              }
                                                              __ciciliC_7800 ;
                                                            }), r2 );
                                                        })));
                                                    }) : ({ /* cicili#Let7808 */
                                                      __auto_type left  = match7768 ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn7810 */
                                                        left ;
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let7814 */
                                              // ----------
                                              ;
                                              ({ /* cicili#Progn7816 */
                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 1"));
                                              });
                                            }));
                                        });
                                      }) : ({ /* cicili#Let7822 */
                                        __auto_type __h_matchbox  = current ;
                                        // ----------
                                        ({ /* cicili#Let7826 */
                                          __auto_type match7825  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                          typeof((((match7825 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                          // ----------
                                          ;
                                          ({ /* cicili#Let7829 */
                                            bool __h_case_result  = (true  &&  (((match7825 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7830 */
                                                  (unboxed  =  (((match7825 . __h_data ). Just ). __h_0_mem ) );
                                                  true ;
                                                }) ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* cicili#Progn7835 */
                                                ({ /* cicili#Let7840 */
                                                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) current_item ;
                                                  typeof((current_item . __h_0_mem )) current_key ;
                                                  // ----------
                                                  ;
                                                  ({ /* cicili#Let7842 */
                                                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn7843 */
                                                            (current_item  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                                                            true ;
                                                          }) &&  (true  &&  ({ /* cicili#Progn7845 */
                                                              (current_key  =  (current_item . __h_0_mem ) );
                                                              true ;
                                                            }) ) ) ) );
                                                    // ----------
                                                    
                                                    ((__h_case_result ) ? ({ /* cicili#Progn7850 */
                                                        ({ /* cicili#Let7853 */
                                                          __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7855 */
                                                            __auto_type r1  = push_List_BTree_int_User_pair_t (current_item , right_child_items );
                                                            // ----------
                                                            ((void)((r1 . __h_table )-> freeData ));
                                                            r1 ;
                                                          });
                                                          __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7859 */
                                                            __auto_type r2  = append_List_Rc_BTree_int_User (left_child_children , right_child_children );
                                                            // ----------
                                                            ((void)((r2 . __h_table )-> freeData ));
                                                            r2 ;
                                                          });
                                                          __auto_type r4  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7863 */
                                                            __auto_type r4  = Internal_BTree_int_User (append_List_BTree_int_User_pair_t (left_child_items , r1 ), fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn7872 */
                                                              Rc_BTree_int_User __ciciliC_7871 (Rc_BTree_int_User __h_value ) {
                                                                return clone_Rc_BTree_int_User (__h_value );
                                                              }
                                                              __ciciliC_7871 ;
                                                            }), r2 ));
                                                            // ----------
                                                            ((void)(r4 -> __h_table -> freeClass ));
                                                            r4 ;
                                                          });
                                                          __auto_type r5  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7879 */
                                                            __auto_type r5  = take_List_Rc_BTree_int_User (index , children );
                                                            // ----------
                                                            ((void)((r5 . __h_table )-> freeData ));
                                                            r5 ;
                                                          });
                                                          __auto_type r7  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7883 */
                                                            __auto_type r7  = drop_List_Rc_BTree_int_User ((index  +  2 ), children );
                                                            // ----------
                                                            ((void)((r7 . __h_table )-> freeData ));
                                                            r7 ;
                                                          });
                                                          // ----------
                                                          ({ /* cicili#Let7889 */
                                                            __auto_type match7888  = delete_BTree_int_User (r4 , current_key , NULL );
                                                            typeof((((match7888 . __h_data ). Right ). __h_0_mem )) ntree ;
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Let7892 */
                                                              bool __h_case_result  = (true  &&  (((match7888 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn7893 */
                                                                    (ntree  =  (((match7888 . __h_data ). Right ). __h_0_mem ) );
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              
                                                              ((__h_case_result ) ? ({ /* cicili#Progn7898 */
                                                                  ({ /* cicili#Let7902 */
                                                                    __auto_type tmp_result  = splitForDelete_BTree_int_User (ntree );
                                                                    typeof((((tmp_result -> __h_data ). Branch ). __h_0_mem )) branch_items ;
                                                                    typeof((((tmp_result -> __h_data ). Branch ). __h_1_mem )) branch_children ;
                                                                    // ----------
                                                                    ;
                                                                    ({ /* cicili#Let7905 */
                                                                      bool __h_case_result  = (true  &&  (((tmp_result -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn7906 */
                                                                              (branch_items  =  (((tmp_result -> __h_data ). Branch ). __h_0_mem ) );
                                                                              true ;
                                                                            }) &&  ({ /* cicili#Progn7908 */
                                                                              (branch_children  =  (((tmp_result -> __h_data ). Branch ). __h_1_mem ) );
                                                                              true ;
                                                                            }) ) ) );
                                                                      // ----------
                                                                      
                                                                      ((__h_case_result ) ? ({ /* cicili#Progn7913 */
                                                                          ({ /* cicili#Let7916 */
                                                                            __auto_type __h_matchbox  = branch_items ;
                                                                            // ----------
                                                                            ({ /* cicili#Let7920 */
                                                                              __auto_type match7919  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                              typeof((((match7919 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                              // ----------
                                                                              ;
                                                                              ({ /* cicili#Let7923 */
                                                                                bool __h_case_result  = (true  &&  (((match7919 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn7924 */
                                                                                      (unboxed  =  (((match7919 . __h_data ). Just ). __h_0_mem ) );
                                                                                      true ;
                                                                                    }) ) );
                                                                                // ----------
                                                                                
                                                                                ((__h_case_result ) ? ({ /* cicili#Progn7929 */
                                                                                    ({ /* cicili#Let7933 */
                                                                                      typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) branch_head ;
                                                                                      // ----------
                                                                                      ;
                                                                                      ({ /* cicili#Let7935 */
                                                                                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn7936 */
                                                                                              (branch_head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                                                                                              true ;
                                                                                            }) ) );
                                                                                        // ----------
                                                                                        
                                                                                        ((__h_case_result ) ? ({ /* cicili#Progn7941 */
                                                                                            ({ /* cicili#Let7944 */
                                                                                              __auto_type ntree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7946 */
                                                                                                __auto_type ntree  = ntree ;
                                                                                                // ----------
                                                                                                ((void)(ntree -> __h_table -> freeClass ));
                                                                                                ntree ;
                                                                                              });
                                                                                              __auto_type tmp_result  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let7949 */
                                                                                                __auto_type tmp_result  = tmp_result ;
                                                                                                // ----------
                                                                                                ((void)(tmp_result -> __h_table -> freeClass ));
                                                                                                tmp_result ;
                                                                                              });
                                                                                              // ----------
                                                                                              Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , branch_head , current ), ({ /* cicili#Let7958 */
                                                                                                  __auto_type r10  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7960 */
                                                                                                    __auto_type r10  = append_List_Rc_BTree_int_User (branch_children , r7 );
                                                                                                    // ----------
                                                                                                    ((void)((r10 . __h_table )-> freeData ));
                                                                                                    r10 ;
                                                                                                  });
                                                                                                  __auto_type r11  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let7964 */
                                                                                                    __auto_type r11  = append_List_Rc_BTree_int_User (r5 , r10 );
                                                                                                    // ----------
                                                                                                    ((void)((r11 . __h_table )-> freeData ));
                                                                                                    r11 ;
                                                                                                  });
                                                                                                  // ----------
                                                                                                  fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn7973 */
                                                                                                      Rc_BTree_int_User __ciciliC_7972 (Rc_BTree_int_User __h_value ) {
                                                                                                        return clone_Rc_BTree_int_User (__h_value );
                                                                                                      }
                                                                                                      __ciciliC_7972 ;
                                                                                                    }), r11 );
                                                                                                })));
                                                                                            });
                                                                                          }) : ({ /* cicili#Let7980 */
                                                                                            // ----------
                                                                                            ;
                                                                                            ({ /* cicili#Progn7982 */
                                                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 2"));
                                                                                            });
                                                                                          }));
                                                                                      });
                                                                                    });
                                                                                  }) : ({ /* cicili#Let7989 */
                                                                                    // ----------
                                                                                    ;
                                                                                    ({ /* cicili#Progn7991 */
                                                                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CONS ());
                                                                                    });
                                                                                  }));
                                                                              });
                                                                            });
                                                                          });
                                                                        }) : ({ /* cicili#Let7998 */
                                                                          // ----------
                                                                          ;
                                                                          ({ /* cicili#Let8000 */
                                                                            bool __h_case_result  = (true  &&  ((tmp_result -> __h_ctor ) ==  __h_Internal_t  ) );
                                                                            // ----------
                                                                            
                                                                            ((__h_case_result ) ? ({ /* cicili#Progn8004 */
                                                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (delete_List_BTree_int_User_pair_t (items , current ), ({ /* cicili#Let8012 */
                                                                                    __auto_type r9  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8014 */
                                                                                      __auto_type r9  = new_Rc_BTree_int_User (ntree );
                                                                                      // ----------
                                                                                      ((void)((r9 . __h_table )-> freeData ));
                                                                                      r9 ;
                                                                                    });
                                                                                    __auto_type r10  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8018 */
                                                                                      __auto_type r10  = push_List_Rc_BTree_int_User (r9 , r7 );
                                                                                      // ----------
                                                                                      ((void)((r10 . __h_table )-> freeData ));
                                                                                      r10 ;
                                                                                    });
                                                                                    __auto_type r11  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8022 */
                                                                                      __auto_type r11  = append_List_Rc_BTree_int_User (r5 , r10 );
                                                                                      // ----------
                                                                                      ((void)((r11 . __h_table )-> freeData ));
                                                                                      r11 ;
                                                                                    });
                                                                                    // ----------
                                                                                    fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn8031 */
                                                                                        Rc_BTree_int_User __ciciliC_8030 (Rc_BTree_int_User __h_value ) {
                                                                                          return clone_Rc_BTree_int_User (__h_value );
                                                                                        }
                                                                                        __ciciliC_8030 ;
                                                                                      }), r11 );
                                                                                  })));
                                                                              }) : ({ /* cicili#Let8038 */
                                                                                // ----------
                                                                                ;
                                                                                ({ /* cicili#Progn8040 */
                                                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 3"));
                                                                                });
                                                                              }));
                                                                          });
                                                                        }));
                                                                    });
                                                                  });
                                                                }) : ({ /* cicili#Let8047 */
                                                                  __auto_type left  = match7888 ;
                                                                  // ----------
                                                                  ;
                                                                  ({ /* cicili#Progn8049 */
                                                                    left ;
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        });
                                                      }) : ({ /* cicili#Let8053 */
                                                        // ----------
                                                        ;
                                                        ({ /* cicili#Progn8055 */
                                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 4"));
                                                        });
                                                      }));
                                                  });
                                                });
                                              }) : ({ /* cicili#Let8062 */
                                                // ----------
                                                ;
                                                ({ /* cicili#Progn8064 */
                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CONS ());
                                                });
                                              }));
                                          });
                                        });
                                      }));
                                  }) : ({ /* cicili#Let8071 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn8073 */
                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 5"));
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let8080 */
                      // ----------
                      ;
                      ({ /* cicili#Progn8082 */
                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 6"));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let8089 */
              // ----------
              ;
              ({ /* cicili#Progn8091 */
                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 7"));
              });
            }));
        });
      });
  }
  Either_BTree_int_User_Error_BTree_int_User borrowRightLeaf (List_BTree_int_User_pair_t left_child_items ) {
    return ({ /* cicili#Let8104 */
        __auto_type match8103  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
        typeof((((match8103 . __h_data ). Just ). __h_0_mem )) right_child_rc ;
        // ----------
        ;
        ({ /* cicili#Let8107 */
          bool __h_case_result  = (true  &&  (((match8103 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8108 */
                (right_child_rc  =  (((match8103 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn8113 */
              ({ /* cicili#Let8117 */
                __auto_type match8116  = get_Rc_BTree_int_User (right_child_rc );
                typeof((((match8116 . __h_data ). Just ). __h_0_mem )) right_child ;
                // ----------
                ;
                ({ /* cicili#Let8120 */
                  bool __h_case_result  = (true  &&  (((match8116 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8121 */
                        (right_child  =  (((match8116 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn8126 */
                      ({ /* cicili#Let8130 */
                        typeof((((right_child -> __h_data ). Leaf ). __h_0_mem )) right_child_items ;
                        // ----------
                        ;
                        ({ /* cicili#Let8132 */
                          bool __h_case_result  = (true  &&  (((right_child -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn8133 */
                                (right_child_items  =  (((right_child -> __h_data ). Leaf ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn8138 */
                              (((hasLen_List_BTree_int_User_pair_t (right_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let8147 */
                                  __auto_type match8145  = min_BTree_int_User (right_child );
                                  typeof((((match8145 . __h_data ). Just ). __h_0_mem )) min ;
                                  typeof((min . __h_0_mem )) min_key ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let8150 */
                                    bool __h_case_result  = (true  &&  (((match8145 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn8151 */
                                            (min  =  (((match8145 . __h_data ). Just ). __h_0_mem ) );
                                            true ;
                                          }) &&  (true  &&  ({ /* cicili#Progn8153 */
                                              (min_key  =  (min . __h_0_mem ) );
                                              true ;
                                            }) ) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn8158 */
                                        ({ /* cicili#Let8162 */
                                          __auto_type match8161  = delete_BTree_int_User (right_child , min_key , NULL );
                                          typeof((((match8161 . __h_data ). Right ). __h_0_mem )) nchild ;
                                          // ----------
                                          ;
                                          ({ /* cicili#Let8165 */
                                            bool __h_case_result  = (true  &&  (((match8161 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn8166 */
                                                  (nchild  =  (((match8161 . __h_data ). Right ). __h_0_mem ) );
                                                  true ;
                                                }) ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* cicili#Progn8171 */
                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , min , current ), ({ /* cicili#Let8179 */
                                                    __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8181 */
                                                      __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                      // ----------
                                                      ((void)((r1 . __h_table )-> freeData ));
                                                      r1 ;
                                                    });
                                                    __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8185 */
                                                      __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , (index  +  1 ));
                                                      // ----------
                                                      ((void)((r2 . __h_table )-> freeData ));
                                                      r2 ;
                                                    });
                                                    // ----------
                                                    fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn8194 */
                                                        Rc_BTree_int_User __ciciliC_8193 (Rc_BTree_int_User __h_value ) {
                                                          return clone_Rc_BTree_int_User (__h_value );
                                                        }
                                                        __ciciliC_8193 ;
                                                      }), r2 );
                                                  })));
                                              }) : ({ /* cicili#Let8201 */
                                                __auto_type left  = match8161 ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Progn8203 */
                                                  left ;
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* cicili#Let8207 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn8209 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 8"));
                                        });
                                      }));
                                  });
                                }) : Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (delete_List_BTree_int_User_pair_t (items , current ), ({ /* cicili#Let8220 */
                                  __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8222 */
                                    __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                    // ----------
                                    ((void)((r1 . __h_table )-> freeData ));
                                    r1 ;
                                  });
                                  __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8226 */
                                    __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn8232 */
                                      Rc_BTree_int_User __ciciliC_8231 (Rc_BTree_int_User __h_value ) {
                                        return clone_Rc_BTree_int_User (__h_value );
                                      }
                                      __ciciliC_8231 ;
                                    }), r1 );
                                    // ----------
                                    ((void)((r2 . __h_table )-> freeData ));
                                    r2 ;
                                  });
                                  __auto_type r3  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8239 */
                                    __auto_type r3  = drop_List_Rc_BTree_int_User ((index  +  2 ), children );
                                    // ----------
                                    ((void)((r3 . __h_table )-> freeData ));
                                    r3 ;
                                  });
                                  __auto_type r4  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8243 */
                                    __auto_type r4  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn8249 */
                                      Rc_BTree_int_User __ciciliC_8248 (Rc_BTree_int_User __h_value ) {
                                        return clone_Rc_BTree_int_User (__h_value );
                                      }
                                      __ciciliC_8248 ;
                                    }), r3 );
                                    // ----------
                                    ((void)((r4 . __h_table )-> freeData ));
                                    r4 ;
                                  });
                                  __auto_type r5  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8256 */
                                    __auto_type r5  = push_List_Rc_BTree_int_User (new_Rc_BTree_int_User (Leaf_BTree_int_User (append_List_BTree_int_User_pair_t (left_child_items , right_child_items ))), r4 );
                                    // ----------
                                    ((void)((r5 . __h_table )-> freeData ));
                                    r5 ;
                                  });
                                  // ----------
                                  append_List_Rc_BTree_int_User (r2 , r5 );
                                }))));
                            }) : ({ /* cicili#Let8267 */
                              // ----------
                              ;
                              ({ /* cicili#Progn8269 */
                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 9"));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let8276 */
                      // ----------
                      ;
                      ({ /* cicili#Progn8278 */
                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 10"));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let8285 */
              // ----------
              ;
              ({ /* cicili#Progn8287 */
                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 11"));
              });
            }));
        });
      });
  }
  return ({ /* cicili#Let8294 */
      __auto_type result  = ({ /* cicili#Let8297 */
        __auto_type match8296  = nth_List_Rc_BTree_int_User (index , children );
        typeof((((match8296 . __h_data ). Just ). __h_0_mem )) left_child_rc ;
        // ----------
        ;
        ({ /* cicili#Let8300 */
          bool __h_case_result  = (true  &&  (((match8296 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8301 */
                (left_child_rc  =  (((match8296 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn8306 */
              ({ /* cicili#Let8310 */
                __auto_type match8309  = get_Rc_BTree_int_User (left_child_rc );
                typeof((((match8309 . __h_data ). Just ). __h_0_mem )) left_child ;
                // ----------
                ;
                ({ /* cicili#Let8313 */
                  bool __h_case_result  = (true  &&  (((match8309 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8314 */
                        (left_child  =  (((match8309 . __h_data ). Just ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn8319 */
                      ({ /* cicili#Let8323 */
                        typeof((((left_child -> __h_data ). Branch ). __h_0_mem )) left_child_items ;
                        typeof((((left_child -> __h_data ). Branch ). __h_1_mem )) left_child_children ;
                        // ----------
                        ;
                        ({ /* cicili#Let8325 */
                          bool __h_case_result  = (true  &&  (((left_child -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn8326 */
                                  (left_child_items  =  (((left_child -> __h_data ). Branch ). __h_0_mem ) );
                                  true ;
                                }) &&  ({ /* cicili#Progn8328 */
                                  (left_child_children  =  (((left_child -> __h_data ). Branch ). __h_1_mem ) );
                                  true ;
                                }) ) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn8333 */
                              (((hasLen_List_BTree_int_User_pair_t (left_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let8342 */
                                  __auto_type match8340  = max_BTree_int_User (left_child );
                                  typeof((((match8340 . __h_data ). Just ). __h_0_mem )) max ;
                                  typeof((max . __h_0_mem )) max_key ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let8345 */
                                    bool __h_case_result  = (true  &&  (((match8340 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn8346 */
                                            (max  =  (((match8340 . __h_data ). Just ). __h_0_mem ) );
                                            true ;
                                          }) &&  (true  &&  ({ /* cicili#Progn8348 */
                                              (max_key  =  (max . __h_0_mem ) );
                                              true ;
                                            }) ) ) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn8353 */
                                        ({ /* cicili#Let8357 */
                                          __auto_type match8356  = delete_BTree_int_User (left_child , max_key , NULL );
                                          typeof((((match8356 . __h_data ). Right ). __h_0_mem )) nchild ;
                                          // ----------
                                          ;
                                          ({ /* cicili#Let8360 */
                                            bool __h_case_result  = (true  &&  (((match8356 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn8361 */
                                                  (nchild  =  (((match8356 . __h_data ). Right ). __h_0_mem ) );
                                                  true ;
                                                }) ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* cicili#Progn8366 */
                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , max , current ), ({ /* cicili#Let8374 */
                                                    __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8376 */
                                                      __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                      // ----------
                                                      ((void)((r1 . __h_table )-> freeData ));
                                                      r1 ;
                                                    });
                                                    __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8380 */
                                                      __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                                                      // ----------
                                                      ((void)((r2 . __h_table )-> freeData ));
                                                      r2 ;
                                                    });
                                                    // ----------
                                                    fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn8389 */
                                                        Rc_BTree_int_User __ciciliC_8388 (Rc_BTree_int_User __h_value ) {
                                                          return clone_Rc_BTree_int_User (__h_value );
                                                        }
                                                        __ciciliC_8388 ;
                                                      }), r2 );
                                                  })));
                                              }) : ({ /* cicili#Let8396 */
                                                __auto_type left  = match8356 ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Progn8398 */
                                                  left ;
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* cicili#Let8402 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn8404 */
                                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 12"));
                                        });
                                      }));
                                  });
                                }) : borrowRightInternal (left_child_items , left_child_children ));
                            }) : ({ /* cicili#Let8411 */
                              typeof((((left_child -> __h_data ). Internal ). __h_0_mem )) left_child_items ;
                              typeof((((left_child -> __h_data ). Internal ). __h_1_mem )) left_child_children ;
                              // ----------
                              ;
                              ({ /* cicili#Let8413 */
                                bool __h_case_result  = (true  &&  (((left_child -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn8414 */
                                        (left_child_items  =  (((left_child -> __h_data ). Internal ). __h_0_mem ) );
                                        true ;
                                      }) &&  ({ /* cicili#Progn8416 */
                                        (left_child_children  =  (((left_child -> __h_data ). Internal ). __h_1_mem ) );
                                        true ;
                                      }) ) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn8421 */
                                    (((hasLen_List_BTree_int_User_pair_t (left_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let8430 */
                                        __auto_type match8428  = max_BTree_int_User (left_child );
                                        typeof((((match8428 . __h_data ). Just ). __h_0_mem )) max ;
                                        typeof((max . __h_0_mem )) max_key ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let8433 */
                                          bool __h_case_result  = (true  &&  (((match8428 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn8434 */
                                                  (max  =  (((match8428 . __h_data ). Just ). __h_0_mem ) );
                                                  true ;
                                                }) &&  (true  &&  ({ /* cicili#Progn8436 */
                                                    (max_key  =  (max . __h_0_mem ) );
                                                    true ;
                                                  }) ) ) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn8441 */
                                              ({ /* cicili#Let8445 */
                                                __auto_type match8444  = delete_BTree_int_User (left_child , max_key , NULL );
                                                typeof((((match8444 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let8448 */
                                                  bool __h_case_result  = (true  &&  (((match8444 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn8449 */
                                                        (nchild  =  (((match8444 . __h_data ). Right ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn8454 */
                                                      Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , max , current ), ({ /* cicili#Let8462 */
                                                          __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8464 */
                                                            __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                            // ----------
                                                            ((void)((r1 . __h_table )-> freeData ));
                                                            r1 ;
                                                          });
                                                          __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8468 */
                                                            __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                                                            // ----------
                                                            ((void)((r2 . __h_table )-> freeData ));
                                                            r2 ;
                                                          });
                                                          // ----------
                                                          fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn8477 */
                                                              Rc_BTree_int_User __ciciliC_8476 (Rc_BTree_int_User __h_value ) {
                                                                return clone_Rc_BTree_int_User (__h_value );
                                                              }
                                                              __ciciliC_8476 ;
                                                            }), r2 );
                                                        })));
                                                    }) : ({ /* cicili#Let8484 */
                                                      __auto_type left  = match8444 ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn8486 */
                                                        left ;
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let8490 */
                                              // ----------
                                              ;
                                              ({ /* cicili#Progn8492 */
                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 12"));
                                              });
                                            }));
                                        });
                                      }) : borrowRightInternal (left_child_items , left_child_children ));
                                  }) : ({ /* cicili#Let8499 */
                                    typeof((((left_child -> __h_data ). Leaf ). __h_0_mem )) left_child_items ;
                                    // ----------
                                    ;
                                    ({ /* cicili#Let8501 */
                                      bool __h_case_result  = (true  &&  (((left_child -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn8502 */
                                            (left_child_items  =  (((left_child -> __h_data ). Leaf ). __h_0_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn8507 */
                                          (((hasLen_List_BTree_int_User_pair_t (left_child_items , L_BTree_int_User ) ==  L_BTree_int_User  )) ? ({ /* cicili#Let8516 */
                                              __auto_type match8514  = max_BTree_int_User (left_child );
                                              typeof((((match8514 . __h_data ). Just ). __h_0_mem )) max ;
                                              typeof((max . __h_0_mem )) max_key ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let8519 */
                                                bool __h_case_result  = (true  &&  (((match8514 . __h_ctor ) ==  __h_Just_t  ) &&  (({ /* cicili#Progn8520 */
                                                        (max  =  (((match8514 . __h_data ). Just ). __h_0_mem ) );
                                                        true ;
                                                      }) &&  (true  &&  ({ /* cicili#Progn8522 */
                                                          (max_key  =  (max . __h_0_mem ) );
                                                          true ;
                                                        }) ) ) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn8527 */
                                                    ({ /* cicili#Let8531 */
                                                      __auto_type match8530  = delete_BTree_int_User (left_child , max_key , NULL );
                                                      typeof((((match8530 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let8534 */
                                                        bool __h_case_result  = (true  &&  (((match8530 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn8535 */
                                                              (nchild  =  (((match8530 . __h_data ). Right ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn8540 */
                                                            Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (replace_List_BTree_int_User_pair_t (items , max , current ), ({ /* cicili#Let8548 */
                                                                __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8550 */
                                                                  __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                                  // ----------
                                                                  ((void)((r1 . __h_table )-> freeData ));
                                                                  r1 ;
                                                                });
                                                                __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8554 */
                                                                  __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                                                                  // ----------
                                                                  ((void)((r2 . __h_table )-> freeData ));
                                                                  r2 ;
                                                                });
                                                                // ----------
                                                                fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn8563 */
                                                                    Rc_BTree_int_User __ciciliC_8562 (Rc_BTree_int_User __h_value ) {
                                                                      return clone_Rc_BTree_int_User (__h_value );
                                                                    }
                                                                    __ciciliC_8562 ;
                                                                  }), r2 );
                                                              })));
                                                          }) : ({ /* cicili#Let8570 */
                                                            __auto_type left  = match8530 ;
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn8572 */
                                                              left ;
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  }) : ({ /* cicili#Let8576 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn8578 */
                                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 13"));
                                                    });
                                                  }));
                                              });
                                            }) : borrowRightLeaf (left_child_items ));
                                        }) : ({ /* cicili#Let8585 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Progn8587 */
                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 14"));
                                          });
                                        }));
                                    });
                                  }));
                              });
                            }));
                        });
                      });
                    }) : ({ /* cicili#Let8594 */
                      // ----------
                      ;
                      ({ /* cicili#Progn8596 */
                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("borrowRI 15"));
                      });
                    }));
                });
              });
            }) : ({ /* cicili#Let8603 */
              // ----------
              ;
              ({ /* cicili#Progn8605 */
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
    return ({ /* cicili#Let8633 */
        __auto_type result  = ({ /* cicili#Let8635 */
          __auto_type __h_matchbox  = current ;
          // ----------
          ({ /* cicili#Let8639 */
            __auto_type match8638  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
            typeof((((match8638 . __h_data ). Just ). __h_0_mem )) unboxed ;
            // ----------
            ;
            ({ /* cicili#Let8642 */
              bool __h_case_result  = (true  &&  (((match8638 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8643 */
                    (unboxed  =  (((match8638 . __h_data ). Just ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn8648 */
                  ({ /* cicili#Let8653 */
                    typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                    typeof((head . __h_0_mem )) key ;
                    typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                    // ----------
                    ;
                    ({ /* cicili#Let8655 */
                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn8656 */
                                (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                                true ;
                              }) &&  (true  &&  ({ /* cicili#Progn8658 */
                                  (key  =  (head . __h_0_mem ) );
                                  true ;
                                }) ) ) &&  ({ /* cicili#Progn8660 */
                              (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                              true ;
                            }) ) ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* cicili#Progn8665 */
                          ({ /* cicili#Let8669 */
                            __auto_type match8668  = compareKey (skey , key );
                            // ----------
                            ;
                            ({ /* cicili#Let8671 */
                              bool __h_case_result  = (true  &&  ((match8668 . __h_ctor ) ==  __h_LT_t  ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* cicili#Progn8675 */
                                  ({ /* cicili#Let8679 */
                                    __auto_type match8678  = nth_List_Rc_BTree_int_User (index , children );
                                    typeof((((match8678 . __h_data ). Just ). __h_0_mem )) child ;
                                    // ----------
                                    ;
                                    ({ /* cicili#Let8682 */
                                      bool __h_case_result  = (true  &&  (((match8678 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8683 */
                                            (child  =  (((match8678 . __h_data ). Just ). __h_0_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn8688 */
                                          ({ /* cicili#Let8692 */
                                            __auto_type match8691  = get_Rc_BTree_int_User (child );
                                            typeof((((match8691 . __h_data ). Just ). __h_0_mem )) tr ;
                                            // ----------
                                            ;
                                            ({ /* cicili#Let8695 */
                                              bool __h_case_result  = (true  &&  (((match8691 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8696 */
                                                    (tr  =  (((match8691 . __h_data ). Just ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              
                                              ((__h_case_result ) ? ({ /* cicili#Progn8701 */
                                                  ({ /* cicili#Let8705 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Let8707 */
                                                      bool __h_case_result  = (true  &&  ((tr -> __h_ctor ) ==  __h_Branch_t  ) );
                                                      // ----------
                                                      
                                                      ((__h_case_result ) ? ({ /* cicili#Progn8711 */
                                                          ({ /* cicili#Let8715 */
                                                            __auto_type match8714  = deleteWithParent_BTree_int_User (tree , (((index  >  0 )) ? (index  -  1 ) : index ), index , tr , skey , callback );
                                                            typeof((((match8714 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Let8718 */
                                                              bool __h_case_result  = (true  &&  (((match8714 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn8719 */
                                                                    (nchild  =  (((match8714 . __h_data ). Right ). __h_0_mem ) );
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              
                                                              ((__h_case_result ) ? ({ /* cicili#Progn8724 */
                                                                  ({ /* cicili#Let8728 */
                                                                    typeof((((nchild -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                                                    typeof((((nchild -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                                                    // ----------
                                                                    ;
                                                                    ({ /* cicili#Let8730 */
                                                                      bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn8731 */
                                                                              (child_items  =  (((nchild -> __h_data ). Branch ). __h_0_mem ) );
                                                                              true ;
                                                                            }) &&  ({ /* cicili#Progn8733 */
                                                                              (child_children  =  (((nchild -> __h_data ). Branch ). __h_1_mem ) );
                                                                              true ;
                                                                            }) ) ) );
                                                                      // ----------
                                                                      
                                                                      ((__h_case_result ) ? ({ /* cicili#Progn8738 */
                                                                          ({ /* cicili#Let8742 */
                                                                            __auto_type match8741  = nth_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                                            typeof((((match8741 . __h_data ). Just ). __h_0_mem )) wleft ;
                                                                            // ----------
                                                                            ;
                                                                            ({ /* cicili#Let8745 */
                                                                              bool __h_case_result  = (true  &&  (((match8741 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8746 */
                                                                                    (wleft  =  (((match8741 . __h_data ). Just ). __h_0_mem ) );
                                                                                    true ;
                                                                                  }) ) );
                                                                              // ----------
                                                                              
                                                                              ((__h_case_result ) ? ({ /* cicili#Progn8751 */
                                                                                  ({ /* cicili#Let8754 */
                                                                                    __auto_type __h_matchbox  = wleft ;
                                                                                    // ----------
                                                                                    ({ /* cicili#Let8758 */
                                                                                      __auto_type match8757  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                      typeof((((match8757 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                      // ----------
                                                                                      ;
                                                                                      ({ /* cicili#Let8761 */
                                                                                        bool __h_case_result  = (true  &&  (((match8757 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8762 */
                                                                                              (unboxed  =  (((match8757 . __h_data ). Just ). __h_0_mem ) );
                                                                                              true ;
                                                                                            }) ) );
                                                                                        // ----------
                                                                                        
                                                                                        ((__h_case_result ) ? ({ /* cicili#Progn8767 */
                                                                                            ({ /* cicili#Let8771 */
                                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) left_items ;
                                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) left_children ;
                                                                                              // ----------
                                                                                              ;
                                                                                              ({ /* cicili#Let8773 */
                                                                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn8774 */
                                                                                                        (left_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                                        true ;
                                                                                                      }) &&  ({ /* cicili#Progn8776 */
                                                                                                        (left_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                                        true ;
                                                                                                      }) ) ) );
                                                                                                // ----------
                                                                                                
                                                                                                ((__h_case_result ) ? ({ /* cicili#Progn8781 */
                                                                                                    ({ /* cicili#Let8784 */
                                                                                                      __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8786 */
                                                                                                        __auto_type nchild  = nchild ;
                                                                                                        // ----------
                                                                                                        ((void)(nchild -> __h_table -> freeClass ));
                                                                                                        nchild ;
                                                                                                      });
                                                                                                      // ----------
                                                                                                      Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), (((index  >  0 )) ? (index  -  1 ) : index ), left_items , left_children , child_items , child_children ));
                                                                                                    });
                                                                                                  }) : ({ /* cicili#Let8794 */
                                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) left_items ;
                                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) left_children ;
                                                                                                    // ----------
                                                                                                    ;
                                                                                                    ({ /* cicili#Let8796 */
                                                                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn8797 */
                                                                                                              (left_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                              true ;
                                                                                                            }) &&  ({ /* cicili#Progn8799 */
                                                                                                              (left_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                              true ;
                                                                                                            }) ) ) );
                                                                                                      // ----------
                                                                                                      
                                                                                                      ((__h_case_result ) ? ({ /* cicili#Progn8804 */
                                                                                                          ({ /* cicili#Let8807 */
                                                                                                            __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8809 */
                                                                                                              __auto_type nchild  = nchild ;
                                                                                                              // ----------
                                                                                                              ((void)(nchild -> __h_table -> freeClass ));
                                                                                                              nchild ;
                                                                                                            });
                                                                                                            // ----------
                                                                                                            Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), (((index  >  0 )) ? (index  -  1 ) : index ), left_items , left_children , child_items , child_children ));
                                                                                                          });
                                                                                                        }) : ({ /* cicili#Let8817 */
                                                                                                          // ----------
                                                                                                          ;
                                                                                                          ({ /* cicili#Progn8819 */
                                                                                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL1-1"));
                                                                                                          });
                                                                                                        }));
                                                                                                    });
                                                                                                  }));
                                                                                              });
                                                                                            });
                                                                                          }) : ({ /* cicili#Let8826 */
                                                                                            // ----------
                                                                                            ;
                                                                                            ({ /* cicili#Progn8828 */
                                                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL1"));
                                                                                            });
                                                                                          }));
                                                                                      });
                                                                                    });
                                                                                  });
                                                                                }) : ({ /* cicili#Let8835 */
                                                                                  // ----------
                                                                                  ;
                                                                                  ({ /* cicili#Progn8837 */
                                                                                    ({ /* cicili#Let8841 */
                                                                                      __auto_type match8840  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                                      typeof((((match8840 . __h_data ). Just ). __h_0_mem )) wright ;
                                                                                      // ----------
                                                                                      ;
                                                                                      ({ /* cicili#Let8844 */
                                                                                        bool __h_case_result  = (true  &&  (((match8840 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8845 */
                                                                                              (wright  =  (((match8840 . __h_data ). Just ). __h_0_mem ) );
                                                                                              true ;
                                                                                            }) ) );
                                                                                        // ----------
                                                                                        
                                                                                        ((__h_case_result ) ? ({ /* cicili#Progn8850 */
                                                                                            ({ /* cicili#Let8853 */
                                                                                              __auto_type __h_matchbox  = wright ;
                                                                                              // ----------
                                                                                              ({ /* cicili#Let8857 */
                                                                                                __auto_type match8856  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                                typeof((((match8856 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                                // ----------
                                                                                                ;
                                                                                                ({ /* cicili#Let8860 */
                                                                                                  bool __h_case_result  = (true  &&  (((match8856 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn8861 */
                                                                                                        (unboxed  =  (((match8856 . __h_data ). Just ). __h_0_mem ) );
                                                                                                        true ;
                                                                                                      }) ) );
                                                                                                  // ----------
                                                                                                  
                                                                                                  ((__h_case_result ) ? ({ /* cicili#Progn8866 */
                                                                                                      ({ /* cicili#Let8870 */
                                                                                                        typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) right_items ;
                                                                                                        typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) right_children ;
                                                                                                        // ----------
                                                                                                        ;
                                                                                                        ({ /* cicili#Let8872 */
                                                                                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn8873 */
                                                                                                                  (right_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                                                  true ;
                                                                                                                }) &&  ({ /* cicili#Progn8875 */
                                                                                                                  (right_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                                                  true ;
                                                                                                                }) ) ) );
                                                                                                          // ----------
                                                                                                          
                                                                                                          ((__h_case_result ) ? ({ /* cicili#Progn8880 */
                                                                                                              ({ /* cicili#Let8883 */
                                                                                                                __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8885 */
                                                                                                                  __auto_type nchild  = nchild ;
                                                                                                                  // ----------
                                                                                                                  ((void)(nchild -> __h_table -> freeClass ));
                                                                                                                  nchild ;
                                                                                                                });
                                                                                                                // ----------
                                                                                                                Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), index , child_items , child_children , right_items , right_children ));
                                                                                                              });
                                                                                                            }) : ({ /* cicili#Let8893 */
                                                                                                              typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) right_items ;
                                                                                                              typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) right_children ;
                                                                                                              // ----------
                                                                                                              ;
                                                                                                              ({ /* cicili#Let8895 */
                                                                                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn8896 */
                                                                                                                        (right_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                                        true ;
                                                                                                                      }) &&  ({ /* cicili#Progn8898 */
                                                                                                                        (right_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                                        true ;
                                                                                                                      }) ) ) );
                                                                                                                // ----------
                                                                                                                
                                                                                                                ((__h_case_result ) ? ({ /* cicili#Progn8903 */
                                                                                                                    ({ /* cicili#Let8906 */
                                                                                                                      __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let8908 */
                                                                                                                        __auto_type nchild  = nchild ;
                                                                                                                        // ----------
                                                                                                                        ((void)(nchild -> __h_table -> freeClass ));
                                                                                                                        nchild ;
                                                                                                                      });
                                                                                                                      // ----------
                                                                                                                      Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), index , child_items , child_children , right_items , right_children ));
                                                                                                                    });
                                                                                                                  }) : ({ /* cicili#Let8916 */
                                                                                                                    // ----------
                                                                                                                    ;
                                                                                                                    ({ /* cicili#Progn8918 */
                                                                                                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR2-1"));
                                                                                                                    });
                                                                                                                  }));
                                                                                                              });
                                                                                                            }));
                                                                                                        });
                                                                                                      });
                                                                                                    }) : ({ /* cicili#Let8925 */
                                                                                                      // ----------
                                                                                                      ;
                                                                                                      ({ /* cicili#Progn8927 */
                                                                                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR2"));
                                                                                                      });
                                                                                                    }));
                                                                                                });
                                                                                              });
                                                                                            });
                                                                                          }) : ({ /* cicili#Let8934 */
                                                                                            // ----------
                                                                                            ;
                                                                                            ({ /* cicili#Progn8936 */
                                                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR1"));
                                                                                            });
                                                                                          }));
                                                                                      });
                                                                                    });
                                                                                  });
                                                                                }));
                                                                            });
                                                                          });
                                                                        }) : ({ /* cicili#Let8943 */
                                                                          // ----------
                                                                          ;
                                                                          ({ /* cicili#Progn8945 */
                                                                            Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (clone_Box_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let8953 */
                                                                                __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8955 */
                                                                                  __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                                                  // ----------
                                                                                  ((void)((r1 . __h_table )-> freeData ));
                                                                                  r1 ;
                                                                                });
                                                                                __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let8959 */
                                                                                  __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                                                                                  // ----------
                                                                                  ((void)((r2 . __h_table )-> freeData ));
                                                                                  r2 ;
                                                                                });
                                                                                // ----------
                                                                                fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn8968 */
                                                                                    Rc_BTree_int_User __ciciliC_8967 (Rc_BTree_int_User __h_value ) {
                                                                                      return clone_Rc_BTree_int_User (__h_value );
                                                                                    }
                                                                                    __ciciliC_8967 ;
                                                                                  }), r2 );
                                                                              })));
                                                                          });
                                                                        }));
                                                                    });
                                                                  });
                                                                }) : ({ /* cicili#Let8975 */
                                                                  __auto_type left  = match8714 ;
                                                                  // ----------
                                                                  ;
                                                                  ({ /* cicili#Progn8977 */
                                                                    left ;
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        }) : ({ /* cicili#Let8981 */
                                                          // ----------
                                                          ;
                                                          ({ /* cicili#Let8983 */
                                                            bool __h_case_result  = (true  &&  ((tr -> __h_ctor ) ==  __h_Internal_t  ) );
                                                            // ----------
                                                            
                                                            ((__h_case_result ) ? ({ /* cicili#Progn8987 */
                                                                ({ /* cicili#Let8991 */
                                                                  __auto_type match8990  = deleteWithParent_BTree_int_User (tree , (((index  >  0 )) ? (index  -  1 ) : index ), index , tr , skey , callback );
                                                                  typeof((((match8990 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                                  // ----------
                                                                  ;
                                                                  ({ /* cicili#Let8994 */
                                                                    bool __h_case_result  = (true  &&  (((match8990 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn8995 */
                                                                          (nchild  =  (((match8990 . __h_data ). Right ). __h_0_mem ) );
                                                                          true ;
                                                                        }) ) );
                                                                    // ----------
                                                                    
                                                                    ((__h_case_result ) ? ({ /* cicili#Progn9000 */
                                                                        ({ /* cicili#Let9004 */
                                                                          typeof((((nchild -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                                                          typeof((((nchild -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                                                          // ----------
                                                                          ;
                                                                          ({ /* cicili#Let9006 */
                                                                            bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9007 */
                                                                                    (child_items  =  (((nchild -> __h_data ). Branch ). __h_0_mem ) );
                                                                                    true ;
                                                                                  }) &&  ({ /* cicili#Progn9009 */
                                                                                    (child_children  =  (((nchild -> __h_data ). Branch ). __h_1_mem ) );
                                                                                    true ;
                                                                                  }) ) ) );
                                                                            // ----------
                                                                            
                                                                            ((__h_case_result ) ? ({ /* cicili#Progn9014 */
                                                                                ({ /* cicili#Let9018 */
                                                                                  __auto_type match9017  = nth_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                                                  typeof((((match9017 . __h_data ). Just ). __h_0_mem )) wleft ;
                                                                                  // ----------
                                                                                  ;
                                                                                  ({ /* cicili#Let9021 */
                                                                                    bool __h_case_result  = (true  &&  (((match9017 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9022 */
                                                                                          (wleft  =  (((match9017 . __h_data ). Just ). __h_0_mem ) );
                                                                                          true ;
                                                                                        }) ) );
                                                                                    // ----------
                                                                                    
                                                                                    ((__h_case_result ) ? ({ /* cicili#Progn9027 */
                                                                                        ({ /* cicili#Let9030 */
                                                                                          __auto_type __h_matchbox  = wleft ;
                                                                                          // ----------
                                                                                          ({ /* cicili#Let9034 */
                                                                                            __auto_type match9033  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                            typeof((((match9033 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                            // ----------
                                                                                            ;
                                                                                            ({ /* cicili#Let9037 */
                                                                                              bool __h_case_result  = (true  &&  (((match9033 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9038 */
                                                                                                    (unboxed  =  (((match9033 . __h_data ). Just ). __h_0_mem ) );
                                                                                                    true ;
                                                                                                  }) ) );
                                                                                              // ----------
                                                                                              
                                                                                              ((__h_case_result ) ? ({ /* cicili#Progn9043 */
                                                                                                  ({ /* cicili#Let9047 */
                                                                                                    typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) left_items ;
                                                                                                    typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) left_children ;
                                                                                                    // ----------
                                                                                                    ;
                                                                                                    ({ /* cicili#Let9049 */
                                                                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9050 */
                                                                                                              (left_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                                              true ;
                                                                                                            }) &&  ({ /* cicili#Progn9052 */
                                                                                                              (left_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                                              true ;
                                                                                                            }) ) ) );
                                                                                                      // ----------
                                                                                                      
                                                                                                      ((__h_case_result ) ? ({ /* cicili#Progn9057 */
                                                                                                          ({ /* cicili#Let9060 */
                                                                                                            __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9062 */
                                                                                                              __auto_type nchild  = nchild ;
                                                                                                              // ----------
                                                                                                              ((void)(nchild -> __h_table -> freeClass ));
                                                                                                              nchild ;
                                                                                                            });
                                                                                                            // ----------
                                                                                                            Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), (((index  >  0 )) ? (index  -  1 ) : index ), left_items , left_children , child_items , child_children ));
                                                                                                          });
                                                                                                        }) : ({ /* cicili#Let9070 */
                                                                                                          typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) left_items ;
                                                                                                          typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) left_children ;
                                                                                                          // ----------
                                                                                                          ;
                                                                                                          ({ /* cicili#Let9072 */
                                                                                                            bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn9073 */
                                                                                                                    (left_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                                    true ;
                                                                                                                  }) &&  ({ /* cicili#Progn9075 */
                                                                                                                    (left_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                                    true ;
                                                                                                                  }) ) ) );
                                                                                                            // ----------
                                                                                                            
                                                                                                            ((__h_case_result ) ? ({ /* cicili#Progn9080 */
                                                                                                                ({ /* cicili#Let9083 */
                                                                                                                  __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9085 */
                                                                                                                    __auto_type nchild  = nchild ;
                                                                                                                    // ----------
                                                                                                                    ((void)(nchild -> __h_table -> freeClass ));
                                                                                                                    nchild ;
                                                                                                                  });
                                                                                                                  // ----------
                                                                                                                  Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), (((index  >  0 )) ? (index  -  1 ) : index ), left_items , left_children , child_items , child_children ));
                                                                                                                });
                                                                                                              }) : ({ /* cicili#Let9093 */
                                                                                                                // ----------
                                                                                                                ;
                                                                                                                ({ /* cicili#Progn9095 */
                                                                                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL1-1"));
                                                                                                                });
                                                                                                              }));
                                                                                                          });
                                                                                                        }));
                                                                                                    });
                                                                                                  });
                                                                                                }) : ({ /* cicili#Let9102 */
                                                                                                  // ----------
                                                                                                  ;
                                                                                                  ({ /* cicili#Progn9104 */
                                                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL1"));
                                                                                                  });
                                                                                                }));
                                                                                            });
                                                                                          });
                                                                                        });
                                                                                      }) : ({ /* cicili#Let9111 */
                                                                                        // ----------
                                                                                        ;
                                                                                        ({ /* cicili#Progn9113 */
                                                                                          ({ /* cicili#Let9117 */
                                                                                            __auto_type match9116  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                                            typeof((((match9116 . __h_data ). Just ). __h_0_mem )) wright ;
                                                                                            // ----------
                                                                                            ;
                                                                                            ({ /* cicili#Let9120 */
                                                                                              bool __h_case_result  = (true  &&  (((match9116 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9121 */
                                                                                                    (wright  =  (((match9116 . __h_data ). Just ). __h_0_mem ) );
                                                                                                    true ;
                                                                                                  }) ) );
                                                                                              // ----------
                                                                                              
                                                                                              ((__h_case_result ) ? ({ /* cicili#Progn9126 */
                                                                                                  ({ /* cicili#Let9129 */
                                                                                                    __auto_type __h_matchbox  = wright ;
                                                                                                    // ----------
                                                                                                    ({ /* cicili#Let9133 */
                                                                                                      __auto_type match9132  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                                      typeof((((match9132 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                                      // ----------
                                                                                                      ;
                                                                                                      ({ /* cicili#Let9136 */
                                                                                                        bool __h_case_result  = (true  &&  (((match9132 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9137 */
                                                                                                              (unboxed  =  (((match9132 . __h_data ). Just ). __h_0_mem ) );
                                                                                                              true ;
                                                                                                            }) ) );
                                                                                                        // ----------
                                                                                                        
                                                                                                        ((__h_case_result ) ? ({ /* cicili#Progn9142 */
                                                                                                            ({ /* cicili#Let9146 */
                                                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) right_items ;
                                                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) right_children ;
                                                                                                              // ----------
                                                                                                              ;
                                                                                                              ({ /* cicili#Let9148 */
                                                                                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9149 */
                                                                                                                        (right_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                                                        true ;
                                                                                                                      }) &&  ({ /* cicili#Progn9151 */
                                                                                                                        (right_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                                                        true ;
                                                                                                                      }) ) ) );
                                                                                                                // ----------
                                                                                                                
                                                                                                                ((__h_case_result ) ? ({ /* cicili#Progn9156 */
                                                                                                                    ({ /* cicili#Let9159 */
                                                                                                                      __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9161 */
                                                                                                                        __auto_type nchild  = nchild ;
                                                                                                                        // ----------
                                                                                                                        ((void)(nchild -> __h_table -> freeClass ));
                                                                                                                        nchild ;
                                                                                                                      });
                                                                                                                      // ----------
                                                                                                                      Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), index , child_items , child_children , right_items , right_children ));
                                                                                                                    });
                                                                                                                  }) : ({ /* cicili#Let9169 */
                                                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) right_items ;
                                                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) right_children ;
                                                                                                                    // ----------
                                                                                                                    ;
                                                                                                                    ({ /* cicili#Let9171 */
                                                                                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn9172 */
                                                                                                                              (right_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                                              true ;
                                                                                                                            }) &&  ({ /* cicili#Progn9174 */
                                                                                                                              (right_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                                              true ;
                                                                                                                            }) ) ) );
                                                                                                                      // ----------
                                                                                                                      
                                                                                                                      ((__h_case_result ) ? ({ /* cicili#Progn9179 */
                                                                                                                          ({ /* cicili#Let9182 */
                                                                                                                            __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9184 */
                                                                                                                              __auto_type nchild  = nchild ;
                                                                                                                              // ----------
                                                                                                                              ((void)(nchild -> __h_table -> freeClass ));
                                                                                                                              nchild ;
                                                                                                                            });
                                                                                                                            // ----------
                                                                                                                            Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (((index  >  0 )) ? (index  -  1 ) : index ), index , child_items , child_children , right_items , right_children ));
                                                                                                                          });
                                                                                                                        }) : ({ /* cicili#Let9192 */
                                                                                                                          // ----------
                                                                                                                          ;
                                                                                                                          ({ /* cicili#Progn9194 */
                                                                                                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR2-1"));
                                                                                                                          });
                                                                                                                        }));
                                                                                                                    });
                                                                                                                  }));
                                                                                                              });
                                                                                                            });
                                                                                                          }) : ({ /* cicili#Let9201 */
                                                                                                            // ----------
                                                                                                            ;
                                                                                                            ({ /* cicili#Progn9203 */
                                                                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR2"));
                                                                                                            });
                                                                                                          }));
                                                                                                      });
                                                                                                    });
                                                                                                  });
                                                                                                }) : ({ /* cicili#Let9210 */
                                                                                                  // ----------
                                                                                                  ;
                                                                                                  ({ /* cicili#Progn9212 */
                                                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR1"));
                                                                                                  });
                                                                                                }));
                                                                                            });
                                                                                          });
                                                                                        });
                                                                                      }));
                                                                                  });
                                                                                });
                                                                              }) : ({ /* cicili#Let9219 */
                                                                                // ----------
                                                                                ;
                                                                                ({ /* cicili#Progn9221 */
                                                                                  Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (clone_Box_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let9229 */
                                                                                      __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9231 */
                                                                                        __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                                                        // ----------
                                                                                        ((void)((r1 . __h_table )-> freeData ));
                                                                                        r1 ;
                                                                                      });
                                                                                      __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9235 */
                                                                                        __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                                                                                        // ----------
                                                                                        ((void)((r2 . __h_table )-> freeData ));
                                                                                        r2 ;
                                                                                      });
                                                                                      // ----------
                                                                                      fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn9244 */
                                                                                          Rc_BTree_int_User __ciciliC_9243 (Rc_BTree_int_User __h_value ) {
                                                                                            return clone_Rc_BTree_int_User (__h_value );
                                                                                          }
                                                                                          __ciciliC_9243 ;
                                                                                        }), r2 );
                                                                                    })));
                                                                                });
                                                                              }));
                                                                          });
                                                                        });
                                                                      }) : ({ /* cicili#Let9251 */
                                                                        __auto_type left  = match8990 ;
                                                                        // ----------
                                                                        ;
                                                                        ({ /* cicili#Progn9253 */
                                                                          left ;
                                                                        });
                                                                      }));
                                                                  });
                                                                });
                                                              }) : ({ /* cicili#Let9257 */
                                                                // ----------
                                                                ;
                                                                ({ /* cicili#Progn9259 */
                                                                  ({ /* cicili#Let9263 */
                                                                    __auto_type match9262  = deleteWithParent_BTree_int_User (tree , (((index  >  0 )) ? (index  -  1 ) : index ), index , tr , skey , callback );
                                                                    typeof((((match9262 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                                    // ----------
                                                                    ;
                                                                    ({ /* cicili#Let9266 */
                                                                      bool __h_case_result  = (true  &&  (((match9262 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn9267 */
                                                                            (nchild  =  (((match9262 . __h_data ). Right ). __h_0_mem ) );
                                                                            true ;
                                                                          }) ) );
                                                                      // ----------
                                                                      
                                                                      ((__h_case_result ) ? ({ /* cicili#Progn9272 */
                                                                          borrowLeaf_BTree_int_User (items , children , wleft , current , index , nchild , callback );
                                                                        }) : ({ /* cicili#Let9277 */
                                                                          __auto_type left  = match9262 ;
                                                                          // ----------
                                                                          ;
                                                                          ({ /* cicili#Progn9279 */
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
                                                }) : ({ /* cicili#Let9283 */
                                                  // ----------
                                                  ;
                                                  ({ /* cicili#Progn9285 */
                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CHILD (head , index ));
                                                  });
                                                }));
                                            });
                                          });
                                        }) : ({ /* cicili#Let9292 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Progn9294 */
                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_NOT_FOUND (skey ));
                                          });
                                        }));
                                    });
                                  });
                                }) : ({ /* cicili#Let9301 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Let9303 */
                                    bool __h_case_result  = (true  &&  ((match8668 . __h_ctor ) ==  __h_EQ_t  ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn9307 */
                                        ({ /* cicili#Let9310 */
                                          __auto_type result  = borrowInternal_BTree_int_User (tree , items , children , current , index , callback );
                                          // ----------
                                          { /* cicili#Let9315 */
                                            // ----------
                                            ;
                                            ({ /* cicili#Let9317 */
                                              bool __h_case_result  = (true  &&  ((result . __h_ctor ) ==  __h_Right_t  ) );
                                              // ----------
                                              
                                              if (__h_case_result )
                                                { /* cicili#Block9322 */
                                                  if (callback )
                                                    { /* cicili#Block9326 */
                                                      callback (head );
                                                    }
                                                }
                                            });
                                          }
                                          result ;
                                        });
                                      }) : ({ /* cicili#Let9330 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn9332 */
                                          deleteInternal (tree , items , children , Just_List_BTree_int_User_pair_t (current ), tail , (index  +  1 ));
                                        });
                                      }));
                                  });
                                }));
                            });
                          });
                        }) : ({ /* cicili#Let9337 */
                          // ----------
                          ;
                          ({ /* cicili#Progn9339 */
                            ({ /* cicili#Let9343 */
                              __auto_type match9342  = nth_List_Rc_BTree_int_User (index , children );
                              typeof((((match9342 . __h_data ). Just ). __h_0_mem )) child ;
                              // ----------
                              ;
                              ({ /* cicili#Let9346 */
                                bool __h_case_result  = (true  &&  (((match9342 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9347 */
                                      (child  =  (((match9342 . __h_data ). Just ). __h_0_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn9352 */
                                    ({ /* cicili#Let9356 */
                                      __auto_type match9355  = get_Rc_BTree_int_User (child );
                                      typeof((((match9355 . __h_data ). Just ). __h_0_mem )) tr ;
                                      // ----------
                                      ;
                                      ({ /* cicili#Let9359 */
                                        bool __h_case_result  = (true  &&  (((match9355 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9360 */
                                              (tr  =  (((match9355 . __h_data ). Just ). __h_0_mem ) );
                                              true ;
                                            }) ) );
                                        // ----------
                                        
                                        ((__h_case_result ) ? ({ /* cicili#Progn9365 */
                                            ({ /* cicili#Let9369 */
                                              // ----------
                                              ;
                                              ({ /* cicili#Let9371 */
                                                bool __h_case_result  = (true  &&  ((tr -> __h_ctor ) ==  __h_Branch_t  ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn9375 */
                                                    ({ /* cicili#Let9379 */
                                                      __auto_type match9378  = deleteWithParent_BTree_int_User (tree , (index  -  1 ), index , tr , skey , callback );
                                                      typeof((((match9378 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let9382 */
                                                        bool __h_case_result  = (true  &&  (((match9378 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn9383 */
                                                              (nchild  =  (((match9378 . __h_data ). Right ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn9388 */
                                                            ({ /* cicili#Let9392 */
                                                              typeof((((nchild -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                                              typeof((((nchild -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                                              // ----------
                                                              ;
                                                              ({ /* cicili#Let9394 */
                                                                bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9395 */
                                                                        (child_items  =  (((nchild -> __h_data ). Branch ). __h_0_mem ) );
                                                                        true ;
                                                                      }) &&  ({ /* cicili#Progn9397 */
                                                                        (child_children  =  (((nchild -> __h_data ). Branch ). __h_1_mem ) );
                                                                        true ;
                                                                      }) ) ) );
                                                                // ----------
                                                                
                                                                ((__h_case_result ) ? ({ /* cicili#Progn9402 */
                                                                    ({ /* cicili#Let9406 */
                                                                      __auto_type match9405  = nth_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                                      typeof((((match9405 . __h_data ). Just ). __h_0_mem )) wleft ;
                                                                      // ----------
                                                                      ;
                                                                      ({ /* cicili#Let9409 */
                                                                        bool __h_case_result  = (true  &&  (((match9405 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9410 */
                                                                              (wleft  =  (((match9405 . __h_data ). Just ). __h_0_mem ) );
                                                                              true ;
                                                                            }) ) );
                                                                        // ----------
                                                                        
                                                                        ((__h_case_result ) ? ({ /* cicili#Progn9415 */
                                                                            ({ /* cicili#Let9418 */
                                                                              __auto_type __h_matchbox  = wleft ;
                                                                              // ----------
                                                                              ({ /* cicili#Let9422 */
                                                                                __auto_type match9421  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                typeof((((match9421 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                // ----------
                                                                                ;
                                                                                ({ /* cicili#Let9425 */
                                                                                  bool __h_case_result  = (true  &&  (((match9421 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9426 */
                                                                                        (unboxed  =  (((match9421 . __h_data ). Just ). __h_0_mem ) );
                                                                                        true ;
                                                                                      }) ) );
                                                                                  // ----------
                                                                                  
                                                                                  ((__h_case_result ) ? ({ /* cicili#Progn9431 */
                                                                                      ({ /* cicili#Let9435 */
                                                                                        typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) left_items ;
                                                                                        typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) left_children ;
                                                                                        // ----------
                                                                                        ;
                                                                                        ({ /* cicili#Let9437 */
                                                                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9438 */
                                                                                                  (left_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                                  true ;
                                                                                                }) &&  ({ /* cicili#Progn9440 */
                                                                                                  (left_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                                  true ;
                                                                                                }) ) ) );
                                                                                          // ----------
                                                                                          
                                                                                          ((__h_case_result ) ? ({ /* cicili#Progn9445 */
                                                                                              ({ /* cicili#Let9448 */
                                                                                                __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9450 */
                                                                                                  __auto_type nchild  = nchild ;
                                                                                                  // ----------
                                                                                                  ((void)(nchild -> __h_table -> freeClass ));
                                                                                                  nchild ;
                                                                                                });
                                                                                                // ----------
                                                                                                Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), (index  -  1 ), left_items , left_children , child_items , child_children ));
                                                                                              });
                                                                                            }) : ({ /* cicili#Let9458 */
                                                                                              typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) left_items ;
                                                                                              typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) left_children ;
                                                                                              // ----------
                                                                                              ;
                                                                                              ({ /* cicili#Let9460 */
                                                                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn9461 */
                                                                                                        (left_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                        true ;
                                                                                                      }) &&  ({ /* cicili#Progn9463 */
                                                                                                        (left_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                        true ;
                                                                                                      }) ) ) );
                                                                                                // ----------
                                                                                                
                                                                                                ((__h_case_result ) ? ({ /* cicili#Progn9468 */
                                                                                                    ({ /* cicili#Let9471 */
                                                                                                      __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9473 */
                                                                                                        __auto_type nchild  = nchild ;
                                                                                                        // ----------
                                                                                                        ((void)(nchild -> __h_table -> freeClass ));
                                                                                                        nchild ;
                                                                                                      });
                                                                                                      // ----------
                                                                                                      Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), (index  -  1 ), left_items , left_children , child_items , child_children ));
                                                                                                    });
                                                                                                  }) : ({ /* cicili#Let9481 */
                                                                                                    // ----------
                                                                                                    ;
                                                                                                    ({ /* cicili#Progn9483 */
                                                                                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL111"));
                                                                                                    });
                                                                                                  }));
                                                                                              });
                                                                                            }));
                                                                                        });
                                                                                      });
                                                                                    }) : ({ /* cicili#Let9490 */
                                                                                      // ----------
                                                                                      ;
                                                                                      ({ /* cicili#Progn9492 */
                                                                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL11"));
                                                                                      });
                                                                                    }));
                                                                                });
                                                                              });
                                                                            });
                                                                          }) : ({ /* cicili#Let9499 */
                                                                            // ----------
                                                                            ;
                                                                            ({ /* cicili#Progn9501 */
                                                                              ({ /* cicili#Let9505 */
                                                                                __auto_type match9504  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                                typeof((((match9504 . __h_data ). Just ). __h_0_mem )) wright ;
                                                                                // ----------
                                                                                ;
                                                                                ({ /* cicili#Let9508 */
                                                                                  bool __h_case_result  = (true  &&  (((match9504 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9509 */
                                                                                        (wright  =  (((match9504 . __h_data ). Just ). __h_0_mem ) );
                                                                                        true ;
                                                                                      }) ) );
                                                                                  // ----------
                                                                                  
                                                                                  ((__h_case_result ) ? ({ /* cicili#Progn9514 */
                                                                                      ({ /* cicili#Let9517 */
                                                                                        __auto_type __h_matchbox  = wright ;
                                                                                        // ----------
                                                                                        ({ /* cicili#Let9521 */
                                                                                          __auto_type match9520  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                          typeof((((match9520 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                          // ----------
                                                                                          ;
                                                                                          ({ /* cicili#Let9524 */
                                                                                            bool __h_case_result  = (true  &&  (((match9520 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9525 */
                                                                                                  (unboxed  =  (((match9520 . __h_data ). Just ). __h_0_mem ) );
                                                                                                  true ;
                                                                                                }) ) );
                                                                                            // ----------
                                                                                            
                                                                                            ((__h_case_result ) ? ({ /* cicili#Progn9530 */
                                                                                                ({ /* cicili#Let9534 */
                                                                                                  typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) right_items ;
                                                                                                  typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) right_children ;
                                                                                                  // ----------
                                                                                                  ;
                                                                                                  ({ /* cicili#Let9536 */
                                                                                                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9537 */
                                                                                                            (right_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                                            true ;
                                                                                                          }) &&  ({ /* cicili#Progn9539 */
                                                                                                            (right_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                                            true ;
                                                                                                          }) ) ) );
                                                                                                    // ----------
                                                                                                    
                                                                                                    ((__h_case_result ) ? ({ /* cicili#Progn9544 */
                                                                                                        ({ /* cicili#Let9547 */
                                                                                                          __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9549 */
                                                                                                            __auto_type nchild  = nchild ;
                                                                                                            // ----------
                                                                                                            ((void)(nchild -> __h_table -> freeClass ));
                                                                                                            nchild ;
                                                                                                          });
                                                                                                          // ----------
                                                                                                          Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), index , child_items , child_children , right_items , right_children ));
                                                                                                        });
                                                                                                      }) : ({ /* cicili#Let9557 */
                                                                                                        typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) right_items ;
                                                                                                        typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) right_children ;
                                                                                                        // ----------
                                                                                                        ;
                                                                                                        ({ /* cicili#Let9559 */
                                                                                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn9560 */
                                                                                                                  (right_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                                  true ;
                                                                                                                }) &&  ({ /* cicili#Progn9562 */
                                                                                                                  (right_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                                  true ;
                                                                                                                }) ) ) );
                                                                                                          // ----------
                                                                                                          
                                                                                                          ((__h_case_result ) ? ({ /* cicili#Progn9567 */
                                                                                                              ({ /* cicili#Let9570 */
                                                                                                                __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9572 */
                                                                                                                  __auto_type nchild  = nchild ;
                                                                                                                  // ----------
                                                                                                                  ((void)(nchild -> __h_table -> freeClass ));
                                                                                                                  nchild ;
                                                                                                                });
                                                                                                                // ----------
                                                                                                                Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), index , child_items , child_children , right_items , right_children ));
                                                                                                              });
                                                                                                            }) : ({ /* cicili#Let9580 */
                                                                                                              // ----------
                                                                                                              ;
                                                                                                              ({ /* cicili#Progn9582 */
                                                                                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR222"));
                                                                                                              });
                                                                                                            }));
                                                                                                        });
                                                                                                      }));
                                                                                                  });
                                                                                                });
                                                                                              }) : ({ /* cicili#Let9589 */
                                                                                                // ----------
                                                                                                ;
                                                                                                ({ /* cicili#Progn9591 */
                                                                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR22"));
                                                                                                });
                                                                                              }));
                                                                                          });
                                                                                        });
                                                                                      });
                                                                                    }) : ({ /* cicili#Let9598 */
                                                                                      // ----------
                                                                                      ;
                                                                                      ({ /* cicili#Progn9600 */
                                                                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR221"));
                                                                                      });
                                                                                    }));
                                                                                });
                                                                              });
                                                                            });
                                                                          }));
                                                                      });
                                                                    });
                                                                  }) : ({ /* cicili#Let9607 */
                                                                    // ----------
                                                                    ;
                                                                    ({ /* cicili#Progn9609 */
                                                                      Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (clone_Box_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let9617 */
                                                                          __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9619 */
                                                                            __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                                            // ----------
                                                                            ((void)((r1 . __h_table )-> freeData ));
                                                                            r1 ;
                                                                          });
                                                                          __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9623 */
                                                                            __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                                                                            // ----------
                                                                            ((void)((r2 . __h_table )-> freeData ));
                                                                            r2 ;
                                                                          });
                                                                          // ----------
                                                                          fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn9632 */
                                                                              Rc_BTree_int_User __ciciliC_9631 (Rc_BTree_int_User __h_value ) {
                                                                                return clone_Rc_BTree_int_User (__h_value );
                                                                              }
                                                                              __ciciliC_9631 ;
                                                                            }), r2 );
                                                                        })));
                                                                    });
                                                                  }));
                                                              });
                                                            });
                                                          }) : ({ /* cicili#Let9639 */
                                                            __auto_type left  = match9378 ;
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn9641 */
                                                              left ;
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  }) : ({ /* cicili#Let9645 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Let9647 */
                                                      bool __h_case_result  = (true  &&  ((tr -> __h_ctor ) ==  __h_Internal_t  ) );
                                                      // ----------
                                                      
                                                      ((__h_case_result ) ? ({ /* cicili#Progn9651 */
                                                          ({ /* cicili#Let9655 */
                                                            __auto_type match9654  = deleteWithParent_BTree_int_User (tree , (index  -  1 ), index , tr , skey , callback );
                                                            typeof((((match9654 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Let9658 */
                                                              bool __h_case_result  = (true  &&  (((match9654 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn9659 */
                                                                    (nchild  =  (((match9654 . __h_data ). Right ). __h_0_mem ) );
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              
                                                              ((__h_case_result ) ? ({ /* cicili#Progn9664 */
                                                                  ({ /* cicili#Let9668 */
                                                                    typeof((((nchild -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                                                    typeof((((nchild -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                                                    // ----------
                                                                    ;
                                                                    ({ /* cicili#Let9670 */
                                                                      bool __h_case_result  = (true  &&  (((nchild -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9671 */
                                                                              (child_items  =  (((nchild -> __h_data ). Branch ). __h_0_mem ) );
                                                                              true ;
                                                                            }) &&  ({ /* cicili#Progn9673 */
                                                                              (child_children  =  (((nchild -> __h_data ). Branch ). __h_1_mem ) );
                                                                              true ;
                                                                            }) ) ) );
                                                                      // ----------
                                                                      
                                                                      ((__h_case_result ) ? ({ /* cicili#Progn9678 */
                                                                          ({ /* cicili#Let9682 */
                                                                            __auto_type match9681  = nth_List_Rc_BTree_int_User ((index  -  1 ), children );
                                                                            typeof((((match9681 . __h_data ). Just ). __h_0_mem )) wleft ;
                                                                            // ----------
                                                                            ;
                                                                            ({ /* cicili#Let9685 */
                                                                              bool __h_case_result  = (true  &&  (((match9681 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9686 */
                                                                                    (wleft  =  (((match9681 . __h_data ). Just ). __h_0_mem ) );
                                                                                    true ;
                                                                                  }) ) );
                                                                              // ----------
                                                                              
                                                                              ((__h_case_result ) ? ({ /* cicili#Progn9691 */
                                                                                  ({ /* cicili#Let9694 */
                                                                                    __auto_type __h_matchbox  = wleft ;
                                                                                    // ----------
                                                                                    ({ /* cicili#Let9698 */
                                                                                      __auto_type match9697  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                      typeof((((match9697 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                      // ----------
                                                                                      ;
                                                                                      ({ /* cicili#Let9701 */
                                                                                        bool __h_case_result  = (true  &&  (((match9697 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9702 */
                                                                                              (unboxed  =  (((match9697 . __h_data ). Just ). __h_0_mem ) );
                                                                                              true ;
                                                                                            }) ) );
                                                                                        // ----------
                                                                                        
                                                                                        ((__h_case_result ) ? ({ /* cicili#Progn9707 */
                                                                                            ({ /* cicili#Let9711 */
                                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) left_items ;
                                                                                              typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) left_children ;
                                                                                              // ----------
                                                                                              ;
                                                                                              ({ /* cicili#Let9713 */
                                                                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9714 */
                                                                                                        (left_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                                        true ;
                                                                                                      }) &&  ({ /* cicili#Progn9716 */
                                                                                                        (left_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                                        true ;
                                                                                                      }) ) ) );
                                                                                                // ----------
                                                                                                
                                                                                                ((__h_case_result ) ? ({ /* cicili#Progn9721 */
                                                                                                    ({ /* cicili#Let9724 */
                                                                                                      __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9726 */
                                                                                                        __auto_type nchild  = nchild ;
                                                                                                        // ----------
                                                                                                        ((void)(nchild -> __h_table -> freeClass ));
                                                                                                        nchild ;
                                                                                                      });
                                                                                                      // ----------
                                                                                                      Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), (index  -  1 ), left_items , left_children , child_items , child_children ));
                                                                                                    });
                                                                                                  }) : ({ /* cicili#Let9734 */
                                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) left_items ;
                                                                                                    typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) left_children ;
                                                                                                    // ----------
                                                                                                    ;
                                                                                                    ({ /* cicili#Let9736 */
                                                                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn9737 */
                                                                                                              (left_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                              true ;
                                                                                                            }) &&  ({ /* cicili#Progn9739 */
                                                                                                              (left_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                              true ;
                                                                                                            }) ) ) );
                                                                                                      // ----------
                                                                                                      
                                                                                                      ((__h_case_result ) ? ({ /* cicili#Progn9744 */
                                                                                                          ({ /* cicili#Let9747 */
                                                                                                            __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9749 */
                                                                                                              __auto_type nchild  = nchild ;
                                                                                                              // ----------
                                                                                                              ((void)(nchild -> __h_table -> freeClass ));
                                                                                                              nchild ;
                                                                                                            });
                                                                                                            // ----------
                                                                                                            Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), (index  -  1 ), left_items , left_children , child_items , child_children ));
                                                                                                          });
                                                                                                        }) : ({ /* cicili#Let9757 */
                                                                                                          // ----------
                                                                                                          ;
                                                                                                          ({ /* cicili#Progn9759 */
                                                                                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL111"));
                                                                                                          });
                                                                                                        }));
                                                                                                    });
                                                                                                  }));
                                                                                              });
                                                                                            });
                                                                                          }) : ({ /* cicili#Let9766 */
                                                                                            // ----------
                                                                                            ;
                                                                                            ({ /* cicili#Progn9768 */
                                                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPL11"));
                                                                                            });
                                                                                          }));
                                                                                      });
                                                                                    });
                                                                                  });
                                                                                }) : ({ /* cicili#Let9775 */
                                                                                  // ----------
                                                                                  ;
                                                                                  ({ /* cicili#Progn9777 */
                                                                                    ({ /* cicili#Let9781 */
                                                                                      __auto_type match9780  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                                      typeof((((match9780 . __h_data ). Just ). __h_0_mem )) wright ;
                                                                                      // ----------
                                                                                      ;
                                                                                      ({ /* cicili#Let9784 */
                                                                                        bool __h_case_result  = (true  &&  (((match9780 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9785 */
                                                                                              (wright  =  (((match9780 . __h_data ). Just ). __h_0_mem ) );
                                                                                              true ;
                                                                                            }) ) );
                                                                                        // ----------
                                                                                        
                                                                                        ((__h_case_result ) ? ({ /* cicili#Progn9790 */
                                                                                            ({ /* cicili#Let9793 */
                                                                                              __auto_type __h_matchbox  = wright ;
                                                                                              // ----------
                                                                                              ({ /* cicili#Let9797 */
                                                                                                __auto_type match9796  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                                typeof((((match9796 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                                // ----------
                                                                                                ;
                                                                                                ({ /* cicili#Let9800 */
                                                                                                  bool __h_case_result  = (true  &&  (((match9796 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn9801 */
                                                                                                        (unboxed  =  (((match9796 . __h_data ). Just ). __h_0_mem ) );
                                                                                                        true ;
                                                                                                      }) ) );
                                                                                                  // ----------
                                                                                                  
                                                                                                  ((__h_case_result ) ? ({ /* cicili#Progn9806 */
                                                                                                      ({ /* cicili#Let9810 */
                                                                                                        typeof((((unboxed -> __h_data ). Branch ). __h_0_mem )) right_items ;
                                                                                                        typeof((((unboxed -> __h_data ). Branch ). __h_1_mem )) right_children ;
                                                                                                        // ----------
                                                                                                        ;
                                                                                                        ({ /* cicili#Let9812 */
                                                                                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9813 */
                                                                                                                  (right_items  =  (((unboxed -> __h_data ). Branch ). __h_0_mem ) );
                                                                                                                  true ;
                                                                                                                }) &&  ({ /* cicili#Progn9815 */
                                                                                                                  (right_children  =  (((unboxed -> __h_data ). Branch ). __h_1_mem ) );
                                                                                                                  true ;
                                                                                                                }) ) ) );
                                                                                                          // ----------
                                                                                                          
                                                                                                          ((__h_case_result ) ? ({ /* cicili#Progn9820 */
                                                                                                              ({ /* cicili#Let9823 */
                                                                                                                __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9825 */
                                                                                                                  __auto_type nchild  = nchild ;
                                                                                                                  // ----------
                                                                                                                  ((void)(nchild -> __h_table -> freeClass ));
                                                                                                                  nchild ;
                                                                                                                });
                                                                                                                // ----------
                                                                                                                Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), index , child_items , child_children , right_items , right_children ));
                                                                                                              });
                                                                                                            }) : ({ /* cicili#Let9833 */
                                                                                                              typeof((((unboxed -> __h_data ). Internal ). __h_0_mem )) right_items ;
                                                                                                              typeof((((unboxed -> __h_data ). Internal ). __h_1_mem )) right_children ;
                                                                                                              // ----------
                                                                                                              ;
                                                                                                              ({ /* cicili#Let9835 */
                                                                                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn9836 */
                                                                                                                        (right_items  =  (((unboxed -> __h_data ). Internal ). __h_0_mem ) );
                                                                                                                        true ;
                                                                                                                      }) &&  ({ /* cicili#Progn9838 */
                                                                                                                        (right_children  =  (((unboxed -> __h_data ). Internal ). __h_1_mem ) );
                                                                                                                        true ;
                                                                                                                      }) ) ) );
                                                                                                                // ----------
                                                                                                                
                                                                                                                ((__h_case_result ) ? ({ /* cicili#Progn9843 */
                                                                                                                    ({ /* cicili#Let9846 */
                                                                                                                      __auto_type nchild  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let9848 */
                                                                                                                        __auto_type nchild  = nchild ;
                                                                                                                        // ----------
                                                                                                                        ((void)(nchild -> __h_table -> freeClass ));
                                                                                                                        nchild ;
                                                                                                                      });
                                                                                                                      // ----------
                                                                                                                      Right_BTree_int_User_Error_BTree_int_User (mergeUp_BTree_int_User (items , children , (index  -  1 ), index , child_items , child_children , right_items , right_children ));
                                                                                                                    });
                                                                                                                  }) : ({ /* cicili#Let9856 */
                                                                                                                    // ----------
                                                                                                                    ;
                                                                                                                    ({ /* cicili#Progn9858 */
                                                                                                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR222"));
                                                                                                                    });
                                                                                                                  }));
                                                                                                              });
                                                                                                            }));
                                                                                                        });
                                                                                                      });
                                                                                                    }) : ({ /* cicili#Let9865 */
                                                                                                      // ----------
                                                                                                      ;
                                                                                                      ({ /* cicili#Progn9867 */
                                                                                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR22"));
                                                                                                      });
                                                                                                    }));
                                                                                                });
                                                                                              });
                                                                                            });
                                                                                          }) : ({ /* cicili#Let9874 */
                                                                                            // ----------
                                                                                            ;
                                                                                            ({ /* cicili#Progn9876 */
                                                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("BWPR221"));
                                                                                            });
                                                                                          }));
                                                                                      });
                                                                                    });
                                                                                  });
                                                                                }));
                                                                            });
                                                                          });
                                                                        }) : ({ /* cicili#Let9883 */
                                                                          // ----------
                                                                          ;
                                                                          ({ /* cicili#Progn9885 */
                                                                            Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (clone_Box_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let9893 */
                                                                                __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9895 */
                                                                                  __auto_type r1  = new_Rc_BTree_int_User (nchild );
                                                                                  // ----------
                                                                                  ((void)((r1 . __h_table )-> freeData ));
                                                                                  r1 ;
                                                                                });
                                                                                __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let9899 */
                                                                                  __auto_type r2  = replaceAt_List_Rc_BTree_int_User (children , r1 , index );
                                                                                  // ----------
                                                                                  ((void)((r2 . __h_table )-> freeData ));
                                                                                  r2 ;
                                                                                });
                                                                                // ----------
                                                                                fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn9908 */
                                                                                    Rc_BTree_int_User __ciciliC_9907 (Rc_BTree_int_User __h_value ) {
                                                                                      return clone_Rc_BTree_int_User (__h_value );
                                                                                    }
                                                                                    __ciciliC_9907 ;
                                                                                  }), r2 );
                                                                              })));
                                                                          });
                                                                        }));
                                                                    });
                                                                  });
                                                                }) : ({ /* cicili#Let9915 */
                                                                  __auto_type left  = match9654 ;
                                                                  // ----------
                                                                  ;
                                                                  ({ /* cicili#Progn9917 */
                                                                    left ;
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        }) : ({ /* cicili#Let9921 */
                                                          // ----------
                                                          ;
                                                          ({ /* cicili#Progn9923 */
                                                            ({ /* cicili#Let9927 */
                                                              __auto_type match9926  = deleteWithParent_BTree_int_User (tree , (index  -  1 ), index , tr , skey , callback );
                                                              typeof((((match9926 . __h_data ). Right ). __h_0_mem )) nchild ;
                                                              // ----------
                                                              ;
                                                              ({ /* cicili#Let9930 */
                                                                bool __h_case_result  = (true  &&  (((match9926 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn9931 */
                                                                      (nchild  =  (((match9926 . __h_data ). Right ). __h_0_mem ) );
                                                                      true ;
                                                                    }) ) );
                                                                // ----------
                                                                
                                                                ((__h_case_result ) ? ({ /* cicili#Progn9936 */
                                                                    borrowLeaf_BTree_int_User (items , children , wleft , current , index , nchild , callback );
                                                                  }) : ({ /* cicili#Let9941 */
                                                                    __auto_type left  = match9926 ;
                                                                    // ----------
                                                                    ;
                                                                    ({ /* cicili#Progn9943 */
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
                                          }) : ({ /* cicili#Let9947 */
                                            // ----------
                                            ;
                                            ({ /* cicili#Progn9949 */
                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CHILD (head , index ));
                                            });
                                          }));
                                      });
                                    });
                                  }) : ({ /* cicili#Let9956 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn9958 */
                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_NOT_FOUND (skey ));
                                    });
                                  }));
                              });
                            });
                          });
                        }));
                    });
                  });
                }) : ({ /* cicili#Let9965 */
                  // ----------
                  ;
                  ({ /* cicili#Progn9967 */
                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CONS ());
                  });
                }));
            });
          });
        });
        // ----------
        ({ /* cicili#Let9976 */
          __auto_type rs  = ({ /* cicili#Let9979 */
            typeof((((result . __h_data ). Right ). __h_0_mem )) ntr ;
            // ----------
            ;
            ({ /* cicili#Let9981 */
              bool __h_case_result  = (true  &&  (((result . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn9982 */
                    (ntr  =  (((result . __h_data ). Right ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn9987 */
                  ({ /* cicili#Let9991 */
                    typeof((((ntr -> __h_data ). Branch ). __h_0_mem )) items ;
                    typeof((((ntr -> __h_data ). Branch ). __h_1_mem )) children ;
                    // ----------
                    ;
                    ({ /* cicili#Let9993 */
                      bool __h_case_result  = (true  &&  (((ntr -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn9994 */
                              (items  =  (((ntr -> __h_data ). Branch ). __h_0_mem ) );
                              true ;
                            }) &&  ({ /* cicili#Progn9996 */
                              (children  =  (((ntr -> __h_data ). Branch ). __h_1_mem ) );
                              true ;
                            }) ) ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* cicili#Progn10001 */
                          ({ /* cicili#Let10004 */
                            __auto_type items_len  = hasLen_List_BTree_int_User_pair_t (items , (L_BTree_int_User  -  1 ));
                            // ----------
                            (((items_len  ==  (L_BTree_int_User  -  1 ) )) ? result  : ({ /* cicili#Let10012 */
                                typeof((((wparent . __h_data ). Just ). __h_0_mem )) ptree ;
                                // ----------
                                ;
                                ({ /* cicili#Let10014 */
                                  bool __h_case_result  = (true  &&  (((wparent . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10015 */
                                        (ptree  =  (((wparent . __h_data ). Just ). __h_0_mem ) );
                                        true ;
                                      }) ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn10020 */
                                      ({ /* cicili#Let10024 */
                                        typeof((((ptree -> __h_data ). Branch ). __h_0_mem )) pitems ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let10026 */
                                          bool __h_case_result  = (true  &&  (((ptree -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn10027 */
                                                (pitems  =  (((ptree -> __h_data ). Branch ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn10032 */
                                              ({ /* cicili#Let10036 */
                                                __auto_type match10035  = nth_List_BTree_int_User_pair_t (pitem_index , pitems );
                                                typeof((((match10035 . __h_data ). Just ). __h_0_mem )) bitem ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let10039 */
                                                  bool __h_case_result  = (true  &&  (((match10035 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10040 */
                                                        (bitem  =  (((match10035 . __h_data ). Just ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn10045 */
                                                      ({ /* cicili#Let10048 */
                                                        __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10050 */
                                                          __auto_type ntr  = ntr ;
                                                          // ----------
                                                          ((void)(ntr -> __h_table -> freeClass ));
                                                          ntr ;
                                                        });
                                                        // ----------
                                                        Right_BTree_int_User_Error_BTree_int_User (Branch_BTree_int_User (insertAt_List_BTree_int_User_pair_t (items , bitem , ({ /* cicili#Let10060 */
                                                            __auto_type match10059  = compareKey (({ /* cicili#Let10063 */
                                                              typeof((bitem . __h_0_mem )) key ;
                                                              // ----------
                                                              ;
                                                              ({ /* cicili#Let10065 */
                                                                bool __h_case_result  = (true  &&  ({ /* cicili#Progn10066 */
                                                                    (key  =  (bitem . __h_0_mem ) );
                                                                    true ;
                                                                  }) );
                                                                // ----------
                                                                
                                                                ((__h_case_result ) ? ({ /* cicili#Progn10071 */
                                                                    key ;
                                                                  }) : ({ /* cicili#Let10075 */
                                                                    // ----------
                                                                    ;
                                                                    ({ /* cicili#Progn10077 */
                                                                      skey ;
                                                                    });
                                                                  }));
                                                              });
                                                            }), ({ /* cicili#Let10080 */
                                                              __auto_type __h_matchbox  = items ;
                                                              // ----------
                                                              ({ /* cicili#Let10084 */
                                                                __auto_type match10083  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                typeof((((match10083 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                // ----------
                                                                ;
                                                                ({ /* cicili#Let10087 */
                                                                  bool __h_case_result  = (true  &&  (((match10083 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10088 */
                                                                        (unboxed  =  (((match10083 . __h_data ). Just ). __h_0_mem ) );
                                                                        true ;
                                                                      }) ) );
                                                                  // ----------
                                                                  
                                                                  ((__h_case_result ) ? ({ /* cicili#Progn10093 */
                                                                      ({ /* cicili#Let10098 */
                                                                        typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) __h_match10096_0_arg ;
                                                                        typeof((__h_match10096_0_arg . __h_0_mem )) key ;
                                                                        // ----------
                                                                        ;
                                                                        ({ /* cicili#Let10100 */
                                                                          bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn10101 */
                                                                                  (__h_match10096_0_arg  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                                                                                  true ;
                                                                                }) &&  (true  &&  ({ /* cicili#Progn10103 */
                                                                                    (key  =  (__h_match10096_0_arg . __h_0_mem ) );
                                                                                    true ;
                                                                                  }) ) ) ) );
                                                                          // ----------
                                                                          
                                                                          ((__h_case_result ) ? ({ /* cicili#Progn10108 */
                                                                              key ;
                                                                            }) : ({ /* cicili#Let10112 */
                                                                              // ----------
                                                                              ;
                                                                              ({ /* cicili#Progn10114 */
                                                                                skey ;
                                                                              });
                                                                            }));
                                                                        });
                                                                      });
                                                                    }) : ({ /* cicili#Let10118 */
                                                                      // ----------
                                                                      ;
                                                                      ({ /* cicili#Progn10120 */
                                                                        skey ;
                                                                      });
                                                                    }));
                                                                });
                                                              });
                                                            }));
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Let10123 */
                                                              bool __h_case_result  = (true  &&  ((match10059 . __h_ctor ) ==  __h_LT_t  ) );
                                                              // ----------
                                                              
                                                              ((__h_case_result ) ? ({ /* cicili#Progn10127 */
                                                                  0;
                                                                }) : ({ /* cicili#Let10131 */
                                                                  // ----------
                                                                  ;
                                                                  ({ /* cicili#Progn10133 */
                                                                    items_len ;
                                                                  });
                                                                }));
                                                            });
                                                          })), fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn10140 */
                                                            Rc_BTree_int_User __ciciliC_10139 (Rc_BTree_int_User __h_value ) {
                                                              return clone_Rc_BTree_int_User (__h_value );
                                                            }
                                                            __ciciliC_10139 ;
                                                          }), children )));
                                                      });
                                                    }) : ({ /* cicili#Let10147 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn10149 */
                                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 2"));
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let10156 */
                                              typeof((((ptree -> __h_data ). Internal ). __h_0_mem )) pitems ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let10158 */
                                                bool __h_case_result  = (true  &&  (((ptree -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn10159 */
                                                      (pitems  =  (((ptree -> __h_data ). Internal ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn10164 */
                                                    ({ /* cicili#Let10168 */
                                                      __auto_type match10167  = nth_List_BTree_int_User_pair_t (pitem_index , pitems );
                                                      typeof((((match10167 . __h_data ). Just ). __h_0_mem )) bitem ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let10171 */
                                                        bool __h_case_result  = (true  &&  (((match10167 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10172 */
                                                              (bitem  =  (((match10167 . __h_data ). Just ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn10177 */
                                                            ({ /* cicili#Let10180 */
                                                              __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10182 */
                                                                __auto_type ntr  = ntr ;
                                                                // ----------
                                                                ((void)(ntr -> __h_table -> freeClass ));
                                                                ntr ;
                                                              });
                                                              // ----------
                                                              Right_BTree_int_User_Error_BTree_int_User (Branch_BTree_int_User (insertAt_List_BTree_int_User_pair_t (items , bitem , ({ /* cicili#Let10192 */
                                                                  __auto_type match10191  = compareKey (({ /* cicili#Let10195 */
                                                                    typeof((bitem . __h_0_mem )) key ;
                                                                    // ----------
                                                                    ;
                                                                    ({ /* cicili#Let10197 */
                                                                      bool __h_case_result  = (true  &&  ({ /* cicili#Progn10198 */
                                                                          (key  =  (bitem . __h_0_mem ) );
                                                                          true ;
                                                                        }) );
                                                                      // ----------
                                                                      
                                                                      ((__h_case_result ) ? ({ /* cicili#Progn10203 */
                                                                          key ;
                                                                        }) : ({ /* cicili#Let10207 */
                                                                          // ----------
                                                                          ;
                                                                          ({ /* cicili#Progn10209 */
                                                                            skey ;
                                                                          });
                                                                        }));
                                                                    });
                                                                  }), ({ /* cicili#Let10212 */
                                                                    __auto_type __h_matchbox  = items ;
                                                                    // ----------
                                                                    ({ /* cicili#Let10216 */
                                                                      __auto_type match10215  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                      typeof((((match10215 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                      // ----------
                                                                      ;
                                                                      ({ /* cicili#Let10219 */
                                                                        bool __h_case_result  = (true  &&  (((match10215 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10220 */
                                                                              (unboxed  =  (((match10215 . __h_data ). Just ). __h_0_mem ) );
                                                                              true ;
                                                                            }) ) );
                                                                        // ----------
                                                                        
                                                                        ((__h_case_result ) ? ({ /* cicili#Progn10225 */
                                                                            ({ /* cicili#Let10230 */
                                                                              typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) __h_match10228_0_arg ;
                                                                              typeof((__h_match10228_0_arg . __h_0_mem )) key ;
                                                                              // ----------
                                                                              ;
                                                                              ({ /* cicili#Let10232 */
                                                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn10233 */
                                                                                        (__h_match10228_0_arg  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                                                                                        true ;
                                                                                      }) &&  (true  &&  ({ /* cicili#Progn10235 */
                                                                                          (key  =  (__h_match10228_0_arg . __h_0_mem ) );
                                                                                          true ;
                                                                                        }) ) ) ) );
                                                                                // ----------
                                                                                
                                                                                ((__h_case_result ) ? ({ /* cicili#Progn10240 */
                                                                                    key ;
                                                                                  }) : ({ /* cicili#Let10244 */
                                                                                    // ----------
                                                                                    ;
                                                                                    ({ /* cicili#Progn10246 */
                                                                                      skey ;
                                                                                    });
                                                                                  }));
                                                                              });
                                                                            });
                                                                          }) : ({ /* cicili#Let10250 */
                                                                            // ----------
                                                                            ;
                                                                            ({ /* cicili#Progn10252 */
                                                                              skey ;
                                                                            });
                                                                          }));
                                                                      });
                                                                    });
                                                                  }));
                                                                  // ----------
                                                                  ;
                                                                  ({ /* cicili#Let10255 */
                                                                    bool __h_case_result  = (true  &&  ((match10191 . __h_ctor ) ==  __h_LT_t  ) );
                                                                    // ----------
                                                                    
                                                                    ((__h_case_result ) ? ({ /* cicili#Progn10259 */
                                                                        0;
                                                                      }) : ({ /* cicili#Let10263 */
                                                                        // ----------
                                                                        ;
                                                                        ({ /* cicili#Progn10265 */
                                                                          items_len ;
                                                                        });
                                                                      }));
                                                                  });
                                                                })), fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn10272 */
                                                                  Rc_BTree_int_User __ciciliC_10271 (Rc_BTree_int_User __h_value ) {
                                                                    return clone_Rc_BTree_int_User (__h_value );
                                                                  }
                                                                  __ciciliC_10271 ;
                                                                }), children )));
                                                            });
                                                          }) : ({ /* cicili#Let10279 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn10281 */
                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 2"));
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  }) : ({ /* cicili#Let10288 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn10290 */
                                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 1"));
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      });
                                    }) : ({ /* cicili#Let10297 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn10299 */
                                        (((items_len  ==  0 )) ? ({ /* cicili#Let10303 */
                                            __auto_type __h_matchbox  = children ;
                                            // ----------
                                            ({ /* cicili#Let10307 */
                                              __auto_type match10306  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                              typeof((((match10306 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let10310 */
                                                bool __h_case_result  = (true  &&  (((match10306 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10311 */
                                                      (unboxed  =  (((match10306 . __h_data ). Just ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn10316 */
                                                    ({ /* cicili#Let10320 */
                                                      typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let10322 */
                                                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn10323 */
                                                              (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn10328 */
                                                            ({ /* cicili#Let10331 */
                                                              __auto_type __h_matchbox  = clone_Rc_BTree_int_User (head );
                                                              // ----------
                                                              ({ /* cicili#Let10336 */
                                                                __auto_type match10335  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                typeof((((match10335 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                // ----------
                                                                ;
                                                                ({ /* cicili#Let10339 */
                                                                  bool __h_case_result  = (true  &&  (((match10335 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10340 */
                                                                        (unboxed  =  (((match10335 . __h_data ). Just ). __h_0_mem ) );
                                                                        true ;
                                                                      }) ) );
                                                                  // ----------
                                                                  
                                                                  ((__h_case_result ) ? ({ /* cicili#Progn10345 */
                                                                      ({ /* cicili#Let10349 */
                                                                        __auto_type chtr  = unboxed ;
                                                                        // ----------
                                                                        ;
                                                                        ({ /* cicili#Progn10351 */
                                                                          ({ /* cicili#Let10354 */
                                                                            __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10356 */
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
                                                                    }) : ({ /* cicili#Let10363 */
                                                                      // ----------
                                                                      ;
                                                                      ({ /* cicili#Progn10365 */
                                                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 3"));
                                                                      });
                                                                    }));
                                                                });
                                                              });
                                                            });
                                                          }) : ({ /* cicili#Let10372 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn10374 */
                                                              result ;
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  }) : ({ /* cicili#Let10378 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn10380 */
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
                        }) : ({ /* cicili#Let10387 */
                          typeof((((ntr -> __h_data ). Internal ). __h_0_mem )) items ;
                          typeof((((ntr -> __h_data ). Internal ). __h_1_mem )) children ;
                          // ----------
                          ;
                          ({ /* cicili#Let10389 */
                            bool __h_case_result  = (true  &&  (((ntr -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn10390 */
                                    (items  =  (((ntr -> __h_data ). Internal ). __h_0_mem ) );
                                    true ;
                                  }) &&  ({ /* cicili#Progn10392 */
                                    (children  =  (((ntr -> __h_data ). Internal ). __h_1_mem ) );
                                    true ;
                                  }) ) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn10397 */
                                ({ /* cicili#Let10400 */
                                  __auto_type items_len  = hasLen_List_BTree_int_User_pair_t (items , (L_BTree_int_User  -  1 ));
                                  // ----------
                                  (((items_len  ==  (L_BTree_int_User  -  1 ) )) ? result  : ({ /* cicili#Let10408 */
                                      typeof((((wparent . __h_data ). Just ). __h_0_mem )) ptree ;
                                      // ----------
                                      ;
                                      ({ /* cicili#Let10410 */
                                        bool __h_case_result  = (true  &&  (((wparent . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10411 */
                                              (ptree  =  (((wparent . __h_data ). Just ). __h_0_mem ) );
                                              true ;
                                            }) ) );
                                        // ----------
                                        
                                        ((__h_case_result ) ? ({ /* cicili#Progn10416 */
                                            ({ /* cicili#Let10420 */
                                              typeof((((ptree -> __h_data ). Branch ). __h_0_mem )) pitems ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let10422 */
                                                bool __h_case_result  = (true  &&  (((ptree -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn10423 */
                                                      (pitems  =  (((ptree -> __h_data ). Branch ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn10428 */
                                                    ({ /* cicili#Let10432 */
                                                      __auto_type match10431  = nth_List_BTree_int_User_pair_t (pitem_index , pitems );
                                                      typeof((((match10431 . __h_data ). Just ). __h_0_mem )) bitem ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let10435 */
                                                        bool __h_case_result  = (true  &&  (((match10431 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10436 */
                                                              (bitem  =  (((match10431 . __h_data ). Just ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        
                                                        ((__h_case_result ) ? ({ /* cicili#Progn10441 */
                                                            ({ /* cicili#Let10444 */
                                                              __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10446 */
                                                                __auto_type ntr  = ntr ;
                                                                // ----------
                                                                ((void)(ntr -> __h_table -> freeClass ));
                                                                ntr ;
                                                              });
                                                              // ----------
                                                              Right_BTree_int_User_Error_BTree_int_User (Branch_BTree_int_User (insertAt_List_BTree_int_User_pair_t (items , bitem , ({ /* cicili#Let10456 */
                                                                  __auto_type match10455  = compareKey (({ /* cicili#Let10459 */
                                                                    typeof((bitem . __h_0_mem )) key ;
                                                                    // ----------
                                                                    ;
                                                                    ({ /* cicili#Let10461 */
                                                                      bool __h_case_result  = (true  &&  ({ /* cicili#Progn10462 */
                                                                          (key  =  (bitem . __h_0_mem ) );
                                                                          true ;
                                                                        }) );
                                                                      // ----------
                                                                      
                                                                      ((__h_case_result ) ? ({ /* cicili#Progn10467 */
                                                                          key ;
                                                                        }) : ({ /* cicili#Let10471 */
                                                                          // ----------
                                                                          ;
                                                                          ({ /* cicili#Progn10473 */
                                                                            skey ;
                                                                          });
                                                                        }));
                                                                    });
                                                                  }), ({ /* cicili#Let10476 */
                                                                    __auto_type __h_matchbox  = items ;
                                                                    // ----------
                                                                    ({ /* cicili#Let10480 */
                                                                      __auto_type match10479  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                      typeof((((match10479 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                      // ----------
                                                                      ;
                                                                      ({ /* cicili#Let10483 */
                                                                        bool __h_case_result  = (true  &&  (((match10479 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10484 */
                                                                              (unboxed  =  (((match10479 . __h_data ). Just ). __h_0_mem ) );
                                                                              true ;
                                                                            }) ) );
                                                                        // ----------
                                                                        
                                                                        ((__h_case_result ) ? ({ /* cicili#Progn10489 */
                                                                            ({ /* cicili#Let10494 */
                                                                              typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) __h_match10492_0_arg ;
                                                                              typeof((__h_match10492_0_arg . __h_0_mem )) key ;
                                                                              // ----------
                                                                              ;
                                                                              ({ /* cicili#Let10496 */
                                                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn10497 */
                                                                                        (__h_match10492_0_arg  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                                                                                        true ;
                                                                                      }) &&  (true  &&  ({ /* cicili#Progn10499 */
                                                                                          (key  =  (__h_match10492_0_arg . __h_0_mem ) );
                                                                                          true ;
                                                                                        }) ) ) ) );
                                                                                // ----------
                                                                                
                                                                                ((__h_case_result ) ? ({ /* cicili#Progn10504 */
                                                                                    key ;
                                                                                  }) : ({ /* cicili#Let10508 */
                                                                                    // ----------
                                                                                    ;
                                                                                    ({ /* cicili#Progn10510 */
                                                                                      skey ;
                                                                                    });
                                                                                  }));
                                                                              });
                                                                            });
                                                                          }) : ({ /* cicili#Let10514 */
                                                                            // ----------
                                                                            ;
                                                                            ({ /* cicili#Progn10516 */
                                                                              skey ;
                                                                            });
                                                                          }));
                                                                      });
                                                                    });
                                                                  }));
                                                                  // ----------
                                                                  ;
                                                                  ({ /* cicili#Let10519 */
                                                                    bool __h_case_result  = (true  &&  ((match10455 . __h_ctor ) ==  __h_LT_t  ) );
                                                                    // ----------
                                                                    
                                                                    ((__h_case_result ) ? ({ /* cicili#Progn10523 */
                                                                        0;
                                                                      }) : ({ /* cicili#Let10527 */
                                                                        // ----------
                                                                        ;
                                                                        ({ /* cicili#Progn10529 */
                                                                          items_len ;
                                                                        });
                                                                      }));
                                                                  });
                                                                })), fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn10536 */
                                                                  Rc_BTree_int_User __ciciliC_10535 (Rc_BTree_int_User __h_value ) {
                                                                    return clone_Rc_BTree_int_User (__h_value );
                                                                  }
                                                                  __ciciliC_10535 ;
                                                                }), children )));
                                                            });
                                                          }) : ({ /* cicili#Let10543 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Progn10545 */
                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 2"));
                                                            });
                                                          }));
                                                      });
                                                    });
                                                  }) : ({ /* cicili#Let10552 */
                                                    typeof((((ptree -> __h_data ). Internal ). __h_0_mem )) pitems ;
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Let10554 */
                                                      bool __h_case_result  = (true  &&  (((ptree -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn10555 */
                                                            (pitems  =  (((ptree -> __h_data ). Internal ). __h_0_mem ) );
                                                            true ;
                                                          }) ) );
                                                      // ----------
                                                      
                                                      ((__h_case_result ) ? ({ /* cicili#Progn10560 */
                                                          ({ /* cicili#Let10564 */
                                                            __auto_type match10563  = nth_List_BTree_int_User_pair_t (pitem_index , pitems );
                                                            typeof((((match10563 . __h_data ). Just ). __h_0_mem )) bitem ;
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Let10567 */
                                                              bool __h_case_result  = (true  &&  (((match10563 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10568 */
                                                                    (bitem  =  (((match10563 . __h_data ). Just ). __h_0_mem ) );
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              
                                                              ((__h_case_result ) ? ({ /* cicili#Progn10573 */
                                                                  ({ /* cicili#Let10576 */
                                                                    __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10578 */
                                                                      __auto_type ntr  = ntr ;
                                                                      // ----------
                                                                      ((void)(ntr -> __h_table -> freeClass ));
                                                                      ntr ;
                                                                    });
                                                                    // ----------
                                                                    Right_BTree_int_User_Error_BTree_int_User (Branch_BTree_int_User (insertAt_List_BTree_int_User_pair_t (items , bitem , ({ /* cicili#Let10588 */
                                                                        __auto_type match10587  = compareKey (({ /* cicili#Let10591 */
                                                                          typeof((bitem . __h_0_mem )) key ;
                                                                          // ----------
                                                                          ;
                                                                          ({ /* cicili#Let10593 */
                                                                            bool __h_case_result  = (true  &&  ({ /* cicili#Progn10594 */
                                                                                (key  =  (bitem . __h_0_mem ) );
                                                                                true ;
                                                                              }) );
                                                                            // ----------
                                                                            
                                                                            ((__h_case_result ) ? ({ /* cicili#Progn10599 */
                                                                                key ;
                                                                              }) : ({ /* cicili#Let10603 */
                                                                                // ----------
                                                                                ;
                                                                                ({ /* cicili#Progn10605 */
                                                                                  skey ;
                                                                                });
                                                                              }));
                                                                          });
                                                                        }), ({ /* cicili#Let10608 */
                                                                          __auto_type __h_matchbox  = items ;
                                                                          // ----------
                                                                          ({ /* cicili#Let10612 */
                                                                            __auto_type match10611  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                            typeof((((match10611 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                            // ----------
                                                                            ;
                                                                            ({ /* cicili#Let10615 */
                                                                              bool __h_case_result  = (true  &&  (((match10611 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10616 */
                                                                                    (unboxed  =  (((match10611 . __h_data ). Just ). __h_0_mem ) );
                                                                                    true ;
                                                                                  }) ) );
                                                                              // ----------
                                                                              
                                                                              ((__h_case_result ) ? ({ /* cicili#Progn10621 */
                                                                                  ({ /* cicili#Let10626 */
                                                                                    typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) __h_match10624_0_arg ;
                                                                                    typeof((__h_match10624_0_arg . __h_0_mem )) key ;
                                                                                    // ----------
                                                                                    ;
                                                                                    ({ /* cicili#Let10628 */
                                                                                      bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn10629 */
                                                                                              (__h_match10624_0_arg  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                                                                                              true ;
                                                                                            }) &&  (true  &&  ({ /* cicili#Progn10631 */
                                                                                                (key  =  (__h_match10624_0_arg . __h_0_mem ) );
                                                                                                true ;
                                                                                              }) ) ) ) );
                                                                                      // ----------
                                                                                      
                                                                                      ((__h_case_result ) ? ({ /* cicili#Progn10636 */
                                                                                          key ;
                                                                                        }) : ({ /* cicili#Let10640 */
                                                                                          // ----------
                                                                                          ;
                                                                                          ({ /* cicili#Progn10642 */
                                                                                            skey ;
                                                                                          });
                                                                                        }));
                                                                                    });
                                                                                  });
                                                                                }) : ({ /* cicili#Let10646 */
                                                                                  // ----------
                                                                                  ;
                                                                                  ({ /* cicili#Progn10648 */
                                                                                    skey ;
                                                                                  });
                                                                                }));
                                                                            });
                                                                          });
                                                                        }));
                                                                        // ----------
                                                                        ;
                                                                        ({ /* cicili#Let10651 */
                                                                          bool __h_case_result  = (true  &&  ((match10587 . __h_ctor ) ==  __h_LT_t  ) );
                                                                          // ----------
                                                                          
                                                                          ((__h_case_result ) ? ({ /* cicili#Progn10655 */
                                                                              0;
                                                                            }) : ({ /* cicili#Let10659 */
                                                                              // ----------
                                                                              ;
                                                                              ({ /* cicili#Progn10661 */
                                                                                items_len ;
                                                                              });
                                                                            }));
                                                                        });
                                                                      })), fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn10668 */
                                                                        Rc_BTree_int_User __ciciliC_10667 (Rc_BTree_int_User __h_value ) {
                                                                          return clone_Rc_BTree_int_User (__h_value );
                                                                        }
                                                                        __ciciliC_10667 ;
                                                                      }), children )));
                                                                  });
                                                                }) : ({ /* cicili#Let10675 */
                                                                  // ----------
                                                                  ;
                                                                  ({ /* cicili#Progn10677 */
                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 2"));
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        }) : ({ /* cicili#Let10684 */
                                                          // ----------
                                                          ;
                                                          ({ /* cicili#Progn10686 */
                                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 1"));
                                                          });
                                                        }));
                                                    });
                                                  }));
                                              });
                                            });
                                          }) : ({ /* cicili#Let10693 */
                                            // ----------
                                            ;
                                            ({ /* cicili#Progn10695 */
                                              (((items_len  ==  0 )) ? ({ /* cicili#Let10699 */
                                                  __auto_type __h_matchbox  = children ;
                                                  // ----------
                                                  ({ /* cicili#Let10703 */
                                                    __auto_type match10702  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                    typeof((((match10702 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Let10706 */
                                                      bool __h_case_result  = (true  &&  (((match10702 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10707 */
                                                            (unboxed  =  (((match10702 . __h_data ). Just ). __h_0_mem ) );
                                                            true ;
                                                          }) ) );
                                                      // ----------
                                                      
                                                      ((__h_case_result ) ? ({ /* cicili#Progn10712 */
                                                          ({ /* cicili#Let10716 */
                                                            typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Let10718 */
                                                              bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn10719 */
                                                                    (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              
                                                              ((__h_case_result ) ? ({ /* cicili#Progn10724 */
                                                                  ({ /* cicili#Let10727 */
                                                                    __auto_type __h_matchbox  = clone_Rc_BTree_int_User (head );
                                                                    // ----------
                                                                    ({ /* cicili#Let10732 */
                                                                      __auto_type match10731  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                      typeof((((match10731 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                      // ----------
                                                                      ;
                                                                      ({ /* cicili#Let10735 */
                                                                        bool __h_case_result  = (true  &&  (((match10731 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10736 */
                                                                              (unboxed  =  (((match10731 . __h_data ). Just ). __h_0_mem ) );
                                                                              true ;
                                                                            }) ) );
                                                                        // ----------
                                                                        
                                                                        ((__h_case_result ) ? ({ /* cicili#Progn10741 */
                                                                            ({ /* cicili#Let10745 */
                                                                              __auto_type chtr  = unboxed ;
                                                                              // ----------
                                                                              ;
                                                                              ({ /* cicili#Progn10747 */
                                                                                ({ /* cicili#Let10750 */
                                                                                  __auto_type ntr  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let10752 */
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
                                                                          }) : ({ /* cicili#Let10759 */
                                                                            // ----------
                                                                            ;
                                                                            ({ /* cicili#Progn10761 */
                                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_CANT_BORROW ("parent borrow 3"));
                                                                            });
                                                                          }));
                                                                      });
                                                                    });
                                                                  });
                                                                }) : ({ /* cicili#Let10768 */
                                                                  // ----------
                                                                  ;
                                                                  ({ /* cicili#Progn10770 */
                                                                    result ;
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        }) : ({ /* cicili#Let10774 */
                                                          // ----------
                                                          ;
                                                          ({ /* cicili#Progn10776 */
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
                              }) : ({ /* cicili#Let10783 */
                                // ----------
                                ;
                                ({ /* cicili#Progn10785 */
                                  result ;
                                });
                              }));
                          });
                        }));
                    });
                  });
                }) : ({ /* cicili#Let10789 */
                  // ----------
                  ;
                  ({ /* cicili#Progn10791 */
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
    return ({ /* cicili#Let10806 */
        __auto_type __h_matchbox  = current ;
        // ----------
        ({ /* cicili#Let10810 */
          __auto_type match10809  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match10809 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let10813 */
            bool __h_case_result  = (true  &&  (((match10809 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn10814 */
                  (unboxed  =  (((match10809 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn10819 */
                ({ /* cicili#Let10824 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                  typeof((head . __h_0_mem )) key ;
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  ;
                  ({ /* cicili#Let10826 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn10827 */
                              (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                              true ;
                            }) &&  (true  &&  ({ /* cicili#Progn10829 */
                                (key  =  (head . __h_0_mem ) );
                                true ;
                              }) ) ) &&  ({ /* cicili#Progn10831 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn10836 */
                        ({ /* cicili#Let10840 */
                          __auto_type match10839  = compareKey (skey , key );
                          // ----------
                          ;
                          ({ /* cicili#Let10842 */
                            bool __h_case_result  = (true  &&  ((match10839 . __h_ctor ) ==  __h_LT_t  ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn10846 */
                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_NOT_FOUND (skey ));
                              }) : ({ /* cicili#Let10853 */
                                // ----------
                                ;
                                ({ /* cicili#Let10855 */
                                  bool __h_case_result  = (true  &&  ((match10839 . __h_ctor ) ==  __h_EQ_t  ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn10859 */
                                      ({ /* cicili#Let10862 */
                                        __auto_type result  = Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (delete_List_BTree_int_User_pair_t (items , current )));
                                        // ----------
                                        { /* cicili#Let10871 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Let10873 */
                                            bool __h_case_result  = (true  &&  ((result . __h_ctor ) ==  __h_Right_t  ) );
                                            // ----------
                                            
                                            if (__h_case_result )
                                              { /* cicili#Block10878 */
                                                if (callback )
                                                  { /* cicili#Block10882 */
                                                    callback (head );
                                                  }
                                              }
                                          });
                                        }
                                        result ;
                                      });
                                    }) : ({ /* cicili#Let10886 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn10888 */
                                        deleteLeaf (items , tail , (index  +  1 ));
                                      });
                                    }));
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let10892 */
                        // ----------
                        ;
                        ({ /* cicili#Progn10894 */
                          Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_NOT_FOUND (skey ));
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let10901 */
                // ----------
                ;
                ({ /* cicili#Progn10903 */
                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CONS ());
                });
              }));
          });
        });
      });
  }
  return ({ /* cicili#Let10911 */
      __auto_type result  = ({ /* cicili#Let10914 */
        typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
        typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
        // ----------
        ;
        ({ /* cicili#Let10916 */
          bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn10917 */
                  (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn10919 */
                  (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                  true ;
                }) ) ) );
          // ----------
          
          ((__h_case_result ) ? ({ /* cicili#Progn10924 */
              deleteInternal (Just_BTree_int_User (tree ), items , children , Nothing_List_BTree_int_User_pair_t (), items , 0);
            }) : ({ /* cicili#Let10930 */
              typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
              typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
              // ----------
              ;
              ({ /* cicili#Let10932 */
                bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn10933 */
                        (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                        true ;
                      }) &&  ({ /* cicili#Progn10935 */
                        (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                        true ;
                      }) ) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn10940 */
                    deleteInternal (Just_BTree_int_User (tree ), items , children , Nothing_List_BTree_int_User_pair_t (), items , 0);
                  }) : ({ /* cicili#Let10946 */
                    typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                    // ----------
                    ;
                    ({ /* cicili#Let10948 */
                      bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn10949 */
                            (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                            true ;
                          }) ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* cicili#Progn10954 */
                          deleteLeaf (items , items , 0);
                        }) : ({ /* cicili#Let10958 */
                          // ----------
                          ;
                          ({ /* cicili#Progn10960 */
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
  return ({ /* cicili#Let10983 */
      typeof((((keys -> __h_data ). Cons ). __h_0_mem )) khead ;
      typeof((((keys -> __h_data ). Cons ). __h_1_mem )) ktail ;
      // ----------
      ;
      ({ /* cicili#Let10985 */
        bool __h_case_result  = (true  &&  (((keys -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn10986 */
                (khead  =  (((keys -> __h_data ). Cons ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn10988 */
                (ktail  =  (((keys -> __h_data ). Cons ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn10993 */
            ({ /* cicili#Let10997 */
              typeof((((values -> __h_data ). Cons ). __h_0_mem )) vhead ;
              typeof((((values -> __h_data ). Cons ). __h_1_mem )) vtail ;
              // ----------
              ;
              ({ /* cicili#Let10999 */
                bool __h_case_result  = (true  &&  (((values -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn11000 */
                        (vhead  =  (((values -> __h_data ). Cons ). __h_0_mem ) );
                        true ;
                      }) &&  ({ /* cicili#Progn11002 */
                        (vtail  =  (((values -> __h_data ). Cons ). __h_1_mem ) );
                        true ;
                      }) ) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn11007 */
                    ({ /* cicili#Let11010 */
                      __auto_type etree  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let11012 */
                        __auto_type etree  = fromLists_BTree_int_User (ktail , vtail );
                        // ----------
                        ((void)((etree . __h_table )-> freeData ));
                        etree ;
                      });
                      // ----------
                      ({ /* cicili#Let11018 */
                        typeof((((etree . __h_data ). Right ). __h_0_mem )) tree ;
                        // ----------
                        ;
                        ({ /* cicili#Let11020 */
                          bool __h_case_result  = (true  &&  (((etree . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn11021 */
                                (tree  =  (((etree . __h_data ). Right ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          ((__h_case_result ) ? ({ /* cicili#Progn11026 */
                              ({ /* cicili#Let11029 */
                                __auto_type tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let11031 */
                                  __auto_type tree  = tree ;
                                  // ----------
                                  ((void)(tree -> __h_table -> freeClass ));
                                  tree ;
                                });
                                // ----------
                                insert_BTree_int_User (tree , khead , vhead );
                              });
                            }) : ({ /* cicili#Let11037 */
                              // ----------
                              ;
                              ({ /* cicili#Progn11039 */
                                etree ;
                              });
                            }));
                        });
                      });
                    });
                  }) : ({ /* cicili#Let11043 */
                    // ----------
                    ;
                    ({ /* cicili#Progn11045 */
                      Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (BoxedNil_BTree_int_User_pair_t ()));
                    });
                  }));
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
}
Either_BTree_int_User_Error_BTree_int_User pure_BTree_int_User (int keys [], User values [], size_t len ) {
  return ({ /* cicili#Let11066 */
      BTree_int_User tree  = Leaf_BTree_int_User (BoxedNil_BTree_int_User_pair_t ());
      // ----------
      for (size_t i  = 0; (i  <  len  ); (++i )) {
          { /* cicili#Let11074 */
            __auto_type match11073  = insert_BTree_int_User (tree , keys [i ], values [i ]);
            typeof((((match11073 . __h_data ). Right ). __h_0_mem )) new_tree ;
            // ----------
            ;
            ({ /* cicili#Let11077 */
              bool __h_case_result  = (true  &&  (((match11073 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn11078 */
                    (new_tree  =  (((match11073 . __h_data ). Right ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block11084 */
                  { /* cicili#Block11086 */
                    free_BTree_int_User ((&tree ));
                    tree  = new_tree ;
                  }
                }
              else
                { /* cicili#Let11092 */
                  __auto_type left  = match11073 ;
                  // ----------
                  ;
                  { /* cicili#Block11094 */
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
    return ({ /* cicili#Let11103 */
        __auto_type __h_matchbox  = children ;
        // ----------
        ({ /* cicili#Let11107 */
          __auto_type match11106  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match11106 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let11110 */
            bool __h_case_result  = (true  &&  (((match11106 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11111 */
                  (unboxed  =  (((match11106 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn11116 */
                ({ /* cicili#Let11120 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  ;
                  ({ /* cicili#Let11122 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn11123 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn11125 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn11130 */
                        (({ /* cicili#Let11133 */
                            __auto_type __h_matchbox  = tail ;
                            // ----------
                            ({ /* cicili#Let11137 */
                              __auto_type match11136  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                              typeof((((match11136 . __h_data ). Just ). __h_0_mem )) unboxed ;
                              // ----------
                              ;
                              ({ /* cicili#Let11140 */
                                bool __h_case_result  = (true  &&  (((match11136 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11141 */
                                      (unboxed  =  (((match11136 . __h_data ). Just ). __h_0_mem ) );
                                      true ;
                                    }) ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn11146 */
                                    ({ /* cicili#Let11150 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Let11152 */
                                        bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Cons_t  ) );
                                        // ----------
                                        
                                        ((__h_case_result ) ? ({ /* cicili#Progn11156 */
                                            ({ /* cicili#Let11160 */
                                              __auto_type match11159  = get_Rc_BTree_int_User (head );
                                              typeof((((match11159 . __h_data ). Just ). __h_0_mem )) tr ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let11163 */
                                                bool __h_case_result  = (true  &&  (((match11159 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11164 */
                                                      (tr  =  (((match11159 . __h_data ). Just ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn11169 */
                                                    (showTree (indent , tr ) +  fprintf (file , "\n") );
                                                  }) : ({ /* cicili#Let11173 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn11175 */
                                                      0;
                                                    });
                                                  }));
                                              });
                                            });
                                          }) : ({ /* cicili#Let11179 */
                                            // ----------
                                            ;
                                            ({ /* cicili#Progn11181 */
                                              ({ /* cicili#Let11185 */
                                                __auto_type match11184  = get_Rc_BTree_int_User (head );
                                                typeof((((match11184 . __h_data ). Just ). __h_0_mem )) tr ;
                                                // ----------
                                                ;
                                                ({ /* cicili#Let11188 */
                                                  bool __h_case_result  = (true  &&  (((match11184 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11189 */
                                                        (tr  =  (((match11184 . __h_data ). Just ). __h_0_mem ) );
                                                        true ;
                                                      }) ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn11194 */
                                                      showTree (indent , tr );
                                                    }) : ({ /* cicili#Let11198 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn11200 */
                                                        0;
                                                      });
                                                    }));
                                                });
                                              });
                                            });
                                          }));
                                      });
                                    });
                                  }) : ({ /* cicili#Let11204 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn11206 */
                                      0;
                                    });
                                  }));
                              });
                            });
                          }) +  showChildren (indent , tail ) );
                      }) : ({ /* cicili#Let11210 */
                        // ----------
                        ;
                        ({ /* cicili#Progn11212 */
                          0;
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let11216 */
                // ----------
                ;
                ({ /* cicili#Progn11218 */
                  0;
                });
              }));
          });
        });
      });
  }
  size_t showTree (int indent , BTree_int_User tree ) {
    return (fprintf (file , "%d%*c", indent , (indent  *  2 ), ' ') +  ({ /* cicili#Let11224 */
          typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
          typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
          // ----------
          ;
          ({ /* cicili#Let11226 */
            bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn11227 */
                    (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn11229 */
                    (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                    true ;
                  }) ) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn11234 */
                (show_List_BTree_int_User_pair_t (file , items ) +  ({ /* cicili#Let11238 */
                    __auto_type __h_matchbox  = children ;
                    // ----------
                    ({ /* cicili#Let11242 */
                      __auto_type match11241  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                      typeof((((match11241 . __h_data ). Just ). __h_0_mem )) unboxed ;
                      // ----------
                      ;
                      ({ /* cicili#Let11245 */
                        bool __h_case_result  = (true  &&  (((match11241 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11246 */
                              (unboxed  =  (((match11241 . __h_data ). Just ). __h_0_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn11251 */
                            ({ /* cicili#Let11255 */
                              // ----------
                              ;
                              ({ /* cicili#Let11257 */
                                bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Cons_t  ) );
                                // ----------
                                
                                ((__h_case_result ) ? ({ /* cicili#Progn11261 */
                                    (fprintf (file , "\n") +  showChildren ((indent  +  1 ), children ) );
                                  }) : ({ /* cicili#Let11265 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Progn11267 */
                                      0;
                                    });
                                  }));
                              });
                            });
                          }) : ({ /* cicili#Let11271 */
                            // ----------
                            ;
                            ({ /* cicili#Progn11273 */
                              0;
                            });
                          }));
                      });
                    });
                  }) );
              }) : ({ /* cicili#Let11277 */
                typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
                typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
                // ----------
                ;
                ({ /* cicili#Let11279 */
                  bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn11280 */
                          (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn11282 */
                          (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* cicili#Progn11287 */
                      (show_List_BTree_int_User_pair_t (file , items ) +  ({ /* cicili#Let11291 */
                          __auto_type __h_matchbox  = children ;
                          // ----------
                          ({ /* cicili#Let11295 */
                            __auto_type match11294  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                            typeof((((match11294 . __h_data ). Just ). __h_0_mem )) unboxed ;
                            // ----------
                            ;
                            ({ /* cicili#Let11298 */
                              bool __h_case_result  = (true  &&  (((match11294 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11299 */
                                    (unboxed  =  (((match11294 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* cicili#Progn11304 */
                                  ({ /* cicili#Let11308 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Let11310 */
                                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Cons_t  ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn11314 */
                                          (fprintf (file , "\n") +  showChildren ((indent  +  1 ), children ) );
                                        }) : ({ /* cicili#Let11318 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Progn11320 */
                                            0;
                                          });
                                        }));
                                    });
                                  });
                                }) : ({ /* cicili#Let11324 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Progn11326 */
                                    0;
                                  });
                                }));
                            });
                          });
                        }) );
                    }) : ({ /* cicili#Let11330 */
                      typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                      // ----------
                      ;
                      ({ /* cicili#Let11332 */
                        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn11333 */
                              (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                              true ;
                            }) ) );
                        // ----------
                        
                        ((__h_case_result ) ? ({ /* cicili#Progn11338 */
                            show_List_BTree_int_User_pair_t (file , items );
                          }) : ({ /* cicili#Let11343 */
                            // ----------
                            ;
                            ({ /* cicili#Progn11345 */
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
    ({ /* cicili#Let11353 */
      __auto_type __h_matchbox  = currentChild ;
      // ----------
      { /* cicili#Let11357 */
        __auto_type match11356  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match11356 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let11360 */
          bool __h_case_result  = (true  &&  (((match11356 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11361 */
                (unboxed  =  (((match11356 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block11367 */
              { /* cicili#Let11371 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) wheadC ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tailC ;
                // ----------
                ;
                ({ /* cicili#Let11373 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn11374 */
                          (wheadC  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn11376 */
                          (tailC  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block11382 */
                      { /* cicili#Let11386 */
                        __auto_type match11385  = get_Rc_BTree_int_User (wheadC );
                        typeof((((match11385 . __h_data ). Just ). __h_0_mem )) headC ;
                        // ----------
                        ;
                        ({ /* cicili#Let11389 */
                          bool __h_case_result  = (true  &&  (((match11385 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11390 */
                                (headC  =  (((match11385 . __h_data ). Just ). __h_0_mem ) );
                                true ;
                              }) ) );
                          // ----------
                          
                          if (__h_case_result )
                            { /* cicili#Block11396 */
                              ({ /* cicili#Let11399 */
                                __auto_type __h_matchbox  = tailC ;
                                // ----------
                                { /* cicili#Let11403 */
                                  __auto_type match11402  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                  typeof((((match11402 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let11406 */
                                    bool __h_case_result  = (true  &&  (((match11402 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11407 */
                                          (unboxed  =  (((match11402 . __h_data ). Just ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    if (__h_case_result )
                                      { /* cicili#Block11413 */
                                        { /* cicili#Let11417 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Let11419 */
                                            bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Cons_t  ) );
                                            // ----------
                                            
                                            if (__h_case_result )
                                              { /* cicili#Block11424 */
                                                { /* cicili#Block11426 */
                                                  { /* cicili#Let11430 */
                                                    typeof((((headC -> __h_data ). Branch ). __h_0_mem )) items ;
                                                    typeof((((headC -> __h_data ). Branch ). __h_1_mem )) children ;
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Let11432 */
                                                      bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn11433 */
                                                              (items  =  (((headC -> __h_data ). Branch ). __h_0_mem ) );
                                                              true ;
                                                            }) &&  ({ /* cicili#Progn11435 */
                                                              (children  =  (((headC -> __h_data ). Branch ). __h_1_mem ) );
                                                              true ;
                                                            }) ) ) );
                                                      // ----------
                                                      
                                                      if (__h_case_result )
                                                        { /* cicili#Block11441 */
                                                          traverseInternal (items , children );
                                                        }
                                                      else
                                                        { /* cicili#Let11446 */
                                                          typeof((((headC -> __h_data ). Internal ). __h_0_mem )) items ;
                                                          typeof((((headC -> __h_data ). Internal ). __h_1_mem )) children ;
                                                          // ----------
                                                          ;
                                                          ({ /* cicili#Let11448 */
                                                            bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn11449 */
                                                                    (items  =  (((headC -> __h_data ). Internal ). __h_0_mem ) );
                                                                    true ;
                                                                  }) &&  ({ /* cicili#Progn11451 */
                                                                    (children  =  (((headC -> __h_data ). Internal ). __h_1_mem ) );
                                                                    true ;
                                                                  }) ) ) );
                                                            // ----------
                                                            
                                                            if (__h_case_result )
                                                              { /* cicili#Block11457 */
                                                                traverseInternal (items , children );
                                                              }
                                                            else
                                                              { /* cicili#Let11462 */
                                                                typeof((((headC -> __h_data ). Leaf ). __h_0_mem )) items ;
                                                                // ----------
                                                                ;
                                                                ({ /* cicili#Let11464 */
                                                                  bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn11465 */
                                                                        (items  =  (((headC -> __h_data ). Leaf ). __h_0_mem ) );
                                                                        true ;
                                                                      }) ) );
                                                                  // ----------
                                                                  
                                                                  if (__h_case_result )
                                                                    { /* cicili#Block11471 */
                                                                      traverseLeaf (items , True ());
                                                                    }
                                                                });
                                                              }
                                                          });
                                                        }
                                                    });
                                                  }
                                                  ({ /* cicili#Let11474 */
                                                    __auto_type __h_matchbox  = currentItem ;
                                                    // ----------
                                                    { /* cicili#Let11478 */
                                                      __auto_type match11477  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                      typeof((((match11477 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let11481 */
                                                        bool __h_case_result  = (true  &&  (((match11477 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11482 */
                                                              (unboxed  =  (((match11477 . __h_data ). Just ). __h_0_mem ) );
                                                              true ;
                                                            }) ) );
                                                        // ----------
                                                        
                                                        if (__h_case_result )
                                                          { /* cicili#Block11488 */
                                                            { /* cicili#Let11492 */
                                                              typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) headI ;
                                                              typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tailI ;
                                                              // ----------
                                                              ;
                                                              ({ /* cicili#Let11494 */
                                                                bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn11495 */
                                                                        (headI  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                                                                        true ;
                                                                      }) &&  ({ /* cicili#Progn11497 */
                                                                        (tailI  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                                                                        true ;
                                                                      }) ) ) );
                                                                // ----------
                                                                
                                                                if (__h_case_result )
                                                                  { /* cicili#Block11503 */
                                                                    { /* cicili#Block11505 */
                                                                      callback (headI , True ());
                                                                      traverseInternal (tailI , tailC );
                                                                    }
                                                                  }
                                                              });
                                                            }
                                                          }
                                                        else
                                                          { /* cicili#Let11510 */
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Let11512 */
                                                              bool __h_case_result  = (true  &&  ((match11477 . __h_ctor ) ==  __h_Nothing_t  ) );
                                                              // ----------
                                                              
                                                              if (__h_case_result )
                                                                { /* cicili#Block11517 */
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
                                              { /* cicili#Let11522 */
                                                // ----------
                                                ;
                                                { /* cicili#Block11524 */
                                                  { /* cicili#Block11526 */
                                                    { /* cicili#Let11530 */
                                                      typeof((((headC -> __h_data ). Branch ). __h_0_mem )) items ;
                                                      typeof((((headC -> __h_data ). Branch ). __h_1_mem )) children ;
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Let11532 */
                                                        bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn11533 */
                                                                (items  =  (((headC -> __h_data ). Branch ). __h_0_mem ) );
                                                                true ;
                                                              }) &&  ({ /* cicili#Progn11535 */
                                                                (children  =  (((headC -> __h_data ). Branch ). __h_1_mem ) );
                                                                true ;
                                                              }) ) ) );
                                                        // ----------
                                                        
                                                        if (__h_case_result )
                                                          { /* cicili#Block11541 */
                                                            traverseInternal (items , children );
                                                          }
                                                        else
                                                          { /* cicili#Let11546 */
                                                            typeof((((headC -> __h_data ). Internal ). __h_0_mem )) items ;
                                                            typeof((((headC -> __h_data ). Internal ). __h_1_mem )) children ;
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Let11548 */
                                                              bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn11549 */
                                                                      (items  =  (((headC -> __h_data ). Internal ). __h_0_mem ) );
                                                                      true ;
                                                                    }) &&  ({ /* cicili#Progn11551 */
                                                                      (children  =  (((headC -> __h_data ). Internal ). __h_1_mem ) );
                                                                      true ;
                                                                    }) ) ) );
                                                              // ----------
                                                              
                                                              if (__h_case_result )
                                                                { /* cicili#Block11557 */
                                                                  traverseInternal (items , children );
                                                                }
                                                              else
                                                                { /* cicili#Let11562 */
                                                                  typeof((((headC -> __h_data ). Leaf ). __h_0_mem )) items ;
                                                                  // ----------
                                                                  ;
                                                                  ({ /* cicili#Let11564 */
                                                                    bool __h_case_result  = (true  &&  (((headC -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn11565 */
                                                                          (items  =  (((headC -> __h_data ). Leaf ). __h_0_mem ) );
                                                                          true ;
                                                                        }) ) );
                                                                    // ----------
                                                                    
                                                                    if (__h_case_result )
                                                                      { /* cicili#Block11571 */
                                                                        traverseLeaf (items , False ());
                                                                      }
                                                                  });
                                                                }
                                                            });
                                                          }
                                                      });
                                                    }
                                                    ({ /* cicili#Let11574 */
                                                      __auto_type __h_matchbox  = currentItem ;
                                                      // ----------
                                                      { /* cicili#Let11578 */
                                                        __auto_type match11577  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                        typeof((((match11577 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                        // ----------
                                                        ;
                                                        ({ /* cicili#Let11581 */
                                                          bool __h_case_result  = (true  &&  (((match11577 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11582 */
                                                                (unboxed  =  (((match11577 . __h_data ). Just ). __h_0_mem ) );
                                                                true ;
                                                              }) ) );
                                                          // ----------
                                                          
                                                          if (__h_case_result )
                                                            { /* cicili#Block11588 */
                                                              { /* cicili#Let11592 */
                                                                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) headI ;
                                                                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tailI ;
                                                                // ----------
                                                                ;
                                                                ({ /* cicili#Let11594 */
                                                                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn11595 */
                                                                          (headI  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                                                                          true ;
                                                                        }) &&  ({ /* cicili#Progn11597 */
                                                                          (tailI  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                                                                          true ;
                                                                        }) ) ) );
                                                                  // ----------
                                                                  
                                                                  if (__h_case_result )
                                                                    { /* cicili#Block11603 */
                                                                      { /* cicili#Block11605 */
                                                                        callback (headI , False ());
                                                                        traverseInternal (tailI , tailC );
                                                                      }
                                                                    }
                                                                });
                                                              }
                                                            }
                                                          else
                                                            { /* cicili#Let11610 */
                                                              // ----------
                                                              ;
                                                              ({ /* cicili#Let11612 */
                                                                bool __h_case_result  = (true  &&  ((match11577 . __h_ctor ) ==  __h_Nothing_t  ) );
                                                                // ----------
                                                                
                                                                if (__h_case_result )
                                                                  { /* cicili#Block11617 */
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
                                      { /* cicili#Let11622 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Let11624 */
                                          bool __h_case_result  = (true  &&  ((match11402 . __h_ctor ) ==  __h_Nothing_t  ) );
                                          // ----------
                                          
                                          if (__h_case_result )
                                            { /* cicili#Block11629 */
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
            { /* cicili#Let11634 */
              // ----------
              ;
              ({ /* cicili#Let11636 */
                bool __h_case_result  = (true  &&  ((match11356 . __h_ctor ) ==  __h_Nothing_t  ) );
                // ----------
                
                if (__h_case_result )
                  { /* cicili#Block11641 */
                    False ();
                  }
              });
            }
        });
      }
    });
  }
  void traverseLeaf (List_BTree_int_User_pair_t current , Bool hasNextLeaf ) {
    ({ /* cicili#Let11647 */
      __auto_type __h_matchbox  = current ;
      // ----------
      { /* cicili#Let11651 */
        __auto_type match11650  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
        typeof((((match11650 . __h_data ). Just ). __h_0_mem )) unboxed ;
        // ----------
        ;
        ({ /* cicili#Let11654 */
          bool __h_case_result  = (true  &&  (((match11650 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11655 */
                (unboxed  =  (((match11650 . __h_data ). Just ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block11661 */
              { /* cicili#Let11665 */
                typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                // ----------
                ;
                ({ /* cicili#Let11667 */
                  bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn11668 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn11670 */
                          (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                          true ;
                        }) ) ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block11676 */
                      { /* cicili#Block11678 */
                        callback (head , ({ /* cicili#Let11682 */
                            // ----------
                            ;
                            ({ /* cicili#Let11684 */
                              bool __h_case_result  = (true  &&  ((hasNextLeaf . __h_ctor ) ==  __h_True_t  ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* cicili#Progn11688 */
                                  hasNextLeaf ;
                                }) : ({ /* cicili#Let11692 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Progn11694 */
                                    ({ /* cicili#Let11697 */
                                      __auto_type __h_matchbox  = tail ;
                                      // ----------
                                      ({ /* cicili#Let11701 */
                                        __auto_type match11700  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                        typeof((((match11700 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let11704 */
                                          bool __h_case_result  = (true  &&  (((match11700 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11705 */
                                                (unboxed  =  (((match11700 . __h_data ). Just ). __h_0_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn11710 */
                                              ({ /* cicili#Let11714 */
                                                // ----------
                                                ;
                                                ({ /* cicili#Let11716 */
                                                  bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Cons_t  ) );
                                                  // ----------
                                                  
                                                  ((__h_case_result ) ? ({ /* cicili#Progn11720 */
                                                      True ();
                                                    }) : ({ /* cicili#Let11724 */
                                                      // ----------
                                                      ;
                                                      ({ /* cicili#Progn11726 */
                                                        False ();
                                                      });
                                                    }));
                                                });
                                              });
                                            }) : ({ /* cicili#Let11730 */
                                              // ----------
                                              ;
                                              ({ /* cicili#Progn11732 */
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
            { /* cicili#Let11737 */
              // ----------
              ;
              ({ /* cicili#Let11739 */
                bool __h_case_result  = (true  &&  ((match11650 . __h_ctor ) ==  __h_Nothing_t  ) );
                // ----------
                
                if (__h_case_result )
                  { /* cicili#Block11744 */
                    False ();
                  }
              });
            }
        });
      }
    });
  }
  { /* cicili#Let11749 */
    typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
    typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
    // ----------
    ;
    ({ /* cicili#Let11751 */
      bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn11752 */
              (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
              true ;
            }) &&  ({ /* cicili#Progn11754 */
              (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block11760 */
          traverseInternal (items , children );
        }
      else
        { /* cicili#Let11765 */
          typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
          typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
          // ----------
          ;
          ({ /* cicili#Let11767 */
            bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn11768 */
                    (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn11770 */
                    (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                    true ;
                  }) ) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block11776 */
                traverseInternal (items , children );
              }
            else
              { /* cicili#Let11781 */
                typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                // ----------
                ;
                ({ /* cicili#Let11783 */
                  bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn11784 */
                        (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block11790 */
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
    return ({ /* cicili#Let11805 */
        __auto_type __h_matchbox  = current ;
        // ----------
        ({ /* cicili#Let11809 */
          __auto_type match11808  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match11808 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let11812 */
            bool __h_case_result  = (true  &&  (((match11808 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11813 */
                  (unboxed  =  (((match11808 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn11818 */
                ({ /* cicili#Let11822 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  ;
                  ({ /* cicili#Let11824 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn11825 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn11827 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn11832 */
                        ({ /* cicili#Let11835 */
                          __auto_type __h_matchbox  = tail ;
                          // ----------
                          ({ /* cicili#Let11839 */
                            __auto_type match11838  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                            typeof((((match11838 . __h_data ). Just ). __h_0_mem )) unboxed ;
                            // ----------
                            ;
                            ({ /* cicili#Let11842 */
                              bool __h_case_result  = (true  &&  (((match11838 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11843 */
                                    (unboxed  =  (((match11838 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* cicili#Progn11848 */
                                  ({ /* cicili#Let11852 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Let11854 */
                                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Nil_t  ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn11858 */
                                          ({ /* cicili#Let11862 */
                                            __auto_type match11861  = get_Rc_BTree_int_User (head );
                                            typeof((((match11861 . __h_data ). Just ). __h_0_mem )) child ;
                                            // ----------
                                            ;
                                            ({ /* cicili#Let11865 */
                                              bool __h_case_result  = (true  &&  (((match11861 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11866 */
                                                    (child  =  (((match11861 . __h_data ). Just ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              
                                              ((__h_case_result ) ? ({ /* cicili#Progn11871 */
                                                  ({ /* cicili#Let11875 */
                                                    typeof((((child -> __h_data ). Branch ). __h_1_mem )) nchildren ;
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Let11877 */
                                                      bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn11878 */
                                                            (nchildren  =  (((child -> __h_data ). Branch ). __h_1_mem ) );
                                                            true ;
                                                          }) ) );
                                                      // ----------
                                                      
                                                      ((__h_case_result ) ? ({ /* cicili#Progn11883 */
                                                          maxInternal (nchildren );
                                                        }) : ({ /* cicili#Let11887 */
                                                          typeof((((child -> __h_data ). Internal ). __h_1_mem )) nchildren ;
                                                          // ----------
                                                          ;
                                                          ({ /* cicili#Let11889 */
                                                            bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn11890 */
                                                                  (nchildren  =  (((child -> __h_data ). Internal ). __h_1_mem ) );
                                                                  true ;
                                                                }) ) );
                                                            // ----------
                                                            
                                                            ((__h_case_result ) ? ({ /* cicili#Progn11895 */
                                                                maxInternal (nchildren );
                                                              }) : ({ /* cicili#Let11899 */
                                                                typeof((((child -> __h_data ). Leaf ). __h_0_mem )) items ;
                                                                // ----------
                                                                ;
                                                                ({ /* cicili#Let11901 */
                                                                  bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn11902 */
                                                                        (items  =  (((child -> __h_data ). Leaf ). __h_0_mem ) );
                                                                        true ;
                                                                      }) ) );
                                                                  // ----------
                                                                  
                                                                  ((__h_case_result ) ? ({ /* cicili#Progn11907 */
                                                                      maxLeaf (items );
                                                                    }) : ({ /* cicili#Let11911 */
                                                                      // ----------
                                                                      ;
                                                                      ({ /* cicili#Progn11913 */
                                                                        Nothing_BTree_int_User_pair_t ();
                                                                      });
                                                                    }));
                                                                });
                                                              }));
                                                          });
                                                        }));
                                                    });
                                                  });
                                                }) : ({ /* cicili#Let11918 */
                                                  // ----------
                                                  ;
                                                  ({ /* cicili#Progn11920 */
                                                    Nothing_BTree_int_User_pair_t ();
                                                  });
                                                }));
                                            });
                                          });
                                        }) : ({ /* cicili#Let11925 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Progn11927 */
                                            maxInternal (tail );
                                          });
                                        }));
                                    });
                                  });
                                }) : ({ /* cicili#Let11931 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Progn11933 */
                                    Nothing_BTree_int_User_pair_t ();
                                  });
                                }));
                            });
                          });
                        });
                      }) : ({ /* cicili#Let11938 */
                        // ----------
                        ;
                        ({ /* cicili#Progn11940 */
                          Nothing_BTree_int_User_pair_t ();
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let11945 */
                // ----------
                ;
                ({ /* cicili#Progn11947 */
                  Nothing_BTree_int_User_pair_t ();
                });
              }));
          });
        });
      });
  }
  Maybe_BTree_int_User_pair_t maxLeaf (List_BTree_int_User_pair_t current ) {
    return ({ /* cicili#Let11954 */
        __auto_type __h_matchbox  = current ;
        // ----------
        ({ /* cicili#Let11958 */
          __auto_type match11957  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match11957 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let11961 */
            bool __h_case_result  = (true  &&  (((match11957 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11962 */
                  (unboxed  =  (((match11957 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn11967 */
                ({ /* cicili#Let11971 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  ;
                  ({ /* cicili#Let11973 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn11974 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn11976 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn11981 */
                        ({ /* cicili#Let11984 */
                          __auto_type __h_matchbox  = tail ;
                          // ----------
                          ({ /* cicili#Let11988 */
                            __auto_type match11987  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                            typeof((((match11987 . __h_data ). Just ). __h_0_mem )) unboxed ;
                            // ----------
                            ;
                            ({ /* cicili#Let11991 */
                              bool __h_case_result  = (true  &&  (((match11987 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn11992 */
                                    (unboxed  =  (((match11987 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* cicili#Progn11997 */
                                  ({ /* cicili#Let12001 */
                                    // ----------
                                    ;
                                    ({ /* cicili#Let12003 */
                                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Nil_t  ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn12007 */
                                          Just_BTree_int_User_pair_t (head );
                                        }) : ({ /* cicili#Let12012 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Progn12014 */
                                            maxLeaf (tail );
                                          });
                                        }));
                                    });
                                  });
                                }) : ({ /* cicili#Let12018 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Progn12020 */
                                    Nothing_BTree_int_User_pair_t ();
                                  });
                                }));
                            });
                          });
                        });
                      }) : ({ /* cicili#Let12025 */
                        // ----------
                        ;
                        ({ /* cicili#Progn12027 */
                          Nothing_BTree_int_User_pair_t ();
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let12032 */
                // ----------
                ;
                ({ /* cicili#Progn12034 */
                  Nothing_BTree_int_User_pair_t ();
                });
              }));
          });
        });
      });
  }
  return ({ /* cicili#Let12040 */
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      ;
      ({ /* cicili#Let12042 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn12043 */
              (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn12048 */
            maxInternal (children );
          }) : ({ /* cicili#Let12052 */
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            ;
            ({ /* cicili#Let12054 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn12055 */
                    (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn12060 */
                  maxInternal (children );
                }) : ({ /* cicili#Let12064 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  ;
                  ({ /* cicili#Let12066 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn12067 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn12072 */
                        maxLeaf (items );
                      }) : ({ /* cicili#Let12076 */
                        // ----------
                        ;
                        ({ /* cicili#Progn12078 */
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
    return ({ /* cicili#Let12092 */
        __auto_type __h_matchbox  = first ;
        // ----------
        ({ /* cicili#Let12096 */
          __auto_type match12095  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match12095 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let12099 */
            bool __h_case_result  = (true  &&  (((match12095 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12100 */
                  (unboxed  =  (((match12095 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn12105 */
                ({ /* cicili#Let12109 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                  // ----------
                  ;
                  ({ /* cicili#Let12111 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn12112 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn12117 */
                        ({ /* cicili#Let12121 */
                          __auto_type match12120  = get_Rc_BTree_int_User (head );
                          typeof((((match12120 . __h_data ). Just ). __h_0_mem )) child ;
                          // ----------
                          ;
                          ({ /* cicili#Let12124 */
                            bool __h_case_result  = (true  &&  (((match12120 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12125 */
                                  (child  =  (((match12120 . __h_data ). Just ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn12130 */
                                ({ /* cicili#Let12134 */
                                  typeof((((child -> __h_data ). Branch ). __h_1_mem )) nchildren ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let12136 */
                                    bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn12137 */
                                          (nchildren  =  (((child -> __h_data ). Branch ). __h_1_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn12142 */
                                        minInternal (nchildren );
                                      }) : ({ /* cicili#Let12146 */
                                        typeof((((child -> __h_data ). Internal ). __h_1_mem )) nchildren ;
                                        // ----------
                                        ;
                                        ({ /* cicili#Let12148 */
                                          bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn12149 */
                                                (nchildren  =  (((child -> __h_data ). Internal ). __h_1_mem ) );
                                                true ;
                                              }) ) );
                                          // ----------
                                          
                                          ((__h_case_result ) ? ({ /* cicili#Progn12154 */
                                              minInternal (nchildren );
                                            }) : ({ /* cicili#Let12158 */
                                              typeof((((child -> __h_data ). Leaf ). __h_0_mem )) items ;
                                              // ----------
                                              ;
                                              ({ /* cicili#Let12160 */
                                                bool __h_case_result  = (true  &&  (((child -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn12161 */
                                                      (items  =  (((child -> __h_data ). Leaf ). __h_0_mem ) );
                                                      true ;
                                                    }) ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn12166 */
                                                    minLeaf (items );
                                                  }) : ({ /* cicili#Let12170 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn12172 */
                                                      Nothing_BTree_int_User_pair_t ();
                                                    });
                                                  }));
                                              });
                                            }));
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let12177 */
                                // ----------
                                ;
                                ({ /* cicili#Progn12179 */
                                  Nothing_BTree_int_User_pair_t ();
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let12184 */
                        // ----------
                        ;
                        ({ /* cicili#Progn12186 */
                          Nothing_BTree_int_User_pair_t ();
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let12191 */
                // ----------
                ;
                ({ /* cicili#Progn12193 */
                  Nothing_BTree_int_User_pair_t ();
                });
              }));
          });
        });
      });
  }
  Maybe_BTree_int_User_pair_t minLeaf (List_BTree_int_User_pair_t first ) {
    return ({ /* cicili#Let12200 */
        __auto_type __h_matchbox  = first ;
        // ----------
        ({ /* cicili#Let12204 */
          __auto_type match12203  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match12203 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let12207 */
            bool __h_case_result  = (true  &&  (((match12203 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12208 */
                  (unboxed  =  (((match12203 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn12213 */
                ({ /* cicili#Let12217 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                  // ----------
                  ;
                  ({ /* cicili#Let12219 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ({ /* cicili#Progn12220 */
                          (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn12225 */
                        Just_BTree_int_User_pair_t (head );
                      }) : ({ /* cicili#Let12230 */
                        // ----------
                        ;
                        ({ /* cicili#Progn12232 */
                          Nothing_BTree_int_User_pair_t ();
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let12237 */
                // ----------
                ;
                ({ /* cicili#Progn12239 */
                  Nothing_BTree_int_User_pair_t ();
                });
              }));
          });
        });
      });
  }
  return ({ /* cicili#Let12245 */
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      ;
      ({ /* cicili#Let12247 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  ({ /* cicili#Progn12248 */
              (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn12253 */
            minInternal (children );
          }) : ({ /* cicili#Let12257 */
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            ;
            ({ /* cicili#Let12259 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  ({ /* cicili#Progn12260 */
                    (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn12265 */
                  minInternal (children );
                }) : ({ /* cicili#Let12269 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  ;
                  ({ /* cicili#Let12271 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn12272 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn12277 */
                        minLeaf (items );
                      }) : ({ /* cicili#Let12281 */
                        // ----------
                        ;
                        ({ /* cicili#Progn12283 */
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
    return ({ /* cicili#Let12299 */
        __auto_type __h_matchbox  = current ;
        // ----------
        ({ /* cicili#Let12303 */
          __auto_type match12302  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match12302 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let12306 */
            bool __h_case_result  = (true  &&  (((match12302 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12307 */
                  (unboxed  =  (((match12302 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn12312 */
                ({ /* cicili#Let12317 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                  typeof((head . __h_0_mem )) key ;
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  ;
                  ({ /* cicili#Let12319 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn12320 */
                              (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                              true ;
                            }) &&  (true  &&  ({ /* cicili#Progn12322 */
                                (key  =  (head . __h_0_mem ) );
                                true ;
                              }) ) ) &&  ({ /* cicili#Progn12324 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn12329 */
                        ({ /* cicili#Let12333 */
                          __auto_type match12332  = compareKey (skey , key );
                          // ----------
                          ;
                          ({ /* cicili#Let12335 */
                            bool __h_case_result  = (true  &&  ((match12332 . __h_ctor ) ==  __h_LT_t  ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn12339 */
                                ({ /* cicili#Let12343 */
                                  __auto_type match12342  = nth_List_Rc_BTree_int_User (index , children );
                                  typeof((((match12342 . __h_data ). Just ). __h_0_mem )) node ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let12346 */
                                    bool __h_case_result  = (true  &&  (((match12342 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12347 */
                                          (node  =  (((match12342 . __h_data ). Just ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn12352 */
                                        ({ /* cicili#Let12356 */
                                          __auto_type match12355  = get_Rc_BTree_int_User (node );
                                          typeof((((match12355 . __h_data ). Just ). __h_0_mem )) tr ;
                                          // ----------
                                          ;
                                          ({ /* cicili#Let12359 */
                                            bool __h_case_result  = (true  &&  (((match12355 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12360 */
                                                  (tr  =  (((match12355 . __h_data ). Just ). __h_0_mem ) );
                                                  true ;
                                                }) ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* cicili#Progn12365 */
                                                search_BTree_int_User (tr , skey );
                                              }) : ({ /* cicili#Let12370 */
                                                // ----------
                                                ;
                                                ({ /* cicili#Progn12372 */
                                                  Nothing_BTree_int_User_pair_t ();
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* cicili#Let12377 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn12379 */
                                          Nothing_BTree_int_User_pair_t ();
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let12384 */
                                // ----------
                                ;
                                ({ /* cicili#Let12386 */
                                  bool __h_case_result  = (true  &&  ((match12332 . __h_ctor ) ==  __h_EQ_t  ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn12390 */
                                      Just_BTree_int_User_pair_t (head );
                                    }) : ({ /* cicili#Let12395 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn12397 */
                                        ({ /* cicili#Let12400 */
                                          __auto_type __h_matchbox  = tail ;
                                          // ----------
                                          ({ /* cicili#Let12404 */
                                            __auto_type match12403  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                            typeof((((match12403 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                            // ----------
                                            ;
                                            ({ /* cicili#Let12407 */
                                              bool __h_case_result  = (true  &&  (((match12403 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12408 */
                                                    (unboxed  =  (((match12403 . __h_data ). Just ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              
                                              ((__h_case_result ) ? ({ /* cicili#Progn12413 */
                                                  ({ /* cicili#Let12417 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Let12419 */
                                                      bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Nil_t  ) );
                                                      // ----------
                                                      
                                                      ((__h_case_result ) ? ({ /* cicili#Progn12423 */
                                                          ({ /* cicili#Let12427 */
                                                            __auto_type match12426  = nth_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                            typeof((((match12426 . __h_data ). Just ). __h_0_mem )) node ;
                                                            // ----------
                                                            ;
                                                            ({ /* cicili#Let12430 */
                                                              bool __h_case_result  = (true  &&  (((match12426 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12431 */
                                                                    (node  =  (((match12426 . __h_data ). Just ). __h_0_mem ) );
                                                                    true ;
                                                                  }) ) );
                                                              // ----------
                                                              
                                                              ((__h_case_result ) ? ({ /* cicili#Progn12436 */
                                                                  ({ /* cicili#Let12440 */
                                                                    __auto_type match12439  = get_Rc_BTree_int_User (node );
                                                                    typeof((((match12439 . __h_data ). Just ). __h_0_mem )) tr ;
                                                                    // ----------
                                                                    ;
                                                                    ({ /* cicili#Let12443 */
                                                                      bool __h_case_result  = (true  &&  (((match12439 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12444 */
                                                                            (tr  =  (((match12439 . __h_data ). Just ). __h_0_mem ) );
                                                                            true ;
                                                                          }) ) );
                                                                      // ----------
                                                                      
                                                                      ((__h_case_result ) ? ({ /* cicili#Progn12449 */
                                                                          search_BTree_int_User (tr , skey );
                                                                        }) : ({ /* cicili#Let12454 */
                                                                          // ----------
                                                                          ;
                                                                          ({ /* cicili#Progn12456 */
                                                                            Nothing_BTree_int_User_pair_t ();
                                                                          });
                                                                        }));
                                                                    });
                                                                  });
                                                                }) : ({ /* cicili#Let12461 */
                                                                  // ----------
                                                                  ;
                                                                  ({ /* cicili#Progn12463 */
                                                                    Nothing_BTree_int_User_pair_t ();
                                                                  });
                                                                }));
                                                            });
                                                          });
                                                        }) : ({ /* cicili#Let12468 */
                                                          // ----------
                                                          ;
                                                          ({ /* cicili#Progn12470 */
                                                            searchInternal (children , tail , (index  +  1 ));
                                                          });
                                                        }));
                                                    });
                                                  });
                                                }) : ({ /* cicili#Let12474 */
                                                  // ----------
                                                  ;
                                                  ({ /* cicili#Progn12476 */
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
                      }) : ({ /* cicili#Let12481 */
                        // ----------
                        ;
                        ({ /* cicili#Progn12483 */
                          Nothing_BTree_int_User_pair_t ();
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let12488 */
                // ----------
                ;
                ({ /* cicili#Progn12490 */
                  Nothing_BTree_int_User_pair_t ();
                });
              }));
          });
        });
      });
  }
  Maybe_BTree_int_User_pair_t searchLeaf (List_BTree_int_User_pair_t current , size_t index ) {
    return ({ /* cicili#Let12498 */
        __auto_type __h_matchbox  = current ;
        // ----------
        ({ /* cicili#Let12502 */
          __auto_type match12501  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match12501 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let12505 */
            bool __h_case_result  = (true  &&  (((match12501 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12506 */
                  (unboxed  =  (((match12501 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn12511 */
                ({ /* cicili#Let12516 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                  typeof((head . __h_0_mem )) key ;
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  ;
                  ({ /* cicili#Let12518 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn12519 */
                              (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                              true ;
                            }) &&  (true  &&  ({ /* cicili#Progn12521 */
                                (key  =  (head . __h_0_mem ) );
                                true ;
                              }) ) ) &&  ({ /* cicili#Progn12523 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn12528 */
                        ({ /* cicili#Let12532 */
                          __auto_type match12531  = compareKey (skey , key );
                          // ----------
                          ;
                          ({ /* cicili#Let12534 */
                            bool __h_case_result  = (true  &&  ((match12531 . __h_ctor ) ==  __h_EQ_t  ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn12538 */
                                Just_BTree_int_User_pair_t (head );
                              }) : ({ /* cicili#Let12543 */
                                // ----------
                                ;
                                ({ /* cicili#Progn12545 */
                                  ({ /* cicili#Let12548 */
                                    __auto_type __h_matchbox  = tail ;
                                    // ----------
                                    ({ /* cicili#Let12552 */
                                      __auto_type match12551  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                      typeof((((match12551 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                      // ----------
                                      ;
                                      ({ /* cicili#Let12555 */
                                        bool __h_case_result  = (true  &&  (((match12551 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12556 */
                                              (unboxed  =  (((match12551 . __h_data ). Just ). __h_0_mem ) );
                                              true ;
                                            }) ) );
                                        // ----------
                                        
                                        ((__h_case_result ) ? ({ /* cicili#Progn12561 */
                                            ({ /* cicili#Let12565 */
                                              // ----------
                                              ;
                                              ({ /* cicili#Let12567 */
                                                bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Nil_t  ) );
                                                // ----------
                                                
                                                ((__h_case_result ) ? ({ /* cicili#Progn12571 */
                                                    Nothing_BTree_int_User_pair_t ();
                                                  }) : ({ /* cicili#Let12576 */
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Progn12578 */
                                                      searchLeaf (tail , (index  +  1 ));
                                                    });
                                                  }));
                                              });
                                            });
                                          }) : ({ /* cicili#Let12582 */
                                            // ----------
                                            ;
                                            ({ /* cicili#Progn12584 */
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
                      }) : ({ /* cicili#Let12589 */
                        // ----------
                        ;
                        ({ /* cicili#Progn12591 */
                          Nothing_BTree_int_User_pair_t ();
                        });
                      }));
                  });
                });
              }) : ({ /* cicili#Let12596 */
                // ----------
                ;
                ({ /* cicili#Progn12598 */
                  Nothing_BTree_int_User_pair_t ();
                });
              }));
          });
        });
      });
  }
  return ({ /* cicili#Let12604 */
      typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      ;
      ({ /* cicili#Let12606 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn12607 */
                (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn12609 */
                (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn12614 */
            searchInternal (children , items , 0);
          }) : ({ /* cicili#Let12618 */
            typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            ;
            ({ /* cicili#Let12620 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn12621 */
                      (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn12623 */
                      (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn12628 */
                  searchInternal (children , items , 0);
                }) : ({ /* cicili#Let12632 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  ;
                  ({ /* cicili#Let12634 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn12635 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn12640 */
                        searchLeaf (items , 0);
                      }) : ({ /* cicili#Let12644 */
                        // ----------
                        ;
                        ({ /* cicili#Progn12646 */
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
    { /* cicili#Block12658 */
      return Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_INVALID_ORDER (5));
    }
  Either_BTree_int_User_Error_BTree_int_User insertInternal (List_BTree_int_User_pair_t items , List_Rc_BTree_int_User children , List_BTree_int_User_pair_t current , size_t index ) {
    return ({ /* cicili#Let12668 */
        __auto_type __h_matchbox  = current ;
        // ----------
        ({ /* cicili#Let12672 */
          __auto_type match12671  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match12671 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let12675 */
            bool __h_case_result  = (true  &&  (((match12671 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12676 */
                  (unboxed  =  (((match12671 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn12681 */
                ({ /* cicili#Let12686 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                  typeof((head . __h_0_mem )) key ;
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  ;
                  ({ /* cicili#Let12688 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn12689 */
                              (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                              true ;
                            }) &&  (true  &&  ({ /* cicili#Progn12691 */
                                (key  =  (head . __h_0_mem ) );
                                true ;
                              }) ) ) &&  ({ /* cicili#Progn12693 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn12698 */
                        ({ /* cicili#Let12702 */
                          __auto_type match12701  = compareKey (skey , key );
                          // ----------
                          ;
                          ({ /* cicili#Let12704 */
                            bool __h_case_result  = (true  &&  ((match12701 . __h_ctor ) ==  __h_LT_t  ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn12708 */
                                ({ /* cicili#Let12712 */
                                  __auto_type match12711  = nth_List_Rc_BTree_int_User (index , children );
                                  typeof((((match12711 . __h_data ). Just ). __h_0_mem )) child ;
                                  // ----------
                                  ;
                                  ({ /* cicili#Let12715 */
                                    bool __h_case_result  = (true  &&  (((match12711 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12716 */
                                          (child  =  (((match12711 . __h_data ). Just ). __h_0_mem ) );
                                          true ;
                                        }) ) );
                                    // ----------
                                    
                                    ((__h_case_result ) ? ({ /* cicili#Progn12721 */
                                        ({ /* cicili#Let12725 */
                                          __auto_type match12724  = get_Rc_BTree_int_User (child );
                                          typeof((((match12724 . __h_data ). Just ). __h_0_mem )) tr ;
                                          // ----------
                                          ;
                                          ({ /* cicili#Let12728 */
                                            bool __h_case_result  = (true  &&  (((match12724 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12729 */
                                                  (tr  =  (((match12724 . __h_data ). Just ). __h_0_mem ) );
                                                  true ;
                                                }) ) );
                                            // ----------
                                            
                                            ((__h_case_result ) ? ({ /* cicili#Progn12734 */
                                                ({ /* cicili#Let12738 */
                                                  __auto_type match12737  = insert_BTree_int_User (tr , skey , svalue );
                                                  typeof((((match12737 . __h_data ). Right ). __h_0_mem )) child_tree ;
                                                  // ----------
                                                  ;
                                                  ({ /* cicili#Let12741 */
                                                    bool __h_case_result  = (true  &&  (((match12737 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn12742 */
                                                          (child_tree  =  (((match12737 . __h_data ). Right ). __h_0_mem ) );
                                                          true ;
                                                        }) ) );
                                                    // ----------
                                                    
                                                    ((__h_case_result ) ? ({ /* cicili#Progn12747 */
                                                        ({ /* cicili#Let12751 */
                                                          typeof((((child_tree -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                                          typeof((((child_tree -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                                          // ----------
                                                          ;
                                                          ({ /* cicili#Let12753 */
                                                            bool __h_case_result  = (true  &&  (((child_tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn12754 */
                                                                    (child_items  =  (((child_tree -> __h_data ). Branch ). __h_0_mem ) );
                                                                    true ;
                                                                  }) &&  ({ /* cicili#Progn12756 */
                                                                    (child_children  =  (((child_tree -> __h_data ). Branch ). __h_1_mem ) );
                                                                    true ;
                                                                  }) ) ) );
                                                            // ----------
                                                            
                                                            ((__h_case_result ) ? ({ /* cicili#Progn12761 */
                                                                ({ /* cicili#Let12764 */
                                                                  __auto_type __h_matchbox  = child_items ;
                                                                  // ----------
                                                                  ({ /* cicili#Let12768 */
                                                                    __auto_type match12767  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                    typeof((((match12767 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                    // ----------
                                                                    ;
                                                                    ({ /* cicili#Let12771 */
                                                                      bool __h_case_result  = (true  &&  (((match12767 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12772 */
                                                                            (unboxed  =  (((match12767 . __h_data ). Just ). __h_0_mem ) );
                                                                            true ;
                                                                          }) ) );
                                                                      // ----------
                                                                      
                                                                      ((__h_case_result ) ? ({ /* cicili#Progn12777 */
                                                                          ({ /* cicili#Let12781 */
                                                                            typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) single_item ;
                                                                            typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) nil_tail ;
                                                                            // ----------
                                                                            ;
                                                                            ({ /* cicili#Let12783 */
                                                                              bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn12784 */
                                                                                      (single_item  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                                                                                      true ;
                                                                                    }) &&  ({ /* cicili#Progn12786 */
                                                                                      (nil_tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                                                                                      true ;
                                                                                    }) ) ) );
                                                                              // ----------
                                                                              
                                                                              ((__h_case_result ) ? ({ /* cicili#Progn12791 */
                                                                                  ({ /* cicili#Let12794 */
                                                                                    __auto_type __h_matchbox  = nil_tail ;
                                                                                    // ----------
                                                                                    ({ /* cicili#Let12798 */
                                                                                      __auto_type match12797  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                      typeof((((match12797 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                      // ----------
                                                                                      ;
                                                                                      ({ /* cicili#Let12801 */
                                                                                        bool __h_case_result  = (true  &&  (((match12797 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn12802 */
                                                                                              (unboxed  =  (((match12797 . __h_data ). Just ). __h_0_mem ) );
                                                                                              true ;
                                                                                            }) ) );
                                                                                        // ----------
                                                                                        
                                                                                        ((__h_case_result ) ? ({ /* cicili#Progn12807 */
                                                                                            ({ /* cicili#Let12811 */
                                                                                              // ----------
                                                                                              ;
                                                                                              ({ /* cicili#Let12813 */
                                                                                                bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Nil_t  ) );
                                                                                                // ----------
                                                                                                
                                                                                                ((__h_case_result ) ? ({ /* cicili#Progn12817 */
                                                                                                    ({ /* cicili#Let12820 */
                                                                                                      __auto_type child_tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let12822 */
                                                                                                        __auto_type child_tree  = child_tree ;
                                                                                                        // ----------
                                                                                                        ((void)(child_tree -> __h_table -> freeClass ));
                                                                                                        child_tree ;
                                                                                                      });
                                                                                                      // ----------
                                                                                                      Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (insert_List_BTree_int_User_pair_t (items , single_item , current ), ({ /* cicili#Let12831 */
                                                                                                          __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let12833 */
                                                                                                            __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                                                                                            // ----------
                                                                                                            ((void)((r1 . __h_table )-> freeData ));
                                                                                                            r1 ;
                                                                                                          });
                                                                                                          __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let12837 */
                                                                                                            __auto_type r2  = drop_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                                                            // ----------
                                                                                                            ((void)((r2 . __h_table )-> freeData ));
                                                                                                            r2 ;
                                                                                                          });
                                                                                                          __auto_type r3  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let12841 */
                                                                                                            __auto_type r3  = append_List_Rc_BTree_int_User (child_children , r2 );
                                                                                                            // ----------
                                                                                                            ((void)((r3 . __h_table )-> freeData ));
                                                                                                            r3 ;
                                                                                                          });
                                                                                                          __auto_type r4  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let12845 */
                                                                                                            __auto_type r4  = append_List_Rc_BTree_int_User (r1 , r3 );
                                                                                                            // ----------
                                                                                                            ((void)((r4 . __h_table )-> freeData ));
                                                                                                            r4 ;
                                                                                                          });
                                                                                                          // ----------
                                                                                                          fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn12854 */
                                                                                                              Rc_BTree_int_User __ciciliC_12853 (Rc_BTree_int_User __h_value ) {
                                                                                                                return clone_Rc_BTree_int_User (__h_value );
                                                                                                              }
                                                                                                              __ciciliC_12853 ;
                                                                                                            }), r4 );
                                                                                                        })));
                                                                                                    });
                                                                                                  }) : ({ /* cicili#Let12861 */
                                                                                                    // ----------
                                                                                                    ;
                                                                                                    ({ /* cicili#Progn12863 */
                                                                                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_INVALID_BRANCH (child_tree ));
                                                                                                    });
                                                                                                  }));
                                                                                              });
                                                                                            });
                                                                                          }) : ({ /* cicili#Let12870 */
                                                                                            // ----------
                                                                                            ;
                                                                                            ({ /* cicili#Progn12872 */
                                                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CONS ());
                                                                                            });
                                                                                          }));
                                                                                      });
                                                                                    });
                                                                                  });
                                                                                }) : ({ /* cicili#Let12879 */
                                                                                  // ----------
                                                                                  ;
                                                                                  ({ /* cicili#Progn12881 */
                                                                                    Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_INVALID_BRANCH (child_tree ));
                                                                                  });
                                                                                }));
                                                                            });
                                                                          });
                                                                        }) : ({ /* cicili#Let12888 */
                                                                          // ----------
                                                                          ;
                                                                          ({ /* cicili#Progn12890 */
                                                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CONS ());
                                                                          });
                                                                        }));
                                                                    });
                                                                  });
                                                                });
                                                              }) : ({ /* cicili#Let12897 */
                                                                // ----------
                                                                ;
                                                                ({ /* cicili#Let12899 */
                                                                  bool __h_case_result  = (true  &&  ((child_tree -> __h_ctor ) ==  __h_Internal_t  ) );
                                                                  // ----------
                                                                  
                                                                  ((__h_case_result ) ? ({ /* cicili#Progn12903 */
                                                                      Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (clone_Box_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let12911 */
                                                                          __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let12913 */
                                                                            __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                                                            // ----------
                                                                            ((void)((r1 . __h_table )-> freeData ));
                                                                            r1 ;
                                                                          });
                                                                          __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let12917 */
                                                                            __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn12923 */
                                                                              Rc_BTree_int_User __ciciliC_12922 (Rc_BTree_int_User __h_value ) {
                                                                                return clone_Rc_BTree_int_User (__h_value );
                                                                              }
                                                                              __ciciliC_12922 ;
                                                                            }), r1 );
                                                                            // ----------
                                                                            ((void)((r2 . __h_table )-> freeData ));
                                                                            r2 ;
                                                                          });
                                                                          __auto_type r3  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let12930 */
                                                                            __auto_type r3  = drop_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                            // ----------
                                                                            ((void)((r3 . __h_table )-> freeData ));
                                                                            r3 ;
                                                                          });
                                                                          __auto_type r4  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let12934 */
                                                                            __auto_type r4  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn12940 */
                                                                              Rc_BTree_int_User __ciciliC_12939 (Rc_BTree_int_User __h_value ) {
                                                                                return clone_Rc_BTree_int_User (__h_value );
                                                                              }
                                                                              __ciciliC_12939 ;
                                                                            }), r3 );
                                                                            // ----------
                                                                            ((void)((r4 . __h_table )-> freeData ));
                                                                            r4 ;
                                                                          });
                                                                          __auto_type r5  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let12947 */
                                                                            __auto_type r5  = push_List_Rc_BTree_int_User (new_Rc_BTree_int_User (child_tree ), r4 );
                                                                            // ----------
                                                                            ((void)((r5 . __h_table )-> freeData ));
                                                                            r5 ;
                                                                          });
                                                                          // ----------
                                                                          append_List_Rc_BTree_int_User (r2 , r5 );
                                                                        })));
                                                                    }) : ({ /* cicili#Let12955 */
                                                                      // ----------
                                                                      ;
                                                                      ({ /* cicili#Progn12957 */
                                                                        Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (clone_Box_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let12965 */
                                                                            __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let12967 */
                                                                              __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                                                              // ----------
                                                                              ((void)((r1 . __h_table )-> freeData ));
                                                                              r1 ;
                                                                            });
                                                                            __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let12971 */
                                                                              __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn12977 */
                                                                                Rc_BTree_int_User __ciciliC_12976 (Rc_BTree_int_User __h_value ) {
                                                                                  return clone_Rc_BTree_int_User (__h_value );
                                                                                }
                                                                                __ciciliC_12976 ;
                                                                              }), r1 );
                                                                              // ----------
                                                                              ((void)((r2 . __h_table )-> freeData ));
                                                                              r2 ;
                                                                            });
                                                                            __auto_type r3  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let12984 */
                                                                              __auto_type r3  = drop_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                              // ----------
                                                                              ((void)((r3 . __h_table )-> freeData ));
                                                                              r3 ;
                                                                            });
                                                                            __auto_type r4  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let12988 */
                                                                              __auto_type r4  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn12994 */
                                                                                Rc_BTree_int_User __ciciliC_12993 (Rc_BTree_int_User __h_value ) {
                                                                                  return clone_Rc_BTree_int_User (__h_value );
                                                                                }
                                                                                __ciciliC_12993 ;
                                                                              }), r3 );
                                                                              // ----------
                                                                              ((void)((r4 . __h_table )-> freeData ));
                                                                              r4 ;
                                                                            });
                                                                            __auto_type r5  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let13001 */
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
                                                      }) : ({ /* cicili#Let13009 */
                                                        __auto_type left  = match12737 ;
                                                        // ----------
                                                        ;
                                                        ({ /* cicili#Progn13011 */
                                                          left ;
                                                        });
                                                      }));
                                                  });
                                                });
                                              }) : ({ /* cicili#Let13015 */
                                                // ----------
                                                ;
                                                ({ /* cicili#Progn13017 */
                                                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CHILD (head , index ));
                                                });
                                              }));
                                          });
                                        });
                                      }) : ({ /* cicili#Let13024 */
                                        // ----------
                                        ;
                                        ({ /* cicili#Progn13026 */
                                          Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (insert_List_BTree_int_User_pair_t (items , ((BTree_int_User_pair_t){ skey , svalue }), current )));
                                        });
                                      }));
                                  });
                                });
                              }) : ({ /* cicili#Let13036 */
                                // ----------
                                ;
                                ({ /* cicili#Let13038 */
                                  bool __h_case_result  = (true  &&  ((match12701 . __h_ctor ) ==  __h_EQ_t  ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn13042 */
                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_UNIQUE_KEY (head ));
                                    }) : ({ /* cicili#Let13049 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn13051 */
                                        insertInternal (items , children , tail , (index  +  1 ));
                                      });
                                    }));
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let13055 */
                        // ----------
                        ;
                        ({ /* cicili#Progn13057 */
                          ({ /* cicili#Let13061 */
                            __auto_type match13060  = nth_List_Rc_BTree_int_User (index , children );
                            typeof((((match13060 . __h_data ). Just ). __h_0_mem )) child ;
                            // ----------
                            ;
                            ({ /* cicili#Let13064 */
                              bool __h_case_result  = (true  &&  (((match13060 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn13065 */
                                    (child  =  (((match13060 . __h_data ). Just ). __h_0_mem ) );
                                    true ;
                                  }) ) );
                              // ----------
                              
                              ((__h_case_result ) ? ({ /* cicili#Progn13070 */
                                  ({ /* cicili#Let13074 */
                                    __auto_type match13073  = get_Rc_BTree_int_User (child );
                                    typeof((((match13073 . __h_data ). Just ). __h_0_mem )) tr ;
                                    // ----------
                                    ;
                                    ({ /* cicili#Let13077 */
                                      bool __h_case_result  = (true  &&  (((match13073 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn13078 */
                                            (tr  =  (((match13073 . __h_data ). Just ). __h_0_mem ) );
                                            true ;
                                          }) ) );
                                      // ----------
                                      
                                      ((__h_case_result ) ? ({ /* cicili#Progn13083 */
                                          ({ /* cicili#Let13087 */
                                            __auto_type match13086  = insert_BTree_int_User (tr , skey , svalue );
                                            typeof((((match13086 . __h_data ). Right ). __h_0_mem )) child_tree ;
                                            // ----------
                                            ;
                                            ({ /* cicili#Let13090 */
                                              bool __h_case_result  = (true  &&  (((match13086 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn13091 */
                                                    (child_tree  =  (((match13086 . __h_data ). Right ). __h_0_mem ) );
                                                    true ;
                                                  }) ) );
                                              // ----------
                                              
                                              ((__h_case_result ) ? ({ /* cicili#Progn13096 */
                                                  ({ /* cicili#Let13100 */
                                                    typeof((((child_tree -> __h_data ). Branch ). __h_0_mem )) child_items ;
                                                    typeof((((child_tree -> __h_data ). Branch ). __h_1_mem )) child_children ;
                                                    // ----------
                                                    ;
                                                    ({ /* cicili#Let13102 */
                                                      bool __h_case_result  = (true  &&  (((child_tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn13103 */
                                                              (child_items  =  (((child_tree -> __h_data ). Branch ). __h_0_mem ) );
                                                              true ;
                                                            }) &&  ({ /* cicili#Progn13105 */
                                                              (child_children  =  (((child_tree -> __h_data ). Branch ). __h_1_mem ) );
                                                              true ;
                                                            }) ) ) );
                                                      // ----------
                                                      
                                                      ((__h_case_result ) ? ({ /* cicili#Progn13110 */
                                                          ({ /* cicili#Let13113 */
                                                            __auto_type __h_matchbox  = child_items ;
                                                            // ----------
                                                            ({ /* cicili#Let13117 */
                                                              __auto_type match13116  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                              typeof((((match13116 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                              // ----------
                                                              ;
                                                              ({ /* cicili#Let13120 */
                                                                bool __h_case_result  = (true  &&  (((match13116 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn13121 */
                                                                      (unboxed  =  (((match13116 . __h_data ). Just ). __h_0_mem ) );
                                                                      true ;
                                                                    }) ) );
                                                                // ----------
                                                                
                                                                ((__h_case_result ) ? ({ /* cicili#Progn13126 */
                                                                    ({ /* cicili#Let13130 */
                                                                      typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) single_item ;
                                                                      typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) nil_tail ;
                                                                      // ----------
                                                                      ;
                                                                      ({ /* cicili#Let13132 */
                                                                        bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn13133 */
                                                                                (single_item  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                                                                                true ;
                                                                              }) &&  ({ /* cicili#Progn13135 */
                                                                                (nil_tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                                                                                true ;
                                                                              }) ) ) );
                                                                        // ----------
                                                                        
                                                                        ((__h_case_result ) ? ({ /* cicili#Progn13140 */
                                                                            ({ /* cicili#Let13143 */
                                                                              __auto_type __h_matchbox  = nil_tail ;
                                                                              // ----------
                                                                              ({ /* cicili#Let13147 */
                                                                                __auto_type match13146  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
                                                                                typeof((((match13146 . __h_data ). Just ). __h_0_mem )) unboxed ;
                                                                                // ----------
                                                                                ;
                                                                                ({ /* cicili#Let13150 */
                                                                                  bool __h_case_result  = (true  &&  (((match13146 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn13151 */
                                                                                        (unboxed  =  (((match13146 . __h_data ). Just ). __h_0_mem ) );
                                                                                        true ;
                                                                                      }) ) );
                                                                                  // ----------
                                                                                  
                                                                                  ((__h_case_result ) ? ({ /* cicili#Progn13156 */
                                                                                      ({ /* cicili#Let13160 */
                                                                                        // ----------
                                                                                        ;
                                                                                        ({ /* cicili#Let13162 */
                                                                                          bool __h_case_result  = (true  &&  ((unboxed -> __h_ctor ) ==  __h_Nil_t  ) );
                                                                                          // ----------
                                                                                          
                                                                                          ((__h_case_result ) ? ({ /* cicili#Progn13166 */
                                                                                              ({ /* cicili#Let13169 */
                                                                                                __auto_type child_tree  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let13171 */
                                                                                                  __auto_type child_tree  = child_tree ;
                                                                                                  // ----------
                                                                                                  ((void)(child_tree -> __h_table -> freeClass ));
                                                                                                  child_tree ;
                                                                                                });
                                                                                                // ----------
                                                                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (insert_List_BTree_int_User_pair_t (items , single_item , current ), ({ /* cicili#Let13180 */
                                                                                                    __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let13182 */
                                                                                                      __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                                                                                      // ----------
                                                                                                      ((void)((r1 . __h_table )-> freeData ));
                                                                                                      r1 ;
                                                                                                    });
                                                                                                    __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let13186 */
                                                                                                      __auto_type r2  = drop_List_Rc_BTree_int_User ((index  +  1 ), children );
                                                                                                      // ----------
                                                                                                      ((void)((r2 . __h_table )-> freeData ));
                                                                                                      r2 ;
                                                                                                    });
                                                                                                    __auto_type r3  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let13190 */
                                                                                                      __auto_type r3  = append_List_Rc_BTree_int_User (child_children , r2 );
                                                                                                      // ----------
                                                                                                      ((void)((r3 . __h_table )-> freeData ));
                                                                                                      r3 ;
                                                                                                    });
                                                                                                    __auto_type r4  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let13194 */
                                                                                                      __auto_type r4  = append_List_Rc_BTree_int_User (r1 , r3 );
                                                                                                      // ----------
                                                                                                      ((void)((r4 . __h_table )-> freeData ));
                                                                                                      r4 ;
                                                                                                    });
                                                                                                    // ----------
                                                                                                    fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn13203 */
                                                                                                        Rc_BTree_int_User __ciciliC_13202 (Rc_BTree_int_User __h_value ) {
                                                                                                          return clone_Rc_BTree_int_User (__h_value );
                                                                                                        }
                                                                                                        __ciciliC_13202 ;
                                                                                                      }), r4 );
                                                                                                  })));
                                                                                              });
                                                                                            }) : ({ /* cicili#Let13210 */
                                                                                              // ----------
                                                                                              ;
                                                                                              ({ /* cicili#Progn13212 */
                                                                                                Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_INVALID_BRANCH (child_tree ));
                                                                                              });
                                                                                            }));
                                                                                        });
                                                                                      });
                                                                                    }) : ({ /* cicili#Let13219 */
                                                                                      // ----------
                                                                                      ;
                                                                                      ({ /* cicili#Progn13221 */
                                                                                        Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CONS ());
                                                                                      });
                                                                                    }));
                                                                                });
                                                                              });
                                                                            });
                                                                          }) : ({ /* cicili#Let13228 */
                                                                            // ----------
                                                                            ;
                                                                            ({ /* cicili#Progn13230 */
                                                                              Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_INVALID_BRANCH (child_tree ));
                                                                            });
                                                                          }));
                                                                      });
                                                                    });
                                                                  }) : ({ /* cicili#Let13237 */
                                                                    // ----------
                                                                    ;
                                                                    ({ /* cicili#Progn13239 */
                                                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CONS ());
                                                                    });
                                                                  }));
                                                              });
                                                            });
                                                          });
                                                        }) : ({ /* cicili#Let13246 */
                                                          // ----------
                                                          ;
                                                          ({ /* cicili#Let13248 */
                                                            bool __h_case_result  = (true  &&  ((child_tree -> __h_ctor ) ==  __h_Internal_t  ) );
                                                            // ----------
                                                            
                                                            ((__h_case_result ) ? ({ /* cicili#Progn13252 */
                                                                Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (clone_Box_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let13260 */
                                                                    __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let13262 */
                                                                      __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                                                      // ----------
                                                                      ((void)((r1 . __h_table )-> freeData ));
                                                                      r1 ;
                                                                    });
                                                                    __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let13266 */
                                                                      __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn13272 */
                                                                        Rc_BTree_int_User __ciciliC_13271 (Rc_BTree_int_User __h_value ) {
                                                                          return clone_Rc_BTree_int_User (__h_value );
                                                                        }
                                                                        __ciciliC_13271 ;
                                                                      }), r1 );
                                                                      // ----------
                                                                      ((void)((r2 . __h_table )-> freeData ));
                                                                      r2 ;
                                                                    });
                                                                    __auto_type r3  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let13279 */
                                                                      __auto_type r3  = wrap_List_Rc_BTree_int_User (new_Rc_BTree_int_User (child_tree ));
                                                                      // ----------
                                                                      ((void)((r3 . __h_table )-> freeData ));
                                                                      r3 ;
                                                                    });
                                                                    // ----------
                                                                    append_List_Rc_BTree_int_User (r2 , r3 );
                                                                  })));
                                                              }) : ({ /* cicili#Let13287 */
                                                                // ----------
                                                                ;
                                                                ({ /* cicili#Progn13289 */
                                                                  Right_BTree_int_User_Error_BTree_int_User (Internal_BTree_int_User (clone_Box_List_BTree_int_User_pair_t (items ), ({ /* cicili#Let13297 */
                                                                      __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let13299 */
                                                                        __auto_type r1  = take_List_Rc_BTree_int_User (index , children );
                                                                        // ----------
                                                                        ((void)((r1 . __h_table )-> freeData ));
                                                                        r1 ;
                                                                      });
                                                                      __auto_type r2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let13303 */
                                                                        __auto_type r2  = fmap_Functor_List_Rc_BTree_int_User (({ /* cicili#Progn13309 */
                                                                          Rc_BTree_int_User __ciciliC_13308 (Rc_BTree_int_User __h_value ) {
                                                                            return clone_Rc_BTree_int_User (__h_value );
                                                                          }
                                                                          __ciciliC_13308 ;
                                                                        }), r1 );
                                                                        // ----------
                                                                        ((void)((r2 . __h_table )-> freeData ));
                                                                        r2 ;
                                                                      });
                                                                      __auto_type r3  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let13316 */
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
                                                }) : ({ /* cicili#Let13324 */
                                                  __auto_type left  = match13086 ;
                                                  // ----------
                                                  ;
                                                  ({ /* cicili#Progn13326 */
                                                    left ;
                                                  });
                                                }));
                                            });
                                          });
                                        }) : ({ /* cicili#Let13330 */
                                          // ----------
                                          ;
                                          ({ /* cicili#Progn13332 */
                                            Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CHILD (head , index ));
                                          });
                                        }));
                                    });
                                  });
                                }) : ({ /* cicili#Let13339 */
                                  // ----------
                                  ;
                                  ({ /* cicili#Progn13341 */
                                    Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (({ /* cicili#Let13348 */
                                        __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let13350 */
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
              }) : ({ /* cicili#Let13358 */
                // ----------
                ;
                ({ /* cicili#Progn13360 */
                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CONS ());
                });
              }));
          });
        });
      });
  }
  Either_BTree_int_User_Error_BTree_int_User insertLeaf (List_BTree_int_User_pair_t items , List_BTree_int_User_pair_t current , size_t index ) {
    return ({ /* cicili#Let13373 */
        __auto_type __h_matchbox  = current ;
        // ----------
        ({ /* cicili#Let13377 */
          __auto_type match13376  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match13376 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let13380 */
            bool __h_case_result  = (true  &&  (((match13376 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn13381 */
                  (unboxed  =  (((match13376 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            ((__h_case_result ) ? ({ /* cicili#Progn13386 */
                ({ /* cicili#Let13391 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                  typeof((head . __h_0_mem )) key ;
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  ;
                  ({ /* cicili#Let13393 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  ((({ /* cicili#Progn13394 */
                              (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                              true ;
                            }) &&  (true  &&  ({ /* cicili#Progn13396 */
                                (key  =  (head . __h_0_mem ) );
                                true ;
                              }) ) ) &&  ({ /* cicili#Progn13398 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn13403 */
                        ({ /* cicili#Let13407 */
                          __auto_type match13406  = compareKey (skey , key );
                          // ----------
                          ;
                          ({ /* cicili#Let13409 */
                            bool __h_case_result  = (true  &&  ((match13406 . __h_ctor ) ==  __h_LT_t  ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn13413 */
                                Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (insert_List_BTree_int_User_pair_t (items , ((BTree_int_User_pair_t){ skey , svalue }), current )));
                              }) : ({ /* cicili#Let13423 */
                                // ----------
                                ;
                                ({ /* cicili#Let13425 */
                                  bool __h_case_result  = (true  &&  ((match13406 . __h_ctor ) ==  __h_EQ_t  ) );
                                  // ----------
                                  
                                  ((__h_case_result ) ? ({ /* cicili#Progn13429 */
                                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_UNIQUE_KEY (head ));
                                    }) : ({ /* cicili#Let13436 */
                                      // ----------
                                      ;
                                      ({ /* cicili#Progn13438 */
                                        insertLeaf (items , tail , (index  +  1 ));
                                      });
                                    }));
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let13442 */
                        // ----------
                        ;
                        ({ /* cicili#Progn13444 */
                          Right_BTree_int_User_Error_BTree_int_User (Leaf_BTree_int_User (({ /* cicili#Let13451 */
                              __auto_type r1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let13453 */
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
              }) : ({ /* cicili#Let13461 */
                // ----------
                ;
                ({ /* cicili#Progn13463 */
                  Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CONS ());
                });
              }));
          });
        });
      });
  }
  return ({ /* cicili#Let13472 */
      typeof((((tree -> __h_data ). Branch ). __h_0_mem )) items ;
      typeof((((tree -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      ;
      ({ /* cicili#Let13474 */
        bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn13475 */
                (items  =  (((tree -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn13477 */
                (children  =  (((tree -> __h_data ). Branch ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* cicili#Progn13482 */
            ({ /* cicili#Let13486 */
              __auto_type match13485  = insertInternal (items , children , items , 0);
              typeof((((match13485 . __h_data ). Right ). __h_0_mem )) tr ;
              // ----------
              ;
              ({ /* cicili#Let13488 */
                bool __h_case_result  = (true  &&  (((match13485 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn13489 */
                      (tr  =  (((match13485 . __h_data ). Right ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                
                ((__h_case_result ) ? ({ /* cicili#Progn13494 */
                    Right_BTree_int_User_Error_BTree_int_User (split_BTree_int_User (tr ));
                  }) : ({ /* cicili#Let13501 */
                    __auto_type left  = match13485 ;
                    // ----------
                    ;
                    ({ /* cicili#Progn13503 */
                      left ;
                    });
                  }));
              });
            });
          }) : ({ /* cicili#Let13507 */
            typeof((((tree -> __h_data ). Internal ). __h_0_mem )) items ;
            typeof((((tree -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            ;
            ({ /* cicili#Let13509 */
              bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn13510 */
                      (items  =  (((tree -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn13512 */
                      (children  =  (((tree -> __h_data ). Internal ). __h_1_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              
              ((__h_case_result ) ? ({ /* cicili#Progn13517 */
                  ({ /* cicili#Let13521 */
                    __auto_type match13520  = insertInternal (items , children , items , 0);
                    typeof((((match13520 . __h_data ). Right ). __h_0_mem )) tr ;
                    // ----------
                    ;
                    ({ /* cicili#Let13523 */
                      bool __h_case_result  = (true  &&  (((match13520 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn13524 */
                            (tr  =  (((match13520 . __h_data ). Right ). __h_0_mem ) );
                            true ;
                          }) ) );
                      // ----------
                      
                      ((__h_case_result ) ? ({ /* cicili#Progn13529 */
                          Right_BTree_int_User_Error_BTree_int_User (split_BTree_int_User (tr ));
                        }) : ({ /* cicili#Let13536 */
                          __auto_type left  = match13520 ;
                          // ----------
                          ;
                          ({ /* cicili#Progn13538 */
                            left ;
                          });
                        }));
                    });
                  });
                }) : ({ /* cicili#Let13542 */
                  typeof((((tree -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  ;
                  ({ /* cicili#Let13544 */
                    bool __h_case_result  = (true  &&  (((tree -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn13545 */
                          (items  =  (((tree -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    ((__h_case_result ) ? ({ /* cicili#Progn13550 */
                        ({ /* cicili#Let13554 */
                          __auto_type match13553  = insertLeaf (items , items , 0);
                          typeof((((match13553 . __h_data ). Right ). __h_0_mem )) tr ;
                          // ----------
                          ;
                          ({ /* cicili#Let13556 */
                            bool __h_case_result  = (true  &&  (((match13553 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn13557 */
                                  (tr  =  (((match13553 . __h_data ). Right ). __h_0_mem ) );
                                  true ;
                                }) ) );
                            // ----------
                            
                            ((__h_case_result ) ? ({ /* cicili#Progn13562 */
                                Right_BTree_int_User_Error_BTree_int_User (split_BTree_int_User (tr ));
                              }) : ({ /* cicili#Let13569 */
                                __auto_type left  = match13553 ;
                                // ----------
                                ;
                                ({ /* cicili#Progn13571 */
                                  left ;
                                });
                              }));
                          });
                        });
                      }) : ({ /* cicili#Let13575 */
                        // ----------
                        ;
                        ({ /* cicili#Progn13577 */
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
  { /* cicili#Let13586 */
    __auto_type this  = (*this_ptr );
    // ----------
    void freeChildren (List_Rc_BTree_int_User children ) {
      ({ /* cicili#Let13590 */
        __auto_type __h_matchbox  = children ;
        // ----------
        { /* cicili#Let13594 */
          __auto_type match13593  = ((&__h_matchbox )-> __h_table -> get )(__h_matchbox );
          typeof((((match13593 . __h_data ). Just ). __h_0_mem )) unboxed ;
          // ----------
          ;
          ({ /* cicili#Let13597 */
            bool __h_case_result  = (true  &&  (((match13593 . __h_ctor ) ==  __h_Just_t  ) &&  ({ /* cicili#Progn13598 */
                  (unboxed  =  (((match13593 . __h_data ). Just ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block13604 */
                { /* cicili#Let13608 */
                  typeof((((unboxed -> __h_data ). Cons ). __h_0_mem )) head ;
                  typeof((((unboxed -> __h_data ). Cons ). __h_1_mem )) tail ;
                  // ----------
                  ;
                  ({ /* cicili#Let13610 */
                    bool __h_case_result  = (true  &&  (((unboxed -> __h_ctor ) ==  __h_Cons_t  ) &&  (({ /* cicili#Progn13611 */
                            (head  =  (((unboxed -> __h_data ). Cons ). __h_0_mem ) );
                            true ;
                          }) &&  ({ /* cicili#Progn13613 */
                            (tail  =  (((unboxed -> __h_data ). Cons ). __h_1_mem ) );
                            true ;
                          }) ) ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block13619 */
                        { /* cicili#Block13621 */
                          free_Rc_BTree_int_User (&head );
                          freeChildren (tail );
                        }
                      }
                  });
                }
              }
            else
              { /* cicili#Let13627 */
                // ----------
                ;
                ({ /* cicili#Let13629 */
                  bool __h_case_result  = (true  &&  ((match13593 . __h_ctor ) ==  __h_Nothing_t  ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block13634 */
                      Left_BTree_int_User_Error_BTree_int_User (BTree_int_User_ERR_ACCESS_DEAD_CONS ());
                    }
                });
              }
          });
        }
      });
    }
    { /* cicili#Let13642 */
      typeof((((this -> __h_data ). Branch ). __h_0_mem )) items ;
      typeof((((this -> __h_data ). Branch ). __h_1_mem )) children ;
      // ----------
      ;
      ({ /* cicili#Let13644 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Branch_t  ) &&  (({ /* cicili#Progn13645 */
                (items  =  (((this -> __h_data ). Branch ). __h_0_mem ) );
                true ;
              }) &&  ({ /* cicili#Progn13647 */
                (children  =  (((this -> __h_data ). Branch ). __h_1_mem ) );
                true ;
              }) ) ) );
        // ----------
        
        if (__h_case_result )
          { /* cicili#Block13653 */
            { /* cicili#Block13655 */
              free_Box_List_BTree_int_User_pair_t ((&items ));
              freeChildren (children );
              free_Box_List_Rc_BTree_int_User ((&children ));
              free (this );
            }
          }
        else
          { /* cicili#Let13666 */
            typeof((((this -> __h_data ). Internal ). __h_0_mem )) items ;
            typeof((((this -> __h_data ). Internal ). __h_1_mem )) children ;
            // ----------
            ;
            ({ /* cicili#Let13668 */
              bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Internal_t  ) &&  (({ /* cicili#Progn13669 */
                      (items  =  (((this -> __h_data ). Internal ). __h_0_mem ) );
                      true ;
                    }) &&  ({ /* cicili#Progn13671 */
                      (children  =  (((this -> __h_data ). Internal ). __h_1_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block13677 */
                  { /* cicili#Block13679 */
                    free_Box_List_BTree_int_User_pair_t ((&items ));
                    freeChildren (children );
                    free_Box_List_Rc_BTree_int_User ((&children ));
                    free (this );
                  }
                }
              else
                { /* cicili#Let13690 */
                  typeof((((this -> __h_data ). Leaf ). __h_0_mem )) items ;
                  // ----------
                  ;
                  ({ /* cicili#Let13692 */
                    bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Leaf_t  ) &&  ({ /* cicili#Progn13693 */
                          (items  =  (((this -> __h_data ). Leaf ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block13699 */
                        { /* cicili#Block13701 */
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
  { /* cicili#Let13713 */
    BTree_int_User instance  = malloc (sizeof(class_BTree_int_User));
    // ----------
    (*instance ) = ((class_BTree_int_User){ get_BTree_int_User__H_Table (), __h_Branch_t , .__h_data.Branch = { items , children }});
    return instance ;
  }
}
BTree_int_User Internal_BTree_int_User (List_BTree_int_User_pair_t items , List_Rc_BTree_int_User children ) {
  { /* cicili#Let13721 */
    BTree_int_User instance  = malloc (sizeof(class_BTree_int_User));
    // ----------
    (*instance ) = ((class_BTree_int_User){ get_BTree_int_User__H_Table (), __h_Internal_t , .__h_data.Internal = { items , children }});
    return instance ;
  }
}
BTree_int_User Leaf_BTree_int_User (List_BTree_int_User_pair_t items ) {
  { /* cicili#Let13729 */
    BTree_int_User instance  = malloc (sizeof(class_BTree_int_User));
    // ----------
    (*instance ) = ((class_BTree_int_User){ get_BTree_int_User__H_Table (), __h___t , .__h_data._ = { items }});
    return instance ;
  }
}
#endif /* __BTree_int_User__H_IMPL__ */ 
void insertMany (BTree_int_User * pwtree , int from , int to ) {
  { /* cicili#Let13735 */
    char keyStr [10];
    // ----------
    for (int i  = from ; (i  <=  to  ); (++i )) {
        sprintf (keyStr , "%d", i );
        { /* cicili#Let13739 */
          String name  = ({ /* cicili#Let13741 */
            __auto_type r1  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let13743 */
              __auto_type r1  = new_String_Const ("User ");
              // ----------
              ((void)(r1 -> __h_table -> freeClass ));
              r1 ;
            });
            __auto_type r2  __attribute__((__cleanup__(__h_free_class_router ))) = ({ /* cicili#Let13746 */
              __auto_type r2  = new_String_Const (keyStr );
              // ----------
              ((void)(r2 -> __h_table -> freeClass ));
              r2 ;
            });
            // ----------
            append_String (r1 , r2 );
          });
          // ----------
          { /* cicili#Let13752 */
            __auto_type match13751  = insert_BTree_int_User ((*pwtree ), i , ((User){ new_Cell_String (name ), (i  +  2000 )}));
            typeof((((match13751 . __h_data ). Right ). __h_0_mem )) new_tree ;
            // ----------
            ;
            ({ /* cicili#Let13756 */
              bool __h_case_result  = (true  &&  (((match13751 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn13757 */
                    (new_tree  =  (((match13751 . __h_data ). Right ). __h_0_mem ) );
                    true ;
                  }) ) );
              // ----------
              
              if (__h_case_result )
                { /* cicili#Block13763 */
                  { /* cicili#Block13765 */
                    free_BTree_int_User (pwtree );
                    (*pwtree ) = new_tree ;
                  }
                }
              else
                { /* cicili#Let13771 */
                  typeof((((match13751 . __h_data ). Left ). __h_0_mem )) err ;
                  // ----------
                  ;
                  ({ /* cicili#Let13773 */
                    bool __h_case_result  = (true  &&  (((match13751 . __h_ctor ) ==  __h_Left_t  ) &&  ({ /* cicili#Progn13774 */
                          (err  =  (((match13751 . __h_data ). Left ). __h_0_mem ) );
                          true ;
                        }) ) );
                    // ----------
                    
                    if (__h_case_result )
                      { /* cicili#Block13780 */
                        ({ /* cicili#Let13783 */
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
void __ciciliL_13788 (BTree_int_User_pair_t item ) {
  { /* cicili#Let13793 */
    typeof((item . __h_1_mem )) __h_match13791_1_arg ;
    typeof((__h_match13791_1_arg . __h_0_mem )) wname ;
    // ----------
    ;
    ({ /* cicili#Let13795 */
      bool __h_case_result  = (true  &&  (({ /* cicili#Progn13796 */
            (__h_match13791_1_arg  =  (item . __h_1_mem ) );
            true ;
          }) &&  (true  &&  ({ /* cicili#Progn13798 */
              (wname  =  (__h_match13791_1_arg . __h_0_mem ) );
              true ;
            }) ) ) );
      // ----------
      
      if (__h_case_result )
        { /* cicili#Block13804 */
          { /* cicili#Block13806 */
            free_Cell_String ((&wname ));
          }
        }
    });
  }
}
void deleteMany (BTree_int_User * pwtree , int from , int to ) {
  { /* cicili#Let13787 */
    __auto_type item_deallocator  = __ciciliL_13788 ;
    // ----------
    for (int i  = from ; (i  <=  to  ); (++i )) {
        { /* cicili#Let13815 */
          __auto_type match13814  = delete_BTree_int_User ((*pwtree ), i , item_deallocator );
          typeof((((match13814 . __h_data ). Right ). __h_0_mem )) new_tree ;
          // ----------
          ;
          ({ /* cicili#Let13818 */
            bool __h_case_result  = (true  &&  (((match13814 . __h_ctor ) ==  __h_Right_t  ) &&  ({ /* cicili#Progn13819 */
                  (new_tree  =  (((match13814 . __h_data ). Right ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            
            if (__h_case_result )
              { /* cicili#Block13825 */
                { /* cicili#Block13827 */
                  free_BTree_int_User (pwtree );
                  (*pwtree ) = new_tree ;
                }
              }
            else
              { /* cicili#Let13833 */
                typeof((((match13814 . __h_data ). Left ). __h_0_mem )) err ;
                // ----------
                ;
                ({ /* cicili#Let13835 */
                  bool __h_case_result  = (true  &&  (((match13814 . __h_ctor ) ==  __h_Left_t  ) &&  ({ /* cicili#Progn13836 */
                        (err  =  (((match13814 . __h_data ). Left ). __h_0_mem ) );
                        true ;
                      }) ) );
                  // ----------
                  
                  if (__h_case_result )
                    { /* cicili#Block13842 */
                      ({ /* cicili#Let13845 */
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
      { /* cicili#Let13853 */
        __auto_type match13852  = search_BTree_int_User ((*pwtree ), i );
        // ----------
        ;
        ({ /* cicili#Let13856 */
          bool __h_case_result  = (true  &&  ((match13852 . __h_ctor ) ==  __h_Just_t  ) );
          // ----------
          
          if (__h_case_result )
            { /* cicili#Block13861 */
              
            }
          else
            { /* cicili#Let13868 */
              // ----------
              ;
              ({ /* cicili#Let13870 */
                bool __h_case_result  = (true  &&  ((match13852 . __h_ctor ) ==  __h_Nothing_t  ) );
                // ----------
                
                if (__h_case_result )
                  { /* cicili#Block13875 */
                    ({ /* cicili#Let13878 */
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
  { /* cicili#Let13885 */
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
