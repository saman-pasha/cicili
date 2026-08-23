#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int check (const char * what , long long got , long long want ) {
  if (got  ==  want  )
    { /* block104 */
      printf ("ok   %-32s %lld\n", what , got );
      return 0;
    }
  else
    { /* block107 */
      printf ("FAIL %-32s got %lld want %lld\n", what , got , want );
      return 1;
    }
  return 1;
}
int add_one_a (int n ) {
  return (n  +  1 );
}
int add_two_a (int n ) {
  return (n  +  2 );
}
int spliced_counter  = 41;
typedef struct crate_int {
  int value ;
} crate_int;
crate_int make_crate_int (int v );
int get_crate_int (crate_int * b );
crate_int make_crate_int (int v ) {
  return ((crate_int){ v });
}
int get_crate_int (crate_int * b ) {
  return (b -> value);
}
typedef struct crate_double {
  double value ;
} crate_double;
crate_double make_crate_double (double v );
double get_crate_double (crate_double * b );
crate_double make_crate_double (double v ) {
  return ((crate_double){ v });
}
double get_crate_double (crate_double * b ) {
  return (b -> value);
}
int main () {
  { /* let155 */
    int bad  = 0;
    // ----------
    bad  += check ("DEFMACRO expands", (2 *  21 ), 42) ;
    bad  += check ("DEFMACRO nests", (2 *  (2 *  10 ) ), 40) ;
    bad  += check ("$$$ spliced first", add_one_a (41), 42) ;
    bad  += check ("$$$ dotted var", (spliced_counter  +  1 ), 42) ;
    bad  += check ("$$$ spliced second", add_two_a (40), 42) ;
    bad  += check ("symbol-name of a generic", strlen ("crate_int"), 9) ;
    bad  += check ("imported macro", (84 /  2 ), 42) ;
    bad  += check ("imported macro nests", ((((200 /  2 ) <  0 )) ? 0 : ((((200 /  2 ) >  42 )) ? 42 : (200 /  2 ))), 42) ;
    bad  += check ("unprefixed import", (3 *  14 ), 42) ;
    bad  += check ("unprefixed CL-owned name", (3 *  14 ), 42) ;
    bad  += check ("macrolet", (3 *  14 ), 42) ;
    { /* let169 */
      crate_int bi  = make_crate_int (42);
      // ----------
      bad  += check ("generic int box", get_crate_int ((&bi )), 42) ;
    }
    { /* let174 */
      crate_double bd  = make_crate_double (2.5);
      // ----------
      bad  += check ("generic double box", ((int)(get_crate_double ((&bd )) *  4 )), 10) ;
    }
    bad  += check ("generic name is crate_int", sizeof(crate_int ), 4) ;
    if (bad  ==  0 )
      printf ("macro: all ok\n");
    else
      printf ("macro: %d FAILED\n", bad );
    return bad ;
  }
}
