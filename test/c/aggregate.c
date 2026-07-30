#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
typedef enum Colors {
  RED = 0,
  GREEN,
  BLUE,
  VIOLET = 10,
  INDIGO
} Colors;
typedef union Mixed {
  int i ;
  float f ;
} Mixed;
typedef struct Role {
  int role_id ;
  const char * role_name ;
    int (*describe) (int who );
} Role;
typedef struct Opaque Opaque ;
typedef struct Node {
  int value ;
  struct Node * next ;
} Node;
typedef struct Employee {
  int id ;
  const char * name ;
  Mixed extra ;
  enum Grade {
    JUNIOR = 1,
    SENIOR
  } Grade;
  union { /* ciciliUnion102 */
    int tag_id ;
    const char * custom_tag ;
  } tag ;
  struct { /* ciciliStruct103 */
    int role_id ;
    const char * role_name ;
        int (*describe) (int who );
  } role , * alt_role ;
  Role duty ;
} Employee;
typedef struct Chain {
  int head ;
  Node * tail ;
  Opaque * opaque ;
} Chain;
int describe_impl (int who ) {
  return (who  *  3 );
}
int check (const char * what , long long got , long long want ) {
  if (got  ==  want  )
    { /* block109 */
      printf ("ok   %-34s %lld\n", what , got );
      return 0;
    }
  else
    { /* block112 */
      printf ("FAIL %-34s got %lld want %lld\n", what , got , want );
      return 1;
    }
  return 1;
}
int main () {
  { /* let116 */
    int bad  = 0;
    // ----------
    bad  += check ("enum explicit", RED , 0) ;
    bad  += check ("enum continues", GREEN , 1) ;
    bad  += check ("enum continues 2", BLUE , 2) ;
    bad  += check ("enum restarts", VIOLET , 10) ;
    bad  += check ("enum after restart", INDIGO , 11) ;
    bad  += check ("nested enum", SENIOR , 2) ;
    { /* let118 */
      Mixed m  = { 0};
      // ----------
      (m . i) = 1065353216;
      bad  += check ("union int view", (m . i), 1065353216) ;
      bad  += check ("union float view", ((int)(m . f)), 1) ;
      bad  += check ("sizeof union", sizeof(Mixed), 4) ;
    }
    { /* let120 */
      Employee e  = { 7, "Ada"};
      // ----------
      bad  += check ("positional id", (e . id), 7) ;
      bad  += check ("positional name", strlen ((e . name)), 3) ;
    }
    { /* let122 */
      Employee e  = { .id = 8, .name = "Grace"};
      // ----------
      bad  += check ("designated id", (e . id), 8) ;
      bad  += check ("designated name", strlen ((e . name)), 5) ;
    }
    { /* let124 */
      Employee e  = { .id = 9, .extra.i = 1001};
      // ----------
      bad  += check ("nested designator", ((e . extra). i), 1001) ;
      bad  += check ("designator with nesting", (e . id), 9) ;
    }
    { /* let126 */
      Employee e  = { 1, "u"};
      // ----------
      ((e . extra). i) = 5;
      bad  += check ("$ into union member", ((e . extra). i), 5) ;
    }
    { /* let128 */
      Employee e  = { 1, "anon"};
      // ----------
      ((e . tag). tag_id) = 1001;
      bad  += check ("$ into anonymous union", ((e . tag). tag_id), 1001) ;
      ((e . role). role_id) = 55;
      bad  += check ("$ into anonymous struct", ((e . role). role_id), 55) ;
    }
    { /* let130 */
      Employee e  = { .id = 4, .tag.tag_id = 2002};
      // ----------
      bad  += check ("designated through tag", ((e . tag). tag_id), 2002) ;
      bad  += check ("designated sibling", (e . id), 4) ;
    }
    { /* let132 */
      Employee es [] = { { 1, "one"}, { 2, "two"}};
      // ----------
      bad  += check ("array of struct 0", (es [0]. id), 1) ;
      bad  += check ("array of struct 1", (es [1]. id), 2) ;
      bad  += check ("array of struct name", strlen ((es [1]. name)), 3) ;
    }
    { /* let134 */
      Employee e  = { 3, "Bob"};
      Employee * p  = false ;
      // ----------
      p  = (&e );
      bad  += check ("-> reads", (p -> id), 3) ;
      (p -> id) = 4;
      bad  += check ("-> writes", (e . id), 4) ;
      ((e . duty). role_id) = 55;
      bad  += check ("$ nested write", ((e . duty). role_id), 55) ;
      bad  += check ("-> then $ nested", (((*p ). duty). role_id), 55) ;
    }
    { /* let136 */
      Employee e  = { 1, "fn"};
      // ----------
      ((e . duty). describe) = describe_impl ;
      bad  += check ("call member fn ptr", ((e . duty). describe)(5), 15) ;
      bad  += check ("=> calls member fn", ((e . duty). describe (6)), 18) ;
    }
    { /* let138 */
      Node b  = { 22, false };
      Node a  = { 11, false };
      Chain c  = { 1, false , false };
      // ----------
      (a . next) = (&b );
      (c . tail) = (&a );
      bad  += check ("chain head", (c . head), 1) ;
      bad  += check ("through pointer", ((c . tail)-> value), 11) ;
      bad  += check ("two links deep", (((c . tail)-> next)-> value), 22) ;
      bad  += check ("opaque ptr is null", (((c . opaque)) ? 1 : 0), 0) ;
    }
    { /* let140 */
      Node n  = ((struct Node){ 7, false });
      // ----------
      bad  += check ("cast (struct T)", (n . value), 7) ;
      bad  += check ("member of a cast value", (((struct Node){ 9, false }). value), 9) ;
    }
    if (bad  ==  0 )
      printf ("aggregate: all ok\n");
    else
      printf ("aggregate: %d FAILED\n", bad );
    return bad ;
  }
}
