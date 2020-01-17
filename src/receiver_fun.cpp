#include<receiver_fun.hpp>


Receiver::Receiver()
{
	counter = 0;
}

bool Receiver::add_counter(void)
{
	counter++;
	return true;

}


bool Receiver::set_counter(int num)
{
	counter = num;
	return true;
}

bool Receiver::reset_counter(void)
{
	counter = 0;
	return true;
}

int Receiver::get_counter(void)
{
	return counter;
}
