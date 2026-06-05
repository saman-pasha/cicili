#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "haskell.h"
#ifndef __StringBuffer_char__H_DECL__
#define __StringBuffer_char__H_DECL__
#ifndef __H___h_StringBuffer_ctor_t__
#define __H___h_StringBuffer_ctor_t__
typedef enum __h_StringBuffer_ctor_t {
  __h_Freed_t = 0,
  __h_NullTerminated_t = 1,
  __h_Bufferred_t = 2
} __h_StringBuffer_ctor_t;
#endif /* __H___h_StringBuffer_ctor_t__ */ 
typedef struct StringBuffer_char StringBuffer_char ;
typedef void (*free_StringBuffer_char_t) (StringBuffer_char * this );
typedef struct StringBuffer_char__H_Table {
  free_StringBuffer_char_t freeData ;
    StringBuffer_char (*new) (int step , bool null_terminated );
    StringBuffer_char (*put) (StringBuffer_char sb , char data );
    StringBuffer_char (*print) (StringBuffer_char sb , char * data , int len );
} StringBuffer_char__H_Table;
typedef struct StringBuffer_char {
  const StringBuffer_char__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion121 */
    struct { /* ciciliStruct122 */
      char * __h_0_mem ;
      int __h_1_mem ;
      int __h_2_mem ;
      int __h_3_mem ;
    } Bufferred , _2 ;
    struct { /* ciciliStruct123 */
      char * __h_0_mem ;
      int __h_1_mem ;
      int __h_2_mem ;
      int __h_3_mem ;
    } NullTerminated , _1 ;
    struct { /* ciciliStruct124 */
    } Freed , _ ;
  } __h_data ;
} StringBuffer_char;
StringBuffer_char MakeStringBuffer_char (char * buffer , int cursor , int size , int step );
StringBuffer_char MakeNullTerminatedBuffer_char (char * buffer , int cursor , int size , int step );
StringBuffer_char FreedStringBuffer_char ();
__attribute__((weak)) StringBuffer_char Default_StringBuffer_char () {
  return FreedStringBuffer_char ();
}
StringBuffer_char new_StringBuffer_char (int step , bool null_terminated );
StringBuffer_char put_StringBuffer_char (StringBuffer_char sb , char data );
StringBuffer_char print_StringBuffer_char (StringBuffer_char sb , char * data , int len );
const StringBuffer_char__H_Table * const get_StringBuffer_char__H_Table ();
void free_StringBuffer_char (StringBuffer_char * this );
#endif /* __StringBuffer_char__H_DECL__ */ 
#ifndef __StringBuffer_char__H_IMPL__
#define __StringBuffer_char__H_IMPL__
StringBuffer_char new_StringBuffer_char (int step , bool null_terminated ) {
  return ((null_terminated ) ? ({ /* cicili#Let164 */
        char * buffer  = malloc (((step  +  1 ) *  sizeof(char) ));
        StringBuffer_char sb  = MakeNullTerminatedBuffer_char (buffer , 0, step , step );
        // ----------
        (*buffer ) = ((char)'\0');
        sb ;
      }) : ({ /* cicili#Let168 */
        char * buffer  = malloc ((step  *  sizeof(char) ));
        StringBuffer_char sb  = MakeStringBuffer_char (buffer , 0, step , step );
        // ----------
        sb ;
      }));
}
StringBuffer_char put_StringBuffer_char (StringBuffer_char sb , char data ) {
  return print_StringBuffer_char (sb , (&data ), 1);
}
StringBuffer_char print_StringBuffer_char (StringBuffer_char sb , char * data , int len ) {
  return ({ /* cicili#Let182 */
      typeof((((sb . __h_data ). Bufferred ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Bufferred ). __h_1_mem )) cursor ;
      typeof((((sb . __h_data ). Bufferred ). __h_2_mem )) size ;
      typeof((((sb . __h_data ). Bufferred ). __h_3_mem )) step ;
      // ----------
      
      ({ /* cicili#Let186 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Bufferred_t  ) &&  (((({ /* cicili#Progn187 */
                    (buffer  =  (((sb . __h_data ). Bufferred ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn189 */
                    (cursor  =  (((sb . __h_data ). Bufferred ). __h_1_mem ) );
                    true ;
                  }) ) &&  ({ /* cicili#Progn191 */
                  (size  =  (((sb . __h_data ). Bufferred ). __h_2_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn193 */
                (step  =  (((sb . __h_data ). Bufferred ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn196 */
            ({ /* cicili#Let198 */
              int blen  = (len  *  sizeof(char) );
              // ----------
              if ((size  -  cursor  ) <  len  )
                { /* cicili#Block202 */
                  size  = (step  *  (((cursor  +  len  ) /  step  ) +  1 ) );
                  { /* cicili#Let204 */
                    char * new_buffer  = realloc (buffer , (size  *  sizeof(char) ));
                    // ----------
                    buffer  = new_buffer ;
                  }
                }
              memcpy ((buffer  +  cursor  ), data , blen );
              MakeStringBuffer_char (buffer , (cursor  +  len  ), size , step );
            });
          }) : ({ /* cicili#Let209 */
            typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
            typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
            typeof((((sb . __h_data ). NullTerminated ). __h_2_mem )) size ;
            typeof((((sb . __h_data ). NullTerminated ). __h_3_mem )) step ;
            // ----------
            
            ({ /* cicili#Let213 */
              bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (((({ /* cicili#Progn214 */
                          (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn216 */
                          (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                          true ;
                        }) ) &&  ({ /* cicili#Progn218 */
                        (size  =  (((sb . __h_data ). NullTerminated ). __h_2_mem ) );
                        true ;
                      }) ) &&  ({ /* cicili#Progn220 */
                      (step  =  (((sb . __h_data ). NullTerminated ). __h_3_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              ((__h_case_result ) ? ({ /* cicili#Progn223 */
                  ({ /* cicili#Let225 */
                    int blen  = (len  *  sizeof(char) );
                    // ----------
                    if ((size  -  cursor  ) <  len  )
                      { /* cicili#Block229 */
                        size  = (step  *  (((cursor  +  len  ) /  step  ) +  1 ) );
                        { /* cicili#Let231 */
                          char * new_buffer  = realloc (buffer , ((size  +  1 ) *  sizeof(char) ));
                          // ----------
                          buffer  = new_buffer ;
                        }
                      }
                    memcpy ((buffer  +  cursor  ), data , blen );
                    (*(buffer  +  cursor  +  len  )) = ((char)'\0');
                    MakeNullTerminatedBuffer_char (buffer , (cursor  +  len  ), size , step );
                  });
                }) : ({ /* cicili#Let236 */
                  // ----------
                  
                  ({ /* cicili#Progn240 */
                    FreedStringBuffer_char ();
                  });
                }));
            });
          }));
      });
    });
}
void free_StringBuffer_char (StringBuffer_char * this ) {
  { /* cicili#Let248 */
    typeof((((this -> __h_data ). Bufferred ). __h_0_mem )) buffer ;
    // ----------
    
    ({ /* cicili#Let252 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Bufferred_t  ) &&  ({ /* cicili#Progn253 */
            (buffer  =  (((this -> __h_data ). Bufferred ). __h_0_mem ) );
            true ;
          }) ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block257 */
          { /* cicili#Block259 */
            free (buffer );
            (*this ) = FreedStringBuffer_char ();
          }
        }
      else
        { /* cicili#Let265 */
          typeof((((this -> __h_data ). NullTerminated ). __h_0_mem )) buffer ;
          // ----------
          
          ({ /* cicili#Let269 */
            bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn270 */
                  (buffer  =  (((this -> __h_data ). NullTerminated ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            if (__h_case_result )
              { /* cicili#Block274 */
                { /* cicili#Block276 */
                  free (buffer );
                  (*this ) = FreedStringBuffer_char ();
                }
              }
          });
        }
    });
  }
}
const StringBuffer_char__H_Table * const get_StringBuffer_char__H_Table () {
  static const StringBuffer_char__H_Table table  = { free_StringBuffer_char , new_StringBuffer_char , put_StringBuffer_char , print_StringBuffer_char };
  return (&table );
}
StringBuffer_char MakeStringBuffer_char (char * buffer , int cursor , int size , int step ) {
  { /* cicili#Let286 */
    StringBuffer_char instance  = ((StringBuffer_char){ get_StringBuffer_char__H_Table (), __h_Bufferred_t , .__h_data.Bufferred = { buffer , cursor , size , step }});
    // ----------
    return instance ;
  }
}
StringBuffer_char MakeNullTerminatedBuffer_char (char * buffer , int cursor , int size , int step ) {
  { /* cicili#Let291 */
    StringBuffer_char instance  = ((StringBuffer_char){ get_StringBuffer_char__H_Table (), __h_NullTerminated_t , .__h_data.NullTerminated = { buffer , cursor , size , step }});
    // ----------
    return instance ;
  }
}
StringBuffer_char FreedStringBuffer_char () {
  { /* cicili#Let296 */
    StringBuffer_char instance  = ((StringBuffer_char){ get_StringBuffer_char__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __StringBuffer_char__H_IMPL__ */ 
#ifndef __StringBuffer_int__H_DECL__
#define __StringBuffer_int__H_DECL__
#ifndef __H___h_StringBuffer_ctor_t__
#define __H___h_StringBuffer_ctor_t__
typedef enum __h_StringBuffer_ctor_t {
  __h_Freed_t = 0,
  __h_NullTerminated_t = 1,
  __h_Bufferred_t = 2
} __h_StringBuffer_ctor_t;
#endif /* __H___h_StringBuffer_ctor_t__ */ 
typedef struct StringBuffer_int StringBuffer_int ;
typedef void (*free_StringBuffer_int_t) (StringBuffer_int * this );
typedef struct StringBuffer_int__H_Table {
  free_StringBuffer_int_t freeData ;
    StringBuffer_int (*new) (int step , bool null_terminated );
    StringBuffer_int (*put) (StringBuffer_int sb , int data );
    StringBuffer_int (*print) (StringBuffer_int sb , int * data , int len );
} StringBuffer_int__H_Table;
typedef struct StringBuffer_int {
  const StringBuffer_int__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion318 */
    struct { /* ciciliStruct319 */
      int * __h_0_mem ;
      int __h_1_mem ;
      int __h_2_mem ;
      int __h_3_mem ;
    } Bufferred , _2 ;
    struct { /* ciciliStruct320 */
      int * __h_0_mem ;
      int __h_1_mem ;
      int __h_2_mem ;
      int __h_3_mem ;
    } NullTerminated , _1 ;
    struct { /* ciciliStruct321 */
    } Freed , _ ;
  } __h_data ;
} StringBuffer_int;
StringBuffer_int MakeStringBuffer_int (int * buffer , int cursor , int size , int step );
StringBuffer_int MakeNullTerminatedBuffer_int (int * buffer , int cursor , int size , int step );
StringBuffer_int FreedStringBuffer_int ();
__attribute__((weak)) StringBuffer_int Default_StringBuffer_int () {
  return FreedStringBuffer_int ();
}
StringBuffer_int new_StringBuffer_int (int step , bool null_terminated );
StringBuffer_int put_StringBuffer_int (StringBuffer_int sb , int data );
StringBuffer_int print_StringBuffer_int (StringBuffer_int sb , int * data , int len );
const StringBuffer_int__H_Table * const get_StringBuffer_int__H_Table ();
void free_StringBuffer_int (StringBuffer_int * this );
#endif /* __StringBuffer_int__H_DECL__ */ 
#ifndef __StringBuffer_int__H_IMPL__
#define __StringBuffer_int__H_IMPL__
StringBuffer_int new_StringBuffer_int (int step , bool null_terminated ) {
  return ((null_terminated ) ? ({ /* cicili#Let361 */
        int * buffer  = malloc (((step  +  1 ) *  sizeof(int) ));
        StringBuffer_int sb  = MakeNullTerminatedBuffer_int (buffer , 0, step , step );
        // ----------
        (*buffer ) = ((int)'\0');
        sb ;
      }) : ({ /* cicili#Let365 */
        int * buffer  = malloc ((step  *  sizeof(int) ));
        StringBuffer_int sb  = MakeStringBuffer_int (buffer , 0, step , step );
        // ----------
        sb ;
      }));
}
StringBuffer_int put_StringBuffer_int (StringBuffer_int sb , int data ) {
  return print_StringBuffer_int (sb , (&data ), 1);
}
StringBuffer_int print_StringBuffer_int (StringBuffer_int sb , int * data , int len ) {
  return ({ /* cicili#Let379 */
      typeof((((sb . __h_data ). Bufferred ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Bufferred ). __h_1_mem )) cursor ;
      typeof((((sb . __h_data ). Bufferred ). __h_2_mem )) size ;
      typeof((((sb . __h_data ). Bufferred ). __h_3_mem )) step ;
      // ----------
      
      ({ /* cicili#Let383 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Bufferred_t  ) &&  (((({ /* cicili#Progn384 */
                    (buffer  =  (((sb . __h_data ). Bufferred ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn386 */
                    (cursor  =  (((sb . __h_data ). Bufferred ). __h_1_mem ) );
                    true ;
                  }) ) &&  ({ /* cicili#Progn388 */
                  (size  =  (((sb . __h_data ). Bufferred ). __h_2_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn390 */
                (step  =  (((sb . __h_data ). Bufferred ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        ((__h_case_result ) ? ({ /* cicili#Progn393 */
            ({ /* cicili#Let395 */
              int blen  = (len  *  sizeof(int) );
              // ----------
              if ((size  -  cursor  ) <  len  )
                { /* cicili#Block399 */
                  size  = (step  *  (((cursor  +  len  ) /  step  ) +  1 ) );
                  { /* cicili#Let401 */
                    int * new_buffer  = realloc (buffer , (size  *  sizeof(int) ));
                    // ----------
                    buffer  = new_buffer ;
                  }
                }
              memcpy ((buffer  +  cursor  ), data , blen );
              MakeStringBuffer_int (buffer , (cursor  +  len  ), size , step );
            });
          }) : ({ /* cicili#Let406 */
            typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
            typeof((((sb . __h_data ). NullTerminated ). __h_1_mem )) cursor ;
            typeof((((sb . __h_data ). NullTerminated ). __h_2_mem )) size ;
            typeof((((sb . __h_data ). NullTerminated ). __h_3_mem )) step ;
            // ----------
            
            ({ /* cicili#Let410 */
              bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  (((({ /* cicili#Progn411 */
                          (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                          true ;
                        }) &&  ({ /* cicili#Progn413 */
                          (cursor  =  (((sb . __h_data ). NullTerminated ). __h_1_mem ) );
                          true ;
                        }) ) &&  ({ /* cicili#Progn415 */
                        (size  =  (((sb . __h_data ). NullTerminated ). __h_2_mem ) );
                        true ;
                      }) ) &&  ({ /* cicili#Progn417 */
                      (step  =  (((sb . __h_data ). NullTerminated ). __h_3_mem ) );
                      true ;
                    }) ) ) );
              // ----------
              ((__h_case_result ) ? ({ /* cicili#Progn420 */
                  ({ /* cicili#Let422 */
                    int blen  = (len  *  sizeof(int) );
                    // ----------
                    if ((size  -  cursor  ) <  len  )
                      { /* cicili#Block426 */
                        size  = (step  *  (((cursor  +  len  ) /  step  ) +  1 ) );
                        { /* cicili#Let428 */
                          int * new_buffer  = realloc (buffer , ((size  +  1 ) *  sizeof(int) ));
                          // ----------
                          buffer  = new_buffer ;
                        }
                      }
                    memcpy ((buffer  +  cursor  ), data , blen );
                    (*(buffer  +  cursor  +  len  )) = ((int)'\0');
                    MakeNullTerminatedBuffer_int (buffer , (cursor  +  len  ), size , step );
                  });
                }) : ({ /* cicili#Let433 */
                  // ----------
                  
                  ({ /* cicili#Progn437 */
                    FreedStringBuffer_int ();
                  });
                }));
            });
          }));
      });
    });
}
void free_StringBuffer_int (StringBuffer_int * this ) {
  { /* cicili#Let445 */
    typeof((((this -> __h_data ). Bufferred ). __h_0_mem )) buffer ;
    // ----------
    
    ({ /* cicili#Let449 */
      bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_Bufferred_t  ) &&  ({ /* cicili#Progn450 */
            (buffer  =  (((this -> __h_data ). Bufferred ). __h_0_mem ) );
            true ;
          }) ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block454 */
          { /* cicili#Block456 */
            free (buffer );
            (*this ) = FreedStringBuffer_int ();
          }
        }
      else
        { /* cicili#Let462 */
          typeof((((this -> __h_data ). NullTerminated ). __h_0_mem )) buffer ;
          // ----------
          
          ({ /* cicili#Let466 */
            bool __h_case_result  = (true  &&  (((this -> __h_ctor ) ==  __h_NullTerminated_t  ) &&  ({ /* cicili#Progn467 */
                  (buffer  =  (((this -> __h_data ). NullTerminated ). __h_0_mem ) );
                  true ;
                }) ) );
            // ----------
            if (__h_case_result )
              { /* cicili#Block471 */
                { /* cicili#Block473 */
                  free (buffer );
                  (*this ) = FreedStringBuffer_int ();
                }
              }
          });
        }
    });
  }
}
const StringBuffer_int__H_Table * const get_StringBuffer_int__H_Table () {
  static const StringBuffer_int__H_Table table  = { free_StringBuffer_int , new_StringBuffer_int , put_StringBuffer_int , print_StringBuffer_int };
  return (&table );
}
StringBuffer_int MakeStringBuffer_int (int * buffer , int cursor , int size , int step ) {
  { /* cicili#Let483 */
    StringBuffer_int instance  = ((StringBuffer_int){ get_StringBuffer_int__H_Table (), __h_Bufferred_t , .__h_data.Bufferred = { buffer , cursor , size , step }});
    // ----------
    return instance ;
  }
}
StringBuffer_int MakeNullTerminatedBuffer_int (int * buffer , int cursor , int size , int step ) {
  { /* cicili#Let488 */
    StringBuffer_int instance  = ((StringBuffer_int){ get_StringBuffer_int__H_Table (), __h_NullTerminated_t , .__h_data.NullTerminated = { buffer , cursor , size , step }});
    // ----------
    return instance ;
  }
}
StringBuffer_int FreedStringBuffer_int () {
  { /* cicili#Let493 */
    StringBuffer_int instance  = ((StringBuffer_int){ get_StringBuffer_int__H_Table (), __h___t });
    // ----------
    return instance ;
  }
}
#endif /* __StringBuffer_int__H_IMPL__ */ 
static void printCharArray (const char * array ) {
  while ((*array )) {
      printf (" %c", (*array ));
      (++array );
  }
}
static void printIntArray (const int * array , int len ) {
  { /* cicili#Let499 */
    int counter  = 0;
    // ----------
    while ((counter  <  len  )) {
        printf (" %d", array [counter ]);
        (++counter );
    }
  }
}
int main () {
  { /* cicili#Let504 */
    StringBuffer_char sb  = new_StringBuffer_char (4, true );
    // ----------
    sb  = print_StringBuffer_char (sb , "12345", 5);
    sb  = print_StringBuffer_char (sb , "54321", 5);
    { /* cicili#Let512 */
      typeof((((sb . __h_data ). NullTerminated ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). NullTerminated ). __h_2_mem )) size ;
      typeof((((sb . __h_data ). NullTerminated ). __h_3_mem )) step ;
      // ----------
      
      ({ /* cicili#Let516 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_NullTerminated_t  ) &&  ((({ /* cicili#Progn517 */
                  (buffer  =  (((sb . __h_data ). NullTerminated ). __h_0_mem ) );
                  true ;
                }) &&  ({ /* cicili#Progn519 */
                  (size  =  (((sb . __h_data ). NullTerminated ). __h_2_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn521 */
                (step  =  (((sb . __h_data ). NullTerminated ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block525 */
            { /* cicili#Block527 */
              printf ("NullTerminatedBuffer char, size: %d, step %d, %s\n", size , step , buffer );
              printCharArray (buffer );
              putchar ('\n');
            }
          }
      });
    }
  }
  { /* cicili#Let529 */
    StringBuffer_int sb  = new_StringBuffer_int (4, false );
    // ----------
    { /* cicili#Let535 */
      typeof((((sb . __h_data ). Bufferred ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Bufferred ). __h_1_mem )) cursor ;
      typeof((((sb . __h_data ). Bufferred ). __h_2_mem )) size ;
      typeof((((sb . __h_data ). Bufferred ). __h_3_mem )) step ;
      // ----------
      
      ({ /* cicili#Let539 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Bufferred_t  ) &&  (((({ /* cicili#Progn540 */
                    (buffer  =  (((sb . __h_data ). Bufferred ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn542 */
                    (cursor  =  (((sb . __h_data ). Bufferred ). __h_1_mem ) );
                    true ;
                  }) ) &&  ({ /* cicili#Progn544 */
                  (size  =  (((sb . __h_data ). Bufferred ). __h_2_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn546 */
                (step  =  (((sb . __h_data ). Bufferred ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block550 */
            { /* cicili#Block552 */
              printf ("StrignBuffer int, cursor: %d, size: %d, step %d\n", cursor , size , step );
              printIntArray (buffer , cursor );
              putchar ('\n');
            }
          }
      });
    }
    sb  = print_StringBuffer_int (sb , ((int[]){ 1, 2, 3, 4}), 4);
    { /* cicili#Let557 */
      typeof((((sb . __h_data ). Bufferred ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Bufferred ). __h_1_mem )) cursor ;
      typeof((((sb . __h_data ). Bufferred ). __h_2_mem )) size ;
      typeof((((sb . __h_data ). Bufferred ). __h_3_mem )) step ;
      // ----------
      
      ({ /* cicili#Let561 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Bufferred_t  ) &&  (((({ /* cicili#Progn562 */
                    (buffer  =  (((sb . __h_data ). Bufferred ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn564 */
                    (cursor  =  (((sb . __h_data ). Bufferred ). __h_1_mem ) );
                    true ;
                  }) ) &&  ({ /* cicili#Progn566 */
                  (size  =  (((sb . __h_data ). Bufferred ). __h_2_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn568 */
                (step  =  (((sb . __h_data ). Bufferred ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block572 */
            { /* cicili#Block574 */
              printf ("StrignBuffer int, cursor: %d, size: %d, step %d\n", cursor , size , step );
              printIntArray (buffer , cursor );
              putchar ('\n');
            }
          }
      });
    }
    sb  = print_StringBuffer_int (sb , ((int[]){ 6, 5, 4, 3, 2, 1}), 6);
    { /* cicili#Let579 */
      typeof((((sb . __h_data ). Bufferred ). __h_0_mem )) buffer ;
      typeof((((sb . __h_data ). Bufferred ). __h_1_mem )) cursor ;
      typeof((((sb . __h_data ). Bufferred ). __h_2_mem )) size ;
      typeof((((sb . __h_data ). Bufferred ). __h_3_mem )) step ;
      // ----------
      
      ({ /* cicili#Let583 */
        bool __h_case_result  = (true  &&  (((sb . __h_ctor ) ==  __h_Bufferred_t  ) &&  (((({ /* cicili#Progn584 */
                    (buffer  =  (((sb . __h_data ). Bufferred ). __h_0_mem ) );
                    true ;
                  }) &&  ({ /* cicili#Progn586 */
                    (cursor  =  (((sb . __h_data ). Bufferred ). __h_1_mem ) );
                    true ;
                  }) ) &&  ({ /* cicili#Progn588 */
                  (size  =  (((sb . __h_data ). Bufferred ). __h_2_mem ) );
                  true ;
                }) ) &&  ({ /* cicili#Progn590 */
                (step  =  (((sb . __h_data ). Bufferred ). __h_3_mem ) );
                true ;
              }) ) ) );
        // ----------
        if (__h_case_result )
          { /* cicili#Block594 */
            { /* cicili#Block596 */
              printf ("StrignBuffer int, cursor: %d, size: %d, step %d\n", cursor , size , step );
              printIntArray (buffer , cursor );
              putchar ('\n');
            }
          }
      });
    }
  }
}
