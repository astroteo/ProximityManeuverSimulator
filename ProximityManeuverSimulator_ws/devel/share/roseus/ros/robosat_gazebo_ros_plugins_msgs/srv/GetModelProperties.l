;; Auto-generated. Do not edit!


(when (boundp 'robosat_gazebo_ros_plugins_msgs::GetModelProperties)
  (if (not (find-package "ROBOSAT_GAZEBO_ROS_PLUGINS_MSGS"))
    (make-package "ROBOSAT_GAZEBO_ROS_PLUGINS_MSGS"))
  (shadow 'GetModelProperties (find-package "ROBOSAT_GAZEBO_ROS_PLUGINS_MSGS")))
(unless (find-package "ROBOSAT_GAZEBO_ROS_PLUGINS_MSGS::GETMODELPROPERTIES")
  (make-package "ROBOSAT_GAZEBO_ROS_PLUGINS_MSGS::GETMODELPROPERTIES"))
(unless (find-package "ROBOSAT_GAZEBO_ROS_PLUGINS_MSGS::GETMODELPROPERTIESREQUEST")
  (make-package "ROBOSAT_GAZEBO_ROS_PLUGINS_MSGS::GETMODELPROPERTIESREQUEST"))
(unless (find-package "ROBOSAT_GAZEBO_ROS_PLUGINS_MSGS::GETMODELPROPERTIESRESPONSE")
  (make-package "ROBOSAT_GAZEBO_ROS_PLUGINS_MSGS::GETMODELPROPERTIESRESPONSE"))

(in-package "ROS")





(defclass robosat_gazebo_ros_plugins_msgs::GetModelPropertiesRequest
  :super ros::object
  :slots ())

(defmethod robosat_gazebo_ros_plugins_msgs::GetModelPropertiesRequest
  (:init
   (&key
    )
   (send-super :init)
   self)
  (:serialization-length
   ()
   (+
    0
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;;
   self)
  )

(defclass robosat_gazebo_ros_plugins_msgs::GetModelPropertiesResponse
  :super ros::object
  :slots (_link_names ))

(defmethod robosat_gazebo_ros_plugins_msgs::GetModelPropertiesResponse
  (:init
   (&key
    ((:link_names __link_names) (let (r) (dotimes (i 0) (push "" r)) r))
    )
   (send-super :init)
   (setq _link_names __link_names)
   self)
  (:link_names
   (&optional __link_names)
   (if __link_names (setq _link_names __link_names)) _link_names)
  (:serialization-length
   ()
   (+
    ;; string[] _link_names
    (apply #'+ (mapcar #'(lambda (x) (+ 4 (length x))) _link_names)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string[] _link_names
     (write-long (length _link_names) s)
     (dolist (elem _link_names)
       (write-long (length elem) s) (princ elem s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string[] _link_names
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _link_names (make-list n))
     (dotimes (i n)
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setf (elt _link_names i) (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
     ))
   ;;
   self)
  )

(defclass robosat_gazebo_ros_plugins_msgs::GetModelProperties
  :super ros::object
  :slots ())

(setf (get robosat_gazebo_ros_plugins_msgs::GetModelProperties :md5sum-) "8f2ac94008b559adc87f7d99565ba995")
(setf (get robosat_gazebo_ros_plugins_msgs::GetModelProperties :datatype-) "robosat_gazebo_ros_plugins_msgs/GetModelProperties")
(setf (get robosat_gazebo_ros_plugins_msgs::GetModelProperties :request) robosat_gazebo_ros_plugins_msgs::GetModelPropertiesRequest)
(setf (get robosat_gazebo_ros_plugins_msgs::GetModelProperties :response) robosat_gazebo_ros_plugins_msgs::GetModelPropertiesResponse)

(defmethod robosat_gazebo_ros_plugins_msgs::GetModelPropertiesRequest
  (:response () (instance robosat_gazebo_ros_plugins_msgs::GetModelPropertiesResponse :init)))

(setf (get robosat_gazebo_ros_plugins_msgs::GetModelPropertiesRequest :md5sum-) "8f2ac94008b559adc87f7d99565ba995")
(setf (get robosat_gazebo_ros_plugins_msgs::GetModelPropertiesRequest :datatype-) "robosat_gazebo_ros_plugins_msgs/GetModelPropertiesRequest")
(setf (get robosat_gazebo_ros_plugins_msgs::GetModelPropertiesRequest :definition-)
      "# Copyright (c) 2016 The UUV Simulator Authors.
# All rights reserved.
#
# Licensed under the Apache License, Version 2.0 (the \"License\");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an \"AS IS\" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

---
string[]  link_names
#robos_gazebo_ros_plugins_msgs/UnderwaterObjectModel[] models

")

(setf (get robosat_gazebo_ros_plugins_msgs::GetModelPropertiesResponse :md5sum-) "8f2ac94008b559adc87f7d99565ba995")
(setf (get robosat_gazebo_ros_plugins_msgs::GetModelPropertiesResponse :datatype-) "robosat_gazebo_ros_plugins_msgs/GetModelPropertiesResponse")
(setf (get robosat_gazebo_ros_plugins_msgs::GetModelPropertiesResponse :definition-)
      "# Copyright (c) 2016 The UUV Simulator Authors.
# All rights reserved.
#
# Licensed under the Apache License, Version 2.0 (the \"License\");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an \"AS IS\" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

---
string[]  link_names
#robos_gazebo_ros_plugins_msgs/UnderwaterObjectModel[] models

")



(provide :robosat_gazebo_ros_plugins_msgs/GetModelProperties "8f2ac94008b559adc87f7d99565ba995")


