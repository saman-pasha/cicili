#include "torch_stub.hpp"
#include <cstdio>
#include <memory>
#include "../../example/classifier.hpp"
#include "../../example/classifier.cpp"
int bad  = 0;
void check (const char * what , long got , long want ) {
  if (got  ==  want  )
    printf ("ok   %-38s %ld\n", what , got );
  else
    { /* block117 */
      printf ("FAIL %-38s got %ld want %ld\n", what , got , want );
      (++bad );
    }
}
void check_true (const char * what , int cond ) {
  if (cond )
    printf ("ok   %-38s\n", what );
  else
    { /* block123 */
      printf ("FAIL %-38s\n", what );
      (++bad );
    }
}
void fill (float * px , long n , long seed ) {
  for (long i  = 0; (i  <  n  ); (++i )) {
      px [i ] = ((float)(((double)(((i  *  7 ) +  seed  ) %  256 )) /  255.0 ));
  }
}
int main () {
  { /* let131 */
    float px [784];
    float qx [784];
    // ----------
    check ("net_inputs", net_inputs (), 784);
    ({ /* letn134 */
      std::shared_ptr<Classifier> net  = net_load ("");
      // ----------
      check_true ("net_load answers a handle", ((net . get)() !=  NULL  ));
      check_true ("the handle owns one net", ((net . use_count)() ==  1 ));
      fill (px , 784, 0);
      fill (qx , 784, 137);
      ({ /* letn137 */
        long a  = net_predict (net , px , 784);
        // ----------
        check_true ("a class in range", ((a  >=  0 ) &&  (a  <  10 ) ));
        check ("the same input twice agrees", net_predict (net , px , 784), a );
        ({ /* letn140 */
          long b  = net_predict (net , qx , 784);
          // ----------
          check_true ("a different input can differ", (a  !=  b  ));
        });
      });
      check ("a short buffer is refused", net_predict (net , px , 783), -1);
      check ("a long buffer is refused", net_predict (net , px , 785), -1);
    });
    if (bad  ==  0 )
      printf ("\ntorch-fragment: all checks passed\n");
    else
      printf ("\ntorch-fragment: %d check(s) failed\n", bad );
    return bad ;
  }
}
