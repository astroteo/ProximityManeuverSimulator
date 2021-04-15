#!/usr/bin/env bash
source devel/setup.bash

export GAZEBO_PLUGIN_PATH=$PWD/devel/lib:$GAZEBO_PLUGIN_PATH
export GAZEBO_MODEL_PATH=$PWD/src/robosat_gazebo/models:$GAZEBO_MODEL_PATH

roslaunch robosat_gazebo default_sim.launch
