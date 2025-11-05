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
#ifndef __Bool__H_IMPL__
#define __Bool__H_IMPL__
void show_Bool (Bool value ) {
  { /* cicili#Let2153 */
    // ----------
    /* cicili#Block2155 */
    ({ /* cicili#Let2157 */
      bool __h_case_result  = ((value . __h_ctor ) ==  __h_False_t  );
      // ----------
      if (__h_case_result )
        printf ("%s", "False");
      else
        { /* cicili#Let2163 */
          // ----------
          /* cicili#Block2165 */
          printf ("%s", "True");
        }
    });
  }
}
Bool or_Bool (Bool lhs , Bool rhs ) {
  return ({ /* cicili#Let2171 */
      // ----------
      /* cicili#Block2173 */
      ({ /* cicili#Let2175 */
        bool __h_case_result  = ((lhs . __h_ctor ) ==  __h_True_t  );
        // ----------
        ((__h_case_result ) ? True () : ({ /* cicili#Let2179 */
            // ----------
            /* cicili#Block2181 */
            ({ /* cicili#Let2185 */
              // ----------
              /* cicili#Block2187 */
              ({ /* cicili#Let2189 */
                bool __h_case_result  = ((rhs . __h_ctor ) ==  __h_True_t  );
                // ----------
                ((__h_case_result ) ? True () : ({ /* cicili#Let2193 */
                    // ----------
                    /* cicili#Block2195 */
                    False ();
                  }));
              });
            });
          }));
      });
    });
}
Bool and_Bool (Bool lhs , Bool rhs ) {
  return ({ /* cicili#Let2201 */
      // ----------
      /* cicili#Block2203 */
      ({ /* cicili#Let2205 */
        bool __h_case_result  = ((lhs . __h_ctor ) ==  __h_False_t  );
        // ----------
        ((__h_case_result ) ? False () : ({ /* cicili#Let2209 */
            // ----------
            /* cicili#Block2211 */
            ({ /* cicili#Let2215 */
              // ----------
              /* cicili#Block2217 */
              ({ /* cicili#Let2219 */
                bool __h_case_result  = ((rhs . __h_ctor ) ==  __h_False_t  );
                // ----------
                ((__h_case_result ) ? False () : ({ /* cicili#Let2223 */
                    // ----------
                    /* cicili#Block2225 */
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
#endif /* __Bool__H_IMPL__ */ 
#ifndef __Ordering__H_IMPL__
#define __Ordering__H_IMPL__
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
#endif /* __Ordering__H_IMPL__ */ 
#ifndef __Maybe_Bool__H_IMPL__
#define __Maybe_Bool__H_IMPL__
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
#endif /* __Maybe_Bool__H_IMPL__ */ 
#ifndef __List_Bool__H_IMPL__
#define __List_Bool__H_IMPL__
void show_List_Bool (List_Bool list ) {
  { /* cicili#Let2278 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2280 */
    ({ /* cicili#Let2282 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block2285 */
          { /* cicili#Let2289 */
            // ----------
            /* cicili#Block2291 */
            ({ /* cicili#Let2293 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block2296 */
                  printf ("%s", ({ /* cicili#Let2303 */
                      // ----------
                      /* cicili#Block2305 */
                      ({ /* cicili#Let2307 */
                        bool __h_case_result  = ((head . __h_ctor ) ==  __h_True_t  );
                        // ----------
                        ((__h_case_result ) ? "True" : ({ /* cicili#Let2311 */
                            // ----------
                            /* cicili#Block2313 */
                            "False";
                          }));
                      });
                    }));
                  putchar (' ');
                }
              else
                { /* cicili#Let2318 */
                  // ----------
                  /* cicili#Block2320 */
                  printf ("%s", ({ /* cicili#Let2327 */
                      // ----------
                      /* cicili#Block2329 */
                      ({ /* cicili#Let2331 */
                        bool __h_case_result  = ((head . __h_ctor ) ==  __h_True_t  );
                        // ----------
                        ((__h_case_result ) ? "True" : ({ /* cicili#Let2335 */
                            // ----------
                            /* cicili#Block2337 */
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
  return ({ /* cicili#Let2343 */
      __auto_type last  = (llist -> __h_table -> last )(llist );
      // ----------
      ({ /* cicili#Let2348 */
        __auto_type tail  = (((last -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block2350 */
        ({ /* cicili#Let2352 */
          bool __h_case_result  = ((last -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn2354 */
              free_List_Bool ((&tail ));
              (((last -> __h_data ). Cons ). __h_1_mem ) = rlist ;
              llist ;
            }) : ({ /* cicili#Let2359 */
              // ----------
              /* cicili#Block2361 */
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
  return ({ /* cicili#Let2370 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2372 */
      ({ /* cicili#Let2374 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let2378 */
            // ----------
            /* cicili#Block2380 */
            ({ /* cicili#Let2382 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Empty_t  );
              // ----------
              ((__h_case_result ) ? list  : ({ /* cicili#Let2386 */
                  // ----------
                  /* cicili#Block2388 */
                  (list -> __h_table -> last )(tail );
                }));
            });
          }) : ({ /* cicili#Let2393 */
            // ----------
            /* cicili#Block2395 */
            list ;
          }));
      });
    });
}
List_Bool take_List_Bool (int len , List_Bool list ) {
  return ({ /* cicili#Let2401 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2403 */
      ({ /* cicili#Let2405 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? (list -> __h_table -> push )(head , (list -> __h_table -> take )((--len ), tail )) : ({ /* cicili#Let2411 */
            // ----------
            /* cicili#Block2413 */
            Empty_Bool ();
          }));
      });
    });
}
int hasLen_List_Bool (List_Bool list , int desired ) {
  return ({ /* cicili#Let2420 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2422 */
      ({ /* cicili#Let2424 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  (list -> __h_table -> hasLen )(tail , (--desired )) )) : ({ /* cicili#Let2430 */
            // ----------
            /* cicili#Block2432 */
            0;
          }));
      });
    });
}
int len_List_Bool (List_Bool list ) {
  return ({ /* cicili#Let2438 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2440 */
      ({ /* cicili#Let2442 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (1 +  (list -> __h_table -> len )(tail ) ) : ({ /* cicili#Let2447 */
            // ----------
            /* cicili#Block2449 */
            0;
          }));
      });
    });
}
List_Bool tail_List_Bool (List_Bool list ) {
  return (list -> __h_table -> drop )(0, list );
}
List_Bool drop_List_Bool (int index , List_Bool list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let2459 */
        __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block2461 */
        ({ /* cicili#Let2463 */
          bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? (list -> __h_table -> drop )((--index ), tail ) : ({ /* cicili#Let2468 */
              // ----------
              /* cicili#Block2470 */
              Empty_Bool ();
            }));
        });
      }));
}
Maybe_Bool head_List_Bool (List_Bool list ) {
  return (list -> __h_table -> nth )(0, list );
}
Maybe_Bool nth_List_Bool (int index , List_Bool list ) {
  return ({ /* cicili#Let2482 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2484 */
      ({ /* cicili#Let2486 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((index  ==  0 )) ? Just_Bool (head ) : (list -> __h_table -> nth )((--index ), tail )) : ({ /* cicili#Let2493 */
            // ----------
            /* cicili#Block2495 */
            Nothing_Bool ();
          }));
      });
    });
}
List_Bool next_List_Bool (List_Bool list ) {
  return ({ /* cicili#Let2502 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2504 */
      ({ /* cicili#Let2506 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? tail  : ({ /* cicili#Let2510 */
            // ----------
            /* cicili#Block2512 */
            Empty_Bool ();
          }));
      });
    });
}
void free_List_Bool (List_Bool * this_ptr ) {
  { /* cicili#Let2517 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let2521 */
      __auto_type head  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2523 */
      ({ /* cicili#Let2525 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block2528 */
            printf ("destructuring List: %p, ", this );
            printf ("%s", ({ /* cicili#Let2535 */
                // ----------
                /* cicili#Block2537 */
                ({ /* cicili#Let2539 */
                  bool __h_case_result  = ((head . __h_ctor ) ==  __h_True_t  );
                  // ----------
                  ((__h_case_result ) ? "True" : ({ /* cicili#Let2543 */
                      // ----------
                      /* cicili#Block2545 */
                      "False";
                    }));
                });
              }));
            putchar ('\n');
            free_List_Bool ((&tail ));
            free (this );
          }
        else
          { /* cicili#Let2551 */
            // ----------
            /* cicili#Block2553 */
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
  { /* cicili#Let2562 */
    List_Bool instance  = malloc (sizeof(__h_List_Bool_class_t));
    // ----------
    (*instance ) = ((__h_List_Bool_class_t){ get_List_Bool__H_Table (), __h_Empty_t });
    return instance ;
  }
}
List_Bool Cons_Bool (Bool head , List_Bool tail ) {
  { /* cicili#Let2567 */
    List_Bool instance  = malloc (sizeof(__h_List_Bool_class_t));
    // ----------
    (*instance ) = ((__h_List_Bool_class_t){ get_List_Bool__H_Table (), __h___t , .__h_data._ = { head , tail }});
    return instance ;
  }
}
#endif /* __List_Bool__H_IMPL__ */ 
List_Bool new_List_Bool_Pure (const Bool * buf , int len ) {
  if (buf  ==  NULL  )
    return Empty_Bool ();
  else
    { /* cicili#Let2576 */
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
#ifndef __Maybe_int__H_IMPL__
#define __Maybe_int__H_IMPL__
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
#endif /* __Maybe_int__H_IMPL__ */ 
#ifndef __List_int__H_IMPL__
#define __List_int__H_IMPL__
void show_List_int (List_int list ) {
  { /* cicili#Let2612 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2614 */
    ({ /* cicili#Let2616 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block2619 */
          { /* cicili#Let2623 */
            // ----------
            /* cicili#Block2625 */
            ({ /* cicili#Let2627 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block2630 */
                  printf ("%d", head );
                  putchar (' ');
                }
              else
                { /* cicili#Let2638 */
                  // ----------
                  /* cicili#Block2640 */
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
  return ({ /* cicili#Let2649 */
      __auto_type last  = (llist -> __h_table -> last )(llist );
      // ----------
      ({ /* cicili#Let2654 */
        __auto_type tail  = (((last -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block2656 */
        ({ /* cicili#Let2658 */
          bool __h_case_result  = ((last -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn2660 */
              free_List_int ((&tail ));
              (((last -> __h_data ). Cons ). __h_1_mem ) = rlist ;
              llist ;
            }) : ({ /* cicili#Let2665 */
              // ----------
              /* cicili#Block2667 */
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
  return ({ /* cicili#Let2676 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2678 */
      ({ /* cicili#Let2680 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let2684 */
            // ----------
            /* cicili#Block2686 */
            ({ /* cicili#Let2688 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Empty_t  );
              // ----------
              ((__h_case_result ) ? list  : ({ /* cicili#Let2692 */
                  // ----------
                  /* cicili#Block2694 */
                  (list -> __h_table -> last )(tail );
                }));
            });
          }) : ({ /* cicili#Let2699 */
            // ----------
            /* cicili#Block2701 */
            list ;
          }));
      });
    });
}
List_int take_List_int (int len , List_int list ) {
  return ({ /* cicili#Let2707 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2709 */
      ({ /* cicili#Let2711 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? (list -> __h_table -> push )(head , (list -> __h_table -> take )((--len ), tail )) : ({ /* cicili#Let2717 */
            // ----------
            /* cicili#Block2719 */
            Empty_int ();
          }));
      });
    });
}
int hasLen_List_int (List_int list , int desired ) {
  return ({ /* cicili#Let2726 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2728 */
      ({ /* cicili#Let2730 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  (list -> __h_table -> hasLen )(tail , (--desired )) )) : ({ /* cicili#Let2736 */
            // ----------
            /* cicili#Block2738 */
            0;
          }));
      });
    });
}
int len_List_int (List_int list ) {
  return ({ /* cicili#Let2744 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2746 */
      ({ /* cicili#Let2748 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (1 +  (list -> __h_table -> len )(tail ) ) : ({ /* cicili#Let2753 */
            // ----------
            /* cicili#Block2755 */
            0;
          }));
      });
    });
}
List_int tail_List_int (List_int list ) {
  return (list -> __h_table -> drop )(0, list );
}
List_int drop_List_int (int index , List_int list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let2765 */
        __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block2767 */
        ({ /* cicili#Let2769 */
          bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? (list -> __h_table -> drop )((--index ), tail ) : ({ /* cicili#Let2774 */
              // ----------
              /* cicili#Block2776 */
              Empty_int ();
            }));
        });
      }));
}
Maybe_int head_List_int (List_int list ) {
  return (list -> __h_table -> nth )(0, list );
}
Maybe_int nth_List_int (int index , List_int list ) {
  return ({ /* cicili#Let2788 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2790 */
      ({ /* cicili#Let2792 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((index  ==  0 )) ? Just_int (head ) : (list -> __h_table -> nth )((--index ), tail )) : ({ /* cicili#Let2799 */
            // ----------
            /* cicili#Block2801 */
            Nothing_int ();
          }));
      });
    });
}
List_int next_List_int (List_int list ) {
  return ({ /* cicili#Let2808 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2810 */
      ({ /* cicili#Let2812 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? tail  : ({ /* cicili#Let2816 */
            // ----------
            /* cicili#Block2818 */
            Empty_int ();
          }));
      });
    });
}
void free_List_int (List_int * this_ptr ) {
  { /* cicili#Let2823 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let2827 */
      __auto_type head  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2829 */
      ({ /* cicili#Let2831 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block2834 */
            printf ("destructuring List: %p, ", this );
            printf ("%d", head );
            putchar ('\n');
            free_List_int ((&tail ));
            free (this );
          }
        else
          { /* cicili#Let2843 */
            // ----------
            /* cicili#Block2845 */
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
  { /* cicili#Let2854 */
    List_int instance  = malloc (sizeof(__h_List_int_class_t));
    // ----------
    (*instance ) = ((__h_List_int_class_t){ get_List_int__H_Table (), __h_Empty_t });
    return instance ;
  }
}
List_int Cons_int (int head , List_int tail ) {
  { /* cicili#Let2859 */
    List_int instance  = malloc (sizeof(__h_List_int_class_t));
    // ----------
    (*instance ) = ((__h_List_int_class_t){ get_List_int__H_Table (), __h___t , .__h_data._ = { head , tail }});
    return instance ;
  }
}
#endif /* __List_int__H_IMPL__ */ 
List_int new_List_int_Pure (const int * buf , int len ) {
  if (buf  ==  NULL  )
    return Empty_int ();
  else
    { /* cicili#Let2868 */
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
#ifndef __Maybe_char__H_IMPL__
#define __Maybe_char__H_IMPL__
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
#endif /* __Maybe_char__H_IMPL__ */ 
#ifndef __List_char__H_IMPL__
#define __List_char__H_IMPL__
void show_List_char (List_char list ) {
  { /* cicili#Let2906 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2908 */
    ({ /* cicili#Let2910 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block2913 */
          { /* cicili#Let2917 */
            // ----------
            /* cicili#Block2919 */
            ({ /* cicili#Let2921 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block2924 */
                  printf ("%c", head );
                  putchar (' ');
                }
              else
                { /* cicili#Let2932 */
                  // ----------
                  /* cicili#Block2934 */
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
  return ({ /* cicili#Let2943 */
      __auto_type last  = (llist -> __h_table -> last )(llist );
      // ----------
      ({ /* cicili#Let2948 */
        __auto_type tail  = (((last -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block2950 */
        ({ /* cicili#Let2952 */
          bool __h_case_result  = ((last -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn2954 */
              free_List_char ((&tail ));
              (((last -> __h_data ). Cons ). __h_1_mem ) = rlist ;
              llist ;
            }) : ({ /* cicili#Let2959 */
              // ----------
              /* cicili#Block2961 */
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
  return ({ /* cicili#Let2970 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2972 */
      ({ /* cicili#Let2974 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let2978 */
            // ----------
            /* cicili#Block2980 */
            ({ /* cicili#Let2982 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Empty_t  );
              // ----------
              ((__h_case_result ) ? list  : ({ /* cicili#Let2986 */
                  // ----------
                  /* cicili#Block2988 */
                  (list -> __h_table -> last )(tail );
                }));
            });
          }) : ({ /* cicili#Let2993 */
            // ----------
            /* cicili#Block2995 */
            list ;
          }));
      });
    });
}
List_char take_List_char (int len , List_char list ) {
  return ({ /* cicili#Let3001 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3003 */
      ({ /* cicili#Let3005 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? (list -> __h_table -> push )(head , (list -> __h_table -> take )((--len ), tail )) : ({ /* cicili#Let3011 */
            // ----------
            /* cicili#Block3013 */
            Empty_char ();
          }));
      });
    });
}
int hasLen_List_char (List_char list , int desired ) {
  return ({ /* cicili#Let3020 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3022 */
      ({ /* cicili#Let3024 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  (list -> __h_table -> hasLen )(tail , (--desired )) )) : ({ /* cicili#Let3030 */
            // ----------
            /* cicili#Block3032 */
            0;
          }));
      });
    });
}
int len_List_char (List_char list ) {
  return ({ /* cicili#Let3038 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3040 */
      ({ /* cicili#Let3042 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (1 +  (list -> __h_table -> len )(tail ) ) : ({ /* cicili#Let3047 */
            // ----------
            /* cicili#Block3049 */
            0;
          }));
      });
    });
}
List_char tail_List_char (List_char list ) {
  return (list -> __h_table -> drop )(0, list );
}
List_char drop_List_char (int index , List_char list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let3059 */
        __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block3061 */
        ({ /* cicili#Let3063 */
          bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? (list -> __h_table -> drop )((--index ), tail ) : ({ /* cicili#Let3068 */
              // ----------
              /* cicili#Block3070 */
              Empty_char ();
            }));
        });
      }));
}
Maybe_char head_List_char (List_char list ) {
  return (list -> __h_table -> nth )(0, list );
}
Maybe_char nth_List_char (int index , List_char list ) {
  return ({ /* cicili#Let3082 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3084 */
      ({ /* cicili#Let3086 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((index  ==  0 )) ? Just_char (head ) : (list -> __h_table -> nth )((--index ), tail )) : ({ /* cicili#Let3093 */
            // ----------
            /* cicili#Block3095 */
            Nothing_char ();
          }));
      });
    });
}
List_char next_List_char (List_char list ) {
  return ({ /* cicili#Let3102 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3104 */
      ({ /* cicili#Let3106 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? tail  : ({ /* cicili#Let3110 */
            // ----------
            /* cicili#Block3112 */
            Empty_char ();
          }));
      });
    });
}
void free_List_char (List_char * this_ptr ) {
  { /* cicili#Let3117 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let3121 */
      __auto_type head  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3123 */
      ({ /* cicili#Let3125 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block3128 */
            printf ("destructuring List: %p, ", this );
            printf ("%c", head );
            putchar ('\n');
            free_List_char ((&tail ));
            free (this );
          }
        else
          { /* cicili#Let3137 */
            // ----------
            /* cicili#Block3139 */
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
  { /* cicili#Let3148 */
    List_char instance  = malloc (sizeof(__h_List_char_class_t));
    // ----------
    (*instance ) = ((__h_List_char_class_t){ get_List_char__H_Table (), __h_Empty_t });
    return instance ;
  }
}
List_char Cons_char (char head , List_char tail ) {
  { /* cicili#Let3153 */
    List_char instance  = malloc (sizeof(__h_List_char_class_t));
    // ----------
    (*instance ) = ((__h_List_char_class_t){ get_List_char__H_Table (), __h___t , .__h_data._ = { head , tail }});
    return instance ;
  }
}
#endif /* __List_char__H_IMPL__ */ 
List_char new_List_char_Pure (const char * buf , int len ) {
  if (buf  ==  NULL  )
    return Empty_char ();
  else
    { /* cicili#Let3162 */
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
    { /* cicili#Let3179 */
      char item  = (*buf );
      // ----------
      if (item  ==  '\0' )
        return Empty_char ();
      else
        return Cons_char (item , new_String_Const ((++buf )));
    }
}
void show_String (List_char list ) {
  { /* cicili#Let3190 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block3192 */
    ({ /* cicili#Let3194 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        ({ /* cicili#Progn3197 */
          printf ("%c", head );
          show_String (tail );
        });
    });
  }
}
#ifndef __Range_int__H_IMPL__
#define __Range_int__H_IMPL__
void show_Range_int (Range_int list ) {
  { /* cicili#Let3211 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block3213 */
    ({ /* cicili#Let3215 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Let3220 */
          // ----------
          /* cicili#Block3222 */
          ({ /* cicili#Let3224 */
            bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
            // ----------
            if (__h_case_result )
              { /* cicili#Block3227 */
                printf ("%d", head );
                putchar (' ');
                (list -> __h_table -> show )(tail );
              }
            else
              { /* cicili#Let3236 */
                // ----------
                /* cicili#Block3238 */
                printf ("%d", head );
              }
          });
        }
    });
  }
}
Range_int take_Range_int (int len , Range_int list ) {
  return ({ /* cicili#Let3247 */
      __auto_type from  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type to  = (((list -> __h_data ). Cons ). __h_2_mem );
      __auto_type step  = (((list -> __h_data ). Cons ). __h_3_mem );
      // ----------
      /* cicili#Block3249 */
      ({ /* cicili#Let3251 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let3253 */
            __auto_type ne  = (list -> __h_table -> next )(list );
            // ----------
            ({ /* cicili#Let3258 */
              // ----------
              /* cicili#Block3260 */
              ({ /* cicili#Let3262 */
                bool __h_case_result  = ((ne -> __h_ctor ) ==  __h_Cons_t  );
                // ----------
                ((__h_case_result ) ? Cons_Range_int (from , (list -> __h_table -> take )((--len ), ne ), to , step ) : ({ /* cicili#Let3268 */
                    // ----------
                    /* cicili#Block3270 */
                    Cons_Range_int (from , ne , to , step );
                  }));
              });
            });
          }) : ({ /* cicili#Let3275 */
            // ----------
            /* cicili#Block3277 */
            Empty_Range_int ();
          }));
      });
    });
}
Range_int next_Range_int (Range_int list ) {
  return ({ /* cicili#Let3284 */
      __auto_type from  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type to  = (((list -> __h_data ). Cons ). __h_2_mem );
      __auto_type step  = (((list -> __h_data ). Cons ). __h_3_mem );
      // ----------
      /* cicili#Block3286 */
      ({ /* cicili#Let3288 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((from  +  step  ) <=  to  ) );
        // ----------
        ((__h_case_result ) ? Cons_Range_int ((from  +  step  ), Empty_Range_int (), to , step ) : ({ /* cicili#Let3294 */
            // ----------
            /* cicili#Block3296 */
            Empty_Range_int ();
          }));
      });
    });
}
void free_Range_int (Range_int * this_ptr ) {
  { /* cicili#Let3301 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let3305 */
      __auto_type from  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      __auto_type to  = (((this -> __h_data ). Cons ). __h_2_mem );
      __auto_type step  = (((this -> __h_data ). Cons ). __h_3_mem );
      // ----------
      /* cicili#Block3307 */
      ({ /* cicili#Let3309 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block3312 */
            free_Range_int ((&tail ));
            free (this );
          }
        else
          { /* cicili#Let3318 */
            // ----------
            /* cicili#Block3320 */
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
  { /* cicili#Let3329 */
    Range_int instance  = malloc (sizeof(__h_Range_int_class_t));
    // ----------
    (*instance ) = ((__h_Range_int_class_t){ get_Range_int__H_Table (), __h_Empty_t });
    return instance ;
  }
}
Range_int Cons_Range_int (int from , Range_int tail , int to , int step ) {
  { /* cicili#Let3334 */
    Range_int instance  = malloc (sizeof(__h_Range_int_class_t));
    // ----------
    (*instance ) = ((__h_Range_int_class_t){ get_Range_int__H_Table (), __h___t , .__h_data._ = { from , tail , to , step }});
    return instance ;
  }
}
#endif /* __Range_int__H_IMPL__ */ 
Range_int new_Range_int (int from , int to , int step ) {
  return (((from  <=  to  )) ? Cons_Range_int (from , Empty_Range_int (), to , step ) : Empty_Range_int ());
}
#ifndef __Maybe_List_Bool__H_IMPL__
#define __Maybe_List_Bool__H_IMPL__
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
#endif /* __Maybe_List_Bool__H_IMPL__ */ 
#ifndef __List_List_Bool__H_IMPL__
#define __List_List_Bool__H_IMPL__
void show_List_List_Bool (List_List_Bool list ) {
  { /* cicili#Let3368 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block3370 */
    ({ /* cicili#Let3372 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block3375 */
          { /* cicili#Let3379 */
            // ----------
            /* cicili#Block3381 */
            ({ /* cicili#Let3383 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block3386 */
                  show_List_Bool (head );
                  putchar (' ');
                }
              else
                { /* cicili#Let3395 */
                  // ----------
                  /* cicili#Block3397 */
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
  return ({ /* cicili#Let3407 */
      __auto_type last  = (llist -> __h_table -> last )(llist );
      // ----------
      ({ /* cicili#Let3412 */
        __auto_type tail  = (((last -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block3414 */
        ({ /* cicili#Let3416 */
          bool __h_case_result  = ((last -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn3418 */
              free_List_List_Bool ((&tail ));
              (((last -> __h_data ). Cons ). __h_1_mem ) = rlist ;
              llist ;
            }) : ({ /* cicili#Let3423 */
              // ----------
              /* cicili#Block3425 */
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
  return ({ /* cicili#Let3434 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3436 */
      ({ /* cicili#Let3438 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let3442 */
            // ----------
            /* cicili#Block3444 */
            ({ /* cicili#Let3446 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Empty_t  );
              // ----------
              ((__h_case_result ) ? list  : ({ /* cicili#Let3450 */
                  // ----------
                  /* cicili#Block3452 */
                  (list -> __h_table -> last )(tail );
                }));
            });
          }) : ({ /* cicili#Let3457 */
            // ----------
            /* cicili#Block3459 */
            list ;
          }));
      });
    });
}
List_List_Bool take_List_List_Bool (int len , List_List_Bool list ) {
  return ({ /* cicili#Let3465 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3467 */
      ({ /* cicili#Let3469 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? (list -> __h_table -> push )(head , (list -> __h_table -> take )((--len ), tail )) : ({ /* cicili#Let3475 */
            // ----------
            /* cicili#Block3477 */
            Empty_List_Bool ();
          }));
      });
    });
}
int hasLen_List_List_Bool (List_List_Bool list , int desired ) {
  return ({ /* cicili#Let3484 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3486 */
      ({ /* cicili#Let3488 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  (list -> __h_table -> hasLen )(tail , (--desired )) )) : ({ /* cicili#Let3494 */
            // ----------
            /* cicili#Block3496 */
            0;
          }));
      });
    });
}
int len_List_List_Bool (List_List_Bool list ) {
  return ({ /* cicili#Let3502 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3504 */
      ({ /* cicili#Let3506 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (1 +  (list -> __h_table -> len )(tail ) ) : ({ /* cicili#Let3511 */
            // ----------
            /* cicili#Block3513 */
            0;
          }));
      });
    });
}
List_List_Bool tail_List_List_Bool (List_List_Bool list ) {
  return (list -> __h_table -> drop )(0, list );
}
List_List_Bool drop_List_List_Bool (int index , List_List_Bool list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let3523 */
        __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block3525 */
        ({ /* cicili#Let3527 */
          bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? (list -> __h_table -> drop )((--index ), tail ) : ({ /* cicili#Let3532 */
              // ----------
              /* cicili#Block3534 */
              Empty_List_Bool ();
            }));
        });
      }));
}
Maybe_List_Bool head_List_List_Bool (List_List_Bool list ) {
  return (list -> __h_table -> nth )(0, list );
}
Maybe_List_Bool nth_List_List_Bool (int index , List_List_Bool list ) {
  return ({ /* cicili#Let3546 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3548 */
      ({ /* cicili#Let3550 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((index  ==  0 )) ? Just_List_Bool (head ) : (list -> __h_table -> nth )((--index ), tail )) : ({ /* cicili#Let3557 */
            // ----------
            /* cicili#Block3559 */
            Nothing_List_Bool ();
          }));
      });
    });
}
List_List_Bool next_List_List_Bool (List_List_Bool list ) {
  return ({ /* cicili#Let3566 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3568 */
      ({ /* cicili#Let3570 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? tail  : ({ /* cicili#Let3574 */
            // ----------
            /* cicili#Block3576 */
            Empty_List_Bool ();
          }));
      });
    });
}
void free_List_List_Bool (List_List_Bool * this_ptr ) {
  { /* cicili#Let3581 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let3585 */
      __auto_type head  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3587 */
      ({ /* cicili#Let3589 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block3592 */
            printf ("destructuring List: %p, ", this );
            show_List_Bool (head );
            putchar ('\n');
            free_List_List_Bool ((&tail ));
            free (this );
          }
        else
          { /* cicili#Let3602 */
            // ----------
            /* cicili#Block3604 */
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
  { /* cicili#Let3613 */
    List_List_Bool instance  = malloc (sizeof(__h_List_List_Bool_class_t));
    // ----------
    (*instance ) = ((__h_List_List_Bool_class_t){ get_List_List_Bool__H_Table (), __h_Empty_t });
    return instance ;
  }
}
List_List_Bool Cons_List_Bool (List_Bool head , List_List_Bool tail ) {
  { /* cicili#Let3618 */
    List_List_Bool instance  = malloc (sizeof(__h_List_List_Bool_class_t));
    // ----------
    (*instance ) = ((__h_List_List_Bool_class_t){ get_List_List_Bool__H_Table (), __h___t , .__h_data._ = { head , tail }});
    return instance ;
  }
}
#endif /* __List_List_Bool__H_IMPL__ */ 
List_List_Bool new_List_List_Bool_Pure (const List_Bool * buf , int len ) {
  if (buf  ==  NULL  )
    return Empty_List_Bool ();
  else
    { /* cicili#Let3627 */
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
#ifndef __Maybe_List_int__H_IMPL__
#define __Maybe_List_int__H_IMPL__
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
#endif /* __Maybe_List_int__H_IMPL__ */ 
#ifndef __List_List_int__H_IMPL__
#define __List_List_int__H_IMPL__
void show_List_List_int (List_List_int list ) {
  { /* cicili#Let3663 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block3665 */
    ({ /* cicili#Let3667 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block3670 */
          { /* cicili#Let3674 */
            // ----------
            /* cicili#Block3676 */
            ({ /* cicili#Let3678 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block3681 */
                  show_List_int (head );
                  putchar (' ');
                }
              else
                { /* cicili#Let3690 */
                  // ----------
                  /* cicili#Block3692 */
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
  return ({ /* cicili#Let3702 */
      __auto_type last  = (llist -> __h_table -> last )(llist );
      // ----------
      ({ /* cicili#Let3707 */
        __auto_type tail  = (((last -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block3709 */
        ({ /* cicili#Let3711 */
          bool __h_case_result  = ((last -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn3713 */
              free_List_List_int ((&tail ));
              (((last -> __h_data ). Cons ). __h_1_mem ) = rlist ;
              llist ;
            }) : ({ /* cicili#Let3718 */
              // ----------
              /* cicili#Block3720 */
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
  return ({ /* cicili#Let3729 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3731 */
      ({ /* cicili#Let3733 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let3737 */
            // ----------
            /* cicili#Block3739 */
            ({ /* cicili#Let3741 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Empty_t  );
              // ----------
              ((__h_case_result ) ? list  : ({ /* cicili#Let3745 */
                  // ----------
                  /* cicili#Block3747 */
                  (list -> __h_table -> last )(tail );
                }));
            });
          }) : ({ /* cicili#Let3752 */
            // ----------
            /* cicili#Block3754 */
            list ;
          }));
      });
    });
}
List_List_int take_List_List_int (int len , List_List_int list ) {
  return ({ /* cicili#Let3760 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3762 */
      ({ /* cicili#Let3764 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? (list -> __h_table -> push )(head , (list -> __h_table -> take )((--len ), tail )) : ({ /* cicili#Let3770 */
            // ----------
            /* cicili#Block3772 */
            Empty_List_int ();
          }));
      });
    });
}
int hasLen_List_List_int (List_List_int list , int desired ) {
  return ({ /* cicili#Let3779 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3781 */
      ({ /* cicili#Let3783 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  (list -> __h_table -> hasLen )(tail , (--desired )) )) : ({ /* cicili#Let3789 */
            // ----------
            /* cicili#Block3791 */
            0;
          }));
      });
    });
}
int len_List_List_int (List_List_int list ) {
  return ({ /* cicili#Let3797 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3799 */
      ({ /* cicili#Let3801 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (1 +  (list -> __h_table -> len )(tail ) ) : ({ /* cicili#Let3806 */
            // ----------
            /* cicili#Block3808 */
            0;
          }));
      });
    });
}
List_List_int tail_List_List_int (List_List_int list ) {
  return (list -> __h_table -> drop )(0, list );
}
List_List_int drop_List_List_int (int index , List_List_int list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let3818 */
        __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block3820 */
        ({ /* cicili#Let3822 */
          bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? (list -> __h_table -> drop )((--index ), tail ) : ({ /* cicili#Let3827 */
              // ----------
              /* cicili#Block3829 */
              Empty_List_int ();
            }));
        });
      }));
}
Maybe_List_int head_List_List_int (List_List_int list ) {
  return (list -> __h_table -> nth )(0, list );
}
Maybe_List_int nth_List_List_int (int index , List_List_int list ) {
  return ({ /* cicili#Let3841 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3843 */
      ({ /* cicili#Let3845 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((index  ==  0 )) ? Just_List_int (head ) : (list -> __h_table -> nth )((--index ), tail )) : ({ /* cicili#Let3852 */
            // ----------
            /* cicili#Block3854 */
            Nothing_List_int ();
          }));
      });
    });
}
List_List_int next_List_List_int (List_List_int list ) {
  return ({ /* cicili#Let3861 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3863 */
      ({ /* cicili#Let3865 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? tail  : ({ /* cicili#Let3869 */
            // ----------
            /* cicili#Block3871 */
            Empty_List_int ();
          }));
      });
    });
}
void free_List_List_int (List_List_int * this_ptr ) {
  { /* cicili#Let3876 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let3880 */
      __auto_type head  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block3882 */
      ({ /* cicili#Let3884 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block3887 */
            printf ("destructuring List: %p, ", this );
            show_List_int (head );
            putchar ('\n');
            free_List_List_int ((&tail ));
            free (this );
          }
        else
          { /* cicili#Let3897 */
            // ----------
            /* cicili#Block3899 */
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
  { /* cicili#Let3908 */
    List_List_int instance  = malloc (sizeof(__h_List_List_int_class_t));
    // ----------
    (*instance ) = ((__h_List_List_int_class_t){ get_List_List_int__H_Table (), __h_Empty_t });
    return instance ;
  }
}
List_List_int Cons_List_int (List_int head , List_List_int tail ) {
  { /* cicili#Let3913 */
    List_List_int instance  = malloc (sizeof(__h_List_List_int_class_t));
    // ----------
    (*instance ) = ((__h_List_List_int_class_t){ get_List_List_int__H_Table (), __h___t , .__h_data._ = { head , tail }});
    return instance ;
  }
}
#endif /* __List_List_int__H_IMPL__ */ 
List_List_int new_List_List_int_Pure (const List_int * buf , int len ) {
  if (buf  ==  NULL  )
    return Empty_List_int ();
  else
    { /* cicili#Let3922 */
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
#ifndef __Maybe_List_char__H_IMPL__
#define __Maybe_List_char__H_IMPL__
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
#endif /* __Maybe_List_char__H_IMPL__ */ 
#ifndef __List_List_char__H_IMPL__
#define __List_List_char__H_IMPL__
void show_List_List_char (List_List_char list ) {
  { /* cicili#Let3958 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block3960 */
    ({ /* cicili#Let3962 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block3965 */
          { /* cicili#Let3969 */
            // ----------
            /* cicili#Block3971 */
            ({ /* cicili#Let3973 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block3976 */
                  show_List_char (head );
                  putchar (' ');
                }
              else
                { /* cicili#Let3985 */
                  // ----------
                  /* cicili#Block3987 */
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
  return ({ /* cicili#Let3997 */
      __auto_type last  = (llist -> __h_table -> last )(llist );
      // ----------
      ({ /* cicili#Let4002 */
        __auto_type tail  = (((last -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block4004 */
        ({ /* cicili#Let4006 */
          bool __h_case_result  = ((last -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn4008 */
              free_List_List_char ((&tail ));
              (((last -> __h_data ). Cons ). __h_1_mem ) = rlist ;
              llist ;
            }) : ({ /* cicili#Let4013 */
              // ----------
              /* cicili#Block4015 */
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
  return ({ /* cicili#Let4024 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4026 */
      ({ /* cicili#Let4028 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let4032 */
            // ----------
            /* cicili#Block4034 */
            ({ /* cicili#Let4036 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Empty_t  );
              // ----------
              ((__h_case_result ) ? list  : ({ /* cicili#Let4040 */
                  // ----------
                  /* cicili#Block4042 */
                  (list -> __h_table -> last )(tail );
                }));
            });
          }) : ({ /* cicili#Let4047 */
            // ----------
            /* cicili#Block4049 */
            list ;
          }));
      });
    });
}
List_List_char take_List_List_char (int len , List_List_char list ) {
  return ({ /* cicili#Let4055 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4057 */
      ({ /* cicili#Let4059 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? (list -> __h_table -> push )(head , (list -> __h_table -> take )((--len ), tail )) : ({ /* cicili#Let4065 */
            // ----------
            /* cicili#Block4067 */
            Empty_List_char ();
          }));
      });
    });
}
int hasLen_List_List_char (List_List_char list , int desired ) {
  return ({ /* cicili#Let4074 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4076 */
      ({ /* cicili#Let4078 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  (list -> __h_table -> hasLen )(tail , (--desired )) )) : ({ /* cicili#Let4084 */
            // ----------
            /* cicili#Block4086 */
            0;
          }));
      });
    });
}
int len_List_List_char (List_List_char list ) {
  return ({ /* cicili#Let4092 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4094 */
      ({ /* cicili#Let4096 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (1 +  (list -> __h_table -> len )(tail ) ) : ({ /* cicili#Let4101 */
            // ----------
            /* cicili#Block4103 */
            0;
          }));
      });
    });
}
List_List_char tail_List_List_char (List_List_char list ) {
  return (list -> __h_table -> drop )(0, list );
}
List_List_char drop_List_List_char (int index , List_List_char list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let4113 */
        __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block4115 */
        ({ /* cicili#Let4117 */
          bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? (list -> __h_table -> drop )((--index ), tail ) : ({ /* cicili#Let4122 */
              // ----------
              /* cicili#Block4124 */
              Empty_List_char ();
            }));
        });
      }));
}
Maybe_List_char head_List_List_char (List_List_char list ) {
  return (list -> __h_table -> nth )(0, list );
}
Maybe_List_char nth_List_List_char (int index , List_List_char list ) {
  return ({ /* cicili#Let4136 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4138 */
      ({ /* cicili#Let4140 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((index  ==  0 )) ? Just_List_char (head ) : (list -> __h_table -> nth )((--index ), tail )) : ({ /* cicili#Let4147 */
            // ----------
            /* cicili#Block4149 */
            Nothing_List_char ();
          }));
      });
    });
}
List_List_char next_List_List_char (List_List_char list ) {
  return ({ /* cicili#Let4156 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4158 */
      ({ /* cicili#Let4160 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? tail  : ({ /* cicili#Let4164 */
            // ----------
            /* cicili#Block4166 */
            Empty_List_char ();
          }));
      });
    });
}
void free_List_List_char (List_List_char * this_ptr ) {
  { /* cicili#Let4171 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let4175 */
      __auto_type head  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4177 */
      ({ /* cicili#Let4179 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block4182 */
            printf ("destructuring List: %p, ", this );
            show_List_char (head );
            putchar ('\n');
            free_List_List_char ((&tail ));
            free (this );
          }
        else
          { /* cicili#Let4192 */
            // ----------
            /* cicili#Block4194 */
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
  { /* cicili#Let4203 */
    List_List_char instance  = malloc (sizeof(__h_List_List_char_class_t));
    // ----------
    (*instance ) = ((__h_List_List_char_class_t){ get_List_List_char__H_Table (), __h_Empty_t });
    return instance ;
  }
}
List_List_char Cons_List_char (List_char head , List_List_char tail ) {
  { /* cicili#Let4208 */
    List_List_char instance  = malloc (sizeof(__h_List_List_char_class_t));
    // ----------
    (*instance ) = ((__h_List_List_char_class_t){ get_List_List_char__H_Table (), __h___t , .__h_data._ = { head , tail }});
    return instance ;
  }
}
#endif /* __List_List_char__H_IMPL__ */ 
List_List_char new_List_List_char_Pure (const List_char * buf , int len ) {
  if (buf  ==  NULL  )
    return Empty_List_char ();
  else
    { /* cicili#Let4217 */
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
#ifndef __Maybe_String__H_IMPL__
#define __Maybe_String__H_IMPL__
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
#endif /* __Maybe_String__H_IMPL__ */ 
#ifndef __List_String__H_IMPL__
#define __List_String__H_IMPL__
void show_List_String (List_String list ) {
  { /* cicili#Let4253 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block4255 */
    ({ /* cicili#Let4257 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block4260 */
          { /* cicili#Let4264 */
            // ----------
            /* cicili#Block4266 */
            ({ /* cicili#Let4268 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block4271 */
                  show_List_char (head );
                  putchar (' ');
                }
              else
                { /* cicili#Let4280 */
                  // ----------
                  /* cicili#Block4282 */
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
  return ({ /* cicili#Let4292 */
      __auto_type last  = (llist -> __h_table -> last )(llist );
      // ----------
      ({ /* cicili#Let4297 */
        __auto_type tail  = (((last -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block4299 */
        ({ /* cicili#Let4301 */
          bool __h_case_result  = ((last -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn4303 */
              free_List_String ((&tail ));
              (((last -> __h_data ). Cons ). __h_1_mem ) = rlist ;
              llist ;
            }) : ({ /* cicili#Let4308 */
              // ----------
              /* cicili#Block4310 */
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
  return ({ /* cicili#Let4319 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4321 */
      ({ /* cicili#Let4323 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Let4327 */
            // ----------
            /* cicili#Block4329 */
            ({ /* cicili#Let4331 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Empty_t  );
              // ----------
              ((__h_case_result ) ? list  : ({ /* cicili#Let4335 */
                  // ----------
                  /* cicili#Block4337 */
                  (list -> __h_table -> last )(tail );
                }));
            });
          }) : ({ /* cicili#Let4342 */
            // ----------
            /* cicili#Block4344 */
            list ;
          }));
      });
    });
}
List_String take_List_String (int len , List_String list ) {
  return ({ /* cicili#Let4350 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4352 */
      ({ /* cicili#Let4354 */
        bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
        // ----------
        ((__h_case_result ) ? (list -> __h_table -> push )(head , (list -> __h_table -> take )((--len ), tail )) : ({ /* cicili#Let4360 */
            // ----------
            /* cicili#Block4362 */
            Empty_String ();
          }));
      });
    });
}
int hasLen_List_String (List_String list , int desired ) {
  return ({ /* cicili#Let4369 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4371 */
      ({ /* cicili#Let4373 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  (list -> __h_table -> hasLen )(tail , (--desired )) )) : ({ /* cicili#Let4379 */
            // ----------
            /* cicili#Block4381 */
            0;
          }));
      });
    });
}
int len_List_String (List_String list ) {
  return ({ /* cicili#Let4387 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4389 */
      ({ /* cicili#Let4391 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (1 +  (list -> __h_table -> len )(tail ) ) : ({ /* cicili#Let4396 */
            // ----------
            /* cicili#Block4398 */
            0;
          }));
      });
    });
}
List_String tail_List_String (List_String list ) {
  return (list -> __h_table -> drop )(0, list );
}
List_String drop_List_String (int index , List_String list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let4408 */
        __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
        // ----------
        /* cicili#Block4410 */
        ({ /* cicili#Let4412 */
          bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
          // ----------
          ((__h_case_result ) ? (list -> __h_table -> drop )((--index ), tail ) : ({ /* cicili#Let4417 */
              // ----------
              /* cicili#Block4419 */
              Empty_String ();
            }));
        });
      }));
}
Maybe_String head_List_String (List_String list ) {
  return (list -> __h_table -> nth )(0, list );
}
Maybe_String nth_List_String (int index , List_String list ) {
  return ({ /* cicili#Let4431 */
      __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4433 */
      ({ /* cicili#Let4435 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? (((index  ==  0 )) ? Just_String (head ) : (list -> __h_table -> nth )((--index ), tail )) : ({ /* cicili#Let4442 */
            // ----------
            /* cicili#Block4444 */
            Nothing_String ();
          }));
      });
    });
}
List_String next_List_String (List_String list ) {
  return ({ /* cicili#Let4451 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4453 */
      ({ /* cicili#Let4455 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? tail  : ({ /* cicili#Let4459 */
            // ----------
            /* cicili#Block4461 */
            Empty_String ();
          }));
      });
    });
}
void free_List_String (List_String * this_ptr ) {
  { /* cicili#Let4466 */
    __auto_type this  = (*this_ptr );
    // ----------
    { /* cicili#Let4470 */
      __auto_type head  = (((this -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((this -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block4472 */
      ({ /* cicili#Let4474 */
        bool __h_case_result  = ((this -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        if (__h_case_result )
          { /* cicili#Block4477 */
            printf ("destructuring List: %p, ", this );
            show_List_char (head );
            putchar ('\n');
            free_List_String ((&tail ));
            free (this );
          }
        else
          { /* cicili#Let4487 */
            // ----------
            /* cicili#Block4489 */
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
  { /* cicili#Let4498 */
    List_String instance  = malloc (sizeof(__h_List_String_class_t));
    // ----------
    (*instance ) = ((__h_List_String_class_t){ get_List_String__H_Table (), __h_Empty_t });
    return instance ;
  }
}
List_String Cons_String (String head , List_String tail ) {
  { /* cicili#Let4503 */
    List_String instance  = malloc (sizeof(__h_List_String_class_t));
    // ----------
    (*instance ) = ((__h_List_String_class_t){ get_List_String__H_Table (), __h___t , .__h_data._ = { head , tail }});
    return instance ;
  }
}
#endif /* __List_String__H_IMPL__ */ 
List_String new_List_String_Pure (const String * buf , int len ) {
  if (buf  ==  NULL  )
    return Empty_String ();
  else
    { /* cicili#Let4512 */
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
#ifndef __Rc_List_Bool__H_DECL__
#define __Rc_List_Bool__H_DECL__
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
  union { /* ciciliUnion4535 */
    struct { /* ciciliStruct4536 */
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
#endif /* __Rc_List_Bool__H_DECL__ */ 
Maybe_List_Bool deref_Rc_List_Bool (Rc_List_Bool rc );
Rc_List_Bool clone_Rc_List_Bool (Rc_List_Bool rc );
Rc_List_Bool new_Rc_List_Bool_Pure (List_Bool pointer );
#ifndef __Rc_List_Bool__H_IMPL__
#define __Rc_List_Bool__H_IMPL__
void free_Rc_List_Bool (Rc_List_Bool * this_ptr ) {
  { /* cicili#Let4567 */
    __auto_type this  = (*this_ptr );
    // ----------
    ({ /* cicili#Progn4569 */
      printf ("destructuring Rc: %p\n", this );
      { /* cicili#Let4573 */
        __auto_type pointer  = (((this -> __h_data ). _ ). __h_0_mem );
        __auto_type authority  = (((this -> __h_data ). _ ). __h_1_mem );
        __auto_type count  = (((this -> __h_data ). _ ). __h_2_mem );
        __auto_type destructor  = (((this -> __h_data ). _ ). __h_3_mem );
        // ----------
        /* cicili#Block4575 */
        ({ /* cicili#Let4577 */
          bool __h_case_result  = ((this -> __h_ctor ) ==  __h___t  );
          // ----------
          if (__h_case_result )
            {
            if (((size_t)this ) ==  authority  )
              { /* cicili#Block4582 */
                printf ("destructuring authorized Rc: %p , %d\n", this , (*count ));
                ((((*count ) ==  1 )) ? ({ /* cicili#Progn4585 */
                    destructor ((&pointer ));
                    free (count );
                    free (this );
                  }) : ({ /* cicili#Progn4587 */
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
  { /* cicili#Let4596 */
    Rc_List_Bool instance  = malloc (sizeof(__h_Rc_List_Bool_class_t));
    // ----------
    (*instance ) = ((__h_Rc_List_Bool_class_t){ get_Rc_List_Bool__H_Table (), __h___t , .__h_data._ = { pointer , authority , count , destructor }});
    return instance ;
  }
}
#endif /* __Rc_List_Bool__H_IMPL__ */ 
Maybe_List_Bool deref_Rc_List_Bool (Rc_List_Bool rc ) {
  return ({ /* cicili#Let4605 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block4607 */
      ({ /* cicili#Let4609 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? ((((((size_t)rc ) ==  authority  ) &&  ((*count ) >=  1 ) )) ? Just_List_Bool (pointer ) : Nothing_List_Bool ()) : ({ /* cicili#Let4616 */
            // ----------
            /* cicili#Block4618 */
            Nothing_List_Bool ();
          }));
      });
    });
}
Rc_List_Bool clone_Rc_List_Bool (Rc_List_Bool rc ) {
  return ({ /* cicili#Let4627 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block4629 */
      ({ /* cicili#Let4631 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? (((((size_t)rc ) ==  authority  )) ? ({ /* cicili#Progn4634 */
              (++(*count ));
              ({ /* cicili#Let4636 */
                __auto_type cloned_rc  = Keep_Rc_List_Bool (pointer , 0, count , destructor );
                // ----------
                (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
                { /* cicili#Let4641 */
                  __auto_type authority  = (((cloned_rc -> __h_data ). _ ). __h_1_mem );
                  __auto_type count  = (((cloned_rc -> __h_data ). _ ). __h_2_mem );
                  // ----------
                  /* cicili#Block4643 */
                  ({ /* cicili#Let4645 */
                    bool __h_case_result  = ((cloned_rc -> __h_ctor ) ==  __h___t  );
                    // ----------
                    if (__h_case_result )
                      printf ("inside Clone rc: %p, %zx, %d\n", cloned_rc , authority , (*count ));
                  });
                }
                cloned_rc ;
              });
            }) : rc ) : ({ /* cicili#Let4650 */
            // ----------
            /* cicili#Block4652 */
            rc ;
          }));
      });
    });
}
Rc_List_Bool new_Rc_List_Bool_Pure (List_Bool pointer ) {
  return ({ /* cicili#Let4658 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      // ----------
      (*count ) = 1;
      ({ /* cicili#Let4660 */
        __auto_type cloned_rc  = Keep_Rc_List_Bool (pointer , 0, count , free_List_Bool );
        // ----------
        (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
        { /* cicili#Let4666 */
          __auto_type authority  = (((cloned_rc -> __h_data ). _ ). __h_1_mem );
          __auto_type count  = (((cloned_rc -> __h_data ). _ ). __h_2_mem );
          // ----------
          /* cicili#Block4668 */
          ({ /* cicili#Let4670 */
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
#ifndef __Rc_List_int__H_DECL__
#define __Rc_List_int__H_DECL__
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
  union { /* ciciliUnion4685 */
    struct { /* ciciliStruct4686 */
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
#endif /* __Rc_List_int__H_DECL__ */ 
Maybe_List_int deref_Rc_List_int (Rc_List_int rc );
Rc_List_int clone_Rc_List_int (Rc_List_int rc );
Rc_List_int new_Rc_List_int_Pure (List_int pointer );
#ifndef __Rc_List_int__H_IMPL__
#define __Rc_List_int__H_IMPL__
void free_Rc_List_int (Rc_List_int * this_ptr ) {
  { /* cicili#Let4717 */
    __auto_type this  = (*this_ptr );
    // ----------
    ({ /* cicili#Progn4719 */
      printf ("destructuring Rc: %p\n", this );
      { /* cicili#Let4723 */
        __auto_type pointer  = (((this -> __h_data ). _ ). __h_0_mem );
        __auto_type authority  = (((this -> __h_data ). _ ). __h_1_mem );
        __auto_type count  = (((this -> __h_data ). _ ). __h_2_mem );
        __auto_type destructor  = (((this -> __h_data ). _ ). __h_3_mem );
        // ----------
        /* cicili#Block4725 */
        ({ /* cicili#Let4727 */
          bool __h_case_result  = ((this -> __h_ctor ) ==  __h___t  );
          // ----------
          if (__h_case_result )
            {
            if (((size_t)this ) ==  authority  )
              { /* cicili#Block4732 */
                printf ("destructuring authorized Rc: %p , %d\n", this , (*count ));
                ((((*count ) ==  1 )) ? ({ /* cicili#Progn4735 */
                    destructor ((&pointer ));
                    free (count );
                    free (this );
                  }) : ({ /* cicili#Progn4737 */
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
  { /* cicili#Let4746 */
    Rc_List_int instance  = malloc (sizeof(__h_Rc_List_int_class_t));
    // ----------
    (*instance ) = ((__h_Rc_List_int_class_t){ get_Rc_List_int__H_Table (), __h___t , .__h_data._ = { pointer , authority , count , destructor }});
    return instance ;
  }
}
#endif /* __Rc_List_int__H_IMPL__ */ 
Maybe_List_int deref_Rc_List_int (Rc_List_int rc ) {
  return ({ /* cicili#Let4755 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block4757 */
      ({ /* cicili#Let4759 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? ((((((size_t)rc ) ==  authority  ) &&  ((*count ) >=  1 ) )) ? Just_List_int (pointer ) : Nothing_List_int ()) : ({ /* cicili#Let4766 */
            // ----------
            /* cicili#Block4768 */
            Nothing_List_int ();
          }));
      });
    });
}
Rc_List_int clone_Rc_List_int (Rc_List_int rc ) {
  return ({ /* cicili#Let4777 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block4779 */
      ({ /* cicili#Let4781 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? (((((size_t)rc ) ==  authority  )) ? ({ /* cicili#Progn4784 */
              (++(*count ));
              ({ /* cicili#Let4786 */
                __auto_type cloned_rc  = Keep_Rc_List_int (pointer , 0, count , destructor );
                // ----------
                (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
                { /* cicili#Let4791 */
                  __auto_type authority  = (((cloned_rc -> __h_data ). _ ). __h_1_mem );
                  __auto_type count  = (((cloned_rc -> __h_data ). _ ). __h_2_mem );
                  // ----------
                  /* cicili#Block4793 */
                  ({ /* cicili#Let4795 */
                    bool __h_case_result  = ((cloned_rc -> __h_ctor ) ==  __h___t  );
                    // ----------
                    if (__h_case_result )
                      printf ("inside Clone rc: %p, %zx, %d\n", cloned_rc , authority , (*count ));
                  });
                }
                cloned_rc ;
              });
            }) : rc ) : ({ /* cicili#Let4800 */
            // ----------
            /* cicili#Block4802 */
            rc ;
          }));
      });
    });
}
Rc_List_int new_Rc_List_int_Pure (List_int pointer ) {
  return ({ /* cicili#Let4808 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      // ----------
      (*count ) = 1;
      ({ /* cicili#Let4810 */
        __auto_type cloned_rc  = Keep_Rc_List_int (pointer , 0, count , free_List_int );
        // ----------
        (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
        { /* cicili#Let4816 */
          __auto_type authority  = (((cloned_rc -> __h_data ). _ ). __h_1_mem );
          __auto_type count  = (((cloned_rc -> __h_data ). _ ). __h_2_mem );
          // ----------
          /* cicili#Block4818 */
          ({ /* cicili#Let4820 */
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
#ifndef __Rc_List_char__H_DECL__
#define __Rc_List_char__H_DECL__
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
  union { /* ciciliUnion4835 */
    struct { /* ciciliStruct4836 */
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
#endif /* __Rc_List_char__H_DECL__ */ 
Maybe_List_char deref_Rc_List_char (Rc_List_char rc );
Rc_List_char clone_Rc_List_char (Rc_List_char rc );
Rc_List_char new_Rc_List_char_Pure (List_char pointer );
#ifndef __Rc_List_char__H_IMPL__
#define __Rc_List_char__H_IMPL__
void free_Rc_List_char (Rc_List_char * this_ptr ) {
  { /* cicili#Let4867 */
    __auto_type this  = (*this_ptr );
    // ----------
    ({ /* cicili#Progn4869 */
      printf ("destructuring Rc: %p\n", this );
      { /* cicili#Let4873 */
        __auto_type pointer  = (((this -> __h_data ). _ ). __h_0_mem );
        __auto_type authority  = (((this -> __h_data ). _ ). __h_1_mem );
        __auto_type count  = (((this -> __h_data ). _ ). __h_2_mem );
        __auto_type destructor  = (((this -> __h_data ). _ ). __h_3_mem );
        // ----------
        /* cicili#Block4875 */
        ({ /* cicili#Let4877 */
          bool __h_case_result  = ((this -> __h_ctor ) ==  __h___t  );
          // ----------
          if (__h_case_result )
            {
            if (((size_t)this ) ==  authority  )
              { /* cicili#Block4882 */
                printf ("destructuring authorized Rc: %p , %d\n", this , (*count ));
                ((((*count ) ==  1 )) ? ({ /* cicili#Progn4885 */
                    destructor ((&pointer ));
                    free (count );
                    free (this );
                  }) : ({ /* cicili#Progn4887 */
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
  { /* cicili#Let4896 */
    Rc_List_char instance  = malloc (sizeof(__h_Rc_List_char_class_t));
    // ----------
    (*instance ) = ((__h_Rc_List_char_class_t){ get_Rc_List_char__H_Table (), __h___t , .__h_data._ = { pointer , authority , count , destructor }});
    return instance ;
  }
}
#endif /* __Rc_List_char__H_IMPL__ */ 
Maybe_List_char deref_Rc_List_char (Rc_List_char rc ) {
  return ({ /* cicili#Let4905 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block4907 */
      ({ /* cicili#Let4909 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? ((((((size_t)rc ) ==  authority  ) &&  ((*count ) >=  1 ) )) ? Just_List_char (pointer ) : Nothing_List_char ()) : ({ /* cicili#Let4916 */
            // ----------
            /* cicili#Block4918 */
            Nothing_List_char ();
          }));
      });
    });
}
Rc_List_char clone_Rc_List_char (Rc_List_char rc ) {
  return ({ /* cicili#Let4927 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block4929 */
      ({ /* cicili#Let4931 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? (((((size_t)rc ) ==  authority  )) ? ({ /* cicili#Progn4934 */
              (++(*count ));
              ({ /* cicili#Let4936 */
                __auto_type cloned_rc  = Keep_Rc_List_char (pointer , 0, count , destructor );
                // ----------
                (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
                { /* cicili#Let4941 */
                  __auto_type authority  = (((cloned_rc -> __h_data ). _ ). __h_1_mem );
                  __auto_type count  = (((cloned_rc -> __h_data ). _ ). __h_2_mem );
                  // ----------
                  /* cicili#Block4943 */
                  ({ /* cicili#Let4945 */
                    bool __h_case_result  = ((cloned_rc -> __h_ctor ) ==  __h___t  );
                    // ----------
                    if (__h_case_result )
                      printf ("inside Clone rc: %p, %zx, %d\n", cloned_rc , authority , (*count ));
                  });
                }
                cloned_rc ;
              });
            }) : rc ) : ({ /* cicili#Let4950 */
            // ----------
            /* cicili#Block4952 */
            rc ;
          }));
      });
    });
}
Rc_List_char new_Rc_List_char_Pure (List_char pointer ) {
  return ({ /* cicili#Let4958 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      // ----------
      (*count ) = 1;
      ({ /* cicili#Let4960 */
        __auto_type cloned_rc  = Keep_Rc_List_char (pointer , 0, count , free_List_char );
        // ----------
        (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
        { /* cicili#Let4966 */
          __auto_type authority  = (((cloned_rc -> __h_data ). _ ). __h_1_mem );
          __auto_type count  = (((cloned_rc -> __h_data ). _ ). __h_2_mem );
          // ----------
          /* cicili#Block4968 */
          ({ /* cicili#Let4970 */
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
#ifndef __Rc_String__H_DECL__
#define __Rc_String__H_DECL__
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
  union { /* ciciliUnion4985 */
    struct { /* ciciliStruct4986 */
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
#endif /* __Rc_String__H_DECL__ */ 
Maybe_String deref_Rc_String (Rc_String rc );
Rc_String clone_Rc_String (Rc_String rc );
Rc_String new_Rc_String_Pure (String pointer );
#ifndef __Rc_String__H_IMPL__
#define __Rc_String__H_IMPL__
void free_Rc_String (Rc_String * this_ptr ) {
  { /* cicili#Let5017 */
    __auto_type this  = (*this_ptr );
    // ----------
    ({ /* cicili#Progn5019 */
      printf ("destructuring Rc: %p\n", this );
      { /* cicili#Let5023 */
        __auto_type pointer  = (((this -> __h_data ). _ ). __h_0_mem );
        __auto_type authority  = (((this -> __h_data ). _ ). __h_1_mem );
        __auto_type count  = (((this -> __h_data ). _ ). __h_2_mem );
        __auto_type destructor  = (((this -> __h_data ). _ ). __h_3_mem );
        // ----------
        /* cicili#Block5025 */
        ({ /* cicili#Let5027 */
          bool __h_case_result  = ((this -> __h_ctor ) ==  __h___t  );
          // ----------
          if (__h_case_result )
            {
            if (((size_t)this ) ==  authority  )
              { /* cicili#Block5032 */
                printf ("destructuring authorized Rc: %p , %d\n", this , (*count ));
                ((((*count ) ==  1 )) ? ({ /* cicili#Progn5035 */
                    destructor ((&pointer ));
                    free (count );
                    free (this );
                  }) : ({ /* cicili#Progn5037 */
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
  { /* cicili#Let5046 */
    Rc_String instance  = malloc (sizeof(__h_Rc_String_class_t));
    // ----------
    (*instance ) = ((__h_Rc_String_class_t){ get_Rc_String__H_Table (), __h___t , .__h_data._ = { pointer , authority , count , destructor }});
    return instance ;
  }
}
#endif /* __Rc_String__H_IMPL__ */ 
Maybe_String deref_Rc_String (Rc_String rc ) {
  return ({ /* cicili#Let5055 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block5057 */
      ({ /* cicili#Let5059 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? ((((((size_t)rc ) ==  authority  ) &&  ((*count ) >=  1 ) )) ? Just_String (pointer ) : Nothing_String ()) : ({ /* cicili#Let5066 */
            // ----------
            /* cicili#Block5068 */
            Nothing_String ();
          }));
      });
    });
}
Rc_String clone_Rc_String (Rc_String rc ) {
  return ({ /* cicili#Let5077 */
      __auto_type pointer  = (((rc -> __h_data ). _ ). __h_0_mem );
      __auto_type authority  = (((rc -> __h_data ). _ ). __h_1_mem );
      __auto_type count  = (((rc -> __h_data ). _ ). __h_2_mem );
      __auto_type destructor  = (((rc -> __h_data ). _ ). __h_3_mem );
      // ----------
      /* cicili#Block5079 */
      ({ /* cicili#Let5081 */
        bool __h_case_result  = ((rc -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? (((((size_t)rc ) ==  authority  )) ? ({ /* cicili#Progn5084 */
              (++(*count ));
              ({ /* cicili#Let5086 */
                __auto_type cloned_rc  = Keep_Rc_String (pointer , 0, count , destructor );
                // ----------
                (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
                { /* cicili#Let5091 */
                  __auto_type authority  = (((cloned_rc -> __h_data ). _ ). __h_1_mem );
                  __auto_type count  = (((cloned_rc -> __h_data ). _ ). __h_2_mem );
                  // ----------
                  /* cicili#Block5093 */
                  ({ /* cicili#Let5095 */
                    bool __h_case_result  = ((cloned_rc -> __h_ctor ) ==  __h___t  );
                    // ----------
                    if (__h_case_result )
                      printf ("inside Clone rc: %p, %zx, %d\n", cloned_rc , authority , (*count ));
                  });
                }
                cloned_rc ;
              });
            }) : rc ) : ({ /* cicili#Let5100 */
            // ----------
            /* cicili#Block5102 */
            rc ;
          }));
      });
    });
}
Rc_String new_Rc_String_Pure (String pointer ) {
  return ({ /* cicili#Let5108 */
      __auto_type count  = ((int *)malloc (sizeof(int)));
      // ----------
      (*count ) = 1;
      ({ /* cicili#Let5110 */
        __auto_type cloned_rc  = Keep_Rc_String (pointer , 0, count , free_String );
        // ----------
        (((cloned_rc -> __h_data ). Keep ). __h_1_mem ) = ((size_t)cloned_rc );
        { /* cicili#Let5116 */
          __auto_type authority  = (((cloned_rc -> __h_data ). _ ). __h_1_mem );
          __auto_type count  = (((cloned_rc -> __h_data ). _ ). __h_2_mem );
          // ----------
          /* cicili#Block5118 */
          ({ /* cicili#Let5120 */
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
#ifndef __folds_Bool__H_IMPL__
#define __folds_Bool__H_IMPL__
Bool foldr_Bool (Bool (*folder) (Bool lhs , Bool rhs ), Bool neutral , List_Bool foldable ) {
  return ({ /* cicili#Let5132 */
      __auto_type head  = (((foldable -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((foldable -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block5134 */
      ({ /* cicili#Let5136 */
        bool __h_case_result  = ((foldable -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? foldr_Bool (folder , folder (neutral , head ), tail ) : ({ /* cicili#Let5141 */
            // ----------
            /* cicili#Block5143 */
            neutral ;
          }));
      });
    });
}
#endif /* __folds_Bool__H_IMPL__ */ 
#ifndef __Monoid_All_Bool__H_IMPL__
#define __Monoid_All_Bool__H_IMPL__
void free_Monoid_All_Bool (Monoid_All_Bool * this ) {
}
const Monoid_All_Bool__H_Table * const get_Monoid_All_Bool__H_Table () {
  static const Monoid_All_Bool__H_Table table  = { free_Monoid_All_Bool };
  return (&table );
}
Monoid_All_Bool Monoid_All_Bool_ctor (Monoid_All_Bool_mappend_t mappend , Bool mempty , Monoid_All_Bool_mconcat_t mconcat ) {
  return ((Monoid_All_Bool){ get_Monoid_All_Bool__H_Table (), __h___t , .__h_data._ = { mappend , mempty , mconcat }});
}
#endif /* __Monoid_All_Bool__H_IMPL__ */ 
#ifndef __Semigroup_All_Bool__H_IMPL__
#define __Semigroup_All_Bool__H_IMPL__
void free_Semigroup_All_Bool (Semigroup_All_Bool * this ) {
}
const Semigroup_All_Bool__H_Table * const get_Semigroup_All_Bool__H_Table () {
  static const Semigroup_All_Bool__H_Table table  = { free_Semigroup_All_Bool };
  return (&table );
}
Semigroup_All_Bool Semigroup_All_Bool_ctor (Monoid_All_Bool_mappend_t mappend ) {
  return ((Semigroup_All_Bool){ get_Semigroup_All_Bool__H_Table (), __h___t , .__h_data._ = { mappend }});
}
#endif /* __Semigroup_All_Bool__H_IMPL__ */ 
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
#ifndef __folds_Bool__H_IMPL__
#define __folds_Bool__H_IMPL__
Bool foldr_Bool (Bool (*folder) (Bool lhs , Bool rhs ), Bool neutral , List_Bool foldable ) {
  return ({ /* cicili#Let5206 */
      __auto_type head  = (((foldable -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((foldable -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block5208 */
      ({ /* cicili#Let5210 */
        bool __h_case_result  = ((foldable -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? foldr_Bool (folder , folder (neutral , head ), tail ) : ({ /* cicili#Let5215 */
            // ----------
            /* cicili#Block5217 */
            neutral ;
          }));
      });
    });
}
#endif /* __folds_Bool__H_IMPL__ */ 
#ifndef __Monoid_Any_Bool__H_IMPL__
#define __Monoid_Any_Bool__H_IMPL__
void free_Monoid_Any_Bool (Monoid_Any_Bool * this ) {
}
const Monoid_Any_Bool__H_Table * const get_Monoid_Any_Bool__H_Table () {
  static const Monoid_Any_Bool__H_Table table  = { free_Monoid_Any_Bool };
  return (&table );
}
Monoid_Any_Bool Monoid_Any_Bool_ctor (Monoid_Any_Bool_mappend_t mappend , Bool mempty , Monoid_Any_Bool_mconcat_t mconcat ) {
  return ((Monoid_Any_Bool){ get_Monoid_Any_Bool__H_Table (), __h___t , .__h_data._ = { mappend , mempty , mconcat }});
}
#endif /* __Monoid_Any_Bool__H_IMPL__ */ 
#ifndef __Semigroup_Any_Bool__H_IMPL__
#define __Semigroup_Any_Bool__H_IMPL__
void free_Semigroup_Any_Bool (Semigroup_Any_Bool * this ) {
}
const Semigroup_Any_Bool__H_Table * const get_Semigroup_Any_Bool__H_Table () {
  static const Semigroup_Any_Bool__H_Table table  = { free_Semigroup_Any_Bool };
  return (&table );
}
Semigroup_Any_Bool Semigroup_Any_Bool_ctor (Monoid_Any_Bool_mappend_t mappend ) {
  return ((Semigroup_Any_Bool){ get_Semigroup_Any_Bool__H_Table (), __h___t , .__h_data._ = { mappend }});
}
#endif /* __Semigroup_Any_Bool__H_IMPL__ */ 
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
#ifndef __folds_int__H_IMPL__
#define __folds_int__H_IMPL__
int foldr_int (int (*folder) (int lhs , int rhs ), int neutral , List_int foldable ) {
  return ({ /* cicili#Let5280 */
      __auto_type head  = (((foldable -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((foldable -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block5282 */
      ({ /* cicili#Let5284 */
        bool __h_case_result  = ((foldable -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? foldr_int (folder , folder (neutral , head ), tail ) : ({ /* cicili#Let5289 */
            // ----------
            /* cicili#Block5291 */
            neutral ;
          }));
      });
    });
}
#endif /* __folds_int__H_IMPL__ */ 
#ifndef __Monoid_Sum_int__H_IMPL__
#define __Monoid_Sum_int__H_IMPL__
void free_Monoid_Sum_int (Monoid_Sum_int * this ) {
}
const Monoid_Sum_int__H_Table * const get_Monoid_Sum_int__H_Table () {
  static const Monoid_Sum_int__H_Table table  = { free_Monoid_Sum_int };
  return (&table );
}
Monoid_Sum_int Monoid_Sum_int_ctor (Monoid_Sum_int_mappend_t mappend , int mempty , Monoid_Sum_int_mconcat_t mconcat ) {
  return ((Monoid_Sum_int){ get_Monoid_Sum_int__H_Table (), __h___t , .__h_data._ = { mappend , mempty , mconcat }});
}
#endif /* __Monoid_Sum_int__H_IMPL__ */ 
#ifndef __Semigroup_Sum_int__H_IMPL__
#define __Semigroup_Sum_int__H_IMPL__
void free_Semigroup_Sum_int (Semigroup_Sum_int * this ) {
}
const Semigroup_Sum_int__H_Table * const get_Semigroup_Sum_int__H_Table () {
  static const Semigroup_Sum_int__H_Table table  = { free_Semigroup_Sum_int };
  return (&table );
}
Semigroup_Sum_int Semigroup_Sum_int_ctor (Monoid_Sum_int_mappend_t mappend ) {
  return ((Semigroup_Sum_int){ get_Semigroup_Sum_int__H_Table (), __h___t , .__h_data._ = { mappend }});
}
#endif /* __Semigroup_Sum_int__H_IMPL__ */ 
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
#ifndef __folds_int__H_IMPL__
#define __folds_int__H_IMPL__
int foldr_int (int (*folder) (int lhs , int rhs ), int neutral , List_int foldable ) {
  return ({ /* cicili#Let5354 */
      __auto_type head  = (((foldable -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((foldable -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block5356 */
      ({ /* cicili#Let5358 */
        bool __h_case_result  = ((foldable -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? foldr_int (folder , folder (neutral , head ), tail ) : ({ /* cicili#Let5363 */
            // ----------
            /* cicili#Block5365 */
            neutral ;
          }));
      });
    });
}
#endif /* __folds_int__H_IMPL__ */ 
#ifndef __Monoid_Product_int__H_IMPL__
#define __Monoid_Product_int__H_IMPL__
void free_Monoid_Product_int (Monoid_Product_int * this ) {
}
const Monoid_Product_int__H_Table * const get_Monoid_Product_int__H_Table () {
  static const Monoid_Product_int__H_Table table  = { free_Monoid_Product_int };
  return (&table );
}
Monoid_Product_int Monoid_Product_int_ctor (Monoid_Product_int_mappend_t mappend , int mempty , Monoid_Product_int_mconcat_t mconcat ) {
  return ((Monoid_Product_int){ get_Monoid_Product_int__H_Table (), __h___t , .__h_data._ = { mappend , mempty , mconcat }});
}
#endif /* __Monoid_Product_int__H_IMPL__ */ 
#ifndef __Semigroup_Product_int__H_IMPL__
#define __Semigroup_Product_int__H_IMPL__
void free_Semigroup_Product_int (Semigroup_Product_int * this ) {
}
const Semigroup_Product_int__H_Table * const get_Semigroup_Product_int__H_Table () {
  static const Semigroup_Product_int__H_Table table  = { free_Semigroup_Product_int };
  return (&table );
}
Semigroup_Product_int Semigroup_Product_int_ctor (Monoid_Product_int_mappend_t mappend ) {
  return ((Semigroup_Product_int){ get_Semigroup_Product_int__H_Table (), __h___t , .__h_data._ = { mappend }});
}
#endif /* __Semigroup_Product_int__H_IMPL__ */ 
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
#ifndef __folds_List_Bool__H_IMPL__
#define __folds_List_Bool__H_IMPL__
List_Bool foldr_List_Bool (List_Bool (*folder) (List_Bool lhs , List_Bool rhs ), List_Bool neutral , List_List_Bool foldable ) {
  return ({ /* cicili#Let5429 */
      __auto_type head  = (((foldable -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((foldable -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block5431 */
      ({ /* cicili#Let5433 */
        bool __h_case_result  = ((foldable -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? foldr_List_Bool (folder , folder (neutral , head ), tail ) : ({ /* cicili#Let5438 */
            // ----------
            /* cicili#Block5440 */
            neutral ;
          }));
      });
    });
}
#endif /* __folds_List_Bool__H_IMPL__ */ 
#ifndef __Monoid_List_Bool__H_IMPL__
#define __Monoid_List_Bool__H_IMPL__
void free_Monoid_List_Bool (Monoid_List_Bool * this ) {
}
const Monoid_List_Bool__H_Table * const get_Monoid_List_Bool__H_Table () {
  static const Monoid_List_Bool__H_Table table  = { free_Monoid_List_Bool };
  return (&table );
}
Monoid_List_Bool Monoid_List_Bool_ctor (Monoid_List_Bool_mappend_t mappend , List_Bool mempty , Monoid_List_Bool_mconcat_t mconcat ) {
  return ((Monoid_List_Bool){ get_Monoid_List_Bool__H_Table (), __h___t , .__h_data._ = { mappend , mempty , mconcat }});
}
#endif /* __Monoid_List_Bool__H_IMPL__ */ 
#ifndef __Semigroup_List_Bool__H_IMPL__
#define __Semigroup_List_Bool__H_IMPL__
void free_Semigroup_List_Bool (Semigroup_List_Bool * this ) {
}
const Semigroup_List_Bool__H_Table * const get_Semigroup_List_Bool__H_Table () {
  static const Semigroup_List_Bool__H_Table table  = { free_Semigroup_List_Bool };
  return (&table );
}
Semigroup_List_Bool Semigroup_List_Bool_ctor (Monoid_List_Bool_mappend_t mappend ) {
  return ((Semigroup_List_Bool){ get_Semigroup_List_Bool__H_Table (), __h___t , .__h_data._ = { mappend }});
}
#endif /* __Semigroup_List_Bool__H_IMPL__ */ 
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
#ifndef __folds_List_int__H_IMPL__
#define __folds_List_int__H_IMPL__
List_int foldr_List_int (List_int (*folder) (List_int lhs , List_int rhs ), List_int neutral , List_List_int foldable ) {
  return ({ /* cicili#Let5519 */
      __auto_type head  = (((foldable -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((foldable -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block5521 */
      ({ /* cicili#Let5523 */
        bool __h_case_result  = ((foldable -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? foldr_List_int (folder , folder (neutral , head ), tail ) : ({ /* cicili#Let5528 */
            // ----------
            /* cicili#Block5530 */
            neutral ;
          }));
      });
    });
}
#endif /* __folds_List_int__H_IMPL__ */ 
#ifndef __Monoid_List_int__H_IMPL__
#define __Monoid_List_int__H_IMPL__
void free_Monoid_List_int (Monoid_List_int * this ) {
}
const Monoid_List_int__H_Table * const get_Monoid_List_int__H_Table () {
  static const Monoid_List_int__H_Table table  = { free_Monoid_List_int };
  return (&table );
}
Monoid_List_int Monoid_List_int_ctor (Monoid_List_int_mappend_t mappend , List_int mempty , Monoid_List_int_mconcat_t mconcat ) {
  return ((Monoid_List_int){ get_Monoid_List_int__H_Table (), __h___t , .__h_data._ = { mappend , mempty , mconcat }});
}
#endif /* __Monoid_List_int__H_IMPL__ */ 
#ifndef __Semigroup_List_int__H_IMPL__
#define __Semigroup_List_int__H_IMPL__
void free_Semigroup_List_int (Semigroup_List_int * this ) {
}
const Semigroup_List_int__H_Table * const get_Semigroup_List_int__H_Table () {
  static const Semigroup_List_int__H_Table table  = { free_Semigroup_List_int };
  return (&table );
}
Semigroup_List_int Semigroup_List_int_ctor (Monoid_List_int_mappend_t mappend ) {
  return ((Semigroup_List_int){ get_Semigroup_List_int__H_Table (), __h___t , .__h_data._ = { mappend }});
}
#endif /* __Semigroup_List_int__H_IMPL__ */ 
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
#ifndef __folds_List_char__H_IMPL__
#define __folds_List_char__H_IMPL__
List_char foldr_List_char (List_char (*folder) (List_char lhs , List_char rhs ), List_char neutral , List_List_char foldable ) {
  return ({ /* cicili#Let5609 */
      __auto_type head  = (((foldable -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((foldable -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block5611 */
      ({ /* cicili#Let5613 */
        bool __h_case_result  = ((foldable -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? foldr_List_char (folder , folder (neutral , head ), tail ) : ({ /* cicili#Let5618 */
            // ----------
            /* cicili#Block5620 */
            neutral ;
          }));
      });
    });
}
#endif /* __folds_List_char__H_IMPL__ */ 
#ifndef __Monoid_List_char__H_IMPL__
#define __Monoid_List_char__H_IMPL__
void free_Monoid_List_char (Monoid_List_char * this ) {
}
const Monoid_List_char__H_Table * const get_Monoid_List_char__H_Table () {
  static const Monoid_List_char__H_Table table  = { free_Monoid_List_char };
  return (&table );
}
Monoid_List_char Monoid_List_char_ctor (Monoid_List_char_mappend_t mappend , List_char mempty , Monoid_List_char_mconcat_t mconcat ) {
  return ((Monoid_List_char){ get_Monoid_List_char__H_Table (), __h___t , .__h_data._ = { mappend , mempty , mconcat }});
}
#endif /* __Monoid_List_char__H_IMPL__ */ 
#ifndef __Semigroup_List_char__H_IMPL__
#define __Semigroup_List_char__H_IMPL__
void free_Semigroup_List_char (Semigroup_List_char * this ) {
}
const Semigroup_List_char__H_Table * const get_Semigroup_List_char__H_Table () {
  static const Semigroup_List_char__H_Table table  = { free_Semigroup_List_char };
  return (&table );
}
Semigroup_List_char Semigroup_List_char_ctor (Monoid_List_char_mappend_t mappend ) {
  return ((Semigroup_List_char){ get_Semigroup_List_char__H_Table (), __h___t , .__h_data._ = { mappend }});
}
#endif /* __Semigroup_List_char__H_IMPL__ */ 
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
#ifndef __folds_List_char__H_IMPL__
#define __folds_List_char__H_IMPL__
List_char foldr_List_char (List_char (*folder) (List_char lhs , List_char rhs ), List_char neutral , List_List_char foldable ) {
  return ({ /* cicili#Let5699 */
      __auto_type head  = (((foldable -> __h_data ). Cons ). __h_0_mem );
      __auto_type tail  = (((foldable -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block5701 */
      ({ /* cicili#Let5703 */
        bool __h_case_result  = ((foldable -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? foldr_List_char (folder , folder (neutral , head ), tail ) : ({ /* cicili#Let5708 */
            // ----------
            /* cicili#Block5710 */
            neutral ;
          }));
      });
    });
}
#endif /* __folds_List_char__H_IMPL__ */ 
#ifndef __Monoid_String_char__H_IMPL__
#define __Monoid_String_char__H_IMPL__
void free_Monoid_String_char (Monoid_String_char * this ) {
}
const Monoid_String_char__H_Table * const get_Monoid_String_char__H_Table () {
  static const Monoid_String_char__H_Table table  = { free_Monoid_String_char };
  return (&table );
}
Monoid_String_char Monoid_String_char_ctor (Monoid_String_char_mappend_t mappend , List_char mempty , Monoid_String_char_mconcat_t mconcat ) {
  return ((Monoid_String_char){ get_Monoid_String_char__H_Table (), __h___t , .__h_data._ = { mappend , mempty , mconcat }});
}
#endif /* __Monoid_String_char__H_IMPL__ */ 
#ifndef __Semigroup_String_char__H_IMPL__
#define __Semigroup_String_char__H_IMPL__
void free_Semigroup_String_char (Semigroup_String_char * this ) {
}
const Semigroup_String_char__H_Table * const get_Semigroup_String_char__H_Table () {
  static const Semigroup_String_char__H_Table table  = { free_Semigroup_String_char };
  return (&table );
}
Semigroup_String_char Semigroup_String_char_ctor (Monoid_String_char_mappend_t mappend ) {
  return ((Semigroup_String_char){ get_Semigroup_String_char__H_Table (), __h___t , .__h_data._ = { mappend }});
}
#endif /* __Semigroup_String_char__H_IMPL__ */ 
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
#ifndef __Functor_List_int_int__H_IMPL__
#define __Functor_List_int_int__H_IMPL__
List_int fmap_Functor_List_int_int (int_to_int_t a_b , List_int input ) {
  return ({ /* cicili#Let5790 */
      __auto_type head  = (((input -> __h_data ). _ ). __h_0_mem );
      __auto_type tail  = (((input -> __h_data ). _ ). __h_1_mem );
      // ----------
      /* cicili#Block5792 */
      ({ /* cicili#Let5794 */
        bool __h_case_result  = ((input -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? Cons_int (a_b (head ), fmap_Functor_List_int_int (a_b , tail )) : ({ /* cicili#Let5801 */
            // ----------
            /* cicili#Block5803 */
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
#endif /* __Functor_List_int_int__H_IMPL__ */ 
Functor_List_int_int get_Functor_List_int_int () {
  return Functor_List_int_int_ctor ();
}
#ifndef __Functor_List_int_Bool__H_IMPL__
#define __Functor_List_int_Bool__H_IMPL__
List_Bool fmap_Functor_List_int_Bool (int_to_Bool_t a_b , List_int input ) {
  return ({ /* cicili#Let5833 */
      __auto_type head  = (((input -> __h_data ). _ ). __h_0_mem );
      __auto_type tail  = (((input -> __h_data ). _ ). __h_1_mem );
      // ----------
      /* cicili#Block5835 */
      ({ /* cicili#Let5837 */
        bool __h_case_result  = ((input -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? Cons_Bool (a_b (head ), fmap_Functor_List_int_Bool (a_b , tail )) : ({ /* cicili#Let5844 */
            // ----------
            /* cicili#Block5846 */
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
#endif /* __Functor_List_int_Bool__H_IMPL__ */ 
Functor_List_int_Bool get_Functor_List_int_Bool () {
  return Functor_List_int_Bool_ctor ();
}
#ifndef __Functor_List_char_char__H_IMPL__
#define __Functor_List_char_char__H_IMPL__
List_char fmap_Functor_List_char_char (char_to_char_t a_b , List_char input ) {
  return ({ /* cicili#Let5876 */
      __auto_type head  = (((input -> __h_data ). _ ). __h_0_mem );
      __auto_type tail  = (((input -> __h_data ). _ ). __h_1_mem );
      // ----------
      /* cicili#Block5878 */
      ({ /* cicili#Let5880 */
        bool __h_case_result  = ((input -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? Cons_char (a_b (head ), fmap_Functor_List_char_char (a_b , tail )) : ({ /* cicili#Let5887 */
            // ----------
            /* cicili#Block5889 */
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
#endif /* __Functor_List_char_char__H_IMPL__ */ 
Functor_List_char_char get_Functor_List_char_char () {
  return Functor_List_char_char_ctor ();
}
#ifndef __Functor_List_char_Bool__H_IMPL__
#define __Functor_List_char_Bool__H_IMPL__
List_Bool fmap_Functor_List_char_Bool (char_to_Bool_t a_b , List_char input ) {
  return ({ /* cicili#Let5919 */
      __auto_type head  = (((input -> __h_data ). _ ). __h_0_mem );
      __auto_type tail  = (((input -> __h_data ). _ ). __h_1_mem );
      // ----------
      /* cicili#Block5921 */
      ({ /* cicili#Let5923 */
        bool __h_case_result  = ((input -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? Cons_Bool (a_b (head ), fmap_Functor_List_char_Bool (a_b , tail )) : ({ /* cicili#Let5930 */
            // ----------
            /* cicili#Block5932 */
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
#endif /* __Functor_List_char_Bool__H_IMPL__ */ 
Functor_List_char_Bool get_Functor_List_char_Bool () {
  return Functor_List_char_Bool_ctor ();
}
#ifndef __Functor_Maybe_int_int__H_IMPL__
#define __Functor_Maybe_int_int__H_IMPL__
Maybe_int fmap_Functor_Maybe_int_int (int_to_int_t a_b , Maybe_int input ) {
  return ({ /* cicili#Let5962 */
      __auto_type val  = (((input . __h_data ). Just ). __h_0_mem );
      // ----------
      /* cicili#Block5964 */
      ({ /* cicili#Let5966 */
        bool __h_case_result  = ((input . __h_ctor ) ==  __h_Just_t  );
        // ----------
        ((__h_case_result ) ? Just_int (a_b (val )) : ({ /* cicili#Let5976 */
            // ----------
            /* cicili#Block5978 */
            Nothing_int ();
          }));
      });
    });
}
void free_Functor_Maybe_int_int (Functor_Maybe_int_int * this ) {
}
const Functor_Maybe_int_int__H_Table * const get_Functor_Maybe_int_int__H_Table () {
  static const Functor_Maybe_int_int__H_Table table  = { free_Functor_Maybe_int_int , fmap_Functor_Maybe_int_int };
  return (&table );
}
Functor_Maybe_int_int Functor_Maybe_int_int_ctor () {
  return ((Functor_Maybe_int_int){ get_Functor_Maybe_int_int__H_Table (), __h___t });
}
#endif /* __Functor_Maybe_int_int__H_IMPL__ */ 
Functor_Maybe_int_int get_Functor_Maybe_int_int () {
  return Functor_Maybe_int_int_ctor ();
}
#ifndef __Functor_Maybe_int_Bool__H_IMPL__
#define __Functor_Maybe_int_Bool__H_IMPL__
Maybe_Bool fmap_Functor_Maybe_int_Bool (int_to_Bool_t a_b , Maybe_int input ) {
  return ({ /* cicili#Let6008 */
      __auto_type val  = (((input . __h_data ). Just ). __h_0_mem );
      // ----------
      /* cicili#Block6010 */
      ({ /* cicili#Let6012 */
        bool __h_case_result  = ((input . __h_ctor ) ==  __h_Just_t  );
        // ----------
        ((__h_case_result ) ? Just_Bool (a_b (val )) : ({ /* cicili#Let6022 */
            // ----------
            /* cicili#Block6024 */
            Nothing_Bool ();
          }));
      });
    });
}
void free_Functor_Maybe_int_Bool (Functor_Maybe_int_Bool * this ) {
}
const Functor_Maybe_int_Bool__H_Table * const get_Functor_Maybe_int_Bool__H_Table () {
  static const Functor_Maybe_int_Bool__H_Table table  = { free_Functor_Maybe_int_Bool , fmap_Functor_Maybe_int_Bool };
  return (&table );
}
Functor_Maybe_int_Bool Functor_Maybe_int_Bool_ctor () {
  return ((Functor_Maybe_int_Bool){ get_Functor_Maybe_int_Bool__H_Table (), __h___t });
}
#endif /* __Functor_Maybe_int_Bool__H_IMPL__ */ 
Functor_Maybe_int_Bool get_Functor_Maybe_int_Bool () {
  return Functor_Maybe_int_Bool_ctor ();
}
#ifndef __Functor_Maybe_char_char__H_IMPL__
#define __Functor_Maybe_char_char__H_IMPL__
Maybe_char fmap_Functor_Maybe_char_char (char_to_char_t a_b , Maybe_char input ) {
  return ({ /* cicili#Let6054 */
      __auto_type val  = (((input . __h_data ). Just ). __h_0_mem );
      // ----------
      /* cicili#Block6056 */
      ({ /* cicili#Let6058 */
        bool __h_case_result  = ((input . __h_ctor ) ==  __h_Just_t  );
        // ----------
        ((__h_case_result ) ? Just_char (a_b (val )) : ({ /* cicili#Let6068 */
            // ----------
            /* cicili#Block6070 */
            Nothing_char ();
          }));
      });
    });
}
void free_Functor_Maybe_char_char (Functor_Maybe_char_char * this ) {
}
const Functor_Maybe_char_char__H_Table * const get_Functor_Maybe_char_char__H_Table () {
  static const Functor_Maybe_char_char__H_Table table  = { free_Functor_Maybe_char_char , fmap_Functor_Maybe_char_char };
  return (&table );
}
Functor_Maybe_char_char Functor_Maybe_char_char_ctor () {
  return ((Functor_Maybe_char_char){ get_Functor_Maybe_char_char__H_Table (), __h___t });
}
#endif /* __Functor_Maybe_char_char__H_IMPL__ */ 
Functor_Maybe_char_char get_Functor_Maybe_char_char () {
  return Functor_Maybe_char_char_ctor ();
}
#ifndef __Functor_Maybe_char_Bool__H_IMPL__
#define __Functor_Maybe_char_Bool__H_IMPL__
Maybe_Bool fmap_Functor_Maybe_char_Bool (char_to_Bool_t a_b , Maybe_char input ) {
  return ({ /* cicili#Let6100 */
      __auto_type val  = (((input . __h_data ). Just ). __h_0_mem );
      // ----------
      /* cicili#Block6102 */
      ({ /* cicili#Let6104 */
        bool __h_case_result  = ((input . __h_ctor ) ==  __h_Just_t  );
        // ----------
        ((__h_case_result ) ? Just_Bool (a_b (val )) : ({ /* cicili#Let6114 */
            // ----------
            /* cicili#Block6116 */
            Nothing_Bool ();
          }));
      });
    });
}
void free_Functor_Maybe_char_Bool (Functor_Maybe_char_Bool * this ) {
}
const Functor_Maybe_char_Bool__H_Table * const get_Functor_Maybe_char_Bool__H_Table () {
  static const Functor_Maybe_char_Bool__H_Table table  = { free_Functor_Maybe_char_Bool , fmap_Functor_Maybe_char_Bool };
  return (&table );
}
Functor_Maybe_char_Bool Functor_Maybe_char_Bool_ctor () {
  return ((Functor_Maybe_char_Bool){ get_Functor_Maybe_char_Bool__H_Table (), __h___t });
}
#endif /* __Functor_Maybe_char_Bool__H_IMPL__ */ 
Functor_Maybe_char_Bool get_Functor_Maybe_char_Bool () {
  return Functor_Maybe_char_Bool_ctor ();
}
