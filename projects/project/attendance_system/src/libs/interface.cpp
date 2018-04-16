#include <iostream>

#include "interface.hpp"
#include "manager.hpp"
#include "admin.hpp"

namespace AttendanceSYS
{
	InterFace::InterFace()
	{

	}
	InterFace::~InterFace()
	{

	}

	//main login interface 
	bool InterFace::init()
	{
		int num;
		do 
		{
			system("clear");
			cout << "欢迎进入高校考勤管理系统！！！" << endl; 
			cout << "1. 管理员登录"  << endl;
			cout << "2. 教师登录" << endl;
			cout << "3. 辅导员登录" << endl;
			cout << "4. 学生登录"  << endl;
			cout << "5. 退出" << endl;

			cout << "please show your choice(1-5):  ";
			cin >> num;
			switch (num)
			{
			case 1:	
				Manager::get_instance()->get_admin()->admin_login();
				break;
			case 2:
				Manager::get_instance()->get_tch()->tch_login();
				break;
			case 3:
			 	Manager::get_instance()->get_csl()->csl_login();
				break;
			case 4:
				Manager::get_instance()->get_stu()->stu_login();
				break;
			case 5:
				cout << "thanks for using this system, bye！！！" << endl;
				exit(0);
				break;
			default:
				cout << "the number is out of range!!!"  << endl;	
		    	return SYS_ERR_RANGE;
				//break;
			}
			
		}while (1);
		return true;
	}

	//admin login interface
	void InterFace::admin_login_interface(const string &user)
	{
		string key;
		while (1)
		{
			system("clear");
			cout << "1. 查看个人信息" << endl;
			cout << "2. 修改信息" << endl;
			cout << "3. 增加用户" << endl;
			cout << "4. 删除用户" << endl;
			cout << "5. 用户信息" << endl;
			cout << "6. 开启选课" << endl;
			cout << "7. 关闭选课" << endl;
			cout << "8. 返回上一层" << endl;
			cout << "9. 退出" << endl;
			int num;
			cout << "please enter you choice: "; 
			cin >> num;
			if (num < 1 || num > 9)
			{
				cout << "try again" << endl;
				break;
			}
			switch (num)
			{
			case 1:	
				Manager::get_instance()->get_admin()->admin_pros_info(user);
				break;
			case 2:
				Manager::get_instance()->get_admin()->admin_alt_info(user);
				break;
			case 3:
				Manager::get_instance()->get_interface()->admin_adduser_interface();
				break;
			case 4:
				Manager::get_instance()->get_interface()->admin_deluser_interface();
				break;
			case 5:
				Manager::get_instance()->get_interface()->admin_usrinfo_interface();
				break;
			case 6:
				//flag = 1;
				result = Manager::get_instance()->get_admin()->course_select_switch(num);
				break;
			case 7:
				//flag = 2;
				result = Manager::get_instance()->get_admin()->course_select_switch(num);
				break;
			case 8:
				return;
				break;
			case 9:
				exit(0);
				break;
			default:
				cout << "输入有误！！" << endl;
				break;
			sleep(1);
			}
		}
	}

	void InterFace::admin_adduser_interface()
	{
		while (1)
		{
			system("clear");
			cout << "1. 增加管理员" << endl;
			cout << "2. 增加学生" << endl;
			cout << "3. 增加教师" << endl;
			cout << "4. 增加辅导员" << endl;
			cout << "5. 返回上一层" << endl;
			cout << "6. 退出" << endl;
			cout << "please enter you choice: " ;
			int num;
			cin >> num;

			switch (num)
			{
			case 1:
				Manager::get_instance()->get_admin()->admin_add_admin();	
				break;
			case 2:
				Manager::get_instance()->get_admin()->admin_add_stu();
				break;
			case 3:
				Manager::get_instance()->get_admin()->admin_add_tch();
				break;
			case 4:
				Manager::get_instance()->get_admin()->admin_add_csl();
				break;
			case 5:
				return;
				break;
			case 6:
				exit(0);
				break;
			default:
				break;
			sleep(1);
			}
		}
	}

	void InterFace::admin_deluser_interface()
	{
		while (1)
		{
			system("clear");
			cout << "1. 删除管理员" << endl;
			cout << "2. 删除辅导员" << endl;
			cout << "3. 删除教师" << endl;
			cout << "4. 删除学生" << endl;
			cout << "5. 返回上一层" << endl;
			cout << "6. 退出" << endl;
			cout << "please enter you choice:	";
			int num;
			cin >> num;

			switch (num)
			{
			case 1:	
				break;
			case 2:
				Manager::get_instance()->get_admin()->admin_del_csl();
				break;
			case 3:
				Manager::get_instance()->get_admin()->admin_del_tch();
				break;
			case 4:
				Manager::get_instance()->get_admin()->admin_del_stu();
				break;
			case 5:
				return;
				break;
			case 6:
				exit(0);
				break;
			default:
				break;
			sleep(1);
			}
		}

	}

	void InterFace::admin_usrinfo_interface()
	{
		while (1)
		{
			system("clear");
			cout << "1. 查看管理员信息" << endl;
			cout << "2. 查看学生信息" << endl;
			cout << "3. 查看教师信息" << endl;
			cout << "4. 查看辅导员信息" << endl;
			cout << "5. 返回上一层" << endl;
			cout << "6. 退出" << endl;
			cout << "please enter you choice: "; 

			int num;
			cin >> num;

			switch (num)
			{
			case 1:	
				Manager::get_instance()->get_admin()->admin_check_admin();
				break;
			case 2:
				Manager::get_instance()->get_admin()->admin_check_stu();
				break;
			case 3:
				Manager::get_instance()->get_admin()->admin_check_tch();
				break;
			case 4:
				Manager::get_instance()->get_admin()->admin_check_csl();
				break;
			case 5:
				return;
				break;//InterFace::admin_login_interface
			case 6:
				exit(0);
				break;
			default:
				cout << "wrong input" << endl;
				break;
			sleep(1);
			}
		}
	}

	void InterFace::csl_login_interface(const string& user)
	{
		while (1)
		{
			system("clear");
			cout << "1. 查看个人信息" << endl;
			cout << "2. 修改信息" << endl;
			cout << "3. 学生信息" << endl;
			cout << "4. 查看考勤" << endl;
			cout << "5. 删除考勤记录" << endl;
			cout << "6. 返回上一层" << endl;
			cout << "7. 退出" << endl;
			cout << "please enter you choice: "; 

			int num;
			cin >> num;
			switch (num)
			{
			case 1:	
				Manager::get_instance()->get_csl()->csl_pros_info(user);
				break;
			case 2:
				Manager::get_instance()->get_csl()->csl_alt_info(user);
				break;
			case 3:
				csl_stuinfo_interface(user);
				break;
			case 4:
				csl_check_attendance(user);
				break;
			case 5:
				Manager::get_instance()->get_csl()->csl_del_attendance(user);
				break;
			case 6:
				return;
				break;
			case 7:
				exit(0);
				break;
			default:
				break;
			sleep(1);
			}

		}
	}

	void InterFace::csl_stuinfo_interface(const string& user)
	{
		while (1)
		{
			system("clear");
			cout << "1. 所有学生信息" << endl;
			cout << "2. 班级学生信息" << endl;
			cout << "3. 按学号查找" << endl;
			cout << "4. 按姓名查找" << endl;
			cout << "5. 返回上一层" << endl;
			cout << "6. 退出" << endl;
			cout << "please enter you choice: "; 

			int num;
			cin >> num;

			switch (num)
			{
			case 1:	
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				return;
				break;
			case 6:
				exit(0);
				break;
			default:
				break;
			sleep(1);
			}
		}
	}

	void InterFace::csl_check_attendance(const string& user)
	{
		while (1)
		{
			system("clear");
			cout << "1. 所有学生考勤信息" << endl;
			cout << "2. 按学号查找考勤信息" << endl;
			cout << "3. 返回上一层" << endl;
			cout << "4. 退出" << endl;
			cout << "please enter you choice: "; 

			int num;
			cin >> num;

			switch (num)
			{
			case 1:
				Manager::get_instance()->get_csl()->csl_check_attendances(user);
				break;
			case 2:
				Manager::get_instance()->get_csl()->csl_check_attendance(user);
				break;
			case 3:
				return;
				break;
			case 4:
				exit(0);
				break;
			default:
				break;
			sleep(1);
			}
		}

	}

	//teacher login interface
	void InterFace::tch_login_interface(const string& user)
	{
		while (1)
		{
			system("clear");
			cout << "1. 查看个人信息" << endl;
			cout << "2. 修改信息" << endl;
			cout << "3. 考勤" << endl;
			cout << "4. 查看考勤" << endl;
			cout << "5. 删除考勤记录" << endl;
			cout << "6. 返回上一层" << endl;
			cout << "7. 退出" << endl;
			cout << "please enter you choice: "; 

			int num;
			cin >> num;
			switch (num)
			{
			case 1:	
				Manager::get_instance()->get_tch()->tch_pros_info(user);
				break;
			case 2:
				Manager::get_instance()->get_tch()->tch_alt_info(user);
				break;
			case 3:
				Manager::get_instance()->get_tch()->tch_attendance(user);
				break;
			case 4:
				Manager::get_instance()->get_tch()->tch_check_attendance(user);
				break;
			case 5:
				Manager::get_instance()->get_tch()->tch_del_attendance(user);
				break;
			case 6:
				return;
				break;
			case 7:
				exit(0);
				break;
			default:
				break;
			sleep(1);
			}
		}
	}

	void InterFace::stu_login_interface(const string& user)
	{
		while (1)
		{
			system("clear");
			cout << "1. 查看个人信息" << endl; 
			cout << "2. 修改信息" << endl; 
			cout << "3. 考勤记录" << endl; 
			cout << "4. 选课" << endl;
			cout << "5. 查看课程信息" << endl; 
			cout << "6. 返回上一层" << endl; 
			cout << "7. 退出" << endl; 
			cout << "please enter your choice: " ;
			int num;
			cin >> num;
			switch (num)
			{
			case 1:	
				Manager::get_instance()->get_stu()->stu_pros_info(user);
				break;
			case 2:
				Manager::get_instance()->get_stu()->stu_alt_info(user);
				break;
			case 3:
				Manager::get_instance()->get_stu()->get_attendance_info(user);
				break;
			case 4:
				stu_course_dep_interface(user);
				break;
			case 5:
				break;
			default:
				break;
			sleep(1);
			}
		}
	}

	void InterFace::stu_course_dep_interface(const string& user)
	{

		while (1)
		{
			system("clear");
			cout << "请选择所在院系：" << endl;
			cout <<"1.信息工程学院" << endl;
			cout <<"4.返回上一层" << endl;
			cout <<"5.退出" << endl;
			cout << "" << endl;
			cout << "please enter you choice: " ;
			int num;
			cin >> num;
			switch (num)
			{
			case 1:
			 	stu_course_class_interface(user);
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				return;
				break;
			case 5:
				exit(0);
				break;
			default:
				break;

			}
		}
	}

	void InterFace::stu_course_class_interface(const string& user)
	{
		while (1)
		{
			system("clear");
			cout << "请选择所在专业： "<< endl;
			cout << "1. 软件工程"  << endl;
			cout << "2. 计算机科学与技术" << endl;
			cout << "3. 光电与信息工程" << endl;
			cout << "4. 电子与信息技术" << endl;
			cout << "5. 返回上一层" << endl; 
			cout << "6. 退出" << endl; 
			cout << "please enter your choice : ";
			int num;
			cin>> num;
			switch (num)
			{
			case 1:
				Manager::get_instance()->get_stu()->stu_course_soft(user);
				break;
			case 2:
				break;
			case 3:
				break;
			case 5:
				return;
				break;
			case 6:
				exit(0);
				break;
			default:
				break;

			}
		}
	}



};