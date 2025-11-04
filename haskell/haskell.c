#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "../haskell.h"
void __h_free_data_router (void *** instance ) {
  ((void (*)(void * this ))(*(*instance )))(instance );
}
void __h_free_class_router (void *** instance ) {
  ((void (*)(void * this ))(*(*((void ***)(*instance )))))(instance );
}
void show_Bool (Bool value ) {
  { /* cicili#Let2085 */
    // ----------
    /* cicili#Block2087 */
    ({ /* cicili#Let2089 */
      bool __h_case_result  = ((value . __h_ctor ) ==  __h_False_t  );
      // ----------
      if (__h_case_result )
        printf ("%s", "False");
      else
        { /* cicili#Let2095 */
          // ----------
          /* cicili#Block2097 */
          printf ("%s", "True");
        }
    });
  }
}
Bool or_Bool (Bool lhs , Bool rhs ) {
  return ({ /* cicili#Let2103 */
      // ----------
      /* cicili#Block2105 */
      ({ /* cicili#Let2107 */
        bool __h_case_result  = ((lhs . __h_ctor ) ==  __h_True_t  );
        // ----------
        ((__h_case_result ) ? True () : ({ /* cicili#Let2111 */
            // ----------
            /* cicili#Block2113 */
            ({ /* cicili#Let2117 */
              // ----------
              /* cicili#Block2119 */
              ({ /* cicili#Let2121 */
                bool __h_case_result  = ((rhs . __h_ctor ) ==  __h_True_t  );
                // ----------
                ((__h_case_result ) ? True () : ({ /* cicili#Let2125 */
                    // ----------
                    /* cicili#Block2127 */
                    False ();
                  }));
              });
            });
          }));
      });
    });
}
Bool and_Bool (Bool lhs , Bool rhs ) {
  return ({ /* cicili#Let2133 */
      // ----------
      /* cicili#Block2135 */
      ({ /* cicili#Let2137 */
        bool __h_case_result  = ((lhs . __h_ctor ) ==  __h_False_t  );
        // ----------
        ((__h_case_result ) ? False () : ({ /* cicili#Let2141 */
            // ----------
            /* cicili#Block2143 */
            ({ /* cicili#Let2147 */
              // ----------
              /* cicili#Block2149 */
              ({ /* cicili#Let2151 */
                bool __h_case_result  = ((rhs . __h_ctor ) ==  __h_False_t  );
                // ----------
                ((__h_case_result ) ? False () : ({ /* cicili#Let2155 */
                    // ----------
                    /* cicili#Block2157 */
                    True ();
                  }));
              });
            });
          }));
      });
    });
}
void free_Bool (Bool * this ) {
}
const Bool__H_Table * const get_Bool__H_Table () {
  static const Bool__H_Table table  = { free_Bool , show_Bool , or_Bool , and_Bool };
  return (&table );
}
Bool False () {
  return ((Bool){ get_Bool__H_Table (), __h_False_t });
}
Bool True () {
  return ((Bool){ get_Bool__H_Table (), __h___t });
}
void free_Ordering (Ordering * this ) {
}
const Ordering__H_Table * const get_Ordering__H_Table () {
  static const Ordering__H_Table table  = { free_Ordering };
  return (&table );
}
Ordering LT () {
  return ((Ordering){ get_Ordering__H_Table (), __h_LT_t });
}
Ordering EQ () {
  return ((Ordering){ get_Ordering__H_Table (), __h_EQ_t });
}
Ordering GT () {
  return ((Ordering){ get_Ordering__H_Table (), __h___t });
}
void free_Maybe_Bool (Maybe_Bool * this ) {
}
const Maybe_Bool__H_Table * const get_Maybe_Bool__H_Table () {
  static const Maybe_Bool__H_Table table  = { free_Maybe_Bool };
  return (&table );
}
Maybe_Bool Nothing_Bool () {
  return ((Maybe_Bool){ get_Maybe_Bool__H_Table (), __h_Nothing_t });
}
Maybe_Bool Just_Bool (Bool value ) {
  return ((Maybe_Bool){ get_Maybe_Bool__H_Table (), __h___t , .__h_data._ = { value }});
}
void free_Maybe_int (Maybe_int * this ) {
}
const Maybe_int__H_Table * const get_Maybe_int__H_Table () {
  static const Maybe_int__H_Table table  = { free_Maybe_int };
  return (&table );
}
Maybe_int Nothing_int () {
  return ((Maybe_int){ get_Maybe_int__H_Table (), __h_Nothing_t });
}
Maybe_int Just_int (int value ) {
  return ((Maybe_int){ get_Maybe_int__H_Table (), __h___t , .__h_data._ = { value }});
}
void free_Maybe_char (Maybe_char * this ) {
}
const Maybe_char__H_Table * const get_Maybe_char__H_Table () {
  static const Maybe_char__H_Table table  = { free_Maybe_char };
  return (&table );
}
Maybe_char Nothing_char () {
  return ((Maybe_char){ get_Maybe_char__H_Table (), __h_Nothing_t });
}
Maybe_char Just_char (char value ) {
  return ((Maybe_char){ get_Maybe_char__H_Table (), __h___t , .__h_data._ = { value }});
}
void show_List_Bool (List_Bool list ) {
  { /* cicili#Let2244 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2246 */
    ({ /* cicili#Let2248 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block2251 */
          { /* cicili#Let2255 */
            // ----------
            /* cicili#Block2257 */
            ({ /* cicili#Let2259 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block2262 */
                  printf ("%s", ({ /* cicili#Let2269 */
                      // ----------
                      /* cicili#Block2271 */
                      ({ /* cicili#Let2273 */
                        bool __h_case_result  = ((head . __h_ctor ) ==  __h_True_t  );
                        // ----------
                        ((__h_case_result ) ? "True" : ({ /* cicili#Let2277 */
                            // ----------
                            /* cicili#Block2279 */
                            "False";
                          }));
                      });
                    }));
                  putchar (' ');
                }
              else
                { /* cicili#Let2284 */
                  // ----------
                  /* cicili#Block2286 */
                  printf ("%s", ({ /* cicili#Let2293 */
                      // ----------
                      /* cicili#Block2295 */
                      ({ /* cicili#Let2297 */
                        bool __h_case_result  = ((head . __h_ctor ) ==  __h_True_t  );
                        // ----------
                        ((__h_case_result ) ? "True" : ({ /* cicili#Let2301 */
                            // ----------
                            /* cicili#Block2303 */
                            "False";
                          }));
                      });
                    }));
                }
            });
          }
          show_List_Bool (tail );
        }
    });
  }
}
List_Bool append_List_Bool (List_Bool llist , List_Bool rlist ) {
  return ({ /* cicili#Let2309 */
      __auto_type last  = (llist -> __h_table -> last )(llist );
      // ----------
      ({ /* cicili#Let2314 */
        __auto_type tail  = (((last -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block2316 */
        ({ /* cicili#Let2318 */
          bool __h_case_result  = ((last -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn2320 */
              free_List_Bool ((&tail ));
              (((last -> __h_data ). Cons ). __h_1_mem ) = rlist ;
              llist ;
            }) : ({ /* cicili#Let2325 */
              // ----------
              /* cicili#Block2327 */
              rlist ;
            }));
        });
      });
    });
}
List_Bool push_List_Bool (Bool item , List_Bool list ) {
  return Cons_Bool (item , list );
}
List_Bool last_List_Bool (List_Bool list ) {
  return ({ /* cicili#Let2336 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2338 */
      ({ /* cicili#Let2340 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let2344 */
            // ----------
            /* cicili#Block2346 */
            ({ /* cicili#Let2348 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Empty_t  );
              // ----------
              ((__h_case_result ) ? list  : ({ /* cicili#Let2352 */
                  // ----------
                  /* cicili#Block2354 */
                  (list -> __h_table -> last )(tail );
                }));
            });
          }) : ({ /* cicili#Let2359 */
            // ----------
            /* cicili#Block2361 */
            list ;
          }));
      });
    });
}
List_Bool take_List_Bool (int len , List_Bool list ) {
  return ({ /* cicili#Let2367 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2369 */
      ({ /* cicili#Let2371 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? (list -> __h_table -> push )(head , (list -> __h_table -> take )((--len ), tail )) : ({ /* cicili#Let2377 */
            // ----------
            /* cicili#Block2379 */
            Empty_Bool ();
          }));
      });
    });
}
int hasLen_List_Bool (List_Bool list , int desired ) {
  return ({ /* cicili#Let2386 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2388 */
      ({ /* cicili#Let2390 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  (list -> __h_table -> hasLen )(tail , (--desired )) )) : ({ /* cicili#Let2396 */
            // ----------
            /* cicili#Block2398 */
            0;
          }));
      });
    });
}
int len_List_Bool (List_Bool list ) {
  return ({ /* cicili#Let2404 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2406 */
      ({ /* cicili#Let2408 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (1 +  (list -> __h_table -> len )(tail ) ) : ({ /* cicili#Let2413 */
            // ----------
            /* cicili#Block2415 */
            0;
          }));
      });
    });
}
List_Bool tail_List_Bool (List_Bool list ) {
  return (list -> __h_table -> drop )(0, list );
}
List_Bool drop_List_Bool (int index , List_Bool list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let2425 */
        __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block2427 */
        ({ /* cicili#Let2429 */
          bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? (list -> __h_table -> drop )((--index ), tail ) : ({ /* cicili#Let2434 */
              // ----------
              /* cicili#Block2436 */
              Empty_Bool ();
            }));
        });
      }));
}
Maybe_Bool head_List_Bool (List_Bool list ) {
  return (list -> __h_table -> nth )(0, list );
}
Maybe_Bool nth_List_Bool (int index , List_Bool list ) {
  return ({ /* cicili#Let2448 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2450 */
      ({ /* cicili#Let2452 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((index  ==  0 )) ? Just_Bool (head ) : (list -> __h_table -> nth )((--index ), tail )) : ({ /* cicili#Let2459 */
            // ----------
            /* cicili#Block2461 */
            Nothing_Bool ();
          }));
      });
    });
}
List_Bool next_List_Bool (List_Bool list ) {
  return ({ /* cicili#Let2468 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2470 */
      ({ /* cicili#Let2472 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? tail  : ({ /* cicili#Let2476 */
            // ----------
            /* cicili#Block2478 */
            Empty_Bool ();
          }));
      });
    });
}
void free_List_Bool (List_Bool * this_ptr ) {
  { /* cicili#Let2483 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let2487 */
      __auto_type head  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2489 */
      ({ /* cicili#Let2491 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block2494 */
            printf ("destructuring List: %p, ", this );
            printf ("%s", ({ /* cicili#Let2501 */
                // ----------
                /* cicili#Block2503 */
                ({ /* cicili#Let2505 */
                  bool __h_case_result  = ((head . __h_ctor ) ==  __h_True_t  );
                  // ----------
                  ((__h_case_result ) ? "True" : ({ /* cicili#Let2509 */
                      // ----------
                      /* cicili#Block2511 */
                      "False";
                    }));
                });
              }));
            putchar ('\n');
            free_List_Bool ((&tail ));
            free (this );
          }
        else
          { /* cicili#Let2517 */
            // ----------
            /* cicili#Block2519 */
            free (this );
          }
      });
    }
  }
}
const List_Bool__H_Table * const get_List_Bool__H_Table () {
  static const List_Bool__H_Table table  = { free_List_Bool , show_List_Bool , append_List_Bool , push_List_Bool , last_List_Bool , take_List_Bool , hasLen_List_Bool , len_List_Bool , tail_List_Bool , drop_List_Bool , head_List_Bool , nth_List_Bool , next_List_Bool };
  return (&table );
}
List_Bool Empty_Bool () {
  { /* cicili#Let2528 */
    List_Bool instance  = malloc (sizeof(__h_List_Bool_class_t));
    // ----------
    (*instance ) = ((__h_List_Bool_class_t){ get_List_Bool__H_Table (), __h_Empty_t });
    return instance ;
  }
}
List_Bool Cons_Bool (Bool head , List_Bool tail ) {
  { /* cicili#Let2533 */
    List_Bool instance  = malloc (sizeof(__h_List_Bool_class_t));
    // ----------
    (*instance ) = ((__h_List_Bool_class_t){ get_List_Bool__H_Table (), __h___t , .__h_data._ = { head , tail }});
    return instance ;
  }
}
List_Bool new_List_Bool_Pure (const Bool * buf , int len ) {
  if (buf  ==  NULL  )
    return Empty_Bool ();
  else
    { /* cicili#Let2542 */
      Bool item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_Bool ();
      else
        return Cons_Bool (item , new_List_Bool_Pure ((++buf ), (--len )));
    }
}
List_Bool new_List_Bool_Wrap (const Bool item ) {
  return Cons_Bool (item , Empty_Bool ());
}
void show_List_int (List_int list ) {
  { /* cicili#Let2561 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2563 */
    ({ /* cicili#Let2565 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block2568 */
          { /* cicili#Let2572 */
            // ----------
            /* cicili#Block2574 */
            ({ /* cicili#Let2576 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block2579 */
                  printf ("%d", head );
                  putchar (' ');
                }
              else
                { /* cicili#Let2587 */
                  // ----------
                  /* cicili#Block2589 */
                  printf ("%d", head );
                }
            });
          }
          show_List_int (tail );
        }
    });
  }
}
List_int append_List_int (List_int llist , List_int rlist ) {
  return ({ /* cicili#Let2598 */
      __auto_type last  = (llist -> __h_table -> last )(llist );
      // ----------
      ({ /* cicili#Let2603 */
        __auto_type tail  = (((last -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block2605 */
        ({ /* cicili#Let2607 */
          bool __h_case_result  = ((last -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn2609 */
              free_List_int ((&tail ));
              (((last -> __h_data ). Cons ). __h_1_mem ) = rlist ;
              llist ;
            }) : ({ /* cicili#Let2614 */
              // ----------
              /* cicili#Block2616 */
              rlist ;
            }));
        });
      });
    });
}
List_int push_List_int (int item , List_int list ) {
  return Cons_int (item , list );
}
List_int last_List_int (List_int list ) {
  return ({ /* cicili#Let2625 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2627 */
      ({ /* cicili#Let2629 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let2633 */
            // ----------
            /* cicili#Block2635 */
            ({ /* cicili#Let2637 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Empty_t  );
              // ----------
              ((__h_case_result ) ? list  : ({ /* cicili#Let2641 */
                  // ----------
                  /* cicili#Block2643 */
                  (list -> __h_table -> last )(tail );
                }));
            });
          }) : ({ /* cicili#Let2648 */
            // ----------
            /* cicili#Block2650 */
            list ;
          }));
      });
    });
}
List_int take_List_int (int len , List_int list ) {
  return ({ /* cicili#Let2656 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2658 */
      ({ /* cicili#Let2660 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? (list -> __h_table -> push )(head , (list -> __h_table -> take )((--len ), tail )) : ({ /* cicili#Let2666 */
            // ----------
            /* cicili#Block2668 */
            Empty_int ();
          }));
      });
    });
}
int hasLen_List_int (List_int list , int desired ) {
  return ({ /* cicili#Let2675 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2677 */
      ({ /* cicili#Let2679 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  (list -> __h_table -> hasLen )(tail , (--desired )) )) : ({ /* cicili#Let2685 */
            // ----------
            /* cicili#Block2687 */
            0;
          }));
      });
    });
}
int len_List_int (List_int list ) {
  return ({ /* cicili#Let2693 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2695 */
      ({ /* cicili#Let2697 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (1 +  (list -> __h_table -> len )(tail ) ) : ({ /* cicili#Let2702 */
            // ----------
            /* cicili#Block2704 */
            0;
          }));
      });
    });
}
List_int tail_List_int (List_int list ) {
  return (list -> __h_table -> drop )(0, list );
}
List_int drop_List_int (int index , List_int list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let2714 */
        __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block2716 */
        ({ /* cicili#Let2718 */
          bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? (list -> __h_table -> drop )((--index ), tail ) : ({ /* cicili#Let2723 */
              // ----------
              /* cicili#Block2725 */
              Empty_int ();
            }));
        });
      }));
}
Maybe_int head_List_int (List_int list ) {
  return (list -> __h_table -> nth )(0, list );
}
Maybe_int nth_List_int (int index , List_int list ) {
  return ({ /* cicili#Let2737 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2739 */
      ({ /* cicili#Let2741 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((index  ==  0 )) ? Just_int (head ) : (list -> __h_table -> nth )((--index ), tail )) : ({ /* cicili#Let2748 */
            // ----------
            /* cicili#Block2750 */
            Nothing_int ();
          }));
      });
    });
}
List_int next_List_int (List_int list ) {
  return ({ /* cicili#Let2757 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2759 */
      ({ /* cicili#Let2761 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? tail  : ({ /* cicili#Let2765 */
            // ----------
            /* cicili#Block2767 */
            Empty_int ();
          }));
      });
    });
}
void free_List_int (List_int * this_ptr ) {
  { /* cicili#Let2772 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let2776 */
      __auto_type head  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2778 */
      ({ /* cicili#Let2780 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block2783 */
            printf ("destructuring List: %p, ", this );
            printf ("%d", head );
            putchar ('\n');
            free_List_int ((&tail ));
            free (this );
          }
        else
          { /* cicili#Let2792 */
            // ----------
            /* cicili#Block2794 */
            free (this );
          }
      });
    }
  }
}
const List_int__H_Table * const get_List_int__H_Table () {
  static const List_int__H_Table table  = { free_List_int , show_List_int , append_List_int , push_List_int , last_List_int , take_List_int , hasLen_List_int , len_List_int , tail_List_int , drop_List_int , head_List_int , nth_List_int , next_List_int };
  return (&table );
}
List_int Empty_int () {
  { /* cicili#Let2803 */
    List_int instance  = malloc (sizeof(__h_List_int_class_t));
    // ----------
    (*instance ) = ((__h_List_int_class_t){ get_List_int__H_Table (), __h_Empty_t });
    return instance ;
  }
}
List_int Cons_int (int head , List_int tail ) {
  { /* cicili#Let2808 */
    List_int instance  = malloc (sizeof(__h_List_int_class_t));
    // ----------
    (*instance ) = ((__h_List_int_class_t){ get_List_int__H_Table (), __h___t , .__h_data._ = { head , tail }});
    return instance ;
  }
}
List_int new_List_int_Pure (const int * buf , int len ) {
  if (buf  ==  NULL  )
    return Empty_int ();
  else
    { /* cicili#Let2817 */
      int item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_int ();
      else
        return Cons_int (item , new_List_int_Pure ((++buf ), (--len )));
    }
}
List_int new_List_int_Wrap (const int item ) {
  return Cons_int (item , Empty_int ());
}
void show_List_char (List_char list ) {
  { /* cicili#Let2838 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2840 */
    ({ /* cicili#Let2842 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block2845 */
          { /* cicili#Let2849 */
            // ----------
            /* cicili#Block2851 */
            ({ /* cicili#Let2853 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block2856 */
                  printf ("%c", head );
                  putchar (' ');
                }
              else
                { /* cicili#Let2864 */
                  // ----------
                  /* cicili#Block2866 */
                  printf ("%c", head );
                }
            });
          }
          show_List_char (tail );
        }
    });
  }
}
List_char append_List_char (List_char llist , List_char rlist ) {
  return ({ /* cicili#Let2875 */
      __auto_type last  = (llist -> __h_table -> last )(llist );
      // ----------
      ({ /* cicili#Let2880 */
        __auto_type tail  = (((last -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block2882 */
        ({ /* cicili#Let2884 */
          bool __h_case_result  = ((last -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn2886 */
              free_List_char ((&tail ));
              (((last -> __h_data ). Cons ). __h_1_mem ) = rlist ;
              llist ;
            }) : ({ /* cicili#Let2891 */
              // ----------
              /* cicili#Block2893 */
              rlist ;
            }));
        });
      });
    });
}
List_char push_List_char (char item , List_char list ) {
  return Cons_char (item , list );
}
List_char last_List_char (List_char list ) {
  return ({ /* cicili#Let2902 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2904 */
      ({ /* cicili#Let2906 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let2910 */
            // ----------
            /* cicili#Block2912 */
            ({ /* cicili#Let2914 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Empty_t  );
              // ----------
              ((__h_case_result ) ? list  : ({ /* cicili#Let2918 */
                  // ----------
                  /* cicili#Block2920 */
                  (list -> __h_table -> last )(tail );
                }));
            });
          }) : ({ /* cicili#Let2925 */
            // ----------
            /* cicili#Block2927 */
            list ;
          }));
      });
    });
}
List_char take_List_char (int len , List_char list ) {
  return ({ /* cicili#Let2933 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2935 */
      ({ /* cicili#Let2937 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? (list -> __h_table -> push )(head , (list -> __h_table -> take )((--len ), tail )) : ({ /* cicili#Let2943 */
            // ----------
            /* cicili#Block2945 */
            Empty_char ();
          }));
      });
    });
}
int hasLen_List_char (List_char list , int desired ) {
  return ({ /* cicili#Let2952 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2954 */
      ({ /* cicili#Let2956 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  (list -> __h_table -> hasLen )(tail , (--desired )) )) : ({ /* cicili#Let2962 */
            // ----------
            /* cicili#Block2964 */
            0;
          }));
      });
    });
}
int len_List_char (List_char list ) {
  return ({ /* cicili#Let2970 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2972 */
      ({ /* cicili#Let2974 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (1 +  (list -> __h_table -> len )(tail ) ) : ({ /* cicili#Let2979 */
            // ----------
            /* cicili#Block2981 */
            0;
          }));
      });
    });
}
List_char tail_List_char (List_char list ) {
  return (list -> __h_table -> drop )(0, list );
}
List_char drop_List_char (int index , List_char list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let2991 */
        __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block2993 */
        ({ /* cicili#Let2995 */
          bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? (list -> __h_table -> drop )((--index ), tail ) : ({ /* cicili#Let3000 */
              // ----------
              /* cicili#Block3002 */
              Empty_char ();
            }));
        });
      }));
}
Maybe_char head_List_char (List_char list ) {
  return (list -> __h_table -> nth )(0, list );
}
Maybe_char nth_List_char (int index , List_char list ) {
  return ({ /* cicili#Let3014 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3016 */
      ({ /* cicili#Let3018 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((index  ==  0 )) ? Just_char (head ) : (list -> __h_table -> nth )((--index ), tail )) : ({ /* cicili#Let3025 */
            // ----------
            /* cicili#Block3027 */
            Nothing_char ();
          }));
      });
    });
}
List_char next_List_char (List_char list ) {
  return ({ /* cicili#Let3034 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3036 */
      ({ /* cicili#Let3038 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? tail  : ({ /* cicili#Let3042 */
            // ----------
            /* cicili#Block3044 */
            Empty_char ();
          }));
      });
    });
}
void free_List_char (List_char * this_ptr ) {
  { /* cicili#Let3049 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let3053 */
      __auto_type head  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3055 */
      ({ /* cicili#Let3057 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block3060 */
            printf ("destructuring List: %p, ", this );
            printf ("%c", head );
            putchar ('\n');
            free_List_char ((&tail ));
            free (this );
          }
        else
          { /* cicili#Let3069 */
            // ----------
            /* cicili#Block3071 */
            free (this );
          }
      });
    }
  }
}
const List_char__H_Table * const get_List_char__H_Table () {
  static const List_char__H_Table table  = { free_List_char , show_List_char , append_List_char , push_List_char , last_List_char , take_List_char , hasLen_List_char , len_List_char , tail_List_char , drop_List_char , head_List_char , nth_List_char , next_List_char };
  return (&table );
}
List_char Empty_char () {
  { /* cicili#Let3080 */
    List_char instance  = malloc (sizeof(__h_List_char_class_t));
    // ----------
    (*instance ) = ((__h_List_char_class_t){ get_List_char__H_Table (), __h_Empty_t });
    return instance ;
  }
}
List_char Cons_char (char head , List_char tail ) {
  { /* cicili#Let3085 */
    List_char instance  = malloc (sizeof(__h_List_char_class_t));
    // ----------
    (*instance ) = ((__h_List_char_class_t){ get_List_char__H_Table (), __h___t , .__h_data._ = { head , tail }});
    return instance ;
  }
}
List_char new_List_char_Pure (const char * buf , int len ) {
  if (buf  ==  NULL  )
    return Empty_char ();
  else
    { /* cicili#Let3094 */
      char item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_char ();
      else
        return Cons_char (item , new_List_char_Pure ((++buf ), (--len )));
    }
}
List_char new_List_char_Wrap (const char item ) {
  return Cons_char (item , Empty_char ());
}
List_char new_String_Const (const char * buf ) {
  if (buf  ==  NULL  )
    return Empty_char ();
  else
    { /* cicili#Let3111 */
      char item  = (*buf );
      // ----------
      if (item  ==  '\0' )
        return Empty_char ();
      else
        return Cons_char (item , new_String_Const ((++buf )));
    }
}
void show_String (List_char list ) {
  { /* cicili#Let3122 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block3124 */
    ({ /* cicili#Let3126 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        ({ /* cicili#Progn3129 */
          printf ("%c", head );
          show_String (tail );
        });
    });
  }
}
void show_Range_int (Range_int list ) {
  { /* cicili#Let3143 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block3145 */
    ({ /* cicili#Let3147 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Let3152 */
          // ----------
          /* cicili#Block3154 */
          ({ /* cicili#Let3156 */
            bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
            // ----------
            if (__h_case_result )
              { /* cicili#Block3159 */
                printf ("%d", head );
                putchar (' ');
                (list -> __h_table -> show )(tail );
              }
            else
              { /* cicili#Let3168 */
                // ----------
                /* cicili#Block3170 */
                printf ("%d", head );
              }
          });
        }
    });
  }
}
Range_int take_Range_int (int len , Range_int list ) {
  return ({ /* cicili#Let3179 */
      __auto_type from  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type to  = (((list -> __h_data ). Cons ). __h_2_mem );
      __auto_type step  = (((list -> __h_data ). Cons ). __h_3_mem );
      // ----------
      /* cicili#Block3181 */
      ({ /* cicili#Let3183 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let3185 */
            __auto_type ne  = (list -> __h_table -> next )(list );
            // ----------
            ({ /* cicili#Let3190 */
              // ----------
              /* cicili#Block3192 */
              ({ /* cicili#Let3194 */
                bool __h_case_result  = ((ne -> __h_ctor ) ==  __h_Cons_t  );
                // ----------
                ((__h_case_result ) ? Cons_Range_int (from , (list -> __h_table -> take )((--len ), ne ), to , step ) : ({ /* cicili#Let3200 */
                    // ----------
                    /* cicili#Block3202 */
                    Cons_Range_int (from , ne , to , step );
                  }));
              });
            });
          }) : ({ /* cicili#Let3207 */
            // ----------
            /* cicili#Block3209 */
            Empty_Range_int ();
          }));
      });
    });
}
Range_int next_Range_int (Range_int list ) {
  return ({ /* cicili#Let3216 */
      __auto_type from  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type to  = (((list -> __h_data ). Cons ). __h_2_mem );
      __auto_type step  = (((list -> __h_data ). Cons ). __h_3_mem );
      // ----------
      /* cicili#Block3218 */
      ({ /* cicili#Let3220 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((from  +  step  ) <=  to  ) );
        // ----------
        ((__h_case_result ) ? Cons_Range_int ((from  +  step  ), Empty_Range_int (), to , step ) : ({ /* cicili#Let3226 */
            // ----------
            /* cicili#Block3228 */
            Empty_Range_int ();
          }));
      });
    });
}
void free_Range_int (Range_int * this_ptr ) {
  { /* cicili#Let3233 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let3237 */
      __auto_type from  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      __auto_type to  = (((this -> __h_data ). Cons ). __h_2_mem );
      __auto_type step  = (((this -> __h_data ). Cons ). __h_3_mem );
      // ----------
      /* cicili#Block3239 */
      ({ /* cicili#Let3241 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block3244 */
            free_Range_int ((&tail ));
            free (this );
          }
        else
          { /* cicili#Let3250 */
            // ----------
            /* cicili#Block3252 */
            free (this );
          }
      });
    }
  }
}
const Range_int__H_Table * const get_Range_int__H_Table () {
  static const Range_int__H_Table table  = { free_Range_int , show_Range_int , take_Range_int , next_Range_int };
  return (&table );
}
Range_int Empty_Range_int () {
  { /* cicili#Let3261 */
    Range_int instance  = malloc (sizeof(__h_Range_int_class_t));
    // ----------
    (*instance ) = ((__h_Range_int_class_t){ get_Range_int__H_Table (), __h_Empty_t });
    return instance ;
  }
}
Range_int Cons_Range_int (int from , Range_int tail , int to , int step ) {
  { /* cicili#Let3266 */
    Range_int instance  = malloc (sizeof(__h_Range_int_class_t));
    // ----------
    (*instance ) = ((__h_Range_int_class_t){ get_Range_int__H_Table (), __h___t , .__h_data._ = { from , tail , to , step }});
    return instance ;
  }
}
Range_int new_Range_int (int from , int to , int step ) {
  return (((from  <=  to  )) ? Cons_Range_int (from , Empty_Range_int (), to , step ) : Empty_Range_int ());
}
void free_Maybe_List_Bool (Maybe_List_Bool * this ) {
}
const Maybe_List_Bool__H_Table * const get_Maybe_List_Bool__H_Table () {
  static const Maybe_List_Bool__H_Table table  = { free_Maybe_List_Bool };
  return (&table );
}
Maybe_List_Bool Nothing_List_Bool () {
  return ((Maybe_List_Bool){ get_Maybe_List_Bool__H_Table (), __h_Nothing_t });
}
Maybe_List_Bool Just_List_Bool (List_Bool value ) {
  return ((Maybe_List_Bool){ get_Maybe_List_Bool__H_Table (), __h___t , .__h_data._ = { value }});
}
void free_Maybe_List_int (Maybe_List_int * this ) {
}
const Maybe_List_int__H_Table * const get_Maybe_List_int__H_Table () {
  static const Maybe_List_int__H_Table table  = { free_Maybe_List_int };
  return (&table );
}
Maybe_List_int Nothing_List_int () {
  return ((Maybe_List_int){ get_Maybe_List_int__H_Table (), __h_Nothing_t });
}
Maybe_List_int Just_List_int (List_int value ) {
  return ((Maybe_List_int){ get_Maybe_List_int__H_Table (), __h___t , .__h_data._ = { value }});
}
void free_Maybe_List_char (Maybe_List_char * this ) {
}
const Maybe_List_char__H_Table * const get_Maybe_List_char__H_Table () {
  static const Maybe_List_char__H_Table table  = { free_Maybe_List_char };
  return (&table );
}
Maybe_List_char Nothing_List_char () {
  return ((Maybe_List_char){ get_Maybe_List_char__H_Table (), __h_Nothing_t });
}
Maybe_List_char Just_List_char (List_char value ) {
  return ((Maybe_List_char){ get_Maybe_List_char__H_Table (), __h___t , .__h_data._ = { value }});
}
void free_Maybe_String (Maybe_String * this ) {
}
const Maybe_String__H_Table * const get_Maybe_String__H_Table () {
  static const Maybe_String__H_Table table  = { free_Maybe_String };
  return (&table );
}
Maybe_String Nothing_String () {
  return ((Maybe_String){ get_Maybe_String__H_Table (), __h_Nothing_t });
}
Maybe_String Just_String (String value ) {
  return ((Maybe_String){ get_Maybe_String__H_Table (), __h___t , .__h_data._ = { value }});
}
void show_List_List_Bool (List_List_Bool list ) {
  { /* cicili#Let3351 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block3353 */
    ({ /* cicili#Let3355 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block3358 */
          { /* cicili#Let3362 */
            // ----------
            /* cicili#Block3364 */
            ({ /* cicili#Let3366 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block3369 */
                  show_List_Bool (head );
                  putchar (' ');
                }
              else
                { /* cicili#Let3378 */
                  // ----------
                  /* cicili#Block3380 */
                  show_List_Bool (head );
                }
            });
          }
          show_List_List_Bool (tail );
        }
    });
  }
}
List_List_Bool append_List_List_Bool (List_List_Bool llist , List_List_Bool rlist ) {
  return ({ /* cicili#Let3390 */
      __auto_type last  = (llist -> __h_table -> last )(llist );
      // ----------
      ({ /* cicili#Let3395 */
        __auto_type tail  = (((last -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block3397 */
        ({ /* cicili#Let3399 */
          bool __h_case_result  = ((last -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn3401 */
              free_List_List_Bool ((&tail ));
              (((last -> __h_data ). Cons ). __h_1_mem ) = rlist ;
              llist ;
            }) : ({ /* cicili#Let3406 */
              // ----------
              /* cicili#Block3408 */
              rlist ;
            }));
        });
      });
    });
}
List_List_Bool push_List_List_Bool (List_Bool item , List_List_Bool list ) {
  return Cons_List_Bool (item , list );
}
List_List_Bool last_List_List_Bool (List_List_Bool list ) {
  return ({ /* cicili#Let3417 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3419 */
      ({ /* cicili#Let3421 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let3425 */
            // ----------
            /* cicili#Block3427 */
            ({ /* cicili#Let3429 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Empty_t  );
              // ----------
              ((__h_case_result ) ? list  : ({ /* cicili#Let3433 */
                  // ----------
                  /* cicili#Block3435 */
                  (list -> __h_table -> last )(tail );
                }));
            });
          }) : ({ /* cicili#Let3440 */
            // ----------
            /* cicili#Block3442 */
            list ;
          }));
      });
    });
}
List_List_Bool take_List_List_Bool (int len , List_List_Bool list ) {
  return ({ /* cicili#Let3448 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3450 */
      ({ /* cicili#Let3452 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? (list -> __h_table -> push )(head , (list -> __h_table -> take )((--len ), tail )) : ({ /* cicili#Let3458 */
            // ----------
            /* cicili#Block3460 */
            Empty_List_Bool ();
          }));
      });
    });
}
int hasLen_List_List_Bool (List_List_Bool list , int desired ) {
  return ({ /* cicili#Let3467 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3469 */
      ({ /* cicili#Let3471 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  (list -> __h_table -> hasLen )(tail , (--desired )) )) : ({ /* cicili#Let3477 */
            // ----------
            /* cicili#Block3479 */
            0;
          }));
      });
    });
}
int len_List_List_Bool (List_List_Bool list ) {
  return ({ /* cicili#Let3485 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3487 */
      ({ /* cicili#Let3489 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (1 +  (list -> __h_table -> len )(tail ) ) : ({ /* cicili#Let3494 */
            // ----------
            /* cicili#Block3496 */
            0;
          }));
      });
    });
}
List_List_Bool tail_List_List_Bool (List_List_Bool list ) {
  return (list -> __h_table -> drop )(0, list );
}
List_List_Bool drop_List_List_Bool (int index , List_List_Bool list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let3506 */
        __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block3508 */
        ({ /* cicili#Let3510 */
          bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? (list -> __h_table -> drop )((--index ), tail ) : ({ /* cicili#Let3515 */
              // ----------
              /* cicili#Block3517 */
              Empty_List_Bool ();
            }));
        });
      }));
}
Maybe_List_Bool head_List_List_Bool (List_List_Bool list ) {
  return (list -> __h_table -> nth )(0, list );
}
Maybe_List_Bool nth_List_List_Bool (int index , List_List_Bool list ) {
  return ({ /* cicili#Let3529 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3531 */
      ({ /* cicili#Let3533 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((index  ==  0 )) ? Just_List_Bool (head ) : (list -> __h_table -> nth )((--index ), tail )) : ({ /* cicili#Let3540 */
            // ----------
            /* cicili#Block3542 */
            Nothing_List_Bool ();
          }));
      });
    });
}
List_List_Bool next_List_List_Bool (List_List_Bool list ) {
  return ({ /* cicili#Let3549 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3551 */
      ({ /* cicili#Let3553 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? tail  : ({ /* cicili#Let3557 */
            // ----------
            /* cicili#Block3559 */
            Empty_List_Bool ();
          }));
      });
    });
}
void free_List_List_Bool (List_List_Bool * this_ptr ) {
  { /* cicili#Let3564 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let3568 */
      __auto_type head  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3570 */
      ({ /* cicili#Let3572 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block3575 */
            printf ("destructuring List: %p, ", this );
            show_List_Bool (head );
            putchar ('\n');
            free_List_List_Bool ((&tail ));
            free (this );
          }
        else
          { /* cicili#Let3585 */
            // ----------
            /* cicili#Block3587 */
            free (this );
          }
      });
    }
  }
}
const List_List_Bool__H_Table * const get_List_List_Bool__H_Table () {
  static const List_List_Bool__H_Table table  = { free_List_List_Bool , show_List_List_Bool , append_List_List_Bool , push_List_List_Bool , last_List_List_Bool , take_List_List_Bool , hasLen_List_List_Bool , len_List_List_Bool , tail_List_List_Bool , drop_List_List_Bool , head_List_List_Bool , nth_List_List_Bool , next_List_List_Bool };
  return (&table );
}
List_List_Bool Empty_List_Bool () {
  { /* cicili#Let3596 */
    List_List_Bool instance  = malloc (sizeof(__h_List_List_Bool_class_t));
    // ----------
    (*instance ) = ((__h_List_List_Bool_class_t){ get_List_List_Bool__H_Table (), __h_Empty_t });
    return instance ;
  }
}
List_List_Bool Cons_List_Bool (List_Bool head , List_List_Bool tail ) {
  { /* cicili#Let3601 */
    List_List_Bool instance  = malloc (sizeof(__h_List_List_Bool_class_t));
    // ----------
    (*instance ) = ((__h_List_List_Bool_class_t){ get_List_List_Bool__H_Table (), __h___t , .__h_data._ = { head , tail }});
    return instance ;
  }
}
List_List_Bool new_List_List_Bool_Pure (const List_Bool * buf , int len ) {
  if (buf  ==  NULL  )
    return Empty_List_Bool ();
  else
    { /* cicili#Let3610 */
      List_Bool item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_List_Bool ();
      else
        return Cons_List_Bool (item , new_List_List_Bool_Pure ((++buf ), (--len )));
    }
}
List_List_Bool new_List_List_Bool_Wrap (const List_Bool item ) {
  return Cons_List_Bool (item , Empty_List_Bool ());
}
void show_List_List_int (List_List_int list ) {
  { /* cicili#Let3629 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block3631 */
    ({ /* cicili#Let3633 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block3636 */
          { /* cicili#Let3640 */
            // ----------
            /* cicili#Block3642 */
            ({ /* cicili#Let3644 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block3647 */
                  show_List_int (head );
                  putchar (' ');
                }
              else
                { /* cicili#Let3656 */
                  // ----------
                  /* cicili#Block3658 */
                  show_List_int (head );
                }
            });
          }
          show_List_List_int (tail );
        }
    });
  }
}
List_List_int append_List_List_int (List_List_int llist , List_List_int rlist ) {
  return ({ /* cicili#Let3668 */
      __auto_type last  = (llist -> __h_table -> last )(llist );
      // ----------
      ({ /* cicili#Let3673 */
        __auto_type tail  = (((last -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block3675 */
        ({ /* cicili#Let3677 */
          bool __h_case_result  = ((last -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn3679 */
              free_List_List_int ((&tail ));
              (((last -> __h_data ). Cons ). __h_1_mem ) = rlist ;
              llist ;
            }) : ({ /* cicili#Let3684 */
              // ----------
              /* cicili#Block3686 */
              rlist ;
            }));
        });
      });
    });
}
List_List_int push_List_List_int (List_int item , List_List_int list ) {
  return Cons_List_int (item , list );
}
List_List_int last_List_List_int (List_List_int list ) {
  return ({ /* cicili#Let3695 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3697 */
      ({ /* cicili#Let3699 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let3703 */
            // ----------
            /* cicili#Block3705 */
            ({ /* cicili#Let3707 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Empty_t  );
              // ----------
              ((__h_case_result ) ? list  : ({ /* cicili#Let3711 */
                  // ----------
                  /* cicili#Block3713 */
                  (list -> __h_table -> last )(tail );
                }));
            });
          }) : ({ /* cicili#Let3718 */
            // ----------
            /* cicili#Block3720 */
            list ;
          }));
      });
    });
}
List_List_int take_List_List_int (int len , List_List_int list ) {
  return ({ /* cicili#Let3726 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3728 */
      ({ /* cicili#Let3730 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? (list -> __h_table -> push )(head , (list -> __h_table -> take )((--len ), tail )) : ({ /* cicili#Let3736 */
            // ----------
            /* cicili#Block3738 */
            Empty_List_int ();
          }));
      });
    });
}
int hasLen_List_List_int (List_List_int list , int desired ) {
  return ({ /* cicili#Let3745 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3747 */
      ({ /* cicili#Let3749 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  (list -> __h_table -> hasLen )(tail , (--desired )) )) : ({ /* cicili#Let3755 */
            // ----------
            /* cicili#Block3757 */
            0;
          }));
      });
    });
}
int len_List_List_int (List_List_int list ) {
  return ({ /* cicili#Let3763 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3765 */
      ({ /* cicili#Let3767 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (1 +  (list -> __h_table -> len )(tail ) ) : ({ /* cicili#Let3772 */
            // ----------
            /* cicili#Block3774 */
            0;
          }));
      });
    });
}
List_List_int tail_List_List_int (List_List_int list ) {
  return (list -> __h_table -> drop )(0, list );
}
List_List_int drop_List_List_int (int index , List_List_int list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let3784 */
        __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block3786 */
        ({ /* cicili#Let3788 */
          bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? (list -> __h_table -> drop )((--index ), tail ) : ({ /* cicili#Let3793 */
              // ----------
              /* cicili#Block3795 */
              Empty_List_int ();
            }));
        });
      }));
}
Maybe_List_int head_List_List_int (List_List_int list ) {
  return (list -> __h_table -> nth )(0, list );
}
Maybe_List_int nth_List_List_int (int index , List_List_int list ) {
  return ({ /* cicili#Let3807 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3809 */
      ({ /* cicili#Let3811 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((index  ==  0 )) ? Just_List_int (head ) : (list -> __h_table -> nth )((--index ), tail )) : ({ /* cicili#Let3818 */
            // ----------
            /* cicili#Block3820 */
            Nothing_List_int ();
          }));
      });
    });
}
List_List_int next_List_List_int (List_List_int list ) {
  return ({ /* cicili#Let3827 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3829 */
      ({ /* cicili#Let3831 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? tail  : ({ /* cicili#Let3835 */
            // ----------
            /* cicili#Block3837 */
            Empty_List_int ();
          }));
      });
    });
}
void free_List_List_int (List_List_int * this_ptr ) {
  { /* cicili#Let3842 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let3846 */
      __auto_type head  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3848 */
      ({ /* cicili#Let3850 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block3853 */
            printf ("destructuring List: %p, ", this );
            show_List_int (head );
            putchar ('\n');
            free_List_List_int ((&tail ));
            free (this );
          }
        else
          { /* cicili#Let3863 */
            // ----------
            /* cicili#Block3865 */
            free (this );
          }
      });
    }
  }
}
const List_List_int__H_Table * const get_List_List_int__H_Table () {
  static const List_List_int__H_Table table  = { free_List_List_int , show_List_List_int , append_List_List_int , push_List_List_int , last_List_List_int , take_List_List_int , hasLen_List_List_int , len_List_List_int , tail_List_List_int , drop_List_List_int , head_List_List_int , nth_List_List_int , next_List_List_int };
  return (&table );
}
List_List_int Empty_List_int () {
  { /* cicili#Let3874 */
    List_List_int instance  = malloc (sizeof(__h_List_List_int_class_t));
    // ----------
    (*instance ) = ((__h_List_List_int_class_t){ get_List_List_int__H_Table (), __h_Empty_t });
    return instance ;
  }
}
List_List_int Cons_List_int (List_int head , List_List_int tail ) {
  { /* cicili#Let3879 */
    List_List_int instance  = malloc (sizeof(__h_List_List_int_class_t));
    // ----------
    (*instance ) = ((__h_List_List_int_class_t){ get_List_List_int__H_Table (), __h___t , .__h_data._ = { head , tail }});
    return instance ;
  }
}
List_List_int new_List_List_int_Pure (const List_int * buf , int len ) {
  if (buf  ==  NULL  )
    return Empty_List_int ();
  else
    { /* cicili#Let3888 */
      List_int item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_List_int ();
      else
        return Cons_List_int (item , new_List_List_int_Pure ((++buf ), (--len )));
    }
}
List_List_int new_List_List_int_Wrap (const List_int item ) {
  return Cons_List_int (item , Empty_List_int ());
}
void show_List_List_char (List_List_char list ) {
  { /* cicili#Let3907 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block3909 */
    ({ /* cicili#Let3911 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block3914 */
          { /* cicili#Let3918 */
            // ----------
            /* cicili#Block3920 */
            ({ /* cicili#Let3922 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block3925 */
                  show_List_char (head );
                  putchar (' ');
                }
              else
                { /* cicili#Let3934 */
                  // ----------
                  /* cicili#Block3936 */
                  show_List_char (head );
                }
            });
          }
          show_List_List_char (tail );
        }
    });
  }
}
List_List_char append_List_List_char (List_List_char llist , List_List_char rlist ) {
  return ({ /* cicili#Let3946 */
      __auto_type last  = (llist -> __h_table -> last )(llist );
      // ----------
      ({ /* cicili#Let3951 */
        __auto_type tail  = (((last -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block3953 */
        ({ /* cicili#Let3955 */
          bool __h_case_result  = ((last -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn3957 */
              free_List_List_char ((&tail ));
              (((last -> __h_data ). Cons ). __h_1_mem ) = rlist ;
              llist ;
            }) : ({ /* cicili#Let3962 */
              // ----------
              /* cicili#Block3964 */
              rlist ;
            }));
        });
      });
    });
}
List_List_char push_List_List_char (List_char item , List_List_char list ) {
  return Cons_List_char (item , list );
}
List_List_char last_List_List_char (List_List_char list ) {
  return ({ /* cicili#Let3973 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3975 */
      ({ /* cicili#Let3977 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let3981 */
            // ----------
            /* cicili#Block3983 */
            ({ /* cicili#Let3985 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Empty_t  );
              // ----------
              ((__h_case_result ) ? list  : ({ /* cicili#Let3989 */
                  // ----------
                  /* cicili#Block3991 */
                  (list -> __h_table -> last )(tail );
                }));
            });
          }) : ({ /* cicili#Let3996 */
            // ----------
            /* cicili#Block3998 */
            list ;
          }));
      });
    });
}
List_List_char take_List_List_char (int len , List_List_char list ) {
  return ({ /* cicili#Let4004 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4006 */
      ({ /* cicili#Let4008 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? (list -> __h_table -> push )(head , (list -> __h_table -> take )((--len ), tail )) : ({ /* cicili#Let4014 */
            // ----------
            /* cicili#Block4016 */
            Empty_List_char ();
          }));
      });
    });
}
int hasLen_List_List_char (List_List_char list , int desired ) {
  return ({ /* cicili#Let4023 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4025 */
      ({ /* cicili#Let4027 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  (list -> __h_table -> hasLen )(tail , (--desired )) )) : ({ /* cicili#Let4033 */
            // ----------
            /* cicili#Block4035 */
            0;
          }));
      });
    });
}
int len_List_List_char (List_List_char list ) {
  return ({ /* cicili#Let4041 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4043 */
      ({ /* cicili#Let4045 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (1 +  (list -> __h_table -> len )(tail ) ) : ({ /* cicili#Let4050 */
            // ----------
            /* cicili#Block4052 */
            0;
          }));
      });
    });
}
List_List_char tail_List_List_char (List_List_char list ) {
  return (list -> __h_table -> drop )(0, list );
}
List_List_char drop_List_List_char (int index , List_List_char list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let4062 */
        __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block4064 */
        ({ /* cicili#Let4066 */
          bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? (list -> __h_table -> drop )((--index ), tail ) : ({ /* cicili#Let4071 */
              // ----------
              /* cicili#Block4073 */
              Empty_List_char ();
            }));
        });
      }));
}
Maybe_List_char head_List_List_char (List_List_char list ) {
  return (list -> __h_table -> nth )(0, list );
}
Maybe_List_char nth_List_List_char (int index , List_List_char list ) {
  return ({ /* cicili#Let4085 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4087 */
      ({ /* cicili#Let4089 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((index  ==  0 )) ? Just_List_char (head ) : (list -> __h_table -> nth )((--index ), tail )) : ({ /* cicili#Let4096 */
            // ----------
            /* cicili#Block4098 */
            Nothing_List_char ();
          }));
      });
    });
}
List_List_char next_List_List_char (List_List_char list ) {
  return ({ /* cicili#Let4105 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4107 */
      ({ /* cicili#Let4109 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? tail  : ({ /* cicili#Let4113 */
            // ----------
            /* cicili#Block4115 */
            Empty_List_char ();
          }));
      });
    });
}
void free_List_List_char (List_List_char * this_ptr ) {
  { /* cicili#Let4120 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let4124 */
      __auto_type head  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4126 */
      ({ /* cicili#Let4128 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block4131 */
            printf ("destructuring List: %p, ", this );
            show_List_char (head );
            putchar ('\n');
            free_List_List_char ((&tail ));
            free (this );
          }
        else
          { /* cicili#Let4141 */
            // ----------
            /* cicili#Block4143 */
            free (this );
          }
      });
    }
  }
}
const List_List_char__H_Table * const get_List_List_char__H_Table () {
  static const List_List_char__H_Table table  = { free_List_List_char , show_List_List_char , append_List_List_char , push_List_List_char , last_List_List_char , take_List_List_char , hasLen_List_List_char , len_List_List_char , tail_List_List_char , drop_List_List_char , head_List_List_char , nth_List_List_char , next_List_List_char };
  return (&table );
}
List_List_char Empty_List_char () {
  { /* cicili#Let4152 */
    List_List_char instance  = malloc (sizeof(__h_List_List_char_class_t));
    // ----------
    (*instance ) = ((__h_List_List_char_class_t){ get_List_List_char__H_Table (), __h_Empty_t });
    return instance ;
  }
}
List_List_char Cons_List_char (List_char head , List_List_char tail ) {
  { /* cicili#Let4157 */
    List_List_char instance  = malloc (sizeof(__h_List_List_char_class_t));
    // ----------
    (*instance ) = ((__h_List_List_char_class_t){ get_List_List_char__H_Table (), __h___t , .__h_data._ = { head , tail }});
    return instance ;
  }
}
List_List_char new_List_List_char_Pure (const List_char * buf , int len ) {
  if (buf  ==  NULL  )
    return Empty_List_char ();
  else
    { /* cicili#Let4166 */
      List_char item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_List_char ();
      else
        return Cons_List_char (item , new_List_List_char_Pure ((++buf ), (--len )));
    }
}
List_List_char new_List_List_char_Wrap (const List_char item ) {
  return Cons_List_char (item , Empty_List_char ());
}
void show_List_String (List_String list ) {
  { /* cicili#Let4185 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block4187 */
    ({ /* cicili#Let4189 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block4192 */
          { /* cicili#Let4196 */
            // ----------
            /* cicili#Block4198 */
            ({ /* cicili#Let4200 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block4203 */
                  show_List_char (head );
                  putchar (' ');
                }
              else
                { /* cicili#Let4212 */
                  // ----------
                  /* cicili#Block4214 */
                  show_List_char (head );
                }
            });
          }
          show_List_String (tail );
        }
    });
  }
}
List_String append_List_String (List_String llist , List_String rlist ) {
  return ({ /* cicili#Let4224 */
      __auto_type last  = (llist -> __h_table -> last )(llist );
      // ----------
      ({ /* cicili#Let4229 */
        __auto_type tail  = (((last -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block4231 */
        ({ /* cicili#Let4233 */
          bool __h_case_result  = ((last -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn4235 */
              free_List_String ((&tail ));
              (((last -> __h_data ). Cons ). __h_1_mem ) = rlist ;
              llist ;
            }) : ({ /* cicili#Let4240 */
              // ----------
              /* cicili#Block4242 */
              rlist ;
            }));
        });
      });
    });
}
List_String push_List_String (String item , List_String list ) {
  return Cons_String (item , list );
}
List_String last_List_String (List_String list ) {
  return ({ /* cicili#Let4251 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4253 */
      ({ /* cicili#Let4255 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let4259 */
            // ----------
            /* cicili#Block4261 */
            ({ /* cicili#Let4263 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Empty_t  );
              // ----------
              ((__h_case_result ) ? list  : ({ /* cicili#Let4267 */
                  // ----------
                  /* cicili#Block4269 */
                  (list -> __h_table -> last )(tail );
                }));
            });
          }) : ({ /* cicili#Let4274 */
            // ----------
            /* cicili#Block4276 */
            list ;
          }));
      });
    });
}
List_String take_List_String (int len , List_String list ) {
  return ({ /* cicili#Let4282 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4284 */
      ({ /* cicili#Let4286 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? (list -> __h_table -> push )(head , (list -> __h_table -> take )((--len ), tail )) : ({ /* cicili#Let4292 */
            // ----------
            /* cicili#Block4294 */
            Empty_String ();
          }));
      });
    });
}
int hasLen_List_String (List_String list , int desired ) {
  return ({ /* cicili#Let4301 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4303 */
      ({ /* cicili#Let4305 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  (list -> __h_table -> hasLen )(tail , (--desired )) )) : ({ /* cicili#Let4311 */
            // ----------
            /* cicili#Block4313 */
            0;
          }));
      });
    });
}
int len_List_String (List_String list ) {
  return ({ /* cicili#Let4319 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4321 */
      ({ /* cicili#Let4323 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (1 +  (list -> __h_table -> len )(tail ) ) : ({ /* cicili#Let4328 */
            // ----------
            /* cicili#Block4330 */
            0;
          }));
      });
    });
}
List_String tail_List_String (List_String list ) {
  return (list -> __h_table -> drop )(0, list );
}
List_String drop_List_String (int index , List_String list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let4340 */
        __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block4342 */
        ({ /* cicili#Let4344 */
          bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? (list -> __h_table -> drop )((--index ), tail ) : ({ /* cicili#Let4349 */
              // ----------
              /* cicili#Block4351 */
              Empty_String ();
            }));
        });
      }));
}
Maybe_String head_List_String (List_String list ) {
  return (list -> __h_table -> nth )(0, list );
}
Maybe_String nth_List_String (int index , List_String list ) {
  return ({ /* cicili#Let4363 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4365 */
      ({ /* cicili#Let4367 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((index  ==  0 )) ? Just_String (head ) : (list -> __h_table -> nth )((--index ), tail )) : ({ /* cicili#Let4374 */
            // ----------
            /* cicili#Block4376 */
            Nothing_String ();
          }));
      });
    });
}
List_String next_List_String (List_String list ) {
  return ({ /* cicili#Let4383 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4385 */
      ({ /* cicili#Let4387 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? tail  : ({ /* cicili#Let4391 */
            // ----------
            /* cicili#Block4393 */
            Empty_String ();
          }));
      });
    });
}
void free_List_String (List_String * this_ptr ) {
  { /* cicili#Let4398 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let4402 */
      __auto_type head  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4404 */
      ({ /* cicili#Let4406 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block4409 */
            printf ("destructuring List: %p, ", this );
            show_List_char (head );
            putchar ('\n');
            free_List_String ((&tail ));
            free (this );
          }
        else
          { /* cicili#Let4419 */
            // ----------
            /* cicili#Block4421 */
            free (this );
          }
      });
    }
  }
}
const List_String__H_Table * const get_List_String__H_Table () {
  static const List_String__H_Table table  = { free_List_String , show_List_String , append_List_String , push_List_String , last_List_String , take_List_String , hasLen_List_String , len_List_String , tail_List_String , drop_List_String , head_List_String , nth_List_String , next_List_String };
  return (&table );
}
List_String Empty_String () {
  { /* cicili#Let4430 */
    List_String instance  = malloc (sizeof(__h_List_String_class_t));
    // ----------
    (*instance ) = ((__h_List_String_class_t){ get_List_String__H_Table (), __h_Empty_t });
    return instance ;
  }
}
List_String Cons_String (String head , List_String tail ) {
  { /* cicili#Let4435 */
    List_String instance  = malloc (sizeof(__h_List_String_class_t));
    // ----------
    (*instance ) = ((__h_List_String_class_t){ get_List_String__H_Table (), __h___t , .__h_data._ = { head , tail }});
    return instance ;
  }
}
List_String new_List_String_Pure (const String * buf , int len ) {
  if (buf  ==  NULL  )
    return Empty_String ();
  else
    { /* cicili#Let4444 */
      String item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_String ();
      else
        return Cons_String (item , new_List_String_Pure ((++buf ), (--len )));
    }
}
List_String new_List_String_Wrap (const String item ) {
  return Cons_String (item , Empty_String ());
}
#ifndef __H___h_Rc_ctor_t__
#define __H___h_Rc_ctor_t__
typedef enum __h_Rc_ctor_t {
  __h_Keep_t = 0
} __h_Rc_ctor_t;
#endif /* __H___h_Rc_ctor_t__ */ 
typedef struct __h_Rc_List_Bool_class_t __h_Rc_List_Bool_class_t ;
typedef __h_Rc_List_Bool_class_t * Rc_List_Bool ;
typedef void (*free_Rc_List_Bool_t) (Rc_List_Bool * this_ptr );
typedef struct Rc_List_Bool__H_Table {
  free_Rc_List_Bool_t freeClass ;
} Rc_List_Bool__H_Table;
typedef struct __h_Rc_List_Bool_class_t {
  const Rc_List_Bool__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion4467 */
    struct { /* ciciliStruct4468 */
      List_Bool __h_0_mem ;
      size_t __h_1_mem ;
      int * __h_2_mem ;
      void (*__h_3_mem) (List_Bool * pointer );
    } Keep , _ ;
  } __h_data ;
} __h_Rc_List_Bool_class_t;
Rc_List_Bool Keep_Rc_List_Bool (List_Bool pointer , size_t authority , int * count , void (*destructor) (List_Bool * pointer ));
__attribute__((weak)) Rc_List_Bool Default_Rc_List_Bool (List_Bool pointer , size_t authority , int * count , void (*destructor) (List_Bool * pointer )) {
  return Keep_Rc_List_Bool (pointer , authority , count , destructor );
}
const Rc_List_Bool__H_Table * const get_Rc_List_Bool__H_Table ();
void free_Rc_List_Bool (Rc_List_Bool * this_ptr );
Maybe_List_Bool deref_Rc_List_Bool (Rc_List_Bool rc );
Rc_List_Bool clone_Rc_List_Bool (Rc_List_Bool rc );
Rc_List_Bool new_Rc_List_Bool_Pure (List_Bool pointer );
void free_Rc_List_Bool (Rc_List_Bool * this_ptr ) {
  { /* cicili#Let4499 */
    __auto_type this  = (*this_ptr );
    // ----------
    ({ /* cicili#Progn4501 */
      printf ("destructuring Rc: %p\n", this );
      { /* cicili#Let4505 */
        __auto_type pointer  = (((this -> __h_data ). _ ). __h_0_mem );
        __auto_type authority  = (((this -> __h_data ). _ ). __h_1_mem );
        __auto_type count  = (((this -> __h_data ). _ ). __h_2_mem );
        __auto_type destructor  = (((this -> __h_data ). _ ). __h_3_mem );
        // ----------
        /* cicili#Block4507 */
        ({ /* cicili#Let4509 */
          bool __h_case_result  = ((this -> __h_ctor ) ==  __h___t  );
          // ----------
          if (__h_case_result )
            {
            if (((size_t)this ) ==  authority  )
              { /* cicili#Block4514 */
                printf ("destructuring authorized Rc: %p , %d\n", this , (*count ));
                ((((*count ) ==  1 )) ? ({ /* cicili#Progn4517 */
                    destructor ((&pointer ));
                    free (count );
                    free (this );
                  }) : ({ /* cicili#Progn4519 */
                    (--(*count ));
                    free (this );
                  }));
              }
              }        });
      }
    });
  }
}
const Rc_List_Bool__H_Table * const get_Rc_List_Bool__H_Table () {
  static const Rc_List_Bool__H_Table table  = { free_Rc_List_Bool };
  return (&table );
}
Rc_List_Bool Keep_Rc_List_Bool (List_Bool pointer , size_t authority , int * count , void (*destructor) (List_Bool * pointer )) {
  { /* cicili#Let4528 */
    Rc_List_Bool instance  = malloc (sizeof(__h_Rc_List_Bool_class_t));
    // ----------
    (*instance ) = ((__h_Rc_List_Bool_class_t){ get_Rc_List_Bool__H_Table (), __h___t , .__h_data._ = { pointer , authority , count , destructor }});
    return instance ;
  }
}
Maybe_List_Bool deref_Rc_List_Bool (Rc_List_Bool rc ) {
  return ({ /* cicili#Let4537 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block4539 */
      ({ /* cicili#Let4541 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? ((((((size_t)rc ) ==  authority  ) &&  ((*count ) >=  1 ) )) ? Just_List_Bool (pointer ) : Nothing_List_Bool ()) : ({ /* cicili#Let4548 */
            // ----------
            /* cicili#Block4550 */
            Nothing_List_Bool ();
          }));
      });
    });
}
Rc_List_Bool clone_Rc_List_Bool (Rc_List_Bool rc ) {
  return ({ /* cicili#Let4559 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block4561 */
      ({ /* cicili#Let4563 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? (((((size_t)rc ) ==  authority  )) ? ({ /* cicili#Progn4566 */
              (++(*count ));
              ({ /* cicili#Let4568 */
                __auto_type cloned_rc  = Keep_Rc_List_Bool (pointer , 0, count , destructor );
                // ----------
                (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
                { /* cicili#Let4573 */
                  __auto_type authority  = (((cloned_rc -> __h_data ). _ ). __h_1_mem );
                  __auto_type count  = (((cloned_rc -> __h_data ). _ ). __h_2_mem );
                  // ----------
                  /* cicili#Block4575 */
                  ({ /* cicili#Let4577 */
                    bool __h_case_result  = ((cloned_rc -> __h_ctor ) ==  __h___t  );
                    // ----------
                    if (__h_case_result )
                      printf ("inside Clone rc: %p, %zx, %d\n", cloned_rc , authority , (*count ));
                  });
                }
                cloned_rc ;
              });
            }) : rc ) : ({ /* cicili#Let4582 */
            // ----------
            /* cicili#Block4584 */
            rc ;
          }));
      });
    });
}
Rc_List_Bool new_Rc_List_Bool_Pure (List_Bool pointer ) {
  return ({ /* cicili#Let4590 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      // ----------
      (*count ) = 1;
      ({ /* cicili#Let4592 */
        __auto_type cloned_rc  = Keep_Rc_List_Bool (pointer , 0, count , free_List_Bool );
        // ----------
        (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
        { /* cicili#Let4598 */
          __auto_type authority  = (((cloned_rc -> __h_data ). _ ). __h_1_mem );
          __auto_type count  = (((cloned_rc -> __h_data ). _ ). __h_2_mem );
          // ----------
          /* cicili#Block4600 */
          ({ /* cicili#Let4602 */
            bool __h_case_result  = ((cloned_rc -> __h_ctor ) ==  __h___t  );
            // ----------
            if (__h_case_result )
              printf ("inside Ctor rc: %p, %zx, %d\n", cloned_rc , authority , (*count ));
          });
        }
        cloned_rc ;
      });
    });
}
#ifndef __H___h_Rc_ctor_t__
#define __H___h_Rc_ctor_t__
typedef enum __h_Rc_ctor_t {
  __h_Keep_t = 0
} __h_Rc_ctor_t;
#endif /* __H___h_Rc_ctor_t__ */ 
typedef struct __h_Rc_List_int_class_t __h_Rc_List_int_class_t ;
typedef __h_Rc_List_int_class_t * Rc_List_int ;
typedef void (*free_Rc_List_int_t) (Rc_List_int * this_ptr );
typedef struct Rc_List_int__H_Table {
  free_Rc_List_int_t freeClass ;
} Rc_List_int__H_Table;
typedef struct __h_Rc_List_int_class_t {
  const Rc_List_int__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion4617 */
    struct { /* ciciliStruct4618 */
      List_int __h_0_mem ;
      size_t __h_1_mem ;
      int * __h_2_mem ;
      void (*__h_3_mem) (List_int * pointer );
    } Keep , _ ;
  } __h_data ;
} __h_Rc_List_int_class_t;
Rc_List_int Keep_Rc_List_int (List_int pointer , size_t authority , int * count , void (*destructor) (List_int * pointer ));
__attribute__((weak)) Rc_List_int Default_Rc_List_int (List_int pointer , size_t authority , int * count , void (*destructor) (List_int * pointer )) {
  return Keep_Rc_List_int (pointer , authority , count , destructor );
}
const Rc_List_int__H_Table * const get_Rc_List_int__H_Table ();
void free_Rc_List_int (Rc_List_int * this_ptr );
Maybe_List_int deref_Rc_List_int (Rc_List_int rc );
Rc_List_int clone_Rc_List_int (Rc_List_int rc );
Rc_List_int new_Rc_List_int_Pure (List_int pointer );
void free_Rc_List_int (Rc_List_int * this_ptr ) {
  { /* cicili#Let4649 */
    __auto_type this  = (*this_ptr );
    // ----------
    ({ /* cicili#Progn4651 */
      printf ("destructuring Rc: %p\n", this );
      { /* cicili#Let4655 */
        __auto_type pointer  = (((this -> __h_data ). _ ). __h_0_mem );
        __auto_type authority  = (((this -> __h_data ). _ ). __h_1_mem );
        __auto_type count  = (((this -> __h_data ). _ ). __h_2_mem );
        __auto_type destructor  = (((this -> __h_data ). _ ). __h_3_mem );
        // ----------
        /* cicili#Block4657 */
        ({ /* cicili#Let4659 */
          bool __h_case_result  = ((this -> __h_ctor ) ==  __h___t  );
          // ----------
          if (__h_case_result )
            {
            if (((size_t)this ) ==  authority  )
              { /* cicili#Block4664 */
                printf ("destructuring authorized Rc: %p , %d\n", this , (*count ));
                ((((*count ) ==  1 )) ? ({ /* cicili#Progn4667 */
                    destructor ((&pointer ));
                    free (count );
                    free (this );
                  }) : ({ /* cicili#Progn4669 */
                    (--(*count ));
                    free (this );
                  }));
              }
              }        });
      }
    });
  }
}
const Rc_List_int__H_Table * const get_Rc_List_int__H_Table () {
  static const Rc_List_int__H_Table table  = { free_Rc_List_int };
  return (&table );
}
Rc_List_int Keep_Rc_List_int (List_int pointer , size_t authority , int * count , void (*destructor) (List_int * pointer )) {
  { /* cicili#Let4678 */
    Rc_List_int instance  = malloc (sizeof(__h_Rc_List_int_class_t));
    // ----------
    (*instance ) = ((__h_Rc_List_int_class_t){ get_Rc_List_int__H_Table (), __h___t , .__h_data._ = { pointer , authority , count , destructor }});
    return instance ;
  }
}
Maybe_List_int deref_Rc_List_int (Rc_List_int rc ) {
  return ({ /* cicili#Let4687 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block4689 */
      ({ /* cicili#Let4691 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? ((((((size_t)rc ) ==  authority  ) &&  ((*count ) >=  1 ) )) ? Just_List_int (pointer ) : Nothing_List_int ()) : ({ /* cicili#Let4698 */
            // ----------
            /* cicili#Block4700 */
            Nothing_List_int ();
          }));
      });
    });
}
Rc_List_int clone_Rc_List_int (Rc_List_int rc ) {
  return ({ /* cicili#Let4709 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block4711 */
      ({ /* cicili#Let4713 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? (((((size_t)rc ) ==  authority  )) ? ({ /* cicili#Progn4716 */
              (++(*count ));
              ({ /* cicili#Let4718 */
                __auto_type cloned_rc  = Keep_Rc_List_int (pointer , 0, count , destructor );
                // ----------
                (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
                { /* cicili#Let4723 */
                  __auto_type authority  = (((cloned_rc -> __h_data ). _ ). __h_1_mem );
                  __auto_type count  = (((cloned_rc -> __h_data ). _ ). __h_2_mem );
                  // ----------
                  /* cicili#Block4725 */
                  ({ /* cicili#Let4727 */
                    bool __h_case_result  = ((cloned_rc -> __h_ctor ) ==  __h___t  );
                    // ----------
                    if (__h_case_result )
                      printf ("inside Clone rc: %p, %zx, %d\n", cloned_rc , authority , (*count ));
                  });
                }
                cloned_rc ;
              });
            }) : rc ) : ({ /* cicili#Let4732 */
            // ----------
            /* cicili#Block4734 */
            rc ;
          }));
      });
    });
}
Rc_List_int new_Rc_List_int_Pure (List_int pointer ) {
  return ({ /* cicili#Let4740 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      // ----------
      (*count ) = 1;
      ({ /* cicili#Let4742 */
        __auto_type cloned_rc  = Keep_Rc_List_int (pointer , 0, count , free_List_int );
        // ----------
        (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
        { /* cicili#Let4748 */
          __auto_type authority  = (((cloned_rc -> __h_data ). _ ). __h_1_mem );
          __auto_type count  = (((cloned_rc -> __h_data ). _ ). __h_2_mem );
          // ----------
          /* cicili#Block4750 */
          ({ /* cicili#Let4752 */
            bool __h_case_result  = ((cloned_rc -> __h_ctor ) ==  __h___t  );
            // ----------
            if (__h_case_result )
              printf ("inside Ctor rc: %p, %zx, %d\n", cloned_rc , authority , (*count ));
          });
        }
        cloned_rc ;
      });
    });
}
#ifndef __H___h_Rc_ctor_t__
#define __H___h_Rc_ctor_t__
typedef enum __h_Rc_ctor_t {
  __h_Keep_t = 0
} __h_Rc_ctor_t;
#endif /* __H___h_Rc_ctor_t__ */ 
typedef struct __h_Rc_List_char_class_t __h_Rc_List_char_class_t ;
typedef __h_Rc_List_char_class_t * Rc_List_char ;
typedef void (*free_Rc_List_char_t) (Rc_List_char * this_ptr );
typedef struct Rc_List_char__H_Table {
  free_Rc_List_char_t freeClass ;
} Rc_List_char__H_Table;
typedef struct __h_Rc_List_char_class_t {
  const Rc_List_char__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion4767 */
    struct { /* ciciliStruct4768 */
      List_char __h_0_mem ;
      size_t __h_1_mem ;
      int * __h_2_mem ;
      void (*__h_3_mem) (List_char * pointer );
    } Keep , _ ;
  } __h_data ;
} __h_Rc_List_char_class_t;
Rc_List_char Keep_Rc_List_char (List_char pointer , size_t authority , int * count , void (*destructor) (List_char * pointer ));
__attribute__((weak)) Rc_List_char Default_Rc_List_char (List_char pointer , size_t authority , int * count , void (*destructor) (List_char * pointer )) {
  return Keep_Rc_List_char (pointer , authority , count , destructor );
}
const Rc_List_char__H_Table * const get_Rc_List_char__H_Table ();
void free_Rc_List_char (Rc_List_char * this_ptr );
Maybe_List_char deref_Rc_List_char (Rc_List_char rc );
Rc_List_char clone_Rc_List_char (Rc_List_char rc );
Rc_List_char new_Rc_List_char_Pure (List_char pointer );
void free_Rc_List_char (Rc_List_char * this_ptr ) {
  { /* cicili#Let4799 */
    __auto_type this  = (*this_ptr );
    // ----------
    ({ /* cicili#Progn4801 */
      printf ("destructuring Rc: %p\n", this );
      { /* cicili#Let4805 */
        __auto_type pointer  = (((this -> __h_data ). _ ). __h_0_mem );
        __auto_type authority  = (((this -> __h_data ). _ ). __h_1_mem );
        __auto_type count  = (((this -> __h_data ). _ ). __h_2_mem );
        __auto_type destructor  = (((this -> __h_data ). _ ). __h_3_mem );
        // ----------
        /* cicili#Block4807 */
        ({ /* cicili#Let4809 */
          bool __h_case_result  = ((this -> __h_ctor ) ==  __h___t  );
          // ----------
          if (__h_case_result )
            {
            if (((size_t)this ) ==  authority  )
              { /* cicili#Block4814 */
                printf ("destructuring authorized Rc: %p , %d\n", this , (*count ));
                ((((*count ) ==  1 )) ? ({ /* cicili#Progn4817 */
                    destructor ((&pointer ));
                    free (count );
                    free (this );
                  }) : ({ /* cicili#Progn4819 */
                    (--(*count ));
                    free (this );
                  }));
              }
              }        });
      }
    });
  }
}
const Rc_List_char__H_Table * const get_Rc_List_char__H_Table () {
  static const Rc_List_char__H_Table table  = { free_Rc_List_char };
  return (&table );
}
Rc_List_char Keep_Rc_List_char (List_char pointer , size_t authority , int * count , void (*destructor) (List_char * pointer )) {
  { /* cicili#Let4828 */
    Rc_List_char instance  = malloc (sizeof(__h_Rc_List_char_class_t));
    // ----------
    (*instance ) = ((__h_Rc_List_char_class_t){ get_Rc_List_char__H_Table (), __h___t , .__h_data._ = { pointer , authority , count , destructor }});
    return instance ;
  }
}
Maybe_List_char deref_Rc_List_char (Rc_List_char rc ) {
  return ({ /* cicili#Let4837 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block4839 */
      ({ /* cicili#Let4841 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? ((((((size_t)rc ) ==  authority  ) &&  ((*count ) >=  1 ) )) ? Just_List_char (pointer ) : Nothing_List_char ()) : ({ /* cicili#Let4848 */
            // ----------
            /* cicili#Block4850 */
            Nothing_List_char ();
          }));
      });
    });
}
Rc_List_char clone_Rc_List_char (Rc_List_char rc ) {
  return ({ /* cicili#Let4859 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block4861 */
      ({ /* cicili#Let4863 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? (((((size_t)rc ) ==  authority  )) ? ({ /* cicili#Progn4866 */
              (++(*count ));
              ({ /* cicili#Let4868 */
                __auto_type cloned_rc  = Keep_Rc_List_char (pointer , 0, count , destructor );
                // ----------
                (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
                { /* cicili#Let4873 */
                  __auto_type authority  = (((cloned_rc -> __h_data ). _ ). __h_1_mem );
                  __auto_type count  = (((cloned_rc -> __h_data ). _ ). __h_2_mem );
                  // ----------
                  /* cicili#Block4875 */
                  ({ /* cicili#Let4877 */
                    bool __h_case_result  = ((cloned_rc -> __h_ctor ) ==  __h___t  );
                    // ----------
                    if (__h_case_result )
                      printf ("inside Clone rc: %p, %zx, %d\n", cloned_rc , authority , (*count ));
                  });
                }
                cloned_rc ;
              });
            }) : rc ) : ({ /* cicili#Let4882 */
            // ----------
            /* cicili#Block4884 */
            rc ;
          }));
      });
    });
}
Rc_List_char new_Rc_List_char_Pure (List_char pointer ) {
  return ({ /* cicili#Let4890 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      // ----------
      (*count ) = 1;
      ({ /* cicili#Let4892 */
        __auto_type cloned_rc  = Keep_Rc_List_char (pointer , 0, count , free_List_char );
        // ----------
        (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
        { /* cicili#Let4898 */
          __auto_type authority  = (((cloned_rc -> __h_data ). _ ). __h_1_mem );
          __auto_type count  = (((cloned_rc -> __h_data ). _ ). __h_2_mem );
          // ----------
          /* cicili#Block4900 */
          ({ /* cicili#Let4902 */
            bool __h_case_result  = ((cloned_rc -> __h_ctor ) ==  __h___t  );
            // ----------
            if (__h_case_result )
              printf ("inside Ctor rc: %p, %zx, %d\n", cloned_rc , authority , (*count ));
          });
        }
        cloned_rc ;
      });
    });
}
#ifndef __H___h_Rc_ctor_t__
#define __H___h_Rc_ctor_t__
typedef enum __h_Rc_ctor_t {
  __h_Keep_t = 0
} __h_Rc_ctor_t;
#endif /* __H___h_Rc_ctor_t__ */ 
typedef struct __h_Rc_String_class_t __h_Rc_String_class_t ;
typedef __h_Rc_String_class_t * Rc_String ;
typedef void (*free_Rc_String_t) (Rc_String * this_ptr );
typedef struct Rc_String__H_Table {
  free_Rc_String_t freeClass ;
} Rc_String__H_Table;
typedef struct __h_Rc_String_class_t {
  const Rc_String__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion4917 */
    struct { /* ciciliStruct4918 */
      String __h_0_mem ;
      size_t __h_1_mem ;
      int * __h_2_mem ;
      void (*__h_3_mem) (String * pointer );
    } Keep , _ ;
  } __h_data ;
} __h_Rc_String_class_t;
Rc_String Keep_Rc_String (String pointer , size_t authority , int * count , void (*destructor) (String * pointer ));
__attribute__((weak)) Rc_String Default_Rc_String (String pointer , size_t authority , int * count , void (*destructor) (String * pointer )) {
  return Keep_Rc_String (pointer , authority , count , destructor );
}
const Rc_String__H_Table * const get_Rc_String__H_Table ();
void free_Rc_String (Rc_String * this_ptr );
Maybe_String deref_Rc_String (Rc_String rc );
Rc_String clone_Rc_String (Rc_String rc );
Rc_String new_Rc_String_Pure (String pointer );
void free_Rc_String (Rc_String * this_ptr ) {
  { /* cicili#Let4949 */
    __auto_type this  = (*this_ptr );
    // ----------
    ({ /* cicili#Progn4951 */
      printf ("destructuring Rc: %p\n", this );
      { /* cicili#Let4955 */
        __auto_type pointer  = (((this -> __h_data ). _ ). __h_0_mem );
        __auto_type authority  = (((this -> __h_data ). _ ). __h_1_mem );
        __auto_type count  = (((this -> __h_data ). _ ). __h_2_mem );
        __auto_type destructor  = (((this -> __h_data ). _ ). __h_3_mem );
        // ----------
        /* cicili#Block4957 */
        ({ /* cicili#Let4959 */
          bool __h_case_result  = ((this -> __h_ctor ) ==  __h___t  );
          // ----------
          if (__h_case_result )
            {
            if (((size_t)this ) ==  authority  )
              { /* cicili#Block4964 */
                printf ("destructuring authorized Rc: %p , %d\n", this , (*count ));
                ((((*count ) ==  1 )) ? ({ /* cicili#Progn4967 */
                    destructor ((&pointer ));
                    free (count );
                    free (this );
                  }) : ({ /* cicili#Progn4969 */
                    (--(*count ));
                    free (this );
                  }));
              }
              }        });
      }
    });
  }
}
const Rc_String__H_Table * const get_Rc_String__H_Table () {
  static const Rc_String__H_Table table  = { free_Rc_String };
  return (&table );
}
Rc_String Keep_Rc_String (String pointer , size_t authority , int * count , void (*destructor) (String * pointer )) {
  { /* cicili#Let4978 */
    Rc_String instance  = malloc (sizeof(__h_Rc_String_class_t));
    // ----------
    (*instance ) = ((__h_Rc_String_class_t){ get_Rc_String__H_Table (), __h___t , .__h_data._ = { pointer , authority , count , destructor }});
    return instance ;
  }
}
Maybe_String deref_Rc_String (Rc_String rc ) {
  return ({ /* cicili#Let4987 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block4989 */
      ({ /* cicili#Let4991 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? ((((((size_t)rc ) ==  authority  ) &&  ((*count ) >=  1 ) )) ? Just_String (pointer ) : Nothing_String ()) : ({ /* cicili#Let4998 */
            // ----------
            /* cicili#Block5000 */
            Nothing_String ();
          }));
      });
    });
}
Rc_String clone_Rc_String (Rc_String rc ) {
  return ({ /* cicili#Let5009 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block5011 */
      ({ /* cicili#Let5013 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? (((((size_t)rc ) ==  authority  )) ? ({ /* cicili#Progn5016 */
              (++(*count ));
              ({ /* cicili#Let5018 */
                __auto_type cloned_rc  = Keep_Rc_String (pointer , 0, count , destructor );
                // ----------
                (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
                { /* cicili#Let5023 */
                  __auto_type authority  = (((cloned_rc -> __h_data ). _ ). __h_1_mem );
                  __auto_type count  = (((cloned_rc -> __h_data ). _ ). __h_2_mem );
                  // ----------
                  /* cicili#Block5025 */
                  ({ /* cicili#Let5027 */
                    bool __h_case_result  = ((cloned_rc -> __h_ctor ) ==  __h___t  );
                    // ----------
                    if (__h_case_result )
                      printf ("inside Clone rc: %p, %zx, %d\n", cloned_rc , authority , (*count ));
                  });
                }
                cloned_rc ;
              });
            }) : rc ) : ({ /* cicili#Let5032 */
            // ----------
            /* cicili#Block5034 */
            rc ;
          }));
      });
    });
}
Rc_String new_Rc_String_Pure (String pointer ) {
  return ({ /* cicili#Let5040 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      // ----------
      (*count ) = 1;
      ({ /* cicili#Let5042 */
        __auto_type cloned_rc  = Keep_Rc_String (pointer , 0, count , free_String );
        // ----------
        (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
        { /* cicili#Let5048 */
          __auto_type authority  = (((cloned_rc -> __h_data ). _ ). __h_1_mem );
          __auto_type count  = (((cloned_rc -> __h_data ). _ ). __h_2_mem );
          // ----------
          /* cicili#Block5050 */
          ({ /* cicili#Let5052 */
            bool __h_case_result  = ((cloned_rc -> __h_ctor ) ==  __h___t  );
            // ----------
            if (__h_case_result )
              printf ("inside Ctor rc: %p, %zx, %d\n", cloned_rc , authority , (*count ));
          });
        }
        cloned_rc ;
      });
    });
}
Bool foldr_Bool (Bool (*folder) (Bool lhs , Bool rhs ), Bool neutral , List_Bool foldable ) {
  return ({ /* cicili#Let5061 */
      __auto_type head  = (((foldable -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((foldable -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block5063 */
      ({ /* cicili#Let5065 */
        bool __h_case_result  = ((foldable -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? foldr_Bool (folder , folder (neutral , head ), tail ) : ({ /* cicili#Let5070 */
            // ----------
            /* cicili#Block5072 */
            neutral ;
          }));
      });
    });
}
int foldr_int (int (*folder) (int lhs , int rhs ), int neutral , List_int foldable ) {
  return ({ /* cicili#Let5082 */
      __auto_type head  = (((foldable -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((foldable -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block5084 */
      ({ /* cicili#Let5086 */
        bool __h_case_result  = ((foldable -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? foldr_int (folder , folder (neutral , head ), tail ) : ({ /* cicili#Let5091 */
            // ----------
            /* cicili#Block5093 */
            neutral ;
          }));
      });
    });
}
char foldr_char (char (*folder) (char lhs , char rhs ), char neutral , List_char foldable ) {
  return ({ /* cicili#Let5103 */
      __auto_type head  = (((foldable -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((foldable -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block5105 */
      ({ /* cicili#Let5107 */
        bool __h_case_result  = ((foldable -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? foldr_char (folder , folder (neutral , head ), tail ) : ({ /* cicili#Let5112 */
            // ----------
            /* cicili#Block5114 */
            neutral ;
          }));
      });
    });
}
void free_Monoid_All_Bool (Monoid_All_Bool * this ) {
}
const Monoid_All_Bool__H_Table * const get_Monoid_All_Bool__H_Table () {
  static const Monoid_All_Bool__H_Table table  = { free_Monoid_All_Bool };
  return (&table );
}
Monoid_All_Bool Monoid_All_Bool_ctor (Monoid_All_Bool_mappend_t mappend , Bool mempty , Monoid_All_Bool_mconcat_t mconcat ) {
  return ((Monoid_All_Bool){ get_Monoid_All_Bool__H_Table (), __h___t , .__h_data._ = { mappend , mempty , mconcat }});
}
void free_Semigroup_All_Bool (Semigroup_All_Bool * this ) {
}
const Semigroup_All_Bool__H_Table * const get_Semigroup_All_Bool__H_Table () {
  static const Semigroup_All_Bool__H_Table table  = { free_Semigroup_All_Bool };
  return (&table );
}
Semigroup_All_Bool Semigroup_All_Bool_ctor (Monoid_All_Bool_mappend_t mappend ) {
  return ((Semigroup_All_Bool){ get_Semigroup_All_Bool__H_Table (), __h___t , .__h_data._ = { mappend }});
}
Bool mempty_All_Bool () {
  return True ();
}
Bool mappend_All_Bool (Bool lhs , Bool rhs ) {
  return and_Bool (lhs , rhs );
}
Bool mconcat_All_Bool (List_Bool list ) {
  return foldr_Bool (mappend_All_Bool , True (), list );
}
Monoid_All_Bool get_Monoid_All_Bool () {
  return Monoid_All_Bool_ctor (mappend_All_Bool , True (), mconcat_All_Bool );
}
Semigroup_All_Bool get_Semigroup_All_Bool () {
  return Semigroup_All_Bool_ctor (mappend_All_Bool );
}
void free_Monoid_Any_Bool (Monoid_Any_Bool * this ) {
}
const Monoid_Any_Bool__H_Table * const get_Monoid_Any_Bool__H_Table () {
  static const Monoid_Any_Bool__H_Table table  = { free_Monoid_Any_Bool };
  return (&table );
}
Monoid_Any_Bool Monoid_Any_Bool_ctor (Monoid_Any_Bool_mappend_t mappend , Bool mempty , Monoid_Any_Bool_mconcat_t mconcat ) {
  return ((Monoid_Any_Bool){ get_Monoid_Any_Bool__H_Table (), __h___t , .__h_data._ = { mappend , mempty , mconcat }});
}
void free_Semigroup_Any_Bool (Semigroup_Any_Bool * this ) {
}
const Semigroup_Any_Bool__H_Table * const get_Semigroup_Any_Bool__H_Table () {
  static const Semigroup_Any_Bool__H_Table table  = { free_Semigroup_Any_Bool };
  return (&table );
}
Semigroup_Any_Bool Semigroup_Any_Bool_ctor (Monoid_Any_Bool_mappend_t mappend ) {
  return ((Semigroup_Any_Bool){ get_Semigroup_Any_Bool__H_Table (), __h___t , .__h_data._ = { mappend }});
}
Bool mempty_Any_Bool () {
  return False ();
}
Bool mappend_Any_Bool (Bool lhs , Bool rhs ) {
  return or_Bool (lhs , rhs );
}
Bool mconcat_Any_Bool (List_Bool list ) {
  return foldr_Bool (mappend_Any_Bool , False (), list );
}
Monoid_Any_Bool get_Monoid_Any_Bool () {
  return Monoid_Any_Bool_ctor (mappend_Any_Bool , False (), mconcat_Any_Bool );
}
Semigroup_Any_Bool get_Semigroup_Any_Bool () {
  return Semigroup_Any_Bool_ctor (mappend_Any_Bool );
}
void free_Monoid_Sum_int (Monoid_Sum_int * this ) {
}
const Monoid_Sum_int__H_Table * const get_Monoid_Sum_int__H_Table () {
  static const Monoid_Sum_int__H_Table table  = { free_Monoid_Sum_int };
  return (&table );
}
Monoid_Sum_int Monoid_Sum_int_ctor (Monoid_Sum_int_mappend_t mappend , int mempty , Monoid_Sum_int_mconcat_t mconcat ) {
  return ((Monoid_Sum_int){ get_Monoid_Sum_int__H_Table (), __h___t , .__h_data._ = { mappend , mempty , mconcat }});
}
void free_Semigroup_Sum_int (Semigroup_Sum_int * this ) {
}
const Semigroup_Sum_int__H_Table * const get_Semigroup_Sum_int__H_Table () {
  static const Semigroup_Sum_int__H_Table table  = { free_Semigroup_Sum_int };
  return (&table );
}
Semigroup_Sum_int Semigroup_Sum_int_ctor (Monoid_Sum_int_mappend_t mappend ) {
  return ((Semigroup_Sum_int){ get_Semigroup_Sum_int__H_Table (), __h___t , .__h_data._ = { mappend }});
}
int mempty_Sum_int () {
  return 0;
}
int mappend_Sum_int (int lhs , int rhs ) {
  return (lhs  +  rhs  );
}
int mconcat_Sum_int (List_int list ) {
  return foldr_int (mappend_Sum_int , 0, list );
}
Monoid_Sum_int get_Monoid_Sum_int () {
  return Monoid_Sum_int_ctor (mappend_Sum_int , 0, mconcat_Sum_int );
}
Semigroup_Sum_int get_Semigroup_Sum_int () {
  return Semigroup_Sum_int_ctor (mappend_Sum_int );
}
void free_Monoid_Product_int (Monoid_Product_int * this ) {
}
const Monoid_Product_int__H_Table * const get_Monoid_Product_int__H_Table () {
  static const Monoid_Product_int__H_Table table  = { free_Monoid_Product_int };
  return (&table );
}
Monoid_Product_int Monoid_Product_int_ctor (Monoid_Product_int_mappend_t mappend , int mempty , Monoid_Product_int_mconcat_t mconcat ) {
  return ((Monoid_Product_int){ get_Monoid_Product_int__H_Table (), __h___t , .__h_data._ = { mappend , mempty , mconcat }});
}
void free_Semigroup_Product_int (Semigroup_Product_int * this ) {
}
const Semigroup_Product_int__H_Table * const get_Semigroup_Product_int__H_Table () {
  static const Semigroup_Product_int__H_Table table  = { free_Semigroup_Product_int };
  return (&table );
}
Semigroup_Product_int Semigroup_Product_int_ctor (Monoid_Product_int_mappend_t mappend ) {
  return ((Semigroup_Product_int){ get_Semigroup_Product_int__H_Table (), __h___t , .__h_data._ = { mappend }});
}
int mempty_Product_int () {
  return 1;
}
int mappend_Product_int (int lhs , int rhs ) {
  return (lhs  *  rhs  );
}
int mconcat_Product_int (List_int list ) {
  return foldr_int (mappend_Product_int , 1, list );
}
Monoid_Product_int get_Monoid_Product_int () {
  return Monoid_Product_int_ctor (mappend_Product_int , 1, mconcat_Product_int );
}
Semigroup_Product_int get_Semigroup_Product_int () {
  return Semigroup_Product_int_ctor (mappend_Product_int );
}
List_Bool foldr_List_Bool (List_Bool (*folder) (List_Bool lhs , List_Bool rhs ), List_Bool neutral , List_List_Bool foldable ) {
  return ({ /* cicili#Let5333 */
      __auto_type head  = (((foldable -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((foldable -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block5335 */
      ({ /* cicili#Let5337 */
        bool __h_case_result  = ((foldable -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? foldr_List_Bool (folder , folder (neutral , head ), tail ) : ({ /* cicili#Let5342 */
            // ----------
            /* cicili#Block5344 */
            neutral ;
          }));
      });
    });
}
List_int foldr_List_int (List_int (*folder) (List_int lhs , List_int rhs ), List_int neutral , List_List_int foldable ) {
  return ({ /* cicili#Let5359 */
      __auto_type head  = (((foldable -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((foldable -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block5361 */
      ({ /* cicili#Let5363 */
        bool __h_case_result  = ((foldable -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? foldr_List_int (folder , folder (neutral , head ), tail ) : ({ /* cicili#Let5368 */
            // ----------
            /* cicili#Block5370 */
            neutral ;
          }));
      });
    });
}
List_char foldr_List_char (List_char (*folder) (List_char lhs , List_char rhs ), List_char neutral , List_List_char foldable ) {
  return ({ /* cicili#Let5385 */
      __auto_type head  = (((foldable -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((foldable -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block5387 */
      ({ /* cicili#Let5389 */
        bool __h_case_result  = ((foldable -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? foldr_List_char (folder , folder (neutral , head ), tail ) : ({ /* cicili#Let5394 */
            // ----------
            /* cicili#Block5396 */
            neutral ;
          }));
      });
    });
}
void free_Monoid_List_Bool (Monoid_List_Bool * this ) {
}
const Monoid_List_Bool__H_Table * const get_Monoid_List_Bool__H_Table () {
  static const Monoid_List_Bool__H_Table table  = { free_Monoid_List_Bool };
  return (&table );
}
Monoid_List_Bool Monoid_List_Bool_ctor (Monoid_List_Bool_mappend_t mappend , List_Bool mempty , Monoid_List_Bool_mconcat_t mconcat ) {
  return ((Monoid_List_Bool){ get_Monoid_List_Bool__H_Table (), __h___t , .__h_data._ = { mappend , mempty , mconcat }});
}
void free_Semigroup_List_Bool (Semigroup_List_Bool * this ) {
}
const Semigroup_List_Bool__H_Table * const get_Semigroup_List_Bool__H_Table () {
  static const Semigroup_List_Bool__H_Table table  = { free_Semigroup_List_Bool };
  return (&table );
}
Semigroup_List_Bool Semigroup_List_Bool_ctor (Monoid_List_Bool_mappend_t mappend ) {
  return ((Semigroup_List_Bool){ get_Semigroup_List_Bool__H_Table (), __h___t , .__h_data._ = { mappend }});
}
List_Bool mempty_List_Bool () {
  return Empty_Bool ();
}
List_Bool mappend_List_Bool (List_Bool lhs , List_Bool rhs ) {
  return append_List_Bool (lhs , rhs );
}
List_Bool mconcat_List_Bool (List_List_Bool list ) {
  return foldr_List_Bool (mappend_List_Bool , Empty_Bool (), list );
}
Monoid_List_Bool get_Monoid_List_Bool () {
  return Monoid_List_Bool_ctor (mappend_List_Bool , Empty_Bool (), mconcat_List_Bool );
}
Semigroup_List_Bool get_Semigroup_List_Bool () {
  return Semigroup_List_Bool_ctor (mappend_List_Bool );
}
void free_Monoid_List_int (Monoid_List_int * this ) {
}
const Monoid_List_int__H_Table * const get_Monoid_List_int__H_Table () {
  static const Monoid_List_int__H_Table table  = { free_Monoid_List_int };
  return (&table );
}
Monoid_List_int Monoid_List_int_ctor (Monoid_List_int_mappend_t mappend , List_int mempty , Monoid_List_int_mconcat_t mconcat ) {
  return ((Monoid_List_int){ get_Monoid_List_int__H_Table (), __h___t , .__h_data._ = { mappend , mempty , mconcat }});
}
void free_Semigroup_List_int (Semigroup_List_int * this ) {
}
const Semigroup_List_int__H_Table * const get_Semigroup_List_int__H_Table () {
  static const Semigroup_List_int__H_Table table  = { free_Semigroup_List_int };
  return (&table );
}
Semigroup_List_int Semigroup_List_int_ctor (Monoid_List_int_mappend_t mappend ) {
  return ((Semigroup_List_int){ get_Semigroup_List_int__H_Table (), __h___t , .__h_data._ = { mappend }});
}
List_int mempty_List_int () {
  return Empty_int ();
}
List_int mappend_List_int (List_int lhs , List_int rhs ) {
  return append_List_int (lhs , rhs );
}
List_int mconcat_List_int (List_List_int list ) {
  return foldr_List_int (mappend_List_int , Empty_int (), list );
}
Monoid_List_int get_Monoid_List_int () {
  return Monoid_List_int_ctor (mappend_List_int , Empty_int (), mconcat_List_int );
}
Semigroup_List_int get_Semigroup_List_int () {
  return Semigroup_List_int_ctor (mappend_List_int );
}
void free_Monoid_List_char (Monoid_List_char * this ) {
}
const Monoid_List_char__H_Table * const get_Monoid_List_char__H_Table () {
  static const Monoid_List_char__H_Table table  = { free_Monoid_List_char };
  return (&table );
}
Monoid_List_char Monoid_List_char_ctor (Monoid_List_char_mappend_t mappend , List_char mempty , Monoid_List_char_mconcat_t mconcat ) {
  return ((Monoid_List_char){ get_Monoid_List_char__H_Table (), __h___t , .__h_data._ = { mappend , mempty , mconcat }});
}
void free_Semigroup_List_char (Semigroup_List_char * this ) {
}
const Semigroup_List_char__H_Table * const get_Semigroup_List_char__H_Table () {
  static const Semigroup_List_char__H_Table table  = { free_Semigroup_List_char };
  return (&table );
}
Semigroup_List_char Semigroup_List_char_ctor (Monoid_List_char_mappend_t mappend ) {
  return ((Semigroup_List_char){ get_Semigroup_List_char__H_Table (), __h___t , .__h_data._ = { mappend }});
}
List_char mempty_List_char () {
  return Empty_char ();
}
List_char mappend_List_char (List_char lhs , List_char rhs ) {
  return append_List_char (lhs , rhs );
}
List_char mconcat_List_char (List_List_char list ) {
  return foldr_List_char (mappend_List_char , Empty_char (), list );
}
Monoid_List_char get_Monoid_List_char () {
  return Monoid_List_char_ctor (mappend_List_char , Empty_char (), mconcat_List_char );
}
Semigroup_List_char get_Semigroup_List_char () {
  return Semigroup_List_char_ctor (mappend_List_char );
}
void free_Monoid_String_char (Monoid_String_char * this ) {
}
const Monoid_String_char__H_Table * const get_Monoid_String_char__H_Table () {
  static const Monoid_String_char__H_Table table  = { free_Monoid_String_char };
  return (&table );
}
Monoid_String_char Monoid_String_char_ctor (Monoid_String_char_mappend_t mappend , List_char mempty , Monoid_String_char_mconcat_t mconcat ) {
  return ((Monoid_String_char){ get_Monoid_String_char__H_Table (), __h___t , .__h_data._ = { mappend , mempty , mconcat }});
}
void free_Semigroup_String_char (Semigroup_String_char * this ) {
}
const Semigroup_String_char__H_Table * const get_Semigroup_String_char__H_Table () {
  static const Semigroup_String_char__H_Table table  = { free_Semigroup_String_char };
  return (&table );
}
Semigroup_String_char Semigroup_String_char_ctor (Monoid_String_char_mappend_t mappend ) {
  return ((Semigroup_String_char){ get_Semigroup_String_char__H_Table (), __h___t , .__h_data._ = { mappend }});
}
List_char mempty_String_char () {
  return Empty_char ();
}
List_char mappend_String_char (List_char lhs , List_char rhs ) {
  return append_List_char (lhs , rhs );
}
List_char mconcat_String_char (List_List_char list ) {
  return foldr_List_char (mappend_String_char , Empty_char (), list );
}
Monoid_String_char get_Monoid_String_char () {
  return Monoid_String_char_ctor (mappend_String_char , Empty_char (), mconcat_String_char );
}
Semigroup_String_char get_Semigroup_String_char () {
  return Semigroup_String_char_ctor (mappend_String_char );
}
List_int fmap_Functor_List_int_int (Functor_List_int_int_a_b_t a_b , List_int input ) {
  return ({ /* cicili#Let5667 */
      __auto_type head  = (((input -> __h_data ). _ ). __h_0_mem );
      __auto_type tail  = (((input -> __h_data ). _ ). __h_1_mem );
      // ----------
      /* cicili#Block5669 */
      ({ /* cicili#Let5671 */
        bool __h_case_result  = ((input -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? Cons_int (a_b (head ), fmap_Functor_List_int_int (a_b , tail )) : ({ /* cicili#Let5678 */
            // ----------
            /* cicili#Block5680 */
            Empty_int ();
          }));
      });
    });
}
void free_Functor_List_int_int (Functor_List_int_int * this ) {
}
const Functor_List_int_int__H_Table * const get_Functor_List_int_int__H_Table () {
  static const Functor_List_int_int__H_Table table  = { free_Functor_List_int_int , fmap_Functor_List_int_int };
  return (&table );
}
Functor_List_int_int Functor_List_int_int_ctor () {
  return ((Functor_List_int_int){ get_Functor_List_int_int__H_Table (), __h___t });
}
Functor_List_int_int get_Functor_List_int_int () {
  return Functor_List_int_int_ctor ();
}
List_Bool fmap_Functor_List_int_Bool (Functor_List_int_Bool_a_b_t a_b , List_int input ) {
  return ({ /* cicili#Let5710 */
      __auto_type head  = (((input -> __h_data ). _ ). __h_0_mem );
      __auto_type tail  = (((input -> __h_data ). _ ). __h_1_mem );
      // ----------
      /* cicili#Block5712 */
      ({ /* cicili#Let5714 */
        bool __h_case_result  = ((input -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? Cons_Bool (a_b (head ), fmap_Functor_List_int_Bool (a_b , tail )) : ({ /* cicili#Let5721 */
            // ----------
            /* cicili#Block5723 */
            Empty_Bool ();
          }));
      });
    });
}
void free_Functor_List_int_Bool (Functor_List_int_Bool * this ) {
}
const Functor_List_int_Bool__H_Table * const get_Functor_List_int_Bool__H_Table () {
  static const Functor_List_int_Bool__H_Table table  = { free_Functor_List_int_Bool , fmap_Functor_List_int_Bool };
  return (&table );
}
Functor_List_int_Bool Functor_List_int_Bool_ctor () {
  return ((Functor_List_int_Bool){ get_Functor_List_int_Bool__H_Table (), __h___t });
}
Functor_List_int_Bool get_Functor_List_int_Bool () {
  return Functor_List_int_Bool_ctor ();
}
List_char fmap_Functor_List_char_char (Functor_List_char_char_a_b_t a_b , List_char input ) {
  return ({ /* cicili#Let5753 */
      __auto_type head  = (((input -> __h_data ). _ ). __h_0_mem );
      __auto_type tail  = (((input -> __h_data ). _ ). __h_1_mem );
      // ----------
      /* cicili#Block5755 */
      ({ /* cicili#Let5757 */
        bool __h_case_result  = ((input -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? Cons_char (a_b (head ), fmap_Functor_List_char_char (a_b , tail )) : ({ /* cicili#Let5764 */
            // ----------
            /* cicili#Block5766 */
            Empty_char ();
          }));
      });
    });
}
void free_Functor_List_char_char (Functor_List_char_char * this ) {
}
const Functor_List_char_char__H_Table * const get_Functor_List_char_char__H_Table () {
  static const Functor_List_char_char__H_Table table  = { free_Functor_List_char_char , fmap_Functor_List_char_char };
  return (&table );
}
Functor_List_char_char Functor_List_char_char_ctor () {
  return ((Functor_List_char_char){ get_Functor_List_char_char__H_Table (), __h___t });
}
Functor_List_char_char get_Functor_List_char_char () {
  return Functor_List_char_char_ctor ();
}
List_Bool fmap_Functor_List_char_Bool (Functor_List_char_Bool_a_b_t a_b , List_char input ) {
  return ({ /* cicili#Let5796 */
      __auto_type head  = (((input -> __h_data ). _ ). __h_0_mem );
      __auto_type tail  = (((input -> __h_data ). _ ). __h_1_mem );
      // ----------
      /* cicili#Block5798 */
      ({ /* cicili#Let5800 */
        bool __h_case_result  = ((input -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? Cons_Bool (a_b (head ), fmap_Functor_List_char_Bool (a_b , tail )) : ({ /* cicili#Let5807 */
            // ----------
            /* cicili#Block5809 */
            Empty_Bool ();
          }));
      });
    });
}
void free_Functor_List_char_Bool (Functor_List_char_Bool * this ) {
}
const Functor_List_char_Bool__H_Table * const get_Functor_List_char_Bool__H_Table () {
  static const Functor_List_char_Bool__H_Table table  = { free_Functor_List_char_Bool , fmap_Functor_List_char_Bool };
  return (&table );
}
Functor_List_char_Bool Functor_List_char_Bool_ctor () {
  return ((Functor_List_char_Bool){ get_Functor_List_char_Bool__H_Table (), __h___t });
}
Functor_List_char_Bool get_Functor_List_char_Bool () {
  return Functor_List_char_Bool_ctor ();
}
List_char fmap_Functor_String_char (Functor_String_char_a_b_t a_b , List_char input ) {
  return ({ /* cicili#Let5839 */
      __auto_type head  = (((input -> __h_data ). _ ). __h_0_mem );
      __auto_type tail  = (((input -> __h_data ). _ ). __h_1_mem );
      // ----------
      /* cicili#Block5841 */
      ({ /* cicili#Let5843 */
        bool __h_case_result  = ((input -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? Cons_char (a_b (head ), fmap_Functor_String_char (a_b , tail )) : ({ /* cicili#Let5850 */
            // ----------
            /* cicili#Block5852 */
            Empty_char ();
          }));
      });
    });
}
void free_Functor_String_char (Functor_String_char * this ) {
}
const Functor_String_char__H_Table * const get_Functor_String_char__H_Table () {
  static const Functor_String_char__H_Table table  = { free_Functor_String_char , fmap_Functor_String_char };
  return (&table );
}
Functor_String_char Functor_String_char_ctor () {
  return ((Functor_String_char){ get_Functor_String_char__H_Table (), __h___t });
}
Functor_String_char get_Functor_String_char () {
  return Functor_String_char_ctor ();
}
List_Bool fmap_Functor_String_Bool (Functor_String_Bool_a_b_t a_b , List_char input ) {
  return ({ /* cicili#Let5882 */
      __auto_type head  = (((input -> __h_data ). _ ). __h_0_mem );
      __auto_type tail  = (((input -> __h_data ). _ ). __h_1_mem );
      // ----------
      /* cicili#Block5884 */
      ({ /* cicili#Let5886 */
        bool __h_case_result  = ((input -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? Cons_Bool (a_b (head ), fmap_Functor_String_Bool (a_b , tail )) : ({ /* cicili#Let5893 */
            // ----------
            /* cicili#Block5895 */
            Empty_Bool ();
          }));
      });
    });
}
void free_Functor_String_Bool (Functor_String_Bool * this ) {
}
const Functor_String_Bool__H_Table * const get_Functor_String_Bool__H_Table () {
  static const Functor_String_Bool__H_Table table  = { free_Functor_String_Bool , fmap_Functor_String_Bool };
  return (&table );
}
Functor_String_Bool Functor_String_Bool_ctor () {
  return ((Functor_String_Bool){ get_Functor_String_Bool__H_Table (), __h___t });
}
Functor_String_Bool get_Functor_String_Bool () {
  return Functor_String_Bool_ctor ();
}
