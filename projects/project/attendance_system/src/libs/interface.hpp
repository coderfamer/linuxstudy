#ifndef _INTERFACE_H
#define _INTERFACE_H

#include <string>
#include <vector>
#include <iostream>

#include "common.hpp"
#include "public.hpp"

using std::cout;
using std::endl;
using std::cin;
using std::string;


namespace AttendanceSYS
{
	class  InterFace
	{
	public:
		InterFace();
		~InterFace();
		
		bool init();




		void admin_login_interface(const string& user);
		void tch_login_interface(const string& user);
		void stu_login_interface(const string& user);
		void csl_login_interface(const string& user);
		void admin_adduser_interface();
		void admin_deluser_interface();
		void admin_usrinfo_interface();
		
		void csl_stuinfo_interface(const string& user);
		void stu_course_dep_interface(const string& user);
		void stu_course_class_interface(const string& user);

		void csl_check_attendance(const string& user);




	};
};

#endif
