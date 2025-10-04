#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "math.h"
#ifndef _H_Maybe_int
#define _H_Maybe_int
typedef enum __h_Maybe_int_ctor_t {
  __h_Nothing_int_t,
  __h_Just_int_t
} __h_Maybe_int_ctor_t;
typedef struct Maybe_int {
  __h_Maybe_int_ctor_t __h_ctor ;
  union { /* ciciliUnion108 */
    struct { /* ciciliStruct109 */
    } Nothing_int ;
    struct { /* ciciliStruct110 */
      int __h_0_mem ;
    } Just_int ;
  } __h_data ;
} Maybe_int;
Maybe_int Nothing_int () {
  return ((Maybe_int){ __h_Nothing_int_t });
}
Maybe_int Just_int (int value ) {
  return ((Maybe_int){ __h_Just_int_t , .__h_data.Just_int = { value }});
}
#endif /* _H_Maybe_int */ 
typedef enum __h_List_int_ctor_t {
  __h_Cons_int_t
} __h_List_int_ctor_t;
typedef struct List_int_class_t List_int_class_t ;
typedef List_int_class_t * List_int ;
typedef struct Maybe_List_int Maybe_List_int ;
typedef enum __h_Maybe_List_int_ctor_t {
  __h_Nothing_List_int_t,
  __h_Just_List_int_t
} __h_Maybe_List_int_ctor_t;
typedef struct Maybe_List_int {
  __h_Maybe_List_int_ctor_t __h_ctor ;
  union { /* ciciliUnion123 */
    struct { /* ciciliStruct124 */
    } Nothing_List_int ;
    struct { /* ciciliStruct125 */
      List_int __h_0_mem ;
    } Just_List_int ;
  } __h_data ;
} Maybe_List_int;
Maybe_List_int Nothing_List_int () {
  return ((Maybe_List_int){ __h_Nothing_List_int_t });
}
Maybe_List_int Just_List_int (List_int value ) {
  return ((Maybe_List_int){ __h_Just_List_int_t , .__h_data.Just_List_int = { value }});
}
typedef struct List_int_class_t {
  __h_List_int_ctor_t __h_ctor ;
  union { /* ciciliUnion129 */
    struct { /* ciciliStruct130 */
      int __h_0_mem ;
      Maybe_List_int __h_1_mem ;
    } Cons_int ;
  } __h_data ;
} List_int_class_t;
List_int __h_Cons_int_ctor (int head , Maybe_List_int tail ) {
  List_int this  = malloc (sizeof(List_int_class_t ));
  (*this ) = ((List_int_class_t){ __h_Cons_int_t , .__h_data.Cons_int = { head , tail }});
  return this ;
}
Maybe_List_int new_List_int_Pure (const int * buf ) {
  if (buf  ==  NULL  )
    return Nothing_List_int ();
  else
    { /* cicili#Let144 */
      int item  = (*buf );
      // ----------
      if (item  ==  '\0' )
        return Nothing_List_int ();
      else
        return Just_List_int (__h_Cons_int_ctor (item , new_List_int_Pure ((++buf ))));
    }
}
void drop_List_int (Maybe_List_int list ) {
  { /* cicili#Let161 */
    typeof((((list . __h_data ). Just_List_int ). __h_0_mem )) __h_match159_0_arg ;
    __auto_type ls  = __h_match159_0_arg ;
    typeof((((ls -> __h_data ). Cons_int ). __h_1_mem )) tail ;
    // ----------
    if ((list . __h_ctor ) ==  __h_Just_List_int_t  )
      { /* cicili#Block164 */
        __h_match159_0_arg  = (((list . __h_data ). Just_List_int ). __h_0_mem );
        tail  = (((ls -> __h_data ). Cons_int ). __h_1_mem );
      }
    ({ /* cicili#Let166 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_List_int_t  ) &&  ((ls -> __h_ctor ) ==  __h_Cons_int_t  ) );
      // ----------
      if (__h_case_result )
        ({ /* cicili#Progn169 */
          drop_List_int (tail );
          free (ls );
        });
    });
  }
}
void free_List_int (Maybe_List_int * list ) {
  drop_List_int ((*list ));
}
Maybe_int nth_List_int (Maybe_List_int list , int index ) {
  return ({ /* cicili#Let183 */
    typeof((((list . __h_data ). Just_List_int ). __h_0_mem )) __h_match181_0_arg ;
    typeof((((__h_match181_0_arg -> __h_data ). Cons_int ). __h_0_mem )) head ;
    typeof((((__h_match181_0_arg -> __h_data ). Cons_int ). __h_1_mem )) tail ;
    // ----------
    if ((list . __h_ctor ) ==  __h_Just_List_int_t  )
      { /* cicili#Block186 */
        __h_match181_0_arg  = (((list . __h_data ). Just_List_int ). __h_0_mem );
        head  = (((__h_match181_0_arg -> __h_data ). Cons_int ). __h_0_mem );
        tail  = (((__h_match181_0_arg -> __h_data ). Cons_int ). __h_1_mem );
      }
    ({ /* cicili#Let188 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_List_int_t  ) &&  ((__h_match181_0_arg -> __h_ctor ) ==  __h_Cons_int_t  ) );
      // ----------
      ((__h_case_result ) ? (((index  ==  0 )) ? Just_int (head ) : nth_List_int (tail , (--index ))) : ({ /* cicili#Let195 */
        // ----------
        /* cicili#Block197 */
        Nothing_int ();
      }));
    });
  });
}
Maybe_List_int nthcdr_List_int (Maybe_List_int list , int index ) {
  return (((index  ==  0 )) ? list  : ({ /* cicili#Let208 */
      typeof((((list . __h_data ). Just_List_int ). __h_0_mem )) __h_match206_0_arg ;
      typeof((((__h_match206_0_arg -> __h_data ). Cons_int ). __h_1_mem )) tail ;
      // ----------
      if ((list . __h_ctor ) ==  __h_Just_List_int_t  )
        { /* cicili#Block211 */
          __h_match206_0_arg  = (((list . __h_data ). Just_List_int ). __h_0_mem );
          tail  = (((__h_match206_0_arg -> __h_data ). Cons_int ). __h_1_mem );
        }
      ({ /* cicili#Let213 */
        bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_List_int_t  ) &&  ((__h_match206_0_arg -> __h_ctor ) ==  __h_Cons_int_t  ) );
        // ----------
        ((__h_case_result ) ? nthcdr_List_int (tail , (--index )) : ({ /* cicili#Let218 */
          // ----------
          /* cicili#Block220 */
          Nothing_List_int ();
        }));
      });
    }));
}
int len_List_int (Maybe_List_int list ) {
  return ({ /* cicili#Let229 */
    typeof((((list . __h_data ). Just_List_int ). __h_0_mem )) __h_match227_0_arg ;
    typeof((((__h_match227_0_arg -> __h_data ). Cons_int ). __h_1_mem )) tail ;
    // ----------
    if ((list . __h_ctor ) ==  __h_Just_List_int_t  )
      { /* cicili#Block232 */
        __h_match227_0_arg  = (((list . __h_data ). Just_List_int ). __h_0_mem );
        tail  = (((__h_match227_0_arg -> __h_data ). Cons_int ). __h_1_mem );
      }
    ({ /* cicili#Let234 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_List_int_t  ) &&  ((__h_match227_0_arg -> __h_ctor ) ==  __h_Cons_int_t  ) );
      // ----------
      ((__h_case_result ) ? (1 +  len_List_int (tail ) ) : ({ /* cicili#Let239 */
        // ----------
        /* cicili#Block241 */
        0;
      }));
    });
  });
}
int has_len_List_int (Maybe_List_int list , int desired ) {
  return ({ /* cicili#Let249 */
    typeof((((list . __h_data ). Just_List_int ). __h_0_mem )) __h_match247_0_arg ;
    typeof((((__h_match247_0_arg -> __h_data ). Cons_int ). __h_1_mem )) tail ;
    // ----------
    if ((list . __h_ctor ) ==  __h_Just_List_int_t  )
      { /* cicili#Block252 */
        __h_match247_0_arg  = (((list . __h_data ). Just_List_int ). __h_0_mem );
        tail  = (((__h_match247_0_arg -> __h_data ). Cons_int ). __h_1_mem );
      }
    ({ /* cicili#Let254 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_List_int_t  ) &&  ((__h_match247_0_arg -> __h_ctor ) ==  __h_Cons_int_t  ) );
      // ----------
      ((__h_case_result ) ? (((desired  ==  1 )) ? 1 : (1 +  has_len_List_int (tail , (--desired )) )) : ({ /* cicili#Let260 */
        // ----------
        /* cicili#Block262 */
        0;
      }));
    });
  });
}
Maybe_List_int append_List_int (Maybe_List_int llist , Maybe_List_int rlist ) {
  return ({ /* cicili#Let275 */
    typeof((((llist . __h_data ). Just_List_int ). __h_0_mem )) __h_match273_0_arg ;
    typeof((((__h_match273_0_arg -> __h_data ). Cons_int ). __h_0_mem )) head ;
    typeof((((__h_match273_0_arg -> __h_data ). Cons_int ). __h_1_mem )) tail ;
    // ----------
    if ((llist . __h_ctor ) ==  __h_Just_List_int_t  )
      { /* cicili#Block278 */
        __h_match273_0_arg  = (((llist . __h_data ). Just_List_int ). __h_0_mem );
        head  = (((__h_match273_0_arg -> __h_data ). Cons_int ). __h_0_mem );
        tail  = (((__h_match273_0_arg -> __h_data ). Cons_int ). __h_1_mem );
      }
    ({ /* cicili#Let280 */
      bool __h_case_result  = (((llist . __h_ctor ) ==  __h_Just_List_int_t  ) &&  ((__h_match273_0_arg -> __h_ctor ) ==  __h_Cons_int_t  ) );
      // ----------
      ((__h_case_result ) ? Just_List_int (__h_Cons_int_ctor (head , append_List_int (tail , rlist ))) : ({ /* cicili#Let297 */
        // ----------
        /* cicili#Block299 */
        rlist ;
      }));
    });
  });
}
Maybe_int nth_Cons_int (List_int cons , int index ) {
  return ({ /* cicili#Let309 */
    typeof((((cons -> __h_data ). Cons_int ). __h_0_mem )) head ;
    typeof((((cons -> __h_data ). Cons_int ). __h_1_mem )) tail ;
    // ----------
    if ((cons -> __h_ctor ) ==  __h_Cons_int_t  )
      { /* cicili#Block312 */
        head  = (((cons -> __h_data ). Cons_int ). __h_0_mem );
        tail  = (((cons -> __h_data ). Cons_int ). __h_1_mem );
      }
    ({ /* cicili#Let314 */
      bool __h_case_result  = ((cons -> __h_ctor ) ==  __h_Cons_int_t  );
      // ----------
      ((__h_case_result ) ? (((index  ==  0 )) ? Just_int (head ) : nth_List_int (tail , (--index ))) : ({ /* cicili#Let321 */
        // ----------
        /* cicili#Block323 */
        Nothing_int ();
      }));
    });
  });
}
Maybe_List_int nthcdr_Cons_int (List_int cons , int index ) {
  return (((index  ==  0 )) ? Just_List_int (cons ) : ({ /* cicili#Let334 */
      typeof((((cons -> __h_data ). Cons_int ). __h_1_mem )) tail ;
      // ----------
      if ((cons -> __h_ctor ) ==  __h_Cons_int_t  )
        { /* cicili#Block337 */
          tail  = (((cons -> __h_data ). Cons_int ). __h_1_mem );
        }
      ({ /* cicili#Let339 */
        bool __h_case_result  = ((cons -> __h_ctor ) ==  __h_Cons_int_t  );
        // ----------
        ((__h_case_result ) ? nthcdr_List_int (tail , (--index )) : ({ /* cicili#Let344 */
          // ----------
          /* cicili#Block346 */
          Nothing_List_int ();
        }));
      });
    }));
}
int len_Cons_int (List_int cons ) {
  return ({ /* cicili#Let354 */
    typeof((((cons -> __h_data ). Cons_int ). __h_1_mem )) tail ;
    // ----------
    if ((cons -> __h_ctor ) ==  __h_Cons_int_t  )
      { /* cicili#Block357 */
        tail  = (((cons -> __h_data ). Cons_int ). __h_1_mem );
      }
    ({ /* cicili#Let359 */
      bool __h_case_result  = ((cons -> __h_ctor ) ==  __h_Cons_int_t  );
      // ----------
      ((__h_case_result ) ? (1 +  len_List_int (tail ) ) : ({ /* cicili#Let364 */
        // ----------
        /* cicili#Block366 */
        0;
      }));
    });
  });
}
int has_len_Cons_int (List_int cons , int desired ) {
  return ({ /* cicili#Let373 */
    typeof((((cons -> __h_data ). Cons_int ). __h_1_mem )) tail ;
    // ----------
    if ((cons -> __h_ctor ) ==  __h_Cons_int_t  )
      { /* cicili#Block376 */
        tail  = (((cons -> __h_data ). Cons_int ). __h_1_mem );
      }
    ({ /* cicili#Let378 */
      bool __h_case_result  = ((cons -> __h_ctor ) ==  __h_Cons_int_t  );
      // ----------
      ((__h_case_result ) ? (1 +  has_len_List_int (tail , (--desired )) ) : ({ /* cicili#Let383 */
        // ----------
        /* cicili#Block385 */
        0;
      }));
    });
  });
}
void show_List_int (Maybe_List_int list ) {
  { /* cicili#Let393 */
    typeof((((list . __h_data ). Just_List_int ). __h_0_mem )) __h_match391_0_arg ;
    typeof((((__h_match391_0_arg -> __h_data ). Cons_int ). __h_0_mem )) head ;
    typeof((((__h_match391_0_arg -> __h_data ). Cons_int ). __h_1_mem )) tail ;
    // ----------
    if ((list . __h_ctor ) ==  __h_Just_List_int_t  )
      { /* cicili#Block396 */
        __h_match391_0_arg  = (((list . __h_data ). Just_List_int ). __h_0_mem );
        head  = (((__h_match391_0_arg -> __h_data ). Cons_int ). __h_0_mem );
        tail  = (((__h_match391_0_arg -> __h_data ). Cons_int ). __h_1_mem );
      }
    ({ /* cicili#Let398 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_List_int_t  ) &&  ((__h_match391_0_arg -> __h_ctor ) ==  __h_Cons_int_t  ) );
      // ----------
      if (__h_case_result )
        ({ /* cicili#Progn401 */
          printf ("%d, ", head );
          show_List_int (tail );
        });
    });
  }
}
int main () {
  ({ /* cicili#Let408 */
    __auto_type ilist0  __attribute__((__cleanup__(free_List_int ))) = new_List_int_Pure (((const int[]){ 1, 2, 3, 4, '\0'}));
    __auto_type ilist1  __attribute__((__cleanup__(free_List_int ))) = Just_List_int (__h_Cons_int_ctor (5, ilist0 ));
    __auto_type ilist2  __attribute__((__cleanup__(free_List_int ))) = append_List_int (ilist1 , ilist0 );
    // ----------
    fprintf (stdout , "first elem of int list0: %d\n", ({ /* cicili#Let431 */
      __auto_type __h_data430  = nth_List_int (ilist0 , 0);
      typeof((((__h_data430 . __h_data ). Just_int ). __h_0_mem )) i ;
      // ----------
      if ((__h_data430 . __h_ctor ) ==  __h_Just_int_t  )
        { /* cicili#Block436 */
          i  = (((__h_data430 . __h_data ). Just_int ). __h_0_mem );
        }
      ({ /* cicili#Let438 */
        bool __h_case_result  = ((__h_data430 . __h_ctor ) ==  __h_Just_int_t  );
        // ----------
        ((__h_case_result ) ? i  : ({ /* cicili#Let442 */
          // ----------
          /* cicili#Block444 */
          -1;
        }));
      });
    }));
    fprintf (stdout , "first elem of int list1: %d\n", ({ /* cicili#Let450 */
      __auto_type __h_data449  = nth_List_int (ilist1 , 0);
      typeof((((__h_data449 . __h_data ). Just_int ). __h_0_mem )) i ;
      // ----------
      if ((__h_data449 . __h_ctor ) ==  __h_Just_int_t  )
        { /* cicili#Block455 */
          i  = (((__h_data449 . __h_data ). Just_int ). __h_0_mem );
        }
      ({ /* cicili#Let457 */
        bool __h_case_result  = ((__h_data449 . __h_ctor ) ==  __h_Just_int_t  );
        // ----------
        ((__h_case_result ) ? i  : ({ /* cicili#Let461 */
          // ----------
          /* cicili#Block463 */
          -1;
        }));
      });
    }));
    fprintf (stdout , "list1 ++ list0:\n");
    show_List_int (ilist0 );
    fprintf (stdout , "\nlist1 ++ list1:\n");
    show_List_int (ilist1 );
    fprintf (stdout , "\nlist1 ++ list2:\n");
    show_List_int (ilist2 );
  });
}
