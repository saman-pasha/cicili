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
    return ((maybe_int){ false , ((maybe_int_interior_t){ 0})});
}
__attribute__((weak)) void free_cell_rc_array_int_context (cell_rc_array_int_context * cell ) {
  if ((cell -> ptr))
    { /* block256 */
      free_rc_array_int_context ((cell -> ptr));
      free ((cell -> ptr));
    }
}
__attribute__((weak)) void free_cell_rc_array_int_context_pointer (cell_rc_array_int_context ** cell ) {
  free_cell_rc_array_int_context ((*cell ));
}
__attribute__((weak)) void free_rc_array_int_context (rc_array_int_context * ctx ) {
  if ((ctx -> ptr) &&  (ctx -> count) )
    { /* block271 */
      if ((*(ctx -> count)) ==  1 )
        { /* block277 */
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
    return ({ /* letn291 */
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
  { /* let307 */
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
    { /* block318 */
      return (((vector -> vec). ptr)-> ptr);
    }
  return NULL ;
}
size_t len_vector_int (vector_int * restrict vector ) {
  return ((vector -> high) -  (vector -> low) );
}
maybe_int nth_vector_int (size_t index , vector_int * restrict vector ) {
  { /* let327 */
    array_int * arr  = buffer_vector_int (vector );
    size_t at  = ((vector -> low) +  index  );
    // ----------
    if (arr  &&  (at  <  (vector -> high) ) &&  (at  <  (arr -> len) ) )
      return ((maybe_int){ true , (arr -> arr)[at ]});
    else
      return ((maybe_int){ false , ((maybe_int_interior_t){ 0})});
  }
}
size_t push_vector_int (vector_int * restrict vector , int item ) {
  return append_vector_int (vector , (&item ), 1);
}
size_t append_vector_int (vector_int * restrict vector , const int * items , size_t count ) {
  { /* let344 */
    const size_t low  = (vector -> low);
    const size_t high  = (vector -> high);
    const size_t total  = (((vector -> high) -  (vector -> low) ) +  count  );
    array_int * arr  = buffer_vector_int (vector );
    // ----------
    if (arr  &&  (((vector -> vec). ptr)-> count) &&  ((*(((vector -> vec). ptr)-> count)) ==  1 ) &&  ((high  +  count  ) <=  (arr -> len) ) )
      { /* block351 */
        memcpy (((arr -> arr) +  high  ), items , (count  *  sizeof(int) ));
        (vector -> high) = (high  +  count  );
        return total ;
      }
    { /* let355 */
      const size_t cap  = arraySize_vector_int (total );
      // ----------
      { /* let360 */
        cell_rc_array_int_context fresh  = ({ /* letn381 */
          rc_array_int_context * rc_array_int_context_ptr379  = malloc (sizeof(rc_array_int_context));
          rc_array_int_context rc_array_int_context_obj380  = ({ /* letn389 */
            array_int * array_int_ptr386  = malloc (sizeof(array_int));
            array_int array_int_obj387  = new_array_int (((arr ) ? ((arr -> arr) +  low  ) : NULL ), ((arr ) ? (high  -  low  ) : 0), cap );
            size_t * array_int_count388  = malloc (sizeof(size_t));
            // ----------
            memcpy (array_int_ptr386 , (&array_int_obj387 ), sizeof(array_int_obj387));
            (*array_int_count388 ) = 1;
            ((rc_array_int_context){ array_int_ptr386 , array_int_count388 });
          });
          // ----------
          memcpy (rc_array_int_context_ptr379 , (&rc_array_int_context_obj380 ), sizeof(rc_array_int_context_obj380));
          ((cell_rc_array_int_context){ rc_array_int_context_ptr379 });
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
    { /* block405 */
      printf ("ok   %-34s %lld\n", what , got );
      return 0;
    }
  else
    { /* block408 */
      printf ("FAIL %-34s got %lld want %lld\n", what , got , want );
      return 1;
    }
  return 1;
}
int at (size_t index , vector_int * restrict v ) {
  return ({ /* letn415 */
      maybe_int matchn414  = nth_vector_int (index , v );
      // ----------
      (((matchn414 . present)) ? ({ /* letn417 */
          int x  = (matchn414 . value);
          // ----------
          x ;
        }) : ({ /* progn419 */
          -1;
        }));
    });
}
long long total (vector_int * restrict v ) {
  { /* let423 */
    long long sum  = 0;
    // ----------
    for (size_t i  = 0; (i  <  len_vector_int (v ) ); (++i )) {
        sum  += at (i , v ) ;
    }
    return sum ;
  }
}
int main () {
  { /* let431 */
    int bad  = 0;
    // ----------
    ({ /* letn520 */
      vector_int v  __attribute__((__cleanup__(free_vector_int ))) = ({ /* letn525 */
        const size_t tmp_len523  = 5;
        const size_t arr_len524  = arraySize_vector_int (5);
        // ----------
        ((vector_int){ ({ /* letn549 */
            rc_array_int_context * rc_array_int_context_ptr547  = malloc (sizeof(rc_array_int_context));
            rc_array_int_context rc_array_int_context_obj548  = ({ /* letn557 */
              array_int * array_int_ptr554  = malloc (sizeof(array_int));
              array_int array_int_obj555  = new_array_int (((const int[]){ 1, 2, 3, 4, 5}), tmp_len523 , arr_len524 );
              size_t * array_int_count556  = malloc (sizeof(size_t));
              // ----------
              memcpy (array_int_ptr554 , (&array_int_obj555 ), sizeof(array_int_obj555));
              (*array_int_count556 ) = 1;
              ((rc_array_int_context){ array_int_ptr554 , array_int_count556 });
            });
            // ----------
            memcpy (rc_array_int_context_ptr547 , (&rc_array_int_context_obj548 ), sizeof(rc_array_int_context_obj548));
            ((cell_rc_array_int_context){ rc_array_int_context_ptr547 });
          }), 0, tmp_len523 });
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
    ({ /* letn673 */
      vector_int e  __attribute__((__cleanup__(free_vector_int ))) = ({ /* letn678 */
        const size_t tmp_len676  = 0;
        const size_t arr_len677  = arraySize_vector_int (0);
        // ----------
        ((vector_int){ ({ /* letn702 */
            rc_array_int_context * rc_array_int_context_ptr700  = malloc (sizeof(rc_array_int_context));
            rc_array_int_context rc_array_int_context_obj701  = ({ /* letn710 */
              array_int * array_int_ptr707  = malloc (sizeof(array_int));
              array_int array_int_obj708  = new_array_int (((const int[]){ 0}), tmp_len676 , arr_len677 );
              size_t * array_int_count709  = malloc (sizeof(size_t));
              // ----------
              memcpy (array_int_ptr707 , (&array_int_obj708 ), sizeof(array_int_obj708));
              (*array_int_count709 ) = 1;
              ((rc_array_int_context){ array_int_ptr707 , array_int_count709 });
            });
            // ----------
            memcpy (rc_array_int_context_ptr700 , (&rc_array_int_context_obj701 ), sizeof(rc_array_int_context_obj701));
            ((cell_rc_array_int_context){ rc_array_int_context_ptr700 });
          }), 0, tmp_len676 });
      });
      // ----------
      bad  += check ("len of an empty vector", len_vector_int ((&e )), 0) ;
      bad  += check ("nth of an empty vector", at (0, (&e )), -1) ;
      bad  += check ("push onto empty", push_vector_int ((&e ), 42), 1) ;
      bad  += check ("the pushed value", at (0, (&e )), 42) ;
      bad  += check ("append onto one", append_vector_int ((&e ), ((const vector_int_item_t[]){ 43, 44}), 2), 3) ;
      bad  += check ("checksum of the three", total ((&e )), 129) ;
      ({ /* letn815 */
        vector_int o  __attribute__((__cleanup__(free_vector_int ))) = ({ /* letn820 */
          const size_t tmp_len818  = 2;
          const size_t arr_len819  = arraySize_vector_int (2);
          // ----------
          ((vector_int){ ({ /* letn844 */
              rc_array_int_context * rc_array_int_context_ptr842  = malloc (sizeof(rc_array_int_context));
              rc_array_int_context rc_array_int_context_obj843  = ({ /* letn852 */
                array_int * array_int_ptr849  = malloc (sizeof(array_int));
                array_int array_int_obj850  = new_array_int (((const int[]){ 7, 7}), tmp_len818 , arr_len819 );
                size_t * array_int_count851  = malloc (sizeof(size_t));
                // ----------
                memcpy (array_int_ptr849 , (&array_int_obj850 ), sizeof(array_int_obj850));
                (*array_int_count851 ) = 1;
                ((rc_array_int_context){ array_int_ptr849 , array_int_count851 });
              });
              // ----------
              memcpy (rc_array_int_context_ptr842 , (&rc_array_int_context_obj843 ), sizeof(rc_array_int_context_obj843));
              ((cell_rc_array_int_context){ rc_array_int_context_ptr842 });
            }), 0, tmp_len818 });
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
