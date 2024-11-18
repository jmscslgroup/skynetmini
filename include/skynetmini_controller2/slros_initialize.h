#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"
#include "skynetmini_controller2_types.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block skynetmini_controller2/ego_car_speed
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_skynetmini_controller2_std_msgs_Float64> Sub_skynetmini_controller2_1;

// For Block skynetmini_controller2/ego_car_speed1
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_skynetmini_controller2_std_msgs_Float64> Sub_skynetmini_controller2_42;

// For Block skynetmini_controller2/space_gap
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_skynetmini_controller2_std_msgs_Float64> Sub_skynetmini_controller2_2;

// For Block skynetmini_controller2/ego_car_accel
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_skynetmini_controller2_std_msgs_Float64> Pub_skynetmini_controller2_3;

void slros_node_init(int argc, char** argv);

#endif
