#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "../haskell.h"
Bool False () {
  return ((Bool){ __h_False_t });
}
Bool True () {
  return ((Bool){ __h_True_t });
}
Ordering LT () {
  return ((Ordering){ __h_LT_t });
}
Ordering EQ () {
  return ((Ordering){ __h_EQ_t });
}
Ordering GT () {
  return ((Ordering){ __h_GT_t });
}
Maybe_int Nothing_int () {
  return ((Maybe_int){ __h_Nothing_t });
}
Maybe_int Just_int (int value ) {
  return ((Maybe_int){ __h_Just_t , .__h_data.Just = { value }});
}
List_int * Empty_int () {
  { /* cicili#Let389 */
    List_int * instance  = malloc (sizeof(List_int));
    // ----------
    (*instance ) = ((List_int){ __h_Empty_t });
    return instance ;
  }
}
List_int * __h_Cons_int_ctor (int head , struct List_int * tail ) {
  { /* cicili#Let392 */
    List_int * instance  = malloc (sizeof(List_int));
    // ----------
    (*instance ) = ((List_int){ __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
List_int * new_List_int_Pure (const int * buf , int len ) {
  if (buf  ==  NULL  )
    return Empty_int ();
  else
    { /* cicili#Let400 */
      int item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_int ();
      else
        return __h_Cons_int_ctor (item , new_List_int_Pure ((++buf ), (--len )));
    }
}
void release_List_int (List_int * list ) {
  { /* cicili#Let414 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block416 */
    ({ /* cicili#Let418 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block421 */
          release_List_int (tail );
          free (list );
        }
    });
  }
}
List_int * next_List_int (List_int * list ) {
  return ({ /* cicili#Let428 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block430 */
    ({ /* cicili#Let432 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? tail  : ({ /* cicili#Let436 */
        // ----------
        /* cicili#Block438 */
        Empty_int ();
      }));
    });
  });
}
Maybe_int nth_List_int (int index , List_int * list ) {
  return ({ /* cicili#Let446 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block448 */
    ({ /* cicili#Let450 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (((index  ==  0 )) ? Just_int (head ) : nth_List_int ((--index ), tail )) : ({ /* cicili#Let457 */
        // ----------
        /* cicili#Block459 */
        Nothing_int ();
      }));
    });
  });
}
List_int * drop_List_int (int index , List_int * list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let467 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block469 */
      ({ /* cicili#Let471 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? drop_List_int ((--index ), tail ) : ({ /* cicili#Let476 */
          // ----------
          /* cicili#Block478 */
          Empty_int ();
        }));
      });
    }));
}
int len_List_int (List_int * list ) {
  return ({ /* cicili#Let485 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block487 */
    ({ /* cicili#Let489 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (1 +  len_List_int (tail ) ) : ({ /* cicili#Let494 */
        // ----------
        /* cicili#Block496 */
        0;
      }));
    });
  });
}
int has_len_List_int (List_int * list , int desired ) {
  return ({ /* cicili#Let502 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block504 */
    ({ /* cicili#Let506 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  has_len_List_int (tail , (--desired )) )) : ({ /* cicili#Let512 */
        // ----------
        /* cicili#Block514 */
        0;
      }));
    });
  });
}
List_int * take_List_int (int len , List_int * list ) {
  return ({ /* cicili#Let520 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block522 */
    ({ /* cicili#Let524 */
      bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
      // ----------
      ((__h_case_result ) ? __h_Cons_int_ctor (head , take_List_int ((--len ), tail )) : ({ /* cicili#Let536 */
        // ----------
        /* cicili#Block538 */
        Empty_int ();
      }));
    });
  });
}
List_int * append_List_int (List_int * llist , List_int * rlist ) {
  return ({ /* cicili#Let545 */
    __auto_type head  = (((llist -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((llist -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block547 */
    ({ /* cicili#Let549 */
      bool __h_case_result  = ((llist -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? __h_Cons_int_ctor (head , append_List_int (tail , rlist )) : ({ /* cicili#Let561 */
        // ----------
        /* cicili#Block563 */
        rlist ;
      }));
    });
  });
}
void show_List_int (List_int * list ) {
  { /* cicili#Let569 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block571 */
    ({ /* cicili#Let573 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block576 */
          { /* cicili#Let580 */
            // ----------
            /* cicili#Block582 */
            ({ /* cicili#Let584 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block587 */
                  printf ("%d", head );
                  putchar (' ');
                }
              else
                { /* cicili#Let592 */
                  // ----------
                  /* cicili#Block594 */
                  printf ("%d", head );
                }
            });
          }
          show_List_int (tail );
        }
    });
  }
}
Maybe_char Nothing_char () {
  return ((Maybe_char){ __h_Nothing_t });
}
Maybe_char Just_char (char value ) {
  return ((Maybe_char){ __h_Just_t , .__h_data.Just = { value }});
}
List_char * Empty_char () {
  { /* cicili#Let613 */
    List_char * instance  = malloc (sizeof(List_char));
    // ----------
    (*instance ) = ((List_char){ __h_Empty_t });
    return instance ;
  }
}
List_char * __h_Cons_char_ctor (char head , struct List_char * tail ) {
  { /* cicili#Let616 */
    List_char * instance  = malloc (sizeof(List_char));
    // ----------
    (*instance ) = ((List_char){ __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
List_char * new_List_char_Pure (const char * buf , int len ) {
  if (buf  ==  NULL  )
    return Empty_char ();
  else
    { /* cicili#Let624 */
      char item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_char ();
      else
        return __h_Cons_char_ctor (item , new_List_char_Pure ((++buf ), (--len )));
    }
}
void release_List_char (List_char * list ) {
  { /* cicili#Let638 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block640 */
    ({ /* cicili#Let642 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block645 */
          release_List_char (tail );
          free (list );
        }
    });
  }
}
List_char * next_List_char (List_char * list ) {
  return ({ /* cicili#Let652 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block654 */
    ({ /* cicili#Let656 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? tail  : ({ /* cicili#Let660 */
        // ----------
        /* cicili#Block662 */
        Empty_char ();
      }));
    });
  });
}
Maybe_char nth_List_char (int index , List_char * list ) {
  return ({ /* cicili#Let670 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block672 */
    ({ /* cicili#Let674 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (((index  ==  0 )) ? Just_char (head ) : nth_List_char ((--index ), tail )) : ({ /* cicili#Let681 */
        // ----------
        /* cicili#Block683 */
        Nothing_char ();
      }));
    });
  });
}
List_char * drop_List_char (int index , List_char * list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let691 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block693 */
      ({ /* cicili#Let695 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? drop_List_char ((--index ), tail ) : ({ /* cicili#Let700 */
          // ----------
          /* cicili#Block702 */
          Empty_char ();
        }));
      });
    }));
}
int len_List_char (List_char * list ) {
  return ({ /* cicili#Let709 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block711 */
    ({ /* cicili#Let713 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (1 +  len_List_char (tail ) ) : ({ /* cicili#Let718 */
        // ----------
        /* cicili#Block720 */
        0;
      }));
    });
  });
}
int has_len_List_char (List_char * list , int desired ) {
  return ({ /* cicili#Let726 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block728 */
    ({ /* cicili#Let730 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  has_len_List_char (tail , (--desired )) )) : ({ /* cicili#Let736 */
        // ----------
        /* cicili#Block738 */
        0;
      }));
    });
  });
}
List_char * take_List_char (int len , List_char * list ) {
  return ({ /* cicili#Let744 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block746 */
    ({ /* cicili#Let748 */
      bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
      // ----------
      ((__h_case_result ) ? __h_Cons_char_ctor (head , take_List_char ((--len ), tail )) : ({ /* cicili#Let760 */
        // ----------
        /* cicili#Block762 */
        Empty_char ();
      }));
    });
  });
}
List_char * append_List_char (List_char * llist , List_char * rlist ) {
  return ({ /* cicili#Let769 */
    __auto_type head  = (((llist -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((llist -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block771 */
    ({ /* cicili#Let773 */
      bool __h_case_result  = ((llist -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? __h_Cons_char_ctor (head , append_List_char (tail , rlist )) : ({ /* cicili#Let785 */
        // ----------
        /* cicili#Block787 */
        rlist ;
      }));
    });
  });
}
void show_List_char (List_char * list ) {
  { /* cicili#Let793 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block795 */
    ({ /* cicili#Let797 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block800 */
          { /* cicili#Let804 */
            // ----------
            /* cicili#Block806 */
            ({ /* cicili#Let808 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block811 */
                  printf ("%c", head );
                  putchar (' ');
                }
              else
                { /* cicili#Let816 */
                  // ----------
                  /* cicili#Block818 */
                  printf ("%c", head );
                }
            });
          }
          show_List_char (tail );
        }
    });
  }
}
List_char * new_String_Const (const char * buf ) {
  if (buf  ==  NULL  )
    return Empty_char ();
  else
    { /* cicili#Let827 */
      char item  = (*buf );
      // ----------
      if (item  ==  '\0' )
        return Empty_char ();
      else
        return __h_Cons_char_ctor (item , new_String_Const ((++buf )));
    }
}
void show_String (List_char * list ) {
  { /* cicili#Let841 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block843 */
    ({ /* cicili#Let845 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        ({ /* cicili#Progn848 */
          printf ("%c", head );
          show_String (tail );
        });
    });
  }
}
Range_int * Empty_Range_int () {
  { /* cicili#Let857 */
    Range_int * instance  = malloc (sizeof(Range_int));
    // ----------
    (*instance ) = ((Range_int){ __h_Empty_t });
    return instance ;
  }
}
Range_int * __h_Cons_Range_int_ctor (int from , struct Range_int * tail , int to , int step ) {
  { /* cicili#Let860 */
    Range_int * instance  = malloc (sizeof(Range_int));
    // ----------
    (*instance ) = ((Range_int){ __h_Cons_t , .__h_data.Cons = { from , tail , to , step }});
    return instance ;
  }
}
Range_int * new_Range_int (int from , int to , int step ) {
  return (((from  <=  to  )) ? __h_Cons_Range_int_ctor (from , Empty_Range_int (), to , step ) : Empty_Range_int ());
}
void release_Range_int (Range_int * list ) {
  { /* cicili#Let877 */
    __auto_type from  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    __auto_type to  = (((list -> __h_data ). Cons ). __h_2_mem );
    __auto_type step  = (((list -> __h_data ). Cons ). __h_3_mem );
    // ----------
    /* cicili#Block879 */
    ({ /* cicili#Let881 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block884 */
          release_Range_int (tail );
          free (list );
        }
    });
  }
}
Range_int * next_Range_int (Range_int * list ) {
  return ({ /* cicili#Let891 */
    __auto_type from  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type to  = (((list -> __h_data ). Cons ). __h_2_mem );
    __auto_type step  = (((list -> __h_data ). Cons ). __h_3_mem );
    // ----------
    /* cicili#Block893 */
    ({ /* cicili#Let895 */
      bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((from  +  step  ) <=  to  ) );
      // ----------
      ((__h_case_result ) ? __h_Cons_Range_int_ctor ((from  +  step  ), Empty_Range_int (), to , step ) : ({ /* cicili#Let906 */
        // ----------
        /* cicili#Block908 */
        Empty_Range_int ();
      }));
    });
  });
}
Range_int * take_Range_int (int len , Range_int * list ) {
  return ({ /* cicili#Let915 */
    __auto_type from  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type to  = (((list -> __h_data ). Cons ). __h_2_mem );
    __auto_type step  = (((list -> __h_data ). Cons ). __h_3_mem );
    // ----------
    /* cicili#Block917 */
    ({ /* cicili#Let919 */
      bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
      // ----------
      ((__h_case_result ) ? ({ /* cicili#Let922 */
        __auto_type ne  __attribute__((__cleanup__(free_Range_int ))) = next_Range_int (list );
        // ----------
        ({ /* cicili#Let928 */
          // ----------
          /* cicili#Block930 */
          ({ /* cicili#Let932 */
            bool __h_case_result  = ((ne -> __h_ctor ) ==  __h_Cons_t  );
            // ----------
            ((__h_case_result ) ? __h_Cons_Range_int_ctor (from , take_Range_int ((--len ), ne ), to , step ) : ({ /* cicili#Let943 */
              // ----------
              /* cicili#Block945 */
              __h_Cons_Range_int_ctor (from , ne , to , step );
            }));
          });
        });
      }) : ({ /* cicili#Let955 */
        // ----------
        /* cicili#Block957 */
        Empty_Range_int ();
      }));
    });
  });
}
void show_Range_int (Range_int * list ) {
  { /* cicili#Let964 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block966 */
    ({ /* cicili#Let968 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Let973 */
          // ----------
          /* cicili#Block975 */
          ({ /* cicili#Let977 */
            bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
            // ----------
            if (__h_case_result )
              { /* cicili#Block980 */
                printf ("%d", head );
                putchar (' ');
                show_Range_int (tail );
              }
            else
              { /* cicili#Let986 */
                // ----------
                /* cicili#Block988 */
                printf ("%d", head );
              }
          });
        }
    });
  }
}
int foldr_int (int (*folder) (int lhs , int rhs ), int neutral , List_int * foldable ) {
  return ({ /* cicili#Let996 */
    __auto_type head  = (((foldable -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((foldable -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block998 */
    ({ /* cicili#Let1000 */
      bool __h_case_result  = ((foldable -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? foldr_int (folder , folder (neutral , head ), tail ) : ({ /* cicili#Let1005 */
        // ----------
        /* cicili#Block1007 */
        neutral ;
      }));
    });
  });
}
Monoid_Sum_int __h_m_Sum_int_ctor (int mempty , Monoid_Sum_int_mappend mappend , Monoid_Sum_int_mconcat mconcat ) {
  return ((Monoid_Sum_int){ __h___t , .__h_data._ = { mempty , mappend , mconcat }});
}
int Monoid_Sum_int_mappend_int_s (int x , int y ) {
  return (x  +  y  );
}
int Monoid_Sum_int_mconcat_int_s (List_int * l ) {
  return foldr_int (Monoid_Sum_int_mappend_int_s , 0, l );
}
Monoid_Sum_int get_Monoid_Sum_int () {
  return __h_m_Sum_int_ctor (0, Monoid_Sum_int_mappend_int_s , Monoid_Sum_int_mconcat_int_s );
}
Monoid_Product_int __h_m_Product_int_ctor (int mempty , Monoid_Product_int_mappend mappend , Monoid_Product_int_mconcat mconcat ) {
  return ((Monoid_Product_int){ __h___t , .__h_data._ = { mempty , mappend , mconcat }});
}
int Monoid_Product_int_mappend_int_s (int x , int y ) {
  return (x  *  y  );
}
int Monoid_Product_int_mconcat_int_s (List_int * l ) {
  return foldr_int (Monoid_Product_int_mappend_int_s , 1, l );
}
Monoid_Product_int get_Monoid_Product_int () {
  return __h_m_Product_int_ctor (1, Monoid_Product_int_mappend_int_s , Monoid_Product_int_mconcat_int_s );
}
