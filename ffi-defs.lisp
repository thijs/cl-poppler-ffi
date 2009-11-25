;;;; -*- Mode: Lisp; Syntax: ANSI-Common-Lisp; Base: 10 -*-
;;;; See the LICENSE file for licensing information.

(in-package #:cl-poppler-ffi)

;;(declaim (optimize (debug 3) (safety 3) (speed 0) (space 0)))


(define-foreign-library poppler-qt4-wrapper
  (:unix "/home/thijs/code/cl-poppler-ffi/libpoppler-qt4-ffi.so")
  (t (:default "libpoppler-qt4-ffi")))

(use-foreign-library poppler-qt4-wrapper)


;; Document

(cffi:defcfun ("cl_poppler_ffi_Document_load" document-load) :pointer
  (file-path :pointer))

(cffi:defcfun ("cl_poppler_ffi_Document_page_by_index" document-page-by-index) :pointer
  (self :pointer)
  (index :int))

(cffi:defcfun ("cl_poppler_ffi_Document_page_by_label" document-page-by-label) :pointer
  (self :pointer)
  (label :pointer))

(cffi:defcfun ("cl_poppler_ffi_Document_num_pages" document-num-pages) :int
  (self :pointer))

(cffi:defcfun ("cl_poppler_ffi_Document_has_embedded_files" document-has-embedded-files) :int
  (self :pointer))

(cffi:defcfun ("cl_poppler_ffi_Document_get_embedded_file" document-get-embedded-file) :int
  (self :pointer)
  (index :int)
  (cbp-size :pointer)
  (cbp-buffer :pointer))

(cffi:defcfun ("cl_poppler_ffi_Document_delete" document-delete) :void
  (self :pointer))


;; Page

(cffi:defcfun ("cl_poppler_ffi_Page_render_to_image" page-render-to-image) :int
  (self :pointer)
  (cbp-size :pointer)
  (cbp-buffer :pointer))

(cffi:defcfun ("cl_poppler_ffi_Page_text" page-text) :int
  (self :pointer)
  (cbp-size :pointer)
  (cbp-buffer :pointer))

(cffi:defcfun ("cl_poppler_ffi_Page_delete" page-delete) :void
  (self :pointer))


;; Callbacks

(defctype uint_size :unsigned-int)

(defparameter *foreign-buffer* ())
(defparameter *foreign-buffer-len* ())


(cffi:defcallback %cb-buffer-size uint_size ((size uint_size))
  (format t "in cb-buffer-size~%")
  (setf *foreign-buffer-len* size)
  (setf *foreign-buffer* (foreign-alloc :uint8 :count size))
  (format t "set *foreign-buffer-len* to ~a~%" *foreign-buffer-len*)
  size)

(cffi:defcallback %cb-get-buffer-pointer :pointer ((size uint_size))
  (format t "in cb-get-buffer-pointer~%")
  (if (eql size *foreign-buffer-len*)
      *foreign-buffer*
      (null-pointer)))

