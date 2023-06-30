#include <ros/ros.h>

int main(int argc, char** argv) {

  ros::init(argc, argv, "talker");

  ros::NodeHandle nh;

  ROS_INFO("Hello, ROS!");

  ros::spin();

  return 0;
}
