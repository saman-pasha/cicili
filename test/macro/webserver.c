#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "webserver.h"
char * param_dup (const char * param) {
  return ((param ) ? strdup (param ) : NULL );
}
void register_route (Route route) {
  fprintf (stdout , "Registering route: %s\n", (route . path ));
  if (routesCount  ==  0 ) 
    { /* cicili#Block106 */
      routesList  = calloc (10, sizeof(Route));
    } /* cicili#Block106 */

  routesList [routesCount ] = route ;
  routesCount  = (routesCount  +  1 );
  return ;
}
void Route_handle (Route * this, FCGX_Request * req) {
  if (this ->pre_handler ) 
    { /* cicili#Block111 */
      (this ->pre_handler )(req );
    } /* cicili#Block111 */

  (this ->handler )(req );
  if (this ->post_handler ) 
    { /* cicili#Block115 */
      (this ->post_handler )(req );
    } /* cicili#Block115 */

}
void process_routes (FCGX_Request * req) {
  { /* cicili#Let118 */
    char * rq_method = FCGX_GetParam ("REQUEST_METHOD", (req ->envp ));
    char * rq_uri = FCGX_GetParam ("REQUEST_URI", (req ->envp ));
    int i = 0;
    fprintf (stdout , "Processing request: %s %s\n", rq_method , rq_uri );
    while ((i  <  routesCount  )) {
      { /* cicili#Let122 */
        Route route = routesList [i ];
        if (strcmp ((route . path ), rq_uri ) ==  0 ) 
          { /* cicili#Block126 */
            Route_handle(&route, req );
            return ;
          } /* cicili#Block126 */

        i  = (i  +  1 );
      }
    } 
    FCGX_PutS ("HTTP/1.1 404 Not Found\r\nContent-Type: text/plain\r\n\r\n", (req ->out ));
    FCGX_PutS ("Page Not Found\n", (req ->out ));
  }
}
static void __ciciliL_132 (FCGX_Request * req) {
  fprintf (stdout , "Entering API route\n");
}
static void __ciciliL_135 (FCGX_Request * req) {
  fprintf (stdout , "Exiting API route\n");
}
static void __ciciliL_141 (char ** uid) {
  free (((void *)(*uid )));
}
static void __ciciliL_138 (FCGX_Request * req) {
  { /* cicili#Let140 */
    char * uid __attribute__((__cleanup__(__ciciliL_141 ))) = param_dup (FCGX_GetParam ("QUERY_STRING", (req ->envp )));
    if (uid ) 
      fprintf (stdout , "API List: userId=%s\n", uid );
    else 
      fprintf (stdout , "API List: no userId provided\n");
    FCGX_PutS ("HTTP/1.1 200 OK\r\nContent-Type: text/plain\r\n\r\n", (req ->out ));
    FCGX_PutS ("API List\n", (req ->out ));
  }
}
static void __ciciliL_151 (FCGX_Request * req) {
  fprintf (stdout , "Entering API route\n");
}
static void __ciciliL_154 (FCGX_Request * req) {
  fprintf (stdout , "Exiting API route\n");
}
static void __ciciliL_160 (char ** tkn) {
  free (((void *)(*tkn )));
}
static struct __ciciliS_182 {
  int content_len;
} __ciciliS_182;
static void __ciciliL_183 (struct __ciciliS_182 * ciciliDefer179_ptr) {
  struct __ciciliS_182 ciciliDefer179 = (*ciciliDefer179_ptr );
  int content_len = (ciciliDefer179_ptr ->content_len );
  fprintf (stdout , "Cleaning up: content length was %d\n", content_len );
}
static void __ciciliL_157 (FCGX_Request * req) {
  { /* cicili#Let159 */
    char * tkn __attribute__((__cleanup__(__ciciliL_160 ))) = param_dup (FCGX_GetParam ("token", (req ->envp )));
    if (tkn ) 
      fprintf (stdout , "POST token: %s\n", tkn );
    else 
      fprintf (stdout , "No token provided!\n");
    { /* cicili#Let167 */
      char * clstr = FCGX_GetParam ("CONTENT_LENGTH", (req ->envp ));
      int content_len = 0;
      if (clstr ) 
        { /* cicili#Block171 */
          content_len  = atoi (clstr );
        } /* cicili#Block171 */

      { /* cicili#Let173 */
        char request_body[1024];
        if (content_len  >  1024 ) 
          { /* cicili#Block177 */
            content_len  = 1023;
          } /* cicili#Block177 */

        content_len  = FCGX_GetStr (request_body , content_len , (req ->in ));
        struct __ciciliS_182 ciciliDefer179 __attribute__((__cleanup__(__ciciliL_183 ))) = { content_len };
        fprintf (stdout , "Received API POST data: %.*s\n", content_len , request_body );
        FCGX_PutS ("HTTP/1.1 200 OK\r\nContent-Type: text/plain\r\n\r\n", (req ->out ));
        FCGX_PutS ("API POST data processed.\n", (req ->out ));
      }
    }
  }
}
void setup_api_routes () {
  { /* cicili#Let131 */
    Route r = { .method = "GET", .path = "/api/list", .pre_handler = __ciciliL_132 , .post_handler = __ciciliL_135 , .handler = __ciciliL_138 };
    register_route (r );
  }
  { /* cicili#Let150 */
    Route r = { .method = "POST", .path = "/api/update", .pre_handler = __ciciliL_151 , .post_handler = __ciciliL_154 , .handler = __ciciliL_157 };
    register_route (r );
  }
}

static void __ciciliL_192 (FCGX_Request * req) {
  fprintf (stdout , "Entering Admin route\n");
}
static void __ciciliL_195 (FCGX_Request * req) {
  fprintf (stdout , "Exiting Admin route\n");
}
static void __ciciliL_198 (FCGX_Request * req) {
  { /* cicili#Let200 */
    FCGX_PutS ("HTTP/1.1 200 OK\r\nContent-Type: text/plain\r\n\r\n", (req ->out ));
    FCGX_PutS ("Admin Dashboard\n", (req ->out ));
  }
}
static void __ciciliL_205 (FCGX_Request * req) {
  fprintf (stdout , "Entering Admin route\n");
}
static void __ciciliL_208 (FCGX_Request * req) {
  fprintf (stdout , "Exiting Admin route\n");
}
static void __ciciliL_211 (FCGX_Request * req) {
  { /* cicili#Let213 */
    FCGX_PutS ("HTTP/1.1 200 OK\r\nContent-Type: text/plain\r\n\r\n", (req ->out ));
    FCGX_PutS ("Admin Settings\n", (req ->out ));
  }
}
void setup_admin_routes () {
  { /* cicili#Let191 */
    Route r = { .method = "GET", .path = "/admin/dashboard", .pre_handler = __ciciliL_192 , .post_handler = __ciciliL_195 , .handler = __ciciliL_198 };
    register_route (r );
  }
  { /* cicili#Let204 */
    Route r = { .method = "GET", .path = "/admin/settings", .pre_handler = __ciciliL_205 , .post_handler = __ciciliL_208 , .handler = __ciciliL_211 };
    register_route (r );
  }
}

static void __ciciliL_219 (FCGX_Request * req) {
  { /* cicili#Let221 */
    FCGX_PutS ("HTTP/1.1 200 OK\r\nContent-Type: text/plain\r\n\r\n", (req ->out ));
    FCGX_PutS ("Welcome to the FastCGI Cicili Server!\n", (req ->out ));
  }
}
static void __ciciliL_226 (FCGX_Request * req) {
  { /* cicili#Let228 */
    FCGX_PutS ("HTTP/1.1 200 OK\r\nContent-Type: text/plain\r\n\r\n", (req ->out ));
    FCGX_PutS ("About: This is a sample Cicili application.\n", (req ->out ));
  }
}
void setup_routes () {
  { /* cicili#Let218 */
    Route r = { .method = "GET", .path = "/", .pre_handler = NULL , .post_handler = NULL , .handler = __ciciliL_219 };
    register_route (r );
  }
  { /* cicili#Let225 */
    Route r = { .method = "GET", .path = "/about", .pre_handler = NULL , .post_handler = NULL , .handler = __ciciliL_226 };
    register_route (r );
  }
  setup_api_routes ();
  setup_admin_routes ();
}
static struct __ciciliS_237 {
  int server_fd;
} __ciciliS_237;
static void __ciciliL_238 (struct __ciciliS_237 * ciciliDefer234_ptr) {
  struct __ciciliS_237 ciciliDefer234 = (*ciciliDefer234_ptr );
  int server_fd = (ciciliDefer234_ptr ->server_fd );
  fprintf (stdout , "Closing server socket with FD: %d\n", server_fd );
}
void start_fastcgi_app () {
  { /* cicili#Let232 */
    int server_fd = -1;
    char * server_path = "/opt/local/var/run/fcgi.sock";
    FCGX_Request request;
    FCGX_Init ();
    server_fd  = FCGX_OpenSocket (server_path , 5);
    struct __ciciliS_237 ciciliDefer234 __attribute__((__cleanup__(__ciciliL_238 ))) = { server_fd };
    FCGX_InitRequest ((&request ), server_fd , 0);
    fprintf (stdout , "Server running on socket %s with FD %d ...\n", server_path , server_fd );
    while (true ) {
      if (FCGX_Accept_r ((&request )) ==  0 ) 
        process_routes ((&request ));
      else 
        fprintf (stderr , "Failed to accept request.\n");
    } 
  }
}
int main () {
  setup_routes ();
  fprintf (stdout , "All routes registered.\n");
  start_fastcgi_app ();
  return 0;
}
