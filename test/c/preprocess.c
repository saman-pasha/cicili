#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <limits.h>
#include <stddef.h>
#include <stdbool.h>
#define MAX_AMOUNT 1000 
#define SQUARE(x) ((x) * (x)) 
#define GREETING_INITIAL 'h' 
#define FEATURE_ON 1 
#ifdef FEATURE_ON 
#define FEATURE_VALUE 10 
#else 
#define FEATURE_VALUE 99 
#endif 
#ifndef NOT_DEFINED_ANYWHERE 
#define FALLBACK_VALUE 20 
#endif 
#if MAX_AMOUNT > 500 
#define SIZE_CLASS 2 
#elif MAX_AMOUNT > 100 
#define SIZE_CLASS 1 
#endif 
#define TEMPORARY 1 
#undef TEMPORARY 
#ifdef TEMPORARY 
#define TEMP_STATE 1 
#else 
#define TEMP_STATE 0 
#endif 
int c_max_amount (void) { return MAX_AMOUNT; } ;
int c_square (int n) { return SQUARE(n); } ;
int c_greeting_initial (void) { return GREETING_INITIAL; } ;
int c_feature_value (void) { return FEATURE_VALUE; } ;
int c_fallback_value (void) { return FALLBACK_VALUE; } ;
int c_size_class (void) { return SIZE_CLASS; } ;
int c_temp_state (void) { return TEMP_STATE; } ;
int c_max_amount ();
int c_square (int n );
int c_greeting_initial ();
int c_feature_value ();
int c_fallback_value ();
int c_size_class ();
int c_temp_state ();
int check (const char * what , long long got , long long want ) {
  if (got  ==  want  )
    { /* block162 */
      printf ("ok   %-30s %lld\n", what , got );
      return 0;
    }
  else
    { /* block165 */
      printf ("FAIL %-30s got %lld want %lld\n", what , got , want );
      return 1;
    }
  return 1;
}
int main () {
  { /* let169 */
    int bad  = 0;
    // ----------
    bad  += check ("@define object-like", c_max_amount (), 1000) ;
    bad  += check ("@define function-like", c_square (7), 49) ;
    bad  += check ("@define char literal", c_greeting_initial (), 104) ;
    bad  += check ("@ifdef takes then arm", c_feature_value (), 10) ;
    bad  += check ("@ifndef taken", c_fallback_value (), 20) ;
    bad  += check ("@if first arm", c_size_class (), 2) ;
    bad  += check ("@undef then @ifdef", c_temp_state (), 0) ;
    bad  += check ("limits.h CHAR_BIT", CHAR_BIT , 8) ;
    bad  += check ("INT_MAX is positive", (((INT_MAX  >  0 )) ? 1 : 0), 1) ;
    bad  += check ("EOF is negative", (((EOF  <  0 )) ? 1 : 0), 1) ;
    if (bad  ==  0 )
      printf ("preprocess: all ok\n");
    else
      printf ("preprocess: %d FAILED\n", bad );
    return bad ;
  }
}
