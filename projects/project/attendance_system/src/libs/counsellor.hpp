
#ifndef _COUNSELLOR_H
#define _COUNSELLOR_H
#include "public.hpp"
namespace AttendanceSYS
{
	class Counsellor
	{
	public:
		Counsellor();
		int csl_login();
		//int csl_check_attendance();
		int csl_pros_info(const string& user);
		int csl_alt_info(const string& user);
		int csl_check_attendances(const string& user);
		int csl_check_attendance(const string& user);
		int csl_del_attendance(const string& user);


	private:
		~Counsellor();
	};
};

#endif