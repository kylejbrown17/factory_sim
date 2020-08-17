;; Auto-generated. Do not edit!


(when (boundp 'test::MsgToCentre)
  (if (not (find-package "TEST"))
    (make-package "TEST"))
  (shadow 'MsgToCentre (find-package "TEST")))
(unless (find-package "TEST::MSGTOCENTRE")
  (make-package "TEST::MSGTOCENTRE"))

(in-package "ROS")
;;//! \htmlinclude MsgToCentre.msg.html


(defclass test::MsgToCentre
  :super ros::object
  :slots (_message ))

(defmethod test::MsgToCentre
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

(setf (get test::MsgToCentre :md5sum-) "5f003d6bcc824cbd51361d66d8e4f76c")
(setf (get test::MsgToCentre :datatype-) "test/MsgToCentre")
(setf (get test::MsgToCentre :definition-)
      "string message
")



(provide :test/MsgToCentre "5f003d6bcc824cbd51361d66d8e4f76c")


