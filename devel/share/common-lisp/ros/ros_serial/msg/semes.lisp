; Auto-generated. Do not edit!


(cl:in-package ros_serial-msg)


;//! \htmlinclude semes.msg.html

(cl:defclass <semes> (roslisp-msg-protocol:ros-message)
  ((temp
    :reader temp
    :initarg :temp
    :type cl:float
    :initform 0.0))
)

(cl:defclass semes (<semes>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <semes>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'semes)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name ros_serial-msg:<semes> is deprecated: use ros_serial-msg:semes instead.")))

(cl:ensure-generic-function 'temp-val :lambda-list '(m))
(cl:defmethod temp-val ((m <semes>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ros_serial-msg:temp-val is deprecated.  Use ros_serial-msg:temp instead.")
  (temp m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <semes>) ostream)
  "Serializes a message object of type '<semes>"
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'temp))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <semes>) istream)
  "Deserializes a message object of type '<semes>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'temp) (roslisp-utils:decode-double-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<semes>)))
  "Returns string type for a message object of type '<semes>"
  "ros_serial/semes")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'semes)))
  "Returns string type for a message object of type 'semes"
  "ros_serial/semes")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<semes>)))
  "Returns md5sum for a message object of type '<semes>"
  "1c666a4992d5d6108cc9173c68311b1d")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'semes)))
  "Returns md5sum for a message object of type 'semes"
  "1c666a4992d5d6108cc9173c68311b1d")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<semes>)))
  "Returns full string definition for message of type '<semes>"
  (cl:format cl:nil "float64 temp~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'semes)))
  "Returns full string definition for message of type 'semes"
  (cl:format cl:nil "float64 temp~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <semes>))
  (cl:+ 0
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <semes>))
  "Converts a ROS message object to a list"
  (cl:list 'semes
    (cl:cons ':temp (temp msg))
))
