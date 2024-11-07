# skynetmini

First pull the docker container with ros

docker pull ros:noetic-robot

Next, run the docker container

docker run -it ros:noetic-robot bash

Then run ros using the command,

roscore

Open another terminal.


Custom docker

docker build -t cs5891:test .

docker run --mount type=bind,source="$(pwd)",target=/ros/catkin_ws -it cs5891:test
