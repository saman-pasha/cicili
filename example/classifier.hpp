struct Classifier ;
std::shared_ptr<Classifier> net_load (const char * path );
long net_predict (const std::shared_ptr<Classifier> & n , const float * pixels , long count );
long net_score (const std::shared_ptr<Classifier> & n , const float * pixels , long count );
long net_predict_idx (const std::shared_ptr<Classifier> & n , const char * images , long index );
long idx_label (const char * labels , long index );
const char * mnist_dir ();
long net_inputs ();
