#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
int main () {
  { /* cicili#Let178 */
    int x  = 1;
    int y  = 5;
    bool next  = true ;
    int digits [] = { 1, 3, 5, 7};
    while ((true  ==  next  )) {
      printf ("please enter a digit: ");
      scanf ("%d", (&x ));
      if (x  >  y  ) 
        printf ("x is bigger than y\n");
      else 
        printf ("x is smaller than y\n");
      printf ("try another? [1/0] ");
      scanf ("%d", (&x ));
      next  = ((x ) ? true  : false );
    } 
    do { 
      printf ("please enter two digit: ");
      scanf ("%d %d", (&x ), (&y ));
      printf ("product of x by y is: %d\n", (x  *  y  ));
      printf ("try another? [1/0] ");
      scanf ("%d", (&x ));
      next  = ((x ) ? true  : false );
    } while ((false  !=  next  ));
    for (int i  = 0,  x  = 1; (x  >  i  ); (i ++), (y ++)) {
      printf ("i is: %d and smaller than x, enter another x: ", i );
      scanf ("%d", (&x ));
      continue ;
    } 
    for (int i  = 1; (i  <  5 ); (++i )) {
      switch (digits [i ]) {
      case 1:
            printf ("digit One\n");
            break ;
      case 2:
            printf ("digit Two\n");
            break ;
      case 3:
            printf ("digit Three\n");
            break ;
      case 4:
            printf ("digit Four\n");
            break ;
      case 5:
            printf ("digit Five\n");
            break ;
      default:
            printf ("unknown digit\n");
      }
    } 
  }
}
