; ; set load path

(add-to-list 'load-path "~/.emacs.d/site-lisp")
(require 'auto-complete-config)
(add-to-list 'ac-dictionary-directories "~/.emacs.d/site-lisp/ac-dict")
(ac-config-default)


; make cut and paste put things on the clipboard for pasting to the terminal
(setq x-select-enable-clipboard t)

; 
; 
; ; Turn on Pyhton auto-complete mode
(delete-selection-mode t)
; 
(require 'smart-operator)
; 

;(require 'python-mode)
(setq py-python-command "/usr/bin/python")
(require 'yasnippet)
yas/initialize)


; 
; ; change comint keys. Comint is a minor-mode to 
; ; deal with interpreter commands in an emacs buffer. 
; ; It’s used by many modes, including ipython. 
; ; Comint uses M-p and M-n to cycle backwards and forward 
; ; through input history. I prefer to use the up and 
; ; down arrow keys:
(require 'comint)



; ;; Auto Syntax Error Hightlight
 (when (load "flymake" t)
   (defun flymake-pyflakes-init ()
     (let* ((temp-file (flymake-init-create-temp-buffer-copy
                'flymake-create-temp-inplace))
        (local-file (file-relative-name
             temp-file
             (file-name-directory buffer-file-name))))
       (list "pyflakes" (list local-file))))
   (add-to-list 'flymake-allowed-file-name-masks
            '("\\.py\\'" flymake-pyflakes-init)))
 (add-hook 'find-file-hook 'flymake-find-file-hook)

; disable warnings from flymake. These pop up for C++.

(setq flymake-gui-warnings-enabled nil)
