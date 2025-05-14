(header "css.h" ()
  (guard __CSS_H__
    (include <stdio.h>)
    {decl} (func render_css ((char * output)))
  ))

(source "css.c" (:std #t :compile #t :link #f)
  (include "css.h")

  ;; Function to render CSS styles
  (func render_css ((char * output))
    (FCGX_PutS "HTTP/1.1 200 OK\r\nContent-Type: text/css\r\n\r\n" ($ req out))
    (FCGX_PutS output ($ req out)))
)

(DEFMACRO style (&REST rules)
  `(concat "<style>" ,@rules "</style>"))

(DEFMACRO css-rule (selector &KEY color font-size margin padding border background &ALLOW-OTHER-KEYS)
  `(FORMAT NIL "~A { color: ~A; font-size: ~A; margin: ~A; padding: ~A; border: ~A; background: ~A; }"
    selector color font-size margin padding border background))

(DEFMACRO css-class (name &KEY color font-size margin padding border background &ALLOW-OTHER-KEYS)
  `(FORMAT NIL ".~A { color: ~A; font-size: ~A; margin: ~A; padding: ~A; border: ~A; background: ~A; }"
    name color font-size margin padding border background))
