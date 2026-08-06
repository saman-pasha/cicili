struct Classifier ;
std::shared_ptr<Classifier> net_load (const char * path );
long net_predict (const std::shared_ptr<Classifier> & n , const float * pixels , long count );
long net_score (const std::shared_ptr<Classifier> & n , const float * pixels , long count );
long net_inputs ();
