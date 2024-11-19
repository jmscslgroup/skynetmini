# Skynet Mini

**CS 5891**

### Team Members:
- Giorgio Antonacci  
- Yizhou Guo  
- Azhar Hasan  

---

## Project Title:  
**Fuel-Efficient and Traffic-Friendly Car Following Model**

## Project Goal:  
This project explores the potential of Adaptive Cruise Control (ACC) systems to enhance fuel efficiency in vehicles while ensuring effective and safe car-following behavior.

---

### Docker Container Setup (Docker Desktop)

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
