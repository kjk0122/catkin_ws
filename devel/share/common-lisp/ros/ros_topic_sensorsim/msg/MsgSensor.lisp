; Auto-generated. Do not edit!


(cl:in-package ros_topic_sensorsim-msg)


;//! \htmlinclude MsgSensor.msg.html

(cl:defclass <MsgSensor> (roslisp-msg-protocol:ros-message)
  ((temp
    :reader temp
    :initarg :temp
    :type cl:float
    :initform 0.0))
)

(cl:defclass MsgSensor (<MsgSensor>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <MsgSensor>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'MsgSensor)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name ros_topic_sensorsim-msg:<MsgSensor> is deprecated: use ros_topic_sensorsim-msg:MsgSensor instead.")))

(cl:ensure-generic-function 'temp-val :lambda-list '(m))
(cl:defmethod temp-val ((m <MsgSensor>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ros_topic_sensorsim-msg:temp-val is deprecated.  Use ros_topic_sensorsim-msg:temp instead.")
  (temp m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <MsgSensor>) ostream)
  "Serializes a message object of type '<MsgSensor>"
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'temp))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <MsgSensor>) istream)
  "Deserializes a message object of type '<MsgSensor>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'temp) (roslisp-utils:decode-single-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<MsgSensor>)))
  "Returns string type for a message object of type '<MsgSensor>"
  "ros_topic_sensorsim/MsgSensor")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'MsgSensor)))
  "Returns string type for a message object of type 'MsgSensor"
  "ros_topic_sensorsim/MsgSensor")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<MsgSensor>)))
  "Returns md5sum for a message object of type '<MsgSensor>"
  "b8b64af59df1604df7e647a04e645a45")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'MsgSensor)))
  "Returns md5sum for a message object of type 'MsgSensor"
  "b8b64af59df1604df7e647a04e645a45")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<MsgSensor>)))
  "Returns full string definition for message of type '<MsgSensor>"
  (cl:format cl:nil "float32 temp~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'MsgSensor)))
  "Returns full string definition for message of type 'MsgSensor"
  (cl:format cl:nil "float32 temp~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <MsgSensor>))
  (cl:+ 0
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <MsgSensor>))
  "Converts a ROS message object to a list"
  (cl:list 'MsgSensor
    (cl:cons ':temp (temp msg))
))
