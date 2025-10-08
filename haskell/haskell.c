#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "../haskell.h"
Maybe_char Nothing_char () {
  return ((Maybe_char){ .__h_ctor = __h_Nothing_t , .__h_data.Nothing = { }});
}
Maybe_char Just_char (char value ) {
  return ((Maybe_char){ .__h_ctor = __h_Just_t , .__h_data.Just = { .__h_0_mem = value }});
}
Maybe_String Nothing_String () {
  return ((Maybe_String){ .__h_ctor = __h_Nothing_t , .__h_data.Nothing = { }});
}
Maybe_String Just_String (String value ) {
  return ((Maybe_String){ .__h_ctor = __h_Just_t , .__h_data.Just = { .__h_0_mem = value }});
}
String __h_Cons_char_ctor (char __h_0_mem , Maybe_String __h_1_mem ) {
  String this  = malloc (sizeof(String_class_t ));
  (*this ) = ((String_class_t){ __h___t , .__h_data._ = { __h_0_mem , __h_1_mem }});
  return this ;
}
Maybe_String new_String_Pure (const char * buf , int len ) {
  if (buf  ==  NULL  )
    return Nothing_String ();
  else
    { /* cicili#Let389 */
      char item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Nothing_String ();
      else
        return Just_String (__h_Cons_char_ctor (item , new_String_Pure ((++buf ), (--len ))));
    }
}
void release_String (Maybe_String list ) {
  { /* cicili#Let409 */
    __auto_type __h_match407_0_arg  = (((list . __h_data ). Just ). __h_0_mem );
    __auto_type ls  = __h_match407_0_arg ;
    __auto_type tail  = (((ls -> __h_data ). _ ). __h_1_mem );
    // ----------
    /* cicili#Block411 */
    ({ /* cicili#Let413 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_t  ) &&  ((ls -> __h_ctor ) ==  __h___t  ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block416 */
          release_String (tail );
          free (ls );
        }
    });
  }
}
Maybe_String next_String (Maybe_String list ) {
  return ({ /* cicili#Let426 */
    __auto_type __h_match424_0_arg  = (((list . __h_data ). Just ). __h_0_mem );
    __auto_type ls  = __h_match424_0_arg ;
    __auto_type tail  = (((ls -> __h_data ). _ ). __h_1_mem );
    // ----------
    /* cicili#Block428 */
    ({ /* cicili#Let430 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_t  ) &&  ((ls -> __h_ctor ) ==  __h___t  ) );
      // ----------
      ((__h_case_result ) ? tail  : ({ /* cicili#Let434 */
        // ----------
        /* cicili#Block436 */
        Nothing_String ();
      }));
    });
  });
}
Maybe_char nth_String (int index , Maybe_String list ) {
  return ({ /* cicili#Let446 */
    __auto_type __h_match444_0_arg  = (((list . __h_data ). Just ). __h_0_mem );
    __auto_type head  = (((__h_match444_0_arg -> __h_data ). _ ). __h_0_mem );
    __auto_type tail  = (((__h_match444_0_arg -> __h_data ). _ ). __h_1_mem );
    // ----------
    /* cicili#Block448 */
    ({ /* cicili#Let450 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_t  ) &&  ((__h_match444_0_arg -> __h_ctor ) ==  __h___t  ) );
      // ----------
      ((__h_case_result ) ? (((index  ==  0 )) ? Just_char (head ) : nth_String ((--index ), tail )) : ({ /* cicili#Let457 */
        // ----------
        /* cicili#Block459 */
        Nothing_char ();
      }));
    });
  });
}
Maybe_String drop_String (int index , Maybe_String list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let470 */
      __auto_type __h_match468_0_arg  = (((list . __h_data ). Just ). __h_0_mem );
      __auto_type tail  = (((__h_match468_0_arg -> __h_data ). _ ). __h_1_mem );
      // ----------
      /* cicili#Block472 */
      ({ /* cicili#Let474 */
        bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_t  ) &&  ((__h_match468_0_arg -> __h_ctor ) ==  __h___t  ) );
        // ----------
        ((__h_case_result ) ? drop_String ((--index ), tail ) : ({ /* cicili#Let479 */
          // ----------
          /* cicili#Block481 */
          Nothing_String ();
        }));
      });
    }));
}
int len_String (Maybe_String list ) {
  return ({ /* cicili#Let490 */
    __auto_type __h_match488_0_arg  = (((list . __h_data ). Just ). __h_0_mem );
    __auto_type tail  = (((__h_match488_0_arg -> __h_data ). _ ). __h_1_mem );
    // ----------
    /* cicili#Block492 */
    ({ /* cicili#Let494 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_t  ) &&  ((__h_match488_0_arg -> __h_ctor ) ==  __h___t  ) );
      // ----------
      ((__h_case_result ) ? (1 +  len_String (tail ) ) : ({ /* cicili#Let499 */
        // ----------
        /* cicili#Block501 */
        0;
      }));
    });
  });
}
int has_len_String (Maybe_String list , int desired ) {
  return ({ /* cicili#Let509 */
    __auto_type __h_match507_0_arg  = (((list . __h_data ). Just ). __h_0_mem );
    __auto_type tail  = (((__h_match507_0_arg -> __h_data ). _ ). __h_1_mem );
    // ----------
    /* cicili#Block511 */
    ({ /* cicili#Let513 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_t  ) &&  ((__h_match507_0_arg -> __h_ctor ) ==  __h___t  ) );
      // ----------
      ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  has_len_String (tail , (--desired )) )) : ({ /* cicili#Let519 */
        // ----------
        /* cicili#Block521 */
        0;
      }));
    });
  });
}
Maybe_String take_String (int len , Maybe_String list ) {
  return ({ /* cicili#Let530 */
    __auto_type __h_match528_0_arg  = (((list . __h_data ). Just ). __h_0_mem );
    __auto_type head  = (((__h_match528_0_arg -> __h_data ). _ ). __h_0_mem );
    __auto_type tail  = (((__h_match528_0_arg -> __h_data ). _ ). __h_1_mem );
    // ----------
    /* cicili#Block532 */
    ({ /* cicili#Let534 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_t  ) &&  (((__h_match528_0_arg -> __h_ctor ) ==  __h___t  ) &&  (len  >  0 ) ) );
      // ----------
      ((__h_case_result ) ? Just_String (__h_Cons_char_ctor (head , take_String ((--len ), tail ))) : ({ /* cicili#Let551 */
        // ----------
        /* cicili#Block553 */
        Nothing_String ();
      }));
    });
  });
}
Maybe_String append_String (Maybe_String llist , Maybe_String rlist ) {
  return ({ /* cicili#Let563 */
    __auto_type __h_match561_0_arg  = (((llist . __h_data ). Just ). __h_0_mem );
    __auto_type head  = (((__h_match561_0_arg -> __h_data ). _ ). __h_0_mem );
    __auto_type tail  = (((__h_match561_0_arg -> __h_data ). _ ). __h_1_mem );
    // ----------
    /* cicili#Block565 */
    ({ /* cicili#Let567 */
      bool __h_case_result  = (((llist . __h_ctor ) ==  __h_Just_t  ) &&  ((__h_match561_0_arg -> __h_ctor ) ==  __h___t  ) );
      // ----------
      ((__h_case_result ) ? Just_String (__h_Cons_char_ctor (head , append_String (tail , rlist ))) : ({ /* cicili#Let584 */
        // ----------
        /* cicili#Block586 */
        rlist ;
      }));
    });
  });
}
Maybe_char nth_Cons_char (int index , String cons ) {
  return ({ /* cicili#Let595 */
    __auto_type head  = (((cons -> __h_data ). _ ). __h_0_mem );
    __auto_type tail  = (((cons -> __h_data ). _ ). __h_1_mem );
    // ----------
    /* cicili#Block597 */
    ({ /* cicili#Let599 */
      bool __h_case_result  = ((cons -> __h_ctor ) ==  __h___t  );
      // ----------
      ((__h_case_result ) ? (((index  ==  0 )) ? Just_char (head ) : nth_String ((--index ), tail )) : ({ /* cicili#Let606 */
        // ----------
        /* cicili#Block608 */
        Nothing_char ();
      }));
    });
  });
}
Maybe_String drop_Cons_char (int index , String cons ) {
  return (((index  ==  0 )) ? Just_String (cons ) : ({ /* cicili#Let618 */
      __auto_type tail  = (((cons -> __h_data ). _ ). __h_1_mem );
      // ----------
      /* cicili#Block620 */
      ({ /* cicili#Let622 */
        bool __h_case_result  = ((cons -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? drop_String ((--index ), tail ) : ({ /* cicili#Let627 */
          // ----------
          /* cicili#Block629 */
          Nothing_String ();
        }));
      });
    }));
}
int len_Cons_char (String cons ) {
  return ({ /* cicili#Let636 */
    __auto_type tail  = (((cons -> __h_data ). _ ). __h_1_mem );
    // ----------
    /* cicili#Block638 */
    ({ /* cicili#Let640 */
      bool __h_case_result  = ((cons -> __h_ctor ) ==  __h___t  );
      // ----------
      ((__h_case_result ) ? (1 +  len_String (tail ) ) : ({ /* cicili#Let645 */
        // ----------
        /* cicili#Block647 */
        0;
      }));
    });
  });
}
int has_len_Cons_char (String cons , int desired ) {
  return ({ /* cicili#Let653 */
    __auto_type tail  = (((cons -> __h_data ). _ ). __h_1_mem );
    // ----------
    /* cicili#Block655 */
    ({ /* cicili#Let657 */
      bool __h_case_result  = ((cons -> __h_ctor ) ==  __h___t  );
      // ----------
      ((__h_case_result ) ? (1 +  has_len_String (tail , (--desired )) ) : ({ /* cicili#Let662 */
        // ----------
        /* cicili#Block664 */
        0;
      }));
    });
  });
}
Maybe_String new_String_Const (const char * buf ) {
  if (buf  ==  NULL  )
    return Nothing_String ();
  else
    { /* cicili#Let673 */
      char item  = (*buf );
      // ----------
      if (item  ==  '\0' )
        return Nothing_String ();
      else
        return Just_String (__h_Cons_char_ctor (item , new_String_Const ((++buf ))));
    }
}
void show_String (Maybe_String list ) {
  { /* cicili#Let693 */
    __auto_type __h_match691_0_arg  = (((list . __h_data ). Just ). __h_0_mem );
    __auto_type head  = (((__h_match691_0_arg -> __h_data ). _ ). __h_0_mem );
    __auto_type tail  = (((__h_match691_0_arg -> __h_data ). _ ). __h_1_mem );
    // ----------
    /* cicili#Block695 */
    ({ /* cicili#Let697 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_t  ) &&  ((__h_match691_0_arg -> __h_ctor ) ==  __h___t  ) );
      // ----------
      if (__h_case_result )
        ({ /* cicili#Progn700 */
          printf ("%c", head );
          show_String (tail );
        });
    });
  }
}
Maybe_int Nothing_int () {
  return ((Maybe_int){ .__h_ctor = __h_Nothing_t , .__h_data.Nothing = { }});
}
Maybe_int Just_int (int value ) {
  return ((Maybe_int){ .__h_ctor = __h_Just_t , .__h_data.Just = { .__h_0_mem = value }});
}
Maybe_List_int Nothing_List_int () {
  return ((Maybe_List_int){ .__h_ctor = __h_Nothing_t , .__h_data.Nothing = { }});
}
Maybe_List_int Just_List_int (List_int value ) {
  return ((Maybe_List_int){ .__h_ctor = __h_Just_t , .__h_data.Just = { .__h_0_mem = value }});
}
List_int __h_Cons_int_ctor (int __h_0_mem , Maybe_List_int __h_1_mem ) {
  List_int this  = malloc (sizeof(List_int_class_t ));
  (*this ) = ((List_int_class_t){ __h___t , .__h_data._ = { __h_0_mem , __h_1_mem }});
  return this ;
}
Maybe_List_int new_List_int_Pure (const int * buf , int len ) {
  if (buf  ==  NULL  )
    return Nothing_List_int ();
  else
    { /* cicili#Let739 */
      int item  = (*buf );
      // ----------
      if (len  ==  0 )
        return Nothing_List_int ();
      else
        return Just_List_int (__h_Cons_int_ctor (item , new_List_int_Pure ((++buf ), (--len ))));
    }
}
void release_List_int (Maybe_List_int list ) {
  { /* cicili#Let759 */
    __auto_type __h_match757_0_arg  = (((list . __h_data ). Just ). __h_0_mem );
    __auto_type ls  = __h_match757_0_arg ;
    __auto_type tail  = (((ls -> __h_data ). _ ). __h_1_mem );
    // ----------
    /* cicili#Block761 */
    ({ /* cicili#Let763 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_t  ) &&  ((ls -> __h_ctor ) ==  __h___t  ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block766 */
          release_List_int (tail );
          free (ls );
        }
    });
  }
}
Maybe_List_int next_List_int (Maybe_List_int list ) {
  return ({ /* cicili#Let776 */
    __auto_type __h_match774_0_arg  = (((list . __h_data ). Just ). __h_0_mem );
    __auto_type ls  = __h_match774_0_arg ;
    __auto_type tail  = (((ls -> __h_data ). _ ). __h_1_mem );
    // ----------
    /* cicili#Block778 */
    ({ /* cicili#Let780 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_t  ) &&  ((ls -> __h_ctor ) ==  __h___t  ) );
      // ----------
      ((__h_case_result ) ? tail  : ({ /* cicili#Let784 */
        // ----------
        /* cicili#Block786 */
        Nothing_List_int ();
      }));
    });
  });
}
Maybe_int nth_List_int (int index , Maybe_List_int list ) {
  return ({ /* cicili#Let796 */
    __auto_type __h_match794_0_arg  = (((list . __h_data ). Just ). __h_0_mem );
    __auto_type head  = (((__h_match794_0_arg -> __h_data ). _ ). __h_0_mem );
    __auto_type tail  = (((__h_match794_0_arg -> __h_data ). _ ). __h_1_mem );
    // ----------
    /* cicili#Block798 */
    ({ /* cicili#Let800 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_t  ) &&  ((__h_match794_0_arg -> __h_ctor ) ==  __h___t  ) );
      // ----------
      ((__h_case_result ) ? (((index  ==  0 )) ? Just_int (head ) : nth_List_int ((--index ), tail )) : ({ /* cicili#Let807 */
        // ----------
        /* cicili#Block809 */
        Nothing_int ();
      }));
    });
  });
}
Maybe_List_int drop_List_int (int index , Maybe_List_int list ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let820 */
      __auto_type __h_match818_0_arg  = (((list . __h_data ). Just ). __h_0_mem );
      __auto_type tail  = (((__h_match818_0_arg -> __h_data ). _ ). __h_1_mem );
      // ----------
      /* cicili#Block822 */
      ({ /* cicili#Let824 */
        bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_t  ) &&  ((__h_match818_0_arg -> __h_ctor ) ==  __h___t  ) );
        // ----------
        ((__h_case_result ) ? drop_List_int ((--index ), tail ) : ({ /* cicili#Let829 */
          // ----------
          /* cicili#Block831 */
          Nothing_List_int ();
        }));
      });
    }));
}
int len_List_int (Maybe_List_int list ) {
  return ({ /* cicili#Let840 */
    __auto_type __h_match838_0_arg  = (((list . __h_data ). Just ). __h_0_mem );
    __auto_type tail  = (((__h_match838_0_arg -> __h_data ). _ ). __h_1_mem );
    // ----------
    /* cicili#Block842 */
    ({ /* cicili#Let844 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_t  ) &&  ((__h_match838_0_arg -> __h_ctor ) ==  __h___t  ) );
      // ----------
      ((__h_case_result ) ? (1 +  len_List_int (tail ) ) : ({ /* cicili#Let849 */
        // ----------
        /* cicili#Block851 */
        0;
      }));
    });
  });
}
int has_len_List_int (Maybe_List_int list , int desired ) {
  return ({ /* cicili#Let859 */
    __auto_type __h_match857_0_arg  = (((list . __h_data ). Just ). __h_0_mem );
    __auto_type tail  = (((__h_match857_0_arg -> __h_data ). _ ). __h_1_mem );
    // ----------
    /* cicili#Block861 */
    ({ /* cicili#Let863 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_t  ) &&  ((__h_match857_0_arg -> __h_ctor ) ==  __h___t  ) );
      // ----------
      ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  has_len_List_int (tail , (--desired )) )) : ({ /* cicili#Let869 */
        // ----------
        /* cicili#Block871 */
        0;
      }));
    });
  });
}
Maybe_List_int take_List_int (int len , Maybe_List_int list ) {
  return ({ /* cicili#Let880 */
    __auto_type __h_match878_0_arg  = (((list . __h_data ). Just ). __h_0_mem );
    __auto_type head  = (((__h_match878_0_arg -> __h_data ). _ ). __h_0_mem );
    __auto_type tail  = (((__h_match878_0_arg -> __h_data ). _ ). __h_1_mem );
    // ----------
    /* cicili#Block882 */
    ({ /* cicili#Let884 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_t  ) &&  (((__h_match878_0_arg -> __h_ctor ) ==  __h___t  ) &&  (len  >  0 ) ) );
      // ----------
      ((__h_case_result ) ? Just_List_int (__h_Cons_int_ctor (head , take_List_int ((--len ), tail ))) : ({ /* cicili#Let901 */
        // ----------
        /* cicili#Block903 */
        Nothing_List_int ();
      }));
    });
  });
}
Maybe_List_int append_List_int (Maybe_List_int llist , Maybe_List_int rlist ) {
  return ({ /* cicili#Let913 */
    __auto_type __h_match911_0_arg  = (((llist . __h_data ). Just ). __h_0_mem );
    __auto_type head  = (((__h_match911_0_arg -> __h_data ). _ ). __h_0_mem );
    __auto_type tail  = (((__h_match911_0_arg -> __h_data ). _ ). __h_1_mem );
    // ----------
    /* cicili#Block915 */
    ({ /* cicili#Let917 */
      bool __h_case_result  = (((llist . __h_ctor ) ==  __h_Just_t  ) &&  ((__h_match911_0_arg -> __h_ctor ) ==  __h___t  ) );
      // ----------
      ((__h_case_result ) ? Just_List_int (__h_Cons_int_ctor (head , append_List_int (tail , rlist ))) : ({ /* cicili#Let934 */
        // ----------
        /* cicili#Block936 */
        rlist ;
      }));
    });
  });
}
Maybe_int nth_Cons_int (int index , List_int cons ) {
  return ({ /* cicili#Let945 */
    __auto_type head  = (((cons -> __h_data ). _ ). __h_0_mem );
    __auto_type tail  = (((cons -> __h_data ). _ ). __h_1_mem );
    // ----------
    /* cicili#Block947 */
    ({ /* cicili#Let949 */
      bool __h_case_result  = ((cons -> __h_ctor ) ==  __h___t  );
      // ----------
      ((__h_case_result ) ? (((index  ==  0 )) ? Just_int (head ) : nth_List_int ((--index ), tail )) : ({ /* cicili#Let956 */
        // ----------
        /* cicili#Block958 */
        Nothing_int ();
      }));
    });
  });
}
Maybe_List_int drop_Cons_int (int index , List_int cons ) {
  return (((index  ==  0 )) ? Just_List_int (cons ) : ({ /* cicili#Let968 */
      __auto_type tail  = (((cons -> __h_data ). _ ). __h_1_mem );
      // ----------
      /* cicili#Block970 */
      ({ /* cicili#Let972 */
        bool __h_case_result  = ((cons -> __h_ctor ) ==  __h___t  );
        // ----------
        ((__h_case_result ) ? drop_List_int ((--index ), tail ) : ({ /* cicili#Let977 */
          // ----------
          /* cicili#Block979 */
          Nothing_List_int ();
        }));
      });
    }));
}
int len_Cons_int (List_int cons ) {
  return ({ /* cicili#Let986 */
    __auto_type tail  = (((cons -> __h_data ). _ ). __h_1_mem );
    // ----------
    /* cicili#Block988 */
    ({ /* cicili#Let990 */
      bool __h_case_result  = ((cons -> __h_ctor ) ==  __h___t  );
      // ----------
      ((__h_case_result ) ? (1 +  len_List_int (tail ) ) : ({ /* cicili#Let995 */
        // ----------
        /* cicili#Block997 */
        0;
      }));
    });
  });
}
int has_len_Cons_int (List_int cons , int desired ) {
  return ({ /* cicili#Let1003 */
    __auto_type tail  = (((cons -> __h_data ). _ ). __h_1_mem );
    // ----------
    /* cicili#Block1005 */
    ({ /* cicili#Let1007 */
      bool __h_case_result  = ((cons -> __h_ctor ) ==  __h___t  );
      // ----------
      ((__h_case_result ) ? (1 +  has_len_List_int (tail , (--desired )) ) : ({ /* cicili#Let1012 */
        // ----------
        /* cicili#Block1014 */
        0;
      }));
    });
  });
}
void show_List_int (Maybe_List_int list ) {
  { /* cicili#Let1023 */
    __auto_type __h_match1021_0_arg  = (((list . __h_data ). Just ). __h_0_mem );
    __auto_type head  = (((__h_match1021_0_arg -> __h_data ). _ ). __h_0_mem );
    __auto_type tail  = (((__h_match1021_0_arg -> __h_data ). _ ). __h_1_mem );
    // ----------
    /* cicili#Block1025 */
    ({ /* cicili#Let1027 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_t  ) &&  ((__h_match1021_0_arg -> __h_ctor ) ==  __h___t  ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block1030 */
          { /* cicili#Let1034 */
            // ----------
            /* cicili#Block1036 */
            ({ /* cicili#Let1038 */
              bool __h_case_result  = ((tail . __h_ctor ) ==  __h_Just_t  );
              // ----------
              if (__h_case_result )
                { /* cicili#Block1041 */
                  printf ("%d", head );
                  putchar (' ');
                }
              else
                { /* cicili#Let1046 */
                  // ----------
                  /* cicili#Block1048 */
                  printf ("%d", head );
                }
            });
          }
          show_List_int (tail );
        }
    });
  }
}
Maybe_Range_int Nothing_Range_int () {
  return ((Maybe_Range_int){ .__h_ctor = __h_Nothing_t , .__h_data.Nothing = { }});
}
Maybe_Range_int Just_Range_int (Range_int value ) {
  return ((Maybe_Range_int){ .__h_ctor = __h_Just_t , .__h_data.Just = { .__h_0_mem = value }});
}
Range_int __h_Cons_Range_int_ctor (int __h_0_mem , Maybe_Range_int __h_1_mem , int __h_2_mem , int __h_3_mem ) {
  Range_int this  = malloc (sizeof(Range_int_class_t ));
  (*this ) = ((Range_int_class_t){ __h___t , .__h_data._ = { __h_0_mem , __h_1_mem , __h_2_mem , __h_3_mem }});
  return this ;
}
Maybe_Range_int new_Range_int (int from , int to , int step ) {
  return (((from  <=  to  )) ? Just_Range_int (__h_Cons_Range_int_ctor (from , Nothing_Range_int (), to , step )) : Nothing_Range_int ());
}
void release_Range_int (Maybe_Range_int list ) {
  { /* cicili#Let1088 */
    __auto_type __h_match1086_0_arg  = (((list . __h_data ). Just ). __h_0_mem );
    __auto_type ls  = __h_match1086_0_arg ;
    __auto_type from  = (((ls -> __h_data ). _ ). __h_0_mem );
    __auto_type tail  = (((ls -> __h_data ). _ ). __h_1_mem );
    __auto_type to  = (((ls -> __h_data ). _ ). __h_2_mem );
    __auto_type step  = (((ls -> __h_data ). _ ). __h_3_mem );
    // ----------
    /* cicili#Block1090 */
    ({ /* cicili#Let1092 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_t  ) &&  ((ls -> __h_ctor ) ==  __h___t  ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block1095 */
          release_Range_int (tail );
          free (ls );
        }
    });
  }
}
Maybe_Range_int next_Range_int (Maybe_Range_int list ) {
  return ({ /* cicili#Let1105 */
    __auto_type __h_match1103_0_arg  = (((list . __h_data ). Just ). __h_0_mem );
    __auto_type ls  = __h_match1103_0_arg ;
    __auto_type from  = (((ls -> __h_data ). _ ). __h_0_mem );
    __auto_type to  = (((ls -> __h_data ). _ ). __h_2_mem );
    __auto_type step  = (((ls -> __h_data ). _ ). __h_3_mem );
    // ----------
    /* cicili#Block1107 */
    ({ /* cicili#Let1109 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_t  ) &&  (((ls -> __h_ctor ) ==  __h___t  ) &&  ((from  +  step  ) <=  to  ) ) );
      // ----------
      ((__h_case_result ) ? Just_Range_int (__h_Cons_Range_int_ctor ((from  +  step  ), Nothing_Range_int (), to , step )) : ({ /* cicili#Let1121 */
        // ----------
        /* cicili#Block1123 */
        Nothing_Range_int ();
      }));
    });
  });
}
Maybe_Range_int take_Range_int (int len , Maybe_Range_int list ) {
  return ({ /* cicili#Let1133 */
    __auto_type __h_match1131_0_arg  = (((list . __h_data ). Just ). __h_0_mem );
    __auto_type from  = (((__h_match1131_0_arg -> __h_data ). _ ). __h_0_mem );
    __auto_type to  = (((__h_match1131_0_arg -> __h_data ). _ ). __h_2_mem );
    __auto_type step  = (((__h_match1131_0_arg -> __h_data ). _ ). __h_3_mem );
    // ----------
    /* cicili#Block1135 */
    ({ /* cicili#Let1137 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_t  ) &&  (((__h_match1131_0_arg -> __h_ctor ) ==  __h___t  ) &&  (len  >  0 ) ) );
      // ----------
      ((__h_case_result ) ? ({ /* cicili#Let1140 */
        __auto_type ne  __attribute__((__cleanup__(free_Range_int ))) = next_Range_int (list );
        // ----------
        ({ /* cicili#Let1146 */
          // ----------
          /* cicili#Block1148 */
          ({ /* cicili#Let1150 */
            bool __h_case_result  = ((ne . __h_ctor ) ==  __h_Just_t  );
            // ----------
            ((__h_case_result ) ? Just_Range_int (__h_Cons_Range_int_ctor (from , take_Range_int ((--len ), ne ), to , step )) : ({ /* cicili#Let1162 */
              // ----------
              /* cicili#Block1164 */
              Just_Range_int (__h_Cons_Range_int_ctor (from , ne , to , step ));
            }));
          });
        });
      }) : ({ /* cicili#Let1175 */
        // ----------
        /* cicili#Block1177 */
        Nothing_Range_int ();
      }));
    });
  });
}
void show_Range_int (Maybe_Range_int list ) {
  { /* cicili#Let1186 */
    __auto_type __h_match1184_0_arg  = (((list . __h_data ). Just ). __h_0_mem );
    __auto_type head  = (((__h_match1184_0_arg -> __h_data ). _ ). __h_0_mem );
    __auto_type tail  = (((__h_match1184_0_arg -> __h_data ). _ ). __h_1_mem );
    // ----------
    /* cicili#Block1188 */
    ({ /* cicili#Let1190 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_t  ) &&  ((__h_match1184_0_arg -> __h_ctor ) ==  __h___t  ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Let1195 */
          // ----------
          /* cicili#Block1197 */
          ({ /* cicili#Let1199 */
            bool __h_case_result  = ((tail . __h_ctor ) ==  __h_Just_t  );
            // ----------
            if (__h_case_result )
              { /* cicili#Block1202 */
                printf ("%d", head );
                putchar (' ');
                show_Range_int (tail );
              }
            else
              { /* cicili#Let1208 */
                // ----------
                /* cicili#Block1210 */
                printf ("%d", head );
              }
          });
        }
    });
  }
}
