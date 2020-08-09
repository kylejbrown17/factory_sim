;; Auto-generated. Do not edit!


(when (boundp 'test::get_float)
  (if (not (find-package "TEST"))
    (make-package "TEST"))
  (shadow 'get_float (find-package "TEST")))
(unless (find-package "TEST::GET_FLOAT")
  (make-package "TEST::GET_FLOAT"))
(unless (find-package "TEST::GET_FLOATREQUEST")
  (make-package "TEST::GET_FLOATREQUEST"))
(unless (find-package "TEST::GET_FLOATRESPONSE")
  (make-package "TEST::GET_FLOATRESPONSE"))

(in-package "ROS")





(defclass test::get_floatRequest
  :super ros::object
  :slots (_ask ))

(defmethod test::get_floatRequest
  (:init
   (&key
    ((:ask __ask) nil)
    )
   (send-super :init)
   (setq _ask __ask)
   self)
  (:ask
   (&optional __ask)
   (if __ask (setq _ask __ask)) _ask)
  (:serialization-length
   ()
   (+
    ;; bool _ask
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _ask
       (if _ask (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _ask
     (setq _ask (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(defclass test::get_floatResponse
  :super ros::object
  :slots (_value ))

(defmethod test::get_floatResponse
  (:init
   (&key
    ((:value __value) 0.0)
    )
   (send-super :init)
   (setq _value (float __value))
   self)
  (:value
   (&optional __value)
   (if __value (setq _value __value)) _value)
  (:serialization-length
   ()
   (+
    ;; float64 _value
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float64 _value
       (sys::poke _value (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float64 _value
     (setq _value (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;;
   self)
  )

(defclass test::get_float
  :super ros::object
  :slots ())

(setf (get test::get_float :md5sum-) "896e758cc9f93e6fc99057486a02ac6a")
(setf (get test::get_float :datatype-) "test/get_float")
(setf (get test::get_float :request) test::get_floatRequest)
(setf (get test::get_float :response) test::get_floatResponse)

(defmethod test::get_floatRequest
  (:response () (instance test::get_floatResponse :init)))

(setf (get test::get_floatRequest :md5sum-) "896e758cc9f93e6fc99057486a02ac6a")
(setf (get test::get_floatRequest :datatype-) "test/get_floatRequest")
(setf (get test::get_floatRequest :definition-)
      "bool ask
---
float64 value

")

(setf (get test::get_floatResponse :md5sum-) "896e758cc9f93e6fc99057486a02ac6a")
(setf (get test::get_floatResponse :datatype-) "test/get_floatResponse")
(setf (get test::get_floatResponse :definition-)
      "bool ask
---
float64 value

")



(provide :test/get_float "896e758cc9f93e6fc99057486a02ac6a")


