#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "math.h"
typedef enum __h_Range_int_ctor_t {
  __h_Cons_Range_int_t
} __h_Range_int_ctor_t;
typedef struct Range_int_class_t Range_int_class_t ;
typedef Range_int_class_t * Range_int ;
typedef struct Maybe_Range_int Maybe_Range_int ;
typedef enum __h_Maybe_Range_int_ctor_t {
  __h_Nothing_Range_int_t,
  __h_Just_Range_int_t
} __h_Maybe_Range_int_ctor_t;
typedef struct Maybe_Range_int {
  __h_Maybe_Range_int_ctor_t __h_ctor ;
  union { /* ciciliUnion113 */
    struct { /* ciciliStruct114 */
    } Nothing_Range_int ;
    struct { /* ciciliStruct115 */
      Range_int __h_0_mem ;
    } Just_Range_int ;
  } __h_data ;
} Maybe_Range_int;
Maybe_Range_int Nothing_Range_int () {
  return ((Maybe_Range_int){ __h_Nothing_Range_int_t });
}
Maybe_Range_int Just_Range_int (Range_int value ) {
  return ((Maybe_Range_int){ __h_Just_Range_int_t , .__h_data.Just_Range_int = { value }});
}
typedef struct Range_int_class_t {
  __h_Range_int_ctor_t __h_ctor ;
  union { /* ciciliUnion119 */
    struct { /* ciciliStruct120 */
      int __h_0_mem ;
      Maybe_Range_int __h_1_mem ;
      int __h_2_mem ;
      int __h_3_mem ;
    } Cons_Range_int ;
  } __h_data ;
} Range_int_class_t;
Range_int __h_Cons_Range_int_ctor (int from , Maybe_Range_int tail , int to , int step ) {
  Range_int this  = malloc (sizeof(Range_int_class_t ));
  (*this ) = ((Range_int_class_t){ __h_Cons_Range_int_t , .__h_data.Cons_Range_int = { from , tail , to , step }});
  return this ;
}
Maybe_Range_int new_Range_int (int from , int to , int step ) {
  return (((from  <=  to  )) ? Just_Range_int (__h_Cons_Range_int_ctor (from , Nothing_Range_int (), to , step )) : Nothing_Range_int ());
}
void drop_Range_int (Maybe_Range_int list ) {
  { /* cicili#Let145 */
    typeof((((list . __h_data ). Just_Range_int ). __h_0_mem )) __h_match143_0_arg ;
    typeof(__h_match143_0_arg ) ls ;
    typeof((((ls -> __h_data ). Cons_Range_int ). __h_0_mem )) from ;
    typeof((((ls -> __h_data ). Cons_Range_int ). __h_1_mem )) tail ;
    typeof((((ls -> __h_data ). Cons_Range_int ). __h_2_mem )) to ;
    typeof((((ls -> __h_data ). Cons_Range_int ). __h_3_mem )) step ;
    // ----------
    if ((list . __h_ctor ) ==  __h_Just_Range_int_t  )
      { /* cicili#Block148 */
        __h_match143_0_arg  = (((list . __h_data ). Just_Range_int ). __h_0_mem );
        ls  = __h_match143_0_arg ;
        from  = (((ls -> __h_data ). Cons_Range_int ). __h_0_mem );
        tail  = (((ls -> __h_data ). Cons_Range_int ). __h_1_mem );
        to  = (((ls -> __h_data ). Cons_Range_int ). __h_2_mem );
        step  = (((ls -> __h_data ). Cons_Range_int ). __h_3_mem );
      }
    ({ /* cicili#Let150 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_Range_int_t  ) &&  ((ls -> __h_ctor ) ==  __h_Cons_Range_int_t  ) );
      // ----------
      if (__h_case_result )
        { /* cicili#Block153 */
          drop_Range_int (tail );
          free (ls );
        }
    });
  }
}
void free_Range_int (Maybe_Range_int * list ) {
  drop_Range_int ((*list ));
}
Maybe_Range_int next_Range_int (Maybe_Range_int list ) {
  return ({ /* cicili#Let167 */
    typeof((((list . __h_data ). Just_Range_int ). __h_0_mem )) __h_match165_0_arg ;
    typeof(__h_match165_0_arg ) ls ;
    typeof((((ls -> __h_data ). Cons_Range_int ). __h_0_mem )) from ;
    typeof((((ls -> __h_data ). Cons_Range_int ). __h_2_mem )) to ;
    typeof((((ls -> __h_data ). Cons_Range_int ). __h_3_mem )) step ;
    // ----------
    if ((list . __h_ctor ) ==  __h_Just_Range_int_t  )
      { /* cicili#Block170 */
        __h_match165_0_arg  = (((list . __h_data ). Just_Range_int ). __h_0_mem );
        ls  = __h_match165_0_arg ;
        from  = (((ls -> __h_data ). Cons_Range_int ). __h_0_mem );
        to  = (((ls -> __h_data ). Cons_Range_int ). __h_2_mem );
        step  = (((ls -> __h_data ). Cons_Range_int ). __h_3_mem );
      }
    ({ /* cicili#Let172 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_Range_int_t  ) &&  (((ls -> __h_ctor ) ==  __h_Cons_Range_int_t  ) &&  ((from  +  step  ) <=  to  ) ) );
      // ----------
      ((__h_case_result ) ? Just_Range_int (__h_Cons_Range_int_ctor ((from  +  step  ), Nothing_Range_int (), to , step )) : ({ /* cicili#Let184 */
        // ----------
        /* cicili#Block186 */
        Nothing_Range_int ();
      }));
    });
  });
}
void show_Range_int (Maybe_Range_int list ) {
  { /* cicili#Let195 */
    typeof((((list . __h_data ). Just_Range_int ). __h_0_mem )) __h_match193_0_arg ;
    typeof((((__h_match193_0_arg -> __h_data ). Cons_Range_int ). __h_0_mem )) head ;
    // ----------
    if ((list . __h_ctor ) ==  __h_Just_Range_int_t  )
      { /* cicili#Block198 */
        __h_match193_0_arg  = (((list . __h_data ). Just_Range_int ). __h_0_mem );
        head  = (((__h_match193_0_arg -> __h_data ). Cons_Range_int ). __h_0_mem );
      }
    ({ /* cicili#Let200 */
      bool __h_case_result  = (((list . __h_ctor ) ==  __h_Just_Range_int_t  ) &&  ((__h_match193_0_arg -> __h_ctor ) ==  __h_Cons_Range_int_t  ) );
      // ----------
      if (__h_case_result )
        ({ /* cicili#Let204 */
          __auto_type ne  __attribute__((__cleanup__(free_Range_int ))) = next_Range_int (list );
          // ----------
          { /* cicili#Let210 */
            // ----------
            /* cicili#Block212 */
            ({ /* cicili#Let214 */
              bool __h_case_result  = ((ne . __h_ctor ) ==  __h_Just_Range_int_t  );
              // ----------
              if (__h_case_result )
                printf ("%d, ", head );
              else
                { /* cicili#Let220 */
                  // ----------
                  /* cicili#Block222 */
                  printf ("%d ", head );
                }
            });
          }
          show_Range_int (ne );
        });
    });
  }
}
int main () {
  ({ /* cicili#Let229 */
    __auto_type ra0  __attribute__((__cleanup__(free_Range_int ))) = new_Range_int (1, 20, 3);
    // ----------
    show_Range_int (ra0 );
  });
}
