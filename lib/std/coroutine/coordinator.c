#include <stdio.h>
#include <stdbool.h>
#include "coordinator.h"
void Coordinator_m_reg_task (Coordinator * this , Coroutine * coroutine ) {
  if ((this -> m_logging )) 
      printf ("coroutine: register %p\n", coroutine );


  (coroutine -> next ) = NULL ;
  if ((this -> head ) ==  NULL  ) 
      { /* cicili#Block115 */
        (this -> head ) = coroutine ;
        (this -> tail ) = coroutine ;
      } /* cicili#Block115 */

    else
      { /* cicili#Block118 */
        (this -> tail -> next ) = coroutine ;
        (this -> tail ) = coroutine ;
      } /* cicili#Block118 */


}
bool Coordinator_m_poll (Coordinator * this , Coroutine * coroutine ) {
  if ((coroutine -> status ) ==  -1 ) 
      { /* cicili#Block122 */
        if ((this -> m_logging )) 
            printf ("coroutine: poll %p\n", coroutine );


        (coroutine -> status ) = 0;
        return (coroutine -> routine )((coroutine -> args ), coroutine );
      } /* cicili#Block122 */

    else
      { /* cicili#Let126 */
          int tmp_status  = setjmp ((this -> main ));
          switch (tmp_status ) {
            case -1:
                if ((this -> m_logging )) 
                    printf ("coroutine: suspend %p\n", coroutine );


                (coroutine -> status ) = -1;
                return true ;
            case 0:
                if ((this -> m_logging )) 
                    printf ("coroutine: start %p\n", coroutine );


                (coroutine -> status ) = 0;
                return (coroutine -> routine )((coroutine -> args ), coroutine );
            default:
                if ((this -> m_logging )) 
                    fprintf (stderr , "coroutine: unhandled error %p status %d\n", coroutine , tmp_status );


                (coroutine -> status ) = tmp_status ;
                return false ;
            }

        }

}
void Coordinator_m_loop (Coordinator * this ) {
  if ((this -> m_logging )) 
      printf ("coordinator looping\n");


  { /* cicili#Let136 */
      Coroutine * prev  = NULL ;
      Coroutine * current  = NULL ;
      while (true ) {
          if (current  ==  NULL  ) 
              { /* cicili#Block140 */
                current  = (this -> head );
                if (current  ==  NULL  ) 
                    usleep (1);


              } /* cicili#Block140 */

            else
              { /* cicili#Block144 */
                if (Coordinator_m_poll(this , current )) 
                    {
                      if (current  ==  (this -> tail ) ) 
                        { /* cicili#Block148 */
                          prev  = NULL ;
                          current  = (this -> head );
                        } /* cicili#Block148 */

                      else
                        { /* cicili#Block151 */
                          prev  = current ;
                          current  = (current -> next );
                        } /* cicili#Block151 */

                      }
                  else
                    {
                      if (current  ==  (this -> head ) ) 
                        { /* cicili#Block155 */
                          (this -> head ) = (current -> next );
                          if (current  ==  (this -> tail ) ) 
                              { /* cicili#Block158 */
                                (this -> tail ) = NULL ;
                                free (current );
                                current  = NULL ;
                              } /* cicili#Block158 */

                            else
                              { /* cicili#Block161 */
                                free (current );
                                current  = (this -> head );
                              } /* cicili#Block161 */


                        } /* cicili#Block155 */

                      else
                        {
                          if (current  ==  (this -> tail ) ) 
                            { /* cicili#Block165 */
                              (this -> tail ) = prev ;
                              (prev -> next ) = NULL ;
                              free (current );
                              current  = (this -> head );
                            } /* cicili#Block165 */

                          else
                            { /* cicili#Block168 */
                              (prev -> next ) = (current -> next );
                              free (current );
                              current  = (current -> next );
                            } /* cicili#Block168 */

                          }
                      }

              } /* cicili#Block144 */


        }

    }
}
void Coordinator_m_set_logging (Coordinator * this , bool logging ) {
  (this -> m_logging ) = logging ;
}
