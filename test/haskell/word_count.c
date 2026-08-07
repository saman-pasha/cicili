#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "../../haskell.h"
#include <errno.h>
typedef char * cstr_t ;
typedef FILE * cfile_t ;
#ifndef __Either_String_cfile_t__H_DECL__
#define __Either_String_cfile_t__H_DECL__
#ifndef __H___h_Either_ctor_t__
#define __H___h_Either_ctor_t__
typedef enum __h_Either_ctor_t {
  __h_Right_t = 0,
  __h_Left_t = 1
} __h_Either_ctor_t;
#endif /* __H___h_Either_ctor_t__ */ 
typedef struct Either_String_cfile_t Either_String_cfile_t ;
typedef void (*free_Either_String_cfile_t_t) (Either_String_cfile_t * this );
typedef struct Either_String_cfile_t__H_Table {
  free_Either_String_cfile_t_t freeData ;
} Either_String_cfile_t__H_Table;
typedef struct Either_String_cfile_t {
  const Either_String_cfile_t__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion113 */
    struct { /* ciciliStruct114 */
      String __h_0_mem ;
    } Left , _0 ;
    struct { /* ciciliStruct115 */
      cfile_t __h_0_mem ;
    } Right , _ ;
  } __h_data ;
} Either_String_cfile_t;
Either_String_cfile_t Left_String_cfile_t (String error );
Either_String_cfile_t Right_String_cfile_t (cfile_t value );
__attribute__((weak)) Either_String_cfile_t Default_Either_String_cfile_t (cfile_t value ) {
  return Right_String_cfile_t (value );
}
const Either_String_cfile_t__H_Table * const get_Either_String_cfile_t__H_Table ();
void free_Either_String_cfile_t (Either_String_cfile_t * this );
#endif /* __Either_String_cfile_t__H_DECL__ */ 
#ifndef __Either_String_cfile_t__H_IMPL__
#define __Either_String_cfile_t__H_IMPL__
void free_Either_String_cfile_t (Either_String_cfile_t * this ) {
}
const Either_String_cfile_t__H_Table * const get_Either_String_cfile_t__H_Table () {
  static const Either_String_cfile_t__H_Table table  = { free_Either_String_cfile_t };
  return (&table );
}
Either_String_cfile_t Left_String_cfile_t (String error ) {
  return ((Either_String_cfile_t){ get_Either_String_cfile_t__H_Table (), __h_Left_t , .__h_data.Left = { error }});
}
Either_String_cfile_t Right_String_cfile_t (cfile_t value ) {
  return ((Either_String_cfile_t){ get_Either_String_cfile_t__H_Table (), __h___t , .__h_data._ = { value }});
}
#endif /* __Either_String_cfile_t__H_IMPL__ */ 
Either_String_cfile_t writeTmpFile () {
  { /* cicili#Let148 */
    FILE * tmpf  = tmpfile ();
    // ----------
    if (tmpf  ==  NULL  )
      { /* cicili#Block152 */
        { /* cicili#Let154 */
          __auto_type err  = strerror (errno );
          // ----------
          return Left_String_cfile_t (new_List_char_Pure (err , strlen (err )));
        }
      }
    fputs ("Alan Turing\n", tmpf );
    fputs ("John von Neumann\n", tmpf );
    fputs ("Alonzo Church\n", tmpf );
    return Right_String_cfile_t (tmpf );
  }
}
List_String safeReadFile (FILE * file ) {
  return (((file  ==  NULL  )) ? Empty_String () : ({ /* cicili#Let160 */
        char buf [8];
        size_t count  = 0;
        // ----------
        count  = fread (buf , sizeof(char), sizeof(buf), file );
        (((count  ==  0 )) ? Empty_String () : (((count  <  sizeof(buf) )) ? Cons_String (new_List_char_Pure (buf , count ), Empty_String ()) : Cons_String (new_List_char_Pure (buf , count ), safeReadFile (file ))));
      }));
}
int count_words (String text ) {
  return ({ /* cicili#Let172 */
      __auto_type ch  = (((text -> __h_data ). Cons ). __h_0_mem );
      __auto_type __h_match170_1_arg  = (((text -> __h_data ). Cons ). __h_1_mem );
      __auto_type tail  = __h_match170_1_arg ;
      // ----------
      /* cicili#Block174 */
      ({ /* cicili#Let176 */
        bool __h_case_result  = (((text -> __h_ctor ) ==  __h_Cons_t  ) &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
        // ----------
        ((__h_case_result ) ? ((((ch  ==  ' ' ) ||  (ch  ==  '\n' ) )) ? (1 +  count_words (tail ) ) : count_words (tail )) : ({ /* cicili#Let181 */
            // ----------
            /* cicili#Block183 */
            1;
          }));
      });
    });
}
void iter_words (List_String list ) {
  { /* cicili#Let188 */
    __auto_type str  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block190 */
    ({ /* cicili#Let192 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        ({ /* cicili#Progn195 */
          show_String (str );
          printf (" Word count: %d\n", count_words (str ));
          iter_words (tail );
          free_String ((&str ));
        });
      else
        { /* cicili#Let200 */
          __auto_type empty_str  = list ;
          // ----------
          /* cicili#Block202 */
          free_List_String ((&empty_str ));
        }
    });
  }
}
void file_close (FILE ** file_ptr ) {
  printf ("file closed deferred\n");
  fclose ((*file_ptr ));
}
int main () {
  ({ /* cicili#Let208 */
    __auto_type tmpf  = writeTmpFile ();
    // ----------
    { /* cicili#Let212 */
      __auto_type error  = (((tmpf . __h_data ). Left ). __h_0_mem );
      // ----------
      /* cicili#Block214 */
      ({ /* cicili#Let216 */
        bool __h_case_result  = ((tmpf . __h_ctor ) ==  __h_Left_t  );
        // ----------
        if (__h_case_result )
          ({ /* cicili#Let220 */
            __auto_type error  __attribute__((__cleanup__(free_String ))) = error ;
            // ----------
            printf ("File opening error: ");
            show_String (error );
            putchar ('\n');
          });
        else
          { /* cicili#Let225 */
            __auto_type file  = (((tmpf . __h_data ). Right ). __h_0_mem );
            // ----------
            /* cicili#Block227 */
            ({ /* cicili#Let229 */
              bool __h_case_result  = ((tmpf . __h_ctor ) ==  __h_Right_t  );
              // ----------
              if (__h_case_result )
                ({ /* cicili#Let233 */
                  __auto_type file  __attribute__((__cleanup__(file_close ))) = file ;
                  // ----------
                  rewind (file );
                  { /* cicili#Let238 */
                    __auto_type __h_data237  = safeReadFile (file );
                    // ----------
                    /* cicili#Block240 */
                    ({ /* cicili#Let242 */
                      bool __h_case_result  = ((__h_data237 -> __h_ctor ) ==  __h_Empty_t  );
                      // ----------
                      if (__h_case_result )
                        printf ("Error: nothing to read\n");
                      else
                        { /* cicili#Let248 */
                          __auto_type first_cons  = __h_data237 ;
                          // ----------
                          /* cicili#Block250 */
                          ({ /* cicili#Let252 */
                            bool __h_case_result  = ((first_cons -> __h_ctor ) ==  __h_Cons_t  );
                            // ----------
                            if (__h_case_result )
                              ({ /* cicili#Progn255 */
                                printf ("File loaded successfully!\n");
                                iter_words (first_cons );
                              });
                          });
                        }
                    });
                  }
                });
            });
          }
      });
    }
  });
}
