
(cl:in-package :asdf)

(defsystem "robosat_gazebo_ros_plugins_msgs-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :geometry_msgs-msg
)
  :components ((:file "_package")
    (:file "ProximityDynamicObjectModel" :depends-on ("_package_ProximityDynamicObjectModel"))
    (:file "_package_ProximityDynamicObjectModel" :depends-on ("_package"))
  ))