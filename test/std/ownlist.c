#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#ifndef __MAYBE_H_
#define __MAYBE_H_
typedef enum MAYBE_CTOR {
  NOTHING_CTOR = 0,
  JUST_CTOR
} MAYBE_CTOR;
typedef struct NothingT {
  char _unused ;
} NothingT;
typedef struct std_maybe std_maybe ;
#endif /* __MAYBE_H_ */ 
#ifndef __MAYBE__ref_char__H_
#define __MAYBE__ref_char__H_
typedef struct JustT_ref_char {
  char * restrict value ;
} JustT_ref_char;
typedef struct Maybe_ref_char {
  MAYBE_CTOR ctor ;
  union { /* ciciliUnion111 */
    JustT_ref_char just ;
    NothingT nothing ;
  } data ;
} Maybe_ref_char;
typedef std_maybe Maybe_ref_char_type_t ;
Maybe_ref_char just_ref_char (char * restrict value );
Maybe_ref_char nothing_ref_char ();
#endif /* __MAYBE__ref_char__H_ */ 
typedef struct vector_char {
  char * restrict arr ;
  size_t cap ;
  size_t len ;
} vector_char;
typedef char vector_char_item_t ;
#ifndef __VECTOR_TYPE_H_
#define __VECTOR_TYPE_H_
typedef struct std_vector std_vector ;
#endif /* __VECTOR_TYPE_H_ */ 
typedef std_vector vector_char_type_t ;
void free_vector_char (vector_char * restrict vector );
void free_vector_char_pointer (vector_char ** vector );
size_t arraySize_vector_char (size_t size );
vector_char new_vector_char (const char * items , size_t len );
size_t len_vector_char (vector_char * restrict vector );
Maybe_ref_char nth_vector_char (size_t index , vector_char * restrict vector );
void grow_vector_char (vector_char * restrict vector , size_t needed );
size_t push_vector_char (vector_char * restrict vector , char item );
size_t append_vector_char (vector_char * restrict vector , const char * items , size_t count );
typedef vector_char string ;
void free_string (string * restrict str );
void free_string_pointer (string ** str );
string new_string (const char * buf );
string new_string_bytes (const char * buf , size_t len );
size_t append_string (string * restrict lhs , string * restrict rhs );
size_t show_string (FILE * file , string * restrict str );
const char * c_str_string (string * restrict str );
#ifndef __MAYBE_IMPL__ref_char__H_
#define __MAYBE_IMPL__ref_char__H_
Maybe_ref_char just_ref_char (char * restrict value ) {
  return ((Maybe_ref_char){ .ctor = JUST_CTOR , .data.just.value = value });
}
Maybe_ref_char nothing_ref_char () {
  return ((Maybe_ref_char){ .ctor = NOTHING_CTOR });
}
#endif /* __MAYBE_IMPL__ref_char__H_ */ 
__attribute__((weak)) void free_vector_char (vector_char * restrict vector ) {
  free ((vector -> arr));
}
__attribute__((weak)) void free_vector_char_pointer (vector_char ** vector ) {
  free_vector_char ((*vector ));
}
size_t arraySize_vector_char (size_t size ) {
  { /* let196 */
    size_t two_pow  = 0x10;
    // ----------
    while ((two_pow  <  size  )) {
        two_pow  = (two_pow  <<  1 );
    }
    return two_pow ;
  }
}
vector_char new_vector_char (const char * items , size_t len ) {
  if (len  ==  0 )
    { /* block206 */
      return ((vector_char){ NULL , 0, 0});
    }
  return ({ /* letn209 */
      const size_t cap  = arraySize_vector_char (len );
      char * restrict arr  = malloc ((cap  *  sizeof(char) ));
      // ----------
      if (items  &&  len  )
        memcpy (arr , items , (len  *  sizeof(char) ));
      else
        memset (arr , 0, (len  *  sizeof(char) ));
      ((vector_char){ arr , cap , len });
    });
}
size_t len_vector_char (vector_char * restrict vector ) {
  return (vector -> len);
}
Maybe_ref_char nth_vector_char (size_t index , vector_char * restrict vector ) {
  if (index  <  (vector -> len) )
    return ((Maybe_ref_char){ .ctor = JUST_CTOR , .data.just.value = ((vector -> arr) +  index  )});
  else
    return ((Maybe_ref_char){ .ctor = NOTHING_CTOR });
}
void grow_vector_char (vector_char * restrict vector , size_t needed ) {
  if (needed  >  (vector -> cap) )
    { /* block236 */
      { /* let238 */
        const size_t cap  = arraySize_vector_char (needed );
        // ----------
        (vector -> arr) = realloc ((vector -> arr), (cap  *  sizeof(char) ));
        (vector -> cap) = cap ;
      }
    }
}
size_t push_vector_char (vector_char * restrict vector , char item ) {
  grow_vector_char (vector , ((vector -> len) +  1 ));
  (vector -> arr)[(vector -> len)] = item ;
  (vector -> len) = ((vector -> len) +  1 );
  return (vector -> len);
}
size_t append_vector_char (vector_char * restrict vector , const char * items , size_t count ) {
  grow_vector_char (vector , ((vector -> len) +  count  ));
  memcpy (((vector -> arr) +  (vector -> len) ), items , (count  *  sizeof(char) ));
  (vector -> len) = ((vector -> len) +  count  );
  return (vector -> len);
}
__attribute__((weak)) void free_string (string * restrict str ) {
  free_vector_char (str );
}
__attribute__((weak)) void free_string_pointer (string ** str ) {
  free_vector_char ((*str ));
}
string new_string (const char * buf ) {
  if ((buf  ==  NULL  ) ||  ((*buf ) ==  '\0' ) )
    { /* block262 */
      return ((string){ NULL , 0, 0});
    }
  return new_string_bytes (buf , strlen (buf ));
}
string new_string_bytes (const char * buf , size_t len ) {
  if ((buf  ==  NULL  ) ||  (len  ==  0 ) )
    { /* block270 */
      return ((string){ NULL , 0, 0});
    }
  return ({ /* letn272 */
      const size_t cap  = arraySize_vector_char ((len  +  1 ));
      char * restrict arr  = malloc (cap );
      // ----------
      memcpy (arr , buf , len );
      arr [len ] = '\0';
      ((string){ arr , cap , len });
    });
}
size_t append_string (string * restrict lhs , string * restrict rhs ) {
  if ((rhs -> len))
    { /* block280 */
      append_vector_char (lhs , (rhs -> arr), (rhs -> len));
      (lhs -> arr)[(lhs -> len)] = '\0';
    }
  return (lhs -> len);
}
size_t show_string (FILE * file , string * restrict str ) {
  if ((str -> len) ==  0 )
    { /* block288 */
      return 0;
    }
  return fwrite ((str -> arr), sizeof(char), (str -> len), file );
}
const char * c_str_string (string * restrict str ) {
  if ((str -> arr) ==  NULL  )
    { /* block295 */
      return "";
    }
  grow_vector_char (str , ((str -> len) +  1 ));
  (str -> arr)[(str -> len)] = '\0';
  return (str -> arr);
}
#ifndef __MAYBE_H_
#define __MAYBE_H_
typedef enum MAYBE_CTOR {
  NOTHING_CTOR = 0,
  JUST_CTOR
} MAYBE_CTOR;
typedef struct NothingT {
  char _unused ;
} NothingT;
typedef struct std_maybe std_maybe ;
#endif /* __MAYBE_H_ */ 
#ifndef __MAYBE__ref_string__H_
#define __MAYBE__ref_string__H_
typedef struct JustT_ref_string {
  string * restrict value ;
} JustT_ref_string;
typedef struct Maybe_ref_string {
  MAYBE_CTOR ctor ;
  union { /* ciciliUnion305 */
    JustT_ref_string just ;
    NothingT nothing ;
  } data ;
} Maybe_ref_string;
typedef std_maybe Maybe_ref_string_type_t ;
Maybe_ref_string just_ref_string (string * restrict value );
Maybe_ref_string nothing_ref_string ();
#endif /* __MAYBE__ref_string__H_ */ 
#ifndef __OwnList_string__H_DECL__
#define __OwnList_string__H_DECL__
#ifndef __H___h_OwnList_ctor_t__
#define __H___h_OwnList_ctor_t__
typedef enum __h_OwnList_ctor_t {
  __h_ONil_t = 0,
  __h_OCons_t = 1
} __h_OwnList_ctor_t;
#endif /* __H___h_OwnList_ctor_t__ */ 
#ifndef __H_STD_CLASS_
#define __H_STD_CLASS_
typedef struct std_class std_class ;
#endif /* __H_STD_CLASS_ */ 
typedef struct class_OwnList_string class_OwnList_string ;
typedef class_OwnList_string * OwnList_string ;
typedef std_class OwnList_string_type_t ;
typedef void (*free_OwnList_string_t) (OwnList_string * this_ptr );
typedef struct OwnList_string__H_Table {
  free_OwnList_string_t freeClass ;
    size_t (*show) (FILE * file , OwnList_string list );
    size_t (*hasLen) (OwnList_string list , size_t desired );
    size_t (*len) (OwnList_string list );
    OwnList_string (*tail) (OwnList_string list );
    OwnList_string (*nthcdr) (size_t index , OwnList_string list );
    Maybe_ref_string (*head) (OwnList_string list );
    Maybe_ref_string (*nth) (size_t index , OwnList_string list );
} OwnList_string__H_Table;
typedef struct class_OwnList_string {
  const OwnList_string__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion336 */
    struct { /* ciciliStruct337 */
      string __h_0_mem ;
      OwnList_string __h_1_mem ;
    } OCons , _1 ;
    struct { /* ciciliStruct338 */
    } ONil , _ ;
  } __h_data ;
} class_OwnList_string;
OwnList_string OCons_string (string head , OwnList_string tail );
OwnList_string ONil_string ();
__attribute__((weak)) OwnList_string Default_OwnList_string () {
  return ONil_string ();
}
size_t show_OwnList_string (FILE * file , OwnList_string list );
size_t hasLen_OwnList_string (OwnList_string list , size_t desired );
size_t len_OwnList_string (OwnList_string list );
OwnList_string tail_OwnList_string (OwnList_string list );
OwnList_string nthcdr_OwnList_string (size_t index , OwnList_string list );
Maybe_ref_string head_OwnList_string (OwnList_string list );
Maybe_ref_string nth_OwnList_string (size_t index , OwnList_string list );
OwnList_string__H_Table * const get_OwnList_string__H_Table ();
void free_OwnList_string (OwnList_string * this_ptr );
void free_OwnList_string_pointer (OwnList_string ** this_ptr );
#endif /* __OwnList_string__H_DECL__ */ 
#ifndef __OwnList_string__H_IMPL__
#define __OwnList_string__H_IMPL__
size_t show_OwnList_string (FILE * file , OwnList_string list ) {
  return ({ /* letn387 */
      typeof((((list -> __h_data). OCons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn389 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_OCons_t  ) &&  ({ /* progn390 */
              tail  = (((list -> __h_data). OCons). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn395 */
            (((size_t)show_string (file , (&(((list -> __h_data). OCons). __h_0_mem)))) +  ({ /* letn406 */
                // ----------
                ;
                ({ /* letn408 */
                  bool __h_case_result  = (true  &&  ((tail -> __h_ctor) ==  __h_OCons_t  ) );
                  // ----------
                  
                  ((__h_case_result ) ? ({ /* progn412 */
                      (((size_t)fprintf (file , "%s", " ")) +  show_OwnList_string (file , tail ) );
                    }) : ({ /* letn417 */
                      // ----------
                      ;
                      ({ /* progn419 */
                        0;
                      });
                    }));
                });
              }) );
          }) : ({ /* letn423 */
            // ----------
            ;
            ({ /* progn425 */
              0;
            });
          }));
      });
    });
}
size_t hasLen_OwnList_string (OwnList_string list , size_t desired ) {
  return ({ /* letn433 */
      typeof((((list -> __h_data). OCons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn435 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_OCons_t  ) &&  ({ /* progn436 */
              tail  = (((list -> __h_data). OCons). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn441 */
            (((desired  ==  1 )) ? 1 : (1 +  hasLen_OwnList_string (tail , (--desired )) ));
          }) : ({ /* letn447 */
            // ----------
            ;
            ({ /* progn449 */
              0;
            });
          }));
      });
    });
}
size_t len_OwnList_string (OwnList_string list ) {
  return ({ /* letn457 */
      typeof((((list -> __h_data). OCons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn459 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_OCons_t  ) &&  ({ /* progn460 */
              tail  = (((list -> __h_data). OCons). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn465 */
            (1 +  len_OwnList_string (tail ) );
          }) : ({ /* letn470 */
            // ----------
            ;
            ({ /* progn472 */
              0;
            });
          }));
      });
    });
}
OwnList_string tail_OwnList_string (OwnList_string list ) {
  return nthcdr_OwnList_string (1, list );
}
OwnList_string nthcdr_OwnList_string (size_t index , OwnList_string list ) {
  return ({ /* letn483 */
      typeof((((list -> __h_data). OCons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn485 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_OCons_t  ) &&  (({ /* progn486 */
                tail  = (((list -> __h_data). OCons). __h_1_mem) ;
                true ;
              }) &&  (index  >  0 ) ) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn491 */
            nthcdr_OwnList_string ((--index ), tail );
          }) : ({ /* letn496 */
            // ----------
            ;
            ({ /* progn498 */
              list ;
            });
          }));
      });
    });
}
Maybe_ref_string head_OwnList_string (OwnList_string list ) {
  return ({ /* letn507 */
      // ----------
      ;
      ({ /* letn509 */
        bool __h_case_result  = (true  &&  ((list -> __h_ctor) ==  __h_OCons_t  ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn513 */
            ((Maybe_ref_string){ .ctor = JUST_CTOR , .data.just.value = (&(((list -> __h_data). OCons). __h_0_mem))});
          }) : ({ /* letn519 */
            // ----------
            ;
            ({ /* progn521 */
              ((Maybe_ref_string){ .ctor = NOTHING_CTOR });
            });
          }));
      });
    });
}
Maybe_ref_string nth_OwnList_string (size_t index , OwnList_string list ) {
  return ({ /* letn532 */
      typeof((((list -> __h_data). OCons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn534 */
        bool __h_case_result  = (true  &&  (((list -> __h_ctor) ==  __h_OCons_t  ) &&  ({ /* progn535 */
              tail  = (((list -> __h_data). OCons). __h_1_mem) ;
              true ;
            }) ) );
        // ----------
        
        ((__h_case_result ) ? ({ /* progn540 */
            (((index  ==  0 )) ? ((Maybe_ref_string){ .ctor = JUST_CTOR , .data.just.value = (&(((list -> __h_data). OCons). __h_0_mem))}) : nth_OwnList_string ((--index ), tail ));
          }) : ({ /* letn548 */
            // ----------
            ;
            ({ /* progn550 */
              ((Maybe_ref_string){ .ctor = NOTHING_CTOR });
            });
          }));
      });
    });
}
void free_OwnList_string (OwnList_string * this_ptr ) {
  { /* let556 */
    OwnList_string this  = (*this_ptr );
    // ----------
    { /* let560 */
      typeof((((this -> __h_data). OCons). __h_0_mem)) head ;
      typeof((((this -> __h_data). OCons). __h_1_mem)) tail ;
      // ----------
      ;
      ({ /* letn562 */
        bool __h_case_result  = (true  &&  (((this -> __h_ctor) ==  __h_OCons_t  ) &&  (({ /* progn563 */
                head  = (((this -> __h_data). OCons). __h_0_mem) ;
                true ;
              }) &&  ({ /* progn565 */
                tail  = (((this -> __h_data). OCons). __h_1_mem) ;
                true ;
              }) ) ) );
        // ----------
        
        if (__h_case_result )
          { /* block572 */
            { /* block574 */
              free_string ((&head ));
              free (this );
              free_OwnList_string ((&tail ));
            }
          }
        else
          { /* let581 */
            // ----------
            ;
            ({ /* letn583 */
              bool __h_case_result  = (true  &&  ((this -> __h_ctor) ==  __h_ONil_t  ) );
              // ----------
              
              if (__h_case_result )
                { /* block589 */
                  free (this );
                }
            });
          }
      });
    }
  }
}
__attribute__((weak)) void free_OwnList_string_pointer (OwnList_string ** this_ptr ) {
  if (this_ptr )
    { /* block596 */
      free_OwnList_string ((*this_ptr ));
    }
}
OwnList_string__H_Table * const get_OwnList_string__H_Table () {
  static OwnList_string__H_Table table  = { free_OwnList_string , show_OwnList_string , hasLen_OwnList_string , len_OwnList_string , tail_OwnList_string , nthcdr_OwnList_string , head_OwnList_string , nth_OwnList_string };
  return (&table );
}
OwnList_string OCons_string (string head , OwnList_string tail ) {
  string * __moved_head __attribute__((__cleanup__( free_string_pointer))) = (& head) ;
  { /* let607 */
    OwnList_string instance  = malloc (sizeof(class_OwnList_string));
    // ----------
    (*instance ) = ((class_OwnList_string){ get_OwnList_string__H_Table (), __h_OCons_t , .__h_data.OCons = { ((string   )({ /* letnmove611 */
              string moved_var610  = head ;
              // ----------
              memset ((&head ), 0, sizeof(head ));
              moved_var610 ;
            })), tail }});
    return instance ;
  }
}
OwnList_string ONil_string () {
  { /* let616 */
    OwnList_string instance  = malloc (sizeof(class_OwnList_string));
    // ----------
    (*instance ) = ((class_OwnList_string){ get_OwnList_string__H_Table (), __h_ONil_t });
    return instance ;
  }
}
#endif /* __OwnList_string__H_IMPL__ */ 
static int bad  = 0;
int check (const char * what , long got , long want ) {
  if (got  ==  want  )
    { /* block623 */
      printf ("ok   %-40s %ld\n", what , got );
      return 0;
    }
  else
    { /* block626 */
      printf ("FAIL %-40s got %ld want %ld\n", what , got , want );
      return 1;
    }
}
int main () {
  ({ /* letn631 */
    OwnList_string l  __attribute__((__cleanup__(free_OwnList_string ))) = OCons_string (new_string ("alan"), OCons_string (new_string ("alonzo"), OCons_string (new_string ("haskell"), ONil_string ())));
    // ----------
    bad  += check ("three elements", ((long)len_OwnList_string (l )), 3) ;
    bad  += check ("nth borrows the first", ({ /* letn642 */
          Maybe_ref_string matchn641  = nth_OwnList_string (0, l );
          // ----------
          ((((matchn641 . ctor) ==  JUST_CTOR  )) ? ({ /* letn644 */
              string * restrict s  = (((matchn641 . data). just). value);
              // ----------
              ((long)len_vector_char (s ));
            }) : ({ /* progn648 */
              -1;
            }));
        }), 4) ;
    bad  += check ("nth borrows the last", ({ /* letn653 */
          Maybe_ref_string matchn652  = nth_OwnList_string (2, l );
          // ----------
          ((((matchn652 . ctor) ==  JUST_CTOR  )) ? ({ /* letn655 */
              string * restrict s  = (((matchn652 . data). just). value);
              // ----------
              ((long)len_vector_char (s ));
            }) : ({ /* progn659 */
              -1;
            }));
        }), 7) ;
    bad  += check ("nth past the end is nothing", ({ /* letn664 */
          Maybe_ref_string matchn663  = nth_OwnList_string (9, l );
          // ----------
          ((((matchn663 . ctor) ==  JUST_CTOR  )) ? ({ /* letn666 */
              string * restrict _  = (((matchn663 . data). just). value);
              // ----------
              1;
            }) : ({ /* progn668 */
              0;
            }));
        }), 0) ;
    bad  += check ("head borrows the first", ({ /* letn673 */
          Maybe_ref_string matchn672  = head_OwnList_string (l );
          // ----------
          ((((matchn672 . ctor) ==  JUST_CTOR  )) ? ({ /* letn675 */
              string * restrict s  = (((matchn672 . data). just). value);
              // ----------
              ((long)len_vector_char (s ));
            }) : ({ /* progn679 */
              -1;
            }));
        }), 4) ;
    ({ /* letn682 */
      string mark  __attribute__((__cleanup__(free_string ))) = new_string ("!");
      // ----------
      { /* let688 */
        Maybe_ref_string match687  = nth_OwnList_string (1, l );
        // ----------
        if ((match687 . ctor) ==  JUST_CTOR  ) {
            { /* let692 */
              string * restrict s  = (((match687 . data). just). value);
              // ----------
              ((void)append_string (s , (&mark )));
            }
        }
        else if ((match687 . ctor) ==  NOTHING_CTOR  ) {
            bad  = (bad  +  1 );
        }
      }
    });
    bad  += check ("and the write went through it", ({ /* letn698 */
          Maybe_ref_string matchn697  = nth_OwnList_string (1, l );
          // ----------
          ((((matchn697 . ctor) ==  JUST_CTOR  )) ? ({ /* letn700 */
              string * restrict s  = (((matchn697 . data). just). value);
              // ----------
              ((long)len_vector_char (s ));
            }) : ({ /* progn704 */
              -1;
            }));
        }), 7) ;
    bad  += check ("the tail is one shorter", ((long)len_OwnList_string (tail_OwnList_string (l ))), 2) ;
    printf ("list: ");
    show_OwnList_string (stdout , l );
    putchar ('\n');
  });
  ({ /* letn709 */
    OwnList_string e  __attribute__((__cleanup__(free_OwnList_string ))) = ONil_string ();
    // ----------
    bad  += check ("an empty list is empty", ((long)len_OwnList_string (e )), 0) ;
    bad  += check ("and borrows nothing", ({ /* letn717 */
          Maybe_ref_string matchn716  = nth_OwnList_string (0, e );
          // ----------
          ((((matchn716 . ctor) ==  JUST_CTOR  )) ? ({ /* letn719 */
              string * restrict _  = (((matchn716 . data). just). value);
              // ----------
              1;
            }) : ({ /* progn721 */
              0;
            }));
        }), 0) ;
  });
  if (bad  ==  0 )
    printf ("ownlist: all ok\n");
  else
    printf ("ownlist: %d FAILED\n", bad );
  return bad ;
}
