;; Auto-generated. Do not edit!


(when (boundp 'test::set_float_array)
  (if (not (find-package "TEST"))
    (make-package "TEST"))
  (shadow 'set_float_array (find-package "TEST")))
(unless (find-package "TEST::SET_FLOAT_ARRAY")
  (make-package "TEST::SET_FLOAT_ARRAY"))
(unless (find-package "TEST::SET_FLOAT_ARRAYREQUEST")
  (make-package "TEST::SET_FLOAT_ARRAYREQUEST"))
(unless (find-package "TEST::SET_FLOAT_ARRAYRESPONSE")
  (make-package "TEST::SET_FLOAT_ARRAYRESPONSE"))

(in-package "ROS")





(defclass test::set_float_arrayRequest
  :super ros::object
  :slots (_values ))

(defmethod test::set_float_arrayRequest
  (:init
   (&key
    ((:values __values) (make-array 0 :initial-element 0.0 :element-type :float))
    )
   (send-super :init)
   (setq _values __values)
   self)
  (:values
   (&optional __values)
   (if __values (setq _values __values)) _values)
  (:serialization-length
   ()
   (+
    ;; float64[] _values
    (* 8    (length _values)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float64[] _values
     (write-long (length _values) s)
     (dotimes (i (length _values))
       (sys::poke (elt _values i) (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float64[] _values
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _values (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _values i) (sys::peek buf ptr- :double)) (incf ptr- 8)
     ))
   ;;
   self)
  )

(defclass test::set_float_arrayResponse
  :super ros::object
  :slots (_success ))

(defmethod test::set_float_arrayResponse
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

(defclass test::set_float_array
  :super ros::object
  :slots ())

(setf (get test::set_float_array :md5sum-) "0fcc5d2c24929b6dbbf415b9579ddce4")
(setf (get test::set_float_array :datatype-) "test/set_float_array")
(setf (get test::set_float_array :request) test::set_float_arrayRequest)
(setf (get test::set_float_array :response) test::set_float_arrayResponse)

(defmethod test::set_float_arrayRequest
  (:response () (instance test::set_float_arrayResponse :init)))

(setf (get test::set_float_arrayRequest :md5sum-) "0fcc5d2c24929b6dbbf415b9579ddce4")
(setf (get test::set_float_arrayRequest :datatype-) "test/set_float_arrayRequest")
(setf (get test::set_float_arrayRequest :definition-)
      "float64[] values
---
bool success

")

(setf (get test::set_float_arrayResponse :md5sum-) "0fcc5d2c24929b6dbbf415b9579ddce4")
(setf (get test::set_float_arrayResponse :datatype-) "test/set_float_arrayResponse")
(setf (get test::set_float_arrayResponse :definition-)
      "float64[] values
---
bool success

")



(provide :test/set_float_array "0fcc5d2c24929b6dbbf415b9579ddce4")


