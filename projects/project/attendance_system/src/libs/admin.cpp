
#include "admin.hpp"
#include "manager.hpp"


namespace AttendanceSYS
{
	Admin::Admin()
	{
	}
	Admin::~Admin()
	{

	}

	

	int Admin::admin_login()
	{
		string user;
		string pwd;

		cout << "please enter your id: ";
		cin >> user;
		cout << "enter your password: ";
		cin >> pwd;
		user_item ma_user;
		int ret = Manager::get_instance()->get_disk()->login_admin_user(user, ma_user);
		if (ret)
		{
			return SUCCESS;
		}
		if (ma_user.pwd.compare(pwd) != 0)
		{
			cout << "err pwd, please try agagin!!!" << endl;
			sleep(2);
			return SYS_ERR_PWD;
		}
		cout << "admin longin" << endl;
		Manager::get_instance()->get_interface()->admin_login_interface(user);
		return SUCCESS;
	}

	//管理员查看个人信息
	int Admin::admin_pros_info(const string &user)
	{
		user_item ad_user;
		ad_user.user = user;
		Manager::get_instance()->get_disk()->get_admin_info(user, ad_user);
		print_leader(ad_user);

		pub_exit();
		return SUCCESS;
	}

	//管理员修改个人信息
	int Admin::admin_alt_info(const string &user)
	{
		user_item ad_user;
		ad_user.user = user;
		string new_pwd;
		int new_age;
		Manager::get_instance()->get_disk()->get_admin_info(user, ad_user);
		
		print_leader(ad_user);
		//cout << setiosflags(ios::left) ;
		//cout<<setw(9)<<"工号"<<setw(10)<<"姓名"<<setw(16)<<"密码"<<setw(4)<<"性别"<<"年龄"<<endl;
		//cout<<setw(9)<<ad_user.user<<setw(10)<<ad_user.name<<setw(16)<<ad_user.pwd<<setw(4)<<ad_user.sex<<ad_user.age<<endl;
		cout << "1.  修改密码  " << endl;
		cout << "2.  修改年龄  " << endl;
		cout << "please enter your choice!!" << endl;
		int num;
		cin >> num;
		if (num == 1)
		{
			cout << "旧密码: " <<ad_user.pwd<< endl;
			cout << "请输入新密码: ";
			cin >>  new_pwd;
			Manager::get_instance()->get_disk()->update_admin_pwd(ad_user.user, new_pwd);
		}else if (num == 2){
			cout << "请输入新的年龄：";
			cin >> new_age;
			Manager::get_instance()->get_disk()->update_admin_age(ad_user.user, new_age);
		}else{
			return SYS_ERR_CHOICE;
		}

	}

	int Admin::admin_add_stu()
	{
		user_item stu_user;
		cout << "请输入学生信息：" << endl;
		cout << "学号： ";
		cin >> stu_user.user;
		cout << "姓名： ";
		cin >> stu_user.name;
		cout << "辅导员工号：";
		cin >> stu_user.csl_user;
		cout << "性别： ";
		cin >> stu_user.sex;
		cout << "年龄:  ";
		cin >> stu_user.age;
		cout << "班级： ";
		cin >> stu_user.classes;
		cout << "院系:  ";
		cin >> stu_user.department;
		stu_user.pwd = USER_PWD;
		cout << setiosflags(ios::left) ;
		
		print_stu(stu_user);

		cout << "1.确认保存\n2.取消保存" << endl;
		int num;
		cin >> num;
		if (num == 1)
		{
			Manager::get_instance()->get_disk()->add_stu_user(stu_user);
			cout << "保存成功!!!" << endl;
			sleep(1);
		}else{
			cout << "取消保存，返回！" << endl;
			sleep(2);
			return 3;
		}
		return SUCCESS;
	}

	int Admin::admin_add_admin()
	{
		user_item admin_user;
		cout << "请输入教师信息" << endl;
		cout << "工号：";
		cin  >> admin_user.user;
		cout << "姓名：";
		cin >> admin_user.name;
		cout << "性别：";
		cin >> admin_user.sex;
		cout << "年龄：";
		cin >> admin_user.age;
		admin_user.pwd = USER_PWD;

		print_leader(admin_user);
		//cout << "工号\t密码\t姓名\t性别\t年龄";
		//cout << tch_user.user << "\t" <<tch_user.pwd << "\t" <<tch_user.name <<"\t" << tch_user.sex <<"\t" << tch_user.age << endl;
		cout << "1.确认保存\n2.取消保存" << endl;
		int num;
		cin >> num;
		if (num == 1)
		{
			Manager::get_instance()->get_disk()->add_admin_user(admin_user);
			cout << "baocunchenggong" << endl;
			sleep(1);
		}else{
			cout << "取消保存，返回！" << endl;
			sleep(2);
			return 3;
		}
		return SUCCESS;

	}

	int Admin::admin_add_tch()
	{
		user_item tch_user;
		cout << "请输入教师信息" << endl;
		cout << "工号：";
		cin  >> tch_user.user;
		cout << "姓名：";
		cin >> tch_user.name;
		cout << "性别：";
		cin >> tch_user.sex;
		cout << "年龄：";
		cin >> tch_user.age;
		tch_user.pwd = USER_PWD;

		print_leader(tch_user);
		//cout << "工号\t密码\t姓名\t性别\t年龄";
		//cout << tch_user.user << "\t" <<tch_user.pwd << "\t" <<tch_user.name <<"\t" << tch_user.sex <<"\t" << tch_user.age << endl;
		cout << "1.确认保存\n2.取消保存" << endl;
		int num;
		cin >> num;
		if (num == 1)
		{
			Manager::get_instance()->get_disk()->add_tch_user(tch_user);
			cout << "baocunchenggong" << endl;
			sleep(1);
		}else{
			cout << "取消保存，返回！" << endl;
			sleep(2);
			return 3;
		}
		return SUCCESS;
	}

	int Admin::admin_add_csl()
	{
		user_item csl_user;
		cout << "请输入教师信息" << endl;
		cout << "工号：" << endl;
		cin  >> csl_user.user;
		cout << "姓名：" << endl;
		cin >> csl_user.name;
		cout << "性别：" << endl;
		cin >> csl_user.sex;
		cout << "年龄：" << endl;
		cin >> csl_user.age;
		csl_user.pwd = USER_PWD;
		print_leader(csl_user);
		//cout << "工号	密码	姓名	性别	年龄	";
		//cout << csl_user.user << csl_user.pwd << csl_user.name << csl_user.sex << csl_user.age << endl;
		cout << "1.确认保存\n2.取消保存" << endl;
		int num;
		cin >> num;
		if (num == 1)
		{
			Manager::get_instance()->get_disk()->add_csl_user(csl_user);
			cout << "baocunchenggong" << endl;
			sleep(1);
		}else{
			cout << "取消保存，返回！" << endl;
			sleep(2);
			return 3;
		}
		return SUCCESS;

	}


	int Admin::admin_del_stu()
	{
		string stu_user;
		//string stu_user;
		cout << "请输入学生学号：" << endl;
		cin >> stu_user;
		Manager::get_instance()->get_disk()->del_stu(stu_user);
		
		pub_exit();
	}

	int Admin::admin_del_tch()
	{
		string tch_user;
		//string stu_user;
		cout << "请输入教师工号：" << endl;
		cin >> tch_user;
		Manager::get_instance()->get_disk()->del_tch(tch_user);
		//cout << "del success" << endl;
		pub_exit();

	}
	
	int Admin::admin_del_csl()
	{
		string csl_user;
		cout << "请输入辅导员工号：" << endl;
		cin >> csl_user;
		Manager::get_instance()->get_disk()->del_csl(csl_user);
		pub_exit();

	}

	int Admin::admin_check_admin()
	{

		vector<user_item> admin_users;
		Manager::get_instance()->get_disk()->get_admin_users(admin_users);

		users_sort(admin_users);
#if 0
		sort(admin_users.begin(), admin_users.end(), [](const user_item &lhs, const user_item &rhs){
			return lhs.user < rhs.user;
		});
#endif
		print_leaders(admin_users);
		#if 0
		cout << "工号\t姓名\t性别\t年龄" << endl;
		for (auto it = admin_users.begin(); it != admin_users.end(); it++)
		{

			cout << it->user << "\t" << it->name << "\t" << it->sex << "\t" << it->age << endl;
		}
		#endif

		pub_exit();
		return SUCCESS;
	}

	int Admin::admin_check_tch()
	{
		vector<user_item> tch_users;
		Manager::get_instance()->get_disk()->get_tch_users(tch_users);

		users_sort(tch_users);

		print_leaders(tch_users);

		pub_exit();
		return SUCCESS;
	}

	int Admin::admin_check_csl()
	{
		std::vector<user_item> csl_users;
		Manager::get_instance()->get_disk()->get_csl_users(csl_users);

		users_sort(csl_users);
		print_leaders(csl_users);
		pub_exit();

		return SUCCESS;
	}


	int Admin::admin_check_stu()
	{
		std::vector<user_item> stu_users;
		Manager::get_instance()->get_disk()->get_stu_users(stu_users);

		users_sort(stu_users);
		print_stus(stu_users);
		pub_exit();

		return SUCCESS;

	}



	int Admin::course_select_switch(int flag)
	{
		//int flag;
		if (flag == 6)
		{
			cout << "open course switch" << endl;
			return flag;
		}else if (flag == 7)
		{
			cout << "close course switch" << endl;
			return flag;
		}
	}





};