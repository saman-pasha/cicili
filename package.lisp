(in-package :cl-user)

(defpackage :cicili
  (:use :cl)
  (:export
    :*debug-ast*
    :*debug-resolve*
    :*warn*
    :*verbose*
    :*debug-macros*
    :*debug-macroexpand*
    :*only-link*
    :*debug-runs*
    :*debug-dump*
    :*debug-warnings*
    :*debug-analyze*
    :compile-ast
    :compile-cicili-file
    :expand-macros
    :load-macro-file
    :specify-type<       ; could be used inside macros to destructure variable definition without default value 
    :specify-type-value< ; could be used inside macros to destructure variable definition with default value extra bind
    :*gets*
    :infer-type
    )) ; cicili
