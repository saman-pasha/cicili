(in-package :cl-user)

(defpackage :cicili
  (:use :cl)
  (:export
    :*debug*
    :*warn*
    :*verbose*
    :*macroexpand*
    :compile-ast
    :compile-cicili-file
    :load-macro-file))
