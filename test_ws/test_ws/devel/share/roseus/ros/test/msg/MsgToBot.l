;; Auto-generated. Do not edit!


(when (boundp 'test::MsgToBot)
  (if (not (find-package "TEST"))
    (make-package "TEST"))
  (shadow 'MsgToBot (find-package "TEST")))
(unless (find-package "TEST::MSGTOBOT")
  (make-package "TEST::MSGTOBOT"))

(in-package "ROS")
;;//! \htmlinclude MsgToBot.msg.html


(defclass test::MsgToBot
  :super ros::object
  :slots (_message ))

(defmethod test::MsgToBot
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

(setf (get test::MsgToBot :md5sum-) "5f003d6bcc824cbd51361d66d8e4f76c")
(setf (get test::MsgToBot :datatype-) "test/MsgToBot")
(setf (get test::MsgToBot :definition-)
      "string message
")



(provide :test/MsgToBot "5f003d6bcc824cbd51361d66d8e4f76c")


