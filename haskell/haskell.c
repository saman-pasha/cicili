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
List_int Empty_int () {
  { /* cicili#Let756 */
    List_int instance  = malloc (sizeof(__h_List_int_class_t));
    // ----------
    (*instance ) = ((__h_List_int_class_t){ __h_Empty_t });
    return instance ;
  }
}
List_int __h_Cons_int_ctor (int head , List_int tail ) {
  { /* cicili#Let759 */
    List_int instance  = malloc (sizeof(__h_List_int_class_t));
    // ----------
    (*instance ) = ((__h_List_int_class_t){ __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
List_int new_List_int_Pure (const int * buf , int len ) {
  if (buf  ==  NULL  )
    return Empty_int ();
  else
    { /* cicili#Let767 */
      int item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_int ();
      else
        return __h_Cons_int_ctor (item , new_List_int_Pure ((++buf ), (--len )));
    }
}
void release_List_int (List_int list ) {
  { /* cicili#Let781 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block783 */
    ({ /* cicili#Let785 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block788 */
          release_List_int (tail );
          free (list );
        }
    });
  }
}
List_int next_List_int (List_int list ) {
  return ({ /* cicili#Let795 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block797 */
    ({ /* cicili#Let799 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? tail  : ({ /* cicili#Let803 */
        // ----------
        /* cicili#Block805 */
        Empty_int ();
      }));
    });
  });
}
Maybe_int nth_List_int (int index , List_int list ) {
  return ({ /* cicili#Let813 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block815 */
    ({ /* cicili#Let817 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (((index  ==  0 )) ? Just_int (head ) : nth_List_int ((--index ), tail )) : ({ /* cicili#Let824 */
        // ----------
        /* cicili#Block826 */
        Nothing_int ();
      }));
    });
  });
}
List_int drop_List_int (int index , List_int list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let834 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block836 */
      ({ /* cicili#Let838 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? drop_List_int ((--index ), tail ) : ({ /* cicili#Let843 */
          // ----------
          /* cicili#Block845 */
          Empty_int ();
        }));
      });
    }));
}
int len_List_int (List_int list ) {
  return ({ /* cicili#Let852 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block854 */
    ({ /* cicili#Let856 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (1 +  len_List_int (tail ) ) : ({ /* cicili#Let861 */
        // ----------
        /* cicili#Block863 */
        0;
      }));
    });
  });
}
int has_len_List_int (List_int list , int desired ) {
  return ({ /* cicili#Let869 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block871 */
    ({ /* cicili#Let873 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  has_len_List_int (tail , (--desired )) )) : ({ /* cicili#Let879 */
        // ----------
        /* cicili#Block881 */
        0;
      }));
    });
  });
}
List_int take_List_int (int len , List_int list ) {
  return ({ /* cicili#Let887 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block889 */
    ({ /* cicili#Let891 */
      bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
      // ----------
      ((__h_case_result ) ? __h_Cons_int_ctor (head , take_List_int ((--len ), tail )) : ({ /* cicili#Let903 */
        // ----------
        /* cicili#Block905 */
        Empty_int ();
      }));
    });
  });
}
List_int append_List_int (List_int llist , List_int rlist ) {
  return ({ /* cicili#Let912 */
    __auto_type head  = (((llist -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((llist -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block914 */
    ({ /* cicili#Let916 */
      bool __h_case_result  = ((llist -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? __h_Cons_int_ctor (head , append_List_int (tail , rlist )) : ({ /* cicili#Let928 */
        // ----------
        /* cicili#Block930 */
        rlist ;
      }));
    });
  });
}
void show_List_int (List_int list ) {
  { /* cicili#Let936 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block938 */
    ({ /* cicili#Let940 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block943 */
          { /* cicili#Let947 */
            // ----------
            /* cicili#Block949 */
            ({ /* cicili#Let951 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block954 */
                  printf ("%d", head );
                  putchar (' ');
                }
              else
                { /* cicili#Let959 */
                  // ----------
                  /* cicili#Block961 */
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
List_char Empty_char () {
  { /* cicili#Let980 */
    List_char instance  = malloc (sizeof(__h_List_char_class_t));
    // ----------
    (*instance ) = ((__h_List_char_class_t){ __h_Empty_t });
    return instance ;
  }
}
List_char __h_Cons_char_ctor (char head , List_char tail ) {
  { /* cicili#Let983 */
    List_char instance  = malloc (sizeof(__h_List_char_class_t));
    // ----------
    (*instance ) = ((__h_List_char_class_t){ __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
List_char new_List_char_Pure (const char * buf , int len ) {
  if (buf  ==  NULL  )
    return Empty_char ();
  else
    { /* cicili#Let991 */
      char item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_char ();
      else
        return __h_Cons_char_ctor (item , new_List_char_Pure ((++buf ), (--len )));
    }
}
void release_List_char (List_char list ) {
  { /* cicili#Let1005 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1007 */
    ({ /* cicili#Let1009 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block1012 */
          release_List_char (tail );
          free (list );
        }
    });
  }
}
List_char next_List_char (List_char list ) {
  return ({ /* cicili#Let1019 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1021 */
    ({ /* cicili#Let1023 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? tail  : ({ /* cicili#Let1027 */
        // ----------
        /* cicili#Block1029 */
        Empty_char ();
      }));
    });
  });
}
Maybe_char nth_List_char (int index , List_char list ) {
  return ({ /* cicili#Let1037 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1039 */
    ({ /* cicili#Let1041 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (((index  ==  0 )) ? Just_char (head ) : nth_List_char ((--index ), tail )) : ({ /* cicili#Let1048 */
        // ----------
        /* cicili#Block1050 */
        Nothing_char ();
      }));
    });
  });
}
List_char drop_List_char (int index , List_char list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let1058 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1060 */
      ({ /* cicili#Let1062 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? drop_List_char ((--index ), tail ) : ({ /* cicili#Let1067 */
          // ----------
          /* cicili#Block1069 */
          Empty_char ();
        }));
      });
    }));
}
int len_List_char (List_char list ) {
  return ({ /* cicili#Let1076 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1078 */
    ({ /* cicili#Let1080 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (1 +  len_List_char (tail ) ) : ({ /* cicili#Let1085 */
        // ----------
        /* cicili#Block1087 */
        0;
      }));
    });
  });
}
int has_len_List_char (List_char list , int desired ) {
  return ({ /* cicili#Let1093 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1095 */
    ({ /* cicili#Let1097 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  has_len_List_char (tail , (--desired )) )) : ({ /* cicili#Let1103 */
        // ----------
        /* cicili#Block1105 */
        0;
      }));
    });
  });
}
List_char take_List_char (int len , List_char list ) {
  return ({ /* cicili#Let1111 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1113 */
    ({ /* cicili#Let1115 */
      bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
      // ----------
      ((__h_case_result ) ? __h_Cons_char_ctor (head , take_List_char ((--len ), tail )) : ({ /* cicili#Let1127 */
        // ----------
        /* cicili#Block1129 */
        Empty_char ();
      }));
    });
  });
}
List_char append_List_char (List_char llist , List_char rlist ) {
  return ({ /* cicili#Let1136 */
    __auto_type head  = (((llist -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((llist -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1138 */
    ({ /* cicili#Let1140 */
      bool __h_case_result  = ((llist -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? __h_Cons_char_ctor (head , append_List_char (tail , rlist )) : ({ /* cicili#Let1152 */
        // ----------
        /* cicili#Block1154 */
        rlist ;
      }));
    });
  });
}
void show_List_char (List_char list ) {
  { /* cicili#Let1160 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1162 */
    ({ /* cicili#Let1164 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block1167 */
          { /* cicili#Let1171 */
            // ----------
            /* cicili#Block1173 */
            ({ /* cicili#Let1175 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block1178 */
                  printf ("%c", head );
                  putchar (' ');
                }
              else
                { /* cicili#Let1183 */
                  // ----------
                  /* cicili#Block1185 */
                  printf ("%c", head );
                }
            });
          }
          show_List_char (tail );
        }
    });
  }
}
List_char new_String_Const (const char * buf ) {
  if (buf  ==  NULL  )
    return Empty_char ();
  else
    { /* cicili#Let1194 */
      char item  = (*buf );
      // ----------
      if (item  ==  '\0' )
        return Empty_char ();
      else
        return __h_Cons_char_ctor (item , new_String_Const ((++buf )));
    }
}
void show_String (List_char list ) {
  { /* cicili#Let1208 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1210 */
    ({ /* cicili#Let1212 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        ({ /* cicili#Progn1215 */
          printf ("%c", head );
          show_String (tail );
        });
    });
  }
}
Range_int Empty_Range_int () {
  { /* cicili#Let1224 */
    Range_int instance  = malloc (sizeof(__h_Range_int_class_t));
    // ----------
    (*instance ) = ((__h_Range_int_class_t){ __h_Empty_t });
    return instance ;
  }
}
Range_int __h_Cons_Range_int_ctor (int from , Range_int tail , int to , int step ) {
  { /* cicili#Let1227 */
    Range_int instance  = malloc (sizeof(__h_Range_int_class_t));
    // ----------
    (*instance ) = ((__h_Range_int_class_t){ __h_Cons_t , .__h_data.Cons = { from , tail , to , step }});
    return instance ;
  }
}
Range_int new_Range_int (int from , int to , int step ) {
  return (((from  <=  to  )) ? __h_Cons_Range_int_ctor (from , Empty_Range_int (), to , step ) : Empty_Range_int ());
}
void release_Range_int (Range_int list ) {
  { /* cicili#Let1244 */
    __auto_type from  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    __auto_type to  = (((list -> __h_data ). Cons ). __h_2_mem );
    __auto_type step  = (((list -> __h_data ). Cons ). __h_3_mem );
    // ----------
    /* cicili#Block1246 */
    ({ /* cicili#Let1248 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block1251 */
          release_Range_int (tail );
          free (list );
        }
    });
  }
}
Range_int next_Range_int (Range_int list ) {
  return ({ /* cicili#Let1258 */
    __auto_type from  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type to  = (((list -> __h_data ). Cons ). __h_2_mem );
    __auto_type step  = (((list -> __h_data ). Cons ). __h_3_mem );
    // ----------
    /* cicili#Block1260 */
    ({ /* cicili#Let1262 */
      bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((from  +  step  ) <=  to  ) );
      // ----------
      ((__h_case_result ) ? __h_Cons_Range_int_ctor ((from  +  step  ), Empty_Range_int (), to , step ) : ({ /* cicili#Let1273 */
        // ----------
        /* cicili#Block1275 */
        Empty_Range_int ();
      }));
    });
  });
}
Range_int take_Range_int (int len , Range_int list ) {
  return ({ /* cicili#Let1282 */
    __auto_type from  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type to  = (((list -> __h_data ). Cons ). __h_2_mem );
    __auto_type step  = (((list -> __h_data ). Cons ). __h_3_mem );
    // ----------
    /* cicili#Block1284 */
    ({ /* cicili#Let1286 */
      bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
      // ----------
      ((__h_case_result ) ? ({ /* cicili#Let1289 */
        __auto_type ne  __attribute__((__cleanup__(free_Range_int ))) = next_Range_int (list );
        // ----------
        ({ /* cicili#Let1295 */
          // ----------
          /* cicili#Block1297 */
          ({ /* cicili#Let1299 */
            bool __h_case_result  = ((ne -> __h_ctor ) ==  __h_Cons_t  );
            // ----------
            ((__h_case_result ) ? __h_Cons_Range_int_ctor (from , take_Range_int ((--len ), ne ), to , step ) : ({ /* cicili#Let1310 */
              // ----------
              /* cicili#Block1312 */
              __h_Cons_Range_int_ctor (from , ne , to , step );
            }));
          });
        });
      }) : ({ /* cicili#Let1322 */
        // ----------
        /* cicili#Block1324 */
        Empty_Range_int ();
      }));
    });
  });
}
void show_Range_int (Range_int list ) {
  { /* cicili#Let1331 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1333 */
    ({ /* cicili#Let1335 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Let1340 */
          // ----------
          /* cicili#Block1342 */
          ({ /* cicili#Let1344 */
            bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
            // ----------
            if (__h_case_result )
              { /* cicili#Block1347 */
                printf ("%d", head );
                putchar (' ');
                show_Range_int (tail );
              }
            else
              { /* cicili#Let1353 */
                // ----------
                /* cicili#Block1355 */
                printf ("%d", head );
              }
          });
        }
    });
  }
}
Maybe_List_int Nothing_List_int () {
  return ((Maybe_List_int){ __h_Nothing_t });
}
Maybe_List_int Just_List_int (List_int value ) {
  return ((Maybe_List_int){ __h_Just_t , .__h_data.Just = { value }});
}
List_List_int Empty_List_int () {
  { /* cicili#Let1371 */
    List_List_int instance  = malloc (sizeof(__h_List_List_int_class_t));
    // ----------
    (*instance ) = ((__h_List_List_int_class_t){ __h_Empty_t });
    return instance ;
  }
}
List_List_int __h_Cons_List_int_ctor (List_int head , List_List_int tail ) {
  { /* cicili#Let1374 */
    List_List_int instance  = malloc (sizeof(__h_List_List_int_class_t));
    // ----------
    (*instance ) = ((__h_List_List_int_class_t){ __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
List_List_int new_List_List_int_Pure (const List_int * buf , int len ) {
  if (buf  ==  NULL  )
    return Empty_List_int ();
  else
    { /* cicili#Let1382 */
      List_int item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_List_int ();
      else
        return __h_Cons_List_int_ctor (item , new_List_List_int_Pure ((++buf ), (--len )));
    }
}
void release_List_List_int (List_List_int list ) {
  { /* cicili#Let1396 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1398 */
    ({ /* cicili#Let1400 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block1403 */
          release_List_List_int (tail );
          free (list );
        }
    });
  }
}
List_List_int next_List_List_int (List_List_int list ) {
  return ({ /* cicili#Let1410 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1412 */
    ({ /* cicili#Let1414 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? tail  : ({ /* cicili#Let1418 */
        // ----------
        /* cicili#Block1420 */
        Empty_List_int ();
      }));
    });
  });
}
Maybe_List_int nth_List_List_int (int index , List_List_int list ) {
  return ({ /* cicili#Let1428 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1430 */
    ({ /* cicili#Let1432 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (((index  ==  0 )) ? Just_List_int (head ) : nth_List_List_int ((--index ), tail )) : ({ /* cicili#Let1439 */
        // ----------
        /* cicili#Block1441 */
        Nothing_List_int ();
      }));
    });
  });
}
List_List_int drop_List_List_int (int index , List_List_int list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let1449 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1451 */
      ({ /* cicili#Let1453 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? drop_List_List_int ((--index ), tail ) : ({ /* cicili#Let1458 */
          // ----------
          /* cicili#Block1460 */
          Empty_List_int ();
        }));
      });
    }));
}
int len_List_List_int (List_List_int list ) {
  return ({ /* cicili#Let1467 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1469 */
    ({ /* cicili#Let1471 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (1 +  len_List_List_int (tail ) ) : ({ /* cicili#Let1476 */
        // ----------
        /* cicili#Block1478 */
        0;
      }));
    });
  });
}
int has_len_List_List_int (List_List_int list , int desired ) {
  return ({ /* cicili#Let1484 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1486 */
    ({ /* cicili#Let1488 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  has_len_List_List_int (tail , (--desired )) )) : ({ /* cicili#Let1494 */
        // ----------
        /* cicili#Block1496 */
        0;
      }));
    });
  });
}
List_List_int take_List_List_int (int len , List_List_int list ) {
  return ({ /* cicili#Let1502 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1504 */
    ({ /* cicili#Let1506 */
      bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
      // ----------
      ((__h_case_result ) ? __h_Cons_List_int_ctor (head , take_List_List_int ((--len ), tail )) : ({ /* cicili#Let1518 */
        // ----------
        /* cicili#Block1520 */
        Empty_List_int ();
      }));
    });
  });
}
List_List_int append_List_List_int (List_List_int llist , List_List_int rlist ) {
  return ({ /* cicili#Let1527 */
    __auto_type head  = (((llist -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((llist -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1529 */
    ({ /* cicili#Let1531 */
      bool __h_case_result  = ((llist -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? __h_Cons_List_int_ctor (head , append_List_List_int (tail , rlist )) : ({ /* cicili#Let1543 */
        // ----------
        /* cicili#Block1545 */
        rlist ;
      }));
    });
  });
}
void show_List_List_int (List_List_int list ) {
  { /* cicili#Let1551 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1553 */
    ({ /* cicili#Let1555 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block1558 */
          { /* cicili#Let1562 */
            // ----------
            /* cicili#Block1564 */
            ({ /* cicili#Let1566 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block1569 */
                  printf ("%p", head );
                  putchar (' ');
                }
              else
                { /* cicili#Let1574 */
                  // ----------
                  /* cicili#Block1576 */
                  printf ("%p", head );
                }
            });
          }
          show_List_List_int (tail );
        }
    });
  }
}
Maybe_List_char Nothing_List_char () {
  return ((Maybe_List_char){ __h_Nothing_t });
}
Maybe_List_char Just_List_char (List_char value ) {
  return ((Maybe_List_char){ __h_Just_t , .__h_data.Just = { value }});
}
List_List_char Empty_List_char () {
  { /* cicili#Let1593 */
    List_List_char instance  = malloc (sizeof(__h_List_List_char_class_t));
    // ----------
    (*instance ) = ((__h_List_List_char_class_t){ __h_Empty_t });
    return instance ;
  }
}
List_List_char __h_Cons_List_char_ctor (List_char head , List_List_char tail ) {
  { /* cicili#Let1596 */
    List_List_char instance  = malloc (sizeof(__h_List_List_char_class_t));
    // ----------
    (*instance ) = ((__h_List_List_char_class_t){ __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
List_List_char new_List_List_char_Pure (const List_char * buf , int len ) {
  if (buf  ==  NULL  )
    return Empty_List_char ();
  else
    { /* cicili#Let1604 */
      List_char item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_List_char ();
      else
        return __h_Cons_List_char_ctor (item , new_List_List_char_Pure ((++buf ), (--len )));
    }
}
void release_List_List_char (List_List_char list ) {
  { /* cicili#Let1618 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1620 */
    ({ /* cicili#Let1622 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block1625 */
          release_List_List_char (tail );
          free (list );
        }
    });
  }
}
List_List_char next_List_List_char (List_List_char list ) {
  return ({ /* cicili#Let1632 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1634 */
    ({ /* cicili#Let1636 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? tail  : ({ /* cicili#Let1640 */
        // ----------
        /* cicili#Block1642 */
        Empty_List_char ();
      }));
    });
  });
}
Maybe_List_char nth_List_List_char (int index , List_List_char list ) {
  return ({ /* cicili#Let1650 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1652 */
    ({ /* cicili#Let1654 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (((index  ==  0 )) ? Just_List_char (head ) : nth_List_List_char ((--index ), tail )) : ({ /* cicili#Let1661 */
        // ----------
        /* cicili#Block1663 */
        Nothing_List_char ();
      }));
    });
  });
}
List_List_char drop_List_List_char (int index , List_List_char list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let1671 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1673 */
      ({ /* cicili#Let1675 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? drop_List_List_char ((--index ), tail ) : ({ /* cicili#Let1680 */
          // ----------
          /* cicili#Block1682 */
          Empty_List_char ();
        }));
      });
    }));
}
int len_List_List_char (List_List_char list ) {
  return ({ /* cicili#Let1689 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1691 */
    ({ /* cicili#Let1693 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (1 +  len_List_List_char (tail ) ) : ({ /* cicili#Let1698 */
        // ----------
        /* cicili#Block1700 */
        0;
      }));
    });
  });
}
int has_len_List_List_char (List_List_char list , int desired ) {
  return ({ /* cicili#Let1706 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1708 */
    ({ /* cicili#Let1710 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  has_len_List_List_char (tail , (--desired )) )) : ({ /* cicili#Let1716 */
        // ----------
        /* cicili#Block1718 */
        0;
      }));
    });
  });
}
List_List_char take_List_List_char (int len , List_List_char list ) {
  return ({ /* cicili#Let1724 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1726 */
    ({ /* cicili#Let1728 */
      bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
      // ----------
      ((__h_case_result ) ? __h_Cons_List_char_ctor (head , take_List_List_char ((--len ), tail )) : ({ /* cicili#Let1740 */
        // ----------
        /* cicili#Block1742 */
        Empty_List_char ();
      }));
    });
  });
}
List_List_char append_List_List_char (List_List_char llist , List_List_char rlist ) {
  return ({ /* cicili#Let1749 */
    __auto_type head  = (((llist -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((llist -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1751 */
    ({ /* cicili#Let1753 */
      bool __h_case_result  = ((llist -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? __h_Cons_List_char_ctor (head , append_List_List_char (tail , rlist )) : ({ /* cicili#Let1765 */
        // ----------
        /* cicili#Block1767 */
        rlist ;
      }));
    });
  });
}
void show_List_List_char (List_List_char list ) {
  { /* cicili#Let1773 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1775 */
    ({ /* cicili#Let1777 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block1780 */
          { /* cicili#Let1784 */
            // ----------
            /* cicili#Block1786 */
            ({ /* cicili#Let1788 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block1791 */
                  printf ("%p", head );
                  putchar (' ');
                }
              else
                { /* cicili#Let1796 */
                  // ----------
                  /* cicili#Block1798 */
                  printf ("%p", head );
                }
            });
          }
          show_List_List_char (tail );
        }
    });
  }
}
Maybe_String Nothing_String () {
  return ((Maybe_String){ __h_Nothing_t });
}
Maybe_String Just_String (String value ) {
  return ((Maybe_String){ __h_Just_t , .__h_data.Just = { value }});
}
List_String Empty_String () {
  { /* cicili#Let1815 */
    List_String instance  = malloc (sizeof(__h_List_String_class_t));
    // ----------
    (*instance ) = ((__h_List_String_class_t){ __h_Empty_t });
    return instance ;
  }
}
List_String __h_Cons_String_ctor (String head , List_String tail ) {
  { /* cicili#Let1818 */
    List_String instance  = malloc (sizeof(__h_List_String_class_t));
    // ----------
    (*instance ) = ((__h_List_String_class_t){ __h_Cons_t , .__h_data.Cons = { head , tail }});
    return instance ;
  }
}
List_String new_List_String_Pure (const String * buf , int len ) {
  if (buf  ==  NULL  )
    return Empty_String ();
  else
    { /* cicili#Let1826 */
      String item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_String ();
      else
        return __h_Cons_String_ctor (item , new_List_String_Pure ((++buf ), (--len )));
    }
}
void release_List_String (List_String list ) {
  { /* cicili#Let1840 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1842 */
    ({ /* cicili#Let1844 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block1847 */
          release_List_String (tail );
          free (list );
        }
    });
  }
}
List_String next_List_String (List_String list ) {
  return ({ /* cicili#Let1854 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1856 */
    ({ /* cicili#Let1858 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? tail  : ({ /* cicili#Let1862 */
        // ----------
        /* cicili#Block1864 */
        Empty_String ();
      }));
    });
  });
}
Maybe_String nth_List_String (int index , List_String list ) {
  return ({ /* cicili#Let1872 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1874 */
    ({ /* cicili#Let1876 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (((index  ==  0 )) ? Just_String (head ) : nth_List_String ((--index ), tail )) : ({ /* cicili#Let1883 */
        // ----------
        /* cicili#Block1885 */
        Nothing_String ();
      }));
    });
  });
}
List_String drop_List_String (int index , List_String list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let1893 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1895 */
      ({ /* cicili#Let1897 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? drop_List_String ((--index ), tail ) : ({ /* cicili#Let1902 */
          // ----------
          /* cicili#Block1904 */
          Empty_String ();
        }));
      });
    }));
}
int len_List_String (List_String list ) {
  return ({ /* cicili#Let1911 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1913 */
    ({ /* cicili#Let1915 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (1 +  len_List_String (tail ) ) : ({ /* cicili#Let1920 */
        // ----------
        /* cicili#Block1922 */
        0;
      }));
    });
  });
}
int has_len_List_String (List_String list , int desired ) {
  return ({ /* cicili#Let1928 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1930 */
    ({ /* cicili#Let1932 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  has_len_List_String (tail , (--desired )) )) : ({ /* cicili#Let1938 */
        // ----------
        /* cicili#Block1940 */
        0;
      }));
    });
  });
}
List_String take_List_String (int len , List_String list ) {
  return ({ /* cicili#Let1946 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1948 */
    ({ /* cicili#Let1950 */
      bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
      // ----------
      ((__h_case_result ) ? __h_Cons_String_ctor (head , take_List_String ((--len ), tail )) : ({ /* cicili#Let1962 */
        // ----------
        /* cicili#Block1964 */
        Empty_String ();
      }));
    });
  });
}
List_String append_List_String (List_String llist , List_String rlist ) {
  return ({ /* cicili#Let1971 */
    __auto_type head  = (((llist -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((llist -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1973 */
    ({ /* cicili#Let1975 */
      bool __h_case_result  = ((llist -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? __h_Cons_String_ctor (head , append_List_String (tail , rlist )) : ({ /* cicili#Let1987 */
        // ----------
        /* cicili#Block1989 */
        rlist ;
      }));
    });
  });
}
void show_List_String (List_String list ) {
  { /* cicili#Let1995 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1997 */
    ({ /* cicili#Let1999 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block2002 */
          { /* cicili#Let2006 */
            // ----------
            /* cicili#Block2008 */
            ({ /* cicili#Let2010 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block2013 */
                  printf ("%p", head );
                  putchar (' ');
                }
              else
                { /* cicili#Let2018 */
                  // ----------
                  /* cicili#Block2020 */
                  printf ("%p", head );
                }
            });
          }
          show_List_String (tail );
        }
    });
  }
}
int foldr_int (int (*folder) (int lhs , int rhs ), int neutral , List_int foldable ) {
  return ({ /* cicili#Let2029 */
    __auto_type head  = (((foldable -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((foldable -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2031 */
    ({ /* cicili#Let2033 */
      bool __h_case_result  = ((foldable -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? foldr_int (folder , folder (neutral , head ), tail ) : ({ /* cicili#Let2038 */
        // ----------
        /* cicili#Block2040 */
        neutral ;
      }));
    });
  });
}
Monoid_Sum_int __h_m_Sum_int_ctor (Monoid_Sum_int_mappend mappend , Monoid_Sum_int_mconcat mconcat , int mempty ) {
  return ((Monoid_Sum_int){ __h___t , .__h_data._ = { mappend , mconcat , mempty }});
}
Semigroup_Sum_int sg_Sum_int (Monoid_Sum_int_mappend mappend ) {
  return ((Semigroup_Sum_int){ __h___t , .__h_data._ = { mappend }});
}
int Monoid_Sum_int_mappend_int_s (int x , int y ) {
  return (x  +  y  );
}
int Monoid_Sum_int_mconcat_int_s (List_int l ) {
  return foldr_int (Monoid_Sum_int_mappend_int_s , 0, l );
}
Monoid_Sum_int get_Monoid_Sum_int () {
  return __h_m_Sum_int_ctor (Monoid_Sum_int_mappend_int_s , Monoid_Sum_int_mconcat_int_s , 0);
}
Semigroup_Sum_int get_Semigroup_Sum_int () {
  return sg_Sum_int (Monoid_Sum_int_mappend_int_s );
}
Monoid_Product_int __h_m_Product_int_ctor (Monoid_Product_int_mappend mappend , Monoid_Product_int_mconcat mconcat , int mempty ) {
  return ((Monoid_Product_int){ __h___t , .__h_data._ = { mappend , mconcat , mempty }});
}
Semigroup_Product_int sg_Product_int (Monoid_Product_int_mappend mappend ) {
  return ((Semigroup_Product_int){ __h___t , .__h_data._ = { mappend }});
}
int Monoid_Product_int_mappend_int_s (int x , int y ) {
  return (x  *  y  );
}
int Monoid_Product_int_mconcat_int_s (List_int l ) {
  return foldr_int (Monoid_Product_int_mappend_int_s , 1, l );
}
Monoid_Product_int get_Monoid_Product_int () {
  return __h_m_Product_int_ctor (Monoid_Product_int_mappend_int_s , Monoid_Product_int_mconcat_int_s , 1);
}
Semigroup_Product_int get_Semigroup_Product_int () {
  return sg_Product_int (Monoid_Product_int_mappend_int_s );
}
List_int foldr_List_int (List_int (*folder) (List_int lhs , List_int rhs ), List_int neutral , List_List_int foldable ) {
  return ({ /* cicili#Let2121 */
    __auto_type head  = (((foldable -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((foldable -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2123 */
    ({ /* cicili#Let2125 */
      bool __h_case_result  = ((foldable -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? foldr_List_int (folder , folder (neutral , head ), tail ) : ({ /* cicili#Let2130 */
        // ----------
        /* cicili#Block2132 */
        neutral ;
      }));
    });
  });
}
List_char foldr_List_char (List_char (*folder) (List_char lhs , List_char rhs ), List_char neutral , List_List_char foldable ) {
  return ({ /* cicili#Let2147 */
    __auto_type head  = (((foldable -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((foldable -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2149 */
    ({ /* cicili#Let2151 */
      bool __h_case_result  = ((foldable -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? foldr_List_char (folder , folder (neutral , head ), tail ) : ({ /* cicili#Let2156 */
        // ----------
        /* cicili#Block2158 */
        neutral ;
      }));
    });
  });
}
Monoid_Concat_List_int __h_m_Concat_List_int_ctor (Monoid_Concat_List_int_mappend mappend , Monoid_Concat_List_int_mconcat mconcat , List_int mempty ) {
  return ((Monoid_Concat_List_int){ __h___t , .__h_data._ = { mappend , mconcat , mempty }});
}
Semigroup_Concat_List_int sg_Concat_List_int (Monoid_Concat_List_int_mappend mappend ) {
  return ((Semigroup_Concat_List_int){ __h___t , .__h_data._ = { mappend }});
}
List_int Monoid_Concat_List_int_mappend_List_int_s (List_int x , List_int y ) {
  return append_List_int (x , y );
}
List_int Monoid_Concat_List_int_mconcat_List_int_s (List_List_int l ) {
  return foldr_List_int (Monoid_Concat_List_int_mappend_List_int_s , Empty_int (), l );
}
Monoid_Concat_List_int get_Monoid_Concat_List_int () {
  return __h_m_Concat_List_int_ctor (Monoid_Concat_List_int_mappend_List_int_s , Monoid_Concat_List_int_mconcat_List_int_s , Empty_int ());
}
Semigroup_Concat_List_int get_Semigroup_Concat_List_int () {
  return sg_Concat_List_int (Monoid_Concat_List_int_mappend_List_int_s );
}
Monoid_Concat_List_char __h_m_Concat_List_char_ctor (Monoid_Concat_List_char_mappend mappend , Monoid_Concat_List_char_mconcat mconcat , List_char mempty ) {
  return ((Monoid_Concat_List_char){ __h___t , .__h_data._ = { mappend , mconcat , mempty }});
}
Semigroup_Concat_List_char sg_Concat_List_char (Monoid_Concat_List_char_mappend mappend ) {
  return ((Semigroup_Concat_List_char){ __h___t , .__h_data._ = { mappend }});
}
List_char Monoid_Concat_List_char_mappend_List_char_s (List_char x , List_char y ) {
  return append_List_char (x , y );
}
List_char Monoid_Concat_List_char_mconcat_List_char_s (List_List_char l ) {
  return foldr_List_char (Monoid_Concat_List_char_mappend_List_char_s , Empty_char (), l );
}
Monoid_Concat_List_char get_Monoid_Concat_List_char () {
  return __h_m_Concat_List_char_ctor (Monoid_Concat_List_char_mappend_List_char_s , Monoid_Concat_List_char_mconcat_List_char_s , Empty_char ());
}
Semigroup_Concat_List_char get_Semigroup_Concat_List_char () {
  return sg_Concat_List_char (Monoid_Concat_List_char_mappend_List_char_s );
}
Monoid_Concat_String_char __h_m_Concat_String_char_ctor (Monoid_Concat_String_char_mappend mappend , Monoid_Concat_String_char_mconcat mconcat , List_char mempty ) {
  return ((Monoid_Concat_String_char){ __h___t , .__h_data._ = { mappend , mconcat , mempty }});
}
Semigroup_Concat_String_char sg_Concat_String_char (Monoid_Concat_String_char_mappend mappend ) {
  return ((Semigroup_Concat_String_char){ __h___t , .__h_data._ = { mappend }});
}
List_char Monoid_Concat_String_char_mappend_List_char_s (List_char x , List_char y ) {
  return append_String (x , y );
}
List_char Monoid_Concat_String_char_mconcat_List_char_s (List_List_char l ) {
  return foldr_List_char (Monoid_Concat_String_char_mappend_List_char_s , Empty_char (), l );
}
Monoid_Concat_String_char get_Monoid_Concat_String_char () {
  return __h_m_Concat_String_char_ctor (Monoid_Concat_String_char_mappend_List_char_s , Monoid_Concat_String_char_mconcat_List_char_s , Empty_char ());
}
Semigroup_Concat_String_char get_Semigroup_Concat_String_char () {
  return sg_Concat_String_char (Monoid_Concat_String_char_mappend_List_char_s );
}
