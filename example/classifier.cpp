struct Classifier : public torch::nn::Module {
  torch::nn::Linear layer1 ;
  torch::nn::Linear layer2 ;
  torch::nn::Linear layer3 ;
  Classifier () : layer1((this -> register_module)("layer1", torch::nn::Linear (784, 256))), layer2((this -> register_module)("layer2", torch::nn::Linear (256, 128))), layer3((this -> register_module)("layer3", torch::nn::Linear (128, 10))) {
  }
  torch::Tensor forward (const torch::Tensor & x ) {
    ({ /* letn233 */
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
  ({ /* letn238 */
    std::shared_ptr<Classifier> net  = std::shared_ptr<Classifier> (new Classifier () );
    // ----------
    if (path  &&  (path [0] !=  '\0' ) )
      { /* block245 */
        torch::load (net , path );
      }
    ((*(net . get)()). eval)();
    return net ;
  });
}
long net_predict (const std::shared_ptr<Classifier> & n , const float * pixels , long count ) {
  if (count  !=  net_inputs () )
    { /* block251 */
      return -1;
    }
  ({ /* letn254 */
    torch::NoGradGuard guard  = torch::NoGradGuard ();
    // ----------
    ({ /* letn257 */
      torch::Tensor x  = torch::from_blob (((void *)pixels ), { 1 , 784 } , (torch::TensorOptions (). dtype)(torch::kFloat32 ));
      // ----------
      ({ /* letn263 */
        auto y  = ((*(n . get)()). forward)(x );
        // ----------
        return ((long)((y . argmax)(1). item<int64_t>)());
      });
    });
  });
}
long net_predict_idx (const std::shared_ptr<Classifier> & n , const char * images , long index ) {
  { /* let266 */
    FILE * f  = fopen (images , "rb");
    // ----------
    if (!f )
      { /* block271 */
        return -1;
      }
    if (fseek (f , (16 +  (index  *  784 ) ), SEEK_SET ) !=  0 )
      { /* block276 */
        { /* block278 */
          fclose (f );
          return -1;
        }
      }
    { /* let280 */
      unsigned char raw [784];
      float px [784];
      // ----------
      if (fread (raw , 1, 784, f ) !=  784 )
        { /* block285 */
          { /* block287 */
            fclose (f );
            return -1;
          }
        }
      fclose (f );
      for (long i  = 0; (i  <  784 ); (++i )) {
          px [i ] = ((float)(((((double)raw [i ]) /  255.0 ) -  0.1307 ) /  0.3081 ));
      }
      return net_predict (n , px , 784);
    }
  }
}
const char * mnist_dir () {
  { /* let293 */
    const char * d  = getenv ("MNIST_DIR");
    // ----------
    return ((d ) ? d  : "");
  }
}
long idx_label (const char * labels , long index ) {
  { /* let296 */
    FILE * f  = fopen (labels , "rb");
    // ----------
    if (!f )
      { /* block301 */
        return -1;
      }
    if (fseek (f , (8 +  index  ), SEEK_SET ) !=  0 )
      { /* block306 */
        { /* block308 */
          fclose (f );
          return -1;
        }
      }
    { /* let310 */
      unsigned char b  = 0;
      // ----------
      if (fread ((&b ), 1, 1, f ) !=  1 )
        { /* block315 */
          { /* block317 */
            fclose (f );
            return -1;
          }
        }
      fclose (f );
      return ((long)b );
    }
  }
}
long net_score (const std::shared_ptr<Classifier> & n , const float * pixels , long count ) {
  if (count  !=  net_inputs () )
    { /* block323 */
      return 0;
    }
  ({ /* letn326 */
    torch::NoGradGuard guard  = torch::NoGradGuard ();
    // ----------
    ({ /* letn329 */
      torch::Tensor x  = torch::from_blob (((void *)pixels ), { 1 , 784 } , (torch::TensorOptions (). dtype)(torch::kFloat32 ));
      // ----------
      ({ /* letn335 */
        auto y  = ((*(n . get)()). forward)(x );
        // ----------
        return ((long)(((double)((y . max)(). item<float>)()) *  1000000.0 ));
      });
    });
  });
}
