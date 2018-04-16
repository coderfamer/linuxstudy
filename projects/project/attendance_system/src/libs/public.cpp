#include "public.hpp"


namespace AttendanceSYS
{
	void pub_exit()
	{
		string c;
		cout << "press any key to continue!!!!" << endl;
		cin >> c;
		return;
	}

	void print_leader(user_item &item)
	{
		cout << "用户基本信息：" << endl;
		cout <<left << setw(6) << "id" << setw(16) << "|password"  << "|name\t"<< setw(4) << "|sex" <<  "|age" << endl;
		cout << "----------------------------------------------------------" << endl;
		cout << left << setw(6) <<item.user  <<"|" << setw(15) << item.pwd  <<"|" <<item.name  << "\t" 
			<<"|" << setw(5)  << item.sex << "|" << item.age << endl << endl;
	}

	void print_stu(user_item& item)
	{
		cout << "学号\t密码\t\t姓名\t辅导员工号\t性别\t年龄\t班级\t\t院系" << endl;
		cout << "---------------------------------------------------------------------------" << endl;
		cout <<item.user << "\t" << item.pwd << "\t\t" << item.name <<"\t" 
			<<item.csl_user<<"\t\t"<<item.sex <<"\t"<<item.age <<"\t"<<item.classes <<"\t"<< item.department << endl;
	
		
	}

	void print_stus(vector<user_item> items)
	{
		cout << "学号\t密码\t\t姓名\t辅导员工号\t性别\t年龄\t班级\t\t院系" << endl;
		cout << "---------------------------------------------------------------------------" << endl;
		for (auto it = items.begin(); it != items.end(); it++)
		{
			cout <<it->user << "\t" << it->pwd << "\t\t" << it->name <<"\t" 
				<<it->csl_user<<"\t\t"<<it->sex <<"\t"<<it->age <<"\t"<<it->classes <<"\t"<< it->department << endl;
		}
	}

	void print_leaders(vector<user_item> items)
	{
		int num = 1;
		cout << "序号\t工号\t姓名\t性别\t年龄" << endl;
		for (auto it = items.begin(); it != items.end(); it++,num++)
		{

			cout << num << "\t" << it->user << "\t" << it->name << "\t" << it->sex << "\t" << it->age << endl;
		}
	}

	void users_sort(vector<user_item> items)
	{
		sort(items.begin(), items.end(), [](const user_item &lhs, const user_item &rhs){
			return lhs.user < rhs.user;
		});
	}
};