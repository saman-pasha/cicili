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
typedef struct CoRoutine {
    void (* volatile done_callback) (  volatile char payload [128]);
    void (* volatile error_callback) (  volatile int status );
} CoRoutine;
void done_callback (volatile char payload [128]) {
  printf ("the payload received: %s\n", payload );
}
void error_callback (volatile int status ) {
  printf ("the routine error status: %d\n", status );
}
void command1 (void (* volatile _dc) (volatile char payload [128]), void (* volatile _ec) (volatile int status )) {
  { /* cicili#Let107 */
      char buffer [128];
      printf ("buffer1 is initialized once\n");
      while (true ) {
          if (!setjmp (cmd1_scan )) 
              longjmp (main_cmd1 , -1);


          printf ("polling for cmd1: ");
          if (scanf ("%s", buffer ) >  0 ) 
              { /* cicili#Block112 */
                printf ("the cmd1: %s\n", buffer );
                if (strcmp (buffer , "quit") ==  0 ) 
                    { /* cicili#Block115 */
                      done_callback (buffer );
                    } /* cicili#Block115 */

                  else 
                    if (strcmp (buffer , "error") ==  0 ) 
                        { /* cicili#Block119 */
                          error_callback (-3);
                        } /* cicili#Block119 */




              } /* cicili#Block112 */

            else 
              { /* cicili#Block122 */
                error_callback (-2);
              } /* cicili#Block122 */


        } 

    }
}
void command2 () {
  { /* cicili#Let127 */
      const int end  = 3;
      int counter  = 0;
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
  { /* cicili#Let135 */
      const int end  = 5;
      int counter  = 0;
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
  { /* cicili#Let144 */
      volatile int status1  = 0;
      volatile int status2  = 0;
      volatile int status3  = 0;
      while (true ) {
          if (status1  ==  -1 ) 
              { /* cicili#Block148 */
                status1  = 0;
                longjmp (cmd1_scan , -1);
              } /* cicili#Block148 */

            else 
              switch (setjmp (main_cmd1 )) {
                case 0:
                    command1 (done_callback , error_callback );
                    break ;
                case -1:
                    status1  = -1;
                    puts ("cmd1 suspends");
                    break ;
                default:
                    puts ("cmd1 got error");
                    exit (EXIT_SUCCESS );
                }


          if (status2  ==  -2 ) 
              { /* cicili#Block155 */
                status2  = 0;
                longjmp (cmd2_scan , -1);
              } /* cicili#Block155 */

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
              { /* cicili#Block163 */
                status3  = 0;
                longjmp (cmd3_scan , -1);
              } /* cicili#Block163 */

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
