#ifndef _ADMIN_H
#define _ADMIN_H

#include <iostream>
#include <string>

#include "disk.hpp"
#include "common.hpp"
#include "public.hpp"


namespace AttendanceSYS
{
	class Admin
	{
	public:
		Admin();

		int admin_login();
		int admin_pros_info(const string &user);
		int admin_alt_info(const string &user);
		
		int admin_add_stu();
		int admin_add_tch();
		int admin_add_csl();
		int admin_add_admin();
		int admin_del_stu();
		int admin_del_tch();
		int admin_del_csl();
		int admin_check_admin();
		int admin_check_tch();
		int admin_check_csl();
		int admin_check_stu();

		int course_select_switch(int num);

		//int flag = 0;
	
	private:
		~Admin();

	};

};

#endif