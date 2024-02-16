;; Auto-generated. Do not edit!


(when (boundp 'ros_serial::semes)
  (if (not (find-package "ROS_SERIAL"))
    (make-package "ROS_SERIAL"))
  (shadow 'semes (find-package "ROS_SERIAL")))
(unless (find-package "ROS_SERIAL::SEMES")
  (make-package "ROS_SERIAL::SEMES"))

(in-package "ROS")
;;//! \htmlinclude semes.msg.html


(defclass ros_serial::semes
  :super ros::object
  :slots (_temp ))

(defmethod ros_serial::semes
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
    ;; float64 _temp
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float64 _temp
       (sys::poke _temp (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float64 _temp
     (setq _temp (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;;
   self)
  )

(setf (get ros_serial::semes :md5sum-) "1c666a4992d5d6108cc9173c68311b1d")
(setf (get ros_serial::semes :datatype-) "ros_serial/semes")
(setf (get ros_serial::semes :definition-)
      "float64 temp

")



(provide :ros_serial/semes "1c666a4992d5d6108cc9173c68311b1d")


