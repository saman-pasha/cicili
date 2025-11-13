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
#ifndef __Either_int_cfile_t__H_DECL__
#define __Either_int_cfile_t__H_DECL__
#ifndef __H___h_Either_ctor_t__
#define __H___h_Either_ctor_t__
typedef enum __h_Either_ctor_t {
  __h_Right_t = 0,
  __h_Left_t = 1
} __h_Either_ctor_t;
#endif /* __H___h_Either_ctor_t__ */ 
typedef struct Either_int_cfile_t Either_int_cfile_t ;
typedef void (*free_Either_int_cfile_t_t) (Either_int_cfile_t * this );
typedef struct Either_int_cfile_t__H_Table {
  free_Either_int_cfile_t_t freeData ;
} Either_int_cfile_t__H_Table;
typedef struct Either_int_cfile_t {
  const Either_int_cfile_t__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion113 */
    struct { /* ciciliStruct114 */
      int __h_0_mem ;
    } Left , _0 ;
    struct { /* ciciliStruct115 */
      cfile_t __h_0_mem ;
    } Right , _ ;
  } __h_data ;
} Either_int_cfile_t;
Either_int_cfile_t Left_int_cfile_t (int error );
Either_int_cfile_t Right_int_cfile_t (cfile_t value );
__attribute__((weak)) Either_int_cfile_t Default_Either_int_cfile_t (cfile_t value ) {
  return Right_int_cfile_t (value );
}
const Either_int_cfile_t__H_Table * const get_Either_int_cfile_t__H_Table ();
void free_Either_int_cfile_t (Either_int_cfile_t * this );
#endif /* __Either_int_cfile_t__H_DECL__ */ 
#ifndef __Either_int_cfile_t__H_IMPL__
#define __Either_int_cfile_t__H_IMPL__
void free_Either_int_cfile_t (Either_int_cfile_t * this ) {
}
const Either_int_cfile_t__H_Table * const get_Either_int_cfile_t__H_Table () {
  static const Either_int_cfile_t__H_Table table  = { free_Either_int_cfile_t };
  return (&table );
}
Either_int_cfile_t Left_int_cfile_t (int error ) {
  return ((Either_int_cfile_t){ get_Either_int_cfile_t__H_Table (), __h_Left_t , .__h_data.Left = { error }});
}
Either_int_cfile_t Right_int_cfile_t (cfile_t value ) {
  return ((Either_int_cfile_t){ get_Either_int_cfile_t__H_Table (), __h___t , .__h_data._ = { value }});
}
#endif /* __Either_int_cfile_t__H_IMPL__ */ 
Either_int_cfile_t writeTmpFile () {
  { /* cicili#Let148 */
    FILE * tmpf  = tmpfile ();
    // ----------
    if (tmpf  ==  NULL  )
      { /* cicili#Block152 */
        Left_int_cfile_t (errno );
      }
    fputs ("Alan Turing\n", tmpf );
    fputs ("John von Neumann\n", tmpf );
    fputs ("Alonzo Church\n", tmpf );
    return Right_int_cfile_t (tmpf );
  }
}
List_String safeReadFile (FILE * file ) {
  return (((file  ==  NULL  )) ? Empty_String () : ({ /* cicili#Let156 */
        char buf [8];
        size_t count  = 0;
        // ----------
        count  = fread (buf , sizeof(char), sizeof(buf), file );
        (((count  ==  0 )) ? Empty_String () : (((count  <  sizeof(buf) )) ? Cons_String (new_List_char_Pure (buf , count ), Empty_String ()) : Cons_String (new_List_char_Pure (buf , count ), safeReadFile (file ))));
      }));
}
int count_words (String text ) {
  return ({ /* cicili#Let168 */
      __auto_type ch  = (((text -> __h_data ). Cons ). __h_0_mem );
      __auto_type __h_match166_1_arg  = (((text -> __h_data ). Cons ). __h_1_mem );
      __auto_type tail  = __h_match166_1_arg ;
      // ----------
      /* cicili#Block170 */
      ({ /* cicili#Let172 */
        bool __h_case_result  = (((text -> __h_ctor ) ==  __h_Cons_t  ) &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
        // ----------
        ((__h_case_result ) ? ((((ch  ==  ' ' ) ||  (ch  ==  '\n' ) )) ? (1 +  count_words (tail ) ) : count_words (tail )) : ({ /* cicili#Let177 */
            // ----------
            /* cicili#Block179 */
            1;
          }));
      });
    });
}
void iter_words (List_String list ) {
  { /* cicili#Let184 */
    __auto_type str  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block186 */
    ({ /* cicili#Let188 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        ({ /* cicili#Progn191 */
          show_String (str );
          printf (" Word count: %d\n", count_words (str ));
          iter_words (tail );
          free_String ((&str ));
        });
      else
        { /* cicili#Let196 */
          __auto_type empty_str  = list ;
          // ----------
          /* cicili#Block198 */
          free_String ((&empty_str ));
        }
    });
  }
}
void file_close (FILE ** file_ptr ) {
  printf ("file closed deferred\n");
  fclose ((*file_ptr ));
}
int main () {
  ({ /* cicili#Let204 */
    __auto_type tmpf  = writeTmpFile ();
    // ----------
    { /* cicili#Let208 */
      __auto_type err  = (((tmpf . __h_data ). Left ). __h_0_mem );
      // ----------
      /* cicili#Block210 */
      ({ /* cicili#Let212 */
        bool __h_case_result  = ((tmpf . __h_ctor ) ==  __h_Left_t  );
        // ----------
        if (__h_case_result )
          printf ("Error No: %d occured!\n", err );
        else
          { /* cicili#Let218 */
            __auto_type file  = (((tmpf . __h_data ). Right ). __h_0_mem );
            // ----------
            /* cicili#Block220 */
            ({ /* cicili#Let222 */
              bool __h_case_result  = ((tmpf . __h_ctor ) ==  __h_Right_t  );
              // ----------
              if (__h_case_result )
                ({ /* cicili#Let226 */
                  __auto_type file  __attribute__((__cleanup__(file_close ))) = file ;
                  // ----------
                  rewind (file );
                  { /* cicili#Let231 */
                    __auto_type __h_data230  = safeReadFile (file );
                    // ----------
                    /* cicili#Block233 */
                    ({ /* cicili#Let235 */
                      bool __h_case_result  = ((__h_data230 -> __h_ctor ) ==  __h_Empty_t  );
                      // ----------
                      if (__h_case_result )
                        printf ("Error: nothing to read\n");
                      else
                        { /* cicili#Let241 */
                          __auto_type first_cons  = __h_data230 ;
                          // ----------
                          /* cicili#Block243 */
                          ({ /* cicili#Let245 */
                            bool __h_case_result  = ((first_cons -> __h_ctor ) ==  __h_Cons_t  );
                            // ----------
                            if (__h_case_result )
                              ({ /* cicili#Progn248 */
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
