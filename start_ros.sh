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
    [ ! -d "skynetmini" ] && git clone https://github.com/jmscslgroup/skynetmini.git
    [ ! -d "subtractor" ] && git clone https://github.com/jmscslgroup/subtractor.git
    [ ! -d "odometer" ] && git clone https://github.com/jmscslgroup/odometer.git
    [ ! -d "carsimplesimulink" ] && git clone https://github.com/jmscslgroup/carsimplesimulink.git
    [ ! -d "AV-T_bag" ] && git clone https://github.com/giorgioa02/AV-T_bag.git

    # Return to the workspace root and build
    cd ..
    catkin_make

    # Source the new setup file
    source devel/setup.sh 

    # Copy the launch file to the main workspace directory
    if [ -f "src/skynetmini/launch/skynetmini.launch" ]; then
        cp src/skynetmini/launch/skynetmini.launch .
    fi
    
    # Copy and unzip the bag file if it exists
    if [ -f "src/AV-T_bag/mytest.zip" ]; then
        cp src/AV-T_bag/mytest.zip .
        unzip mytest.zip -d .
        mv 2023_09_28_16_19_25_2T3MWRFVXLW056972microstrain_record.bag mytest.bag
    fi
    # Launch the ROS application if needed (uncomment if required)
    # roslaunch skynetmini skynetmini.launch
fi

# Start roscore if the workspace is already built and skip building
# exec roscore
exec bash
