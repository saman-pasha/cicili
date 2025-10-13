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
  { /* cicili#Let865 */
    List_Bool instance  = malloc (sizeof(__h_List_Bool_class_t));
    // ----------
    (*instance ) = ((__h_List_Bool_class_t){ __h_Empty_t });
    return instance ;
  }
}
List_Bool __h_Cons_Bool_ctor (Bool head , List_Bool tail ) {
  { /* cicili#Let868 */
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
    { /* cicili#Let876 */
      Bool item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_Bool ();
      else
        return __h_Cons_Bool_ctor (item , new_List_Bool_Pure ((++buf ), (--len )));
    }
}
void release_List_Bool (List_Bool list ) {
  { /* cicili#Let890 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block892 */
    ({ /* cicili#Let894 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block897 */
          release_List_Bool (tail );
          free (list );
        }
    });
  }
}
List_Bool next_List_Bool (List_Bool list ) {
  return ({ /* cicili#Let904 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block906 */
    ({ /* cicili#Let908 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? tail  : ({ /* cicili#Let912 */
        // ----------
        /* cicili#Block914 */
        Empty_Bool ();
      }));
    });
  });
}
Maybe_Bool nth_List_Bool (int index , List_Bool list ) {
  return ({ /* cicili#Let922 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block924 */
    ({ /* cicili#Let926 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (((index  ==  0 )) ? Just_Bool (head ) : nth_List_Bool ((--index ), tail )) : ({ /* cicili#Let933 */
        // ----------
        /* cicili#Block935 */
        Nothing_Bool ();
      }));
    });
  });
}
List_Bool drop_List_Bool (int index , List_Bool list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let943 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block945 */
      ({ /* cicili#Let947 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? drop_List_Bool ((--index ), tail ) : ({ /* cicili#Let952 */
          // ----------
          /* cicili#Block954 */
          Empty_Bool ();
        }));
      });
    }));
}
int len_List_Bool (List_Bool list ) {
  return ({ /* cicili#Let961 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block963 */
    ({ /* cicili#Let965 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (1 +  len_List_Bool (tail ) ) : ({ /* cicili#Let970 */
        // ----------
        /* cicili#Block972 */
        0;
      }));
    });
  });
}
int has_len_List_Bool (List_Bool list , int desired ) {
  return ({ /* cicili#Let978 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block980 */
    ({ /* cicili#Let982 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  has_len_List_Bool (tail , (--desired )) )) : ({ /* cicili#Let988 */
        // ----------
        /* cicili#Block990 */
        0;
      }));
    });
  });
}
List_Bool take_List_Bool (int len , List_Bool list ) {
  return ({ /* cicili#Let996 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block998 */
    ({ /* cicili#Let1000 */
      bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
      // ----------
      ((__h_case_result ) ? __h_Cons_Bool_ctor (head , take_List_Bool ((--len ), tail )) : ({ /* cicili#Let1012 */
        // ----------
        /* cicili#Block1014 */
        Empty_Bool ();
      }));
    });
  });
}
List_Bool append_List_Bool (List_Bool llist , List_Bool rlist ) {
  return ({ /* cicili#Let1021 */
    __auto_type head  = (((llist -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((llist -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1023 */
    ({ /* cicili#Let1025 */
      bool __h_case_result  = ((llist -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? __h_Cons_Bool_ctor (head , append_List_Bool (tail , rlist )) : ({ /* cicili#Let1037 */
        // ----------
        /* cicili#Block1039 */
        rlist ;
      }));
    });
  });
}
void show_List_Bool (List_Bool list ) {
  { /* cicili#Let1045 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1047 */
    ({ /* cicili#Let1049 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block1052 */
          { /* cicili#Let1056 */
            // ----------
            /* cicili#Block1058 */
            ({ /* cicili#Let1060 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block1063 */
                  printf ("%s", ({ /* cicili#Let1070 */
                    // ----------
                    /* cicili#Block1072 */
                    ({ /* cicili#Let1074 */
                      bool __h_case_result  = ((head . __h_ctor ) ==  __h_True_t  );
                      // ----------
                      ((__h_case_result ) ? "True" : ({ /* cicili#Let1078 */
                        // ----------
                        /* cicili#Block1080 */
                        "False";
                      }));
                    });
                  }));
                  putchar (' ');
                }
              else
                { /* cicili#Let1085 */
                  // ----------
                  /* cicili#Block1087 */
                  printf ("%s", ({ /* cicili#Let1094 */
                    // ----------
                    /* cicili#Block1096 */
                    ({ /* cicili#Let1098 */
                      bool __h_case_result  = ((head . __h_ctor ) ==  __h_True_t  );
                      // ----------
                      ((__h_case_result ) ? "True" : ({ /* cicili#Let1102 */
                        // ----------
                        /* cicili#Block1104 */
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
  { /* cicili#Let1121 */
    List_int instance  = malloc (sizeof(__h_List_int_class_t));
    // ----------
    (*instance ) = ((__h_List_int_class_t){ __h_Empty_t });
    return instance ;
  }
}
List_int __h_Cons_int_ctor (int head , List_int tail ) {
  { /* cicili#Let1124 */
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
    { /* cicili#Let1132 */
      int item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_int ();
      else
        return __h_Cons_int_ctor (item , new_List_int_Pure ((++buf ), (--len )));
    }
}
void release_List_int (List_int list ) {
  { /* cicili#Let1146 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1148 */
    ({ /* cicili#Let1150 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block1153 */
          release_List_int (tail );
          free (list );
        }
    });
  }
}
List_int next_List_int (List_int list ) {
  return ({ /* cicili#Let1160 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1162 */
    ({ /* cicili#Let1164 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? tail  : ({ /* cicili#Let1168 */
        // ----------
        /* cicili#Block1170 */
        Empty_int ();
      }));
    });
  });
}
Maybe_int nth_List_int (int index , List_int list ) {
  return ({ /* cicili#Let1178 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1180 */
    ({ /* cicili#Let1182 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (((index  ==  0 )) ? Just_int (head ) : nth_List_int ((--index ), tail )) : ({ /* cicili#Let1189 */
        // ----------
        /* cicili#Block1191 */
        Nothing_int ();
      }));
    });
  });
}
List_int drop_List_int (int index , List_int list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let1199 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1201 */
      ({ /* cicili#Let1203 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? drop_List_int ((--index ), tail ) : ({ /* cicili#Let1208 */
          // ----------
          /* cicili#Block1210 */
          Empty_int ();
        }));
      });
    }));
}
int len_List_int (List_int list ) {
  return ({ /* cicili#Let1217 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1219 */
    ({ /* cicili#Let1221 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (1 +  len_List_int (tail ) ) : ({ /* cicili#Let1226 */
        // ----------
        /* cicili#Block1228 */
        0;
      }));
    });
  });
}
int has_len_List_int (List_int list , int desired ) {
  return ({ /* cicili#Let1234 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1236 */
    ({ /* cicili#Let1238 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  has_len_List_int (tail , (--desired )) )) : ({ /* cicili#Let1244 */
        // ----------
        /* cicili#Block1246 */
        0;
      }));
    });
  });
}
List_int take_List_int (int len , List_int list ) {
  return ({ /* cicili#Let1252 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1254 */
    ({ /* cicili#Let1256 */
      bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
      // ----------
      ((__h_case_result ) ? __h_Cons_int_ctor (head , take_List_int ((--len ), tail )) : ({ /* cicili#Let1268 */
        // ----------
        /* cicili#Block1270 */
        Empty_int ();
      }));
    });
  });
}
List_int append_List_int (List_int llist , List_int rlist ) {
  return ({ /* cicili#Let1277 */
    __auto_type head  = (((llist -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((llist -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1279 */
    ({ /* cicili#Let1281 */
      bool __h_case_result  = ((llist -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? __h_Cons_int_ctor (head , append_List_int (tail , rlist )) : ({ /* cicili#Let1293 */
        // ----------
        /* cicili#Block1295 */
        rlist ;
      }));
    });
  });
}
void show_List_int (List_int list ) {
  { /* cicili#Let1301 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1303 */
    ({ /* cicili#Let1305 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block1308 */
          { /* cicili#Let1312 */
            // ----------
            /* cicili#Block1314 */
            ({ /* cicili#Let1316 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block1319 */
                  printf ("%d", head );
                  putchar (' ');
                }
              else
                { /* cicili#Let1327 */
                  // ----------
                  /* cicili#Block1329 */
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
  { /* cicili#Let1351 */
    List_char instance  = malloc (sizeof(__h_List_char_class_t));
    // ----------
    (*instance ) = ((__h_List_char_class_t){ __h_Empty_t });
    return instance ;
  }
}
List_char __h_Cons_char_ctor (char head , List_char tail ) {
  { /* cicili#Let1354 */
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
    { /* cicili#Let1362 */
      char item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_char ();
      else
        return __h_Cons_char_ctor (item , new_List_char_Pure ((++buf ), (--len )));
    }
}
void release_List_char (List_char list ) {
  { /* cicili#Let1376 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1378 */
    ({ /* cicili#Let1380 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block1383 */
          release_List_char (tail );
          free (list );
        }
    });
  }
}
List_char next_List_char (List_char list ) {
  return ({ /* cicili#Let1390 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1392 */
    ({ /* cicili#Let1394 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? tail  : ({ /* cicili#Let1398 */
        // ----------
        /* cicili#Block1400 */
        Empty_char ();
      }));
    });
  });
}
Maybe_char nth_List_char (int index , List_char list ) {
  return ({ /* cicili#Let1408 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1410 */
    ({ /* cicili#Let1412 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (((index  ==  0 )) ? Just_char (head ) : nth_List_char ((--index ), tail )) : ({ /* cicili#Let1419 */
        // ----------
        /* cicili#Block1421 */
        Nothing_char ();
      }));
    });
  });
}
List_char drop_List_char (int index , List_char list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let1429 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1431 */
      ({ /* cicili#Let1433 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? drop_List_char ((--index ), tail ) : ({ /* cicili#Let1438 */
          // ----------
          /* cicili#Block1440 */
          Empty_char ();
        }));
      });
    }));
}
int len_List_char (List_char list ) {
  return ({ /* cicili#Let1447 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1449 */
    ({ /* cicili#Let1451 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (1 +  len_List_char (tail ) ) : ({ /* cicili#Let1456 */
        // ----------
        /* cicili#Block1458 */
        0;
      }));
    });
  });
}
int has_len_List_char (List_char list , int desired ) {
  return ({ /* cicili#Let1464 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1466 */
    ({ /* cicili#Let1468 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  has_len_List_char (tail , (--desired )) )) : ({ /* cicili#Let1474 */
        // ----------
        /* cicili#Block1476 */
        0;
      }));
    });
  });
}
List_char take_List_char (int len , List_char list ) {
  return ({ /* cicili#Let1482 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1484 */
    ({ /* cicili#Let1486 */
      bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
      // ----------
      ((__h_case_result ) ? __h_Cons_char_ctor (head , take_List_char ((--len ), tail )) : ({ /* cicili#Let1498 */
        // ----------
        /* cicili#Block1500 */
        Empty_char ();
      }));
    });
  });
}
List_char append_List_char (List_char llist , List_char rlist ) {
  return ({ /* cicili#Let1507 */
    __auto_type head  = (((llist -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((llist -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1509 */
    ({ /* cicili#Let1511 */
      bool __h_case_result  = ((llist -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? __h_Cons_char_ctor (head , append_List_char (tail , rlist )) : ({ /* cicili#Let1523 */
        // ----------
        /* cicili#Block1525 */
        rlist ;
      }));
    });
  });
}
void show_List_char (List_char list ) {
  { /* cicili#Let1531 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1533 */
    ({ /* cicili#Let1535 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block1538 */
          { /* cicili#Let1542 */
            // ----------
            /* cicili#Block1544 */
            ({ /* cicili#Let1546 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block1549 */
                  printf ("%c", head );
                  putchar (' ');
                }
              else
                { /* cicili#Let1557 */
                  // ----------
                  /* cicili#Block1559 */
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
    { /* cicili#Let1571 */
      char item  = (*buf );
      // ----------
      if (item  ==  '\0' )
        return Empty_char ();
      else
        return __h_Cons_char_ctor (item , new_String_Const ((++buf )));
    }
}
void show_String (List_char list ) {
  { /* cicili#Let1585 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1587 */
    ({ /* cicili#Let1589 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        ({ /* cicili#Progn1592 */
          printf ("%c", head );
          show_String (tail );
        });
    });
  }
}
Range_int Empty_Range_int () {
  { /* cicili#Let1604 */
    Range_int instance  = malloc (sizeof(__h_Range_int_class_t));
    // ----------
    (*instance ) = ((__h_Range_int_class_t){ __h_Empty_t });
    return instance ;
  }
}
Range_int __h_Cons_Range_int_ctor (int from , Range_int tail , int to , int step ) {
  { /* cicili#Let1607 */
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
  { /* cicili#Let1624 */
    __auto_type from  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    __auto_type to  = (((list -> __h_data ). Cons ). __h_2_mem );
    __auto_type step  = (((list -> __h_data ). Cons ). __h_3_mem );
    // ----------
    /* cicili#Block1626 */
    ({ /* cicili#Let1628 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block1631 */
          release_Range_int (tail );
          free (list );
        }
    });
  }
}
Range_int next_Range_int (Range_int list ) {
  return ({ /* cicili#Let1638 */
    __auto_type from  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type to  = (((list -> __h_data ). Cons ). __h_2_mem );
    __auto_type step  = (((list -> __h_data ). Cons ). __h_3_mem );
    // ----------
    /* cicili#Block1640 */
    ({ /* cicili#Let1642 */
      bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  ((from  +  step  ) <=  to  ) );
      // ----------
      ((__h_case_result ) ? __h_Cons_Range_int_ctor ((from  +  step  ), Empty_Range_int (), to , step ) : ({ /* cicili#Let1653 */
        // ----------
        /* cicili#Block1655 */
        Empty_Range_int ();
      }));
    });
  });
}
Range_int take_Range_int (int len , Range_int list ) {
  return ({ /* cicili#Let1662 */
    __auto_type from  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type to  = (((list -> __h_data ). Cons ). __h_2_mem );
    __auto_type step  = (((list -> __h_data ). Cons ). __h_3_mem );
    // ----------
    /* cicili#Block1664 */
    ({ /* cicili#Let1666 */
      bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
      // ----------
      ((__h_case_result ) ? ({ /* cicili#Let1669 */
        __auto_type ne  __attribute__((__cleanup__(free_Range_int ))) = next_Range_int (list );
        // ----------
        ({ /* cicili#Let1675 */
          // ----------
          /* cicili#Block1677 */
          ({ /* cicili#Let1679 */
            bool __h_case_result  = ((ne -> __h_ctor ) ==  __h_Cons_t  );
            // ----------
            ((__h_case_result ) ? __h_Cons_Range_int_ctor (from , take_Range_int ((--len ), ne ), to , step ) : ({ /* cicili#Let1690 */
              // ----------
              /* cicili#Block1692 */
              __h_Cons_Range_int_ctor (from , ne , to , step );
            }));
          });
        });
      }) : ({ /* cicili#Let1702 */
        // ----------
        /* cicili#Block1704 */
        Empty_Range_int ();
      }));
    });
  });
}
void show_Range_int (Range_int list ) {
  { /* cicili#Let1711 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1713 */
    ({ /* cicili#Let1715 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Let1720 */
          // ----------
          /* cicili#Block1722 */
          ({ /* cicili#Let1724 */
            bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
            // ----------
            if (__h_case_result )
              { /* cicili#Block1727 */
                printf ("%d", head );
                putchar (' ');
                show_Range_int (tail );
              }
            else
              { /* cicili#Let1736 */
                // ----------
                /* cicili#Block1738 */
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
  { /* cicili#Let1757 */
    List_List_int instance  = malloc (sizeof(__h_List_List_int_class_t));
    // ----------
    (*instance ) = ((__h_List_List_int_class_t){ __h_Empty_t });
    return instance ;
  }
}
List_List_int __h_Cons_List_int_ctor (List_int head , List_List_int tail ) {
  { /* cicili#Let1760 */
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
    { /* cicili#Let1768 */
      List_int item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_List_int ();
      else
        return __h_Cons_List_int_ctor (item , new_List_List_int_Pure ((++buf ), (--len )));
    }
}
void release_List_List_int (List_List_int list ) {
  { /* cicili#Let1782 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1784 */
    ({ /* cicili#Let1786 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block1789 */
          release_List_List_int (tail );
          free (list );
        }
    });
  }
}
List_List_int next_List_List_int (List_List_int list ) {
  return ({ /* cicili#Let1796 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1798 */
    ({ /* cicili#Let1800 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? tail  : ({ /* cicili#Let1804 */
        // ----------
        /* cicili#Block1806 */
        Empty_List_int ();
      }));
    });
  });
}
Maybe_List_int nth_List_List_int (int index , List_List_int list ) {
  return ({ /* cicili#Let1814 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1816 */
    ({ /* cicili#Let1818 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (((index  ==  0 )) ? Just_List_int (head ) : nth_List_List_int ((--index ), tail )) : ({ /* cicili#Let1825 */
        // ----------
        /* cicili#Block1827 */
        Nothing_List_int ();
      }));
    });
  });
}
List_List_int drop_List_List_int (int index , List_List_int list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let1835 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block1837 */
      ({ /* cicili#Let1839 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? drop_List_List_int ((--index ), tail ) : ({ /* cicili#Let1844 */
          // ----------
          /* cicili#Block1846 */
          Empty_List_int ();
        }));
      });
    }));
}
int len_List_List_int (List_List_int list ) {
  return ({ /* cicili#Let1853 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1855 */
    ({ /* cicili#Let1857 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (1 +  len_List_List_int (tail ) ) : ({ /* cicili#Let1862 */
        // ----------
        /* cicili#Block1864 */
        0;
      }));
    });
  });
}
int has_len_List_List_int (List_List_int list , int desired ) {
  return ({ /* cicili#Let1870 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1872 */
    ({ /* cicili#Let1874 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  has_len_List_List_int (tail , (--desired )) )) : ({ /* cicili#Let1880 */
        // ----------
        /* cicili#Block1882 */
        0;
      }));
    });
  });
}
List_List_int take_List_List_int (int len , List_List_int list ) {
  return ({ /* cicili#Let1888 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1890 */
    ({ /* cicili#Let1892 */
      bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
      // ----------
      ((__h_case_result ) ? __h_Cons_List_int_ctor (head , take_List_List_int ((--len ), tail )) : ({ /* cicili#Let1904 */
        // ----------
        /* cicili#Block1906 */
        Empty_List_int ();
      }));
    });
  });
}
List_List_int append_List_List_int (List_List_int llist , List_List_int rlist ) {
  return ({ /* cicili#Let1913 */
    __auto_type head  = (((llist -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((llist -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1915 */
    ({ /* cicili#Let1917 */
      bool __h_case_result  = ((llist -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? __h_Cons_List_int_ctor (head , append_List_List_int (tail , rlist )) : ({ /* cicili#Let1929 */
        // ----------
        /* cicili#Block1931 */
        rlist ;
      }));
    });
  });
}
void show_List_List_int (List_List_int list ) {
  { /* cicili#Let1937 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block1939 */
    ({ /* cicili#Let1941 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block1944 */
          { /* cicili#Let1948 */
            // ----------
            /* cicili#Block1950 */
            ({ /* cicili#Let1952 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block1955 */
                  show_List_int (head );
                  putchar (' ');
                }
              else
                { /* cicili#Let1964 */
                  // ----------
                  /* cicili#Block1966 */
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
  { /* cicili#Let1987 */
    List_List_char instance  = malloc (sizeof(__h_List_List_char_class_t));
    // ----------
    (*instance ) = ((__h_List_List_char_class_t){ __h_Empty_t });
    return instance ;
  }
}
List_List_char __h_Cons_List_char_ctor (List_char head , List_List_char tail ) {
  { /* cicili#Let1990 */
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
    { /* cicili#Let1998 */
      List_char item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_List_char ();
      else
        return __h_Cons_List_char_ctor (item , new_List_List_char_Pure ((++buf ), (--len )));
    }
}
void release_List_List_char (List_List_char list ) {
  { /* cicili#Let2012 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2014 */
    ({ /* cicili#Let2016 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block2019 */
          release_List_List_char (tail );
          free (list );
        }
    });
  }
}
List_List_char next_List_List_char (List_List_char list ) {
  return ({ /* cicili#Let2026 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2028 */
    ({ /* cicili#Let2030 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? tail  : ({ /* cicili#Let2034 */
        // ----------
        /* cicili#Block2036 */
        Empty_List_char ();
      }));
    });
  });
}
Maybe_List_char nth_List_List_char (int index , List_List_char list ) {
  return ({ /* cicili#Let2044 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2046 */
    ({ /* cicili#Let2048 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (((index  ==  0 )) ? Just_List_char (head ) : nth_List_List_char ((--index ), tail )) : ({ /* cicili#Let2055 */
        // ----------
        /* cicili#Block2057 */
        Nothing_List_char ();
      }));
    });
  });
}
List_List_char drop_List_List_char (int index , List_List_char list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let2065 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2067 */
      ({ /* cicili#Let2069 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? drop_List_List_char ((--index ), tail ) : ({ /* cicili#Let2074 */
          // ----------
          /* cicili#Block2076 */
          Empty_List_char ();
        }));
      });
    }));
}
int len_List_List_char (List_List_char list ) {
  return ({ /* cicili#Let2083 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2085 */
    ({ /* cicili#Let2087 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (1 +  len_List_List_char (tail ) ) : ({ /* cicili#Let2092 */
        // ----------
        /* cicili#Block2094 */
        0;
      }));
    });
  });
}
int has_len_List_List_char (List_List_char list , int desired ) {
  return ({ /* cicili#Let2100 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2102 */
    ({ /* cicili#Let2104 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  has_len_List_List_char (tail , (--desired )) )) : ({ /* cicili#Let2110 */
        // ----------
        /* cicili#Block2112 */
        0;
      }));
    });
  });
}
List_List_char take_List_List_char (int len , List_List_char list ) {
  return ({ /* cicili#Let2118 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2120 */
    ({ /* cicili#Let2122 */
      bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
      // ----------
      ((__h_case_result ) ? __h_Cons_List_char_ctor (head , take_List_List_char ((--len ), tail )) : ({ /* cicili#Let2134 */
        // ----------
        /* cicili#Block2136 */
        Empty_List_char ();
      }));
    });
  });
}
List_List_char append_List_List_char (List_List_char llist , List_List_char rlist ) {
  return ({ /* cicili#Let2143 */
    __auto_type head  = (((llist -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((llist -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2145 */
    ({ /* cicili#Let2147 */
      bool __h_case_result  = ((llist -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? __h_Cons_List_char_ctor (head , append_List_List_char (tail , rlist )) : ({ /* cicili#Let2159 */
        // ----------
        /* cicili#Block2161 */
        rlist ;
      }));
    });
  });
}
void show_List_List_char (List_List_char list ) {
  { /* cicili#Let2167 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2169 */
    ({ /* cicili#Let2171 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block2174 */
          { /* cicili#Let2178 */
            // ----------
            /* cicili#Block2180 */
            ({ /* cicili#Let2182 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block2185 */
                  show_List_char (head );
                  putchar (' ');
                }
              else
                { /* cicili#Let2194 */
                  // ----------
                  /* cicili#Block2196 */
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
  { /* cicili#Let2217 */
    List_String instance  = malloc (sizeof(__h_List_String_class_t));
    // ----------
    (*instance ) = ((__h_List_String_class_t){ __h_Empty_t });
    return instance ;
  }
}
List_String __h_Cons_String_ctor (String head , List_String tail ) {
  { /* cicili#Let2220 */
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
    { /* cicili#Let2228 */
      String item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Empty_String ();
      else
        return __h_Cons_String_ctor (item , new_List_String_Pure ((++buf ), (--len )));
    }
}
void release_List_String (List_String list ) {
  { /* cicili#Let2242 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2244 */
    ({ /* cicili#Let2246 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block2249 */
          release_List_String (tail );
          free (list );
        }
    });
  }
}
List_String next_List_String (List_String list ) {
  return ({ /* cicili#Let2256 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2258 */
    ({ /* cicili#Let2260 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? tail  : ({ /* cicili#Let2264 */
        // ----------
        /* cicili#Block2266 */
        Empty_String ();
      }));
    });
  });
}
Maybe_String nth_List_String (int index , List_String list ) {
  return ({ /* cicili#Let2274 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2276 */
    ({ /* cicili#Let2278 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (((index  ==  0 )) ? Just_String (head ) : nth_List_String ((--index ), tail )) : ({ /* cicili#Let2285 */
        // ----------
        /* cicili#Block2287 */
        Nothing_String ();
      }));
    });
  });
}
List_String drop_List_String (int index , List_String list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let2295 */
      __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
      // ----------
      /* cicili#Block2297 */
      ({ /* cicili#Let2299 */
        bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
        // ----------
        ((__h_case_result ) ? drop_List_String ((--index ), tail ) : ({ /* cicili#Let2304 */
          // ----------
          /* cicili#Block2306 */
          Empty_String ();
        }));
      });
    }));
}
int len_List_String (List_String list ) {
  return ({ /* cicili#Let2313 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2315 */
    ({ /* cicili#Let2317 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (1 +  len_List_String (tail ) ) : ({ /* cicili#Let2322 */
        // ----------
        /* cicili#Block2324 */
        0;
      }));
    });
  });
}
int has_len_List_String (List_String list , int desired ) {
  return ({ /* cicili#Let2330 */
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2332 */
    ({ /* cicili#Let2334 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  has_len_List_String (tail , (--desired )) )) : ({ /* cicili#Let2340 */
        // ----------
        /* cicili#Block2342 */
        0;
      }));
    });
  });
}
List_String take_List_String (int len , List_String list ) {
  return ({ /* cicili#Let2348 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2350 */
    ({ /* cicili#Let2352 */
      bool __h_case_result  = (((list -> __h_ctor ) ==  __h_Cons_t  ) &&  (len  >  0 ) );
      // ----------
      ((__h_case_result ) ? __h_Cons_String_ctor (head , take_List_String ((--len ), tail )) : ({ /* cicili#Let2364 */
        // ----------
        /* cicili#Block2366 */
        Empty_String ();
      }));
    });
  });
}
List_String append_List_String (List_String llist , List_String rlist ) {
  return ({ /* cicili#Let2373 */
    __auto_type head  = (((llist -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((llist -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2375 */
    ({ /* cicili#Let2377 */
      bool __h_case_result  = ((llist -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? __h_Cons_String_ctor (head , append_List_String (tail , rlist )) : ({ /* cicili#Let2389 */
        // ----------
        /* cicili#Block2391 */
        rlist ;
      }));
    });
  });
}
void show_List_String (List_String list ) {
  { /* cicili#Let2397 */
    __auto_type head  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2399 */
    ({ /* cicili#Let2401 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        { /* cicili#Block2404 */
          { /* cicili#Let2408 */
            // ----------
            /* cicili#Block2410 */
            ({ /* cicili#Let2412 */
              bool __h_case_result  = ((tail -> __h_ctor ) ==  __h_Cons_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block2415 */
                  show_List_char (head );
                  putchar (' ');
                }
              else
                { /* cicili#Let2424 */
                  // ----------
                  /* cicili#Block2426 */
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
  return ({ /* cicili#Let2439 */
    __auto_type head  = (((foldable -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((foldable -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2441 */
    ({ /* cicili#Let2443 */
      bool __h_case_result  = ((foldable -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? foldr_int (folder , folder (neutral , head ), tail ) : ({ /* cicili#Let2448 */
        // ----------
        /* cicili#Block2450 */
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
  return ({ /* cicili#Let2531 */
    __auto_type head  = (((foldable -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((foldable -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2533 */
    ({ /* cicili#Let2535 */
      bool __h_case_result  = ((foldable -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? foldr_List_int (folder , folder (neutral , head ), tail ) : ({ /* cicili#Let2540 */
        // ----------
        /* cicili#Block2542 */
        neutral ;
      }));
    });
  });
}
List_char foldr_List_char (List_char (*folder) (List_char lhs , List_char rhs ), List_char neutral , List_List_char foldable ) {
  return ({ /* cicili#Let2557 */
    __auto_type head  = (((foldable -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((foldable -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block2559 */
    ({ /* cicili#Let2561 */
      bool __h_case_result  = ((foldable -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      ((__h_case_result ) ? foldr_List_char (folder , folder (neutral , head ), tail ) : ({ /* cicili#Let2566 */
        // ----------
        /* cicili#Block2568 */
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
List_int fmap_List_int_List_int_Pure (int (*atob) (int value ), List_int input ) {
  return ({ /* cicili#Let2714 */
    __auto_type head  = (((input -> __h_data ). _ ). __h_0_mem );
    __auto_type tail  = (((input -> __h_data ). _ ). __h_1_mem );
    // ----------
    /* cicili#Block2716 */
    ({ /* cicili#Let2718 */
      bool __h_case_result  = ((input -> __h_ctor ) ==  __h___t  );
      // ----------
      ((__h_case_result ) ? __h_Cons_int_ctor (atob (head ), fmap_List_int_List_int_Pure (atob , tail )) : ({ /* cicili#Let2727 */
        // ----------
        /* cicili#Block2729 */
        Empty_int ();
      }));
    });
  });
}
List_Bool fmap_List_int_List_Bool_Pure (Bool (*atob) (int value ), List_int input ) {
  return ({ /* cicili#Let2743 */
    __auto_type head  = (((input -> __h_data ). _ ). __h_0_mem );
    __auto_type tail  = (((input -> __h_data ). _ ). __h_1_mem );
    // ----------
    /* cicili#Block2745 */
    ({ /* cicili#Let2747 */
      bool __h_case_result  = ((input -> __h_ctor ) ==  __h___t  );
      // ----------
      ((__h_case_result ) ? __h_Cons_Bool_ctor (atob (head ), fmap_List_int_List_Bool_Pure (atob , tail )) : ({ /* cicili#Let2756 */
        // ----------
        /* cicili#Block2758 */
        Empty_Bool ();
      }));
    });
  });
}
List_char fmap_List_char_List_char_Pure (char (*atob) (char value ), List_char input ) {
  return ({ /* cicili#Let2772 */
    __auto_type head  = (((input -> __h_data ). _ ). __h_0_mem );
    __auto_type tail  = (((input -> __h_data ). _ ). __h_1_mem );
    // ----------
    /* cicili#Block2774 */
    ({ /* cicili#Let2776 */
      bool __h_case_result  = ((input -> __h_ctor ) ==  __h___t  );
      // ----------
      ((__h_case_result ) ? __h_Cons_char_ctor (atob (head ), fmap_List_char_List_char_Pure (atob , tail )) : ({ /* cicili#Let2785 */
        // ----------
        /* cicili#Block2787 */
        Empty_char ();
      }));
    });
  });
}
List_Bool fmap_List_char_List_Bool_Pure (Bool (*atob) (char value ), List_char input ) {
  return ({ /* cicili#Let2801 */
    __auto_type head  = (((input -> __h_data ). _ ). __h_0_mem );
    __auto_type tail  = (((input -> __h_data ). _ ). __h_1_mem );
    // ----------
    /* cicili#Block2803 */
    ({ /* cicili#Let2805 */
      bool __h_case_result  = ((input -> __h_ctor ) ==  __h___t  );
      // ----------
      ((__h_case_result ) ? __h_Cons_Bool_ctor (atob (head ), fmap_List_char_List_Bool_Pure (atob , tail )) : ({ /* cicili#Let2814 */
        // ----------
        /* cicili#Block2816 */
        Empty_Bool ();
      }));
    });
  });
}
