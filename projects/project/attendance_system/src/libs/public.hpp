#ifndef _PUBLIC_H
#define _PUBLIC_H

#include "common.hpp"
#include "disk.hpp"

namespace AttendanceSYS
{
	void pub_exit();
	void print_leader(user_item &item);
	void print_stu(user_item& item);
	void print_stus(vector<user_item> items);
	void print_leaders(vector<user_item> items);
	void users_sort(vector<user_item> items);
};


#endif