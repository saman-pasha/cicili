(defsystem "cicili"
  :version "0.0.15"
  :author  "Saman Heidarzadeh Pasha (saman.h.pasha@gmail.com)"
  :license "GPL-3.0 license"
  :depends-on ("sha1" "base64" "str" "cl-ppcre")
  :components ((:file "compiler"   :depends-on ("target"))
	           (:file "target"     :depends-on ("module"))
	           (:file "module"     :depends-on ("body" "backend" "resolver"))
	           (:file "resolver"   :depends-on ("specifier"))
	           (:file "backend"    :depends-on ("specifier"))
	           (:file "body"       :depends-on ("specifier"))
	           (:file "specifier"  :depends-on ("core"))
	           (:file "core"       :depends-on ("config"))
	           (:file "config"     :depends-on ("package"))
	           (:file "package"))
  :description "Cicili is a Lisp-dialect programming language that implements Haskell's advanced functional semantics, like ADTs, Monads, and pattern matching, by transpiling directly to high-performance C with built-in, RAII-style automatic memory management."
  :in-order-to ((test-op (test-op "test"))))
