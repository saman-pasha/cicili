(in-package :cl-user)

(defpackage :cicili
  (:use :cl)
  (:export
    :*debug*
    :*warn*
    :*verbose*
    :*macroexpand*
    :*debug-macros*
    :compile-ast
    :compile-cicili-file
    :load-macro-file
    :specify-type<         ; could be used inside macros to destructure variable definition without default value 
    :specify-type-value<)) ; could be used inside macros to destructure variable definition with default value extra bind
