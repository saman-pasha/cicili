(header "js.h" ()
  (guard __JS_H__
    (include <stdio.h>)
    {decl} (func render_js ((char * output)))
  ))

(source "js.c" (:std #t :compile #t :link #f)
  (include "js.h")

  ;; Function to render JavaScript
  (func render_js ((char * output))
    (FCGX_PutS "HTTP/1.1 200 OK\r\nContent-Type: application/javascript\r\n\r\n" ($ req out))
    (FCGX_PutS output ($ req out)))
)

(DEFMACRO js (&REST body)
  `(concat ,@MAPCAR #'(lambda (expr)
      (COND
        ((EQ (FIRST expr) 'var) `(FORMAT NIL "var ~A = ~A;" (SECOND expr) (THIRD expr)))
        ((EQ (FIRST expr) 'function) `(FORMAT NIL "function ~A(~A) { ~A }" (SECOND expr) (JOIN "," (THIRD expr)) (JOIN " " (CDDDR expr))))
        ((EQ (FIRST expr) 'if) `(FORMAT NIL "if (~A) { ~A }" (SECOND expr) (JOIN " " (CDDR expr))))
        ((EQ (FIRST expr) 'for) `(FORMAT NIL "for (~A; ~A; ~A) { ~A }" (SECOND expr) (THIRD expr) (FOURTH expr) (JOIN " " (CDDR expr))))
        ((EQ (FIRST expr) 'while) `(FORMAT NIL "while (~A) { ~A }" (SECOND expr) (JOIN " " (CDDR expr))))
        ((EQ (FIRST expr) 'do-while) `(FORMAT NIL "do { ~A } while (~A);" (JOIN " " (CDR expr)) (SECOND expr)))
        ((EQ (FIRST expr) 'for-in) `(FORMAT NIL "for (var ~A in ~A) { ~A }" (SECOND expr) (THIRD expr) (JOIN " " (CDDR expr))))
        ((EQ (FIRST expr) 'for-of) `(FORMAT NIL "for (var ~A of ~A) { ~A }" (SECOND expr) (THIRD expr) (JOIN " " (CDDR expr))))
        ((EQ (FIRST expr) 'return) `(FORMAT NIL "return ~A;" (SECOND expr)))
        (T expr)))
    body))
