#include <ros/ros.h>
#include <receiver_fun.hpp>

int main(int argc, char * argv[])
{
	ros::init(argc,argv,"reciever_node");
	ros::NodeHandle nl;

	
	ros::Rate loop_rate(10);
	Receiver res;
	while(ros::ok()) {
		res.add_counter();
		ROS_INFO("The counter is %d\n",res.get_counter());
		if (res.get_counter() == 100)
		{
			res.reset_counter();

		}
		ros::spinOnce();
		loop_rate.sleep();
	}
}
