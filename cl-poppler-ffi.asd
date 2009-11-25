;;;; -*- Mode: Lisp; Syntax: ANSI-Common-Lisp; Base: 10 -*-
;;;; See the LICENSE file for licensing information.

(in-package #:cl-user)

(defpackage #:cl-poppler-ffi-asd
  (:use :cl :asdf))


(in-package #:cl-poppler-ffi-asd)


(defvar *poppler-version* "0.0.1"
  "A string denoting the current version of cl-poppler-ffi.")

(export '*poppler-version*)


(defsystem #:cl-poppler-ffi
  :name "CL-POPPLER-FFI"
  :version #.*poppler-version*
  :maintainer "M.L. Oppermann <M.L.Oppermann@gmail.com>"
  :author "M.L. Oppermann <M.L.Oppermann@gmail.com>"
  :licence "To be determined"
  :description ""
  :long-description "CL-POPPLER-FFI is a CFFI for the poppler lib"
  :serial t
  :components ((:file "package")
               (:file "ffi-defs")
               (:file "document")
               (:file "page"))
  :depends-on (:cffi
               :babel))
