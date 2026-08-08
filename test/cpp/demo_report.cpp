#include <sstream> 
#include <string> 
template <typename T> static std::string parsi_str(const T& v) 
{ std::ostringstream o; o << v; return o.str(); } 
std::string demo_report_e1 () {
  return parsi_str( (20 +  22 ) ) ;
}
