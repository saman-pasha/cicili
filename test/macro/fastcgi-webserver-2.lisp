(header "router.h" ()
        (guard __ROUTER_H__
          (include <stdio.h> <stdlib.h> <string.h> <fcgiapp.h>)

          ;; Define Route structure
          (struct Route
            (member char * method)
            (member char * path)
            (member func handler ((FCGX_Request * req)))
            (member char * params))                                        ;; Store request parameters

          (method Route->handle ((FCGX_Request * req)))                    ;; Middleware processing
          (method Route->get_param ((char * param_name) (char * output)))  ;; Extract individual parameter

          ;; Global routing storage
          (var Route[] routesList)
          (var int routesCount)

          ;; Function declarations
          {decl} (func process_routes ((FCGX_Request * req)))
          {decl} (func parse_query_params ((char * query_string)))
          {decl} (func parse_post_data ((FCGX_Request * req)))))

(source "router.c" (:std #t :compile #t :link #f)
        (include "router.h")

        ;; Middleware hooks
        (func before_request ((FCGX_Request * req))
              (format #t "Middleware: Before request.\n"))  ;; Example: Logging
        
        (func after_request ((FCGX_Request * req))
              (format #t "Middleware: After request.\n"))  ;; Example: Response transformation

        ;; Handle request with middleware
        (method Route->handle ((FCGX_Request * req))
                (before_request req)  
                (return (($ this handler) req))  
                (after_request req))

        ;; Extract individual query/form parameter
        (method Route->get_param ((char * param_name) (char * output))
                (if ($ this params)
                    (let ((char * param_start . #'(strstr ($ this params) param_name)))
                      (if param_start
                          (begin
                           (set param_start (+ param_start (strlen param_name)))  
                           (let ((char * delimiter . #'(strchr param_start '&')))  
                             (if delimiter
                                 (strncpy output param_start (- delimiter param_start))
                                 (strcpy output param_start)))))
                      (strcpy output "")))
                (strcpy output ""))  

        ;; Parse query string parameters (GET)
        (func parse_query_params ((char * query_string))
              (let ((char params [256]))  
                (if query_string
                    (strncpy params query_string (strlen query_string))
                    (set params ""))
                (return params)))

        ;; Parse form data (POST)
        (func parse_post_data ((FCGX_Request * req))
              (let ((char * clstr . #'(FCGX_GetParam "CONTENT_LENGTH" ($ req envp)))
                    (int content_len . 0))
                (when clstr
                  (set content_len (atoi clstr)))
                (let ((char request_body [1024]))  
                  (when (> content_len 1024)
                    (set content_len 1023))
                  (set content_len (FCGX_GetStr request_body content_len ($ req in)))
                  (return request_body))))

        ;; Process incoming requests based on routes
        (func process_routes ((FCGX_Request * req))
              (let ((char * rq_method . #'(FCGX_GetParam "REQUEST_METHOD" ($ req envp)))
                    (char * rq_uri . #'(FCGX_GetParam "REQUEST_URI" ($ req envp)))
                    (char * query_params . #'(FCGX_GetParam "QUERY_STRING" ($ req envp)))
                    (int i . 0))
                (while (< i routesCount)
                  (let ((Route r . #'(nth i routesList)))
                    (when (and (== (strcmp ($ r path) rq_uri) 0)
                            (== (strcmp ($ r method) rq_method) 0))
                      (set ($ r params)
                        (if (== (strcmp rq_method "GET") 0)
                            (parse_query_params query_params)
                            (parse_post_data req)))
                      (-> r handle req)  
                      (return))
                    (1+ i)))
                (FCGX_PutS "HTTP/1.1 404 Not Found\r\nContent-Type: text/plain\r\n\r\nPage not found.\n" ($ req out)))))

(source "app.c" (:std #t :compile #t :link "-lfcgi router_lib -o fastcgi_server")
  (include "router.h")
  (include <fcgiapp.h>)

  ;; Define grouped routes dynamically with prefix handling
  (DEFMACRO node (uri_prefix &REST routes)
    `(var Route[] routesList . {
       ,@(MAPCAR #'(lambda (route)
           (LET ((http_method (FIRST route))
                 (route_path (FORMAT NIL "~A~A" uri_prefix (SECOND route)))  
                 (safe_route_path (STRING-REPLACE "/" "_" route_path)))
             `#'(('lambda ()
                  (let ((Route r))
                    (set ($ r method) ,(STRING-UPCASE (SYMBOL-NAME http_method)))
                    (set ($ r path) ,route_path)  
                    (set ($ r handler) '(lambda ((FCGX_Request * req))
                      (let (
                        ,@(MAPCAR #'(lambda (binding)
                            (LET ((param_name (FIRST binding))
                                  (var_name (SECOND binding)))
                              `(var char ,var_name [128] . #'(-> req get_param ,param_name ,var_name)))))
                          (CDDR route)))
                        ,@(CDDR route))))  
                    r))))))
         routes)))

  ;; Register API routes with parameters
  (node "/api"
    (GET "/search" (("query" query_param))
      (format #t "Search query received: %s\n" query_param)
      (FCGX_PutS "HTTP/1.1 200 OK\r\nContent-Type: text/plain\r\n\r\nSearch completed.\n" ($ req out)))

    (POST "/submit" (("username" user_name) ("email" user_email))
      (format #t "Received form submission: username=%s, email=%s\n" user_name user_email)
      (FCGX_PutS "HTTP/1.1 200 OK\r\nContent-Type: text/plain\r\n\r\nData successfully submitted.\n" ($ req out)))
  )

  ;; Start FastCGI Server
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
