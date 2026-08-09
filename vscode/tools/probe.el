;;; probe.el --- what does cicili-mode want to indent each line to?  -*- lexical-binding: t; -*-

;; The strongest check src/indent.js has: not "does it match the corpus" but
;; "does it match Emacs", which is the thing the corpus was written with.
;;
;; Each line is re-indented, the answer recorded, and the line put straight
;; back, so one line's answer never shifts the next line's input -- the same
;; non-cascading measurement test/indent.mjs makes.  Running `indent-region'
;; instead would compound every disagreement down the file and say nothing
;; about any single rule.
;;
;; Prints one TSV row per non-blank line: path, line, indent in the file,
;; indent cicili-mode wants.
;;
;;   emacs -Q --batch -l tools/probe.el ../emacs \
;;         $(cd .. && git ls-files '*.cicili' | grep -v '^draft/' | sed 's|^|../|')
;;
;; The first argument is the directory holding cicili-mode.el; the rest are the
;; files to probe, and are read relative to the current directory.

(add-to-list 'load-path (expand-file-name (car command-line-args-left)))
(require 'cicili-mode)
(setq vc-handled-backends nil)

(dolist (f (cdr command-line-args-left))
  (with-temp-buffer
    (insert-file-contents f)
    (cicili-mode)
    (goto-char (point-min))
    (while (not (eobp))
      (unless (looking-at "[ \t]*$")
        (let ((was (current-indentation)))
          (indent-according-to-mode)
          (princ (format "%s\t%d\t%d\t%d\n" f (line-number-at-pos)
                         was (current-indentation)))
          (indent-line-to was)))
      (forward-line 1))))

;;; probe.el ends here
