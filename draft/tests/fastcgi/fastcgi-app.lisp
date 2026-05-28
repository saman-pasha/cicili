
(import "../../fastcgi/macros.lisp")

(source "fastcgi_app.c"
  (make :std #t
        :haskell #t
        :compile #t
        :link "-L{$CCL}draft/fastcgi -lrouter.o -L{$CWD} -lfastcgi_app.o -lfcgi -o fastcgi_app")
  
  (include "draft/fastcgi/router.h")
  (include <unistd.h>)

  ;; Middleware hooks
  (func beforeRequest ((Request rr))
        (debug! (format #t "Middleware: Before request.\n")))  ;; Example: Logging
  
  (func afterRequest ((Request rr))
        (debug! (format #t "Middleware: After request.\n")))  ;; Example: Response transformation

  ;; Entry Point
  (func main () (out int)
        
        ;; Define and start a Router using router macro
        (letin* ((result (make-router (MakeDetailedRouter "/usr/local/var/run/fcgi.sock"
                                        routes  ; available in make-router macro
                                        3       ; socket backlog
                                        1024    ; max payload content length
                                        beforeRequest ; middleware processing
                                        afterRequest  ; middleware processing
                                        (True)) ; multi-threading
                           ;; route definitions
                           ;; warning! all params, queries and forms will be freed at the end of request
                           '("/index"
                             METHOD_GET
                             '(lambda ((Request rr)) ; lambda or any handler (function pointer)
                               (io rr
                                 (* _ req uri method
                                    (block (FCGX_PutS "HTTP/1.1 200 OK\r\n" (-> req out))
                                           (FCGX_PutS "Content-Type: text/plain\r\n\r\n" (-> req out))
                                           (FCGX_FPrintF (-> req out) "Index page. uri: %s, method: %s\n" uri method)
                                           (io ((<> param Request) rr "QUERY_STRING")
                                             (Just query_string
                                               (FCGX_FPrintF (-> req out) "QUERY_STRING: %s\n" query_string))
                                             (Nothing (FCGX_PutS "There isn't QUERY_STRING" (-> req out)))))))))
                           
                           '("/search"
                             METHOD_GET
                             '(lambda ((Request rr))
                               (info! (format #t "seaching...\n"))
                               (io rr
                                 (* _ req _ _ query_string
                                    (io ((<> query Request) rr "phrase")
                                      (Just (\, phrase len)
                                        (block (FCGX_PutS "HTTP/1.1 200 OK\r\n" (-> req out))
                                               (FCGX_PutS "Content-Type: text/plain\r\n\r\n" (-> req out))
                                               (FCGX_PutS "Search page. phrase: " (-> req out))
                                               (FCGX_FPrintF (-> req out) "%.*s" len phrase)
                                               (FCGX_FPrintF (-> req out) " from query: %s\n" query_string)))
                                      (Nothing (FCGX_PutS "HTTP/1.1 400 Bad Request\r\n" (-> req out))))))))
                           
                           '("/newuser"
                             (bitor METHOD_GET METHOD_POST)
                             '(lambda ((Request rr))
                               (info! (format #t "newuser...\n"))
                               (io rr
                                 (* _ req _ method _ post_data
                                    (if (== (strcmp method "GET") 0)
                                        (block (FCGX_PutS "HTTP/1.1 200 OK\r\n" (-> req out))
                                               (FCGX_PutS "Content-Type: text/html\r\n\r\n" (-> req out))
                                               (FCGX_PutS "<html><head><title>New User</title></head><body>" (-> req out))
                                               (FCGX_PutS "<form action\"/newuser\" method=\"post\">" (-> req out))
                                               (FCGX_PutS "<br/>User Id: <input type=\"text\" name=\"id\"/>" (-> req out))
                                               (FCGX_PutS "<br/>User Name: <input type=\"text\" name=\"name\"/>" (-> req out))
                                               (FCGX_PutS "<br/><button type=\"submit\">Register</button>" (-> req out))
                                               (FCGX_PutS "</form></body></html>" (-> req out)))
                                        (io ((<> form Request) rr "id")
                                          (Just (\, userId lenId) -> ((<> form Request) rr "name")
                                                (Just (\, userName lenName)
                                                  (block (sleep 10)
                                                         (FCGX_PutS "HTTP/1.1 200 OK\r\n" (-> req out))
                                                         (FCGX_PutS "Content-Type: text/html\r\n\r\n" (-> req out))
                                                         (FCGX_PutS "<br/>New user page. userId: " (-> req out))
                                                         (FCGX_FPrintF (-> req out) "%.*s" lenId userId)
                                                         (FCGX_PutS "<br/>New user page. userName: " (-> req out))
                                                         (FCGX_FPrintF (-> req out) "%.*s" lenName userName)
                                                         (FCGX_FPrintF (-> req out) "<br/>from form: %s\n" post_data)))
                                                (Nothing (FCGX_PutS "HTTP/1.1 400 Bad Request\r\n" (-> req out)))))))))))))
          
          (io result
            (Right fd (format #t "FasstCGI server on FD: %d was quitet successfully" fd))
            (Left err (block (format #t "FasstCGI server was quitet with error: ")
                             ((<> show RouterError) err))))) ; letin*
        
        (return EXIT_SUCCESS))

  ) ; fastcgi_app.c
