struct Classifier : public torch::nn::Module {
  torch::nn::Linear layer1 ;
  torch::nn::Linear layer2 ;
  torch::nn::Linear layer3 ;
  Classifier () : layer1((this -> register_module)("layer1", torch::nn::Linear (784, 256))), layer2((this -> register_module)("layer2", torch::nn::Linear (256, 128))), layer3((this -> register_module)("layer3", torch::nn::Linear (128, 10))) {
  }
  torch::Tensor forward (const torch::Tensor & x ) {
    ({ /* letn232 */
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
  ({ /* letn237 */
    std::shared_ptr<Classifier> net  = std::shared_ptr<Classifier> (new Classifier () );
    // ----------
    if (path  &&  (path [0] !=  '\0' ) )
      { /* block244 */
        torch::load (net , path );
      }
    ((*(net . get)()). eval)();
    return net ;
  });
}
long net_predict (const std::shared_ptr<Classifier> & n , const float * pixels , long count ) {
  if (count  !=  net_inputs () )
    { /* block250 */
      return -1;
    }
  ({ /* letn253 */
    torch::NoGradGuard guard  = torch::NoGradGuard ();
    // ----------
    ({ /* letn256 */
      torch::Tensor x  = torch::from_blob (((void *)pixels ), { 1 , 784 } , (torch::TensorOptions (). dtype)(torch::kFloat32 ));
      // ----------
      ({ /* letn262 */
        auto y  = ((*(n . get)()). forward)(x );
        // ----------
        return ((long)((y . argmax)(1). item<int64_t>)());
      });
    });
  });
}
long net_predict_idx (const std::shared_ptr<Classifier> & n , const char * images , long index ) {
  { /* let265 */
    FILE * f  = fopen (images , "rb");
    // ----------
    if (!f )
      { /* block270 */
        return -1;
      }
    if (fseek (f , (16 +  (index  *  784 ) ), SEEK_SET ) !=  0 )
      { /* block275 */
        { /* block277 */
          fclose (f );
          return -1;
        }
      }
    { /* let279 */
      unsigned char raw [784];
      float px [784];
      // ----------
      if (fread (raw , 1, 784, f ) !=  784 )
        { /* block284 */
          { /* block286 */
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
  { /* let292 */
    const char * d  = getenv ("MNIST_DIR");
    // ----------
    return ((d ) ? d  : "");
  }
}
long idx_label (const char * labels , long index ) {
  { /* let295 */
    FILE * f  = fopen (labels , "rb");
    // ----------
    if (!f )
      { /* block300 */
        return -1;
      }
    if (fseek (f , (8 +  index  ), SEEK_SET ) !=  0 )
      { /* block305 */
        { /* block307 */
          fclose (f );
          return -1;
        }
      }
    { /* let309 */
      unsigned char b  = 0;
      // ----------
      if (fread ((&b ), 1, 1, f ) !=  1 )
        { /* block314 */
          { /* block316 */
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
    { /* block322 */
      return 0;
    }
  ({ /* letn325 */
    torch::NoGradGuard guard  = torch::NoGradGuard ();
    // ----------
    ({ /* letn328 */
      torch::Tensor x  = torch::from_blob (((void *)pixels ), { 1 , 784 } , (torch::TensorOptions (). dtype)(torch::kFloat32 ));
      // ----------
      ({ /* letn334 */
        auto y  = ((*(n . get)()). forward)(x );
        // ----------
        return ((long)(((double)((y . max)(). item<float>)()) *  1000000.0 ));
      });
    });
  });
}
