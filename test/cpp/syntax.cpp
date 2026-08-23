#include <cstdio>
#include <string>
#include <vector>
#include <stdexcept>
int bad  = 0;
void check (const char * what , long got , long want ) {
  if (got  ==  want  )
    printf ("ok   %-30s %ld\n", what , got );
  else
    { /* block109 */
      printf ("FAIL %-30s got %ld want %ld\n", what , got , want );
      (++bad );
    }
}
namespace geom {
int point_count  = 0;
struct Point {
  int x ;
  int y ;
  Point (int a , int b ) : x(a ), y(b ) {
  }
  int sum () const {
    return ((this -> x) +  (this -> y) );
  }
};
}
template < typename T > 
T biggest (const T & a , const T & b ) {
  return (((a  <  b  )) ? b  : a );
}
void bump (int & n ) {
  n  = (n  +  1 );
}
int lengthOf (const std::string & s ) {
  return ((int)(s . size)());
}
int risky (int n ) {
  if (n  <  0 )
    { /* block124 */
      throw 
      (n  *  10 );
    }
  return (n  *  2 );
}
int main () {
  ({ /* letn132 */
    geom::Point p  = geom::Point (3, 4);
    // ----------
    check ("namespaced method", ((long)(p . sum)()), 7);
  });
  geom::point_count  = 5;
  check ("module var unmangled", ((long)geom::point_count ), 5);
  check ("template int", ((long)biggest (3, 9)), 9);
  check ("template double", ((long)biggest<double> (2.5, 1.5)), 2);
  { /* let134 */
    int n  = 41;
    // ----------
    bump (n );
    check ("& wrote through", ((long)n ), 42);
  }
  ({ /* letn137 */
    std::string s  = std::string ("abcde");
    // ----------
    check ("const & no copy", ((long)lengthOf (s )), 5);
  });
  { /* let139 */
    geom::Point * q  = new geom::Point ( 10 , 20 ) ;
    // ----------
    check ("new* then method", ((long)(q -> sum)()), 30);
    delete 
    q ;
  }
  check ("static_cast", ((long)static_cast<int>(3.9)), 3);
  { /* let147 */
    int v  = 7;
    // ----------
    { /* let149 */
      int * pv  = (&v );
      // ----------
      check ("unary operand survives", ((long)static_cast<long>((*pv ))), 7);
    }
  }
  { /* let151 */
    geom::Point * q2  = new geom::Point ( 1 , 2 ) ;
    // ----------
    { /* let156 */
      const geom::Point * cq  = q2 ;
      // ----------
      check ("cast result has a type", ((long)(const_cast<geom::Point *>(cq )-> sum)()), 3);
    }
    delete 
    q2 ;
  }
  ({ /* letn162 */
    std::vector<int> v  = std::vector<int> ();
    // ----------
    (v . push_back)(7);
    (v . push_back)(8);
    check ("vector size", ((long)(v . size)()), 2);
    check ("vector back", ((long)(v . back)()), 8);
  });
  check ("no throw", ((long)risky (21)), 42);
  { /* let164 */
    int caught  = 0;
    // ----------
    try {
        { /* block168 */
          { /* let170 */
            int r  = risky (-1);
            // ----------
            ((void)r );
          }
        }
      } catch (int e ) {
        caught  = e ;
      }

    check ("caught the value", ((long)caught ), -10);
  }
  { /* let174 */
    int any  = 0;
    // ----------
    try {
        { /* block178 */
          throw 
          1;
        }
      } catch (...) {
        any  = 1;
      }

    check ("catch all", ((long)any ), 1);
  }
  if (bad  ==  0 )
    printf ("cpp syntax: all ok\n");
  else
    printf ("cpp syntax: %d FAILED\n", bad );
  return bad ;
}
