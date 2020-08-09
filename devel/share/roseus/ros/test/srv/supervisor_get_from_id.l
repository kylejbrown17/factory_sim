;; Auto-generated. Do not edit!


(when (boundp 'test::supervisor_get_from_id)
  (if (not (find-package "TEST"))
    (make-package "TEST"))
  (shadow 'supervisor_get_from_id (find-package "TEST")))
(unless (find-package "TEST::SUPERVISOR_GET_FROM_ID")
  (make-package "TEST::SUPERVISOR_GET_FROM_ID"))
(unless (find-package "TEST::SUPERVISOR_GET_FROM_IDREQUEST")
  (make-package "TEST::SUPERVISOR_GET_FROM_IDREQUEST"))
(unless (find-package "TEST::SUPERVISOR_GET_FROM_IDRESPONSE")
  (make-package "TEST::SUPERVISOR_GET_FROM_IDRESPONSE"))

(in-package "ROS")





(defclass test::supervisor_get_from_idRequest
  :super ros::object
  :slots (_id ))

(defmethod test::supervisor_get_from_idRequest
  (:init
   (&key
    ((:id __id) 0)
    )
   (send-super :init)
   (setq _id (round __id))
   self)
  (:id
   (&optional __id)
   (if __id (setq _id __id)) _id)
  (:serialization-length
   ()
   (+
    ;; int32 _id
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _id
       (write-long _id s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _id
     (setq _id (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(defclass test::supervisor_get_from_idResponse
  :super ros::object
  :slots (_node ))

(defmethod test::supervisor_get_from_idResponse
  (:init
   (&key
    ((:node __node) 0)
    )
   (send-super :init)
   (setq _node (round __node))
   self)
  (:node
   (&optional __node)
   (if __node (setq _node __node)) _node)
  (:serialization-length
   ()
   (+
    ;; uint64 _node
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint64 _node
#+(or :alpha :irix6 :x86_64)
       (progn (sys::poke _node (send s :buffer) (send s :count) :long) (incf (stream-count s) 8))
#-(or :alpha :irix6 :x86_64)
       (cond ((and (class _node) (= (length (_node . bv)) 2)) ;; bignum
              (write-long (ash (elt (_node . bv) 0) 0) s)
              (write-long (ash (elt (_node . bv) 1) -1) s))
             ((and (class _node) (= (length (_node . bv)) 1)) ;; big1
              (write-long (elt (_node . bv) 0) s)
              (write-long (if (>= _node 0) 0 #xffffffff) s))
             (t                                         ;; integer
              (write-long _node s)(write-long (if (>= _node 0) 0 #xffffffff) s)))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint64 _node
     
#+(or :alpha :irix6 :x86_64)
      (setf _node (prog1 (sys::peek buf ptr- :long) (incf ptr- 8)))
#-(or :alpha :irix6 :x86_64)
      (setf _node (let ((b0 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4)))
                  (b1 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4))))
              (cond ((= b1 -1) b0)
                     ((and (= b1  0)
                           (<= lisp::most-negative-fixnum b0 lisp::most-positive-fixnum))
                      b0)
                    ((= b1  0) (make-instance bignum :size 1 :bv (integer-vector b0)))
                    (t (make-instance bignum :size 2 :bv (integer-vector b0 (ash b1 1)))))))
   ;;
   self)
  )

(defclass test::supervisor_get_from_id
  :super ros::object
  :slots ())

(setf (get test::supervisor_get_from_id :md5sum-) "398e4930ac99b6ae9bc51fa66b0d9846")
(setf (get test::supervisor_get_from_id :datatype-) "test/supervisor_get_from_id")
(setf (get test::supervisor_get_from_id :request) test::supervisor_get_from_idRequest)
(setf (get test::supervisor_get_from_id :response) test::supervisor_get_from_idResponse)

(defmethod test::supervisor_get_from_idRequest
  (:response () (instance test::supervisor_get_from_idResponse :init)))

(setf (get test::supervisor_get_from_idRequest :md5sum-) "398e4930ac99b6ae9bc51fa66b0d9846")
(setf (get test::supervisor_get_from_idRequest :datatype-) "test/supervisor_get_from_idRequest")
(setf (get test::supervisor_get_from_idRequest :definition-)
      "int32 id
---
uint64 node

")

(setf (get test::supervisor_get_from_idResponse :md5sum-) "398e4930ac99b6ae9bc51fa66b0d9846")
(setf (get test::supervisor_get_from_idResponse :datatype-) "test/supervisor_get_from_idResponse")
(setf (get test::supervisor_get_from_idResponse :definition-)
      "int32 id
---
uint64 node

")



(provide :test/supervisor_get_from_id "398e4930ac99b6ae9bc51fa66b0d9846")


