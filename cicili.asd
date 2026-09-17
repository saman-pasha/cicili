(defsystem "cicili"
  ;; THE VERSION, AND THE ONLY PLACE IT IS WRITTEN. `cicili.lisp --version'
  ;; reads it from here through ASDF and prints it alone on stdout, so a
  ;; script gets a bare number; CLAUDE.md carries the rule for moving it.
  :version "1.0.0"
  :author  "Saman Heidarzadeh Pasha (saman.h.pasha@gmail.com)"
  :license "GPL-3.0 license"
  :depends-on ("sha1" "base64" "str" "cl-ppcre")
  :components ((:file "compiler"   :depends-on ("target"))
	           (:file "target"     :depends-on ("module"))
	           (:file "module"     :depends-on ("backend"))
	           (:file "backend"    :depends-on ("body"))
	           (:file "body"       :depends-on ("specifier"))
	           (:file "specifier"  :depends-on ("core" "authority"))
	           (:file "authority"  :depends-on ())
	           (:file "core"       :depends-on ("config"))
	           (:file "config"     :depends-on ("package"))
	           (:file "package"))
  :description "Safe Modern C Solution. Cicili is a Lisp-dialect programming language that implements Haskell's advanced functional semantics, like ADTs, Monads, and pattern matching, by transpiling directly to high-performance C with built-in, RAII-style automatic memory management."
  :in-order-to ((test-op (test-op "test"))))
