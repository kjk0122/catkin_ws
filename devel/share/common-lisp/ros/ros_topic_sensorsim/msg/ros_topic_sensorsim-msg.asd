
(cl:in-package :asdf)

(defsystem "ros_topic_sensorsim-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "MsgSensor" :depends-on ("_package_MsgSensor"))
    (:file "_package_MsgSensor" :depends-on ("_package"))
  ))