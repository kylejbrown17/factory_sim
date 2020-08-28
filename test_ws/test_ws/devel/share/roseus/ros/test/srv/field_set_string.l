;; Auto-generated. Do not edit!


(when (boundp 'test::field_set_string)
  (if (not (find-package "TEST"))
    (make-package "TEST"))
  (shadow 'field_set_string (find-package "TEST")))
(unless (find-package "TEST::FIELD_SET_STRING")
  (make-package "TEST::FIELD_SET_STRING"))
(unless (find-package "TEST::FIELD_SET_STRINGREQUEST")
  (make-package "TEST::FIELD_SET_STRINGREQUEST"))
(unless (find-package "TEST::FIELD_SET_STRINGRESPONSE")
  (make-package "TEST::FIELD_SET_STRINGRESPONSE"))

(in-package "ROS")





(defclass test::field_set_stringRequest
  :super ros::object
  :slots (_field _index _value ))

(defmethod test::field_set_stringRequest
  (:init
   (&key
    ((:field __field) 0)
    ((:index __index) 0)
    ((:value __value) "")
    )
   (send-super :init)
   (setq _field (round __field))
   (setq _index (round __index))
   (setq _value (string __value))
   self)
  (:field
   (&optional __field)
   (if __field (setq _field __field)) _field)
  (:index
   (&optional __index)
   (if __index (setq _index __index)) _index)
  (:value
   (&optional __value)
   (if __value (setq _value __value)) _value)
  (:serialization-length
   ()
   (+
    ;; uint64 _field
    8
    ;; int32 _index
    4
    ;; string _value
    4 (length _value)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint64 _field
#+(or :alpha :irix6 :x86_64)
       (progn (sys::poke _field (send s :buffer) (send s :count) :long) (incf (stream-count s) 8))
#-(or :alpha :irix6 :x86_64)
       (cond ((and (class _field) (= (length (_field . bv)) 2)) ;; bignum
              (write-long (ash (elt (_field . bv) 0) 0) s)
              (write-long (ash (elt (_field . bv) 1) -1) s))
             ((and (class _field) (= (length (_field . bv)) 1)) ;; big1
              (write-long (elt (_field . bv) 0) s)
              (write-long (if (>= _field 0) 0 #xffffffff) s))
             (t                                         ;; integer
              (write-long _field s)(write-long (if (>= _field 0) 0 #xffffffff) s)))
     ;; int32 _index
       (write-long _index s)
     ;; string _value
       (write-long (length _value) s) (princ _value s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint64 _field
     
#+(or :alpha :irix6 :x86_64)
      (setf _field (prog1 (sys::peek buf ptr- :long) (incf ptr- 8)))
#-(or :alpha :irix6 :x86_64)
      (setf _field (let ((b0 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4)))
                  (b1 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4))))
              (cond ((= b1 -1) b0)
                     ((and (= b1  0)
                           (<= lisp::most-negative-fixnum b0 lisp::most-positive-fixnum))
                      b0)
                    ((= b1  0) (make-instance bignum :size 1 :bv (integer-vector b0)))
                    (t (make-instance bignum :size 2 :bv (integer-vector b0 (ash b1 1)))))))
   ;; int32 _index
     (setq _index (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; string _value
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _value (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(defclass test::field_set_stringResponse
  :super ros::object
  :slots (_success ))

(defmethod test::field_set_stringResponse
  (:init
   (&key
    ((:success __success) 0)
    )
   (send-super :init)
   (setq _success (round __success))
   self)
  (:success
   (&optional __success)
   (if __success (setq _success __success)) _success)
  (:serialization-length
   ()
   (+
    ;; int32 _success
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _success
       (write-long _success s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _success
     (setq _success (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(defclass test::field_set_string
  :super ros::object
  :slots ())

(setf (get test::field_set_string :md5sum-) "a84b2f7623a3316b5dc8470fcbf631fd")
(setf (get test::field_set_string :datatype-) "test/field_set_string")
(setf (get test::field_set_string :request) test::field_set_stringRequest)
(setf (get test::field_set_string :response) test::field_set_stringResponse)

(defmethod test::field_set_stringRequest
  (:response () (instance test::field_set_stringResponse :init)))

(setf (get test::field_set_stringRequest :md5sum-) "a84b2f7623a3316b5dc8470fcbf631fd")
(setf (get test::field_set_stringRequest :datatype-) "test/field_set_stringRequest")
(setf (get test::field_set_stringRequest :definition-)
      "uint64 field
int32 index
string value
---
int32 success

")

(setf (get test::field_set_stringResponse :md5sum-) "a84b2f7623a3316b5dc8470fcbf631fd")
(setf (get test::field_set_stringResponse :datatype-) "test/field_set_stringResponse")
(setf (get test::field_set_stringResponse :definition-)
      "uint64 field
int32 index
string value
---
int32 success

")



(provide :test/field_set_string "a84b2f7623a3316b5dc8470fcbf631fd")


