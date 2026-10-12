#include <cstdio>
#include <vector>
int bad  = 0;
void closefile (FILE ** f ) {
  if (*f )
    { /* block107 */
      fclose ((*f ));
    }
}
void check (const char * what , long got , long want ) {
  if (got  ==  want  )
    printf ("ok   %-30s %ld\n", what , got );
  else
    { /* block113 */
      printf ("FAIL %-30s got %ld want %ld\n", what , got , want );
      (++bad );
    }
}
int alive  = 0;
struct Shape {
  double w ;
  double h ;
  Shape (double w0 , double h0 ) : w(w0 ), h(h0 ) {
  }
  virtual double area () const {
    return ((this -> w) *  (this -> h) );
  }
  virtual void scale (double by ) {
    (this -> w) = ((this -> w) *  by  );
    (this -> h) = ((this -> h) *  by  );
  }
};
struct Square : public Shape {
  Square (double side ) : Shape(side , side ) {
  }
  double area () const override {
    return ((this -> w) *  (this -> h) );
  }
  double side () {
    return (this -> w);
  }
};
struct Counted {
  int id ;
  Counted (int n ) : id(n ) {
    (++alive );
  }
  ~Counted () {
    (--alive );
  }
};
struct Link {
  int v ;
  struct Link * next ;
  Link * follow () {
    return (this -> next);
  }
  Link self_copy () {
    return (*this );
  }
  int plus (int k ) {
    return ((this -> v) +  k  );
  }
};
#define ivec_t std::vector<int> 
int twice (int n ) {
  return (2 *  n  );
}
int first_twice (const ivec_t & w ) {
  return twice ((w . at)(0));
}
int main () {
  ({ /* letn133 */
    Square sq  = Square (3.0);
    // ----------
    check ("square area", ((long)(sq . area)()), 9);
    check ("square side", ((long)(sq . side)()), 3);
    (sq . scale)(2.0);
    check ("after scale", ((long)(sq . area)()), 36);
  });
  ({ /* letn136 */
    Square sq  = Square (4.0);
    // ----------
    { /* let138 */
      Shape * s  = (&sq );
      // ----------
      check ("through base ptr", ((long)(s -> area)()), 16);
    }
  });
  check ("alive before", alive , 0);
  { /* block140 */
    ({ /* letn143 */
      Counted c  = Counted (7);
      // ----------
      check ("alive inside", alive , 1);
      check ("counted id", ((long)(c . id)), 7);
    });
  }
  check ("alive after", alive , 0);
  ({ /* letn146 */
    FILE * f  __attribute__((__cleanup__(closefile ))) = fopen ("/dev/null", "w");
    // ----------
    check ("opened", ((long)(f  !=  NULL  )), 1);
  });
  { /* let148 */
    Link l2  = { 22, NULL };
    Link l1  = { 11, NULL };
    // ----------
    (l1 . next) = (&l2 );
    check ("-> on a method call", ((long)((l1 . follow)()-> v)), 22);
    check ("calling through it", ((long)((l1 . follow)()-> plus)(1)), 23);
    check ("=> on a method call", ((long)((l1 . self_copy)(). plus (5))), 16);
  }
  { /* let150 */
    ivec_t w  = { 21};
    // ----------
    check ("unseen type's method", ((long)first_twice (w )), 42);
  }
  if (bad  ==  0 )
    printf ("cpp objects: all ok\n");
  else
    printf ("cpp objects: %d FAILED\n", bad );
  return bad ;
}
