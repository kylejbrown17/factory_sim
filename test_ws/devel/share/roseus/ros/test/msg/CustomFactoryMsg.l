;; Auto-generated. Do not edit!


(when (boundp 'test::CustomFactoryMsg)
  (if (not (find-package "TEST"))
    (make-package "TEST"))
  (shadow 'CustomFactoryMsg (find-package "TEST")))
(unless (find-package "TEST::CUSTOMFACTORYMSG")
  (make-package "TEST::CUSTOMFACTORYMSG"))

(in-package "ROS")
;;//! \htmlinclude CustomFactoryMsg.msg.html


(defclass test::CustomFactoryMsg
  :super ros::object
  :slots (_message ))

(defmethod test::CustomFactoryMsg
  (:init
   (&key
    ((:message __message) "")
    )
   (send-super :init)
   (setq _message (string __message))
   self)
  (:message
   (&optional __message)
   (if __message (setq _message __message)) _message)
  (:serialization-length
   ()
   (+
    ;; string _message
    4 (length _message)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _message
       (write-long (length _message) s) (princ _message s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _message
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _message (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(setf (get test::CustomFactoryMsg :md5sum-) "5f003d6bcc824cbd51361d66d8e4f76c")
(setf (get test::CustomFactoryMsg :datatype-) "test/CustomFactoryMsg")
(setf (get test::CustomFactoryMsg :definition-)
      "string message
")



(provide :test/CustomFactoryMsg "5f003d6bcc824cbd51361d66d8e4f76c")


