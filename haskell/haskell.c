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
  return ((Bool){ __h___t });
}
Ordering LT () {
  return ((Ordering){ __h_LT_t });
}
Ordering EQ () {
  return ((Ordering){ __h_EQ_t });
}
Ordering GT () {
  return ((Ordering){ __h___t });
}
Maybe_Bool Nothing_Bool () {
  return ((Maybe_Bool){ __h_Nothing_t });
}
Maybe_Bool Just_Bool (Bool value ) {
  return ((Maybe_Bool){ __h___t , .__h_data._ = { value }});
}
List_Bool Empty_Bool () {
  { /* cicili#Let825 */
    List_Bool instance  = malloc (sizeof(__h_List_Bool_class_t));
    // ----------
    (*instance ) = ((__h_List_Bool_class_t){ __h_Empty_t });
    return instance ;
  }
}
List_Bool __h_Cons_Bool_ctor (Bool head , List_Bool tail ) {
  { /* cicili#Let828 */
    List_Bool instance  = malloc (sizeof(__h_List_Bool_class_t));
    // ----------
    (*instance ) = ((__h_List_Bool_class_t){ __h___t , .__h_data._ = { head , tail }});
    return instance ;
  }
}
List_Bool new_List_Bool_Pure (const Bool * buf , int len ) {
  if (buf  ==  NULL  )
    return Empty_Bool ();
  else
    { /* cicili#Let836 */
      Bool item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_Bool ();
      else
        return __h_Cons_Bool_ctor (item , new_List_Bool_Pure ((++buf ), (--len )));
    }
}
void release_List_Bool (List_Bool list ) {
  { /* cicili#Let850 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block852 */
    ({ /* cicili#Let854 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block857 */
          release_List_Bool (tail );
          free (list );
        }
    });
  }
}
List_Bool next_List_Bool (List_Bool list ) {
  return ({ /* cicili#Let864 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block866 */
    ({ /* cicili#Let868 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? tail  : ({ /* cicili#Let872 */
        // ----------
        /* cicili#Block874 */
        Empty_Bool ();
      }));
    });
  });
}
Maybe_Bool nth_List_Bool (int index , List_Bool list ) {
  return ({ /* cicili#Let882 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block884 */
    ({ /* cicili#Let886 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (((index  ==  0 )) ? Just_Bool (head ) : nth_List_Bool ((--index ), tail )) : ({ /* cicili#Let893 */
        // ----------
        /* cicili#Block895 */
        Nothing_Bool ();
      }));
    });
  });
}
List_Bool drop_List_Bool (int index , List_Bool list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let903 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block905 */
      ({ /* cicili#Let907 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? drop_List_Bool ((--index ), tail ) : ({ /* cicili#Let912 */
          // ----------
          /* cicili#Block914 */
          Empty_Bool ();
        }));
      });
    }));
}
int len_List_Bool (List_Bool list ) {
  return ({ /* cicili#Let921 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block923 */
    ({ /* cicili#Let925 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (1 +  len_List_Bool (tail ) ) : ({ /* cicili#Let930 */
        // ----------
        /* cicili#Block932 */
        0;
      }));
    });
  });
}
int has_len_List_Bool (List_Bool list , int desired ) {
  return ({ /* cicili#Let938 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block940 */
    ({ /* cicili#Let942 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  has_len_List_Bool (tail , (--desired )) )) : ({ /* cicili#Let948 */
        // ----------
        /* cicili#Block950 */
        0;
      }));
    });
  });
}
List_Bool take_List_Bool (int len , List_Bool list ) {
  return ({ /* cicili#Let956 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block958 */
    ({ /* cicili#Let960 */
      bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
      // ----------
      ((__h_case_result ) ? __h_Cons_Bool_ctor (head , take_List_Bool ((--len ), tail )) : ({ /* cicili#Let972 */
        // ----------
        /* cicili#Block974 */
        Empty_Bool ();
      }));
    });
  });
}
List_Bool append_List_Bool (List_Bool llist , List_Bool rlist ) {
  return ({ /* cicili#Let981 */
    __auto_type head  = (((llist -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((llist -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block983 */
    ({ /* cicili#Let985 */
      bool __h_case_result  = ((llist -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? __h_Cons_Bool_ctor (head , append_List_Bool (tail , rlist )) : ({ /* cicili#Let997 */
        // ----------
        /* cicili#Block999 */
        rlist ;
      }));
    });
  });
}
void show_List_Bool (List_Bool list ) {
  { /* cicili#Let1005 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1007 */
    ({ /* cicili#Let1009 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block1012 */
          { /* cicili#Let1016 */
            // ----------
            /* cicili#Block1018 */
            ({ /* cicili#Let1020 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block1023 */
                  printf ("%s", ({ /* cicili#Let1030 */
                    // ----------
                    /* cicili#Block1032 */
                    ({ /* cicili#Let1034 */
                      bool __h_case_result  = ((head . __h_ctor ) ==  __h_True_t  );
                      // ----------
                      ((__h_case_result ) ? "True" : ({ /* cicili#Let1038 */
                        // ----------
                        /* cicili#Block1040 */
                        "False";
                      }));
                    });
                  }));
                  putchar (' ');
                }
              else
                { /* cicili#Let1045 */
                  // ----------
                  /* cicili#Block1047 */
                  printf ("%s", ({ /* cicili#Let1054 */
                    // ----------
                    /* cicili#Block1056 */
                    ({ /* cicili#Let1058 */
                      bool __h_case_result  = ((head . __h_ctor ) ==  __h_True_t  );
                      // ----------
                      ((__h_case_result ) ? "True" : ({ /* cicili#Let1062 */
                        // ----------
                        /* cicili#Block1064 */
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
Maybe_int Nothing_int () {
  return ((Maybe_int){ __h_Nothing_t });
}
Maybe_int Just_int (int value ) {
  return ((Maybe_int){ __h___t , .__h_data._ = { value }});
}
List_int Empty_int () {
  { /* cicili#Let1081 */
    List_int instance  = malloc (sizeof(__h_List_int_class_t));
    // ----------
    (*instance ) = ((__h_List_int_class_t){ __h_Empty_t });
    return instance ;
  }
}
List_int __h_Cons_int_ctor (int head , List_int tail ) {
  { /* cicili#Let1084 */
    List_int instance  = malloc (sizeof(__h_List_int_class_t));
    // ----------
    (*instance ) = ((__h_List_int_class_t){ __h___t , .__h_data._ = { head , tail }});
    return instance ;
  }
}
List_int new_List_int_Pure (const int * buf , int len ) {
  if (buf  ==  NULL  )
    return Empty_int ();
  else
    { /* cicili#Let1092 */
      int item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_int ();
      else
        return __h_Cons_int_ctor (item , new_List_int_Pure ((++buf ), (--len )));
    }
}
void release_List_int (List_int list ) {
  { /* cicili#Let1106 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1108 */
    ({ /* cicili#Let1110 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block1113 */
          release_List_int (tail );
          free (list );
        }
    });
  }
}
List_int next_List_int (List_int list ) {
  return ({ /* cicili#Let1120 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1122 */
    ({ /* cicili#Let1124 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? tail  : ({ /* cicili#Let1128 */
        // ----------
        /* cicili#Block1130 */
        Empty_int ();
      }));
    });
  });
}
Maybe_int nth_List_int (int index , List_int list ) {
  return ({ /* cicili#Let1138 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1140 */
    ({ /* cicili#Let1142 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (((index  ==  0 )) ? Just_int (head ) : nth_List_int ((--index ), tail )) : ({ /* cicili#Let1149 */
        // ----------
        /* cicili#Block1151 */
        Nothing_int ();
      }));
    });
  });
}
List_int drop_List_int (int index , List_int list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let1159 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1161 */
      ({ /* cicili#Let1163 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? drop_List_int ((--index ), tail ) : ({ /* cicili#Let1168 */
          // ----------
          /* cicili#Block1170 */
          Empty_int ();
        }));
      });
    }));
}
int len_List_int (List_int list ) {
  return ({ /* cicili#Let1177 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1179 */
    ({ /* cicili#Let1181 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (1 +  len_List_int (tail ) ) : ({ /* cicili#Let1186 */
        // ----------
        /* cicili#Block1188 */
        0;
      }));
    });
  });
}
int has_len_List_int (List_int list , int desired ) {
  return ({ /* cicili#Let1194 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1196 */
    ({ /* cicili#Let1198 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  has_len_List_int (tail , (--desired )) )) : ({ /* cicili#Let1204 */
        // ----------
        /* cicili#Block1206 */
        0;
      }));
    });
  });
}
List_int take_List_int (int len , List_int list ) {
  return ({ /* cicili#Let1212 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1214 */
    ({ /* cicili#Let1216 */
      bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
      // ----------
      ((__h_case_result ) ? __h_Cons_int_ctor (head , take_List_int ((--len ), tail )) : ({ /* cicili#Let1228 */
        // ----------
        /* cicili#Block1230 */
        Empty_int ();
      }));
    });
  });
}
List_int append_List_int (List_int llist , List_int rlist ) {
  return ({ /* cicili#Let1237 */
    __auto_type head  = (((llist -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((llist -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1239 */
    ({ /* cicili#Let1241 */
      bool __h_case_result  = ((llist -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? __h_Cons_int_ctor (head , append_List_int (tail , rlist )) : ({ /* cicili#Let1253 */
        // ----------
        /* cicili#Block1255 */
        rlist ;
      }));
    });
  });
}
void show_List_int (List_int list ) {
  { /* cicili#Let1261 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1263 */
    ({ /* cicili#Let1265 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block1268 */
          { /* cicili#Let1272 */
            // ----------
            /* cicili#Block1274 */
            ({ /* cicili#Let1276 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block1279 */
                  printf ("%d", head );
                  putchar (' ');
                }
              else
                { /* cicili#Let1287 */
                  // ----------
                  /* cicili#Block1289 */
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
  return ((Maybe_char){ __h___t , .__h_data._ = { value }});
}
List_char Empty_char () {
  { /* cicili#Let1311 */
    List_char instance  = malloc (sizeof(__h_List_char_class_t));
    // ----------
    (*instance ) = ((__h_List_char_class_t){ __h_Empty_t });
    return instance ;
  }
}
List_char __h_Cons_char_ctor (char head , List_char tail ) {
  { /* cicili#Let1314 */
    List_char instance  = malloc (sizeof(__h_List_char_class_t));
    // ----------
    (*instance ) = ((__h_List_char_class_t){ __h___t , .__h_data._ = { head , tail }});
    return instance ;
  }
}
List_char new_List_char_Pure (const char * buf , int len ) {
  if (buf  ==  NULL  )
    return Empty_char ();
  else
    { /* cicili#Let1322 */
      char item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_char ();
      else
        return __h_Cons_char_ctor (item , new_List_char_Pure ((++buf ), (--len )));
    }
}
void release_List_char (List_char list ) {
  { /* cicili#Let1336 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1338 */
    ({ /* cicili#Let1340 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block1343 */
          release_List_char (tail );
          free (list );
        }
    });
  }
}
List_char next_List_char (List_char list ) {
  return ({ /* cicili#Let1350 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1352 */
    ({ /* cicili#Let1354 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? tail  : ({ /* cicili#Let1358 */
        // ----------
        /* cicili#Block1360 */
        Empty_char ();
      }));
    });
  });
}
Maybe_char nth_List_char (int index , List_char list ) {
  return ({ /* cicili#Let1368 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1370 */
    ({ /* cicili#Let1372 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (((index  ==  0 )) ? Just_char (head ) : nth_List_char ((--index ), tail )) : ({ /* cicili#Let1379 */
        // ----------
        /* cicili#Block1381 */
        Nothing_char ();
      }));
    });
  });
}
List_char drop_List_char (int index , List_char list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let1389 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1391 */
      ({ /* cicili#Let1393 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? drop_List_char ((--index ), tail ) : ({ /* cicili#Let1398 */
          // ----------
          /* cicili#Block1400 */
          Empty_char ();
        }));
      });
    }));
}
int len_List_char (List_char list ) {
  return ({ /* cicili#Let1407 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1409 */
    ({ /* cicili#Let1411 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (1 +  len_List_char (tail ) ) : ({ /* cicili#Let1416 */
        // ----------
        /* cicili#Block1418 */
        0;
      }));
    });
  });
}
int has_len_List_char (List_char list , int desired ) {
  return ({ /* cicili#Let1424 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1426 */
    ({ /* cicili#Let1428 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  has_len_List_char (tail , (--desired )) )) : ({ /* cicili#Let1434 */
        // ----------
        /* cicili#Block1436 */
        0;
      }));
    });
  });
}
List_char take_List_char (int len , List_char list ) {
  return ({ /* cicili#Let1442 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1444 */
    ({ /* cicili#Let1446 */
      bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
      // ----------
      ((__h_case_result ) ? __h_Cons_char_ctor (head , take_List_char ((--len ), tail )) : ({ /* cicili#Let1458 */
        // ----------
        /* cicili#Block1460 */
        Empty_char ();
      }));
    });
  });
}
List_char append_List_char (List_char llist , List_char rlist ) {
  return ({ /* cicili#Let1467 */
    __auto_type head  = (((llist -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((llist -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1469 */
    ({ /* cicili#Let1471 */
      bool __h_case_result  = ((llist -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? __h_Cons_char_ctor (head , append_List_char (tail , rlist )) : ({ /* cicili#Let1483 */
        // ----------
        /* cicili#Block1485 */
        rlist ;
      }));
    });
  });
}
void show_List_char (List_char list ) {
  { /* cicili#Let1491 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1493 */
    ({ /* cicili#Let1495 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block1498 */
          { /* cicili#Let1502 */
            // ----------
            /* cicili#Block1504 */
            ({ /* cicili#Let1506 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block1509 */
                  printf ("%c", head );
                  putchar (' ');
                }
              else
                { /* cicili#Let1517 */
                  // ----------
                  /* cicili#Block1519 */
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
    { /* cicili#Let1531 */
      char item  = (*buf );
      // ----------
      if (item  ==  '\0' )
        return Empty_char ();
      else
        return __h_Cons_char_ctor (item , new_String_Const ((++buf )));
    }
}
void show_String (List_char list ) {
  { /* cicili#Let1545 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1547 */
    ({ /* cicili#Let1549 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        ({ /* cicili#Progn1552 */
          printf ("%c", head );
          show_String (tail );
        });
    });
  }
}
Range_int Empty_Range_int () {
  { /* cicili#Let1564 */
    Range_int instance  = malloc (sizeof(__h_Range_int_class_t));
    // ----------
    (*instance ) = ((__h_Range_int_class_t){ __h_Empty_t });
    return instance ;
  }
}
Range_int __h_Cons_Range_int_ctor (int from , Range_int tail , int to , int step ) {
  { /* cicili#Let1567 */
    Range_int instance  = malloc (sizeof(__h_Range_int_class_t));
    // ----------
    (*instance ) = ((__h_Range_int_class_t){ __h___t , .__h_data._ = { from , tail , to , step }});
    return instance ;
  }
}
Range_int new_Range_int (int from , int to , int step ) {
  return (((from  <=  to  )) ? __h_Cons_Range_int_ctor (from , Empty_Range_int (), to , step ) : Empty_Range_int ());
}
void release_Range_int (Range_int list ) {
  { /* cicili#Let1584 */
    __auto_type from  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    __auto_type to  = (((list -> __h_data ). Cons ). __h_2_mem );
    __auto_type step  = (((list -> __h_data ). Cons ). __h_3_mem );
    // ----------
    /* cicili#Block1586 */
    ({ /* cicili#Let1588 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block1591 */
          release_Range_int (tail );
          free (list );
        }
    });
  }
}
Range_int next_Range_int (Range_int list ) {
  return ({ /* cicili#Let1598 */
    __auto_type from  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type to  = (((list -> __h_data ). Cons ). __h_2_mem );
    __auto_type step  = (((list -> __h_data ). Cons ). __h_3_mem );
    // ----------
    /* cicili#Block1600 */
    ({ /* cicili#Let1602 */
      bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((from  +  step  ) <=  to  ) );
      // ----------
      ((__h_case_result ) ? __h_Cons_Range_int_ctor ((from  +  step  ), Empty_Range_int (), to , step ) : ({ /* cicili#Let1613 */
        // ----------
        /* cicili#Block1615 */
        Empty_Range_int ();
      }));
    });
  });
}
Range_int take_Range_int (int len , Range_int list ) {
  return ({ /* cicili#Let1622 */
    __auto_type from  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type to  = (((list -> __h_data ). Cons ). __h_2_mem );
    __auto_type step  = (((list -> __h_data ). Cons ). __h_3_mem );
    // ----------
    /* cicili#Block1624 */
    ({ /* cicili#Let1626 */
      bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
      // ----------
      ((__h_case_result ) ? ({ /* cicili#Let1629 */
        __auto_type ne  __attribute__((__cleanup__(free_Range_int ))) = next_Range_int (list );
        // ----------
        ({ /* cicili#Let1635 */
          // ----------
          /* cicili#Block1637 */
          ({ /* cicili#Let1639 */
            bool __h_case_result  = ((ne -> __h_ctor ) ==  __h_Cons_t  );
            // ----------
            ((__h_case_result ) ? __h_Cons_Range_int_ctor (from , take_Range_int ((--len ), ne ), to , step ) : ({ /* cicili#Let1650 */
              // ----------
              /* cicili#Block1652 */
              __h_Cons_Range_int_ctor (from , ne , to , step );
            }));
          });
        });
      }) : ({ /* cicili#Let1662 */
        // ----------
        /* cicili#Block1664 */
        Empty_Range_int ();
      }));
    });
  });
}
void show_Range_int (Range_int list ) {
  { /* cicili#Let1671 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1673 */
    ({ /* cicili#Let1675 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Let1680 */
          // ----------
          /* cicili#Block1682 */
          ({ /* cicili#Let1684 */
            bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
            // ----------
            if (__h_case_result )
              { /* cicili#Block1687 */
                printf ("%d", head );
                putchar (' ');
                show_Range_int (tail );
              }
            else
              { /* cicili#Let1696 */
                // ----------
                /* cicili#Block1698 */
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
  return ((Maybe_List_int){ __h___t , .__h_data._ = { value }});
}
List_List_int Empty_List_int () {
  { /* cicili#Let1717 */
    List_List_int instance  = malloc (sizeof(__h_List_List_int_class_t));
    // ----------
    (*instance ) = ((__h_List_List_int_class_t){ __h_Empty_t });
    return instance ;
  }
}
List_List_int __h_Cons_List_int_ctor (List_int head , List_List_int tail ) {
  { /* cicili#Let1720 */
    List_List_int instance  = malloc (sizeof(__h_List_List_int_class_t));
    // ----------
    (*instance ) = ((__h_List_List_int_class_t){ __h___t , .__h_data._ = { head , tail }});
    return instance ;
  }
}
List_List_int new_List_List_int_Pure (const List_int * buf , int len ) {
  if (buf  ==  NULL  )
    return Empty_List_int ();
  else
    { /* cicili#Let1728 */
      List_int item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_List_int ();
      else
        return __h_Cons_List_int_ctor (item , new_List_List_int_Pure ((++buf ), (--len )));
    }
}
void release_List_List_int (List_List_int list ) {
  { /* cicili#Let1742 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1744 */
    ({ /* cicili#Let1746 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block1749 */
          release_List_List_int (tail );
          free (list );
        }
    });
  }
}
List_List_int next_List_List_int (List_List_int list ) {
  return ({ /* cicili#Let1756 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1758 */
    ({ /* cicili#Let1760 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? tail  : ({ /* cicili#Let1764 */
        // ----------
        /* cicili#Block1766 */
        Empty_List_int ();
      }));
    });
  });
}
Maybe_List_int nth_List_List_int (int index , List_List_int list ) {
  return ({ /* cicili#Let1774 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1776 */
    ({ /* cicili#Let1778 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (((index  ==  0 )) ? Just_List_int (head ) : nth_List_List_int ((--index ), tail )) : ({ /* cicili#Let1785 */
        // ----------
        /* cicili#Block1787 */
        Nothing_List_int ();
      }));
    });
  });
}
List_List_int drop_List_List_int (int index , List_List_int list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let1795 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1797 */
      ({ /* cicili#Let1799 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? drop_List_List_int ((--index ), tail ) : ({ /* cicili#Let1804 */
          // ----------
          /* cicili#Block1806 */
          Empty_List_int ();
        }));
      });
    }));
}
int len_List_List_int (List_List_int list ) {
  return ({ /* cicili#Let1813 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1815 */
    ({ /* cicili#Let1817 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (1 +  len_List_List_int (tail ) ) : ({ /* cicili#Let1822 */
        // ----------
        /* cicili#Block1824 */
        0;
      }));
    });
  });
}
int has_len_List_List_int (List_List_int list , int desired ) {
  return ({ /* cicili#Let1830 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1832 */
    ({ /* cicili#Let1834 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  has_len_List_List_int (tail , (--desired )) )) : ({ /* cicili#Let1840 */
        // ----------
        /* cicili#Block1842 */
        0;
      }));
    });
  });
}
List_List_int take_List_List_int (int len , List_List_int list ) {
  return ({ /* cicili#Let1848 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1850 */
    ({ /* cicili#Let1852 */
      bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
      // ----------
      ((__h_case_result ) ? __h_Cons_List_int_ctor (head , take_List_List_int ((--len ), tail )) : ({ /* cicili#Let1864 */
        // ----------
        /* cicili#Block1866 */
        Empty_List_int ();
      }));
    });
  });
}
List_List_int append_List_List_int (List_List_int llist , List_List_int rlist ) {
  return ({ /* cicili#Let1873 */
    __auto_type head  = (((llist -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((llist -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1875 */
    ({ /* cicili#Let1877 */
      bool __h_case_result  = ((llist -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? __h_Cons_List_int_ctor (head , append_List_List_int (tail , rlist )) : ({ /* cicili#Let1889 */
        // ----------
        /* cicili#Block1891 */
        rlist ;
      }));
    });
  });
}
void show_List_List_int (List_List_int list ) {
  { /* cicili#Let1897 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1899 */
    ({ /* cicili#Let1901 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block1904 */
          { /* cicili#Let1908 */
            // ----------
            /* cicili#Block1910 */
            ({ /* cicili#Let1912 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block1915 */
                  show_List_int (head );
                  putchar (' ');
                }
              else
                { /* cicili#Let1924 */
                  // ----------
                  /* cicili#Block1926 */
                  show_List_int (head );
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
  return ((Maybe_List_char){ __h___t , .__h_data._ = { value }});
}
List_List_char Empty_List_char () {
  { /* cicili#Let1947 */
    List_List_char instance  = malloc (sizeof(__h_List_List_char_class_t));
    // ----------
    (*instance ) = ((__h_List_List_char_class_t){ __h_Empty_t });
    return instance ;
  }
}
List_List_char __h_Cons_List_char_ctor (List_char head , List_List_char tail ) {
  { /* cicili#Let1950 */
    List_List_char instance  = malloc (sizeof(__h_List_List_char_class_t));
    // ----------
    (*instance ) = ((__h_List_List_char_class_t){ __h___t , .__h_data._ = { head , tail }});
    return instance ;
  }
}
List_List_char new_List_List_char_Pure (const List_char * buf , int len ) {
  if (buf  ==  NULL  )
    return Empty_List_char ();
  else
    { /* cicili#Let1958 */
      List_char item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_List_char ();
      else
        return __h_Cons_List_char_ctor (item , new_List_List_char_Pure ((++buf ), (--len )));
    }
}
void release_List_List_char (List_List_char list ) {
  { /* cicili#Let1972 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1974 */
    ({ /* cicili#Let1976 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block1979 */
          release_List_List_char (tail );
          free (list );
        }
    });
  }
}
List_List_char next_List_List_char (List_List_char list ) {
  return ({ /* cicili#Let1986 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1988 */
    ({ /* cicili#Let1990 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? tail  : ({ /* cicili#Let1994 */
        // ----------
        /* cicili#Block1996 */
        Empty_List_char ();
      }));
    });
  });
}
Maybe_List_char nth_List_List_char (int index , List_List_char list ) {
  return ({ /* cicili#Let2004 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2006 */
    ({ /* cicili#Let2008 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (((index  ==  0 )) ? Just_List_char (head ) : nth_List_List_char ((--index ), tail )) : ({ /* cicili#Let2015 */
        // ----------
        /* cicili#Block2017 */
        Nothing_List_char ();
      }));
    });
  });
}
List_List_char drop_List_List_char (int index , List_List_char list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let2025 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2027 */
      ({ /* cicili#Let2029 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? drop_List_List_char ((--index ), tail ) : ({ /* cicili#Let2034 */
          // ----------
          /* cicili#Block2036 */
          Empty_List_char ();
        }));
      });
    }));
}
int len_List_List_char (List_List_char list ) {
  return ({ /* cicili#Let2043 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2045 */
    ({ /* cicili#Let2047 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (1 +  len_List_List_char (tail ) ) : ({ /* cicili#Let2052 */
        // ----------
        /* cicili#Block2054 */
        0;
      }));
    });
  });
}
int has_len_List_List_char (List_List_char list , int desired ) {
  return ({ /* cicili#Let2060 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2062 */
    ({ /* cicili#Let2064 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  has_len_List_List_char (tail , (--desired )) )) : ({ /* cicili#Let2070 */
        // ----------
        /* cicili#Block2072 */
        0;
      }));
    });
  });
}
List_List_char take_List_List_char (int len , List_List_char list ) {
  return ({ /* cicili#Let2078 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2080 */
    ({ /* cicili#Let2082 */
      bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
      // ----------
      ((__h_case_result ) ? __h_Cons_List_char_ctor (head , take_List_List_char ((--len ), tail )) : ({ /* cicili#Let2094 */
        // ----------
        /* cicili#Block2096 */
        Empty_List_char ();
      }));
    });
  });
}
List_List_char append_List_List_char (List_List_char llist , List_List_char rlist ) {
  return ({ /* cicili#Let2103 */
    __auto_type head  = (((llist -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((llist -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2105 */
    ({ /* cicili#Let2107 */
      bool __h_case_result  = ((llist -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? __h_Cons_List_char_ctor (head , append_List_List_char (tail , rlist )) : ({ /* cicili#Let2119 */
        // ----------
        /* cicili#Block2121 */
        rlist ;
      }));
    });
  });
}
void show_List_List_char (List_List_char list ) {
  { /* cicili#Let2127 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2129 */
    ({ /* cicili#Let2131 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block2134 */
          { /* cicili#Let2138 */
            // ----------
            /* cicili#Block2140 */
            ({ /* cicili#Let2142 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block2145 */
                  show_List_char (head );
                  putchar (' ');
                }
              else
                { /* cicili#Let2154 */
                  // ----------
                  /* cicili#Block2156 */
                  show_List_char (head );
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
  return ((Maybe_String){ __h___t , .__h_data._ = { value }});
}
List_String Empty_String () {
  { /* cicili#Let2177 */
    List_String instance  = malloc (sizeof(__h_List_String_class_t));
    // ----------
    (*instance ) = ((__h_List_String_class_t){ __h_Empty_t });
    return instance ;
  }
}
List_String __h_Cons_String_ctor (String head , List_String tail ) {
  { /* cicili#Let2180 */
    List_String instance  = malloc (sizeof(__h_List_String_class_t));
    // ----------
    (*instance ) = ((__h_List_String_class_t){ __h___t , .__h_data._ = { head , tail }});
    return instance ;
  }
}
List_String new_List_String_Pure (const String * buf , int len ) {
  if (buf  ==  NULL  )
    return Empty_String ();
  else
    { /* cicili#Let2188 */
      String item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_String ();
      else
        return __h_Cons_String_ctor (item , new_List_String_Pure ((++buf ), (--len )));
    }
}
void release_List_String (List_String list ) {
  { /* cicili#Let2202 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2204 */
    ({ /* cicili#Let2206 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block2209 */
          release_List_String (tail );
          free (list );
        }
    });
  }
}
List_String next_List_String (List_String list ) {
  return ({ /* cicili#Let2216 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2218 */
    ({ /* cicili#Let2220 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? tail  : ({ /* cicili#Let2224 */
        // ----------
        /* cicili#Block2226 */
        Empty_String ();
      }));
    });
  });
}
Maybe_String nth_List_String (int index , List_String list ) {
  return ({ /* cicili#Let2234 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2236 */
    ({ /* cicili#Let2238 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (((index  ==  0 )) ? Just_String (head ) : nth_List_String ((--index ), tail )) : ({ /* cicili#Let2245 */
        // ----------
        /* cicili#Block2247 */
        Nothing_String ();
      }));
    });
  });
}
List_String drop_List_String (int index , List_String list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let2255 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2257 */
      ({ /* cicili#Let2259 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? drop_List_String ((--index ), tail ) : ({ /* cicili#Let2264 */
          // ----------
          /* cicili#Block2266 */
          Empty_String ();
        }));
      });
    }));
}
int len_List_String (List_String list ) {
  return ({ /* cicili#Let2273 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2275 */
    ({ /* cicili#Let2277 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (1 +  len_List_String (tail ) ) : ({ /* cicili#Let2282 */
        // ----------
        /* cicili#Block2284 */
        0;
      }));
    });
  });
}
int has_len_List_String (List_String list , int desired ) {
  return ({ /* cicili#Let2290 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2292 */
    ({ /* cicili#Let2294 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  has_len_List_String (tail , (--desired )) )) : ({ /* cicili#Let2300 */
        // ----------
        /* cicili#Block2302 */
        0;
      }));
    });
  });
}
List_String take_List_String (int len , List_String list ) {
  return ({ /* cicili#Let2308 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2310 */
    ({ /* cicili#Let2312 */
      bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
      // ----------
      ((__h_case_result ) ? __h_Cons_String_ctor (head , take_List_String ((--len ), tail )) : ({ /* cicili#Let2324 */
        // ----------
        /* cicili#Block2326 */
        Empty_String ();
      }));
    });
  });
}
List_String append_List_String (List_String llist , List_String rlist ) {
  return ({ /* cicili#Let2333 */
    __auto_type head  = (((llist -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((llist -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2335 */
    ({ /* cicili#Let2337 */
      bool __h_case_result  = ((llist -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? __h_Cons_String_ctor (head , append_List_String (tail , rlist )) : ({ /* cicili#Let2349 */
        // ----------
        /* cicili#Block2351 */
        rlist ;
      }));
    });
  });
}
void show_List_String (List_String list ) {
  { /* cicili#Let2357 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2359 */
    ({ /* cicili#Let2361 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block2364 */
          { /* cicili#Let2368 */
            // ----------
            /* cicili#Block2370 */
            ({ /* cicili#Let2372 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block2375 */
                  show_List_char (head );
                  putchar (' ');
                }
              else
                { /* cicili#Let2384 */
                  // ----------
                  /* cicili#Block2386 */
                  show_List_char (head );
                }
            });
          }
          show_List_String (tail );
        }
    });
  }
}
int foldr_int (int (*folder) (int lhs , int rhs ), int neutral , List_int foldable ) {
  return ({ /* cicili#Let2399 */
    __auto_type head  = (((foldable -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((foldable -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2401 */
    ({ /* cicili#Let2403 */
      bool __h_case_result  = ((foldable -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? foldr_int (folder , folder (neutral , head ), tail ) : ({ /* cicili#Let2408 */
        // ----------
        /* cicili#Block2410 */
        neutral ;
      }));
    });
  });
}
Monoid_Sum_int __h_m_Sum_int_ctor (Monoid_Sum_int_mappend mappend , int mempty , Monoid_Sum_int_mconcat mconcat ) {
  return ((Monoid_Sum_int){ __h___t , .__h_data._ = { mappend , mempty , mconcat }});
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
  return __h_m_Sum_int_ctor (Monoid_Sum_int_mappend_int_s , 0, Monoid_Sum_int_mconcat_int_s );
}
Semigroup_Sum_int get_Semigroup_Sum_int () {
  return sg_Sum_int (Monoid_Sum_int_mappend_int_s );
}
Monoid_Product_int __h_m_Product_int_ctor (Monoid_Product_int_mappend mappend , int mempty , Monoid_Product_int_mconcat mconcat ) {
  return ((Monoid_Product_int){ __h___t , .__h_data._ = { mappend , mempty , mconcat }});
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
  return __h_m_Product_int_ctor (Monoid_Product_int_mappend_int_s , 1, Monoid_Product_int_mconcat_int_s );
}
Semigroup_Product_int get_Semigroup_Product_int () {
  return sg_Product_int (Monoid_Product_int_mappend_int_s );
}
List_int foldr_List_int (List_int (*folder) (List_int lhs , List_int rhs ), List_int neutral , List_List_int foldable ) {
  return ({ /* cicili#Let2491 */
    __auto_type head  = (((foldable -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((foldable -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2493 */
    ({ /* cicili#Let2495 */
      bool __h_case_result  = ((foldable -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? foldr_List_int (folder , folder (neutral , head ), tail ) : ({ /* cicili#Let2500 */
        // ----------
        /* cicili#Block2502 */
        neutral ;
      }));
    });
  });
}
List_char foldr_List_char (List_char (*folder) (List_char lhs , List_char rhs ), List_char neutral , List_List_char foldable ) {
  return ({ /* cicili#Let2517 */
    __auto_type head  = (((foldable -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((foldable -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2519 */
    ({ /* cicili#Let2521 */
      bool __h_case_result  = ((foldable -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? foldr_List_char (folder , folder (neutral , head ), tail ) : ({ /* cicili#Let2526 */
        // ----------
        /* cicili#Block2528 */
        neutral ;
      }));
    });
  });
}
Monoid_Concat_List_int __h_m_Concat_List_int_ctor (Monoid_Concat_List_int_mappend mappend , List_int mempty , Monoid_Concat_List_int_mconcat mconcat ) {
  return ((Monoid_Concat_List_int){ __h___t , .__h_data._ = { mappend , mempty , mconcat }});
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
  return __h_m_Concat_List_int_ctor (Monoid_Concat_List_int_mappend_List_int_s , Empty_int (), Monoid_Concat_List_int_mconcat_List_int_s );
}
Semigroup_Concat_List_int get_Semigroup_Concat_List_int () {
  return sg_Concat_List_int (Monoid_Concat_List_int_mappend_List_int_s );
}
Monoid_Concat_List_char __h_m_Concat_List_char_ctor (Monoid_Concat_List_char_mappend mappend , List_char mempty , Monoid_Concat_List_char_mconcat mconcat ) {
  return ((Monoid_Concat_List_char){ __h___t , .__h_data._ = { mappend , mempty , mconcat }});
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
  return __h_m_Concat_List_char_ctor (Monoid_Concat_List_char_mappend_List_char_s , Empty_char (), Monoid_Concat_List_char_mconcat_List_char_s );
}
Semigroup_Concat_List_char get_Semigroup_Concat_List_char () {
  return sg_Concat_List_char (Monoid_Concat_List_char_mappend_List_char_s );
}
Monoid_Concat_String_char __h_m_Concat_String_char_ctor (Monoid_Concat_String_char_mappend mappend , List_char mempty , Monoid_Concat_String_char_mconcat mconcat ) {
  return ((Monoid_Concat_String_char){ __h___t , .__h_data._ = { mappend , mempty , mconcat }});
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
  return __h_m_Concat_String_char_ctor (Monoid_Concat_String_char_mappend_List_char_s , Empty_char (), Monoid_Concat_String_char_mconcat_List_char_s );
}
Semigroup_Concat_String_char get_Semigroup_Concat_String_char () {
  return sg_Concat_String_char (Monoid_Concat_String_char_mappend_List_char_s );
}
