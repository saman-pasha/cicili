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
  { /* cicili#Let363 */
    List_int * instance  = malloc (sizeof(List_int));
    // ----------
    (*instance ) = ((List_int){ __h_Empty_t });
    return instance ;
  }
}
List_int * __h_Cons_int_ctor (int head , struct List_int * tail ) {
  { /* cicili#Let366 */
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
    { /* cicili#Let375 */
      int item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_int ();
      else
        return __h_Cons_int_ctor (item , new_List_int_Pure ((++buf ), (--len )));
    }
}
void release_List_int (List_int * list ) {
  { /* cicili#Let389 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block391 */
    ({ /* cicili#Let393 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block396 */
          release_List_int (tail );
          free (list );
        }
    });
  }
}
List_int * next_List_int (List_int * list ) {
  return ({ /* cicili#Let405 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block407 */
    ({ /* cicili#Let409 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? tail  : ({ /* cicili#Let413 */
        // ----------
        /* cicili#Block415 */
        Empty_int ();
      }));
    });
  });
}
Maybe_int nth_List_int (int index , List_int * list ) {
  return ({ /* cicili#Let424 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block426 */
    ({ /* cicili#Let428 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (((index  ==  0 )) ? Just_int (head ) : nth_List_int ((--index ), tail )) : ({ /* cicili#Let435 */
        // ----------
        /* cicili#Block437 */
        Nothing_int ();
      }));
    });
  });
}
List_int * drop_List_int (int index , List_int * list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let447 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block449 */
      ({ /* cicili#Let451 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? drop_List_int ((--index ), tail ) : ({ /* cicili#Let456 */
          // ----------
          /* cicili#Block458 */
          Empty_int ();
        }));
      });
    }));
}
int len_List_int (List_int * list ) {
  return ({ /* cicili#Let466 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block468 */
    ({ /* cicili#Let470 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (1 +  len_List_int (tail ) ) : ({ /* cicili#Let475 */
        // ----------
        /* cicili#Block477 */
        0;
      }));
    });
  });
}
int has_len_List_int (List_int * list , int desired ) {
  return ({ /* cicili#Let484 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block486 */
    ({ /* cicili#Let488 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  has_len_List_int (tail , (--desired )) )) : ({ /* cicili#Let494 */
        // ----------
        /* cicili#Block496 */
        0;
      }));
    });
  });
}
List_int * take_List_int (int len , List_int * list ) {
  return ({ /* cicili#Let504 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block506 */
    ({ /* cicili#Let508 */
      bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
      // ----------
      ((__h_case_result ) ? __h_Cons_int_ctor (head , take_List_int ((--len ), tail )) : ({ /* cicili#Let520 */
        // ----------
        /* cicili#Block522 */
        Empty_int ();
      }));
    });
  });
}
List_int * append_List_int (List_int * llist , List_int * rlist ) {
  return ({ /* cicili#Let531 */
    __auto_type head  = (((llist -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((llist -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block533 */
    ({ /* cicili#Let535 */
      bool __h_case_result  = ((llist -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? __h_Cons_int_ctor (head , append_List_int (tail , rlist )) : ({ /* cicili#Let547 */
        // ----------
        /* cicili#Block549 */
        rlist ;
      }));
    });
  });
}
void show_List_int (List_int * list ) {
  { /* cicili#Let557 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block559 */
    ({ /* cicili#Let561 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block564 */
          { /* cicili#Let568 */
            // ----------
            /* cicili#Block570 */
            ({ /* cicili#Let572 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block575 */
                  printf ("%d", head );
                  putchar (' ');
                }
              else
                { /* cicili#Let580 */
                  // ----------
                  /* cicili#Block582 */
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
  { /* cicili#Let606 */
    List_char * instance  = malloc (sizeof(List_char));
    // ----------
    (*instance ) = ((List_char){ __h_Empty_t });
    return instance ;
  }
}
List_char * __h_Cons_char_ctor (char head , struct List_char * tail ) {
  { /* cicili#Let609 */
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
    { /* cicili#Let618 */
      char item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_char ();
      else
        return __h_Cons_char_ctor (item , new_List_char_Pure ((++buf ), (--len )));
    }
}
void release_List_char (List_char * list ) {
  { /* cicili#Let632 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block634 */
    ({ /* cicili#Let636 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block639 */
          release_List_char (tail );
          free (list );
        }
    });
  }
}
List_char * next_List_char (List_char * list ) {
  return ({ /* cicili#Let648 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block650 */
    ({ /* cicili#Let652 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? tail  : ({ /* cicili#Let656 */
        // ----------
        /* cicili#Block658 */
        Empty_char ();
      }));
    });
  });
}
Maybe_char nth_List_char (int index , List_char * list ) {
  return ({ /* cicili#Let667 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block669 */
    ({ /* cicili#Let671 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (((index  ==  0 )) ? Just_char (head ) : nth_List_char ((--index ), tail )) : ({ /* cicili#Let678 */
        // ----------
        /* cicili#Block680 */
        Nothing_char ();
      }));
    });
  });
}
List_char * drop_List_char (int index , List_char * list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let690 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block692 */
      ({ /* cicili#Let694 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? drop_List_char ((--index ), tail ) : ({ /* cicili#Let699 */
          // ----------
          /* cicili#Block701 */
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
  return ({ /* cicili#Let727 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block729 */
    ({ /* cicili#Let731 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  has_len_List_char (tail , (--desired )) )) : ({ /* cicili#Let737 */
        // ----------
        /* cicili#Block739 */
        0;
      }));
    });
  });
}
List_char * take_List_char (int len , List_char * list ) {
  return ({ /* cicili#Let747 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block749 */
    ({ /* cicili#Let751 */
      bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
      // ----------
      ((__h_case_result ) ? __h_Cons_char_ctor (head , take_List_char ((--len ), tail )) : ({ /* cicili#Let763 */
        // ----------
        /* cicili#Block765 */
        Empty_char ();
      }));
    });
  });
}
List_char * append_List_char (List_char * llist , List_char * rlist ) {
  return ({ /* cicili#Let774 */
    __auto_type head  = (((llist -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((llist -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block776 */
    ({ /* cicili#Let778 */
      bool __h_case_result  = ((llist -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? __h_Cons_char_ctor (head , append_List_char (tail , rlist )) : ({ /* cicili#Let790 */
        // ----------
        /* cicili#Block792 */
        rlist ;
      }));
    });
  });
}
void show_List_char (List_char * list ) {
  { /* cicili#Let800 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block802 */
    ({ /* cicili#Let804 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block807 */
          { /* cicili#Let811 */
            // ----------
            /* cicili#Block813 */
            ({ /* cicili#Let815 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block818 */
                  printf ("%c", head );
                  putchar (' ');
                }
              else
                { /* cicili#Let823 */
                  // ----------
                  /* cicili#Block825 */
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
    { /* cicili#Let839 */
      char item  = (*buf );
      // ----------
      if (item  ==  '\0' )
        return Empty_char ();
      else
        return __h_Cons_char_ctor (item , new_String_Const ((++buf )));
    }
}
void show_String (List_char * list ) {
  { /* cicili#Let853 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block855 */
    ({ /* cicili#Let857 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        ({ /* cicili#Progn860 */
          printf ("%c", head );
          show_String (tail );
        });
    });
  }
}
Range_int * Empty_Range_int () {
  { /* cicili#Let874 */
    Range_int * instance  = malloc (sizeof(Range_int));
    // ----------
    (*instance ) = ((Range_int){ __h_Empty_t });
    return instance ;
  }
}
Range_int * __h_Cons_Range_int_ctor (int from , struct Range_int * tail , int to , int step ) {
  { /* cicili#Let877 */
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
  { /* cicili#Let895 */
    __auto_type from  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    __auto_type to  = (((list -> __h_data ). Cons ). __h_2_mem );
    __auto_type step  = (((list -> __h_data ). Cons ). __h_3_mem );
    // ----------
    /* cicili#Block897 */
    ({ /* cicili#Let899 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block902 */
          release_Range_int (tail );
          free (list );
        }
    });
  }
}
Range_int * next_Range_int (Range_int * list ) {
  return ({ /* cicili#Let911 */
    __auto_type from  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type to  = (((list -> __h_data ). Cons ). __h_2_mem );
    __auto_type step  = (((list -> __h_data ). Cons ). __h_3_mem );
    // ----------
    /* cicili#Block913 */
    ({ /* cicili#Let915 */
      bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((from  +  step  ) <=  to  ) );
      // ----------
      ((__h_case_result ) ? __h_Cons_Range_int_ctor ((from  +  step  ), Empty_Range_int (), to , step ) : ({ /* cicili#Let926 */
        // ----------
        /* cicili#Block928 */
        Empty_Range_int ();
      }));
    });
  });
}
Range_int * take_Range_int (int len , Range_int * list ) {
  return ({ /* cicili#Let937 */
    __auto_type from  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type to  = (((list -> __h_data ). Cons ). __h_2_mem );
    __auto_type step  = (((list -> __h_data ). Cons ). __h_3_mem );
    // ----------
    /* cicili#Block939 */
    ({ /* cicili#Let941 */
      bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
      // ----------
      ((__h_case_result ) ? ({ /* cicili#Let944 */
        __auto_type ne  __attribute__((__cleanup__(free_Range_int ))) = next_Range_int (list );
        // ----------
        ({ /* cicili#Let950 */
          // ----------
          /* cicili#Block952 */
          ({ /* cicili#Let954 */
            bool __h_case_result  = ((ne -> __h_ctor ) ==  __h_Cons_t  );
            // ----------
            ((__h_case_result ) ? __h_Cons_Range_int_ctor (from , take_Range_int ((--len ), ne ), to , step ) : ({ /* cicili#Let965 */
              // ----------
              /* cicili#Block967 */
              __h_Cons_Range_int_ctor (from , ne , to , step );
            }));
          });
        });
      }) : ({ /* cicili#Let977 */
        // ----------
        /* cicili#Block979 */
        Empty_Range_int ();
      }));
    });
  });
}
void show_Range_int (Range_int * list ) {
  { /* cicili#Let987 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block989 */
    ({ /* cicili#Let991 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Let996 */
          // ----------
          /* cicili#Block998 */
          ({ /* cicili#Let1000 */
            bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
            // ----------
            if (__h_case_result )
              { /* cicili#Block1003 */
                printf ("%d", head );
                putchar (' ');
                show_Range_int (tail );
              }
            else
              { /* cicili#Let1009 */
                // ----------
                /* cicili#Block1011 */
                printf ("%d", head );
              }
          });
        }
    });
  }
}
