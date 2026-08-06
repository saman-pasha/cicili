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
    { /* block118 */
      printf ("FAIL %-38s got %ld want %ld\n", what , got , want );
      (++bad );
    }
}
void check_true (const char * what , int cond ) {
  if (cond )
    printf ("ok   %-38s\n", what );
  else
    { /* block124 */
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
  { /* let132 */
    float px [784];
    float qx [784];
    // ----------
    check ("net_inputs", net_inputs (), 784);
    ({ /* letn135 */
      std::shared_ptr<Classifier> net  = net_load ("");
      // ----------
      check_true ("net_load answers a handle", ((net . get)() !=  NULL  ));
      check_true ("the handle owns one net", ((net . use_count)() ==  1 ));
      fill (px , 784, 0);
      fill (qx , 784, 137);
      ({ /* letn138 */
        long a  = net_predict (net , px , 784);
        // ----------
        check_true ("a class in range", ((a  >=  0 ) &&  (a  <  10 ) ));
        check ("the same input twice agrees", net_predict (net , px , 784), a );
        ({ /* letn141 */
          long b  = net_predict (net , qx , 784);
          // ----------
          check_true ("a class in range, second input", ((b  >=  0 ) &&  (b  <  10 ) ));
        });
      });
      ({ /* letn144 */
        long sa  = net_score (net , px , 784);
        // ----------
        check ("the same input scores the same", net_score (net , px , 784), sa );
        ({ /* letn147 */
          long sb  = net_score (net , qx , 784);
          // ----------
          check_true ("a different input scores differently", (sa  !=  sb  ));
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
