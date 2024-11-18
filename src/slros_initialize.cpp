#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "skynetmini_controller2";

// For Block skynetmini_controller2/ego_car_speed
SimulinkSubscriber<std_msgs::Float64, SL_Bus_skynetmini_controller2_std_msgs_Float64> Sub_skynetmini_controller2_1;

// For Block skynetmini_controller2/ego_car_speed1
SimulinkSubscriber<std_msgs::Float64, SL_Bus_skynetmini_controller2_std_msgs_Float64> Sub_skynetmini_controller2_42;

// For Block skynetmini_controller2/space_gap
SimulinkSubscriber<std_msgs::Float64, SL_Bus_skynetmini_controller2_std_msgs_Float64> Sub_skynetmini_controller2_2;

// For Block skynetmini_controller2/ego_car_accel
SimulinkPublisher<std_msgs::Float64, SL_Bus_skynetmini_controller2_std_msgs_Float64> Pub_skynetmini_controller2_3;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

