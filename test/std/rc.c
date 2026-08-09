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
#ifndef __MAYBE__ref_int__H_
#define __MAYBE__ref_int__H_
typedef struct JustT_ref_int {
  int * restrict value ;
} JustT_ref_int;
typedef struct Maybe_ref_int {
  MAYBE_CTOR ctor ;
  union { /* ciciliUnion109 */
    JustT_ref_int just ;
    NothingT nothing ;
  } data ;
} Maybe_ref_int;
typedef std_maybe Maybe_ref_int_type_t ;
Maybe_ref_int just_ref_int (int * restrict value );
Maybe_ref_int nothing_ref_int ();
#endif /* __MAYBE__ref_int__H_ */ 
typedef struct array_int {
  int * const arr ;
  size_t len ;
} array_int;
typedef int array_int_item_t ;
#ifndef __ARRAY_TYPE_H_
#define __ARRAY_TYPE_H_
typedef struct std_array std_array ;
#endif /* __ARRAY_TYPE_H_ */ 
typedef std_array array_int_type_t ;
void free_array_int (array_int * restrict array );
void free_array_int_pointer (array_int ** array );
array_int new_array_int (const int * arr , size_t len , size_t cap );
size_t len_array_int (array_int * restrict array );
Maybe_ref_int nth_array_int (size_t index , array_int * restrict array );
#ifndef __MAYBE_IMPL__ref_int__H_
#define __MAYBE_IMPL__ref_int__H_
Maybe_ref_int just_ref_int (int * restrict value ) {
  return ((Maybe_ref_int){ .ctor = JUST_CTOR , .data.just.value = value });
}
Maybe_ref_int nothing_ref_int () {
  return ((Maybe_ref_int){ .ctor = NOTHING_CTOR });
}
#endif /* __MAYBE_IMPL__ref_int__H_ */ 
__attribute__((weak)) void free_array_int (array_int * restrict array ) {
  free ((array -> arr));
}
__attribute__((weak)) void free_array_int_pointer (array_int ** array ) {
  free_array_int ((*array ));
}
array_int new_array_int (const int * arr , size_t len , size_t cap ) {
  return ({ /* letn167 */
      int * restrict new_arr  = malloc ((cap  *  sizeof(int) ));
      // ----------
      if (arr  &&  len  )
        { /* block173 */
          memcpy (new_arr , arr , (len  *  sizeof(int) ));
          if (cap  >  len  )
            { /* block178 */
              memset ((new_arr  +  len  ), 0, ((cap  -  len  ) *  sizeof(int) ));
            }
        }
      else
        memset (new_arr , 0, (cap  *  sizeof(int) ));
      ((array_int){ new_arr , cap });
    });
}
size_t len_array_int (array_int * restrict array ) {
  return (array -> len);
}
Maybe_ref_int nth_array_int (size_t index , array_int * restrict array ) {
  if (index  <  (array -> len) )
    return ((Maybe_ref_int){ .ctor = JUST_CTOR , .data.just.value = ((array -> arr) +  index  )});
  else
    return ((Maybe_ref_int){ .ctor = NOTHING_CTOR });
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
#ifndef __MAYBE__ref_array_int__H_
#define __MAYBE__ref_array_int__H_
typedef struct JustT_ref_array_int {
  array_int * restrict value ;
} JustT_ref_array_int;
typedef struct Maybe_ref_array_int {
  MAYBE_CTOR ctor ;
  union { /* ciciliUnion201 */
    JustT_ref_array_int just ;
    NothingT nothing ;
  } data ;
} Maybe_ref_array_int;
typedef std_maybe Maybe_ref_array_int_type_t ;
Maybe_ref_array_int just_ref_array_int (array_int * restrict value );
Maybe_ref_array_int nothing_ref_array_int ();
#endif /* __MAYBE__ref_array_int__H_ */ 
typedef struct rc_array_int {
  array_int * restrict ptr ;
  size_t * count ;
} rc_array_int;
typedef array_int rc_array_int_interior_t ;
#ifndef __RC_TYPE_H_
#define __RC_TYPE_H_
typedef struct std_rc std_rc ;
#endif /* __RC_TYPE_H_ */ 
typedef std_rc rc_array_int_type_t ;
void free_rc_array_int (rc_array_int * rc );
void free_rc_array_int_pointer (rc_array_int ** rc );
rc_array_int clone_rc_array_int (rc_array_int * restrict rc );
Maybe_ref_array_int get_rc_array_int (rc_array_int * restrict rc );
#ifndef __MAYBE_IMPL__ref_array_int__H_
#define __MAYBE_IMPL__ref_array_int__H_
Maybe_ref_array_int just_ref_array_int (array_int * restrict value ) {
  return ((Maybe_ref_array_int){ .ctor = JUST_CTOR , .data.just.value = value });
}
Maybe_ref_array_int nothing_ref_array_int () {
  return ((Maybe_ref_array_int){ .ctor = NOTHING_CTOR });
}
#endif /* __MAYBE_IMPL__ref_array_int__H_ */ 
Maybe_ref_array_int get_rc_array_int (rc_array_int * restrict rc ) {
  if ((rc -> ptr) &&  (rc -> count) &&  ((*(rc -> count)) >=  1 ) )
    return ((Maybe_ref_array_int){ .ctor = JUST_CTOR , .data.just.value = (rc -> ptr)});
  else
    return ((Maybe_ref_array_int){ .ctor = NOTHING_CTOR });
}
__attribute__((weak)) void free_rc_array_int (rc_array_int * rc ) {
  if ((rc -> ptr) &&  (rc -> count) )
    { /* block260 */
      if ((*(rc -> count)) ==  1 )
        { /* block266 */
          free_array_int ((rc -> ptr));
          free ((rc -> count));
          free ((rc -> ptr));
        }
      else
        (--(*(rc -> count)));
    }
}
__attribute__((weak)) void free_rc_array_int_pointer (rc_array_int ** rc ) {
  free_rc_array_int ((*rc ));
}
rc_array_int clone_rc_array_int (rc_array_int * restrict rc ) {
  if ((rc -> ptr) &&  (rc -> count) &&  ((*(rc -> count)) >=  1 ) )
    { /* block281 */
      (++(*(rc -> count)));
      return ((rc_array_int){ (rc -> ptr), (rc -> count)});
    }
  return ((rc_array_int){ NULL , NULL });
}
void let_rc_array_int_G324 (rc_array_int * restrict rc ) {
  if ((rc -> ptr))
    { /* block331 */
      { /* let333 */
        rc_array_int_interior_t * restrict arr_ptr  = (rc -> ptr);
        // ----------
        printf ("1. rc01 arr len: %zu\n", ((*arr_ptr ). len));
      }
    }
}
size_t letn_rc_array_int_G338 (rc_array_int * restrict rc , const int default_value ) {
  return (((rc -> ptr)) ? ({ /* letn342 */
        rc_array_int_interior_t * restrict arr_ptr  = (rc -> ptr);
        // ----------
        ((*arr_ptr ). len);
      }) : default_value );
}
void take_rc_array_int_G353 (rc_array_int rc ) {
  rc_array_int * __moved_rc __attribute__((__cleanup__( free_rc_array_int_pointer))) = (& rc) ;
  if ((rc . ptr) &&  (rc . count) &&  ((*(rc . count)) ==  1 ) )
    { /* block361 */
      ({ /* letn364 */
        array_int arr  __attribute__((__cleanup__(free_array_int ))) = ((array_int   )({ /* letnmove367 */
          array_int moved_var366  = (*(rc . ptr));
          // ----------
          memset ((&(*(rc . ptr))), 0, sizeof((*(rc . ptr))));
          moved_var366 ;
        }));
        // ----------
        free ((rc . count));
        free ((rc . ptr));
        (rc . ptr) = NULL ;
        (rc . count) = NULL ;
        printf ("3. rc01 arr len: %zu\n", (arr . len));
      });
    }
}
size_t taken_rc_array_int_G375 (rc_array_int rc , size_t default_value ) {
  rc_array_int * __moved_rc __attribute__((__cleanup__( free_rc_array_int_pointer))) = (& rc) ;
  return ((((rc . ptr) &&  (rc . count) &&  ((*(rc . count)) ==  1 ) )) ? ({ /* letn381 */
        array_int arr  __attribute__((__cleanup__(free_array_int ))) = ((array_int   )({ /* letnmove384 */
          array_int moved_var383  = (*(rc . ptr));
          // ----------
          memset ((&(*(rc . ptr))), 0, sizeof((*(rc . ptr))));
          moved_var383 ;
        }));
        // ----------
        free ((rc . count));
        free ((rc . ptr));
        (rc . ptr) = NULL ;
        (rc . count) = NULL ;
        printf ("4. rc01 arr len: %zu\n", (arr . len));
      }) : default_value );
}
int main () {
  ({ /* letn306 */
    rc_array_int rc01  __attribute__((__cleanup__(free_rc_array_int ))) = ({ /* letn315 */
      array_int * restrict array_int_ptr312  = malloc (sizeof(array_int));
      array_int array_int_obj313  = new_array_int (((const int[]){ 1, 2, 3, 4, 5}), 5, 5);
      size_t * array_int_count314  = malloc (sizeof(size_t));
      // ----------
      memcpy (array_int_ptr312 , (&array_int_obj313 ), sizeof(array_int_obj313));
      (*array_int_count314 ) = 1;
      ((rc_array_int){ array_int_ptr312 , array_int_count314 });
    });
    // ----------
    let_rc_array_int_G324 ((&rc01 ));
    printf ("2. rc01 arr len: %zu\n", letn_rc_array_int_G338 ((&rc01 ), -1));
    ({ /* letn349 */
      rc_array_int cl01  __attribute__((__cleanup__(free_rc_array_int ))) = clone_rc_array_int ((&rc01 ));
      // ----------
      take_rc_array_int_G353 (((rc_array_int   )({ /* letnmove372 */
          rc_array_int moved_var371  = cl01 ;
          // ----------
          memset ((&cl01 ), 0, sizeof(cl01 ));
          moved_var371 ;
        })));
    });
    taken_rc_array_int_G375 (((rc_array_int   )({ /* letnmove389 */
        rc_array_int moved_var388  = rc01 ;
        // ----------
        memset ((&rc01 ), 0, sizeof(rc01 ));
        moved_var388 ;
      })), printf ("4. default value is strict\n"));
    fprintf (stdout , "Done\n");
  });
}
