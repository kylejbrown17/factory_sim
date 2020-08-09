;; Auto-generated. Do not edit!


(when (boundp 'test::set_int)
  (if (not (find-package "TEST"))
    (make-package "TEST"))
  (shadow 'set_int (find-package "TEST")))
(unless (find-package "TEST::SET_INT")
  (make-package "TEST::SET_INT"))
(unless (find-package "TEST::SET_INTREQUEST")
  (make-package "TEST::SET_INTREQUEST"))
(unless (find-package "TEST::SET_INTRESPONSE")
  (make-package "TEST::SET_INTRESPONSE"))

(in-package "ROS")





(defclass test::set_intRequest
  :super ros::object
  :slots (_value ))

(defmethod test::set_intRequest
  (:init
   (&key
    ((:value __value) 0)
    )
   (send-super :init)
   (setq _value (round __value))
   self)
  (:value
   (&optional __value)
   (if __value (setq _value __value)) _value)
  (:serialization-length
   ()
   (+
    ;; int32 _value
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _value
       (write-long _value s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _value
     (setq _value (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(defclass test::set_intResponse
  :super ros::object
  :slots (_success ))

(defmethod test::set_intResponse
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

(defclass test::set_int
  :super ros::object
  :slots ())

(setf (get test::set_int :md5sum-) "bc437afb45673379bdb9f299f9cbbc9e")
(setf (get test::set_int :datatype-) "test/set_int")
(setf (get test::set_int :request) test::set_intRequest)
(setf (get test::set_int :response) test::set_intResponse)

(defmethod test::set_intRequest
  (:response () (instance test::set_intResponse :init)))

(setf (get test::set_intRequest :md5sum-) "bc437afb45673379bdb9f299f9cbbc9e")
(setf (get test::set_intRequest :datatype-) "test/set_intRequest")
(setf (get test::set_intRequest :definition-)
      "int32 value
---
bool success

")

(setf (get test::set_intResponse :md5sum-) "bc437afb45673379bdb9f299f9cbbc9e")
(setf (get test::set_intResponse :datatype-) "test/set_intResponse")
(setf (get test::set_intResponse :definition-)
      "int32 value
---
bool success

")



(provide :test/set_int "bc437afb45673379bdb9f299f9cbbc9e")


