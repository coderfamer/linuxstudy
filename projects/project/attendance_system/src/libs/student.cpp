#include "student.hpp"
#include "manager.hpp"

namespace AttendanceSYS
{
	Student::Student()
	{

	}
	Student::~Student()
	{
		
	}

	int Student::stu_login()
	{
		string user;
		string pwd;

		cout << "please enter your id: ";
		cin >> user;
		cout << "enter your password: ";
		cin >> pwd;

		user_item stu_user;
		int ret = Manager::get_instance()->get_disk()->login_stu_user(user, stu_user);
		if (ret)
		{
			return SUCCESS;
		}

		if (stu_user.pwd.compare(pwd) != 0)
		{
			cout << "err pwd, please try agagin!!!" << endl;
			return SYS_ERR_PWD;
			sleep(1);
		}

		
		cout << "stu longin" << endl;
		Manager::get_instance()->get_interface()->stu_login_interface(user);
		return SUCCESS;
	}

	int Student::stu_pros_info(const string& user)
	{
		user_item stu_user;
		stu_user.user = user;
		Manager::get_instance()->get_disk()->get_stu_info(user, stu_user);
		
		print_stu(stu_user);
		pub_exit();
		return SUCCESS;
	}

	int Student::stu_alt_info(const string& user)
	{
		user_item stu_user;
		stu_user.user = user;
		string new_pwd;
		int new_age;
		Manager::get_instance()->get_disk()->get_stu_info(user, stu_user);
		
		print_leader(stu_user);
		cout << "1.  修改密码  " << endl;
		cout << "2.  修改年龄  " << endl;
		cout << "please enter your choice!!" << endl;
		int num;
		cin >> num;
		if (num == 1)
		{
			cout << "旧密码: " <<stu_user.pwd<< endl;
			cout << "请输入新密码: ";
			cin >>  new_pwd;
			Manager::get_instance()->get_disk()->update_stu_pwd(stu_user.user, new_pwd);
		}else if (num == 2){
			cout << "请输入新的年龄：";
			cin >> new_age;
			Manager::get_instance()->get_disk()->update_stu_age(stu_user.user, new_age);
		}else{
			return SYS_ERR_CHOICE;
		}

	}

	int Student::stu_course_soft(const string& user)
	{

		vector<course_item> soft_courses;
		course_item items;
		items.course_id = "0601";
		items.course_name = "软件工程课程设计";
		//item.tch_user = "张三";
		items.tch_id = "10001";
		soft_courses.push_back(items);
		items.course_id = "0602";
		items.course_name = ".net程序设计";
		//item.tch_user = "李四";
		items.tch_id = "10002";
		soft_courses.push_back(items);
		items.course_id = "0603";
		items.course_name = "android应用开发";
		//item.tch_user = "王五";
		items.tch_id = "10003";
		soft_courses.push_back(items);
		
		cout << "课程名\t\t\t课程号\t授课教师 教师ID"  << endl;
		cout << "软件工程课程设计\t0601\t张三\t 10001（必选）" << endl;
		cout << ".net程序设计\t\t0602\t李四\t 10002 （必选）" << endl;
		cout << "android应用开发\t\t0603\t王五\t 10030 （必选）" << endl;
		cout << "1. 专业英语\t\t0604\t赵六\t 10004 （选修）" << endl;
		cout << "2. linux操作系统\t0605\t李七\t 10005（选修）" << endl;
		cout << "4. 软件项目管理\t\t0606\t李帅\t 10006（选修）" << endl;
		cout << "请输入选修课程：（输入0结束选课）" << endl;
		cout << "" << endl;
		cout << "" << endl;
		int num;
		while (1)
		{
			cin >> num;
			switch (num)
			{
				case 0:
				Manager::get_instance()->get_disk()->stu_select_courses(user,soft_courses);
				return 0;
			case 1:
			 	items.course_id = "0604";
				items.course_name = "专业英语";
				//item.tch_user = "赵六";
				items.tch_id = "10004";
				soft_courses.push_back(items);
				break;
			case 2:
				items.course_id = "0605";
				items.course_name = "linux操作系统";
				//item.tch_user = "李七";
				items.tch_id = "10005";
				soft_courses.push_back(items);
				break;
			case 3:
				items.course_id = "0603";
				items.course_name = "android应用开发";
				//item.tch_user = "王五";
				items.tch_id = "10003";
				soft_courses.push_back(items);
				break;
			default:
				break;
			}
		}
	}

	int Student::get_attendance_info(const string& user)
	{
		vector<attendance_item> items;
		Manager::get_instance()->get_disk()->stu_get_attendance(user, items);
		cout << "课程号\t课程名\t\t\t教师工号\t教师名\t缺勤原因 缺勤次数" << endl;
		for (auto it = items.begin(); it != items.end(); it++)
		{
			//ad_crs_name,ad_crs_id,ad_afd_num,ad_afd_reason,ad_tch_id,ad_tch_name
			cout << it->course_id << "\t" << it->course_name << "\t" << it->user_tch << "\t\t"
				<< it->tch_name << "\t" << it->afd_reason << "\t " << it->afd_num << endl;
		}
		pub_exit();
	}


};