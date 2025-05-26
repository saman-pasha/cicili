#ifndef CICILI_STRING_H_
#define CICILI_STRING_H_
#include <stddef.h>
#define STRING_GROWTH_STEP 256
typedef char string_elem_t ;
typedef struct String {
  size_t len ;
  size_t cap ;
  string_elem_t arr [];
} String;
String * String_s_newEmpty (size_t len );
String * String_s_newFromArray (const string_elem_t * arr , size_t len );
String * String_s_newCopy (const String * other );
char String_m_firstElement (String * this );
String * String_m_clone (String * this );
string_elem_t * String_m_cloneArray (String * this );
String * String_m_appendNew (String * this , const String * other );
struct __ciciliS_String_m_append_ {
  String * out ;
  bool newp ;
};
struct __ciciliS_String_m_append_ String_m_append (String * this , const String * other );
void String_m_free (String * this );
struct __ciciliS_String_m_push_ {
  String * out ;
  bool newp ;
};
struct __ciciliS_String_m_push_ String_m_push (String * this , string_elem_t val );
struct __ciciliS_String_m_pop_ {
  string_elem_t out ;
  bool outp ;
};
struct __ciciliS_String_m_pop_ String_m_pop (String * this );
String * String_m_shrink (String * this );
String * String_m_insert (String * this , size_t index , string_elem_t val );
String * String_m_removeAt (String * this , size_t index );
bool String_m_contains (String * this , string_elem_t val );
size_t String_m_indexOf (String * this , string_elem_t val );
size_t String_m_lastIndexOf (String * this , string_elem_t val );
size_t String_m_count (String * this , string_elem_t val );
String * String_s_new (const string_elem_t * cstr );
String * String_s_newFormat (const char * fmt , ...   );
String * String_m_substring (String * this , size_t start , size_t length );
String * String_m_concat (String * this , const String * other );
size_t String_m_find (String * this , char ch );
bool String_m_equals (String * this , const String * other );
String * String_m_toUpper (String * this );
String * String_m_toLower (String * this );
String * String_m_trim (String * this );
String * String_m_replace (String * this , char oldch , char newch );
bool String_m_startsWith (String * this , const String * prefix );
bool String_m_endsWith (String * this , const String * suffix );
#endif /* CICILI_STRING_H_ */ 

