;; Auto-generated. Do not edit!


(when (boundp 'test::get_int)
  (if (not (find-package "TEST"))
    (make-package "TEST"))
  (shadow 'get_int (find-package "TEST")))
(unless (find-package "TEST::GET_INT")
  (make-package "TEST::GET_INT"))
(unless (find-package "TEST::GET_INTREQUEST")
  (make-package "TEST::GET_INTREQUEST"))
(unless (find-package "TEST::GET_INTRESPONSE")
  (make-package "TEST::GET_INTRESPONSE"))

(in-package "ROS")





(defclass test::get_intRequest
  :super ros::object
  :slots (_ask ))

(defmethod test::get_intRequest
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

(defclass test::get_intResponse
  :super ros::object
  :slots (_value ))

(defmethod test::get_intResponse
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

(defclass test::get_int
  :super ros::object
  :slots ())

(setf (get test::get_int :md5sum-) "73dfae6ec9145dcc45d5ed973079e912")
(setf (get test::get_int :datatype-) "test/get_int")
(setf (get test::get_int :request) test::get_intRequest)
(setf (get test::get_int :response) test::get_intResponse)

(defmethod test::get_intRequest
  (:response () (instance test::get_intResponse :init)))

(setf (get test::get_intRequest :md5sum-) "73dfae6ec9145dcc45d5ed973079e912")
(setf (get test::get_intRequest :datatype-) "test/get_intRequest")
(setf (get test::get_intRequest :definition-)
      "bool ask
---
int32 value

")

(setf (get test::get_intResponse :md5sum-) "73dfae6ec9145dcc45d5ed973079e912")
(setf (get test::get_intResponse :datatype-) "test/get_intResponse")
(setf (get test::get_intResponse :definition-)
      "bool ask
---
int32 value

")



(provide :test/get_int "73dfae6ec9145dcc45d5ed973079e912")


