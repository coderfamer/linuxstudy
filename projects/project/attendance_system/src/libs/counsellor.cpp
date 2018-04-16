#include "counsellor.hpp"
#include "manager.hpp"


namespace AttendanceSYS
{
	Counsellor::Counsellor()
	{

	}
	Counsellor::~Counsellor()
	{
		
	}

	int Counsellor::csl_login()
	{
		string user;
		string pwd;

		cout << "please enter your id: ";
		cin >> user;
		cout << "enter your password: ";
		cin >> pwd;
		user_item csl_user;
		int ret = Manager::get_instance()->get_disk()->login_csl_user(user, csl_user);
		if (ret)
		{
			return SUCCESS;
		}
		if (csl_user.pwd.compare(pwd) != 0)
		{
			cout << "err pwd, please try agagin!!!" << endl;
			sleep(2);
			return SYS_ERR_PWD;
		}
		cout << "counsellor longin" << endl;
		Manager::get_instance()->get_interface()->csl_login_interface(user);
		return SUCCESS;
	}

	int Counsellor::csl_pros_info(const string& user)
	{
		user_item csl_user;
		csl_user.user = user;
		Manager::get_instance()->get_disk()->get_csl_info(user, csl_user);
		print_leader(csl_user);

		pub_exit();
		return SUCCESS;
	}

	int Counsellor::csl_alt_info(const string& user)
	{
		user_item csl_user;
		csl_user.user = user;
		string new_pwd;
		int new_age;
		Manager::get_instance()->get_disk()->get_csl_info(user, csl_user);
		
		print_leader(csl_user);
		cout << "1.  修改密码  " << endl;
		cout << "2.  修改年龄  " << endl;
		cout << "please enter your choice!!" << endl;
		int num;
		cin >> num;
		if (num == 1)
		{
			cout << "旧密码: " <<csl_user.pwd<< endl;
			cout << "请输入新密码: ";
			cin >>  new_pwd;
			Manager::get_instance()->get_disk()->update_csl_pwd(csl_user.user, new_pwd);
		}else if (num == 2){
			cout << "请输入新的年龄：";
			cin >> new_age;
			Manager::get_instance()->get_disk()->update_csl_age(csl_user.user, new_age);
		}else{
			return SYS_ERR_CHOICE;
		}

	}

	int Counsellor::csl_check_attendances(const string& user)
	{
		vector<attendance_item> items;
		map<string, attendance_item> temp;
		Manager::get_instance()->get_disk()->csl_get_attendances(user, items);
		for (auto it = items.begin(); it != items.end(); it++)
		{
			if (it->afd_reason.compare("chidao")  == 0 || it->afd_reason.compare("kuangke") == 0 || it->afd_reason.compare("shijia"))
			{
				attendance_item tmp = temp[it->user_stu];
				tmp.stu_name = it->stu_name;
				tmp.user_stu = it->user_stu;
				tmp.user_tch = it->user_tch;
				tmp.tch_name = it->tch_name;
				tmp.course_id = it->course_id;
				tmp.course_name = it->course_name;	
				tmp.afd_count += it->afd_num;
				temp[it->user_stu] = tmp;

			}
		}
		cout << "学号\t姓名\t教师号\t教师名\t课程号\t课程名\t\t 缺勤数" << endl;
		for (auto it = temp.begin(); it != temp.end(); it++)
		{
			//cout << it->first << endl;

			
			cout << it->first<<"\t"<<it->second.stu_name <<"\t"<< it->second.user_tch<<"\t"<<it->second.tch_name
					<<"\t"<< it->second.course_id<<"\t"<< it->second.course_name << " " << it->second.afd_count <<endl;
		}
		pub_exit();
	}

	int Counsellor::csl_check_attendance(const string& user)
	{
		cout << "请输入学生学号: " ;
		string user_stu;
		cin >> user_stu;
		vector<attendance_item> items;
		Manager::get_instance()->get_disk()->csl_get_attendance(user,user_stu, items);
		cout << "学号\t姓名\t教师号\t教师名\t课程号\t课程名\t\t 缺勤原因 缺勤数" << endl;
		for (auto it = items.begin(); it != items.end(); it++)
		{
			//ad_crs_name,ad_crs_id,ad_afd_num,ad_afd_reason,ad_tch_id,ad_tch_name
			cout << user_stu << "\t" << it->stu_name << "\t" << it->user_tch << "\t"
				<< it->tch_name << "\t" << it->course_id << "\t" << it->course_name<<" "<<it->afd_reason<<it->afd_num<< endl;
		}
		pub_exit();
	}

	int Counsellor::csl_del_attendance(const string& user)
	{
		cout << "请输入学生学号: ";
		string user_stu;
		cin >> user_stu;
		cout << "请输入学生课程: ";
		string course_name;
		cin >> course_name;
		cout << "1.删除一条考勤记录" << endl;
		cout << "2.删除所有考勤记录" << endl;
		cout << "please enter you choice: ";
		int num;
		cin >> num;
		if (num == 1)
		{
			vector<attendance_item> items;
			Manager::get_instance()->get_disk()->csl_get_attendance(user, user_stu,course_name, items);
			cout << "学号\t姓名\t缺勤原因 缺勤次数" << endl;
			for (auto it = items.begin(); it != items.end(); it++)
			{
				cout << it->user_stu << "\t" << it->stu_name << "\t" << it->afd_reason << "\t "<< it->afd_num << endl;
			}
			cout << endl;
			cout << "请输入删除的考勤记录(迟到,旷课,事假):" << endl;
			string reason;
			cin >> reason;
			Manager::get_instance()->get_disk()->csl_del_attendance(user,user_stu,course_name,reason);
			pub_exit();

		}else if (num == 2){
			Manager::get_instance()->get_disk()->csl_del_attendance(user, user_stu);
		}
	}


};







