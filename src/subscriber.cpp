#include<ros/ros.h>
#include <geometry_msgs/Point.h>

void pointCallback(const geometry_msgs::Point::ConstPtr& point_msg)
{
  ROS_INFO("I've got a point!");
}


int main(int argc, char** argv)
{
  ros::init(argc,argv,"subscriber");
  ros::NodeHandle nh;//to communicate with the master

 ros::Subscriber our_sub =nh.subscribe("point",10, &pointCallback); //function pointer
 ros::spin();


return 0;
         }
