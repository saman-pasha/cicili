#include <torch/torch.h>
#include <cstdio>
int bad  = 0;
void check (const char * what , long got , long want ) {
  if (got  ==  want  )
    printf ("ok   %-32s %ld\n", what , got );
  else
    { /* block206 */
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
  torch::manual_seed (1);
  ({ /* letn213 */
    torch::Tensor t  = torch::zeros ({ 2 , 3 } );
    // ----------
    check ("dim", ((long)(t . dim)()), 2);
    check ("numel", ((long)(t . numel)()), 6);
    check ("size 0", ((long)(t . size)(0)), 2);
    check ("size 1", ((long)(t . size)(1)), 3);
  });
  ({ /* letn219 */
    torch::Tensor o  = torch::ones ({ 1 } );
    // ----------
    check ("item<float>", ((long)(o . item<float>)()), 1);
    check ("item<double>", ((long)(o . item<double>)()), 1);
    check ("item<int64_t>", ((long)(o . item<int64_t>)()), 1);
  });
  ({ /* letn225 */
    torch::Tensor a  = torch::ones ({ 4 } );
    // ----------
    ({ /* letn231 */
      torch::Tensor s  = ((a . add)(a ). sum)();
      // ----------
      check ("add then sum", ((long)(s . item<float>)()), 8);
    });
  });
  ({ /* letn234 */
    torch::Tensor a  = torch::full ({ 3 } , ((torch::Scalar)2.0));
    // ----------
    ({ /* letn240 */
      torch::Tensor m  = (a . mean)();
      // ----------
      check ("mean", ((long)(m . item<float>)()), 2);
    });
  });
  ({ /* letn243 */
    torch::Tensor z  = torch::zeros ({ 3 } );
    // ----------
    ({ /* letn249 */
      torch::Tensor r  = torch::relu (z );
      // ----------
      check ("relu numel", ((long)(r . numel)()), 3);
    });
  });
  ({ /* letn252 */
    Net net  = Net (4, 2);
    // ----------
    ({ /* letn255 */
      torch::Tensor x  = torch::ones ({ 4 } );
      // ----------
      ({ /* letn261 */
        torch::Tensor y  = (net . forward)(x );
        // ----------
        check ("forward numel", ((long)(y . numel)()), 2);
      });
    });
    (net . eval)();
    check ("inherited is_training", ((long)(((net . is_training)()) ? 1 : 0)), 0);
  });
  ({ /* letn264 */
    torch::Tensor w  = torch::ones ({ 1 } );
    // ----------
    (w . requires_grad_)(true );
    ({ /* letn270 */
      torch::Tensor y  = (w . mul)(w );
      // ----------
      (y . backward)();
      check ("grad", ((long)((w . grad)(). item<float>)()), 2);
    });
  });
  ({ /* letn273 */
    torch::NoGradGuard g  = torch::NoGradGuard ();
    // ----------
    ({ /* letn276 */
      torch::Tensor t  = torch::ones ({ 2 } );
      // ----------
      check ("inside no_grad requires_grad", ((long)(((t . requires_grad)()) ? 1 : 0)), 0);
    });
  });
  if (bad  ==  0 )
    printf ("torch (real libtorch): all ok\n");
  else
    printf ("torch (real libtorch): %d FAILED\n", bad );
  return bad ;
}
