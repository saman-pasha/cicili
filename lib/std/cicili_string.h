#ifndef CICILI_STRING_H_
#define CICILI_STRING_H_
#include <stddef.h>
#define STRING_GROWTH_STEP 256
typedef char string_elem_t;
typedef struct String {
  size_t len;
  size_t cap;
  string_elem_t arr[];
} String;
String * String_s_newEmpty (size_t len);
String * String_s_newFromArray (const string_elem_t * arr, size_t len);
String * String_s_newCopy (const String * other);
String * String_m_clone (String * this);
string_elem_t * String_m_cloneArray (String * this);
String * String_m_appendNew (String * this, const String * other);
String * String_m_append (String * this, const String * other);
void String_m_free (String * this);
String * String_s_new (const string_elem_t * cstr);
String * String_s_newFormat (const char * fmt, ...  );
String * String_m_substring (String * this, size_t start, size_t length);
String * String_m_concat (String * this, const String * other);
size_t String_m_find (String * this, char ch);
bool String_m_equals (String * this, const String * other);
String * String_m_toUpper (String * this);
String * String_m_toLower (String * this);
String * String_m_trim (String * this);
String * String_m_replace (String * this, char oldch, char newch);
bool String_m_startsWith (String * this, const String * prefix);
bool String_m_endsWith (String * this, const String * suffix);
#endif /* CICILI_STRING_H_ */ 
