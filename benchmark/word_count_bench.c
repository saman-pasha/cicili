#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "../haskell.h"
#include <errno.h>
#include <time.h>
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
  union { /* ciciliUnion114 */
    struct { /* ciciliStruct115 */
      String __h_0_mem ;
    } Left , _0 ;
    struct { /* ciciliStruct116 */
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
  { /* cicili#Let149 */
    FILE * tmpf  = tmpfile ();
    // ----------
    if (tmpf  ==  NULL  )
      { /* cicili#Block153 */
        Left_String_cfile_t (strerror (errno ));
      }
    fputs ("Alan Turing\n", tmpf );
    fputs ("John von Neumann\n", tmpf );
    fputs ("Alonzo Church\n", tmpf );
    return Right_String_cfile_t (tmpf );
  }
}
List_String safeReadFile (FILE * file ) {
  return (((file  ==  NULL  )) ? Empty_String () : ({ /* cicili#Let157 */
        char buf [8];
        size_t count  = 0;
        // ----------
        count  = fread (buf , sizeof(char), sizeof(buf), file );
        (((count  ==  0 )) ? Empty_String () : (((count  <  sizeof(buf) )) ? Cons_String (new_List_char_Pure (buf , count ), Empty_String ()) : Cons_String (new_List_char_Pure (buf , count ), safeReadFile (file ))));
      }));
}
int count_words (String text ) {
  return ({ /* cicili#Let169 */
      __auto_type ch  = (((text -> __h_data ). Cons ). __h_0_mem );
      __auto_type __h_match167_1_arg  = (((text -> __h_data ). Cons ). __h_1_mem );
      __auto_type tail  = __h_match167_1_arg ;
      // ----------
      /* cicili#Block171 */
      ({ /* cicili#Let173 */
        bool __h_case_result  = (((text -> __h_ctor ) ==  __h_Cons_t  ) &&  ((tail -> __h_ctor ) ==  __h_Cons_t  ) );
        // ----------
        ((__h_case_result ) ? ((((ch  ==  ' ' ) ||  (ch  ==  '\n' ) )) ? (1 +  count_words (tail ) ) : count_words (tail )) : ({ /* cicili#Let178 */
            // ----------
            /* cicili#Block180 */
            1;
          }));
      });
    });
}
void iter_words (List_String list ) {
  { /* cicili#Let185 */
    __auto_type str  = (((list -> __h_data ). Cons ). __h_0_mem );
    __auto_type tail  = (((list -> __h_data ). Cons ). __h_1_mem );
    // ----------
    /* cicili#Block187 */
    ({ /* cicili#Let189 */
      bool __h_case_result  = ((list -> __h_ctor ) ==  __h_Cons_t  );
      // ----------
      if (__h_case_result )
        ({ /* cicili#Progn192 */
          show_String (str );
          printf (" Word count: %d\n", count_words (str ));
          iter_words (tail );
          free_String ((&str ));
        });
      else
        { /* cicili#Let197 */
          __auto_type empty_str  = list ;
          // ----------
          /* cicili#Block199 */
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
  { /* cicili#Let204 */
    __auto_type start  = time (NULL );
    // ----------
    for (int i  = 0; (i  <  1000000 ); (++i )) {
        ({ /* cicili#Let209 */
          __auto_type tmpf  = writeTmpFile ();
          // ----------
          { /* cicili#Let213 */
            __auto_type error  = (((tmpf . __h_data ). Left ). __h_0_mem );
            // ----------
            /* cicili#Block215 */
            ({ /* cicili#Let217 */
              bool __h_case_result  = ((tmpf . __h_ctor ) ==  __h_Left_t  );
              // ----------
              if (__h_case_result )
                ({ /* cicili#Let221 */
                  __auto_type error  __attribute__((__cleanup__(free_String ))) = error ;
                  // ----------
                  printf ("File opening error: ");
                  show_String (error );
                  putchar ('\n');
                });
              else
                { /* cicili#Let226 */
                  __auto_type file  = (((tmpf . __h_data ). Right ). __h_0_mem );
                  // ----------
                  /* cicili#Block228 */
                  ({ /* cicili#Let230 */
                    bool __h_case_result  = ((tmpf . __h_ctor ) ==  __h_Right_t  );
                    // ----------
                    if (__h_case_result )
                      ({ /* cicili#Let234 */
                        __auto_type file  __attribute__((__cleanup__(file_close ))) = file ;
                        // ----------
                        rewind (file );
                        { /* cicili#Let239 */
                          __auto_type __h_data238  = safeReadFile (file );
                          // ----------
                          /* cicili#Block241 */
                          ({ /* cicili#Let243 */
                            bool __h_case_result  = ((__h_data238 -> __h_ctor ) ==  __h_Empty_t  );
                            // ----------
                            if (__h_case_result )
                              printf ("Error: nothing to read\n");
                            else
                              { /* cicili#Let249 */
                                __auto_type first_cons  = __h_data238 ;
                                // ----------
                                /* cicili#Block251 */
                                ({ /* cicili#Let253 */
                                  bool __h_case_result  = ((first_cons -> __h_ctor ) ==  __h_Cons_t  );
                                  // ----------
                                  if (__h_case_result )
                                    ({ /* cicili#Progn256 */
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
    fprintf (stdout , "%lu seconds elapsed\n", ((unsigned long)(time (NULL ) -  start  )));
  }
}
