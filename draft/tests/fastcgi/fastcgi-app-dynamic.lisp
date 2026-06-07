
(import "draft/fastcgi/macros.lisp")
(import "draft/types/dynamic-macros.lisp")
(import "draft/io/stringbuffer.lisp")

(source "fastcgi_app_dynamic.c"
  (make :std #t
        :haskell #t
        :compile #t
        :link ("-ldraft/fastcgi/router.o" "-ldraft/types/dynamic.o" "-lfastcgi_app_dynamic.o" "-lfcgi" "-o" "fastcgi_app_dynamic"))
  
  (include "draft/fastcgi/router.h")
  (include "draft/types/dynamic.h")
  (include <unistd.h>)

  ;; Middleware hooks
  (func beforeRequest ((Request rr))
        (debug! (format #t "Middleware: Before request.\n")))  ;; Example: Logging
  
  (func afterRequest ((Request rr))
        (debug! (format #t "Middleware: After request.\n")))  ;; Example: Response transformation

  (func range ((i64 from) (i64 to) (i64 step))
        (out DynamicType)
        (return (new^DynamicType (List ((<> Dynamic Integer) from)
                                       ((<> Dynamic Integer) to)
                                       ((<> Dynamic Integer) step)))))

  (func take ((DynamicType args))
        (out DynamicType)
        (return (match# args
                  (dead ((<> Dynamic Error) (strdup "take dead args")))
                  (* List (\: count range _) -># range
                     (dead ((<> Dynamic Error) (strdup "take dead range")))
                     (* List (\: from to step _) (new^DynamicType (List count to step from))) ; do something
                     (default ((<> Dynamic Error) (strdup "take wrong range"))))
                  (default ((<> Dynamic Error) (strdup "take wrong args"))))))
  
  ;; Entry Point
  (func main () (out int)

        (letin ((dt0  (new^DynamicType "pi number is: "))
                (dt1  (new^DynamicType 12))
                (dt2  (new^DynamicType 3.14))
                (dt3  (new^DynamicType true))
                (dt4  (new^DynamicType #t))
                (dt5  (new^DynamicType false))
                (dt6  (new^DynamicType #f))
                (dt7  (new^DynamicType nil))
                (dt8  (new^DynamicType 17.18L))
                (dt9  (new^DynamicType 17L))
                (dt10 (new^DynamicType 12l))
                ;; optional :xml-tag lets to change default '<item>' tag only for List toXml
                (dt12 (new^DynamicType (List :xml-tag "basic" "a string, a float, an integer, a boolean and null"
                                             2.71828
                                             9223372036854775807l
                                             #t
                                             nil)))
                (dt13 (new^DynamicType (Object "id"      12
                                               "name"    "Saman"
                                               "roles"   (List "Founder" "Developer" "Backend")
                                               "data"    dt12
                                               "friends" (List))))
                (dt14 (new^DynamicType (Object :id       22
                                               :name     "Saman's Friend"
                                               :roles    (List :xml-tag "role" "CoFounder" "Developer" "Frontend")
                                               :data     (Object :basics (List dt0 dt1 dt2)
                                                                 :raw nil)
                                               :friends  (List :xml-tag "friend" dt13))))

                (range01 (range 0 1000000 1))
                (thunk02 ((<> Dynamic Thunk) (new^DynamicType (List 5 range01)) take))
                ;; (thunk03 (lazy take 5 range01))
                ) ; letin
          
          ((<> show DynamicType) stdout dt0)
          (format #t " ")
          ((<> show DynamicType) stdout dt2)
          (putchar #\Newline)
          
          (format #t "an integer: ")
          ((<> show DynamicType) stdout dt1)
          (putchar #\Newline)

          (format #t "4 booleans: ")
          ((<> show DynamicType) stdout dt3)
          (format #t " ")
          ((<> show DynamicType) stdout dt4)
          (format #t " ")
          ((<> show DynamicType) stdout dt5)
          (format #t " ")
          ((<> show DynamicType) stdout dt6)
          (putchar #\Newline)
          
          (format #t "long double as float with '.' : ")
          ((<> show DynamicType) stdout dt8)
          (putchar #\Newline)

          (format #t "long double as float without '.' : ")
          ((<> show DynamicType) stdout dt9)
          (putchar #\Newline)

          (format #t "long int as integer: ")
          ((<> show DynamicType) stdout dt10)
          (putchar #\Newline)

          (format #t "a dynamic list: \n")
          ((<> show DynamicType) stdout dt12)
          (putchar #\Newline)

          (putchar #\Newline)
          (format #t "a dynamic object: \n")
          ((<> show DynamicType) stdout dt13)
          (putchar #\Newline)

          ;; test StringBuffer
          (let (((<> StringBuffer char) sb . #'((<> new StringBuffer char) 4 #t)))
            (set sb ((<> print StringBuffer char) sb "123" 3))
            (set sb ((<> print StringBuffer char) sb "123" 3))
            (set sb ((<> print StringBuffer char) sb "123" 3))
            (set sb ((<> print StringBuffer char) sb "123" 3))
            (set sb ((<> put StringBuffer char) sb #\a))
            (set sb ((<> put StringBuffer char) sb #\b))
            (set sb ((<> put StringBuffer char) sb #\c))
            (set sb ((<> put StringBuffer char) sb #\d))
            (set sb ((<> print StringBuffer char) sb "54321" 5))
            
            (io sb
              (NullTerminated buffer cursor size (printf "R1 %s %d %d\n" buffer cursor size))
              (default (printf "R1 sb is freed\n")))

            ((<> free StringBuffer char) (aof sb))
            
            (io sb
              (NullTerminated buffer cursor size (printf "R2 %s %d %d\n" buffer cursor size))
              (default (printf "R2 sb is freed\n"))))
          (putchar #\Newline)

          ;; test json parsing
          (let ((char buffer [1024] . '{ 0 })
                (CFile file . #'(fmemopen buffer (sizeof buffer) "w+")))
            ;; (fprintf file "string &^%%: \n") ; unknown symbol 'string'
            ;; (fprintf file "\"string &^%%: \n\"")
            ;; (fprintf file "3.14.15") ; invalid floating point
            ;; (fprintf file "3.14")
            ;; (fprintf file "9223372036854775807l") ; wrong integer definition
            ;; (fprintf file "9223372036854775807")
            ;; (fprintf file "true")
            ;; (fprintf file "false")
            ;; (fprintf file "null")
            ;; (fprintf file  "[ \"a string, a float, an integer, a boolean and null\", 2.71828, 9223372036854775807 , true ,null ]")
            ;; (fprintf file  "[\"a string, b\", [ 2.71828 ,[true , 9223372036854775807] ],null]")
            ;; (fprintf file  "{\"id\":23, \"name\" :\"a string, b\",\"data\":[ {\"e\":2.71828,\"pi\":3.14},[true , 9223372036854775807] ]} ")
            ;; ((<> toJson DynamicType) file dt0)
            ;; ((<> toJson DynamicType) file dt1)
            ;; ((<> toJson DynamicType) file dt2)
            ;; ((<> toJson DynamicType) file dt3)
            ;; ((<> toJson DynamicType) file dt5)
            ((<> toJson DynamicType) file dt14)

            (rewind file)
            (letin ((dtJson ((<> parseJson DynamicType) file)))
              (putchar #\Newline)
              (format #t "a dynamic object from JSON string: \n")

              ;; ((<> toJson DynamicType) stdout dtJson)
              
              ;; test Searching subscriptables
              ;; ((<> toJson DynamicType) stdout ((<> search DynamicType) dtJson ""))
              ;; ((<> toJson DynamicType) stdout ((<> search DynamicType) dtJson "data"))
              ;; ((<> toJson DynamicType) stdout ((<> search DynamicType) dtJson "data/basics/2"))
              ;; ((<> toJson DynamicType) stdout ((<> search DynamicType) dtJson "friends/0/roles"))
              ;; ((<> toJson DynamicType) stdout ((<> search DynamicType) dtJson "friend/0/roles"))  ; no key error
              ;; ((<> toJson DynamicType) stdout ((<> search DynamicType) dtJson "friends/1/roles")) ; no element error
              ;; ((<> toJson DynamicType) stdout ((<> search DynamicType) dtJson "data/basics/e/3")) ; e is ascii not int but acts like 0
              ;; ((<> toJson DynamicType) stdout ((<> search DynamicType) dtJson "data/basics/1/3")) ; integer is not scriptable
              ((<> toJson DynamicType) stdout ((<> search DynamicType) dtJson "data/basics/0/3")) ; String is scriptable like List 'n'

              (putchar #\Newline))
            (fclose file)
            ) ; let 
          
          ;; test thunk laziness
          ((<> show DynamicType) stdout thunk02)
          (putchar #\Newline)
          ((<> show DynamicType) stdout ((<> force DynamicType) thunk02))
          (putchar #\Newline)
          ;; ((<> show DynamicType) stdout thunk03)
          ;; (putchar #\Newline)
          ;; ((<> show DynamicType) stdout ((<> force DynamicType) thunk03))
          ;; (putchar #\Newline)
          
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
                             '("/json"
                               METHOD_GET
                               '(closure ((Request rr)) ; lambda, closure or any handler (function pointer)
                                 (io rr
                                   (* _ req
                                      (let ((char buffer [1024] . '{ 0 })
                                            (CFile file . #'(fmemopen buffer (sizeof buffer) "w+")))
                                        ((<> toJson DynamicType) file dt14)
                                        (rewind file)
                                        (letin ((dtJson ((<> parseJson DynamicType) file)))
                                          (rewind file)
                                          ((<> toJson DynamicType) file dtJson)
                                          (FCGX_PutS "HTTP/1.1 200 OK\r\n" (-> req out))
                                          (FCGX_PutS "Content-Type: application/json\r\n\r\n" (-> req out))
                                          (FCGX_PutS buffer (-> req out))))))))

                             '("/xml"
                               METHOD_GET
                               '(closure ((Request rr))
                                 (io rr
                                   (* _ req
                                      (let ((char buffer [1024] . '{ 0 })
                                            (CFile file . #'(fmemopen buffer (sizeof buffer) "w")))
                                        ((<> toXml DynamicType) file "HumanDoc" dt14)
                                        (FCGX_PutS "HTTP/1.1 200 OK\r\n" (-> req out))
                                        (FCGX_PutS "Content-Type: application/xml\r\n\r\n" (-> req out))
                                        (FCGX_PutS "<?xml version=\"1.0\" encoding=\"UTF-8\"?>" (-> req out))
                                        (FCGX_PutS buffer (-> req out)))))))
                               
                             ;; http://127.0.0.1:8080/fcgi/...
                             )))
            
            (io result
              (Right fd (format #t "FasstCGI server on FD: %d was quitted successfully" fd))
              (Left err (block (format #t "FasstCGI server was quitet with error: ")
                          ((<> show RouterError) err))))) ; letin*
          ) ; letin
        (return EXIT_SUCCESS))

  ) ; fastcgi_app_dynamic.c
