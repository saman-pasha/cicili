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
#ifndef __MAYBE__ref_char__H_
#define __MAYBE__ref_char__H_
typedef struct JustT_ref_char {
  char * restrict value ;
} JustT_ref_char;
typedef struct Maybe_ref_char {
  MAYBE_CTOR ctor ;
  union { /* ciciliUnion111 */
    JustT_ref_char just ;
    NothingT nothing ;
  } data ;
} Maybe_ref_char;
typedef std_maybe Maybe_ref_char_type_t ;
Maybe_ref_char just_ref_char (char * restrict value );
Maybe_ref_char nothing_ref_char ();
#endif /* __MAYBE__ref_char__H_ */ 
typedef struct vector_char {
  char * restrict arr ;
  size_t cap ;
  size_t len ;
} vector_char;
typedef char vector_char_item_t ;
#ifndef __VECTOR_TYPE_H_
#define __VECTOR_TYPE_H_
typedef struct std_vector std_vector ;
#endif /* __VECTOR_TYPE_H_ */ 
typedef std_vector vector_char_type_t ;
void free_vector_char (vector_char * restrict vector );
void free_vector_char_pointer (vector_char ** vector );
size_t arraySize_vector_char (size_t size );
vector_char new_vector_char (const char * items , size_t len );
size_t len_vector_char (vector_char * restrict vector );
Maybe_ref_char nth_vector_char (size_t index , vector_char * restrict vector );
void grow_vector_char (vector_char * restrict vector , size_t needed );
size_t push_vector_char (vector_char * restrict vector , char item );
size_t append_vector_char (vector_char * restrict vector , const char * items , size_t count );
typedef vector_char string ;
void free_string (string * restrict str );
void free_string_pointer (string ** str );
string new_string (const char * buf );
size_t append_string (string * restrict lhs , string * restrict rhs );
size_t show_string (FILE * file , string * restrict str );
const char * c_str_string (string * restrict str );
#ifndef __MAYBE_IMPL__ref_char__H_
#define __MAYBE_IMPL__ref_char__H_
Maybe_ref_char just_ref_char (char * restrict value ) {
  return ((Maybe_ref_char){ .ctor = JUST_CTOR , .data.just.value = value });
}
Maybe_ref_char nothing_ref_char () {
  return ((Maybe_ref_char){ .ctor = NOTHING_CTOR });
}
#endif /* __MAYBE_IMPL__ref_char__H_ */ 
__attribute__((weak)) void free_vector_char (vector_char * restrict vector ) {
  free ((vector -> arr));
}
__attribute__((weak)) void free_vector_char_pointer (vector_char ** vector ) {
  free_vector_char ((*vector ));
}
size_t arraySize_vector_char (size_t size ) {
  { /* let194 */
    size_t two_pow  = 0x10;
    // ----------
    while ((two_pow  <  size  )) {
        two_pow  = (two_pow  <<  1 );
    }
    return two_pow ;
  }
}
vector_char new_vector_char (const char * items , size_t len ) {
  if (len  ==  0 )
    { /* block204 */
      return ((vector_char){ NULL , 0, 0});
    }
  return ({ /* letn207 */
      const size_t cap  = arraySize_vector_char (len );
      char * restrict arr  = malloc ((cap  *  sizeof(char) ));
      // ----------
      if (items  &&  len  )
        memcpy (arr , items , (len  *  sizeof(char) ));
      else
        memset (arr , 0, (len  *  sizeof(char) ));
      ((vector_char){ arr , cap , len });
    });
}
size_t len_vector_char (vector_char * restrict vector ) {
  return (vector -> len);
}
Maybe_ref_char nth_vector_char (size_t index , vector_char * restrict vector ) {
  if (index  <  (vector -> len) )
    return ((Maybe_ref_char){ .ctor = JUST_CTOR , .data.just.value = ((vector -> arr) +  index  )});
  else
    return ((Maybe_ref_char){ .ctor = NOTHING_CTOR });
}
void grow_vector_char (vector_char * restrict vector , size_t needed ) {
  if (needed  >  (vector -> cap) )
    { /* block234 */
      { /* let236 */
        const size_t cap  = arraySize_vector_char (needed );
        // ----------
        (vector -> arr) = realloc ((vector -> arr), (cap  *  sizeof(char) ));
        (vector -> cap) = cap ;
      }
    }
}
size_t push_vector_char (vector_char * restrict vector , char item ) {
  grow_vector_char (vector , ((vector -> len) +  1 ));
  (vector -> arr)[(vector -> len)] = item ;
  (vector -> len) = ((vector -> len) +  1 );
  return (vector -> len);
}
size_t append_vector_char (vector_char * restrict vector , const char * items , size_t count ) {
  grow_vector_char (vector , ((vector -> len) +  count  ));
  memcpy (((vector -> arr) +  (vector -> len) ), items , (count  *  sizeof(char) ));
  (vector -> len) = ((vector -> len) +  count  );
  return (vector -> len);
}
__attribute__((weak)) void free_string (string * restrict str ) {
  free_vector_char (str );
}
__attribute__((weak)) void free_string_pointer (string ** str ) {
  free_vector_char ((*str ));
}
string new_string (const char * buf ) {
  if ((buf  ==  NULL  ) ||  ((*buf ) ==  '\0' ) )
    { /* block260 */
      return ((string){ NULL , 0, 0});
    }
  return ({ /* letn262 */
      const size_t len  = strlen (buf );
      const size_t cap  = arraySize_vector_char ((len  +  1 ));
      char * restrict arr  = malloc (cap );
      // ----------
      memcpy (arr , buf , len );
      arr [len ] = '\0';
      ((string){ arr , cap , len });
    });
}
size_t append_string (string * restrict lhs , string * restrict rhs ) {
  if ((rhs -> len))
    { /* block272 */
      append_vector_char (lhs , (rhs -> arr), (rhs -> len));
      (lhs -> arr)[(lhs -> len)] = '\0';
    }
  return (lhs -> len);
}
size_t show_string (FILE * file , string * restrict str ) {
  if ((str -> len) ==  0 )
    { /* block280 */
      return 0;
    }
  return fwrite ((str -> arr), sizeof(char), (str -> len), file );
}
const char * c_str_string (string * restrict str ) {
  if ((str -> arr) ==  NULL  )
    { /* block287 */
      return "";
    }
  grow_vector_char (str , ((str -> len) +  1 ));
  (str -> arr)[(str -> len)] = '\0';
  return (str -> arr);
}
static int bad  = 0;
int check (const char * what , long got , long want ) {
  if (got  ==  want  )
    { /* block293 */
      printf ("ok   %-38s %ld\n", what , got );
      return 0;
    }
  else
    { /* block296 */
      printf ("FAIL %-38s got %ld want %ld\n", what , got , want );
      return 1;
    }
}
int check_str (const char * what , const char * got , const char * want ) {
  if (strcmp (got , want ) ==  0 )
    { /* block301 */
      printf ("ok   %-38s \"%s\"\n", what , got );
      return 0;
    }
  else
    { /* block304 */
      printf ("FAIL %-38s got \"%s\" want \"%s\"\n", what , got , want );
      return 1;
    }
}
int main () {
  ({ /* letn309 */
    string s  __attribute__((__cleanup__(free_string ))) = new_string ("hello");
    // ----------
    bad  += check ("len counts characters, not the NUL", ((long)len_vector_char ((&s ))), 5) ;
    bad  += check_str ("c_str is NUL terminated", c_str_string ((&s )), "hello") ;
    bad  += check ("a NUL sits at index len", ((long)(s . arr)[5]), 0) ;
    ({ /* letn315 */
      string t  __attribute__((__cleanup__(free_string ))) = new_string (", world");
      // ----------
      append_string ((&s ), (&t ));
      bad  += check ("append adds the right count", ((long)len_vector_char ((&s ))), 12) ;
      bad  += check_str ("and re-terminates", c_str_string ((&s )), "hello, world") ;
    });
  });
  ({ /* letn321 */
    string v  __attribute__((__cleanup__(free_string ))) = new_string ("abc");
    // ----------
    bad  += check ("nth_vector reads a character", ((long)({ /* letn328 */
          Maybe_ref_char matchn327  = nth_vector_char (1, (&v ));
          // ----------
          ((((matchn327 . ctor) ==  JUST_CTOR  )) ? ({ /* letn330 */
              char * restrict c  = (((matchn327 . data). just). value);
              // ----------
              ((long)(*c ));
            }) : ({ /* progn332 */
              -1;
            }));
        })), ((long)'b')) ;
    push_vector_char ((&v ), 'd');
    bad  += check ("push_vector extends a string", ((long)len_vector_char ((&v ))), 4) ;
    bad  += check_str ("c_str terminates after a raw push", c_str_string ((&v )), "abcd") ;
  });
  ({ /* letn339 */
    string e  __attribute__((__cleanup__(free_string ))) = new_string ("");
    // ----------
    bad  += check ("the empty string allocates nothing", ((long)((e . arr) ==  NULL  )), 1) ;
    bad  += check_str ("and c_str still answers", c_str_string ((&e )), "") ;
  });
  if (bad  ==  0 )
    printf ("string: all ok\n");
  else
    printf ("string: %d FAILED\n", bad );
  return bad ;
}
