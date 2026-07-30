#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
typedef struct maybe_int {
  bool present ;
  int value ;
} maybe_int;
typedef int maybe_int_interior_t ;
#ifndef __MAYBE_TYPE_H_
#define __MAYBE_TYPE_H_
typedef struct std_maybe std_maybe ;
#endif /* __MAYBE_TYPE_H_ */ 
typedef std_maybe maybe_int_type_t ;
maybe_int just_maybe_int (int value );
maybe_int nothing_maybe_int ();
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
maybe_int nth_array_int (size_t index , array_int * restrict array );
typedef struct rc_array_int_context {
  array_int * const ptr ;
  size_t * count ;
} rc_array_int_context;
void free_rc_array_int_context (rc_array_int_context * ctx );
void free_rc_array_int_context_pointer (rc_array_int_context ** ctx );
typedef struct cell_rc_array_int_context {
  rc_array_int_context * restrict ptr ;
} cell_rc_array_int_context;
typedef rc_array_int_context cell_rc_array_int_context_interior_t ;
#ifndef __CELL_TYPE_H_
#define __CELL_TYPE_H_
typedef struct std_cell std_cell ;
#endif /* __CELL_TYPE_H_ */ 
typedef std_cell cell_rc_array_int_context_type_t ;
void free_cell_rc_array_int_context (cell_rc_array_int_context * cell );
void free_cell_rc_array_int_context_pointer (cell_rc_array_int_context ** cell );
cell_rc_array_int_context clone_rc_array_int_context (cell_rc_array_int_context * restrict ctx_cell );
typedef struct vector_int {
  cell_rc_array_int_context vec ;
  size_t low ;
  size_t high ;
} vector_int;
typedef int vector_int_item_t ;
#ifndef __VECTOR_TYPE_H_
#define __VECTOR_TYPE_H_
typedef struct std_vector std_vector ;
#endif /* __VECTOR_TYPE_H_ */ 
typedef std_vector vector_int_type_t ;
void free_vector_int (vector_int * vector );
size_t arraySize_vector_int (size_t size );
array_int * buffer_vector_int (vector_int * restrict vector );
size_t len_vector_int (vector_int * restrict vector );
maybe_int nth_vector_int (size_t index , vector_int * restrict vector );
size_t push_vector_int (vector_int * restrict vector , int item );
size_t append_vector_int (vector_int * restrict vector , const int * items , size_t count );
__attribute__((weak)) maybe_int just_maybe_int (int value ) {
  return ((maybe_int){ true , value });
}
__attribute__((weak)) maybe_int nothing_maybe_int () {
  return ((maybe_int){ false , ((int){ 0})});
}
__attribute__((weak)) void free_array_int (array_int * restrict array ) {
  free ((array -> arr));
}
__attribute__((weak)) void free_array_int_pointer (array_int ** array ) {
  free_array_int ((*array ));
}
array_int new_array_int (const int * arr , size_t len , size_t cap ) {
  return ({ /* letn221 */
      int * new_arr  = calloc (cap , sizeof(int));
      // ----------
      if (arr  &&  len  )
        { /* block228 */
          memcpy (new_arr , arr , (len  *  sizeof(int) ));
        }
      ((array_int){ new_arr , cap });
    });
}
size_t len_array_int (array_int * restrict array ) {
  return (array -> len);
}
maybe_int nth_array_int (size_t index , array_int * restrict array ) {
  if (index  <  (array -> len) )
    return ((maybe_int){ true , (array -> arr)[index ]});
  else
    return ((maybe_int){ false , ((int){ 0})});
}
__attribute__((weak)) void free_cell_rc_array_int_context (cell_rc_array_int_context * cell ) {
  if ((cell -> ptr))
    { /* block255 */
      free_rc_array_int_context ((cell -> ptr));
      free ((cell -> ptr));
    }
}
__attribute__((weak)) void free_cell_rc_array_int_context_pointer (cell_rc_array_int_context ** cell ) {
  free_cell_rc_array_int_context ((*cell ));
}
__attribute__((weak)) void free_rc_array_int_context (rc_array_int_context * ctx ) {
  if ((ctx -> ptr) &&  (ctx -> count) )
    { /* block270 */
      if ((*(ctx -> count)) ==  1 )
        { /* block276 */
          free_array_int ((ctx -> ptr));
          free ((ctx -> count));
          free ((ctx -> ptr));
        }
      else
        (--(*(ctx -> count)));
    }
}
__attribute__((weak)) void free_rc_array_int_context_pointer (rc_array_int_context ** ctx ) {
  free_rc_array_int_context ((*ctx ));
}
cell_rc_array_int_context clone_rc_array_int_context (cell_rc_array_int_context * restrict ctx_cell ) {
  if ((ctx_cell -> ptr) &&  ((ctx_cell -> ptr)-> ptr) &&  ((ctx_cell -> ptr)-> count) &&  ((*((ctx_cell -> ptr)-> count)) >=  1 ) )
    return ({ /* letn290 */
        rc_array_int_context * new_ctx  = malloc (sizeof((*(ctx_cell -> ptr))));
        // ----------
        (++(*((ctx_cell -> ptr)-> count)));
        memcpy (new_ctx , (ctx_cell -> ptr), sizeof((*(ctx_cell -> ptr))));
        ((cell_rc_array_int_context){ new_ctx });
      });
  else
    return ((cell_rc_array_int_context){ NULL });
}
__attribute__((weak)) void free_vector_int (vector_int * vector ) {
  free_cell_rc_array_int_context ((&(vector -> vec)));
}
size_t arraySize_vector_int (size_t size ) {
  { /* let306 */
    size_t two_pow  = 0x10;
    // ----------
    while ((two_pow  <  size  )) {
        two_pow  = (two_pow  <<  1 );
    }
    return two_pow ;
  }
}
array_int * buffer_vector_int (vector_int * restrict vector ) {
  if ((vector -> vec). ptr)
    { /* block317 */
      return (((vector -> vec). ptr)-> ptr);
    }
  return NULL ;
}
size_t len_vector_int (vector_int * restrict vector ) {
  return ((vector -> high) -  (vector -> low) );
}
maybe_int nth_vector_int (size_t index , vector_int * restrict vector ) {
  { /* let326 */
    array_int * arr  = buffer_vector_int (vector );
    size_t at  = ((vector -> low) +  index  );
    // ----------
    if (arr  &&  (at  <  (vector -> high) ) &&  (at  <  (arr -> len) ) )
      return ((maybe_int){ true , (arr -> arr)[at ]});
    else
      return ((maybe_int){ false , ((int){ 0})});
  }
}
size_t push_vector_int (vector_int * restrict vector , int item ) {
  return append_vector_int (vector , (&item ), 1);
}
size_t append_vector_int (vector_int * restrict vector , const int * items , size_t count ) {
  { /* let342 */
    const size_t low  = (vector -> low);
    const size_t high  = (vector -> high);
    const size_t total  = (((vector -> high) -  (vector -> low) ) +  count  );
    array_int * arr  = buffer_vector_int (vector );
    // ----------
    if (arr  &&  (((vector -> vec). ptr)-> count) &&  ((*(((vector -> vec). ptr)-> count)) ==  1 ) &&  ((high  +  count  ) <=  (arr -> len) ) )
      { /* block349 */
        memcpy (((arr -> arr) +  high  ), items , (count  *  sizeof(int) ));
        (vector -> high) = (high  +  count  );
        return total ;
      }
    { /* let353 */
      const size_t cap  = arraySize_vector_int (total );
      // ----------
      { /* let358 */
        cell_rc_array_int_context fresh  = ({ /* letn379 */
          rc_array_int_context * rc_array_int_context_ptr377  = malloc (sizeof(rc_array_int_context));
          rc_array_int_context rc_array_int_context_obj378  = ({ /* letn387 */
            array_int * array_int_ptr384  = malloc (sizeof(array_int));
            array_int array_int_obj385  = new_array_int (((arr ) ? ((arr -> arr) +  low  ) : NULL ), ((arr ) ? (high  -  low  ) : 0), cap );
            size_t * array_int_count386  = malloc (sizeof(size_t));
            // ----------
            memcpy (array_int_ptr384 , (&array_int_obj385 ), sizeof(array_int_obj385));
            (*array_int_count386 ) = 1;
            ((rc_array_int_context){ array_int_ptr384 , array_int_count386 });
          });
          // ----------
          memcpy (rc_array_int_context_ptr377 , (&rc_array_int_context_obj378 ), sizeof(rc_array_int_context_obj378));
          ((cell_rc_array_int_context){ rc_array_int_context_ptr377 });
        });
        // ----------
        memcpy (((((fresh . ptr)-> ptr)-> arr) +  (high  -  low  ) ), items , (count  *  sizeof(int) ));
        free_cell_rc_array_int_context ((&(vector -> vec)));
        ((vector -> vec). ptr) = (fresh . ptr);
        (vector -> low) = 0;
        (vector -> high) = total ;
        return total ;
      }
    }
  }
}
int check (const char * what , long long got , long long want ) {
  if (got  ==  want  )
    { /* block403 */
      printf ("ok   %-34s %lld\n", what , got );
      return 0;
    }
  else
    { /* block406 */
      printf ("FAIL %-34s got %lld want %lld\n", what , got , want );
      return 1;
    }
  return 1;
}
int at (size_t index , vector_int * restrict v ) {
  return ({ /* letn413 */
      maybe_int matchn412  = nth_vector_int (index , v );
      // ----------
      (((matchn412 . present)) ? ({ /* letn415 */
          int x  = (matchn412 . value);
          // ----------
          x ;
        }) : ({ /* progn417 */
          -1;
        }));
    });
}
long long total (vector_int * restrict v ) {
  { /* let421 */
    long long sum  = 0;
    // ----------
    for (size_t i  = 0; (i  <  len_vector_int (v ) ); (++i )) {
        sum  += at (i , v ) ;
    }
    return sum ;
  }
}
int main () {
  { /* let429 */
    int bad  = 0;
    // ----------
    ({ /* letn518 */
      vector_int v  __attribute__((__cleanup__(free_vector_int ))) = ({ /* letn523 */
        const size_t tmp_len521  = 5;
        const size_t arr_len522  = arraySize_vector_int (5);
        // ----------
        ((vector_int){ ({ /* letn547 */
            rc_array_int_context * rc_array_int_context_ptr545  = malloc (sizeof(rc_array_int_context));
            rc_array_int_context rc_array_int_context_obj546  = ({ /* letn555 */
              array_int * array_int_ptr552  = malloc (sizeof(array_int));
              array_int array_int_obj553  = new_array_int (((const int[]){ 1, 2, 3, 4, 5}), tmp_len521 , arr_len522 );
              size_t * array_int_count554  = malloc (sizeof(size_t));
              // ----------
              memcpy (array_int_ptr552 , (&array_int_obj553 ), sizeof(array_int_obj553));
              (*array_int_count554 ) = 1;
              ((rc_array_int_context){ array_int_ptr552 , array_int_count554 });
            });
            // ----------
            memcpy (rc_array_int_context_ptr545 , (&rc_array_int_context_obj546 ), sizeof(rc_array_int_context_obj546));
            ((cell_rc_array_int_context){ rc_array_int_context_ptr545 });
          }), 0, tmp_len521 });
      });
      // ----------
      bad  += check ("len after new", len_vector_int ((&v )), 5) ;
      bad  += check ("nth 0", at (0, (&v )), 1) ;
      bad  += check ("nth 4", at (4, (&v )), 5) ;
      bad  += check ("nth past the end", at (5, (&v )), -1) ;
      bad  += check ("checksum", total ((&v )), 15) ;
      bad  += check ("push returns the len", push_vector_int ((&v ), 6), 6) ;
      bad  += check ("pushed value", at (5, (&v )), 6) ;
      push_vector_int ((&v ), 7);
      bad  += check ("len after two pushes", len_vector_int ((&v )), 7) ;
      bad  += check ("checksum after push", total ((&v )), 28) ;
      bad  += check ("old items intact", at (0, (&v )), 1) ;
      bad  += check ("append returns len", append_vector_int ((&v ), ((const vector_int_item_t[]){ 8, 9, 10}), 3), 10) ;
      bad  += check ("appended first", at (7, (&v )), 8) ;
      bad  += check ("appended last", at (9, (&v )), 10) ;
      bad  += check ("checksum after append", total ((&v )), 55) ;
      for (int n  = 11; (n  <=  40 ); (++n )) {
          push_vector_int ((&v ), n );
      }
      bad  += check ("len after growth", len_vector_int ((&v )), 40) ;
      bad  += check ("first survived growth", at (0, (&v )), 1) ;
      bad  += check ("last after growth", at (39, (&v )), 40) ;
      bad  += check ("checksum 1..40", total ((&v )), 820) ;
      bad  += check ("still bounds checked", at (40, (&v )), -1) ;
    });
    ({ /* letn671 */
      vector_int e  __attribute__((__cleanup__(free_vector_int ))) = ({ /* letn676 */
        const size_t tmp_len674  = 0;
        const size_t arr_len675  = arraySize_vector_int (0);
        // ----------
        ((vector_int){ ({ /* letn700 */
            rc_array_int_context * rc_array_int_context_ptr698  = malloc (sizeof(rc_array_int_context));
            rc_array_int_context rc_array_int_context_obj699  = ({ /* letn708 */
              array_int * array_int_ptr705  = malloc (sizeof(array_int));
              array_int array_int_obj706  = new_array_int (((const int[]){ 0}), tmp_len674 , arr_len675 );
              size_t * array_int_count707  = malloc (sizeof(size_t));
              // ----------
              memcpy (array_int_ptr705 , (&array_int_obj706 ), sizeof(array_int_obj706));
              (*array_int_count707 ) = 1;
              ((rc_array_int_context){ array_int_ptr705 , array_int_count707 });
            });
            // ----------
            memcpy (rc_array_int_context_ptr698 , (&rc_array_int_context_obj699 ), sizeof(rc_array_int_context_obj699));
            ((cell_rc_array_int_context){ rc_array_int_context_ptr698 });
          }), 0, tmp_len674 });
      });
      // ----------
      bad  += check ("len of an empty vector", len_vector_int ((&e )), 0) ;
      bad  += check ("nth of an empty vector", at (0, (&e )), -1) ;
      bad  += check ("push onto empty", push_vector_int ((&e ), 42), 1) ;
      bad  += check ("the pushed value", at (0, (&e )), 42) ;
      bad  += check ("append onto one", append_vector_int ((&e ), ((const vector_int_item_t[]){ 43, 44}), 2), 3) ;
      bad  += check ("checksum of the three", total ((&e )), 129) ;
      ({ /* letn813 */
        vector_int o  __attribute__((__cleanup__(free_vector_int ))) = ({ /* letn818 */
          const size_t tmp_len816  = 2;
          const size_t arr_len817  = arraySize_vector_int (2);
          // ----------
          ((vector_int){ ({ /* letn842 */
              rc_array_int_context * rc_array_int_context_ptr840  = malloc (sizeof(rc_array_int_context));
              rc_array_int_context rc_array_int_context_obj841  = ({ /* letn850 */
                array_int * array_int_ptr847  = malloc (sizeof(array_int));
                array_int array_int_obj848  = new_array_int (((const int[]){ 7, 7}), tmp_len816 , arr_len817 );
                size_t * array_int_count849  = malloc (sizeof(size_t));
                // ----------
                memcpy (array_int_ptr847 , (&array_int_obj848 ), sizeof(array_int_obj848));
                (*array_int_count849 ) = 1;
                ((rc_array_int_context){ array_int_ptr847 , array_int_count849 });
              });
              // ----------
              memcpy (rc_array_int_context_ptr840 , (&rc_array_int_context_obj841 ), sizeof(rc_array_int_context_obj841));
              ((cell_rc_array_int_context){ rc_array_int_context_ptr840 });
            }), 0, tmp_len816 });
        });
        // ----------
        push_vector_int ((&o ), 7);
        bad  += check ("other vector len", len_vector_int ((&o )), 3) ;
        bad  += check ("other vector total", total ((&o )), 21) ;
        bad  += check ("first is untouched", total ((&e )), 129) ;
      });
    });
    if (bad  ==  0 )
      printf ("vector: all ok\n");
    else
      printf ("vector: %d FAILED\n", bad );
    return bad ;
  }
}
