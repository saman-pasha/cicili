(in-package :cl-user)

(defpackage :cicili
  (:use :cl)
  (:export
    :*debug*
    :*warn*
    :*verbose*
    :compile-ast
    :compile-cicili-file))
