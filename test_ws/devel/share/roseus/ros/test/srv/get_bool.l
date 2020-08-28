;; Auto-generated. Do not edit!


(when (boundp 'test::get_bool)
  (if (not (find-package "TEST"))
    (make-package "TEST"))
  (shadow 'get_bool (find-package "TEST")))
(unless (find-package "TEST::GET_BOOL")
  (make-package "TEST::GET_BOOL"))
(unless (find-package "TEST::GET_BOOLREQUEST")
  (make-package "TEST::GET_BOOLREQUEST"))
(unless (find-package "TEST::GET_BOOLRESPONSE")
  (make-package "TEST::GET_BOOLRESPONSE"))

(in-package "ROS")





(defclass test::get_boolRequest
  :super ros::object
  :slots (_ask ))

(defmethod test::get_boolRequest
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

(defclass test::get_boolResponse
  :super ros::object
  :slots (_value ))

(defmethod test::get_boolResponse
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

(defclass test::get_bool
  :super ros::object
  :slots ())

(setf (get test::get_bool :md5sum-) "155bbaa7eff4769d41b3327e2ec91080")
(setf (get test::get_bool :datatype-) "test/get_bool")
(setf (get test::get_bool :request) test::get_boolRequest)
(setf (get test::get_bool :response) test::get_boolResponse)

(defmethod test::get_boolRequest
  (:response () (instance test::get_boolResponse :init)))

(setf (get test::get_boolRequest :md5sum-) "155bbaa7eff4769d41b3327e2ec91080")
(setf (get test::get_boolRequest :datatype-) "test/get_boolRequest")
(setf (get test::get_boolRequest :definition-)
      "bool ask
---
bool value

")

(setf (get test::get_boolResponse :md5sum-) "155bbaa7eff4769d41b3327e2ec91080")
(setf (get test::get_boolResponse :datatype-) "test/get_boolResponse")
(setf (get test::get_boolResponse :definition-)
      "bool ask
---
bool value

")



(provide :test/get_bool "155bbaa7eff4769d41b3327e2ec91080")


