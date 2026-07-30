#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int check (const char * what , long long got , long long want ) {
  if (got  ==  want  )
    { /* block104 */
      printf ("ok   %-30s %lld\n", what , got );
      return 0;
    }
  else
    { /* block107 */
      printf ("FAIL %-30s got %lld want %lld\n", what , got , want );
      return 1;
    }
  return 1;
}
int main () {
  { /* let111 */
    int bad  = 0;
    // ----------
    bad  += check ("+", (2 +  3 ), 5) ;
    bad  += check ("-", (9 -  4 ), 5) ;
    bad  += check ("*", (3 *  4 ), 12) ;
    bad  += check ("/", (20 /  4 ), 5) ;
    bad  += check ("%", (23 %  5 ), 3) ;
    bad  += check ("+ n-ary", (1 +  2 +  3 +  4 ), 10) ;
    bad  += check ("* n-ary", (2 *  2 *  2 ), 8) ;
    bad  += check ("unary -", (-7), -7) ;
    bad  += check ("unary +", (+7), 7) ;
    { /* let113 */
      int n  = 5;
      // ----------
      bad  += check ("++ prefix returns new", (++n ), 6) ;
      bad  += check ("n after ++", n , 6) ;
    }
    { /* let115 */
      int n  = 5;
      // ----------
      bad  += check ("1+ postfix returns old", (n ++), 5) ;
      bad  += check ("n after 1+", n , 6) ;
    }
    { /* let117 */
      int n  = 5;
      // ----------
      bad  += check ("-- prefix", (--n ), 4) ;
    }
    { /* let119 */
      int n  = 5;
      // ----------
      bad  += check ("1- postfix", (n --), 5) ;
      bad  += check ("n after 1-", n , 4) ;
    }
    bad  += check ("==", (3 ==  3 ), 1) ;
    bad  += check ("!=", (3 !=  4 ), 1) ;
    bad  += check (">", (4 >  3 ), 1) ;
    bad  += check ("<", (3 <  4 ), 1) ;
    bad  += check (">=", (3 >=  3 ), 1) ;
    bad  += check ("<=", (3 <=  3 ), 1) ;
    bad  += check ("== false", (3 ==  4 ), 0) ;
    bad  += check ("and", (1 &&  1 ), 1) ;
    bad  += check ("and false", (1 &&  0 ), 0) ;
    bad  += check ("or", (0 ||  1 ), 1) ;
    bad  += check ("or false", (0 ||  0 ), 0) ;
    bad  += check ("not", (!0), 1) ;
    bad  += check ("not true", (!5), 0) ;
    bad  += check ("and n-ary", (1 &&  1 &&  1 ), 1) ;
    bad  += check ("bitand", (12 &  10 ), 8) ;
    bad  += check ("bitor", (12 |  10 ), 14) ;
    bad  += check ("xor", (12 ^  10 ), 6) ;
    bad  += check ("^", (12 ^  10 ), 6) ;
    bad  += check ("~", (~0), -1) ;
    bad  += check ("<<", (1 <<  4 ), 16) ;
    bad  += check (">>", (16 >>  4 ), 1) ;
    { /* let121 */
      int n  = 0;
      // ----------
      n  = 5;
      bad  += check ("set", n , 5) ;
      { /* let123 */
        int a  = 0;
        int b  = 0;
        // ----------
        a  = 1;
        b  = 2;
        bad  += check ("set two pairs", ((a  *  10 ) +  b  ), 12) ;
      }
    }
    { /* let125 */
      int n  = 10;
      // ----------
      n  += 5 ;
      bad  += check ("+=", n , 15) ;
      n  -= 3 ;
      bad  += check ("-=", n , 12) ;
      n  *= 2 ;
      bad  += check ("*=", n , 24) ;
      n  /= 4 ;
      bad  += check ("/=", n , 6) ;
      n  %= 4 ;
      bad  += check ("%=", n , 2) ;
      n  <<= 3 ;
      bad  += check ("<<=", n , 16) ;
      n  >>= 2 ;
      bad  += check (">>=", n , 4) ;
    }
    bad  += check ("?", (((2 >  1 )) ? 10 : 20), 10) ;
    bad  += check ("? nested", (((2 <  1 )) ? 1 : (((3 >  2 )) ? 2 : 3)), 2) ;
    bad  += check ("sizeof int", sizeof(int), 4) ;
    bad  += check ("sizeof i64", sizeof(int64_t), 8) ;
    { /* let127 */
      double d  = 1.5;
      // ----------
      bad  += check ("sizeof expr", sizeof(d), 8) ;
      { /* let129 */
        typeof(d ) copy  = 2.5;
        // ----------
        bad  += check ("typeof declares", sizeof(copy), 8) ;
      }
    }
    { /* let131 */
      int n  = 42;
      int * p  = false ;
      // ----------
      p  = (&n );
      bad  += check ("cof reads", (*p ), 42) ;
      (*p ) = 43;
      bad  += check ("cof writes", n , 43) ;
      bad  += check ("aof/cof round trip", (*(&n )), 43) ;
    }
    { /* let133 */
      int xs [] = { 10, 20, 30, 40};
      // ----------
      bad  += check ("nth 0", xs [0], 10) ;
      bad  += check ("nth 3", xs [3], 40) ;
      xs [1] = 99;
      bad  += check ("nth assigns", xs [1], 99) ;
      { /* let135 */
        int * p  = (&xs [2]);
        // ----------
        bad  += check ("nth through pointer", p [0], 30) ;
      }
    }
    bad  += check ("cast truncates", ((int)3.9), 3) ;
    bad  += check ("cast widens", ((long long)7), 7) ;
    { /* let137 */
      double d  = (((double)7) /  2 );
      // ----------
      bad  += check ("cast forces real division", ((int)(d  *  10 )), 35) ;
    }
    if (bad  ==  0 )
      printf ("operator: all ok\n");
    else
      printf ("operator: %d FAILED\n", bad );
    return bad ;
  }
}
