#ifndef _STUDENT_H
#define _STUDENT_H
#include "public.hpp"
#include "common.hpp"
namespace AttendanceSYS
{
	class Student
	{
	public:
		Student();

		int stu_login();
		int stu_pros_info(const string& user);
		int stu_alt_info(const string &user);
		int stu_course_soft(const string& user);
		int get_attendance_info(const string& user);
	private:
		~Student();
		
		
	};	

};

#endif