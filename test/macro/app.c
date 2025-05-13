#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "router.h"
#include <fcgiapp.h>
void string_substr (char * source, int start, int length, char * destination) {
  strncpy (destination , (source  +  start  ), length );
  destination [length ] = '\0';
}
static void __ciciliLambda_setup_routes_107 (FCGX_Request * req) {
  FCGX_PutS ("HTTP/1.1 200 OK\r\nContent-Type: text/plain\r\n\r\n", (req ->out ));
  FCGX_PutS ("Welcome to the FastCGI Cicili Server!\n", (req ->out ));
}
static void __ciciliLambda_setup_routes_112 (FCGX_Request * req) {
  FCGX_PutS ("HTTP/1.1 200 OK\r\nContent-Type: text/plain\r\n\r\n", (req ->out ));
  FCGX_PutS ("About: This is a sample Cicili application.\n", (req ->out ));
}
static void __ciciliLambda_setup_routes_117 (FCGX_Request * req) {
  FCGX_PutS ("HTTP/1.1 200 OK\r\nContent-Type: text/plain\r\n\r\n", (req ->out ));
  FCGX_PutS ("Hello, FastCGI World!\n", (req ->out ));
}
static void __ciciliLambda_setup_routes_122 (FCGX_Request * req) {
  { /* cicili#Let124 */
    char api_endpoint[50];
    string_substr (FCGX_GetParam ("REQUEST_URI", (req ->envp )), 5, 49, api_endpoint );
    fprintf (stdout , "API handler received endpoint: %s\n", api_endpoint );
    FCGX_PutS ("HTTP/1.1 200 OK\r\nContent-Type: application/json\r\n\r\n", (req ->out ));
    FCGX_PutS ("{\"status\":\"API response\"}\n", (req ->out ));
  }
}
static void __ciciliLambda_setup_routes_130 (FCGX_Request * req) {
  { /* cicili#Let132 */
    char * clstr = FCGX_GetParam ("CONTENT_LENGTH", (req ->envp ));
    int content_len = 0;
    if (clstr ) 
      { /* cicili#Block136 */
        content_len  = atoi (clstr );
      } /* cicili#Block136 */

    { /* cicili#Let138 */
      char request_body[1024];
      if (content_len  >  1024 ) 
        { /* cicili#Block142 */
          content_len  = 1023;
        } /* cicili#Block142 */

      content_len  = FCGX_GetStr (request_body , content_len , (req ->in ));
      fprintf (stdout , "Received POST data: %.*s\n", content_len , request_body );
      FCGX_PutS ("HTTP/1.1 200 OK\r\nContent-Type: text/plain\r\n\r\n", (req ->out ));
      FCGX_PutS ("POST data processed.\n", (req ->out ));
    }
  }
}
void setup_routes () {
  { /* cicili#Let105 */
    Route r;
    (r . method ) = "GET";
    (r . path ) = "/";
    (r . handler ) = __ciciliLambda_setup_routes_107 ;
    register_route (r );
  }
  { /* cicili#Let110 */
    Route r;
    (r . method ) = "GET";
    (r . path ) = "/about";
    (r . handler ) = __ciciliLambda_setup_routes_112 ;
    register_route (r );
  }
  { /* cicili#Let115 */
    Route r;
    (r . method ) = "GET";
    (r . path ) = "/hello";
    (r . handler ) = __ciciliLambda_setup_routes_117 ;
    register_route (r );
  }
  { /* cicili#Let120 */
    Route r;
    (r . method ) = "GET";
    (r . path ) = "/api/";
    (r . handler ) = __ciciliLambda_setup_routes_122 ;
    register_route (r );
  }
  { /* cicili#Let128 */
    Route r;
    (r . method ) = "POST";
    (r . path ) = "/submit";
    (r . handler ) = __ciciliLambda_setup_routes_130 ;
    register_route (r );
  }
}
void start_fastcgi_app () {
  { /* cicili#Let146 */
    int server_fd = -1;
    char * server_path = "/opt/local/var/run/fcgi.sock";
    FCGX_Request request;
    FCGX_Init ();
    server_fd  = FCGX_OpenSocket (server_path , 5);
    FCGX_InitRequest ((&request ), server_fd , 0);
    fprintf (stdout , "Server FD: %d, FastCGI server running on %s ...\n", server_fd , server_path );
    while (true ) {
      if (FCGX_Accept_r ((&request )) ==  0 ) 
        process_routes ((&request ));
      else 
        fprintf (stderr , "Unable to accept request.\n");
    } 
  }
}
int main () {
  setup_routes ();
  fprintf (stdout , "All routes registered.\n");
  start_fastcgi_app ();
  return 0;
}
