#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "router.h"
Route * routesList = NULL ;
int routesCount = 0;
void register_route (Route route) {
  fprintf (stdout , "Route %s\n", (route . path ));
  if (routesCount  ==  0 ) 
    { /* cicili#Block107 */
      routesList  = calloc (10, sizeof(Route));
    } /* cicili#Block107 */

  routesList [(routesCount ++)] = route ;
}
void Route_handle (Route * this, FCGX_Request * req) {
  return (this ->handler )(req );
}
void process_routes (FCGX_Request * req) {
  fprintf (stdout , "Processing request: %d ...\n", (req ->requestId ));
  { /* cicili#Let113 */
    char * rq_method = FCGX_GetParam ("REQUEST_METHOD", (req ->envp ));
    char * rq_uri = FCGX_GetParam ("REQUEST_URI", (req ->envp ));
    int i = 0;
    fprintf (stdout , "Requested METHOD: %s, URI: %s\n", rq_method , rq_uri );
    while ((i  <  routesCount  )) {
      { /* cicili#Let118 */
        Route r = routesList [i ];
        if ((strcmp ((r . path ), rq_uri ) ==  0 ) ||  ((strcmp ((r . path ), "/api/") ==  0 ) &&  (strncmp (rq_uri , "/api/", 5) ==  0 ) ) ) 
          { /* cicili#Block123 */
            Route_handle(&r, req );
            return ;
          } /* cicili#Block123 */

        (i ++);
      }
    } 
    FCGX_PutS ("HTTP/1.1 404 Not Found\r\nContent-Type: text/plain\r\n\r\n", (req ->out ));
    FCGX_PutS ("Page not found.\n", (req ->out ));
  }
}
