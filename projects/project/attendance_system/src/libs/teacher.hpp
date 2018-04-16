#ifndef _TEACHER_H
#define _TEACHER_H
#include "public.hpp"
#include "common.hpp"
namespace AttendanceSYS
{
	class Teacher
	{
	public:
		Teacher();
		int tch_login();
		int tch_pros_info(const string &user);
		int tch_alt_info(const string &user);
		int tch_attendance(const string& user);
		int tch_check_attendance(const string& user);
		int tch_del_attendance(const string& user);

	private:
		~Teacher();
	};
};
#endif