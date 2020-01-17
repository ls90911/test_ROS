#ifndef RECEIVER_FUN_HPP
#define RECEIVER_FUN_HPP

class Receiver {
	int counter;

	public:
	Receiver();
	bool add_counter(void);
	bool set_counter(int num);
	bool reset_counter(void);
	int get_counter(void);
};



#endif
