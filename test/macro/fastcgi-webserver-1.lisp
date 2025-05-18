;;;; FastCGI Cicili Web Server

(header "webserver.h" ()
        (guard __WEB_SERVER__
          (include <stdio.h> <stdlib.h> <string.h> <fcgiapp.h>)

          ;; Define the Route structure.
          (struct Route
            (member char * method)
            (member char * path)
            (member func handler ((FCGX_Request * req)))
            (member func pre_handler ((FCGX_Request * req)))    ; optional pre-handler
            (member func post_handler ((FCGX_Request * req)))   ; optional post-handler
            )

          ;; Global routing storage: an array of Route pointers and a count.
          (var Route * routesList)
          (var int routesCount)

          ;; Function declarations.
          (decl) (func register_route ((Route route)))
          (decl) (func process_routes ((FCGX_Request * req)))
          )
        )

;;;
;;; Macro definitions
;;;

;;; Low-level basic-route macro that accepts explicit pre and post handler arguments.
(DEFMACRO basic-route (http_method route_path params pre post &REST body)
  "Declare a route with PARAMS (list of [query-name local-var] pairs),
     the PRE and POST handler functions, and the main HANDLER BODY.
     Route parameters are automatically copied using copy-all-route-params."
  `(let ((Route r . '{
                $method       ,(STRING-UPCASE (SYMBOL-NAME http_method))
                $path         ,route_path
                $pre_handler  ,pre
                $post_handler ,post
                $handler      '(lambda ((FCGX_Request * req))
                                (let (,@(APPLY
                                         #'APPEND
                                         (MAPCAR
                                          (LAMBDA (pair)  ; mutation and retain request data guard
                                            (DESTRUCTURING-BIND (local pname) pair
                                              (LIST `(defer #t)
                                                    `(char * ,local . #'(param_dup (FCGX_GetParam
                                                                                       ,(IF (SYMBOLP pname)
                                                                                            (SYMBOL-NAME pname)
                                                                                            pname)
                                                                                     ($ req envp)))))))
                                          params)))
                                  ,@body))
                }))
     (register_route r)))

;;; User-friendly macro for individual (non-node) routes.
(DEFMACRO route (http_method route_path params &REST body)
  "Define a non-node route with automatic nil for pre- and post-handlers."
  `(basic-route ,http_method ,route_path ,params nil nil ,@body))

;;; Node macro that groups routes under a common prefix and applies default
;;; node-level pre and post handlers to every contained route.
(DEFMACRO node (node_fn prefix node_pre node_post &REST routes)
  "Define a setup function NODE_FN that registers routes with PREFIX prepended.
     All routes in this node use NODE_PRE as their pre-handler and NODE_POST as their post-handler."
  `(func ,node_fn ()
         ,@(MAPCAR
            (LAMBDA (r)
              (DESTRUCTURING-BIND (route method orig-path params . body) r
                (LET ((new-path (CONCATENATE 'STRING prefix orig-path)))
                  `(basic-route ,method ,new-path ,params ,node_pre ,node_post ,@body))))
            routes)))

(source "webserver.c" (:std #t :compile #t :link "-L{$CWD} -lwebserver.o -lfcgi -o fastcgi_server")
        (include "webserver.h")

        ;; utiliti to copy null terminated string if not null
        (func param_dup ((const char * param)) (out char *)
              (return (? param (strdup param) nil)))
        
        ;;
        ;; Router implementation
        ;;
        (func register_route ((Route route))
              (format #t "Registering route: %s\n" ($ route path))
              ;; Allocate the routes array when registering the first route.
              (when (== routesCount 0)
                (set routesList (calloc 10 (sizeof Route))))
              (set (nth routesCount routesList) route)
              (set routesCount (+ routesCount 1))
              (return))

        (method Route->handle ((FCGX_Request * req))
                ;; Call pre-handler if defined.
                (when ($ this pre_handler) (($ this pre_handler) req))
                (($ this handler) req)
                ;; Call post-handler if defined.
                (when ($ this post_handler) (($ this post_handler) req)))

        (func process_routes ((FCGX_Request * req))
              (let ((char * rq_method . #'(FCGX_GetParam "REQUEST_METHOD" ($ req envp)))
                    (char * rq_uri    . #'(FCGX_GetParam "REQUEST_URI" ($ req envp)))
                    (int i . 0))
                (format #t "Processing request: %s %s\n" rq_method rq_uri)
                (while (< i routesCount)
                  (let ((Route route . #'(nth i routesList)))
                    (when (== (strcmp ($ route path) rq_uri) 0)
                      (-> route handle req)
                      (return))
                    (set i (+ i 1))))
                (FCGX_PutS "HTTP/1.1 404 Not Found\r\nContent-Type: text/plain\r\n\r\n" ($ req out))
                (FCGX_PutS "Page Not Found\n" ($ req out))))

        (node setup_api_routes "/api"
              ;; Default pre-handler for the API node.
              '(lambda ((FCGX_Request * req)) (format #t "Entering API route\n"))
              ;; Default post-handler for the API node.
              '(lambda ((FCGX_Request * req)) (format #t "Exiting API route\n"))
              (route GET "/list" ((uid QUERY_STRING))
                     ;; The copied parameter uid is available here.
                     (if uid
                         (format #t "API List: userId=%s\n" uid)
                         (format #t "API List: no userId provided\n"))
                     (FCGX_PutS "HTTP/1.1 200 OK\r\nContent-Type: text/plain\r\n\r\n" ($ req out))
                     (FCGX_PutS "API List\n" ($ req out)))
              
              (route POST "/update" ((tkn token))
                     (if tkn
                         (format #t "POST token: %s\n" tkn)
                         (format #t "No token provided!\n"))
                     (let ((char * clstr . #'(FCGX_GetParam "CONTENT_LENGTH" ($ req envp)))
                           (int content_len . 0))
                       (when clstr (set content_len (atoi clstr)))
                       (let ((char request_body [1024]))
                         (when (> content_len 1024) (set content_len 1023))
                         (set content_len (FCGX_GetStr request_body content_len ($ req in)))
                         (defer* ((int content_len))
                           (format #t "Cleaning up: content length was %d\n" content_len))
                         (format #t "Received API POST data: %.*s\n" content_len request_body)
                         (FCGX_PutS "HTTP/1.1 200 OK\r\nContent-Type: text/plain\r\n\r\n" ($ req out))
                         (FCGX_PutS "API POST data processed.\n" ($ req out))))))

        (node setup_admin_routes "/admin"
              '(lambda ((FCGX_Request * req)) (format #t "Entering Admin route\n"))
              '(lambda ((FCGX_Request * req)) (format #t "Exiting Admin route\n"))
              (route GET "/dashboard" ()
                     (FCGX_PutS "HTTP/1.1 200 OK\r\nContent-Type: text/plain\r\n\r\n" ($ req out))
                     (FCGX_PutS "Admin Dashboard\n" ($ req out)))
              
              (route GET "/settings" ()
                     (FCGX_PutS "HTTP/1.1 200 OK\r\nContent-Type: text/plain\r\n\r\n" ($ req out))
                     (FCGX_PutS "Admin Settings\n" ($ req out))))

        ;;
        ;; Application routes and server setup
        ;; Should be after all node definitions
        (func setup_routes ()
              ;; Define individual routes using the user-friendly route macro.
              (route GET "/" ()
                     (FCGX_PutS "HTTP/1.1 200 OK\r\nContent-Type: text/plain\r\n\r\n" ($ req out))
                     (FCGX_PutS "Welcome to the FastCGI Cicili Server!\n" ($ req out)))
              
              (route GET "/about" ()
                     (FCGX_PutS "HTTP/1.1 200 OK\r\nContent-Type: text/plain\r\n\r\n" ($ req out))
                     (FCGX_PutS "About: This is a sample Cicili application.\n" ($ req out)))
              
              ;; Register node-based routes.
              (setup_api_routes)
              (setup_admin_routes))
        
        (func start_fastcgi_app ()
              (let ((int server_fd . -1)
                    (char * server_path . "/opt/local/var/run/fcgi.sock")
                    (FCGX_Request request))
                (FCGX_Init)
                (set server_fd (FCGX_OpenSocket server_path 5))
                (defer* ((int server_fd))
                  (format #t "Closing server socket with FD: %d\n" server_fd))
                (FCGX_InitRequest (aof request) server_fd 0)
                (format #t "Server running on socket %s with FD %d ...\n" server_path server_fd)
                (while #t
                  (if (== (FCGX_Accept_r (aof request)) 0)
                      (process_routes (aof request))
                      (format #f "Failed to accept request.\n")))))

        (func main () (out int)
              (setup_routes)
              (format #t "All routes registered.\n")
              (start_fastcgi_app)
              (return 0))
        )
