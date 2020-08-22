; Auto-generated. Do not edit!


(cl:in-package test-msg)


;//! \htmlinclude MsgToCentre.msg.html

(cl:defclass <MsgToCentre> (roslisp-msg-protocol:ros-message)
  ((message
    :reader message
    :initarg :message
    :type cl:string
    :initform "")
   (node_name
    :reader node_name
    :initarg :node_name
    :type cl:string
    :initform ""))
)

(cl:defclass MsgToCentre (<MsgToCentre>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <MsgToCentre>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'MsgToCentre)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name test-msg:<MsgToCentre> is deprecated: use test-msg:MsgToCentre instead.")))

(cl:ensure-generic-function 'message-val :lambda-list '(m))
(cl:defmethod message-val ((m <MsgToCentre>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader test-msg:message-val is deprecated.  Use test-msg:message instead.")
  (message m))

(cl:ensure-generic-function 'node_name-val :lambda-list '(m))
(cl:defmethod node_name-val ((m <MsgToCentre>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader test-msg:node_name-val is deprecated.  Use test-msg:node_name instead.")
  (node_name m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <MsgToCentre>) ostream)
  "Serializes a message object of type '<MsgToCentre>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'message))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'message))
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'node_name))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'node_name))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <MsgToCentre>) istream)
  "Deserializes a message object of type '<MsgToCentre>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'message) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'message) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'node_name) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'node_name) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<MsgToCentre>)))
  "Returns string type for a message object of type '<MsgToCentre>"
  "test/MsgToCentre")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'MsgToCentre)))
  "Returns string type for a message object of type 'MsgToCentre"
  "test/MsgToCentre")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<MsgToCentre>)))
  "Returns md5sum for a message object of type '<MsgToCentre>"
  "b0ccaea06efd6bcc2e50f7ffe5beabc9")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'MsgToCentre)))
  "Returns md5sum for a message object of type 'MsgToCentre"
  "b0ccaea06efd6bcc2e50f7ffe5beabc9")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<MsgToCentre>)))
  "Returns full string definition for message of type '<MsgToCentre>"
  (cl:format cl:nil "string message~%string node_name~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'MsgToCentre)))
  "Returns full string definition for message of type 'MsgToCentre"
  (cl:format cl:nil "string message~%string node_name~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <MsgToCentre>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'message))
     4 (cl:length (cl:slot-value msg 'node_name))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <MsgToCentre>))
  "Converts a ROS message object to a list"
  (cl:list 'MsgToCentre
    (cl:cons ':message (message msg))
    (cl:cons ':node_name (node_name msg))
))
