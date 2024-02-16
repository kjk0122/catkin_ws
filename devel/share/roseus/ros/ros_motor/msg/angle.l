;; Auto-generated. Do not edit!


(when (boundp 'ros_motor::angle)
  (if (not (find-package "ROS_MOTOR"))
    (make-package "ROS_MOTOR"))
  (shadow 'angle (find-package "ROS_MOTOR")))
(unless (find-package "ROS_MOTOR::ANGLE")
  (make-package "ROS_MOTOR::ANGLE"))

(in-package "ROS")
;;//! \htmlinclude angle.msg.html


(defclass ros_motor::angle
  :super ros::object
  :slots (_angle ))

(defmethod ros_motor::angle
  (:init
   (&key
    ((:angle __angle) 0)
    )
   (send-super :init)
   (setq _angle (round __angle))
   self)
  (:angle
   (&optional __angle)
   (if __angle (setq _angle __angle)) _angle)
  (:serialization-length
   ()
   (+
    ;; int32 _angle
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _angle
       (write-long _angle s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _angle
     (setq _angle (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get ros_motor::angle :md5sum-) "de62f7ef8463d5c42dacb6932cbd1470")
(setf (get ros_motor::angle :datatype-) "ros_motor/angle")
(setf (get ros_motor::angle :definition-)
      "int32 angle

")



(provide :ros_motor/angle "de62f7ef8463d5c42dacb6932cbd1470")


