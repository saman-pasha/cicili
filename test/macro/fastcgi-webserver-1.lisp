;;;; FastCGI Cicili Web Server - Full Code**

(header "router.h" ()
  (guard __ROUTER_H__
    (include <stdio.h> <stdlib.h> <string.h> <fcgiapp.h>)

    ;; Define the Route structure.
    (struct Route
      (member char * method)
      (member char * path)
      (member func handler ((FCGX_Request * req))))

    ;; Global routing storage.
    (var Route[] routesList)
    (var int routesCount)

    ;; Function declarations.
    {decl} (func process_routes ((FCGX_Request * req)))
  ))

(source "router.c" (:std #t :compile #t :link #f)
  (include "router.h")

  ;; Function to process requests based on defined routes.
  (func process_routes ((FCGX_Request * req))
    (format #t "Processing request: %d ...\n" ($ req requestId))
    (let ((char * rq_method . #'(FCGX_GetParam "REQUEST_METHOD" ($ req envp)))
          (char * rq_uri . #'(FCGX_GetParam "REQUEST_URI" ($ req envp)))
          (int i . 0))
      (format #t "Requested METHOD: %s, URI: %s\n" rq_method rq_uri)
      (while (< i routesCount)
        (let ((Route r . #'(nth i routesList)))
          (when (and (== (strcmp ($ r path) rq_uri) 0)
                     (== (strcmp ($ r method) rq_method) 0))
            (($ r handler) req)
            (return))
          (1+ i)))
      (FCGX_PutS "HTTP/1.1 404 Not Found\r\nContent-Type: text/plain\r\n\r\n" ($ req out))
      (FCGX_PutS "Page not found.\n" ($ req out)))))

(source "app.c" (:std #t :compile #t :link "-lfcgi router_lib -o fastcgi_server")
  (include "router.h")
  (include <fcgiapp.h>)

  ;; Route definitions using `node` macro.
  (node
    (GET "/" 
      (FCGX_PutS "HTTP/1.1 200 OK\r\nContent-Type: text/plain\r\n\r\nWelcome to the FastCGI Cicili Server!\n" ($ req out)))

    (GET "/about" 
      (FCGX_PutS "HTTP/1.1 200 OK\r\nContent-Type: text/plain\r\n\r\nAbout: Cicili FastCGI Web Server example.\n" ($ req out)))

    (GET "/hello" 
      (FCGX_PutS "HTTP/1.1 200 OK\r\nContent-Type: text/plain\r\n\r\nHello, FastCGI World!\n" ($ req out)))

    (GET "/api/" 
      (let ((char api_endpoint [50])) 
        (string_substr (FCGX_GetParam "REQUEST_URI" ($ req envp)) 5 49 api_endpoint)
        (FCGX_PutS "HTTP/1.1 200 OK\r\nContent-Type: application/json\r\n\r\n{\"status\":\"API response\", \"endpoint\":\"" ($ req out))
        (FCGX_PutS api_endpoint ($ req out))
        (FCGX_PutS "\"}\n" ($ req out))))

    (POST "/submit" 
      (let ((char * clstr . #'(FCGX_GetParam "CONTENT_LENGTH" ($ req envp)))
            (int content_len . 0))
        (when clstr
          (set content_len (atoi clstr)))
        (let ((char request_body [1024])) 
          (when (> content_len 1024)
            (set content_len 1023))
          (set content_len (FCGX_GetStr request_body content_len ($ req in)))
          (FCGX_PutS "HTTP/1.1 200 OK\r\nContent-Type: text/plain\r\n\r\nPOST data processed.\n" ($ req out)))))

    (GET "/404"
      (FCGX_PutS "HTTP/1.1 404 Not Found\r\nContent-Type: text/plain\r\n\r\nOops! Page not found.\n" ($ req out)))
  )

  ;; FastCGI Server Initialization
  (func start_fastcgi_app ()
    (let ((int server_fd . #'(FCGX_OpenSocket ":9000" 5))
          (FCGX_Request request))
      (FCGX_Init)
      (FCGX_InitRequest (aof request) server_fd 0)
      (format #t "FastCGI server running on port 9000...\n")
      (while #t
        (if (== (FCGX_Accept_r (aof request)) 0)
          (process_routes (aof request))
          (format #f "Unable to accept request.\n")))))

  ;; Entry Point
  (func main () (out int)
    (format #t "FastCGI Cicili Server starting...\n")
    (start_fastcgi_app)
    (return 0)))
