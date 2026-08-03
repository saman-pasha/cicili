#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int check (const char * what , int got , int want ) {
  if (got  ==  want  )
    { /* block104 */
      printf ("ok   %-28s %d\n", what , got );
      return 0;
    }
  else
    { /* block107 */
      printf ("FAIL %-28s got %d want %d\n", what , got , want );
      return 1;
    }
  return 1;
}
int main () {
  { /* let111 */
    int bad  = 0;
    // ----------
    { /* let113 */
      int y  = 5;
      int seen  = 0;
      // ----------
      if (y  ==  3 )
        seen  = 3;
      else
        {
        if (y  ==  4 )
          { /* block120 */
            seen  = 4;
            seen  = (seen  +  40 );
          }
        else
          {
          if (y  ==  5 )
            seen  = 5;
          else
            seen  = 0;
          }        }      bad  += check ("if three-part", seen , 5) ;
      seen  = 0;
      if (y  ==  5 )
        seen  = 1;
      bad  += check ("if two-part", seen , 1) ;
    }
    { /* let128 */
      int x  = 3;
      int seen  = 0;
      // ----------
      if (x  ==  1 ) {
          seen  = 10;
      }
      else if (x  ==  2 ) {
          seen  = 20;
      }
      else if (x  ==  3 ) {
          seen  = 30;
      }
      else if (true ) {
          seen  = 99;
      }
      bad  += check ("cond third arm", seen , 30) ;
      x  = 77;
      if (x  ==  1 ) {
          seen  = 10;
      }
      else if (true ) {
          seen  = 99;
      }
      bad  += check ("cond trailing #t", seen , 99) ;
    }
    { /* let138 */
      int digits [] = { 1, 3, 5, 7, 9};
      int sum  = 0;
      // ----------
      for (int i  = 0; (i  <  5 ); (++i )) {
          switch (digits [i ]) {
              case 1:
                sum  += 1 ;
                break ;
              case 3:
                sum  += 30 ;
                break ;
              case 5:
                sum  += 500 ;
                break ;
              default:
                sum  += 1000 ;
          }
      }
      bad  += check ("switch with break", sum , 2531) ;
    }
    { /* let152 */
      int hits  = 0;
      // ----------
      switch (1) {
          case 1:
            hits  += 1 ;
          case 2:
            hits  += 10 ;
            break ;
          default:
            hits  += 100 ;
      }
      bad  += check ("switch fallthrough", hits , 11) ;
    }
    { /* let161 */
      int n  = 0;
      int guard  = 0;
      // ----------
      while ((n  <  5 )) {
          (++n );
          guard  += n  ;
      }
      bad  += check ("while", guard , 15) ;
    }
    { /* let165 */
      int n  = 0;
      int runs  = 0;
      // ----------
      do { 
        (++runs );
        (++n );
      } while ((n  <  4 ));
      bad  += check ("do runs to condition", runs , 4) ;
    }
    { /* let169 */
      int runs  = 0;
      // ----------
      do { 
        (++runs );
      } while ((0 !=  0 ));
      bad  += check ("do false condition", runs , 1) ;
    }
    { /* let173 */
      int sum  = 0;
      int j  = 7;
      // ----------
      for (int i  = 0,  j  = 0; (i  <  4 ); (i ++), (j ++)) {
          sum  += i  ;
      }
      bad  += check ("for two advances", sum , 6) ;
      bad  += check ("for init shadows outer", j , 7) ;
    }
    { /* let178 */
      int sum  = 0;
      int k  = 0;
      // ----------
      for (int i  = 0; (i  <  4 ); (++i ), (++k )) {
          sum  += i  ;
      }
      bad  += check ("for advances outer sum", sum , 6) ;
      bad  += check ("for advances outer", k , 4) ;
    }
    { /* let183 */
      int sum  = 0;
      // ----------
      for (int i  = 0; (i  <  10 ); (++i )) {
          if (i  ==  5 )
            break ;
          sum  += i  ;
      }
      bad  += check ("break out of for", sum , 10) ;
    }
    { /* let190 */
      int sum  = 0;
      // ----------
      for (int i  = 0; (i  <  6 ); (++i )) {
          if ((i  %  2 ) ==  0 )
            continue ;
          sum  += i  ;
      }
      bad  += check ("continue in for", sum , 9) ;
    }
    { /* let197 */
      int sum  = 0;
      int i  = 0;
      // ----------
      while ((i  <  10 )) {
          (++i );
          if (i  >  4 )
            break ;
          sum  += i  ;
      }
      bad  += check ("break out of while", sum , 10) ;
    }
    { /* let203 */
      int seen  = 0;
      // ----------
      { /* block205 */
        seen  = 1;
        seen  += 41 ;
      }
      bad  += check ("block", seen , 42) ;
    }
    { /* let207 */
      int got  = ({ /* progn208 */
        7;
      });
      // ----------
      bad  += check ("progn has a value", got , 7) ;
    }
    { /* let211 */
      int a  = (((2 >  1 )) ? 111 : 222);
      int b  = (((2 <  1 )) ? 111 : 222);
      // ----------
      bad  += check ("? true arm", a , 111) ;
      bad  += check ("? false arm", b , 222) ;
    }
    { /* let213 */
      int probe [4] = { 0, 7, 0, 9};
      // ----------
      { /* let215 */
        int hits  = 0;
        // ----------
        for (int i  = 0; (i  <  4 ); (++i )) {
            if (probe [i ])
              { /* block223 */
                (++hits );
              }
        }
        bad  += check ("nth as a condition", hits , 2) ;
      }
      { /* let225 */
        int n  = 0;
        // ----------
        if (probe [1])
          { /* block230 */
            n  = probe [1];
          }
        bad  += check ("nth condition reads right", n , 7) ;
        if (!probe [0])
          { /* block235 */
            n  = 5;
          }
        bad  += check ("nth in unless", n , 5) ;
      }
    }
    bad  += check ("sizeof as a condition", ((sizeof(int)) ? 1 : 0), 1) ;
    { /* let237 */
      int m  = 0;
      // ----------
      if (sizeof(int))
        { /* block242 */
          m  = 3;
        }
      bad  += check ("sizeof in when", m , 3) ;
      if (((int[]){ 0})[0]) {
          m  = 1;
      }
      else if (sizeof(int)) {
          m  = 2;
      }
      bad  += check ("cond arms, same list", m , 2) ;
    }
    if (bad  ==  0 )
      printf ("control: all ok\n");
    else
      printf ("control: %d FAILED\n", bad );
    return bad ;
  }
}
