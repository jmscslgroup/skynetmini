# skynetmini

## Group: Skynet Mini
Giorgio Antonacci 
Yizhou Guo
Azhar Hasan

## Title: Maximize Fuel Efficiency in Traffic-Friendly Car Following Model
### Goal: The goal of this project is to explore the potential of Adaptive Cruise Control (ACC) systems to improve fuel efficiency in vehicles while maintaining effective car-following behavior

### Setup Docker container (Docker Desktop)

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

In a different screen

```
docker cp path/to/bag/file container_name:/ros/catkin_ws
```

### Usage

First, in Docker Desktop, make sure the container is running.

```
docker exec -it container_name bash
source ros_entrypoint.sh
cd ros/catkin_ws
catkin_make
source devel/setup.sh
roslaunch skynetmini.launch
```
