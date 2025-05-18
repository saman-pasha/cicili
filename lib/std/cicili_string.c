#include <stdlib.h>
#include <string.h>
#include "cicili_string.h"
static struct __ciciliS_String_m_calcCap_ {
  size_t len;
  size_t size;
} __ciciliS_String_m_calcCap_;
static struct __ciciliS_String_m_calcCap_ String_s_calcCap (size_t xcap) {
  { /* cicili#Let102 */
    size_t len = ((((xcap  %  STRING_GROWTH_STEP  ) >  0 )) ? ((xcap  /  STRING_GROWTH_STEP  ) +  1 ) : (xcap  /  STRING_GROWTH_STEP  ));
    return ((struct __ciciliS_String_m_calcCap_){ len , (sizeof(string_elem_t) *  len  )});
  }
}
String * String_s_newEmpty (size_t xlen) {
  { /* cicili#Let105 */
    __auto_type ccap = String_s_calcCap(xlen );
    String * slc = malloc ((sizeof(String) +  (ccap . size ) ));
    (slc ->len ) = xlen ;
    (slc ->cap ) = (ccap . len );
    return slc ;
  }
}
String * String_s_newFromArray (const string_elem_t * xarr, size_t xlen) {
  { /* cicili#Let108 */
    String * slc = String_s_newEmpty(xlen );
    memcpy ((slc ->arr ), xarr , (sizeof(string_elem_t) *  xlen  ));
    return slc ;
  }
}
String * String_s_newCopy (const String * other) {
  { /* cicili#Let111 */
    String * slc = String_s_newEmpty((other ->len ));
    memcpy ((slc ->arr ), (other ->arr ), (sizeof(string_elem_t) *  (other ->len ) ));
    return slc ;
  }
}
String * String_m_clone (String * this) {
  return String_s_newCopy(this );
}
string_elem_t * String_m_cloneArray (String * this) {
  { /* cicili#Let115 */
    size_t xsize = (sizeof(string_elem_t) *  (this ->len ) );
    string_elem_t * xarr = malloc (xsize );
    memcpy (xarr , (this ->arr ), xsize );
    return xarr ;
  }
}
String * String_m_appendNew (String * this, const String * other) {
  { /* cicili#Let118 */
    size_t tlen = ((this ->len ) +  (other ->len ) );
    { /* cicili#Let120 */
      String * slc = String_s_newEmpty(tlen );
      memcpy ((slc ->arr ), (this ->arr ), (sizeof(string_elem_t) *  (this ->len ) ));
      memcpy (((slc ->arr ) +  (this ->len ) ), (other ->arr ), (sizeof(string_elem_t) *  (other ->len ) ));
      return slc ;
    }
  }
}
String * String_m_append (String * this, const String * other) {
  { /* cicili#Let123 */
    size_t tlen = ((this ->len ) +  (other ->len ) );
    if (tlen  <=  (this ->cap ) ) 
      { /* cicili#Block126 */
        memcpy (((this ->arr ) +  (this ->len ) ), (other ->arr ), (sizeof(string_elem_t) *  (other ->len ) ));
        return this ;
      } /* cicili#Block126 */
    else 
      return String_m_appendNew(this , other );
  }
}
String * String_s_new (const string_elem_t * cstr) {
  { /* cicili#Let130 */
    size_t len = strlen (cstr );
    String * str = malloc ((sizeof(String) +  (sizeof(string_elem_t) *  (len  +  1 ) ) ));
    strncpy ((str ->arr ), cstr , len );
    (str ->arr )[len ] = '\0';
    return str ;
  }
}
