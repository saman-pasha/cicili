#ifndef __ROUTER_H__
#define __ROUTER_H__
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcgiapp.h>
typedef struct Route {
  char * method;
  char * path;
    void (*handler) (FCGX_Request * req);
} Route;
Route * routesList;
int routesCount;
void Route_handle (Route * this, FCGX_Request * req);
void register_route (Route route);
void process_routes (FCGX_Request * req);
#endif /* __ROUTER_H__ */ 
