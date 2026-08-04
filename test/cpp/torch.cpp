#include "torch_stub.hpp"
#include <cstdio>
int bad  = 0;
void check (const char * what , long got , long want ) {
  if (got  ==  want  )
    printf ("ok   %-32s %ld\n", what , got );
  else
    { /* block215 */
      printf ("FAIL %-32s got %ld want %ld\n", what , got , want );
      (++bad );
    }
}
struct Net : public torch::nn::Module {
  torch::nn::Linear fc ;
  Net (int64_t in , int64_t out ) : fc(torch::nn::Linear (in , out )) {
  }
  torch::Tensor forward (const torch::Tensor & x ) {
    return torch::relu (((this -> fc)-> forward)(x ));
  }
};
int main () {
  ({ /* letn222 */
    torch::Tensor t  = torch::zeros ({ 2 , 3 } );
    // ----------
    check ("dim", ((long)(t . dim)()), 2);
    check ("numel", ((long)(t . numel)()), 6);
    check ("size 0", ((long)(t . size)(0)), 2);
    check ("size 1", ((long)(t . size)(1)), 3);
  });
  ({ /* letn228 */
    torch::Tensor a  = torch::ones ({ 4 } );
    // ----------
    ({ /* letn234 */
      torch::Tensor b  = (a . add)(a );
      // ----------
      check ("add then sum", ((long)((b . sum)(). item<float>)()), 8);
    });
  });
  ({ /* letn237 */
    torch::Tensor z  = torch::zeros ({ 3 } );
    // ----------
    ({ /* letn243 */
      torch::Tensor r  = torch::relu (z );
      // ----------
      check ("relu numel", ((long)(r . numel)()), 3);
    });
  });
  ({ /* letn246 */
    Net net  = Net (4, 2);
    // ----------
    ({ /* letn249 */
      torch::Tensor x  = torch::ones ({ 4 } );
      // ----------
      ({ /* letn255 */
        torch::Tensor y  = (net . forward)(x );
        // ----------
        check ("forward numel", ((long)(y . numel)()), 2);
      });
    });
    (net . eval)();
    check ("inherited is_training", ((long)(((net . is_training)()) ? 1 : 0)), 0);
  });
  ({ /* letn258 */
    torch::NoGradGuard g  = torch::NoGradGuard ();
    // ----------
    ({ /* letn261 */
      torch::Tensor t  = torch::ones ({ 2 } );
      // ----------
      check ("inside no_grad", ((long)(t . numel)()), 2);
    });
  });
  if (bad  ==  0 )
    printf ("torch bindings: all ok\n");
  else
    printf ("torch bindings: %d FAILED\n", bad );
  return bad ;
}
