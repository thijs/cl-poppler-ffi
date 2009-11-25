;;;; -*- Mode: Lisp; Syntax: ANSI-Common-Lisp; Base: 10 -*-
;;;; See the LICENSE file for licensing information.

(in-package #:cl-poppler-ffi)

;;(declaim (optimize (debug 3) (safety 3) (speed 0) (space 0)))


(defclass document ()
  ((path
    :accessor path
    :initarg :path)
   (ffp-path
    :reader ffp-path
    :initform (null-pointer))
   (pages
    :reader pages)
   (page-count
    :reader page-count
    :initform nil)
   (ff-pointer
    :reader ff-pointer
    :initform (null-pointer))))



(defmethod page :before ((self document) page-index)
  (when (null-pointer-p (ff-pointer self))
    (when (null-pointer-p (ffp-path self))
      (setf (slot-value self 'ffp-path) (foreign-string-alloc (path self))))
    (let ((doc (document-load (ffp-path self))))
      (assert (not (null-pointer-p doc)))
      (setf (slot-value self 'ff-pointer) doc))))


(defmethod page ((self document) page-index)
  (unless (page-count self)
    (let ((num (document-num-pages (ff-pointer self))))
      (when (> num 0)
        (setf (slot-value self 'page-count) num)
        (setf (slot-value self 'pages) (make-array num :initial-element nil)))))
  (when (< page-index (length (pages self)))
    (when (not (elt (pages self) page-index))
      (let ((new-page (make-instance 'page :index page-index))
            (new-page-ptr (document-page-by-index (ff-pointer self) page-index)))
        (when (not (null-pointer-p new-page-ptr))
          (setf (slot-value new-page 'ff-pointer) new-page-ptr)
          (setf (elt (pages self) page-index) new-page))))
    (elt (pages self) page-index)))


(defmethod free ((self document))
  (dolist (page (pages self))
    (free page))
  (when (not (null-pointer-p (ff-pointer self)))
    (document-delete (ff-pointer self))
    (setf (slot-value self 'ff-pointer) (null-pointer))))

