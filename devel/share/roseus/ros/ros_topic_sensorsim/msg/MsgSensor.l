;; Auto-generated. Do not edit!


(when (boundp 'ros_topic_sensorsim::MsgSensor)
  (if (not (find-package "ROS_TOPIC_SENSORSIM"))
    (make-package "ROS_TOPIC_SENSORSIM"))
  (shadow 'MsgSensor (find-package "ROS_TOPIC_SENSORSIM")))
(unless (find-package "ROS_TOPIC_SENSORSIM::MSGSENSOR")
  (make-package "ROS_TOPIC_SENSORSIM::MSGSENSOR"))

(in-package "ROS")
;;//! \htmlinclude MsgSensor.msg.html


(defclass ros_topic_sensorsim::MsgSensor
  :super ros::object
  :slots (_temp ))

(defmethod ros_topic_sensorsim::MsgSensor
  (:init
   (&key
    ((:temp __temp) 0.0)
    )
   (send-super :init)
   (setq _temp (float __temp))
   self)
  (:temp
   (&optional __temp)
   (if __temp (setq _temp __temp)) _temp)
  (:serialization-length
   ()
   (+
    ;; float32 _temp
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float32 _temp
       (sys::poke _temp (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float32 _temp
     (setq _temp (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get ros_topic_sensorsim::MsgSensor :md5sum-) "b8b64af59df1604df7e647a04e645a45")
(setf (get ros_topic_sensorsim::MsgSensor :datatype-) "ros_topic_sensorsim/MsgSensor")
(setf (get ros_topic_sensorsim::MsgSensor :definition-)
      "float32 temp

")



(provide :ros_topic_sensorsim/MsgSensor "b8b64af59df1604df7e647a04e645a45")


