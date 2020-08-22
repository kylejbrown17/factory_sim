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
  :slots (_message _node_name ))

(defmethod test::MsgToCentre
  (:init
   (&key
    ((:message __message) "")
    ((:node_name __node_name) "")
    )
   (send-super :init)
   (setq _message (string __message))
   (setq _node_name (string __node_name))
   self)
  (:message
   (&optional __message)
   (if __message (setq _message __message)) _message)
  (:node_name
   (&optional __node_name)
   (if __node_name (setq _node_name __node_name)) _node_name)
  (:serialization-length
   ()
   (+
    ;; string _message
    4 (length _message)
    ;; string _node_name
    4 (length _node_name)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _message
       (write-long (length _message) s) (princ _message s)
     ;; string _node_name
       (write-long (length _node_name) s) (princ _node_name s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _message
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _message (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; string _node_name
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _node_name (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(setf (get test::MsgToCentre :md5sum-) "b0ccaea06efd6bcc2e50f7ffe5beabc9")
(setf (get test::MsgToCentre :datatype-) "test/MsgToCentre")
(setf (get test::MsgToCentre :definition-)
      "string message
string node_name
")



(provide :test/MsgToCentre "b0ccaea06efd6bcc2e50f7ffe5beabc9")


