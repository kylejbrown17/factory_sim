;; Auto-generated. Do not edit!


(when (boundp 'test::set_bool)
  (if (not (find-package "TEST"))
    (make-package "TEST"))
  (shadow 'set_bool (find-package "TEST")))
(unless (find-package "TEST::SET_BOOL")
  (make-package "TEST::SET_BOOL"))
(unless (find-package "TEST::SET_BOOLREQUEST")
  (make-package "TEST::SET_BOOLREQUEST"))
(unless (find-package "TEST::SET_BOOLRESPONSE")
  (make-package "TEST::SET_BOOLRESPONSE"))

(in-package "ROS")





(defclass test::set_boolRequest
  :super ros::object
  :slots (_value ))

(defmethod test::set_boolRequest
  (:init
   (&key
    ((:value __value) nil)
    )
   (send-super :init)
   (setq _value __value)
   self)
  (:value
   (&optional __value)
   (if __value (setq _value __value)) _value)
  (:serialization-length
   ()
   (+
    ;; bool _value
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _value
       (if _value (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _value
     (setq _value (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(defclass test::set_boolResponse
  :super ros::object
  :slots (_success ))

(defmethod test::set_boolResponse
  (:init
   (&key
    ((:success __success) nil)
    )
   (send-super :init)
   (setq _success __success)
   self)
  (:success
   (&optional __success)
   (if __success (setq _success __success)) _success)
  (:serialization-length
   ()
   (+
    ;; bool _success
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _success
       (if _success (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _success
     (setq _success (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(defclass test::set_bool
  :super ros::object
  :slots ())

(setf (get test::set_bool :md5sum-) "24a0f9fd764459b7e35d04a0dd83dd11")
(setf (get test::set_bool :datatype-) "test/set_bool")
(setf (get test::set_bool :request) test::set_boolRequest)
(setf (get test::set_bool :response) test::set_boolResponse)

(defmethod test::set_boolRequest
  (:response () (instance test::set_boolResponse :init)))

(setf (get test::set_boolRequest :md5sum-) "24a0f9fd764459b7e35d04a0dd83dd11")
(setf (get test::set_boolRequest :datatype-) "test/set_boolRequest")
(setf (get test::set_boolRequest :definition-)
      "bool value
---
bool success

")

(setf (get test::set_boolResponse :md5sum-) "24a0f9fd764459b7e35d04a0dd83dd11")
(setf (get test::set_boolResponse :datatype-) "test/set_boolResponse")
(setf (get test::set_boolResponse :definition-)
      "bool value
---
bool success

")



(provide :test/set_bool "24a0f9fd764459b7e35d04a0dd83dd11")


