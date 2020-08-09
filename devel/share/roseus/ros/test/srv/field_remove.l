;; Auto-generated. Do not edit!


(when (boundp 'test::field_remove)
  (if (not (find-package "TEST"))
    (make-package "TEST"))
  (shadow 'field_remove (find-package "TEST")))
(unless (find-package "TEST::FIELD_REMOVE")
  (make-package "TEST::FIELD_REMOVE"))
(unless (find-package "TEST::FIELD_REMOVEREQUEST")
  (make-package "TEST::FIELD_REMOVEREQUEST"))
(unless (find-package "TEST::FIELD_REMOVERESPONSE")
  (make-package "TEST::FIELD_REMOVERESPONSE"))

(in-package "ROS")





(defclass test::field_removeRequest
  :super ros::object
  :slots (_field _index ))

(defmethod test::field_removeRequest
  (:init
   (&key
    ((:field __field) 0)
    ((:index __index) 0)
    )
   (send-super :init)
   (setq _field (round __field))
   (setq _index (round __index))
   self)
  (:field
   (&optional __field)
   (if __field (setq _field __field)) _field)
  (:index
   (&optional __index)
   (if __index (setq _index __index)) _index)
  (:serialization-length
   ()
   (+
    ;; uint64 _field
    8
    ;; int32 _index
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint64 _field
#+(or :alpha :irix6 :x86_64)
       (progn (sys::poke _field (send s :buffer) (send s :count) :long) (incf (stream-count s) 8))
#-(or :alpha :irix6 :x86_64)
       (cond ((and (class _field) (= (length (_field . bv)) 2)) ;; bignum
              (write-long (ash (elt (_field . bv) 0) 0) s)
              (write-long (ash (elt (_field . bv) 1) -1) s))
             ((and (class _field) (= (length (_field . bv)) 1)) ;; big1
              (write-long (elt (_field . bv) 0) s)
              (write-long (if (>= _field 0) 0 #xffffffff) s))
             (t                                         ;; integer
              (write-long _field s)(write-long (if (>= _field 0) 0 #xffffffff) s)))
     ;; int32 _index
       (write-long _index s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint64 _field
     
#+(or :alpha :irix6 :x86_64)
      (setf _field (prog1 (sys::peek buf ptr- :long) (incf ptr- 8)))
#-(or :alpha :irix6 :x86_64)
      (setf _field (let ((b0 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4)))
                  (b1 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4))))
              (cond ((= b1 -1) b0)
                     ((and (= b1  0)
                           (<= lisp::most-negative-fixnum b0 lisp::most-positive-fixnum))
                      b0)
                    ((= b1  0) (make-instance bignum :size 1 :bv (integer-vector b0)))
                    (t (make-instance bignum :size 2 :bv (integer-vector b0 (ash b1 1)))))))
   ;; int32 _index
     (setq _index (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(defclass test::field_removeResponse
  :super ros::object
  :slots (_success ))

(defmethod test::field_removeResponse
  (:init
   (&key
    ((:success __success) 0)
    )
   (send-super :init)
   (setq _success (round __success))
   self)
  (:success
   (&optional __success)
   (if __success (setq _success __success)) _success)
  (:serialization-length
   ()
   (+
    ;; int32 _success
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _success
       (write-long _success s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _success
     (setq _success (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(defclass test::field_remove
  :super ros::object
  :slots ())

(setf (get test::field_remove :md5sum-) "722e922dddeea014e5ea68aa3843aeba")
(setf (get test::field_remove :datatype-) "test/field_remove")
(setf (get test::field_remove :request) test::field_removeRequest)
(setf (get test::field_remove :response) test::field_removeResponse)

(defmethod test::field_removeRequest
  (:response () (instance test::field_removeResponse :init)))

(setf (get test::field_removeRequest :md5sum-) "722e922dddeea014e5ea68aa3843aeba")
(setf (get test::field_removeRequest :datatype-) "test/field_removeRequest")
(setf (get test::field_removeRequest :definition-)
      "uint64 field
int32 index
---
int32 success

")

(setf (get test::field_removeResponse :md5sum-) "722e922dddeea014e5ea68aa3843aeba")
(setf (get test::field_removeResponse :datatype-) "test/field_removeResponse")
(setf (get test::field_removeResponse :definition-)
      "uint64 field
int32 index
---
int32 success

")



(provide :test/field_remove "722e922dddeea014e5ea68aa3843aeba")


