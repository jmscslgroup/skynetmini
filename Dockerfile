# syntax=docker/dockerfile:1
FROM ros:noetic-robot

# change the default shell command
SHELL ["/bin/bash", "-c"]

# Update and install necessary packages
RUN apt-get update && apt-get install -y git unzip

# Set up the ROS entry point for bash
RUN echo "source /ros_entrypoint.sh" >> /etc/bash.bashrc

# Set up workspace
WORKDIR /ros/catkin_ws/
RUN mkdir -p src

# Copy the startup script into the container
COPY start_ros.sh /start_ros.sh
RUN chmod +x /start_ros.sh

# Default command to run the startup script
CMD ["/start_ros.sh"]
