(in-package :cl-user)

(defpackage :cicili
  (:use :cl)
  (:export
    :*debug-ast*
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
    :infer-type
    :infer-type-spec
    :is-non-copy
    :is-inside-loop
    :type-check
    :type-root           ; typedef chain of a type, origin first, specific last
    :type-origin         ; opaque super type declared by a `<name>^type_t' typedef, or NIL
    :key-eq
    )) ; cicili
