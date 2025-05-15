                                        ;------------------------------------------------------------
                                        ; File: copilot_fastcgi_webserver.lisp
                                        ;------------------------------------------------------------

(header "router.h" ()
        (guard __ROUTER_H__
          (include <stdio.h> <stdlib.h> <string.h> <fcgiapp.h>)

          ;; Define the Route structure.
          (struct Route
            (member char * method)
            (member char * path)
            (member func handler ((FCGX_Request * req))))

          ;; Global routing storage.
          (var Route * routesList)
          (var int routesCount)

          ;; Declarations:
          {decl} (method Route->handle ((FCGX_Request * req)))
          {decl} (func register_route ((Route route)))
          {decl} (func process_routes ((FCGX_Request * req)))))

                                        ;------------------------------------------------------------
                                        ; Macros (processed during Cicili compilation)
                                        ;------------------------------------------------------------

(DEFMACRO route (http_method route_path &REST body)
  `(let ((Route r))
     (set ($ r method) ,(STRING-UPCASE (SYMBOL-NAME http_method)))
     (set ($ r path) ,route_path)
     (set ($ r handler) '(lambda ((FCGX_Request * req)) ,@body))
     (register_route r)))

                                        ;------------------------------------------------------------
                                        ; Router Implementation
                                        ;------------------------------------------------------------

(source "router.c" (:std #t :compile #t :link #f)
        (include "router.h")

        (var Route * routesList . nil)
        (var int routesCount . 0)

        (func register_route ((Route route))
              (format #t "Route %s\n" ($ route path))
              (when (== routesCount 0)
                (set routesList (calloc 10 (sizeof Route))))
              (set (nth (1+ routesCount) routesList) route))

        (method Route->handle ((FCGX_Request * req))
                (return (($ this handler) req)))

        (func process_routes ((FCGX_Request * req))
              (format #t "Processing request: %d ...\n" ($ req requestId))
              (let ((char * rq_method . #'(FCGX_GetParam "REQUEST_METHOD" ($ req envp)))
                    (char * rq_uri    . #'(FCGX_GetParam "REQUEST_URI"    ($ req envp)))
                    (int  i . 0))
                (format #t "Requested METHOD: %s, URI: %s\n" rq_method rq_uri)
                (while (< i routesCount)
                  (let ((Route r . #'(nth i routesList)))
                    (when (or (== (strcmp ($ r path) rq_uri) 0)
                            (and (== (strcmp ($ r path) "/api/") 0)
                              (== (strncmp rq_uri "/api/" 5) 0)))
                      (-> r handle req)
                      (return))
                    (1+ i)))
                (FCGX_PutS "HTTP/1.1 404 Not Found\r\nContent-Type: text/plain\r\n\r\n" ($ req out))
                (FCGX_PutS "Page not found.\n" ($ req out)))))

                                        ;------------------------------------------------------------
                                        ; Application Logic
                                        ;------------------------------------------------------------

(source "app.c" (:std #t :compile #t :link "-L{$CWD} router.lo -lapp.o -lfcgi -o fastcgi_server")
        (include "router.h")
        (include <fcgiapp.h>)

        (func string_substr ((char * source) (int start) (int length) (char * destination))
              (strncpy destination (+ source start) length)
              (set (nth length destination) #\Null))  ;; Ensure null termination
        
        (func setup_routes ()
              ;; Define GET routes using the `route` macro.
              (route GET "/"
                     (FCGX_PutS "HTTP/1.1 200 OK\r\nContent-Type: text/plain\r\n\r\n" ($ req out))
                     (FCGX_PutS "Welcome to the FastCGI Cicili Server!\n" ($ req out)))

              (route GET "/about"
                     (FCGX_PutS "HTTP/1.1 200 OK\r\nContent-Type: text/plain\r\n\r\n" ($ req out))
                     (FCGX_PutS "About: This is a sample Cicili application.\n" ($ req out)))

              (route GET "/hello"
                     (FCGX_PutS "HTTP/1.1 200 OK\r\nContent-Type: text/plain\r\n\r\n" ($ req out))
                     (FCGX_PutS "Hello, FastCGI World!\n" ($ req out)))

              ;; API Route
              (route GET "/api/"
                     (let ((char api_endpoint [50])) ;; Allocate space
                       (string_substr (FCGX_GetParam "REQUEST_URI" ($ req envp)) 5 49 api_endpoint)
                       (format #t "API handler received endpoint: %s\n" api_endpoint)
                       (FCGX_PutS "HTTP/1.1 200 OK\r\nContent-Type: application/json\r\n\r\n" ($ req out))
                       (FCGX_PutS "{\"status\":\"API response\"}\n" ($ req out))))

              ;; POST Route for "/submit"
              (route POST "/submit"
                     (let ((char * clstr . #'(FCGX_GetParam "CONTENT_LENGTH" ($ req envp)))
                           (int content_len . 0))
                       (when clstr
                         (set content_len (atoi clstr)))
                       (let ((char request_body [1024]))
                         (when (> content_len 1024)
                           (set content_len 1023))
                         (set content_len (FCGX_GetStr request_body content_len ($ req in)))
                         (format #t "Received POST data: %.*s\n" content_len request_body)
                         (FCGX_PutS "HTTP/1.1 200 OK\r\nContent-Type: text/plain\r\n\r\n" ($ req out))
                         (FCGX_PutS "POST data processed.\n" ($ req out))))))

        ;; FastCGI Server Loop
        (func start_fastcgi_app ()
              (let ((int server_fd . -1)
                    (char * server_path . "/opt/local/var/run/fcgi.sock") ; ":9000"
                    (FCGX_Request request))
                (FCGX_Init)
                (set server_fd (FCGX_OpenSocket server_path 5))
                (FCGX_InitRequest (aof request) server_fd 0)
                (format #t "Server FD: %d, FastCGI server running on %s ...\n" server_fd server_path)
                (while #t
                  (if (== (FCGX_Accept_r (aof request)) 0)
                      (process_routes (aof request))
                      (format #f "Unable to accept request.\n")))))

        (func main () (out int)
              (setup_routes) ;; Register all routes before starting the server
              (format #t "All routes registered.\n")
              (start_fastcgi_app)
              (return 0))
        )
