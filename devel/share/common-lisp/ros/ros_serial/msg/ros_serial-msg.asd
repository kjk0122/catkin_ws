
(cl:in-package :asdf)

(defsystem "ros_serial-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "semes" :depends-on ("_package_semes"))
    (:file "_package_semes" :depends-on ("_package"))
  ))