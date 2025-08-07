#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
int main () {
    { /* cicili#Let101 */
        int x  = 1;
        int y  = 5;
        bool next  = true ;
        int digits [] = { 1, 3, 5, 7};
        // ----------
        if (y  ==  3 )
            printf ("y is 4\n");
        else
            {
            if (y  ==  4 )
                { /* cicili#Block106 */
                    printf ("y is 4\n");
                    printf ("multi form\n");
                } /* cicili#Block106 */
            else
                {
                if (y  ==  5 )
                    printf ("y is 5\n");
                else
                    printf ("y is ?\n");
                }
            }

        if (y  ==  6 )
            y  = 12;

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
        if (x  ==  1 ) {
            fprintf (stdout , "x is 1\n");
        }
        else if (x  ==  2 ) {
            fprintf (stdout , "x is 2\n");
        }
        else if (x  ==  3 ) {
            fprintf (stdout , "x is 3\n");
        }
        else if (true ) {
            fprintf (stdout , "x is ?\n");
        }
    }
}
