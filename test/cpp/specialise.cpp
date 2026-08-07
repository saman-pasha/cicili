#include <cstdio>
int bad  = 0;
void check (const char * what , long got , long want ) {
  if (got  ==  want  )
    printf ("ok   %-42s %ld\n", what , got );
  else
    { /* block106 */
      printf ("FAIL %-42s got %ld want %ld\n", what , got , want );
      (++bad );
    }
}
struct Box {
  int seed ;
  Box (int s ) : seed(s ) {
  }
  int scaled_int (int k ) {
    return ((this -> seed) *  k  );
  }
  double scaled_double (double k ) {
    return (((double)(this -> seed)) *  k  );
  }
  int plain () {
    return (this -> seed);
  }
};
int main () {
  { /* let116 */
    Box b  = Box (10);
    // ----------
    check ("a <> method through $", ((long)(b . scaled_int)(3)), 30);
    check ("an ordinary name still works", ((long)(b . plain)()), 10);
    { /* let119 */
      Box * p  = (&b );
      // ----------
      check ("and through ->", ((long)(p -> scaled_int)(4)), 40);
    }
    { /* let122 */
      int i  = 3;
      double d  = 0.25;
      // ----------
      check ("the macro picked the int one", ((long)(b . scaled_int)(i )), 30);
      ({ /* letn127 */
        double v  = (b . scaled_double)(d );
        // ----------
        check ("and the double one, with its own type", ((long)(v  *  4.0 )), 10);
      });
    }
  }
  if (bad  ==  0 )
    printf ("\nspecialise: all checks passed\n");
  else
    printf ("\nspecialise: %d check(s) failed\n", bad );
  return bad ;
}
