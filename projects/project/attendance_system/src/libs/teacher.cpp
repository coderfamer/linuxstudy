#include "teacher.hpp"
#include "manager.hpp"

namespace AttendanceSYS
{
	Teacher::Teacher()
	{

	}
	Teacher::~Teacher()
	{

	}

	int Teacher::tch_login()
	{
		string user;
		string pwd;

		cout << "please enter your id: ";
		cin >> user;
		cout << "enter your password: ";
		cin >> pwd;

		user_item tch_user;
		int ret = Manager::get_instance()->get_disk()->login_tch_user(user, tch_user);
		if (ret)
		{
			return SUCCESS;
		}

		if (tch_user.pwd.compare(pwd) != 0)
		{
			cout << "err pwd, please try agagin!!!" << endl;
			return SYS_ERR_PWD;
			sleep(1);
		}

		
		cout << "stu longin" << endl;
		Manager::get_instance()->get_interface()->tch_login_interface(user);
		return SUCCESS;
	}

	int Teacher::tch_pros_info(const string& user)
	{
		user_item tch_user;
		tch_user.user = user;
		Manager::get_instance()->get_disk()->get_tch_info(user, tch_user);
		print_leader(tch_user);

		pub_exit();
		return SUCCESS;
	}

	int Teacher::tch_alt_info(const string& user)
	{
		user_item tch_user;
		tch_user.user = user;
		string new_pwd;
		int new_age;
		Manager::get_instance()->get_disk()->get_tch_info(user, tch_user);
		
		print_leader(tch_user);
		cout << "1.  修改密码  " << endl;
		cout << "2.  修改年龄  " << endl;
		cout << "please enter your choice!!" << endl;
		int num;
		cin >> num;
		if (num == 1)
		{
			cout << "旧密码: " <<tch_user.pwd<< endl;
			cout << "请输入新密码: ";
			cin >>  new_pwd;
			Manager::get_instance()->get_disk()->update_tch_pwd(tch_user.user, new_pwd);
		}else if (num == 2){
			cout << "请输入新的年龄：";
			cin >> new_age;
			Manager::get_instance()->get_disk()->update_tch_age(tch_user.user, new_age);
		}else{
			return SYS_ERR_CHOICE;
		}

	}

	int Teacher::tch_attendance(const string& user)
	{
		//attendance_item item;
		//item.user_tch = user;
		string stu_id;
		string afd_reason;
		cout << "please enter student ID:"<< endl;
		cin >> stu_id; 
		cout << "please enter attendance reason:(迟到 旷课 请假) "<< endl;
		cin >> afd_reason;
		Manager::get_instance()->get_disk()->tch_add_attendance(user, stu_id, afd_reason);
		return SUCCESS;
	}

	int Teacher::tch_check_attendance(const string& user)
	{
		cout << "1.查看所有学生考勤信息" << endl;
		cout << "2.按照学号查看" << endl;
		cout << "please enter your choice: " ;
		int num;
		cin >> num;
		if (num ==1)
		{
			vector<attendance_item> items;
			map<string, attendance_item> temp;
			Manager::get_instance()->get_disk()->tch_get_attendances(user, items);
			for (auto it = items.begin(); it != items.end(); it++)
			{
				if (it->afd_reason.compare("chidao")  == 0 || it->afd_reason.compare("kuangke") == 0)
				{
					attendance_item tmp = temp[it->user_stu];
					tmp.stu_name = it->stu_name;	
					tmp.afd_count += it->afd_num;
					temp[it->user_stu] = tmp;

				}
			}
			cout << "学号\t姓名\t缺勤次数" << endl;
			for (auto it = temp.begin(); it != temp.end(); it++)
			{;

				cout << it->first << "\t" << it->second.stu_name << "\t" << it->second.afd_count <<endl;
			}
			pub_exit();
		}else if (num == 2){
			cout << "请输入学生学号: " << endl;
			string user_stu;
			cin >> user_stu;
			vector<attendance_item> items;
			//items.user_stu = user_stu;
			map<string, attendance_item> temp;
			Manager::get_instance()->get_disk()->tch_get_attendance(user, user_stu, items);
			for (auto it = items.begin(); it != items.end(); it++)
			{
				if (it->afd_reason.compare("chidao")  == 0 || it->afd_reason.compare("kuangke") == 0)
				{
					attendance_item tmp = temp[it->user_stu];
					tmp.stu_name = it->stu_name;	
					tmp.afd_count += it->afd_num;
					temp[it->user_stu] = tmp;

				}
			}
			for (auto it = temp.begin(); it != temp.end(); it++)
			{
				cout << it->first << endl;
				//cout << "stu name = " << it->second.stu_name << endl;

				cout << "学号\t姓名\t缺勤次数" << endl;
				cout << it->first << "\t" << it->second.stu_name << "\t" << it->second.afd_count <<endl;
			}
			pub_exit();

		}else{
			cout << "error choice!!!" << endl;
			return 8;
		}

	}

	int Teacher::tch_del_attendance(const string& user)
	{
		cout << "请输入学生学号: ";
		string user_stu;
		cin >> user_stu;
		cout << "1.删除一条考勤记录" << endl;
		cout << "2.删除所有考勤记录" << endl;
		cout << "please enter you choice: ";
		int num;
		cin >> num;
		if (num == 1)
		{
			vector<attendance_item> items;
			Manager::get_instance()->get_disk()->tch_get_attendance(user, user_stu, items);
			cout << "学号\t姓名\t缺勤原因 缺勤次数" << endl;
			for (auto it = items.begin(); it != items.end(); it++)
			{
				cout << it->user_stu << "\t" << it->stu_name << "\t" << it->afd_reason << "\t "<< it->afd_num << endl;
			}
			cout << endl;
			cout << "请输入删除的考勤记录(迟到,旷课,事假):" << endl;
			string reason;
			cin >> reason;
			Manager::get_instance()->get_disk()->tch_del_attendance(user,user_stu,reason);
			pub_exit();

		}else if (num == 2){
			Manager::get_instance()->get_disk()->tch_del_attendance(user, user_stu);
		}
	}
};