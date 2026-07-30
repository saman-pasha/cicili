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
typedef struct box_int {
  int value ;
} box_int;
box_int make_box_int (int v );
int get_box_int (box_int * b );
box_int make_box_int (int v ) {
  return ((box_int){ v });
}
int get_box_int (box_int * b ) {
  return (b -> value);
}
typedef struct box_double {
  double value ;
} box_double;
box_double make_box_double (double v );
double get_box_double (box_double * b );
box_double make_box_double (double v ) {
  return ((box_double){ v });
}
double get_box_double (box_double * b ) {
  return (b -> value);
}
int main () {
  { /* let153 */
    int bad  = 0;
    // ----------
    bad  += check ("DEFMACRO expands", (2 *  21 ), 42) ;
    bad  += check ("DEFMACRO nests", (2 *  (2 *  10 ) ), 40) ;
    bad  += check ("$$$ spliced first", add_one_a (41), 42) ;
    bad  += check ("$$$ spliced second", add_two_a (40), 42) ;
    bad  += check ("symbol-name of a generic", strlen ("box_int"), 7) ;
    bad  += check ("imported macro", (84 /  2 ), 42) ;
    bad  += check ("imported macro nests", ((((200 /  2 ) <  0 )) ? 0 : ((((200 /  2 ) >  42 )) ? 42 : (200 /  2 ))), 42) ;
    bad  += check ("macrolet", (3 *  14 ), 42) ;
    { /* let165 */
      box_int bi  = make_box_int (42);
      // ----------
      bad  += check ("generic int box", get_box_int ((&bi )), 42) ;
    }
    { /* let170 */
      box_double bd  = make_box_double (2.5);
      // ----------
      bad  += check ("generic double box", ((int)(get_box_double ((&bd )) *  4 )), 10) ;
    }
    bad  += check ("generic name is box_int", sizeof(box_int ), 4) ;
    if (bad  ==  0 )
      printf ("macro: all ok\n");
    else
      printf ("macro: %d FAILED\n", bad );
    return bad ;
  }
}
