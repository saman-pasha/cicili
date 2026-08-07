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
typedef struct vector_int {
  int * restrict arr ;
  size_t cap ;
  size_t len ;
} vector_int;
typedef int vector_int_item_t ;
#ifndef __VECTOR_TYPE_H_
#define __VECTOR_TYPE_H_
typedef struct std_vector std_vector ;
#endif /* __VECTOR_TYPE_H_ */ 
typedef std_vector vector_int_type_t ;
void free_vector_int (vector_int * restrict vector );
void free_vector_int_pointer (vector_int ** vector );
size_t arraySize_vector_int (size_t size );
vector_int new_vector_int (const int * items , size_t len );
size_t len_vector_int (vector_int * restrict vector );
Maybe_ref_int nth_vector_int (size_t index , vector_int * restrict vector );
void grow_vector_int (vector_int * restrict vector , size_t needed );
size_t push_vector_int (vector_int * restrict vector , int item );
size_t append_vector_int (vector_int * restrict vector , const int * items , size_t count );
#ifndef __MAYBE_IMPL__ref_int__H_
#define __MAYBE_IMPL__ref_int__H_
Maybe_ref_int just_ref_int (int * restrict value ) {
  return ((Maybe_ref_int){ .ctor = JUST_CTOR , .data.just.value = value });
}
Maybe_ref_int nothing_ref_int () {
  return ((Maybe_ref_int){ .ctor = NOTHING_CTOR });
}
#endif /* __MAYBE_IMPL__ref_int__H_ */ 
__attribute__((weak)) void free_vector_int (vector_int * restrict vector ) {
  free ((vector -> arr));
}
__attribute__((weak)) void free_vector_int_pointer (vector_int ** vector ) {
  free_vector_int ((*vector ));
}
size_t arraySize_vector_int (size_t size ) {
  { /* let177 */
    size_t two_pow  = 0x10;
    // ----------
    while ((two_pow  <  size  )) {
        two_pow  = (two_pow  <<  1 );
    }
    return two_pow ;
  }
}
vector_int new_vector_int (const int * items , size_t len ) {
  if (len  ==  0 )
    { /* block187 */
      return ((vector_int){ NULL , 0, 0});
    }
  return ({ /* letn190 */
      const size_t cap  = arraySize_vector_int (len );
      int * restrict arr  = malloc ((cap  *  sizeof(int) ));
      // ----------
      if (items  &&  len  )
        memcpy (arr , items , (len  *  sizeof(int) ));
      else
        memset (arr , 0, (len  *  sizeof(int) ));
      ((vector_int){ arr , cap , len });
    });
}
size_t len_vector_int (vector_int * restrict vector ) {
  return (vector -> len);
}
Maybe_ref_int nth_vector_int (size_t index , vector_int * restrict vector ) {
  if (index  <  (vector -> len) )
    return ((Maybe_ref_int){ .ctor = JUST_CTOR , .data.just.value = ((vector -> arr) +  index  )});
  else
    return ((Maybe_ref_int){ .ctor = NOTHING_CTOR });
}
void grow_vector_int (vector_int * restrict vector , size_t needed ) {
  if (needed  >  (vector -> cap) )
    { /* block217 */
      { /* let219 */
        const size_t cap  = arraySize_vector_int (needed );
        // ----------
        (vector -> arr) = realloc ((vector -> arr), (cap  *  sizeof(int) ));
        (vector -> cap) = cap ;
      }
    }
}
size_t push_vector_int (vector_int * restrict vector , int item ) {
  grow_vector_int (vector , ((vector -> len) +  1 ));
  (vector -> arr)[(vector -> len)] = item ;
  (vector -> len) = ((vector -> len) +  1 );
  return (vector -> len);
}
size_t append_vector_int (vector_int * restrict vector , const int * items , size_t count ) {
  grow_vector_int (vector , ((vector -> len) +  count  ));
  memcpy (((vector -> arr) +  (vector -> len) ), items , (count  *  sizeof(int) ));
  (vector -> len) = ((vector -> len) +  count  );
  return (vector -> len);
}
int check (const char * what , long long got , long long want ) {
  if (got  ==  want  )
    { /* block235 */
      printf ("ok   %-34s %lld\n", what , got );
      return 0;
    }
  else
    { /* block238 */
      printf ("FAIL %-34s got %lld want %lld\n", what , got , want );
      return 1;
    }
  return 1;
}
int at (size_t index , vector_int * restrict v ) {
  return ({ /* letn245 */
      Maybe_ref_int matchn244  = nth_vector_int (index , v );
      // ----------
      ((((matchn244 . ctor) ==  JUST_CTOR  )) ? ({ /* letn247 */
          int * restrict x  = (((matchn244 . data). just). value);
          // ----------
          (*x );
        }) : ({ /* progn249 */
          -1;
        }));
    });
}
long long total (vector_int * restrict v ) {
  { /* let253 */
    long long sum  = 0;
    // ----------
    for (size_t i  = 0; (i  <  len_vector_int (v ) ); (++i )) {
        sum  += at (i , v ) ;
    }
    return sum ;
  }
}
int main () {
  { /* let261 */
    int bad  = 0;
    // ----------
    ({ /* letn268 */
      vector_int v  __attribute__((__cleanup__(free_vector_int ))) = new_vector_int (((const int[]){ 1, 2, 3, 4, 5}), 5);
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
    ({ /* letn296 */
      vector_int e  __attribute__((__cleanup__(free_vector_int ))) = new_vector_int (((const int[]){ 0}), 0);
      // ----------
      bad  += check ("len of an empty vector", len_vector_int ((&e )), 0) ;
      bad  += check ("nth of an empty vector", at (0, (&e )), -1) ;
      bad  += check ("push onto empty", push_vector_int ((&e ), 42), 1) ;
      bad  += check ("the pushed value", at (0, (&e )), 42) ;
      bad  += check ("append onto one", append_vector_int ((&e ), ((const vector_int_item_t[]){ 43, 44}), 2), 3) ;
      bad  += check ("checksum of the three", total ((&e )), 129) ;
      ({ /* letn313 */
        vector_int o  __attribute__((__cleanup__(free_vector_int ))) = new_vector_int (((const int[]){ 7, 7}), 2);
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
