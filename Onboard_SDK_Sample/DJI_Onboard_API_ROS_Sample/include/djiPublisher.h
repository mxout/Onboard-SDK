#ifndef DJI_SDK_DJI_PUBLISHERS_H
#define DJI_SDK_DJI_PUBLISHERS_H
#include <ros/ros.h>
#include "SDK.h"
namespace publishers
{
	extern ros::Publisher battery_pub, ctrl_info_pub,
			 is_flying_pub, activation_status_pub, test_fre_pub, acc_pub;
	extern ros::Publisher gps_pub, att_quad_pub, compass_pub,
			 vel_pub, local_pos_pub;
	extern ros::Publisher rc_channels_pub,odem_publisher;
	int init_publishers(ros::NodeHandle & nh);
};
#endif 
