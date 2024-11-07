#!/bin/bash

# Source ROS setup
source /ros_entrypoint.sh

# Set up the workspace if it hasn't been built
if [ ! -f "/ros/catkin_ws/devel/setup.bash" ]; then
    # Navigate to the catkin workspace
    cd /ros/catkin_ws
    
    # Create the src directory if it doesn't exist
    mkdir -p src
    cd src

    # Clone necessary repositories
    git clone https://github.com/jmscslgroup/skynetmini.git
    git clone https://github.com/jmscslgroup/subtractor.git
    git clone https://github.com/jmscslgroup/odometer.git
    git clone https://github.com/jmscslgroup/carsimplesimulink.git
    git clone https://github.com/giorgioa02/AV-T_bag.git

    # Return to the workspace root and build
    cd /ros/catkin_ws
    catkin_make

    # Source the new setup file
    source devel/setup.sh 

    # Copy the launch file to the main workspace directory, if needed
    if [ -f "src/skynetmini/launch/skynetmini.launch" ]; then
        cp src/skynetmini/launch/skynetmini.launch .
    fi
    #Copy the bagfile out
    cp src/AV-T_bag/mytest.zip .
    unzip mytest.zip .
    mv 2023_09_28_16_19_25_2T3MWRFVXLW056972microstrain_record.bag mytest.bag
    # Launch the ROS application
    roslaunch skynetmini skynetmini.launch
fi

# Start roscore if the workspace is already built and skip building
exec roscore
