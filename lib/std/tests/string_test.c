#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "../Slice/cicili_string.h"
void printString (String * str ) {
  fprintf (stdout , "the str: %s\n", String_m_deref(str ));
}
void printChars (const char * cstr ) {
  fprintf (stdout , "cstr: %s\n", cstr );
}
static void __ciciliL_188 (String ** a ) {
  String_m_free((*a ));
}
static void __ciciliL_190 (String ** b ) {
  String_m_free((*b ));
}
static void __ciciliL_192 (String ** trait1 ) {
  String_m_free((*trait1 ));
}
static void __ciciliL_194 (String ** trait2 ) {
  String_m_free((*trait2 ));
}
static void __ciciliL_196 (String ** trait3 ) {
  String_m_free((*trait3 ));
}
int main () {
  { /* cicili#Let187 */
    String * a  __attribute__((__cleanup__(__ciciliL_188 ))) = String_s_new("hello");
    String * b  __attribute__((__cleanup__(__ciciliL_190 ))) = String_s_new("world");
    String * formatted  = String_s_newFormat("value: %d, %s", 42, "test");
    String * helloWorld  = String_m_concat(a , b );
    String * upper  = String_m_toUpper(a );
    String * lower  = String_m_toLower(upper );
    String * trimmed  = String_m_trim(String_s_new("   padded   "));
    String * replaced  = String_m_replace(String_s_new("a-b-c-d"), '-', '_');
    String * substr  = String_m_substring(helloWorld , 3, 4);
    String * prefix  = String_s_new("hel");
    String * suffix  = String_s_new("rld");
    bool eq1  = String_m_equals(a , a );
    bool eq2  = String_m_equals(a , b );
    size_t index  = String_m_find(a , 'l');
    bool sw  = String_m_startsWith(a , prefix );
    bool ew  = String_m_endsWith(helloWorld , suffix );
    String * trait1  __attribute__((__cleanup__(__ciciliL_192 ))) = char_s_toString("toString trait 1 call");
    String * trait2  __attribute__((__cleanup__(__ciciliL_194 ))) = char_s_toString("toString trait 2 call");
    String * trait3  __attribute__((__cleanup__(__ciciliL_196 )));
    char * fromString1  = String_s_tochar(trait1 );
    char * fromString2 ;
    trait3  = char_s_toString("toString trait 3 call");
    fromString2  = String_s_tochar(trait2 );
    fprintf (stdout , "a: %s\n", (a ->arr ));
    fprintf (stdout , "b: %s\n", (b ->arr ));
    fprintf (stdout , "helloWorld: %s\n", (helloWorld ->arr ));
    fprintf (stdout , "formatted: %s\n", (formatted ->arr ));
    fprintf (stdout , "upper: %s\n", (upper ->arr ));
    fprintf (stdout , "lower: %s\n", (lower ->arr ));
    fprintf (stdout , "trimmed: [%s]\n", (trimmed ->arr ));
    fprintf (stdout , "replaced: %s\n", (replaced ->arr ));
    fprintf (stdout , "substring(3,4): %s\n", (substr ->arr ));
    fprintf (stdout , "a equals a: %s\n", ((eq1 ) ? "true" : "false"));
    fprintf (stdout , "a equals b: %s\n", ((eq2 ) ? "true" : "false"));
    fprintf (stdout , "find 'l' in a: %zu\n", index );
    fprintf (stdout , "a starts with 'hel': %s\n", ((sw ) ? "true" : "false"));
    fprintf (stdout , "helloWorld ends with 'rld': %s\n", ((ew ) ? "true" : "false"));
    fprintf (stdout , "%s\n", String_m_deref(trait1 ));
    fprintf (stdout , "%s\n", String_m_deref(trait2 ));
    fprintf (stdout , "%s\n", String_s_tochar(trait3 ));
    fprintf (stdout , "%s\n", fromString1 );
    fprintf (stdout , "%s\n", fromString2 );
    printString (trait1 );
    printString (char_s_toString("Alice and Bob"));
    printChars (String_s_tochar(trait3 ));
    String_m_free(helloWorld );
    String_m_free(formatted );
    String_m_free(upper );
    String_m_free(lower );
    String_m_free(trimmed );
    String_m_free(replaced );
    String_m_free(substr );
    String_m_free(prefix );
    String_m_free(suffix );
    return 0;
  }
}

