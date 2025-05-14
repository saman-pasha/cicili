(header "html.h" ()
  (guard __HTML_H__
    (include <stdio.h> <string.h>)
    {decl} (func render_html ((char * output)))
  ))

(source "html.c" (:std #t :compile #t :link #f)
  (include "html.h")

  ;; Function to render HTML string
  (func render_html ((char * output))
    (FCGX_PutS "HTTP/1.1 200 OK\r\nContent-Type: text/html\r\n\r\n" ($ req out))
    (FCGX_PutS output ($ req out)))
)

(DEFMACRO html (&REST body)
  `(concat "<!DOCTYPE html><html>" ,@body "</html>"))

(DEFMACRO head (&REST body)
  `(concat "<head>" ,@body "</head>"))

(DEFMACRO title (text)
  `(concat "<title>" text "</title>"))

(DEFMACRO body (&REST body)
  `(concat "<body>" ,@body "</body>"))

(DEFMACRO div (&KEY id class &ALLOW-OTHER-KEYS &REST body)
  `(FORMAT NIL "<div id='~A' class='~A'>~A</div>" id class (JOIN " " body)))

(DEFMACRO p (&REST body)
  `(concat "<p>" ,@body "</p>"))

(DEFMACRO a (href text)
  `(FORMAT NIL "<a href='~A'>~A</a>" href text))

(DEFMACRO h1 (text)
  `(FORMAT NIL "<h1>~A</h1>" text))

(DEFMACRO img (&KEY src alt width height)
  `(FORMAT NIL "<img src='~A' alt='~A' width='~A' height='~A'>" src alt width height))
