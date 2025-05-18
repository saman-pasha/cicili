#ifndef __WEB_SERVER__
#define __WEB_SERVER__
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcgiapp.h>
typedef struct Route {
  char * method;
  char * path;
    void (*handler) (FCGX_Request * req);
    void (*pre_handler) (FCGX_Request * req);
    void (*post_handler) (FCGX_Request * req);
} Route;
Route * routesList;
int routesCount;
void register_route (Route route);
void process_routes (FCGX_Request * req);
#endif /* __WEB_SERVER__ */ 
