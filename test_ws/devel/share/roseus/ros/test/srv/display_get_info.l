;; Auto-generated. Do not edit!


(when (boundp 'test::display_get_info)
  (if (not (find-package "TEST"))
    (make-package "TEST"))
  (shadow 'display_get_info (find-package "TEST")))
(unless (find-package "TEST::DISPLAY_GET_INFO")
  (make-package "TEST::DISPLAY_GET_INFO"))
(unless (find-package "TEST::DISPLAY_GET_INFOREQUEST")
  (make-package "TEST::DISPLAY_GET_INFOREQUEST"))
(unless (find-package "TEST::DISPLAY_GET_INFORESPONSE")
  (make-package "TEST::DISPLAY_GET_INFORESPONSE"))

(in-package "ROS")





(defclass test::display_get_infoRequest
  :super ros::object
  :slots (_ask ))

(defmethod test::display_get_infoRequest
  (:init
   (&key
    ((:ask __ask) 0)
    )
   (send-super :init)
   (setq _ask (round __ask))
   self)
  (:ask
   (&optional __ask)
   (if __ask (setq _ask __ask)) _ask)
  (:serialization-length
   ()
   (+
    ;; uint8 _ask
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint8 _ask
       (write-byte _ask s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint8 _ask
     (setq _ask (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;;
   self)
  )

(defclass test::display_get_infoResponse
  :super ros::object
  :slots (_width _height ))

(defmethod test::display_get_infoResponse
  (:init
   (&key
    ((:width __width) 0)
    ((:height __height) 0)
    )
   (send-super :init)
   (setq _width (round __width))
   (setq _height (round __height))
   self)
  (:width
   (&optional __width)
   (if __width (setq _width __width)) _width)
  (:height
   (&optional __height)
   (if __height (setq _height __height)) _height)
  (:serialization-length
   ()
   (+
    ;; uint32 _width
    4
    ;; uint32 _height
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint32 _width
       (write-long _width s)
     ;; uint32 _height
       (write-long _height s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint32 _width
     (setq _width (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; uint32 _height
     (setq _height (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(defclass test::display_get_info
  :super ros::object
  :slots ())

(setf (get test::display_get_info :md5sum-) "736b3f82840360427588839f7591782f")
(setf (get test::display_get_info :datatype-) "test/display_get_info")
(setf (get test::display_get_info :request) test::display_get_infoRequest)
(setf (get test::display_get_info :response) test::display_get_infoResponse)

(defmethod test::display_get_infoRequest
  (:response () (instance test::display_get_infoResponse :init)))

(setf (get test::display_get_infoRequest :md5sum-) "736b3f82840360427588839f7591782f")
(setf (get test::display_get_infoRequest :datatype-) "test/display_get_infoRequest")
(setf (get test::display_get_infoRequest :definition-)
      "uint8 ask
---
uint32 width
uint32 height

")

(setf (get test::display_get_infoResponse :md5sum-) "736b3f82840360427588839f7591782f")
(setf (get test::display_get_infoResponse :datatype-) "test/display_get_infoResponse")
(setf (get test::display_get_infoResponse :definition-)
      "uint8 ask
---
uint32 width
uint32 height

")



(provide :test/display_get_info "736b3f82840360427588839f7591782f")


