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
namespace geom 
{ /* block114 */
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
using namespace geom ; 
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
    { /* block131 */
      throw 
      n ;
    }
  return (n  *  2 );
}
int main () {
  ({ /* letn139 */
    Point p  = Point (3, 4);
    // ----------
    check ("namespaced method", ((long)(p . sum)()), 7);
  });
  check ("template int", ((long)biggest (3, 9)), 9);
  check ("template double", ((long)biggest < double > (2.5, 1.5)), 2);
  { /* let144 */
    int n  = 41;
    // ----------
    bump (n );
    check ("& wrote through", ((long)n ), 42);
  }
  ({ /* letn147 */
    std::string s  = std::string ("abcde");
    // ----------
    check ("const & no copy", ((long)lengthOf (s )), 5);
  });
  { /* let149 */
    Point * q  = new Point ( 10 , 20 ) ;
    // ----------
    check ("new* then method", ((long)(q -> sum)()), 30);
    delete 
    q ;
  }
  check ("static_cast", ((long)static_cast < int > ( 3.9 ) ), 3);
  { /* let159 */
    Point * q2  = new Point ( 1 , 2 ) ;
    // ----------
    { /* let164 */
      const Point * cq  = q2 ;
      // ----------
      { /* let166 */
        Point * mq  = const_cast < Point * > ( cq ) ;
        // ----------
        check ("const_cast", ((long)(mq -> sum)()), 3);
      }
    }
    delete 
    q2 ;
  }
  ({ /* letn175 */
    auto v  = std::vector < int > ();
    // ----------
    (v . push_back)(7);
    (v . push_back)(8);
    check ("vector size", ((long)(v . size)()), 2);
    check ("vector back", ((long)(v . back)()), 8);
  });
  check ("no throw", ((long)risky (21)), 42);
  { /* let180 */
    int caught  = 0;
    // ----------
    try 
    { /* block185 */
      { /* let187 */
        int r  = risky (-1);
        // ----------
        ((void)r );
      }
    }
    catch ( int e ) 
    { /* block190 */
      caught  = 1;
    }
    check ("caught", ((long)caught ), 1);
  }
  if (bad  ==  0 )
    printf ("cpp syntax: all ok\n");
  else
    printf ("cpp syntax: %d FAILED\n", bad );
  return bad ;
}
