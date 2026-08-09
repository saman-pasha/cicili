#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <pthread.h>
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
  union { /* ciciliUnion110 */
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
  return ({ /* letn168 */
      int * restrict new_arr  = malloc ((cap  *  sizeof(int) ));
      // ----------
      if (arr  &&  len  )
        { /* block174 */
          memcpy (new_arr , arr , (len  *  sizeof(int) ));
          if (cap  >  len  )
            { /* block179 */
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
  union { /* ciciliUnion202 */
    JustT_ref_array_int just ;
    NothingT nothing ;
  } data ;
} Maybe_ref_array_int;
typedef std_maybe Maybe_ref_array_int_type_t ;
Maybe_ref_array_int just_ref_array_int (array_int * restrict value );
Maybe_ref_array_int nothing_ref_array_int ();
#endif /* __MAYBE__ref_array_int__H_ */ 
typedef struct arc_array_int {
  array_int * restrict ptr ;
  size_t * count ;
} arc_array_int;
typedef array_int arc_array_int_interior_t ;
#ifndef __RC_TYPE_H_
#define __RC_TYPE_H_
typedef struct std_rc std_rc ;
#endif /* __RC_TYPE_H_ */ 
typedef std_rc arc_array_int_type_t ;
#ifndef __ARC_ATOMIC_H_
#define __ARC_ATOMIC_H_
size_t __cicili_arc_incr (size_t * p );
size_t __cicili_arc_decr (size_t * p );
#endif /* __ARC_ATOMIC_H_ */ 
void free_arc_array_int (arc_array_int * arc );
void free_arc_array_int_pointer (arc_array_int ** arc );
arc_array_int clone_arc_array_int (arc_array_int * restrict arc );
Maybe_ref_array_int get_arc_array_int (arc_array_int * restrict arc );
#ifndef __MAYBE_IMPL__ref_array_int__H_
#define __MAYBE_IMPL__ref_array_int__H_
Maybe_ref_array_int just_ref_array_int (array_int * restrict value ) {
  return ((Maybe_ref_array_int){ .ctor = JUST_CTOR , .data.just.value = value });
}
Maybe_ref_array_int nothing_ref_array_int () {
  return ((Maybe_ref_array_int){ .ctor = NOTHING_CTOR });
}
#endif /* __MAYBE_IMPL__ref_array_int__H_ */ 
#ifndef __ARC_ATOMIC_IMPL_H_
#define __ARC_ATOMIC_IMPL_H_
__attribute__((weak)) size_t __cicili_arc_incr (size_t * p ) {
  return __sync_add_and_fetch(p, 1); ;
}
__attribute__((weak)) size_t __cicili_arc_decr (size_t * p ) {
  return __sync_sub_and_fetch(p, 1); ;
}
#endif /* __ARC_ATOMIC_IMPL_H_ */ 
__attribute__((weak)) void free_arc_array_int (arc_array_int * arc ) {
  if ((arc -> ptr) &&  (arc -> count) )
    { /* block258 */
      if (__cicili_arc_decr ((arc -> count)) ==  0 )
        { /* block262 */
          free_array_int ((arc -> ptr));
          free ((arc -> count));
          free ((arc -> ptr));
        }
    }
}
__attribute__((weak)) void free_arc_array_int_pointer (arc_array_int ** arc ) {
  free_arc_array_int ((*arc ));
}
arc_array_int clone_arc_array_int (arc_array_int * restrict arc ) {
  if ((arc -> ptr) &&  (arc -> count) )
    { /* block276 */
      if (__cicili_arc_incr ((arc -> count)) >  1 )
        { /* block281 */
          return ((arc_array_int){ (arc -> ptr), (arc -> count)});
        }
      __cicili_arc_decr ((arc -> count));
    }
  return ((arc_array_int){ NULL , NULL });
}
Maybe_ref_array_int get_arc_array_int (arc_array_int * restrict arc ) {
  if ((arc -> ptr) &&  (arc -> count) &&  ((*(arc -> count)) >=  1 ) )
    return ((Maybe_ref_array_int){ .ctor = JUST_CTOR , .data.just.value = (arc -> ptr)});
  else
    return ((Maybe_ref_array_int){ .ctor = NOTHING_CTOR });
}
static int bad  = 0;
int check (const char * what , long got , long want ) {
  if (got  ==  want  )
    { /* block299 */
      printf ("ok   %-34s %ld\n", what , got );
      return 0;
    }
  else
    { /* block302 */
      printf ("FAIL %-34s got %ld want %ld\n", what , got , want );
      return 1;
    }
}
void * worker (void * arg ) {
  { /* let305 */
    arc_array_int * shared  = ((arc_array_int *)arg );
    int i  = 0;
    // ----------
    while ((i  <  10000 )) {
        ({ /* letn312 */
          arc_array_int mine  __attribute__((__cleanup__(free_arc_array_int ))) = clone_arc_array_int ((&(*shared )));
          // ----------
          { /* let318 */
            Maybe_ref_array_int match317  = get_arc_array_int ((&mine ));
            // ----------
            if ((match317 . ctor) ==  JUST_CTOR  ) {
                { /* let322 */
                  array_int * restrict arr  = (((match317 . data). just). value);
                  // ----------
                  if (((*arr ). len) !=  5 )
                    { /* block328 */
                      bad  = (bad  +  1 );
                    }
                }
            }
            else if ((match317 . ctor) ==  NOTHING_CTOR  ) {
                bad  = (bad  +  1 );
            }
          }
        });
        i  = (i  +  1 );
    }
  }
  return NULL ;
}
int main () {
  ({ /* letn348 */
    arc_array_int a01  __attribute__((__cleanup__(free_arc_array_int ))) = ({ /* letn350 */
      array_int * restrict array_int_ptr338  = malloc (sizeof(array_int));
      array_int array_int_obj339  = new_array_int (((const int[]){ 1, 2, 3, 4, 5}), 5, 5);
      size_t * array_int_count340  = malloc (sizeof(size_t));
      // ----------
      memcpy (array_int_ptr338 , (&array_int_obj339 ), sizeof(array_int_obj339));
      (*array_int_count340 ) = 1;
      ((arc_array_int){ array_int_ptr338 , array_int_count340 });
    });
    // ----------
    bad  += check ("get on a live arc", ({ /* letn359 */
          Maybe_ref_array_int matchn358  = get_arc_array_int ((&a01 ));
          // ----------
          ((((matchn358 . ctor) ==  JUST_CTOR  )) ? ({ /* letn361 */
              array_int * restrict arr  = (((matchn358 . data). just). value);
              // ----------
              ((long)((*arr ). len));
            }) : ({ /* progn364 */
              -1;
            }));
        }), 5) ;
    ({ /* letn369 */
      arc_array_int cl  __attribute__((__cleanup__(free_arc_array_int ))) = clone_arc_array_int ((&a01 ));
      // ----------
      bad  += check ("a clone sees the same payload", ({ /* letn375 */
            Maybe_ref_array_int matchn374  = get_arc_array_int ((&cl ));
            // ----------
            ((((matchn374 . ctor) ==  JUST_CTOR  )) ? ({ /* letn377 */
                array_int * restrict arr  = (((matchn374 . data). just). value);
                // ----------
                ((long)((*arr ). len));
              }) : ({ /* progn380 */
                -1;
              }));
          }), 5) ;
    });
    bad  += check ("count back to one after the clone went", ((long)(*(a01 . count))), 1) ;
    { /* let382 */
      pthread_t t [4];
      int i  = 0;
      // ----------
      while ((i  <  4 )) {
          pthread_create ((t  +  i  ), NULL , worker , (&a01 ));
          i  = (i  +  1 );
      }
      i  = 0;
      while ((i  <  4 )) {
          pthread_join (t [i ], NULL );
          i  = (i  +  1 );
      }
    }
    bad  += check ("no reader saw a torn arc", ((long)bad ), 0) ;
    bad  += check ("count survived 40000 clones", ((long)(*(a01 . count))), 1) ;
  });
  if (bad  ==  0 )
    printf ("arc: all ok\n");
  else
    printf ("arc: %d FAILED\n", bad );
  return bad ;
}
