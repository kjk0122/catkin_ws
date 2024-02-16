; Auto-generated. Do not edit!


(cl:in-package ros_motor-msg)


;//! \htmlinclude angle.msg.html

(cl:defclass <angle> (roslisp-msg-protocol:ros-message)
  ((angle
    :reader angle
    :initarg :angle
    :type cl:integer
    :initform 0))
)

(cl:defclass angle (<angle>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <angle>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'angle)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name ros_motor-msg:<angle> is deprecated: use ros_motor-msg:angle instead.")))

(cl:ensure-generic-function 'angle-val :lambda-list '(m))
(cl:defmethod angle-val ((m <angle>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ros_motor-msg:angle-val is deprecated.  Use ros_motor-msg:angle instead.")
  (angle m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <angle>) ostream)
  "Serializes a message object of type '<angle>"
  (cl:let* ((signed (cl:slot-value msg 'angle)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <angle>) istream)
  "Deserializes a message object of type '<angle>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'angle) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<angle>)))
  "Returns string type for a message object of type '<angle>"
  "ros_motor/angle")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'angle)))
  "Returns string type for a message object of type 'angle"
  "ros_motor/angle")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<angle>)))
  "Returns md5sum for a message object of type '<angle>"
  "de62f7ef8463d5c42dacb6932cbd1470")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'angle)))
  "Returns md5sum for a message object of type 'angle"
  "de62f7ef8463d5c42dacb6932cbd1470")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<angle>)))
  "Returns full string definition for message of type '<angle>"
  (cl:format cl:nil "int32 angle~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'angle)))
  "Returns full string definition for message of type 'angle"
  (cl:format cl:nil "int32 angle~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <angle>))
  (cl:+ 0
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <angle>))
  "Converts a ROS message object to a list"
  (cl:list 'angle
    (cl:cons ':angle (angle msg))
))
