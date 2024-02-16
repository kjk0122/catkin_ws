
(cl:in-package :asdf)

(defsystem "ros_xyz-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "msgxyz" :depends-on ("_package_msgxyz"))
    (:file "_package_msgxyz" :depends-on ("_package"))
  ))