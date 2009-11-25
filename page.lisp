;;;; -*- Mode: Lisp; Syntax: ANSI-Common-Lisp; Base: 10 -*-
;;;; See the LICENSE file for licensing information.

(in-package #:cl-poppler-ffi)

;;(declaim (optimize (debug 3) (safety 3) (speed 0) (space 0)))


(defclass page ()
  ((index
    :reader index
    :initarg :index)
   (image
    :reader image
    :initform ())
   (text
    :reader text
    :initform ())
   (ff-pointer
    :reader ff-pointer)))


(defmethod get-image ((self page))
  (unless (image self)
    (sb-sys:with-pinned-objects (*foreign-buffer*)
      (format t "about to call page-render-to-image~%")
      (let ((ret-val (page-render-to-image (ff-pointer self) (callback %cb-buffer-size) (callback %cb-get-buffer-pointer))))
        (when (> ret-val 0)
          (format t "~x ~x ~x ~%" (mem-ref *foreign-buffer* :uint8 0) (mem-ref *foreign-buffer* :uint8 1) (mem-ref *foreign-buffer* :uint8 2))
          (format t "len: ~a~%" *foreign-buffer-len*)
          (format t "ret: ~a~%" ret-val)
          (loop for i from 0 below *foreign-buffer-len* do
               (push (mem-ref *foreign-buffer* :uint8 i) (slot-value self 'image)))
          (setf (slot-value self 'image) (nreverse (image self))))
        (foreign-free *foreign-buffer*)
        (setf *foreign-buffer-len* nil)
        (setf *foreign-buffer* nil))))
  (image self))


(defmethod get-text ((self page))
  (unless (text self)
    (sb-sys:with-pinned-objects (*foreign-buffer*)
      (format t "about to call page-text~%")
      (let ((ret-val (page-text (ff-pointer self) (callback %cb-buffer-size) (callback %cb-get-buffer-pointer))))
        (when (> ret-val 0)
          (setf (slot-value self 'text) (make-array *foreign-buffer-len* :fill-pointer 0 :element-type 'character))
          (format t "~x ~x ~x ~%" (mem-ref *foreign-buffer* :uint8 0) (mem-ref *foreign-buffer* :uint8 1) (mem-ref *foreign-buffer* :uint8 2))
          (format t "len: ~a~%" *foreign-buffer-len*)
          (format t "ret: ~a~%" ret-val)
          (loop for i from 0 below *foreign-buffer-len* do
               (vector-push-extend (code-char (mem-ref *foreign-buffer* :uint8 i)) (slot-value self 'text))))
        (foreign-free *foreign-buffer*)
        (setf *foreign-buffer-len* nil)
        (setf *foreign-buffer* nil))))
  (text self))


(defmethod free ((self page))
  (when (not (null-pointer-p (ff-pointer self)))
    (page-delete (ff-pointer self))
    (setf (slot-value self 'ff-pointer) (null-pointer))))
