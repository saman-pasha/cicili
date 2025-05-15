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
static void __ciciliL_108 (FCGX_Request * req) {
  FCGX_PutS ("HTTP/1.1 200 OK\r\nContent-Type: text/plain\r\n\r\n", (req ->out ));
  FCGX_PutS ("Welcome to the FastCGI Cicili Server!\n", (req ->out ));
}
static void __ciciliL_114 (FCGX_Request * req) {
  FCGX_PutS ("HTTP/1.1 200 OK\r\nContent-Type: text/plain\r\n\r\n", (req ->out ));
  FCGX_PutS ("About: This is a sample Cicili application.\n", (req ->out ));
}
static void __ciciliL_120 (FCGX_Request * req) {
  FCGX_PutS ("HTTP/1.1 200 OK\r\nContent-Type: text/plain\r\n\r\n", (req ->out ));
  FCGX_PutS ("Hello, FastCGI World!\n", (req ->out ));
}
static void __ciciliL_126 (FCGX_Request * req) {
  { /* cicili#Let128 */
    char api_endpoint[50];
    string_substr (FCGX_GetParam ("REQUEST_URI", (req ->envp )), 5, 49, api_endpoint );
    fprintf (stdout , "API handler received endpoint: %s\n", api_endpoint );
    FCGX_PutS ("HTTP/1.1 200 OK\r\nContent-Type: application/json\r\n\r\n", (req ->out ));
    FCGX_PutS ("{\"status\":\"API response\"}\n", (req ->out ));
  }
}
static void __ciciliL_136 (FCGX_Request * req) {
  { /* cicili#Let138 */
    char * clstr = FCGX_GetParam ("CONTENT_LENGTH", (req ->envp ));
    int content_len = 0;
    if (clstr ) 
      { /* cicili#Block143 */
        content_len  = atoi (clstr );
      } /* cicili#Block143 */

    { /* cicili#Let145 */
      char request_body[1024];
      if (content_len  >  1024 ) 
        { /* cicili#Block150 */
          content_len  = 1023;
        } /* cicili#Block150 */

      content_len  = FCGX_GetStr (request_body , content_len , (req ->in ));
      fprintf (stdout , "Received POST data: %.*s\n", content_len , request_body );
      FCGX_PutS ("HTTP/1.1 200 OK\r\nContent-Type: text/plain\r\n\r\n", (req ->out ));
      FCGX_PutS ("POST data processed.\n", (req ->out ));
    }
  }
}
void setup_routes () {
  { /* cicili#Let106 */
    Route r;
    (r . method ) = "GET";
    (r . path ) = "/";
    (r . handler ) = __ciciliL_108 ;
    register_route (r );
  }
  { /* cicili#Let112 */
    Route r;
    (r . method ) = "GET";
    (r . path ) = "/about";
    (r . handler ) = __ciciliL_114 ;
    register_route (r );
  }
  { /* cicili#Let118 */
    Route r;
    (r . method ) = "GET";
    (r . path ) = "/hello";
    (r . handler ) = __ciciliL_120 ;
    register_route (r );
  }
  { /* cicili#Let124 */
    Route r;
    (r . method ) = "GET";
    (r . path ) = "/api/";
    (r . handler ) = __ciciliL_126 ;
    register_route (r );
  }
  { /* cicili#Let134 */
    Route r;
    (r . method ) = "POST";
    (r . path ) = "/submit";
    (r . handler ) = __ciciliL_136 ;
    register_route (r );
  }
}
void start_fastcgi_app () {
  { /* cicili#Let155 */
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
