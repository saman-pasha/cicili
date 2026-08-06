struct Classifier : public torch::nn::Module {
  torch::nn::Linear layer1 ;
  torch::nn::Linear layer2 ;
  torch::nn::Linear layer3 ;
  Classifier () : layer1((this -> register_module)("layer1", torch::nn::Linear (784, 256))), layer2((this -> register_module)("layer2", torch::nn::Linear (256, 128))), layer3((this -> register_module)("layer3", torch::nn::Linear (128, 10))) {
  }
  torch::Tensor forward (const torch::Tensor & x ) {
    ({ /* letn229 */
      torch::Tensor h1  = torch::relu (((this -> layer1)-> forward)(x ));
      torch::Tensor h2  = torch::relu (((this -> layer2)-> forward)(h1 ));
      // ----------
      return torch::log_softmax (((this -> layer3)-> forward)(h2 ), 1);
    });
  }
};
long net_inputs () {
  return 784;
}
std::shared_ptr<Classifier> net_load (const char * path ) {
  ({ /* letn234 */
    std::shared_ptr<Classifier> net  = std::shared_ptr<Classifier> (new Classifier () );
    // ----------
    if (path  &&  (path [0] !=  '\0' ) )
      { /* block241 */
        torch::load (net , path );
      }
    ((*(net . get)()). eval)();
    return net ;
  });
}
long net_predict (const std::shared_ptr<Classifier> & n , const float * pixels , long count ) {
  if (count  !=  net_inputs () )
    { /* block247 */
      return -1;
    }
  ({ /* letn250 */
    torch::NoGradGuard guard  = torch::NoGradGuard ();
    // ----------
    ({ /* letn253 */
      torch::Tensor x  = torch::from_blob (((void *)pixels ), { 1 , 784 } , (torch::TensorOptions (). dtype)(torch::kFloat32 ));
      // ----------
      ({ /* letn259 */
        auto y  = ((*(n . get)()). forward)(x );
        // ----------
        return ((long)((y . argmax)(1). item<int64_t>)());
      });
    });
  });
}
long net_score (const std::shared_ptr<Classifier> & n , const float * pixels , long count ) {
  if (count  !=  net_inputs () )
    { /* block265 */
      return 0;
    }
  ({ /* letn268 */
    torch::NoGradGuard guard  = torch::NoGradGuard ();
    // ----------
    ({ /* letn271 */
      torch::Tensor x  = torch::from_blob (((void *)pixels ), { 1 , 784 } , (torch::TensorOptions (). dtype)(torch::kFloat32 ));
      // ----------
      ({ /* letn277 */
        auto y  = ((*(n . get)()). forward)(x );
        // ----------
        return ((long)(((double)((y . max)(). item<float>)()) *  1000000.0 ));
      });
    });
  });
}
