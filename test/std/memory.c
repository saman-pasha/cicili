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
typedef struct cell_array_int {
  array_int * restrict ptr ;
} cell_array_int;
typedef array_int cell_array_int_interior_t ;
#ifndef __CELL_TYPE_H_
#define __CELL_TYPE_H_
typedef struct std_cell std_cell ;
#endif /* __CELL_TYPE_H_ */ 
typedef std_cell cell_array_int_type_t ;
void free_cell_array_int (cell_array_int * cell );
void free_cell_array_int_pointer (cell_array_int ** cell );
Maybe_ref_array_int get_cell_array_int (cell_array_int * restrict cell );
#ifndef __MAYBE_IMPL__ref_array_int__H_
#define __MAYBE_IMPL__ref_array_int__H_
Maybe_ref_array_int just_ref_array_int (array_int * restrict value ) {
  return ((Maybe_ref_array_int){ .ctor = JUST_CTOR , .data.just.value = value });
}
Maybe_ref_array_int nothing_ref_array_int () {
  return ((Maybe_ref_array_int){ .ctor = NOTHING_CTOR });
}
#endif /* __MAYBE_IMPL__ref_array_int__H_ */ 
Maybe_ref_array_int get_cell_array_int (cell_array_int * restrict cell ) {
  if ((cell -> ptr))
    return ((Maybe_ref_array_int){ .ctor = JUST_CTOR , .data.just.value = (cell -> ptr)});
  else
    return ((Maybe_ref_array_int){ .ctor = NOTHING_CTOR });
}
__attribute__((weak)) void free_cell_array_int (cell_array_int * cell ) {
  if ((cell -> ptr))
    { /* block256 */
      free_array_int ((cell -> ptr));
      free ((cell -> ptr));
    }
}
__attribute__((weak)) void free_cell_array_int_pointer (cell_array_int ** cell ) {
  free_cell_array_int ((*cell ));
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
  union { /* ciciliUnion270 */
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
    { /* block329 */
      if ((*(rc -> count)) ==  1 )
        { /* block335 */
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
    { /* block350 */
      (++(*(rc -> count)));
      return ((rc_array_int){ (rc -> ptr), (rc -> count)});
    }
  return ((rc_array_int){ NULL , NULL });
}
static int bad  = 0;
cell_array_int empty_cell () {
  return ((cell_array_int){ NULL });
}
rc_array_int dead_rc () {
  return ((rc_array_int){ NULL , NULL });
}
int check (const char * what , long got , long want ) {
  if (got  ==  want  )
    { /* block361 */
      printf ("ok   %-40s %ld\n", what , got );
      return 0;
    }
  else
    { /* block364 */
      printf ("FAIL %-40s got %ld want %ld\n", what , got , want );
      return 1;
    }
}
int main () {
  ({ /* letn384 */
    cell_array_int c01  __attribute__((__cleanup__(free_cell_array_int ))) = ({ /* letn392 */
      array_int * array_int_ptr390  = malloc (sizeof(array_int));
      array_int array_int_obj391  = new_array_int (((int[]){ 1, 2, 3, 4}), 4, 4);
      // ----------
      memcpy (array_int_ptr390 , (&array_int_obj391 ), sizeof(array_int_obj391));
      ((cell_array_int){ array_int_ptr390 });
    });
    // ----------
    bad  += check ("get on a full cell", ({ /* letn403 */
          Maybe_ref_array_int matchn402  = get_cell_array_int ((&c01 ));
          // ----------
          ((((matchn402 . ctor) ==  JUST_CTOR  )) ? ({ /* letn405 */
              array_int * restrict arr  = (((matchn402 . data). just). value);
              // ----------
              ((long)((*arr ). len));
            }) : ({ /* progn408 */
              -1;
            }));
        }), 4) ;
    { /* let413 */
      Maybe_ref_array_int match412  = get_cell_array_int ((&c01 ));
      // ----------
      if ((match412 . ctor) ==  JUST_CTOR  ) {
          { /* let417 */
            array_int * restrict arr  = (((match412 . data). just). value);
            // ----------
            (arr -> arr)[0] = 99;
          }
      }
      else if ((match412 . ctor) ==  NOTHING_CTOR  ) {
          bad  = (bad  +  1 );
      }
    }
    bad  += check ("and the write went through it", ({ /* letn423 */
          Maybe_ref_array_int matchn422  = get_cell_array_int ((&c01 ));
          // ----------
          ((((matchn422 . ctor) ==  JUST_CTOR  )) ? ({ /* letn425 */
              array_int * restrict arr  = (((matchn422 . data). just). value);
              // ----------
              ((long)(arr -> arr)[0]);
            }) : ({ /* progn427 */
              -1;
            }));
        }), 99) ;
  });
  ({ /* letn430 */
    cell_array_int c02  __attribute__((__cleanup__(free_cell_array_int ))) = empty_cell ();
    // ----------
    bad  += check ("get on an empty cell", ({ /* letn436 */
          Maybe_ref_array_int matchn435  = get_cell_array_int ((&c02 ));
          // ----------
          ((((matchn435 . ctor) ==  JUST_CTOR  )) ? ({ /* letn438 */
              array_int * restrict _  = (((matchn435 . data). just). value);
              // ----------
              1;
            }) : ({ /* progn440 */
              0;
            }));
        }), 0) ;
  });
  ({ /* letn459 */
    rc_array_int r01  __attribute__((__cleanup__(free_rc_array_int ))) = ({ /* letn468 */
      array_int * restrict array_int_ptr465  = malloc (sizeof(array_int));
      array_int array_int_obj466  = new_array_int (((int[]){ 5, 6, 7}), 3, 3);
      size_t * array_int_count467  = malloc (sizeof(size_t));
      // ----------
      memcpy (array_int_ptr465 , (&array_int_obj466 ), sizeof(array_int_obj466));
      (*array_int_count467 ) = 1;
      ((rc_array_int){ array_int_ptr465 , array_int_count467 });
    });
    // ----------
    bad  += check ("a fresh rc is sole", ((long)((r01 . ptr) &&  (r01 . count) &&  ((*(r01 . count)) ==  1 ) )), 1) ;
    ({ /* letn480 */
      rc_array_int r02  __attribute__((__cleanup__(free_rc_array_int ))) = clone_rc_array_int ((&r01 ));
      // ----------
      bad  += check ("a clone shares the payload", ({ /* letn486 */
            Maybe_ref_array_int matchn485  = get_rc_array_int ((&r02 ));
            // ----------
            ((((matchn485 . ctor) ==  JUST_CTOR  )) ? ({ /* letn488 */
                array_int * restrict arr  = (((matchn485 . data). just). value);
                // ----------
                ((long)((*arr ). len));
              }) : ({ /* progn491 */
                -1;
              }));
          }), 3) ;
      bad  += check ("and neither is sole any more", ((long)((r01 . ptr) &&  (r01 . count) &&  ((*(r01 . count)) ==  1 ) )), 0) ;
    });
    bad  += check ("the payload survived the clone", ({ /* letn497 */
          Maybe_ref_array_int matchn496  = get_rc_array_int ((&r01 ));
          // ----------
          ((((matchn496 . ctor) ==  JUST_CTOR  )) ? ({ /* letn499 */
              array_int * restrict arr  = (((matchn496 . data). just). value);
              // ----------
              ((long)((*arr ). len));
            }) : ({ /* progn502 */
              -1;
            }));
        }), 3) ;
    bad  += check ("and the original is sole again", ((long)((r01 . ptr) &&  (r01 . count) &&  ((*(r01 . count)) ==  1 ) )), 1) ;
  });
  ({ /* letn506 */
    rc_array_int r03  __attribute__((__cleanup__(free_rc_array_int ))) = dead_rc ();
    // ----------
    bad  += check ("get on a dead rc", ({ /* letn512 */
          Maybe_ref_array_int matchn511  = get_rc_array_int ((&r03 ));
          // ----------
          ((((matchn511 . ctor) ==  JUST_CTOR  )) ? ({ /* letn514 */
              array_int * restrict _  = (((matchn511 . data). just). value);
              // ----------
              1;
            }) : ({ /* progn516 */
              0;
            }));
        }), 0) ;
  });
  if (bad  ==  0 )
    printf ("memory: all ok\n");
  else
    printf ("memory: %d FAILED\n", bad );
  return bad ;
}
