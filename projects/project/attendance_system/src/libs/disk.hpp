#ifndef _DISK_H
#define _DISK_H
#include <iostream>
#include <string>
#include <sqlite3.h>
#include <mutex>
#include <vector>
#include <cstring>
#include <unistd.h>
#include <iomanip>
#include <algorithm>
#include <map>

#define USER_PWD "123456"

#include "common.hpp"

using std::cout;
using std::endl;
using std::string;
using std::cin;
using std::recursive_mutex;
using std::mutex;
using std::lock_guard;
using std::vector;
using std::setw;
using std::setiosflags;
using std::ios;
using std::left;
using std::map;

namespace AttendanceSYS
{
	class Disk
	{
	public:
		Disk();
		~Disk();
		bool init(const string &name);

		int get_admin_info(const string &user, user_item& item);
		int get_stu_info(const string& user, user_item& item);
		int get_tch_info(const string& user, user_item& item);
		int get_csl_info(const string& user, user_item& item);


		int login_admin_user(const string &userId, user_item& user);
		int login_stu_user(const string &user, user_item& item);
		int login_tch_user(const string& user, user_item& item);
		int login_csl_user(const string& user, user_item& item);

		int update_admin_pwd(string user, string pwd);
		int update_admin_age(string user, int age);
		int update_tch_pwd(string user, string pwd);
		int update_tch_age(string user, int age);
		int update_stu_pwd(string user, string pwd);
		int update_stu_age(string user, int age);
		int update_csl_pwd(string user, string pwd);
		int update_csl_age(string user, int age);

		int add_stu_user(user_item& item);
		int add_tch_user(user_item& item);
		int add_csl_user(user_item& item);
		int add_admin_user(user_item& item);
		int del_stu(const string& user);
		int del_csl(const string& user);
		int del_tch(const string& user);
		int get_admin_users(vector<user_item>& users);
		int get_tch_users(vector<user_item>& users);
		int get_csl_users(vector<user_item>& users);
		int get_stu_users(vector<user_item>& users);

		int stu_select_courses(const string& user, vector<course_item>& items);
		int tch_add_attendance(const string& user, const string& user_stu, const string& afd_reason);
		
		int tch_get_attendances(const string& user, vector<attendance_item>& items);
		int tch_get_attendance(const string& user, const string& user_stu, vector<attendance_item>& items);
		int tch_del_attendance(const string& user, const string& user_stu, const string& afd_reason);
		int tch_del_attendance(const string& user, const string& user_stu);
		int stu_get_attendance(const string& user, vector<attendance_item>& items);
		int csl_get_attendances(const string& user, vector<attendance_item>& items);
		int csl_get_attendance(const string& user, const string& user_stu, vector<attendance_item>& items);
		int csl_get_attendance(const string& user, const string& user_stu, const string& course_name, vector<attendance_item>& items);
		//int csl_del_attendance(const string& user, const string& user_stu, const string& course_name, vector<attendance_item>& items);
		int csl_del_attendance(const string& user, const string& user_stu, const string& course_name, const string& afd_reason);
		int csl_del_attendance(const string& user, const string& user_stu);
	private:
		sqlite3* m_db = nullptr;
		recursive_mutex rec_mtx;
	};
};

#endif