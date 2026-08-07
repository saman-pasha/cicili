#include <cstdio>
int bad  = 0;
void check (const char * what , long got , long want ) {
  if (got  ==  want  )
    printf ("ok   %-40s %ld\n", what , got );
  else
    { /* block106 */
      printf ("FAIL %-40s got %ld want %ld\n", what , got , want );
      (++bad );
    }
}
struct Box {
  int seed ;
  Box (int s ) : seed(s ) {
  }
  int value () {
    return (this -> seed);
  }
  int value (int k ) {
    return ((this -> seed) *  k  );
  }
  double value (double k ) {
    return (((double)(this -> seed)) *  k  );
  }
  int value_of (int k ) {
    return ((this -> seed) +  k  );
  }
};
int main () {
  { /* let115 */
    Box b  = Box (10);
    // ----------
    check ("the no-argument form", ((long)(b . value)()), 10);
    check ("the int form", ((long)(b . value)(3)), 30);
    check ("a different return type", ((long)(b . value)(2.5)), 25);
    check ("a name that merely shares a prefix", ((long)(b . value_of)(5)), 15);
    { /* let117 */
      Box * p  = (&b );
      // ----------
      check ("the same overload through ->", ((long)(p -> value)(3)), 30);
    }
    ({ /* letn120 */
      double v  = (b . value)(0.25);
      // ----------
      check ("inferred through letin*", ((long)(v  *  4.0 )), 10);
    });
  }
  if (bad  ==  0 )
    printf ("\noverload: all checks passed\n");
  else
    printf ("\noverload: %d check(s) failed\n", bad );
  return bad ;
}
