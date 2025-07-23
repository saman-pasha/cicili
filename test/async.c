#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <setjmp.h>
#include <unistd.h>
jmp_buf main_cmd1 ;
jmp_buf cmd1_scan ;
jmp_buf main_cmd2 ;
jmp_buf cmd2_scan ;
jmp_buf main_cmd3 ;
jmp_buf cmd3_scan ;
void command1 () {
  { /* cicili#Let103 */
      char buffer [128];
      printf ("buffer1 is initialized once\n");
              while (true ) {
          if (!setjmp (cmd1_scan )) 
              longjmp (main_cmd1 , -2);


          printf ("polling for cmd1: ");
          if (scanf ("%s", buffer ) >  0 ) 
              { /* cicili#Block108 */
                printf ("the cmd1: %s\n", buffer );
                if (strcmp (buffer , "quit") ==  0 ) 
                    longjmp (main_cmd1 , -1);
                  else 
                    if (strcmp (buffer , "error") ==  0 ) 
                        longjmp (main_cmd1 , -3);



              } /* cicili#Block108 */

            else 
              longjmp (main_cmd1 , -3);

        } 

    }
}
void command2 () {
  { /* cicili#Let115 */
      int counter  = 0;
      int end  = 3;
      printf ("cmd2 counter initialized: %d\n", counter );
              while (true ) {
          if (!setjmp (cmd2_scan )) 
              longjmp (main_cmd2 , -2);


          sleep (1);
          printf ("cmd2 counter update: %d\n", (++counter ));
          printf ("command 2 saved state, processing\n");
          if (counter  ==  end  ) 
              longjmp (main_cmd2 , -1);
            else 
              if (counter  >  end  ) 
                  longjmp (main_cmd2 , -3);



        } 

    }
}
void command3 () {
  { /* cicili#Let123 */
      int counter  = 0;
      int end  = 5;
      printf ("cmd3 counter initialized: %d\n", counter );
              while (true ) {
          if (!setjmp (cmd3_scan )) 
              longjmp (main_cmd3 , -2);


          sleep (1);
          printf ("cmd3 counter update: %d\n", (++counter ));
          printf ("command 3 saved state, processing\n");
          if (counter  ==  end  ) 
              longjmp (main_cmd3 , -1);
            else 
              if (counter  >  end  ) 
                  longjmp (main_cmd3 , -3);



        } 

    }
}
int main () {
  { /* cicili#Let132 */
      volatile int status1  = 0;
      volatile int status2  = 0;
      volatile int status3  = 0;
              while (true ) {
          if (status1  ==  -2 ) 
              { /* cicili#Block136 */
                status1  = 0;
                longjmp (cmd1_scan , -1);
              } /* cicili#Block136 */

            else 
                              switch (setjmp (main_cmd1 )) {
                case 0:
                    puts ("cmd1 before initialization");
                    command1 ();
                    longjmp (cmd1_scan , -1);
                case -1:
                    puts ("cmd1 succeed, again");
                    break ;
                case -2:
                    status1  = -2;
                    puts ("cmd1 suspends");
                    break ;
                default:
                    puts ("cmd1 got error");
                    exit (EXIT_SUCCESS );
                }


          if (status2  ==  -2 ) 
              { /* cicili#Block144 */
                status2  = 0;
                longjmp (cmd2_scan , -1);
              } /* cicili#Block144 */

            else 
                              switch (setjmp (main_cmd2 )) {
                case 0:
                    puts ("cmd2 before initialization");
                    command2 ();
                    longjmp (cmd2_scan , -1);
                case -1:
                    puts ("cmd2 succeed, again");
                    break ;
                case -2:
                    status2  = -2;
                    puts ("cmd2 suspends");
                    break ;
                default:
                    puts ("cmd2 got error");
                    exit (EXIT_SUCCESS );
                }


          if (status3  ==  -2 ) 
              { /* cicili#Block152 */
                status3  = 0;
                longjmp (cmd3_scan , -1);
              } /* cicili#Block152 */

            else 
                              switch (setjmp (main_cmd3 )) {
                case 0:
                    puts ("cmd3 before initialization");
                    command3 ();
                    longjmp (cmd3_scan , -1);
                case -1:
                    puts ("cmd3 succeed, again");
                    break ;
                case -2:
                    status3  = -2;
                    puts ("cmd3 suspends");
                    break ;
                default:
                    puts ("cmd3 got error");
                    exit (EXIT_SUCCESS );
                }


        } 

    }
}
