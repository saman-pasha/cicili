#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "haskell.h"
#ifndef __SomeType__H_DECL__
#define __SomeType__H_DECL__
#ifndef __H___h_SomeType_ctor_t__
#define __H___h_SomeType_ctor_t__
typedef enum __h_SomeType_ctor_t {
  __h_Variant2_t = 0,
  __h_Variant1_t = 1,
  __h_Variant0_t = 2
} __h_SomeType_ctor_t;
#endif /* __H___h_SomeType_ctor_t__ */ 
typedef struct SomeType SomeType ;
typedef void (*free_SomeType_t) (SomeType * this );
typedef struct SomeType__H_Table {
  free_SomeType_t freeData ;
} SomeType__H_Table;
typedef struct SomeType {
  const SomeType__H_Table * __h_table ;
  char __h_ctor ;
  union { /* ciciliUnion111 */
    struct { /* ciciliStruct112 */
      void * __h_0_mem ;
    } Variant0 , _2 ;
    struct { /* ciciliStruct113 */
      int __h_0_mem ;
    } Variant1 , _1 ;
    struct { /* ciciliStruct114 */
      char __h_0_mem ;
    } Variant2 , _ ;
  } __h_data ;
} SomeType;
SomeType Variant0 (void * p );
SomeType Variant1 (int x );
SomeType Variant2 (char c );
__attribute__((weak)) SomeType Default_SomeType (char c ) {
  return Variant2 (c );
}
const SomeType__H_Table * const get_SomeType__H_Table ();
void free_SomeType (SomeType * this );
#endif /* __SomeType__H_DECL__ */ 
#ifndef __SomeType__H_IMPL__
#define __SomeType__H_IMPL__
void free_SomeType (SomeType * this ) {
}
const SomeType__H_Table * const get_SomeType__H_Table () {
  static const SomeType__H_Table table  = { free_SomeType };
  return (&table );
}
SomeType Variant0 (void * p ) {
  { /* cicili#Let138 */
    SomeType instance  = ((SomeType){ get_SomeType__H_Table (), __h_Variant0_t , .__h_data.Variant0 = { p }});
    // ----------
    return instance ;
  }
}
SomeType Variant1 (int x ) {
  { /* cicili#Let142 */
    SomeType instance  = ((SomeType){ get_SomeType__H_Table (), __h_Variant1_t , .__h_data.Variant1 = { x }});
    // ----------
    return instance ;
  }
}
SomeType Variant2 (char c ) {
  { /* cicili#Let146 */
    SomeType instance  = ((SomeType){ get_SomeType__H_Table (), __h___t , .__h_data._ = { c }});
    // ----------
    return instance ;
  }
}
#endif /* __SomeType__H_IMPL__ */ 
int main () {
  ({ /* cicili#Let152 */
    __auto_type v1  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let154 */
      __auto_type v1  = Variant1 (12);
      // ----------
      ((void)((v1 . __h_table )-> freeData ));
      v1 ;
    });
    __auto_type v2  __attribute__((__cleanup__(__h_free_data_router ))) = ({ /* cicili#Let157 */
      __auto_type v2  = Variant2 ('G');
      // ----------
      ((void)((v2 . __h_table )-> freeData ));
      v2 ;
    });
    // ----------
    printf ("lentgh: %d\n", ({ /* cicili#Let162 */
        typeof((((v1 . __h_data ). Variant0 ). __h_0_mem )) v ;
        // ----------
        
        ({ /* cicili#Let166 */
          bool __h_case_result  = (true  &&  (((v1 . __h_ctor ) ==  __h_Variant0_t  ) &&  ({ /* cicili#Progn167 */
                (v  =  (((v1 . __h_data ). Variant0 ). __h_0_mem ) );
                true ;
              }) ) );
          // ----------
          ((__h_case_result ) ? ({ /* cicili#Progn170 */
              fprintf (stdout , "Variant0: %p\n", v );
            }) : ({ /* cicili#Let175 */
              typeof((((v1 . __h_data ). Variant1 ). __h_0_mem )) x ;
              // ----------
              
              ({ /* cicili#Let179 */
                bool __h_case_result  = (true  &&  (((v1 . __h_ctor ) ==  __h_Variant1_t  ) &&  ({ /* cicili#Progn180 */
                      (x  =  (((v1 . __h_data ). Variant1 ). __h_0_mem ) );
                      true ;
                    }) ) );
                // ----------
                ((__h_case_result ) ? ({ /* cicili#Progn183 */
                    fprintf (stdout , "Variant1: %d\n", x );
                  }) : ({ /* cicili#Let188 */
                    typeof((((v1 . __h_data ). Variant2 ). __h_0_mem )) c ;
                    // ----------
                    
                    ({ /* cicili#Let192 */
                      bool __h_case_result  = (true  &&  (((v1 . __h_ctor ) ==  __h_Variant2_t  ) &&  ({ /* cicili#Progn193 */
                            (c  =  (((v1 . __h_data ). Variant2 ). __h_0_mem ) );
                            true ;
                          }) ) );
                      // ----------
                      ((__h_case_result ) ? ({ /* cicili#Progn196 */
                          fprintf (stdout , "Variant2: %c\n", x );
                        }) : ({ /* cicili#Let201 */
                          // ----------
                          
                          ({ /* cicili#Progn205 */
                            0;
                          });
                        }));
                    });
                  }));
              });
            }));
        });
      }));
  });
}
