#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
typedef int Counter ;
typedef unsigned long Size ;
typedef char * CString ;
typedef int (*BinOp) (int a , int b );
int add (int a , int b ) {
  return (a  +  b  );
}
int check (const char * what , long long got , long long want ) {
  if (got  ==  want  )
    { /* block106 */
      printf ("ok   %-32s %lld\n", what , got );
      return 0;
    }
  else
    { /* block109 */
      printf ("FAIL %-32s got %lld want %lld\n", what , got , want );
      return 1;
    }
  return 1;
}
int main () {
  { /* let113 */
    int bad  = 0;
    // ----------
    bad  += check ("sizeof char", sizeof(char), 1) ;
    bad  += check ("sizeof uchar", sizeof(unsigned char), 1) ;
    bad  += check ("sizeof short", sizeof(short), 2) ;
    bad  += check ("sizeof ushort", sizeof(unsigned short), 2) ;
    bad  += check ("sizeof int", sizeof(int), 4) ;
    bad  += check ("sizeof uint", sizeof(unsigned int), 4) ;
    bad  += check ("sizeof long", sizeof(long), 8) ;
    bad  += check ("sizeof ulong", sizeof(unsigned long), 8) ;
    bad  += check ("sizeof llong", sizeof(long long), 8) ;
    bad  += check ("sizeof ullong", sizeof(unsigned long long), 8) ;
    bad  += check ("sizeof i8", sizeof(int8_t), 1) ;
    bad  += check ("sizeof u8", sizeof(uint8_t), 1) ;
    bad  += check ("sizeof i16", sizeof(int16_t), 2) ;
    bad  += check ("sizeof u16", sizeof(uint16_t), 2) ;
    bad  += check ("sizeof i32", sizeof(int32_t), 4) ;
    bad  += check ("sizeof u32", sizeof(uint32_t), 4) ;
    bad  += check ("sizeof i64", sizeof(int64_t), 8) ;
    bad  += check ("sizeof u64", sizeof(uint64_t), 8) ;
    bad  += check ("sizeof i128", sizeof(__int128), 16) ;
    bad  += check ("sizeof u128", sizeof(unsigned __int128), 16) ;
    bad  += check ("sizeof float", sizeof(float), 4) ;
    bad  += check ("sizeof double", sizeof(double), 8) ;
    bad  += check ("sizeof real >= double", (((sizeof(long double) >=  sizeof(double) )) ? 1 : 0), 1) ;
    { /* let115 */
      bool yes  = true ;
      bool no  = false ;
      // ----------
      bad  += check ("#t", ((yes ) ? 1 : 0), 1) ;
      bad  += check ("#f", ((no ) ? 1 : 0), 0) ;
    }
    { /* let117 */
      unsigned char u  = 200;
      char s  = 100;
      // ----------
      bad  += check ("uchar holds 200", u , 200) ;
      bad  += check ("char holds 100", s , 100) ;
    }
    { /* let119 */
      uint32_t big  = 4000000000;
      // ----------
      bad  += check ("u32 holds 4e9", big , 4000000000) ;
    }
    { /* let121 */
      const int n  = (20 +  22 );
      // ----------
      bad  += check ("auto infers int", n , 42) ;
      bad  += check ("auto sizeof", sizeof(n), 4) ;
    }
    { /* let123 */
      const double d  = 2.5;
      // ----------
      bad  += check ("auto infers double", sizeof(d), 8) ;
    }
    { /* let125 */
      long long big  = 7;
      // ----------
      { /* let127 */
        typeof(big ) same  = 9;
        // ----------
        bad  += check ("typeof of a variable", sizeof(same), 8) ;
      }
      { /* let129 */
        typeof(add (1, 2)) r  = add (20, 22);
        // ----------
        bad  += check ("typeof of a call", r , 42) ;
      }
    }
    { /* let131 */
      Counter c  = 5;
      Size n  = 9;
      // ----------
      bad  += check ("typedef Counter", c , 5) ;
      bad  += check ("typedef Size sizeof", sizeof(n), 8) ;
    }
    { /* let133 */
      CString s  = "hi";
      // ----------
      bad  += check ("typedef CString", strlen (s ), 2) ;
    }
    { /* let135 */
      BinOp op  = add ;
      // ----------
      bad  += check ("typedef function pointer", op (20, 22), 42) ;
    }
    { /* let137 */
      int n  = 5;
      // ----------
      { /* let139 */
        int * p  = (&n );
        // ----------
        bad  += check ("int * ", (*p ), 5) ;
        { /* let141 */
          int ** pp  = (&p );
          // ----------
          bad  += check ("int **", (*(*pp )), 5) ;
        }
      }
    }
    { /* let143 */
      int n  = 5;
      // ----------
      { /* let145 */
        const int * cp  = (&n );
        // ----------
        bad  += check ("const int *", (*cp ), 5) ;
      }
      { /* let147 */
        int * const pc  = (&n );
        // ----------
        (*pc ) = 6;
        bad  += check ("int * const", n , 6) ;
      }
    }
    bad  += check ("cast double->int", ((int)3.99), 3) ;
    bad  += check ("cast int->char", ((char)65), 65) ;
    { /* let149 */
      int n  = 7;
      // ----------
      bad  += check ("int division", (n  /  2 ), 3) ;
      bad  += check ("cast then divide", ((int)((((double)n ) /  2 ) *  100 )), 350) ;
    }
    { /* let151 */
      int n  = 0;
      void * v  = false ;
      // ----------
      v  = ((void *)(&n ));
      (*((int *)v )) = 11;
      bad  += check ("cast through void *", n , 11) ;
    }
    if (bad  ==  0 )
      printf ("types: all ok\n");
    else
      printf ("types: %d FAILED\n", bad );
    return bad ;
  }
}
