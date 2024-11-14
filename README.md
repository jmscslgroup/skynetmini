# skynetmini

## Setup Docker container (Docker Desktop)

```
docker run -it ros:noetic-robot bash
source ros_entrypoint.sh
mkdir ros
mkdir ros/catkin_ws
mkdir ros/catkin_ws/src
sudo apt update
sudo apt install git
cd ros/catkin_ws/src
git clone https://github.com/jmscslgroup/skynetmini
git clone https://github.com/jmscslgroup/odometer
git clone https://github.com/jmscslgroup/subtractor
git clone https://github.com/jmscslgroup/carsimplesimulink
cp skynetmini/skynetmini.launch ..
cd ..
catkin_make
```

Then, copy docker file to container_name:/ros/catkin_ws

## Usage

First, in Docker Desktop, make sure the container is running.

```
docker exec -it container_name bash
source ros_entrypoint.sh
cd ros/catkin_ws
catkin_make
source devel/setup.sh
roslaunch skynetmini.launch
```

First pull the docker container with ros

docker pull ros:noetic-robot

Next, run the docker container

docker run -it ros:noetic-robot bash

Then run ros using the command,

roscore

Open another terminal.

Steps to run custom docker image (Quicker)

docker build -t cs5891:test .

docker run --mount type=bind,source="$(pwd)",target=/ros/catkin_ws/src -it cs5891:test

The script automatically performs the following actions upon starting the container:

1- Checks if the Workspace is Built: If not, it initializes and builds the workspace.
2- Clones Required Repositories: Downloads necessary ROS packages into the src directory.
3- Builds the Workspace: Runs catkin_make to compile the workspace.
4- Sources the ROS Environment: Loads the environment variables for ROS functionality.
5- Copies Launch Files: Moves relevant launch files to the workspace root.
6- Unzips and Renames Bag Files: Extracts a specified bag file for data playback.
