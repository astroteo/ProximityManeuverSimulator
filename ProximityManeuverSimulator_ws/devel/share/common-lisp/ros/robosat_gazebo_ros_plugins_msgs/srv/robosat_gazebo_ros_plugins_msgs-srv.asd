
(cl:in-package :asdf)

(defsystem "robosat_gazebo_ros_plugins_msgs-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "GetModelProperties" :depends-on ("_package_GetModelProperties"))
    (:file "_package_GetModelProperties" :depends-on ("_package"))
  ))