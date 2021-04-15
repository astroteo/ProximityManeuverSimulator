; Auto-generated. Do not edit!


(cl:in-package robosat_gazebo_ros_plugins_msgs-srv)


;//! \htmlinclude GetModelProperties-request.msg.html

(cl:defclass <GetModelProperties-request> (roslisp-msg-protocol:ros-message)
  ()
)

(cl:defclass GetModelProperties-request (<GetModelProperties-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <GetModelProperties-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'GetModelProperties-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name robosat_gazebo_ros_plugins_msgs-srv:<GetModelProperties-request> is deprecated: use robosat_gazebo_ros_plugins_msgs-srv:GetModelProperties-request instead.")))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <GetModelProperties-request>) ostream)
  "Serializes a message object of type '<GetModelProperties-request>"
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <GetModelProperties-request>) istream)
  "Deserializes a message object of type '<GetModelProperties-request>"
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<GetModelProperties-request>)))
  "Returns string type for a service object of type '<GetModelProperties-request>"
  "robosat_gazebo_ros_plugins_msgs/GetModelPropertiesRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GetModelProperties-request)))
  "Returns string type for a service object of type 'GetModelProperties-request"
  "robosat_gazebo_ros_plugins_msgs/GetModelPropertiesRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<GetModelProperties-request>)))
  "Returns md5sum for a message object of type '<GetModelProperties-request>"
  "8f2ac94008b559adc87f7d99565ba995")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'GetModelProperties-request)))
  "Returns md5sum for a message object of type 'GetModelProperties-request"
  "8f2ac94008b559adc87f7d99565ba995")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<GetModelProperties-request>)))
  "Returns full string definition for message of type '<GetModelProperties-request>"
  (cl:format cl:nil "# Copyright (c) 2016 The UUV Simulator Authors.~%# All rights reserved.~%#~%# Licensed under the Apache License, Version 2.0 (the \"License\");~%# you may not use this file except in compliance with the License.~%# You may obtain a copy of the License at~%#~%#     http://www.apache.org/licenses/LICENSE-2.0~%#~%# Unless required by applicable law or agreed to in writing, software~%# distributed under the License is distributed on an \"AS IS\" BASIS,~%# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.~%# See the License for the specific language governing permissions and~%# limitations under the License.~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'GetModelProperties-request)))
  "Returns full string definition for message of type 'GetModelProperties-request"
  (cl:format cl:nil "# Copyright (c) 2016 The UUV Simulator Authors.~%# All rights reserved.~%#~%# Licensed under the Apache License, Version 2.0 (the \"License\");~%# you may not use this file except in compliance with the License.~%# You may obtain a copy of the License at~%#~%#     http://www.apache.org/licenses/LICENSE-2.0~%#~%# Unless required by applicable law or agreed to in writing, software~%# distributed under the License is distributed on an \"AS IS\" BASIS,~%# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.~%# See the License for the specific language governing permissions and~%# limitations under the License.~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <GetModelProperties-request>))
  (cl:+ 0
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <GetModelProperties-request>))
  "Converts a ROS message object to a list"
  (cl:list 'GetModelProperties-request
))
;//! \htmlinclude GetModelProperties-response.msg.html

(cl:defclass <GetModelProperties-response> (roslisp-msg-protocol:ros-message)
  ((link_names
    :reader link_names
    :initarg :link_names
    :type (cl:vector cl:string)
   :initform (cl:make-array 0 :element-type 'cl:string :initial-element "")))
)

(cl:defclass GetModelProperties-response (<GetModelProperties-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <GetModelProperties-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'GetModelProperties-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name robosat_gazebo_ros_plugins_msgs-srv:<GetModelProperties-response> is deprecated: use robosat_gazebo_ros_plugins_msgs-srv:GetModelProperties-response instead.")))

(cl:ensure-generic-function 'link_names-val :lambda-list '(m))
(cl:defmethod link_names-val ((m <GetModelProperties-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robosat_gazebo_ros_plugins_msgs-srv:link_names-val is deprecated.  Use robosat_gazebo_ros_plugins_msgs-srv:link_names instead.")
  (link_names m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <GetModelProperties-response>) ostream)
  "Serializes a message object of type '<GetModelProperties-response>"
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'link_names))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((__ros_str_len (cl:length ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) ele))
   (cl:slot-value msg 'link_names))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <GetModelProperties-response>) istream)
  "Deserializes a message object of type '<GetModelProperties-response>"
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'link_names) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'link_names)))
    (cl:dotimes (i __ros_arr_len)
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:aref vals i) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:aref vals i) __ros_str_idx) (cl:code-char (cl:read-byte istream))))))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<GetModelProperties-response>)))
  "Returns string type for a service object of type '<GetModelProperties-response>"
  "robosat_gazebo_ros_plugins_msgs/GetModelPropertiesResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GetModelProperties-response)))
  "Returns string type for a service object of type 'GetModelProperties-response"
  "robosat_gazebo_ros_plugins_msgs/GetModelPropertiesResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<GetModelProperties-response>)))
  "Returns md5sum for a message object of type '<GetModelProperties-response>"
  "8f2ac94008b559adc87f7d99565ba995")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'GetModelProperties-response)))
  "Returns md5sum for a message object of type 'GetModelProperties-response"
  "8f2ac94008b559adc87f7d99565ba995")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<GetModelProperties-response>)))
  "Returns full string definition for message of type '<GetModelProperties-response>"
  (cl:format cl:nil "string[]  link_names~%#robos_gazebo_ros_plugins_msgs/UnderwaterObjectModel[] models~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'GetModelProperties-response)))
  "Returns full string definition for message of type 'GetModelProperties-response"
  (cl:format cl:nil "string[]  link_names~%#robos_gazebo_ros_plugins_msgs/UnderwaterObjectModel[] models~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <GetModelProperties-response>))
  (cl:+ 0
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'link_names) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 4 (cl:length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <GetModelProperties-response>))
  "Converts a ROS message object to a list"
  (cl:list 'GetModelProperties-response
    (cl:cons ':link_names (link_names msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'GetModelProperties)))
  'GetModelProperties-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'GetModelProperties)))
  'GetModelProperties-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GetModelProperties)))
  "Returns string type for a service object of type '<GetModelProperties>"
  "robosat_gazebo_ros_plugins_msgs/GetModelProperties")