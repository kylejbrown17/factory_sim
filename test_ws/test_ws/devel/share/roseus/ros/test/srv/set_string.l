;; Auto-generated. Do not edit!


(when (boundp 'test::set_string)
  (if (not (find-package "TEST"))
    (make-package "TEST"))
  (shadow 'set_string (find-package "TEST")))
(unless (find-package "TEST::SET_STRING")
  (make-package "TEST::SET_STRING"))
(unless (find-package "TEST::SET_STRINGREQUEST")
  (make-package "TEST::SET_STRINGREQUEST"))
(unless (find-package "TEST::SET_STRINGRESPONSE")
  (make-package "TEST::SET_STRINGRESPONSE"))

(in-package "ROS")





(defclass test::set_stringRequest
  :super ros::object
  :slots (_value ))

(defmethod test::set_stringRequest
  (:init
   (&key
    ((:value __value) "")
    )
   (send-super :init)
   (setq _value (string __value))
   self)
  (:value
   (&optional __value)
   (if __value (setq _value __value)) _value)
  (:serialization-length
   ()
   (+
    ;; string _value
    4 (length _value)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _value
       (write-long (length _value) s) (princ _value s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _value
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _value (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(defclass test::set_stringResponse
  :super ros::object
  :slots (_success ))

(defmethod test::set_stringResponse
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

(defclass test::set_string
  :super ros::object
  :slots ())

(setf (get test::set_string :md5sum-) "0462bc0e878964615c49ad8ef45df667")
(setf (get test::set_string :datatype-) "test/set_string")
(setf (get test::set_string :request) test::set_stringRequest)
(setf (get test::set_string :response) test::set_stringResponse)

(defmethod test::set_stringRequest
  (:response () (instance test::set_stringResponse :init)))

(setf (get test::set_stringRequest :md5sum-) "0462bc0e878964615c49ad8ef45df667")
(setf (get test::set_stringRequest :datatype-) "test/set_stringRequest")
(setf (get test::set_stringRequest :definition-)
      "string value
---
bool success

")

(setf (get test::set_stringResponse :md5sum-) "0462bc0e878964615c49ad8ef45df667")
(setf (get test::set_stringResponse :datatype-) "test/set_stringResponse")
(setf (get test::set_stringResponse :definition-)
      "string value
---
bool success

")



(provide :test/set_string "0462bc0e878964615c49ad8ef45df667")


