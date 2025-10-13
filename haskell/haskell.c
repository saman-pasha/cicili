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
  { /* cicili#Let861 */
    List_Bool instance  = malloc (sizeof(__h_List_Bool_class_t));
    // ----------
    (*instance ) = ((__h_List_Bool_class_t){ __h_Empty_t });
    return instance ;
  }
}
List_Bool __h_Cons_Bool_ctor (Bool head , List_Bool tail ) {
  { /* cicili#Let864 */
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
    { /* cicili#Let872 */
      Bool item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_Bool ();
      else
        return __h_Cons_Bool_ctor (item , new_List_Bool_Pure ((++buf ), (--len )));
    }
}
void release_List_Bool (List_Bool list ) {
  { /* cicili#Let886 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block888 */
    ({ /* cicili#Let890 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block893 */
          release_List_Bool (tail );
          free (list );
        }
    });
  }
}
List_Bool next_List_Bool (List_Bool list ) {
  return ({ /* cicili#Let900 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block902 */
    ({ /* cicili#Let904 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? tail  : ({ /* cicili#Let908 */
        // ----------
        /* cicili#Block910 */
        Empty_Bool ();
      }));
    });
  });
}
Maybe_Bool nth_List_Bool (int index , List_Bool list ) {
  return ({ /* cicili#Let918 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block920 */
    ({ /* cicili#Let922 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (((index  ==  0 )) ? Just_Bool (head ) : nth_List_Bool ((--index ), tail )) : ({ /* cicili#Let929 */
        // ----------
        /* cicili#Block931 */
        Nothing_Bool ();
      }));
    });
  });
}
List_Bool drop_List_Bool (int index , List_Bool list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let939 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block941 */
      ({ /* cicili#Let943 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? drop_List_Bool ((--index ), tail ) : ({ /* cicili#Let948 */
          // ----------
          /* cicili#Block950 */
          Empty_Bool ();
        }));
      });
    }));
}
int len_List_Bool (List_Bool list ) {
  return ({ /* cicili#Let957 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block959 */
    ({ /* cicili#Let961 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (1 +  len_List_Bool (tail ) ) : ({ /* cicili#Let966 */
        // ----------
        /* cicili#Block968 */
        0;
      }));
    });
  });
}
int has_len_List_Bool (List_Bool list , int desired ) {
  return ({ /* cicili#Let974 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block976 */
    ({ /* cicili#Let978 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  has_len_List_Bool (tail , (--desired )) )) : ({ /* cicili#Let984 */
        // ----------
        /* cicili#Block986 */
        0;
      }));
    });
  });
}
List_Bool take_List_Bool (int len , List_Bool list ) {
  return ({ /* cicili#Let992 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block994 */
    ({ /* cicili#Let996 */
      bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
      // ----------
      ((__h_case_result ) ? __h_Cons_Bool_ctor (head , take_List_Bool ((--len ), tail )) : ({ /* cicili#Let1008 */
        // ----------
        /* cicili#Block1010 */
        Empty_Bool ();
      }));
    });
  });
}
List_Bool append_List_Bool (List_Bool llist , List_Bool rlist ) {
  return ({ /* cicili#Let1017 */
    __auto_type head  = (((llist -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((llist -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1019 */
    ({ /* cicili#Let1021 */
      bool __h_case_result  = ((llist -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? __h_Cons_Bool_ctor (head , append_List_Bool (tail , rlist )) : ({ /* cicili#Let1033 */
        // ----------
        /* cicili#Block1035 */
        rlist ;
      }));
    });
  });
}
void show_List_Bool (List_Bool list ) {
  { /* cicili#Let1041 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1043 */
    ({ /* cicili#Let1045 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block1048 */
          { /* cicili#Let1052 */
            // ----------
            /* cicili#Block1054 */
            ({ /* cicili#Let1056 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block1059 */
                  printf ("%s", ({ /* cicili#Let1066 */
                    // ----------
                    /* cicili#Block1068 */
                    ({ /* cicili#Let1070 */
                      bool __h_case_result  = ((head . __h_ctor ) ==  __h_True_t  );
                      // ----------
                      ((__h_case_result ) ? "True" : ({ /* cicili#Let1074 */
                        // ----------
                        /* cicili#Block1076 */
                        "False";
                      }));
                    });
                  }));
                  putchar (' ');
                }
              else
                { /* cicili#Let1081 */
                  // ----------
                  /* cicili#Block1083 */
                  printf ("%s", ({ /* cicili#Let1090 */
                    // ----------
                    /* cicili#Block1092 */
                    ({ /* cicili#Let1094 */
                      bool __h_case_result  = ((head . __h_ctor ) ==  __h_True_t  );
                      // ----------
                      ((__h_case_result ) ? "True" : ({ /* cicili#Let1098 */
                        // ----------
                        /* cicili#Block1100 */
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
  { /* cicili#Let1117 */
    List_int instance  = malloc (sizeof(__h_List_int_class_t));
    // ----------
    (*instance ) = ((__h_List_int_class_t){ __h_Empty_t });
    return instance ;
  }
}
List_int __h_Cons_int_ctor (int head , List_int tail ) {
  { /* cicili#Let1120 */
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
    { /* cicili#Let1128 */
      int item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_int ();
      else
        return __h_Cons_int_ctor (item , new_List_int_Pure ((++buf ), (--len )));
    }
}
void release_List_int (List_int list ) {
  { /* cicili#Let1142 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1144 */
    ({ /* cicili#Let1146 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block1149 */
          release_List_int (tail );
          free (list );
        }
    });
  }
}
List_int next_List_int (List_int list ) {
  return ({ /* cicili#Let1156 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1158 */
    ({ /* cicili#Let1160 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? tail  : ({ /* cicili#Let1164 */
        // ----------
        /* cicili#Block1166 */
        Empty_int ();
      }));
    });
  });
}
Maybe_int nth_List_int (int index , List_int list ) {
  return ({ /* cicili#Let1174 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1176 */
    ({ /* cicili#Let1178 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (((index  ==  0 )) ? Just_int (head ) : nth_List_int ((--index ), tail )) : ({ /* cicili#Let1185 */
        // ----------
        /* cicili#Block1187 */
        Nothing_int ();
      }));
    });
  });
}
List_int drop_List_int (int index , List_int list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let1195 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1197 */
      ({ /* cicili#Let1199 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? drop_List_int ((--index ), tail ) : ({ /* cicili#Let1204 */
          // ----------
          /* cicili#Block1206 */
          Empty_int ();
        }));
      });
    }));
}
int len_List_int (List_int list ) {
  return ({ /* cicili#Let1213 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1215 */
    ({ /* cicili#Let1217 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (1 +  len_List_int (tail ) ) : ({ /* cicili#Let1222 */
        // ----------
        /* cicili#Block1224 */
        0;
      }));
    });
  });
}
int has_len_List_int (List_int list , int desired ) {
  return ({ /* cicili#Let1230 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1232 */
    ({ /* cicili#Let1234 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  has_len_List_int (tail , (--desired )) )) : ({ /* cicili#Let1240 */
        // ----------
        /* cicili#Block1242 */
        0;
      }));
    });
  });
}
List_int take_List_int (int len , List_int list ) {
  return ({ /* cicili#Let1248 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1250 */
    ({ /* cicili#Let1252 */
      bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
      // ----------
      ((__h_case_result ) ? __h_Cons_int_ctor (head , take_List_int ((--len ), tail )) : ({ /* cicili#Let1264 */
        // ----------
        /* cicili#Block1266 */
        Empty_int ();
      }));
    });
  });
}
List_int append_List_int (List_int llist , List_int rlist ) {
  return ({ /* cicili#Let1273 */
    __auto_type head  = (((llist -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((llist -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1275 */
    ({ /* cicili#Let1277 */
      bool __h_case_result  = ((llist -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? __h_Cons_int_ctor (head , append_List_int (tail , rlist )) : ({ /* cicili#Let1289 */
        // ----------
        /* cicili#Block1291 */
        rlist ;
      }));
    });
  });
}
void show_List_int (List_int list ) {
  { /* cicili#Let1297 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1299 */
    ({ /* cicili#Let1301 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block1304 */
          { /* cicili#Let1308 */
            // ----------
            /* cicili#Block1310 */
            ({ /* cicili#Let1312 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block1315 */
                  printf ("%d", head );
                  putchar (' ');
                }
              else
                { /* cicili#Let1323 */
                  // ----------
                  /* cicili#Block1325 */
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
  { /* cicili#Let1347 */
    List_char instance  = malloc (sizeof(__h_List_char_class_t));
    // ----------
    (*instance ) = ((__h_List_char_class_t){ __h_Empty_t });
    return instance ;
  }
}
List_char __h_Cons_char_ctor (char head , List_char tail ) {
  { /* cicili#Let1350 */
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
    { /* cicili#Let1358 */
      char item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_char ();
      else
        return __h_Cons_char_ctor (item , new_List_char_Pure ((++buf ), (--len )));
    }
}
void release_List_char (List_char list ) {
  { /* cicili#Let1372 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1374 */
    ({ /* cicili#Let1376 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block1379 */
          release_List_char (tail );
          free (list );
        }
    });
  }
}
List_char next_List_char (List_char list ) {
  return ({ /* cicili#Let1386 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1388 */
    ({ /* cicili#Let1390 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? tail  : ({ /* cicili#Let1394 */
        // ----------
        /* cicili#Block1396 */
        Empty_char ();
      }));
    });
  });
}
Maybe_char nth_List_char (int index , List_char list ) {
  return ({ /* cicili#Let1404 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1406 */
    ({ /* cicili#Let1408 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (((index  ==  0 )) ? Just_char (head ) : nth_List_char ((--index ), tail )) : ({ /* cicili#Let1415 */
        // ----------
        /* cicili#Block1417 */
        Nothing_char ();
      }));
    });
  });
}
List_char drop_List_char (int index , List_char list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let1425 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1427 */
      ({ /* cicili#Let1429 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? drop_List_char ((--index ), tail ) : ({ /* cicili#Let1434 */
          // ----------
          /* cicili#Block1436 */
          Empty_char ();
        }));
      });
    }));
}
int len_List_char (List_char list ) {
  return ({ /* cicili#Let1443 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1445 */
    ({ /* cicili#Let1447 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (1 +  len_List_char (tail ) ) : ({ /* cicili#Let1452 */
        // ----------
        /* cicili#Block1454 */
        0;
      }));
    });
  });
}
int has_len_List_char (List_char list , int desired ) {
  return ({ /* cicili#Let1460 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1462 */
    ({ /* cicili#Let1464 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  has_len_List_char (tail , (--desired )) )) : ({ /* cicili#Let1470 */
        // ----------
        /* cicili#Block1472 */
        0;
      }));
    });
  });
}
List_char take_List_char (int len , List_char list ) {
  return ({ /* cicili#Let1478 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1480 */
    ({ /* cicili#Let1482 */
      bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
      // ----------
      ((__h_case_result ) ? __h_Cons_char_ctor (head , take_List_char ((--len ), tail )) : ({ /* cicili#Let1494 */
        // ----------
        /* cicili#Block1496 */
        Empty_char ();
      }));
    });
  });
}
List_char append_List_char (List_char llist , List_char rlist ) {
  return ({ /* cicili#Let1503 */
    __auto_type head  = (((llist -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((llist -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1505 */
    ({ /* cicili#Let1507 */
      bool __h_case_result  = ((llist -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? __h_Cons_char_ctor (head , append_List_char (tail , rlist )) : ({ /* cicili#Let1519 */
        // ----------
        /* cicili#Block1521 */
        rlist ;
      }));
    });
  });
}
void show_List_char (List_char list ) {
  { /* cicili#Let1527 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1529 */
    ({ /* cicili#Let1531 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block1534 */
          { /* cicili#Let1538 */
            // ----------
            /* cicili#Block1540 */
            ({ /* cicili#Let1542 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block1545 */
                  printf ("%c", head );
                  putchar (' ');
                }
              else
                { /* cicili#Let1553 */
                  // ----------
                  /* cicili#Block1555 */
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
    { /* cicili#Let1567 */
      char item  = (*buf );
      // ----------
      if (item  ==  '\0' )
        return Empty_char ();
      else
        return __h_Cons_char_ctor (item , new_String_Const ((++buf )));
    }
}
void show_String (List_char list ) {
  { /* cicili#Let1581 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1583 */
    ({ /* cicili#Let1585 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        ({ /* cicili#Progn1588 */
          printf ("%c", head );
          show_String (tail );
        });
    });
  }
}
Range_int Empty_Range_int () {
  { /* cicili#Let1600 */
    Range_int instance  = malloc (sizeof(__h_Range_int_class_t));
    // ----------
    (*instance ) = ((__h_Range_int_class_t){ __h_Empty_t });
    return instance ;
  }
}
Range_int __h_Cons_Range_int_ctor (int from , Range_int tail , int to , int step ) {
  { /* cicili#Let1603 */
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
  { /* cicili#Let1620 */
    __auto_type from  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    __auto_type to  = (((list -> __h_data ). Cons ). __h_2_mem );
    __auto_type step  = (((list -> __h_data ). Cons ). __h_3_mem );
    // ----------
    /* cicili#Block1622 */
    ({ /* cicili#Let1624 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block1627 */
          release_Range_int (tail );
          free (list );
        }
    });
  }
}
Range_int next_Range_int (Range_int list ) {
  return ({ /* cicili#Let1634 */
    __auto_type from  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type to  = (((list -> __h_data ). Cons ). __h_2_mem );
    __auto_type step  = (((list -> __h_data ). Cons ). __h_3_mem );
    // ----------
    /* cicili#Block1636 */
    ({ /* cicili#Let1638 */
      bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((from  +  step  ) <=  to  ) );
      // ----------
      ((__h_case_result ) ? __h_Cons_Range_int_ctor ((from  +  step  ), Empty_Range_int (), to , step ) : ({ /* cicili#Let1649 */
        // ----------
        /* cicili#Block1651 */
        Empty_Range_int ();
      }));
    });
  });
}
Range_int take_Range_int (int len , Range_int list ) {
  return ({ /* cicili#Let1658 */
    __auto_type from  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type to  = (((list -> __h_data ). Cons ). __h_2_mem );
    __auto_type step  = (((list -> __h_data ). Cons ). __h_3_mem );
    // ----------
    /* cicili#Block1660 */
    ({ /* cicili#Let1662 */
      bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
      // ----------
      ((__h_case_result ) ? ({ /* cicili#Let1665 */
        __auto_type ne  __attribute__((__cleanup__(free_Range_int ))) = next_Range_int (list );
        // ----------
        ({ /* cicili#Let1671 */
          // ----------
          /* cicili#Block1673 */
          ({ /* cicili#Let1675 */
            bool __h_case_result  = ((ne -> __h_ctor ) ==  __h_Cons_t  );
            // ----------
            ((__h_case_result ) ? __h_Cons_Range_int_ctor (from , take_Range_int ((--len ), ne ), to , step ) : ({ /* cicili#Let1686 */
              // ----------
              /* cicili#Block1688 */
              __h_Cons_Range_int_ctor (from , ne , to , step );
            }));
          });
        });
      }) : ({ /* cicili#Let1698 */
        // ----------
        /* cicili#Block1700 */
        Empty_Range_int ();
      }));
    });
  });
}
void show_Range_int (Range_int list ) {
  { /* cicili#Let1707 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1709 */
    ({ /* cicili#Let1711 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Let1716 */
          // ----------
          /* cicili#Block1718 */
          ({ /* cicili#Let1720 */
            bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
            // ----------
            if (__h_case_result )
              { /* cicili#Block1723 */
                printf ("%d", head );
                putchar (' ');
                show_Range_int (tail );
              }
            else
              { /* cicili#Let1732 */
                // ----------
                /* cicili#Block1734 */
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
  { /* cicili#Let1753 */
    List_List_int instance  = malloc (sizeof(__h_List_List_int_class_t));
    // ----------
    (*instance ) = ((__h_List_List_int_class_t){ __h_Empty_t });
    return instance ;
  }
}
List_List_int __h_Cons_List_int_ctor (List_int head , List_List_int tail ) {
  { /* cicili#Let1756 */
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
    { /* cicili#Let1764 */
      List_int item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_List_int ();
      else
        return __h_Cons_List_int_ctor (item , new_List_List_int_Pure ((++buf ), (--len )));
    }
}
void release_List_List_int (List_List_int list ) {
  { /* cicili#Let1778 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1780 */
    ({ /* cicili#Let1782 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block1785 */
          release_List_List_int (tail );
          free (list );
        }
    });
  }
}
List_List_int next_List_List_int (List_List_int list ) {
  return ({ /* cicili#Let1792 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1794 */
    ({ /* cicili#Let1796 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? tail  : ({ /* cicili#Let1800 */
        // ----------
        /* cicili#Block1802 */
        Empty_List_int ();
      }));
    });
  });
}
Maybe_List_int nth_List_List_int (int index , List_List_int list ) {
  return ({ /* cicili#Let1810 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1812 */
    ({ /* cicili#Let1814 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (((index  ==  0 )) ? Just_List_int (head ) : nth_List_List_int ((--index ), tail )) : ({ /* cicili#Let1821 */
        // ----------
        /* cicili#Block1823 */
        Nothing_List_int ();
      }));
    });
  });
}
List_List_int drop_List_List_int (int index , List_List_int list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let1831 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1833 */
      ({ /* cicili#Let1835 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? drop_List_List_int ((--index ), tail ) : ({ /* cicili#Let1840 */
          // ----------
          /* cicili#Block1842 */
          Empty_List_int ();
        }));
      });
    }));
}
int len_List_List_int (List_List_int list ) {
  return ({ /* cicili#Let1849 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1851 */
    ({ /* cicili#Let1853 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (1 +  len_List_List_int (tail ) ) : ({ /* cicili#Let1858 */
        // ----------
        /* cicili#Block1860 */
        0;
      }));
    });
  });
}
int has_len_List_List_int (List_List_int list , int desired ) {
  return ({ /* cicili#Let1866 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1868 */
    ({ /* cicili#Let1870 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  has_len_List_List_int (tail , (--desired )) )) : ({ /* cicili#Let1876 */
        // ----------
        /* cicili#Block1878 */
        0;
      }));
    });
  });
}
List_List_int take_List_List_int (int len , List_List_int list ) {
  return ({ /* cicili#Let1884 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1886 */
    ({ /* cicili#Let1888 */
      bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
      // ----------
      ((__h_case_result ) ? __h_Cons_List_int_ctor (head , take_List_List_int ((--len ), tail )) : ({ /* cicili#Let1900 */
        // ----------
        /* cicili#Block1902 */
        Empty_List_int ();
      }));
    });
  });
}
List_List_int append_List_List_int (List_List_int llist , List_List_int rlist ) {
  return ({ /* cicili#Let1909 */
    __auto_type head  = (((llist -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((llist -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1911 */
    ({ /* cicili#Let1913 */
      bool __h_case_result  = ((llist -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? __h_Cons_List_int_ctor (head , append_List_List_int (tail , rlist )) : ({ /* cicili#Let1925 */
        // ----------
        /* cicili#Block1927 */
        rlist ;
      }));
    });
  });
}
void show_List_List_int (List_List_int list ) {
  { /* cicili#Let1933 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1935 */
    ({ /* cicili#Let1937 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block1940 */
          { /* cicili#Let1944 */
            // ----------
            /* cicili#Block1946 */
            ({ /* cicili#Let1948 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block1951 */
                  show_List_int (head );
                  putchar (' ');
                }
              else
                { /* cicili#Let1960 */
                  // ----------
                  /* cicili#Block1962 */
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
  { /* cicili#Let1983 */
    List_List_char instance  = malloc (sizeof(__h_List_List_char_class_t));
    // ----------
    (*instance ) = ((__h_List_List_char_class_t){ __h_Empty_t });
    return instance ;
  }
}
List_List_char __h_Cons_List_char_ctor (List_char head , List_List_char tail ) {
  { /* cicili#Let1986 */
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
    { /* cicili#Let1994 */
      List_char item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_List_char ();
      else
        return __h_Cons_List_char_ctor (item , new_List_List_char_Pure ((++buf ), (--len )));
    }
}
void release_List_List_char (List_List_char list ) {
  { /* cicili#Let2008 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2010 */
    ({ /* cicili#Let2012 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block2015 */
          release_List_List_char (tail );
          free (list );
        }
    });
  }
}
List_List_char next_List_List_char (List_List_char list ) {
  return ({ /* cicili#Let2022 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2024 */
    ({ /* cicili#Let2026 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? tail  : ({ /* cicili#Let2030 */
        // ----------
        /* cicili#Block2032 */
        Empty_List_char ();
      }));
    });
  });
}
Maybe_List_char nth_List_List_char (int index , List_List_char list ) {
  return ({ /* cicili#Let2040 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2042 */
    ({ /* cicili#Let2044 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (((index  ==  0 )) ? Just_List_char (head ) : nth_List_List_char ((--index ), tail )) : ({ /* cicili#Let2051 */
        // ----------
        /* cicili#Block2053 */
        Nothing_List_char ();
      }));
    });
  });
}
List_List_char drop_List_List_char (int index , List_List_char list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let2061 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2063 */
      ({ /* cicili#Let2065 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? drop_List_List_char ((--index ), tail ) : ({ /* cicili#Let2070 */
          // ----------
          /* cicili#Block2072 */
          Empty_List_char ();
        }));
      });
    }));
}
int len_List_List_char (List_List_char list ) {
  return ({ /* cicili#Let2079 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2081 */
    ({ /* cicili#Let2083 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (1 +  len_List_List_char (tail ) ) : ({ /* cicili#Let2088 */
        // ----------
        /* cicili#Block2090 */
        0;
      }));
    });
  });
}
int has_len_List_List_char (List_List_char list , int desired ) {
  return ({ /* cicili#Let2096 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2098 */
    ({ /* cicili#Let2100 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  has_len_List_List_char (tail , (--desired )) )) : ({ /* cicili#Let2106 */
        // ----------
        /* cicili#Block2108 */
        0;
      }));
    });
  });
}
List_List_char take_List_List_char (int len , List_List_char list ) {
  return ({ /* cicili#Let2114 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2116 */
    ({ /* cicili#Let2118 */
      bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
      // ----------
      ((__h_case_result ) ? __h_Cons_List_char_ctor (head , take_List_List_char ((--len ), tail )) : ({ /* cicili#Let2130 */
        // ----------
        /* cicili#Block2132 */
        Empty_List_char ();
      }));
    });
  });
}
List_List_char append_List_List_char (List_List_char llist , List_List_char rlist ) {
  return ({ /* cicili#Let2139 */
    __auto_type head  = (((llist -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((llist -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2141 */
    ({ /* cicili#Let2143 */
      bool __h_case_result  = ((llist -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? __h_Cons_List_char_ctor (head , append_List_List_char (tail , rlist )) : ({ /* cicili#Let2155 */
        // ----------
        /* cicili#Block2157 */
        rlist ;
      }));
    });
  });
}
void show_List_List_char (List_List_char list ) {
  { /* cicili#Let2163 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2165 */
    ({ /* cicili#Let2167 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block2170 */
          { /* cicili#Let2174 */
            // ----------
            /* cicili#Block2176 */
            ({ /* cicili#Let2178 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block2181 */
                  show_List_char (head );
                  putchar (' ');
                }
              else
                { /* cicili#Let2190 */
                  // ----------
                  /* cicili#Block2192 */
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
  { /* cicili#Let2213 */
    List_String instance  = malloc (sizeof(__h_List_String_class_t));
    // ----------
    (*instance ) = ((__h_List_String_class_t){ __h_Empty_t });
    return instance ;
  }
}
List_String __h_Cons_String_ctor (String head , List_String tail ) {
  { /* cicili#Let2216 */
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
    { /* cicili#Let2224 */
      String item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_String ();
      else
        return __h_Cons_String_ctor (item , new_List_String_Pure ((++buf ), (--len )));
    }
}
void release_List_String (List_String list ) {
  { /* cicili#Let2238 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2240 */
    ({ /* cicili#Let2242 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block2245 */
          release_List_String (tail );
          free (list );
        }
    });
  }
}
List_String next_List_String (List_String list ) {
  return ({ /* cicili#Let2252 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2254 */
    ({ /* cicili#Let2256 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? tail  : ({ /* cicili#Let2260 */
        // ----------
        /* cicili#Block2262 */
        Empty_String ();
      }));
    });
  });
}
Maybe_String nth_List_String (int index , List_String list ) {
  return ({ /* cicili#Let2270 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2272 */
    ({ /* cicili#Let2274 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (((index  ==  0 )) ? Just_String (head ) : nth_List_String ((--index ), tail )) : ({ /* cicili#Let2281 */
        // ----------
        /* cicili#Block2283 */
        Nothing_String ();
      }));
    });
  });
}
List_String drop_List_String (int index , List_String list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let2291 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2293 */
      ({ /* cicili#Let2295 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? drop_List_String ((--index ), tail ) : ({ /* cicili#Let2300 */
          // ----------
          /* cicili#Block2302 */
          Empty_String ();
        }));
      });
    }));
}
int len_List_String (List_String list ) {
  return ({ /* cicili#Let2309 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2311 */
    ({ /* cicili#Let2313 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (1 +  len_List_String (tail ) ) : ({ /* cicili#Let2318 */
        // ----------
        /* cicili#Block2320 */
        0;
      }));
    });
  });
}
int has_len_List_String (List_String list , int desired ) {
  return ({ /* cicili#Let2326 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2328 */
    ({ /* cicili#Let2330 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  has_len_List_String (tail , (--desired )) )) : ({ /* cicili#Let2336 */
        // ----------
        /* cicili#Block2338 */
        0;
      }));
    });
  });
}
List_String take_List_String (int len , List_String list ) {
  return ({ /* cicili#Let2344 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2346 */
    ({ /* cicili#Let2348 */
      bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
      // ----------
      ((__h_case_result ) ? __h_Cons_String_ctor (head , take_List_String ((--len ), tail )) : ({ /* cicili#Let2360 */
        // ----------
        /* cicili#Block2362 */
        Empty_String ();
      }));
    });
  });
}
List_String append_List_String (List_String llist , List_String rlist ) {
  return ({ /* cicili#Let2369 */
    __auto_type head  = (((llist -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((llist -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2371 */
    ({ /* cicili#Let2373 */
      bool __h_case_result  = ((llist -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? __h_Cons_String_ctor (head , append_List_String (tail , rlist )) : ({ /* cicili#Let2385 */
        // ----------
        /* cicili#Block2387 */
        rlist ;
      }));
    });
  });
}
void show_List_String (List_String list ) {
  { /* cicili#Let2393 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2395 */
    ({ /* cicili#Let2397 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block2400 */
          { /* cicili#Let2404 */
            // ----------
            /* cicili#Block2406 */
            ({ /* cicili#Let2408 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block2411 */
                  show_List_char (head );
                  putchar (' ');
                }
              else
                { /* cicili#Let2420 */
                  // ----------
                  /* cicili#Block2422 */
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
  return ({ /* cicili#Let2435 */
    __auto_type head  = (((foldable -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((foldable -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2437 */
    ({ /* cicili#Let2439 */
      bool __h_case_result  = ((foldable -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? foldr_int (folder , folder (neutral , head ), tail ) : ({ /* cicili#Let2444 */
        // ----------
        /* cicili#Block2446 */
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
  return ({ /* cicili#Let2527 */
    __auto_type head  = (((foldable -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((foldable -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2529 */
    ({ /* cicili#Let2531 */
      bool __h_case_result  = ((foldable -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? foldr_List_int (folder , folder (neutral , head ), tail ) : ({ /* cicili#Let2536 */
        // ----------
        /* cicili#Block2538 */
        neutral ;
      }));
    });
  });
}
List_char foldr_List_char (List_char (*folder) (List_char lhs , List_char rhs ), List_char neutral , List_List_char foldable ) {
  return ({ /* cicili#Let2553 */
    __auto_type head  = (((foldable -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((foldable -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2555 */
    ({ /* cicili#Let2557 */
      bool __h_case_result  = ((foldable -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? foldr_List_char (folder , folder (neutral , head ), tail ) : ({ /* cicili#Let2562 */
        // ----------
        /* cicili#Block2564 */
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
List_int fmap_List_int_List_int (int (*atob) (int value ), List_int input ) {
  return ({ /* cicili#Let2710 */
    __auto_type head  = (((input -> __h_data ). _ ). __h_0_mem );
    __auto_type tail  = (((input -> __h_data ). _ ). __h_1_mem );
    // ----------
    /* cicili#Block2712 */
    ({ /* cicili#Let2714 */
      bool __h_case_result  = ((input -> __h_ctor ) ==  __h___t  );
      // ----------
      ((__h_case_result ) ? __h_Cons_int_ctor (atob (head ), fmap_List_int_List_int (atob , tail )) : ({ /* cicili#Let2723 */
        // ----------
        /* cicili#Block2725 */
        Empty_int ();
      }));
    });
  });
}
List_Bool fmap_List_int_List_Bool (Bool (*atob) (int value ), List_int input ) {
  return ({ /* cicili#Let2739 */
    __auto_type head  = (((input -> __h_data ). _ ). __h_0_mem );
    __auto_type tail  = (((input -> __h_data ). _ ). __h_1_mem );
    // ----------
    /* cicili#Block2741 */
    ({ /* cicili#Let2743 */
      bool __h_case_result  = ((input -> __h_ctor ) ==  __h___t  );
      // ----------
      ((__h_case_result ) ? __h_Cons_Bool_ctor (atob (head ), fmap_List_int_List_Bool (atob , tail )) : ({ /* cicili#Let2752 */
        // ----------
        /* cicili#Block2754 */
        Empty_Bool ();
      }));
    });
  });
}
List_char fmap_List_char_List_char (char (*atob) (char value ), List_char input ) {
  return ({ /* cicili#Let2768 */
    __auto_type head  = (((input -> __h_data ). _ ). __h_0_mem );
    __auto_type tail  = (((input -> __h_data ). _ ). __h_1_mem );
    // ----------
    /* cicili#Block2770 */
    ({ /* cicili#Let2772 */
      bool __h_case_result  = ((input -> __h_ctor ) ==  __h___t  );
      // ----------
      ((__h_case_result ) ? __h_Cons_char_ctor (atob (head ), fmap_List_char_List_char (atob , tail )) : ({ /* cicili#Let2781 */
        // ----------
        /* cicili#Block2783 */
        Empty_char ();
      }));
    });
  });
}
List_Bool fmap_List_char_List_Bool (Bool (*atob) (char value ), List_char input ) {
  return ({ /* cicili#Let2797 */
    __auto_type head  = (((input -> __h_data ). _ ). __h_0_mem );
    __auto_type tail  = (((input -> __h_data ). _ ). __h_1_mem );
    // ----------
    /* cicili#Block2799 */
    ({ /* cicili#Let2801 */
      bool __h_case_result  = ((input -> __h_ctor ) ==  __h___t  );
      // ----------
      ((__h_case_result ) ? __h_Cons_Bool_ctor (atob (head ), fmap_List_char_List_Bool (atob , tail )) : ({ /* cicili#Let2810 */
        // ----------
        /* cicili#Block2812 */
        Empty_Bool ();
      }));
    });
  });
}
