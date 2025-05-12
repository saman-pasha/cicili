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
    (var Route * routesList . nil)
    (var int routesCount . 0)

    ;; Declarations:
    {decl} (func register_route ((Route route)))
    {decl} (method Route->handle ((FCGX_Request * req)))
    {decl} (func process_routes ((FCGX_Request * req)))
  ))

;------------------------------------------------------------
; Macros (processed during Cicili compilation)
;------------------------------------------------------------

(DEFMACRO route (http_method route_path &rest body)
  `(register_route
     (let ((Route r))
       (set ($ r method) ,(string-upcase (symbol-name http_method)))
       (set ($ r path) ,route_path)
       (set ($ r handler) '(lambda ((FCGX_Request * req)) ,@body))
       r)))

;------------------------------------------------------------
; Router Implementation
;------------------------------------------------------------

(source "router.c" (:std #t :compile #t :link #f)
  (include "router.h")

  (func register_route ((Route route))
    (when (== routesCount 0)
      (set routesList (calloc 10 (sizeof Route))))
    (set (nth routesCount routesList) route)
    (set routesCount (+ routesCount 1))
  )

  (method Route->handle ((FCGX_Request * req))
    (return (($ this handler) req))
  )

  (func process_routes ((FCGX_Request * req))
    (let ((char * rq_method . #'(FCGX_GetParam "REQUEST_METHOD" ($ req envp)))
          (char * rq_uri   . #'(FCGX_GetParam "REQUEST_URI" ($ req envp)))
          (int i         . 0))
      (while (< i routesCount)
        (let ((Route r . #'(nth i routesList)))
          (if (or (== (strcmp ($ r path) rq_uri) 0)
                  (and (== (strcmp ($ r path) "/api/") 0)
                       (== (strncmp rq_uri "/api/" 5) 0)))
              (-> r handle req))
          (set i (+ i 1))))
      (FCGX_PutS "HTTP/1.1 404 Not Found\r\nContent-Type: text/plain\r\n\r\nPage not found.\n"
                 ($ req out))
    )
  )
)

;------------------------------------------------------------
; Application Logic
;------------------------------------------------------------

(source "app.c" (:std #t :compile #t :link #t)
  (include "router.h")
  (include <fcgiapp.h>)

  ;; Define GET routes using the `route` macro.
  (route GET "/"
    (FCGX_PutS "HTTP/1.1 200 OK\r\nContent-Type: text/plain\r\n\r\nWelcome to the FastCGI Cicili Server!\n"
               ($ req out)))

  (route GET "/about"
    (FCGX_PutS "HTTP/1.1 200 OK\r\nContent-Type: text/plain\r\n\r\nAbout: This is a sample Cicili application.\n"
               ($ req out)))

  (route GET "/hello"
    (FCGX_PutS "HTTP/1.1 200 OK\r\nContent-Type: text/plain\r\n\r\nHello, FastCGI World!\n"
               ($ req out)))

  ;; API Route
  (route GET "/api/"
    (let ((char * api_endpoint . #'(substring (FCGX_GetParam "REQUEST_URI" ($ req envp)) 5)))
      (format #t "API handler received endpoint: %s\n" api_endpoint)
      (FCGX_PutS "HTTP/1.1 200 OK\r\nContent-Type: application/json\r\n\r\n{\"status\":\"API response\"}\n"
                 ($ req out))))

  ;; POST Route for "/submit"
  (route POST "/submit"
    (let ((char * clstr . #'(FCGX_GetParam "CONTENT_LENGTH" ($ req envp)))
          (int content_len . 0))
      (when clstr
        (set content_len (atoi clstr)))
      (let ((char request_body [1024]))
        (when (> content_len 1024)
          (set content_len 1023))
        (set content_len (FCGX_GetStr request_body 1 content_len ($ req in)))
        (format #t "Received POST data: %s\n" request_body)
        (FCGX_PutS "HTTP/1.1 200 OK\r\nContent-Type: text/plain\r\n\r\nPOST data processed.\n"
                   ($ req out)))))

  ;; FastCGI Server Loop
  (func start_fastcgi_app ()
    (let ((FCGX_Request request))
      (FCGX_Init)
      (set ($ request addr) #'(FCGX_OpenSocket ":9000" 5))
      (format #t "FastCGI server running on port 9000...\n")
      (while #t
        (FCGX_InitRequest (aof request) ($ request addr) 0)
        (if (== (FCGX_AcceptRequest (aof request)) 0)
            (process_routes (aof request)))))
    )

  (func main () (out int)
    (start_fastcgi_app)
    (return 0))
)
