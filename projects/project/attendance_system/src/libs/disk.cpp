#include <iostream>

#include "disk.hpp"
#include "manager.hpp"
#include "common.hpp"



namespace AttendanceSYS
{
	Disk::Disk()
	{
		this->m_db = NULL;
	}

	Disk::~Disk()
	{

	}

	bool Disk::init(const string &name)
	{
		bool sql_update = false;
		

		cout << "sqlite init " << endl;
		string db = name;
		int ret = sqlite3_open_v2(db.c_str(), &this->m_db, SQLITE_OPEN_READWRITE | SQLITE_OPEN_CREATE, NULL);
		if (SQLITE_OK != ret)
		{
			return false;
		}

		/////select or create the table of admin
		{
			sqlite3_stmt *stmt = NULL;
			string sql = "select COUNT(*) as cnt from sqlite_master where type='table' and name ='AD_ADMIN' ";
			sqlite3_prepare_v2(this->m_db, sql.c_str(), sql.length(), &stmt, NULL);
			ret = sqlite3_step(stmt);

			if (ret == SQLITE_ROW)
			{
				int cnt = sqlite3_column_int(stmt, 0);

				sqlite3_finalize(stmt);
				if (cnt == 0)
				{
					string new_table = "create table AD_ADMIN(ad_m_id text not null, ad_m_pwd text not null,"
								" ad_m_name text not null,ad_m_sex text not null, ad_m_age integer not null)";
					sqlite3_prepare(this->m_db, new_table.c_str(), -1, &stmt, NULL);
					ret = sqlite3_step(stmt);
					sqlite3_finalize(stmt);
				}else{
					if (sql_update){

					}
				}
			}else{
				sqlite3_finalize(stmt);
			}
		}

		/////select or create the table of csl
		{
			sqlite3_stmt *stmt = NULL;
			string sql = "select COUNT(*) as cnt from sqlite_master where type='table' and name ='AD_COUNSELLOR' ";
			sqlite3_prepare_v2(this->m_db, sql.c_str(), sql.length(), &stmt, NULL);
			ret = sqlite3_step(stmt);

			if (ret == SQLITE_ROW)
			{
				int cnt = sqlite3_column_int(stmt, 0);

				sqlite3_finalize(stmt);
				if (cnt == 0)
				{
					string new_table = "create table AD_COUNSELLOR(ad_csl_id text not null, ad_csl_pwd text not null,"
								" ad_csl_name text not null,ad_csl_sex text not null, ad_csl_age text not null)";
					sqlite3_prepare(this->m_db, new_table.c_str(), -1, &stmt, NULL);
					ret = sqlite3_step(stmt);
					sqlite3_finalize(stmt);
				}else{
					if (sql_update){

					}
				}
			}else{
				sqlite3_finalize(stmt);
			}
		}

				/////select or create the table of teacher
		{
			sqlite3_stmt *stmt = NULL;
			string sql = "select COUNT(*) as cnt from sqlite_master where type='table' and name ='AD_TEACHER' ";
			sqlite3_prepare_v2(this->m_db, sql.c_str(), sql.length(), &stmt, NULL);
			ret = sqlite3_step(stmt);

			if (ret == SQLITE_ROW)
			{
				int cnt = sqlite3_column_int(stmt, 0);

				sqlite3_finalize(stmt);
				if (cnt == 0)
				{
					string new_table = "create table AD_TEACHER(ad_tch_id text not null, ad_tch_pwd text not null,"
								" ad_tch_name text not null,ad_tch_sex text not null, ad_tch_age text not null)";
					sqlite3_prepare(this->m_db, new_table.c_str(), -1, &stmt, NULL);
					ret = sqlite3_step(stmt);
					sqlite3_finalize(stmt);
				}else{
					if (sql_update){

					}
				}
			}else{
				sqlite3_finalize(stmt);
			}
		}

		/////create or select table of student
		{
			sqlite3_stmt *stmt = NULL;
			string sql = "select COUNT(*) as cnt from sqlite_master where type='table' and name ='AD_STUDENT' ";
			sqlite3_prepare_v2(this->m_db, sql.c_str(), sql.length(), &stmt, NULL);
			ret = sqlite3_step(stmt);

			if (ret == SQLITE_ROW)
			{
				int cnt = sqlite3_column_int(stmt, 0);

				sqlite3_finalize(stmt);
				if (cnt == 0)
				{
					string new_table = "create table AD_STUDENT(ad_stu_id text not null, ad_csl_id text not null, "
						"ad_stu_pwd text not null,ad_stu_name text not null,ad_stu_sex text not null,"
						" ad_stu_age integer not null, ad_stu_class text not null, ad_stu_depatrment text not null)";
					cout << "student table flag1" << endl;
					sqlite3_prepare(this->m_db, new_table.c_str(), -1, &stmt, NULL);
					ret = sqlite3_step(stmt);
					sqlite3_finalize(stmt);
				}else{
					if (sql_update){

					}
				}
			}else{
				sqlite3_finalize(stmt);
			}
		}

		/////ad_attendance
		{
			sqlite3_stmt *stmt = NULL;
			string sql = "select COUNT(*) as cnt from sqlite_master where type='table' and name ='AD_ATTENDANCE' ";
			sqlite3_prepare_v2(this->m_db, sql.c_str(), sql.length(), &stmt, NULL);
			ret = sqlite3_step(stmt);

			if (ret == SQLITE_ROW)
			{
				int cnt = sqlite3_column_int(stmt, 0);

				sqlite3_finalize(stmt);
				if (cnt == 0)
				{
					string new_table = "create table AD_ATTENDANCE(ad_stu_id text not null, ad_csl_id text not null,"
								"ad_tch_id text not null,ad_crs_id text not null, ad_crs_name string not null, "
								"ad_afd_reason text not null, ad_afd_num integer not null)";
					sqlite3_prepare(this->m_db, new_table.c_str(), -1, &stmt, NULL);
					ret = sqlite3_step(stmt);
					sqlite3_finalize(stmt);
				}else{
					if (sql_update){

					}
				}
			}else{
				sqlite3_finalize(stmt);
			}
		}

		{
			sqlite3_stmt *stmt = NULL;
			string sql = "select COUNT(*) as cnt from sqlite_master where type='table' and name ='AD_STCOURSES' ";
			sqlite3_prepare_v2(this->m_db, sql.c_str(), sql.length(), &stmt, NULL);
			ret = sqlite3_step(stmt);

			if (ret == SQLITE_ROW)
			{
				int cnt = sqlite3_column_int(stmt, 0);

				sqlite3_finalize(stmt);
				if (cnt == 0)
				{
					string new_table = "create table AD_STCOURSES(ad_stu_id text not null, ad_crs_name text not null,"
								"ad_crs_id text not null,ad_tch_id text not null)";
					sqlite3_prepare(this->m_db, new_table.c_str(), -1, &stmt, NULL);
					ret = sqlite3_step(stmt);
					sqlite3_finalize(stmt);
				}else{
					if (sql_update){

					}
				}
			}else{
				sqlite3_finalize(stmt);
			}
		}

		cout << "sqlite end!!!!!!" << endl;
		sleep(1);
		return true;
	}


	int Disk::login_admin_user(const string &user, user_item& ma_user)
	{
		sqlite3_stmt* stmt = NULL;
		string sql = "select ad_m_pwd,ad_m_name from ad_admin where ad_m_id =?";
		//lock_guard<recursive_mutex> lck(rec_mtx);
		sqlite3_prepare(this->m_db, sql.c_str(), -1, &stmt, NULL);
		sqlite3_bind_text(stmt, 1, user.c_str(), -1, SQLITE_STATIC);
		int ret = sqlite3_step(stmt);
		if (ret != SQLITE_ROW)
		{
			sqlite3_finalize(stmt);
			cout << "err user!! " << endl;
			sleep(2);
			return SYS_ERR_USER;
		}

		ma_user.pwd  = (const char *)sqlite3_column_text(stmt, 0);
		ma_user.name = (const char *)sqlite3_column_text(stmt, 1);
		sqlite3_finalize(stmt);

		return SUCCESS;

	}

	int Disk::login_stu_user(const string& user, user_item& item)
	{
		sqlite3_stmt* stmt = NULL;
		string sql = "select ad_stu_pwd,ad_stu_name from AD_STUDENT where ad_stu_id=?";
		sqlite3_prepare(this->m_db, sql.c_str(), -1, &stmt, NULL);
		sqlite3_bind_text(stmt, 1, user.c_str(), -1, SQLITE_STATIC);
		int ret = sqlite3_step(stmt);
		if (ret != SQLITE_ROW)
		{
			sqlite3_finalize(stmt);
			cout << "error student user!!!" << endl;
			sleep(2);
			return SYS_ERR_USER;
		}

		item.pwd = (const char *)sqlite3_column_text(stmt, 0);
		cout << item.pwd << endl;
		item.name = (const char *)sqlite3_column_text(stmt, 1);
		sqlite3_finalize(stmt);
		return SUCCESS;
	}

	int Disk::login_tch_user(const string& user, user_item& item)
	{
		sqlite3_stmt* stmt = NULL;
		string sql = "select ad_tch_pwd,ad_tch_name from AD_TEACHER where ad_tch_id=?";
		sqlite3_prepare(this->m_db, sql.c_str(), -1, &stmt, NULL);
		sqlite3_bind_text(stmt, 1, user.c_str(), -1, SQLITE_STATIC);
		int ret = sqlite3_step(stmt);
		if (ret != SQLITE_ROW)
		{
			sqlite3_finalize(stmt);
			cout << "error teacher user!!!" << endl;
			sleep(2);
			return SYS_ERR_USER;
		}

		item.pwd = (const char *)sqlite3_column_text(stmt, 0);
		item.name = (const char *)sqlite3_column_text(stmt, 1);
		sqlite3_finalize(stmt);
		return SUCCESS;
	}

	int Disk::login_csl_user(const string& user, user_item& item)
	{
		sqlite3_stmt* stmt = NULL;
		string sql = "select ad_csl_pwd,ad_csl_name from AD_COUNSELLOR where ad_csl_id=?";
		sqlite3_prepare(this->m_db, sql.c_str(), -1, &stmt, NULL);
		sqlite3_bind_text(stmt, 1, user.c_str(), -1, SQLITE_STATIC);
		int ret = sqlite3_step(stmt);
		if (ret != SQLITE_ROW)
		{
			sqlite3_finalize(stmt);
			cout << "error teacher user!!!" << endl;
			sleep(2);
			return SYS_ERR_USER;
		}

		item.pwd = (const char *)sqlite3_column_text(stmt, 0);
		item.name = (const char *)sqlite3_column_text(stmt, 1);
		sqlite3_finalize(stmt);
		return SUCCESS;
	}

	int Disk::add_stu_user(user_item& item)
	{
		sqlite3_stmt* stmt = NULL;
		string sql="select ad_stu_pwd from AD_STUDENT where ad_stu_id=?";
		sqlite3_prepare(this->m_db, sql.c_str(), -1, &stmt, NULL);
		sqlite3_bind_text(stmt, 1, item.user.c_str(), -1, SQLITE_STATIC);
		int ret = sqlite3_step(stmt);
		sqlite3_finalize(stmt);
		if (ret != SQLITE_ROW)
		{
			string add_item = "insert into AD_STUDENT(ad_stu_id, ad_stu_pwd, ad_stu_name, ad_stu_sex, ad_stu_age, ad_stu_class, ad_stu_depatrment,ad_csl_id) values(?, ?,?, ?, ?, ?,?,?)";
			sqlite3_prepare(this->m_db, add_item.c_str(), -1, &stmt, NULL);
			sqlite3_bind_text(stmt, 1, item.user.c_str(), -1, SQLITE_STATIC);
			sqlite3_bind_text(stmt, 2, item.pwd.c_str(), -1, SQLITE_STATIC);
			sqlite3_bind_text(stmt, 3, item.name.c_str(), -1,SQLITE_STATIC);
			sqlite3_bind_text(stmt, 4, item.sex.c_str(), -1, SQLITE_STATIC);
			sqlite3_bind_int(stmt, 5, item.age);
			sqlite3_bind_text(stmt, 6, item.classes.c_str(), -1, SQLITE_STATIC);
			sqlite3_bind_text(stmt, 7, item.department.c_str(), -1, SQLITE_STATIC);
			sqlite3_bind_text(stmt, 8, item.csl_user.c_str(), -1, SQLITE_STATIC);

			ret = sqlite3_step(stmt);
			sqlite3_finalize(stmt);
		}else{

		}

		
	}

	int Disk::add_tch_user(user_item& item)
	{
		sqlite3_stmt* stmt = NULL;
		string sql="select ad_tch_pwd from AD_TEACHER where ad_tch_id=?";
		sqlite3_prepare(this->m_db, sql.c_str(), -1, &stmt, NULL);
		sqlite3_bind_text(stmt, 1, item.user.c_str(), -1, SQLITE_STATIC);
		int ret = sqlite3_step(stmt);
		sqlite3_finalize(stmt);
		if (ret != SQLITE_ROW)
		{
			string add_item = "insert into AD_TEACHER(ad_tch_id, ad_tch_pwd, ad_tch_name, ad_tch_sex, ad_tch_age) values(?, ?, ?, ?, ?)";
			sqlite3_prepare(this->m_db, add_item.c_str(), -1, &stmt, NULL);
			sqlite3_bind_text(stmt, 1, item.user.c_str(), -1, SQLITE_STATIC);
			sqlite3_bind_text(stmt, 2, item.pwd.c_str(), -1, SQLITE_STATIC);
			sqlite3_bind_text(stmt, 3, item.name.c_str(), -1,SQLITE_STATIC);
			sqlite3_bind_text(stmt, 4, item.sex.c_str(), -1, SQLITE_STATIC);
			sqlite3_bind_int(stmt, 5, item.age);

			ret = sqlite3_step(stmt);
			sqlite3_finalize(stmt);
		}
		return SUCCESS;
	}

	int Disk::add_csl_user(user_item& item)
	{
		sqlite3_stmt* stmt = NULL;
		string sql="select ad_tch_pwd from AD_COUNSELLOR where ad_tch_id=?";
		sqlite3_prepare(this->m_db, sql.c_str(), -1, &stmt, NULL);
		sqlite3_bind_text(stmt, 1, item.user.c_str(), -1, SQLITE_STATIC);
		int ret = sqlite3_step(stmt);
		sqlite3_finalize(stmt);
		if (ret != SQLITE_ROW)
		{
			string add_item = "insert into AD_COUNSELLOR(ad_csl_id, ad_csl_pwd, ad_csl_name, ad_csl_sex, ad_csl_age) values(?, ?, ?, ?, ?)";
			sqlite3_prepare(this->m_db, add_item.c_str(), -1, &stmt, NULL);
			sqlite3_bind_text(stmt, 1, item.user.c_str(), -1, SQLITE_STATIC);
			sqlite3_bind_text(stmt, 2, item.pwd.c_str(), -1, SQLITE_STATIC);
			sqlite3_bind_text(stmt, 3, item.name.c_str(), -1,SQLITE_STATIC);
			sqlite3_bind_text(stmt, 4, item.sex.c_str(), -1, SQLITE_STATIC);
			sqlite3_bind_int(stmt, 5, item.age);

			ret = sqlite3_step(stmt);
			sqlite3_finalize(stmt);
		}
		return SUCCESS;
	}

	int Disk::add_admin_user(user_item& item)
	{
		sqlite3_stmt* stmt = NULL;
		string sql="select ad_m_pwd from AD_ADMIN where ad_m_id=?";
		sqlite3_prepare(this->m_db, sql.c_str(), -1, &stmt, NULL);
		sqlite3_bind_text(stmt, 1, item.user.c_str(), -1, SQLITE_STATIC);
		int ret = sqlite3_step(stmt);
		sqlite3_finalize(stmt);
		if (ret != SQLITE_ROW)
		{
			string add_item = "insert into AD_ADMIN(ad_m_id, ad_m_pwd, ad_m_name, ad_m_sex, ad_m_age) values(?, ?, ?, ?, ?)";
			sqlite3_prepare(this->m_db, add_item.c_str(), -1, &stmt, NULL);
			sqlite3_bind_text(stmt, 1, item.user.c_str(), -1, SQLITE_STATIC);
			sqlite3_bind_text(stmt, 2, item.pwd.c_str(), -1, SQLITE_STATIC);
			sqlite3_bind_text(stmt, 3, item.name.c_str(), -1,SQLITE_STATIC);
			sqlite3_bind_text(stmt, 4, item.sex.c_str(), -1, SQLITE_STATIC);
			sqlite3_bind_int(stmt, 5, item.age);

			ret = sqlite3_step(stmt);
			sqlite3_finalize(stmt);
		}
		return SUCCESS;
	}

	int Disk::get_admin_info(const string &user, user_item &item)
	{
		sqlite3_stmt* stmt = NULL;
		string sql = "select ad_m_pwd,ad_m_name,ad_m_sex,ad_m_age from AD_ADMIN where ad_m_id=?";
		sqlite3_prepare(this->m_db, sql.c_str(), -1, &stmt, NULL);
		sqlite3_bind_text(stmt, 1, user.c_str(), -1, SQLITE_STATIC);
		int ret = sqlite3_step(stmt);
		if (ret != SQLITE_ROW)
		{
			sqlite3_finalize(stmt);
			return SUCCESS;
		}

		item.pwd  = (const char *)sqlite3_column_text(stmt, 0);
		item.name = (const char *)sqlite3_column_text(stmt, 1);
		item.sex  = (const char *)sqlite3_column_text(stmt, 2);
		item.age  = sqlite3_column_int(stmt, 3);

		sqlite3_finalize(stmt);
		return SUCCESS;
	}

	int Disk::get_tch_info(const string& user, user_item& item)
	{
		sqlite3_stmt* stmt = NULL;
		string sql = "select ad_tch_pwd,ad_tch_name,ad_tch_sex,ad_tch_age from AD_TEACHER where ad_tch_id=?";
		sqlite3_prepare(this->m_db, sql.c_str(), -1, &stmt, NULL);
		sqlite3_bind_text(stmt, 1, user.c_str(), -1, SQLITE_STATIC);
		int ret = sqlite3_step(stmt);
		if (ret != SQLITE_ROW)
		{
			sqlite3_finalize(stmt);
			return SUCCESS;
		}

		item.pwd  = (const char *)sqlite3_column_text(stmt, 0);
		item.name = (const char *)sqlite3_column_text(stmt, 1);
		item.sex  = (const char *)sqlite3_column_text(stmt, 2);
		item.age  = sqlite3_column_int(stmt, 3);

		sqlite3_finalize(stmt);
		return SUCCESS;
	}


	int Disk::get_csl_info(const string& user, user_item& item)
	{
		sqlite3_stmt* stmt = NULL;
		string sql = "select ad_csl_pwd,ad_csl_name,ad_csl_sex,ad_csl_age from AD_COUNSELLOR where ad_csl_id=?";
		sqlite3_prepare(this->m_db, sql.c_str(), -1, &stmt, NULL);
		sqlite3_bind_text(stmt, 1, user.c_str(), -1, SQLITE_STATIC);
		int ret = sqlite3_step(stmt);
		if (ret != SQLITE_ROW)
		{
			sqlite3_finalize(stmt);
			return SUCCESS;
		}

		item.pwd  = (const char *)sqlite3_column_text(stmt, 0);
		item.name = (const char *)sqlite3_column_text(stmt, 1);
		item.sex  = (const char *)sqlite3_column_text(stmt, 2);
		item.age  = sqlite3_column_int(stmt, 3);

		sqlite3_finalize(stmt);
		return SUCCESS;
	}


	int Disk::get_stu_info(const string& user, user_item& item)
	{
		sqlite3_stmt* stmt = NULL;
		string sql = "select ad_stu_pwd,ad_stu_name,ad_stu_sex,ad_stu_age,ad_stu_class,ad_stu_depatrment,ad_csl_id from AD_STUDENT where ad_stu_id=?";
		sqlite3_prepare(this->m_db, sql.c_str(), -1, &stmt, NULL);
		sqlite3_bind_text(stmt, 1, user.c_str(), -1, SQLITE_STATIC);
		int ret = sqlite3_step(stmt);
		if (ret != SQLITE_ROW)
		{
			sqlite3_finalize(stmt);
			return SUCCESS;
		}

		item.pwd 		= (const char *)sqlite3_column_text(stmt, 0);
		item.name 		= (const char *)sqlite3_column_text(stmt, 1);
		item.sex 		= (const char *)sqlite3_column_text(stmt, 2);
		item.age 		= sqlite3_column_int(stmt, 3);
		item.classes 	= (const char *)sqlite3_column_text(stmt, 4);
		item.department = (const char *)sqlite3_column_text(stmt, 5);
		item.csl_user 	= (const char *)sqlite3_column_text(stmt, 6);
	}

	int Disk::update_admin_pwd(string user, string pwd)
	{
		sqlite3_stmt* stmt = NULL;
		string sql = "update AD_ADMIN set ad_m_pwd=? where ad_m_id=?";
		sqlite3_prepare(this->m_db, sql.c_str(), -1, &stmt, NULL);
		sqlite3_bind_text(stmt, 1, pwd.c_str(), -1, SQLITE_STATIC);
		sqlite3_bind_text(stmt, 2, user.c_str(), -1, SQLITE_STATIC);
		int ret = sqlite3_step(stmt);
		if (ret != SQLITE_DONE)
		{
			sqlite3_finalize(stmt);
			cout << "error" << endl;
			return SYS_ERR_ID;
		}
		cout << "succ" << endl;
		sqlite3_finalize(stmt);
		return SUCCESS;
	}

	int Disk::update_admin_age(string user, int age)
	{
		sqlite3_stmt* stmt = NULL;
		string sql = "update AD_ADMIN set ad_m_age=? where ad_m_id=?";
		sqlite3_prepare(this->m_db, sql.c_str(), -1, &stmt, NULL);
		sqlite3_bind_int(stmt, 1, age);
		sqlite3_bind_text(stmt, 2, user.c_str(), -1, SQLITE_STATIC);
		int ret = sqlite3_step(stmt);
		if (ret != SQLITE_DONE)
		{
			sqlite3_finalize(stmt);
			cout << "error" << endl;
			return SYS_ERR_ID;
		}
		cout << "succ" << endl;
		sqlite3_finalize(stmt);
		return SUCCESS;
	}

	int Disk::update_tch_pwd(string user, string pwd)
	{
		sqlite3_stmt* stmt = NULL;
		string sql = "update AD_TEACHER set ad_tch_pwd=? where ad_tch_id=?";
		sqlite3_prepare(this->m_db, sql.c_str(), -1, &stmt, NULL);
		sqlite3_bind_text(stmt, 1, pwd.c_str(), -1, SQLITE_STATIC);
		sqlite3_bind_text(stmt, 2, user.c_str(), -1, SQLITE_STATIC);
		int ret = sqlite3_step(stmt);
		if (ret != SQLITE_DONE)
		{
			sqlite3_finalize(stmt);
			cout << "error" << endl;
			return SYS_ERR_ID;
		}
		cout << "succ" << endl;
		sqlite3_finalize(stmt);
		return SUCCESS;
	}

	int Disk::update_tch_age(string user, int age)
	{
		sqlite3_stmt* stmt = NULL;
		string sql = "update AD_TEACHER set ad_tch_age=? where ad_tch_id=?";
		sqlite3_prepare(this->m_db, sql.c_str(), -1, &stmt, NULL);
		sqlite3_bind_int(stmt, 1, age);
		sqlite3_bind_text(stmt, 2, user.c_str(), -1, SQLITE_STATIC);
		int ret = sqlite3_step(stmt);
		if (ret != SQLITE_DONE)
		{
			sqlite3_finalize(stmt);
			cout << "error" << endl;
			return SYS_ERR_ID;
		}
		cout << "succ" << endl;
		sqlite3_finalize(stmt);
		return SUCCESS;
	}

	int Disk::update_csl_pwd(string user, string pwd)
	{
		sqlite3_stmt* stmt = NULL;
		string sql = "update AD_COUNSELLOR set ad_csl_pwd=? where ad_csl_id=?";
		sqlite3_prepare(this->m_db, sql.c_str(), -1, &stmt, NULL);
		sqlite3_bind_text(stmt, 1, pwd.c_str(), -1, SQLITE_STATIC);
		sqlite3_bind_text(stmt, 2, user.c_str(), -1, SQLITE_STATIC);
		int ret = sqlite3_step(stmt);
		if (ret != SQLITE_DONE)
		{
			sqlite3_finalize(stmt);
			cout << "error" << endl;
			return SYS_ERR_ID;
		}
		cout << "succ" << endl;
		sqlite3_finalize(stmt);
		return SUCCESS;
	}

	int Disk::update_csl_age(string user, int age)
	{
		sqlite3_stmt* stmt = NULL;
		string sql = "update AD_COUNSELLOR set ad_csl_age=? where ad_csl_id=?";
		sqlite3_prepare(this->m_db, sql.c_str(), -1, &stmt, NULL);
		sqlite3_bind_int(stmt, 1, age);
		sqlite3_bind_text(stmt, 2, user.c_str(), -1, SQLITE_STATIC);
		int ret = sqlite3_step(stmt);
		if (ret != SQLITE_DONE)
		{
			sqlite3_finalize(stmt);
			cout << "error" << endl;
			return SYS_ERR_ID;
		}
		cout << "succ" << endl;
		sqlite3_finalize(stmt);
		return SUCCESS;
	}

	int Disk::update_stu_pwd(string user, string pwd)
	{
		sqlite3_stmt* stmt = NULL;
		string sql = "update AD_STUDENT set ad_stu_pwd=? where ad_stu_id=?";
		sqlite3_prepare(this->m_db, sql.c_str(), -1, &stmt, NULL);
		sqlite3_bind_text(stmt, 1, pwd.c_str(), -1, SQLITE_STATIC);
		sqlite3_bind_text(stmt, 2, user.c_str(), -1, SQLITE_STATIC);
		int ret = sqlite3_step(stmt);
		if (ret != SQLITE_DONE)
		{
			sqlite3_finalize(stmt);
			cout << "error" << endl;
			return SYS_ERR_ID;
		}
		cout << "succ" << endl;
		sqlite3_finalize(stmt);
		return SUCCESS;
	}

	int Disk::update_stu_age(string user, int age)
	{
		sqlite3_stmt* stmt = NULL;
		string sql = "update AD_STUDENT set ad_stu_age=? where ad_stu_id=?";
		sqlite3_prepare(this->m_db, sql.c_str(), -1, &stmt, NULL);
		sqlite3_bind_int(stmt, 1, age);
		sqlite3_bind_text(stmt, 2, user.c_str(), -1, SQLITE_STATIC);
		int ret = sqlite3_step(stmt);
		if (ret != SQLITE_DONE)
		{
			sqlite3_finalize(stmt);
			cout << "error" << endl;
			return SYS_ERR_ID;
		}
		cout << "succ" << endl;
		sqlite3_finalize(stmt);
		return SUCCESS;
	}

	
	int Disk::del_stu(const string& user)
	{
		sqlite3_stmt* stmt;
		string sql = "select ad_stu_id from AD_STUDENT where ad_stu_id=?";
		sqlite3_prepare(this->m_db, sql.c_str(), -1, &stmt, NULL);
		sqlite3_bind_text(stmt, 1, user.c_str(), -1, SQLITE_STATIC);
		int ret = sqlite3_step(stmt);
		sqlite3_finalize(stmt);
		if (ret == SQLITE_ROW)
		{
			string sql = "delete from AD_STUDENT where ad_stu_id=?";
			sqlite3_prepare(this->m_db, sql.c_str(), -1, &stmt, NULL);
			sqlite3_bind_text(stmt, 1, user.c_str(), -1, SQLITE_STATIC);
			ret = sqlite3_step(stmt);
			sqlite3_finalize(stmt);
			cout << "delete success!!" << endl;
			return SUCCESS;
		}else{
			cout << "no user" << endl;
			return 6;
		}
		
	}

	int Disk::del_tch(const string& user)
	{
		sqlite3_stmt* stmt;
		string sql = "select ad_tch_id from AD_TEACHER where ad_tch_id=?";
		sqlite3_prepare(this->m_db, sql.c_str(), -1, &stmt, NULL);
		sqlite3_bind_text(stmt, 1, user.c_str(), -1, SQLITE_STATIC);
		int ret = sqlite3_step(stmt);
		sqlite3_finalize(stmt);
		if (ret == SQLITE_ROW)
		{
			string sql = "delete from AD_TEACHER where ad_tch_id=?";
			sqlite3_prepare(this->m_db, sql.c_str(), -1, &stmt, NULL);
			sqlite3_bind_text(stmt, 1, user.c_str(), -1, SQLITE_STATIC);
			ret = sqlite3_step(stmt);
			sqlite3_finalize(stmt);
			cout << "delete success!!" << endl;
			return SUCCESS;
		}else{
			cout << "no user" << endl;
			return 6;
		}
		
	}

	int Disk::del_csl(const string& user)
	{
		sqlite3_stmt* stmt;
		string sql = "select ad_csl_id from AD_COUNSELLOR where ad_csl_id=?";
		sqlite3_prepare(this->m_db, sql.c_str(), -1, &stmt, NULL);
		sqlite3_bind_text(stmt, 1, user.c_str(), -1, SQLITE_STATIC);
		int ret = sqlite3_step(stmt);
		sqlite3_finalize(stmt);
		if (ret == SQLITE_ROW)
		{
			string sql = "delete from AD_COUNSELLOR where ad_csl_id=?";
			sqlite3_prepare(this->m_db, sql.c_str(), -1, &stmt, NULL);
			sqlite3_bind_text(stmt, 1, user.c_str(), -1, SQLITE_STATIC);
			ret = sqlite3_step(stmt);
			sqlite3_finalize(stmt);
			cout << "delete success!!" << endl;
			return SUCCESS;
		}else{
			cout << "no user" << endl;
			return 6;
		}
		
	}

	int Disk::get_admin_users(vector<user_item>& users)
	{
		sqlite3_stmt* stmt;
		string sql = "select ad_m_id,ad_m_name,ad_m_sex,ad_m_age from AD_ADMIN";
		sqlite3_prepare(this->m_db, sql.c_str(), -1, &stmt, NULL);
		int ret = sqlite3_step(stmt);
		while (ret == SQLITE_ROW)
		{
			user_item item;
			item.user = (const char *)sqlite3_column_text(stmt, 0);
			item.name = (const char *)sqlite3_column_text(stmt, 1);
			item.sex  = (const char *)sqlite3_column_text(stmt, 2);
			item.age  = sqlite3_column_int(stmt, 3);
			ret = sqlite3_step(stmt);
			users.push_back(item);
		}
		sqlite3_finalize(stmt);
		return SUCCESS;
	}

	int Disk::get_tch_users(vector<user_item>& users)
	{
		sqlite3_stmt* stmt;
		string sql = "select ad_tch_id,ad_tch_name,ad_tch_sex,ad_tch_age from AD_TEACHER";
		sqlite3_prepare(this->m_db, sql.c_str(), -1, &stmt, NULL);
		int ret = sqlite3_step(stmt);
		while(ret == SQLITE_ROW)
		{
			user_item item;
			item.user = (const char *)sqlite3_column_text(stmt, 0);
			item.name = (const char *)sqlite3_column_text(stmt, 1);
			item.sex  = (const char *)sqlite3_column_text(stmt, 2);
			item.age  = sqlite3_column_int(stmt, 3);
			ret = sqlite3_step(stmt);
			users.push_back(item);
		}
		sqlite3_finalize(stmt);
		return SUCCESS;
	}

	int Disk::get_csl_users(vector<user_item>& users)
	{
		sqlite3_stmt* stmt;
		string sql = "select ad_csl_id,ad_csl_name,ad_csl_sex,ad_csl_age from AD_COUNSELLOR";
		sqlite3_prepare(this->m_db, sql.c_str(), -1, &stmt, NULL);
		int ret = sqlite3_step(stmt);
		while (ret == SQLITE_ROW)
		{
			user_item item;
			item.user = (const char *)sqlite3_column_text(stmt, 0);
			item.name = (const char *)sqlite3_column_text(stmt, 1);
			item.sex  = (const char *)sqlite3_column_text(stmt, 2);
			item.age  = sqlite3_column_int(stmt, 3);
			ret = sqlite3_step(stmt);
			users.push_back(item);
		}
		sqlite3_finalize(stmt);
		return SUCCESS;
	}

	int Disk::get_stu_users(vector<user_item>& users)
	{
		sqlite3_stmt* stmt = NULL;
		string sql = "select ad_stu_pwd,ad_stu_name,ad_stu_sex,ad_stu_age,ad_stu_class,ad_stu_depatrment,ad_csl_id,ad_stu_id from AD_STUDENT ";
		sqlite3_prepare(this->m_db, sql.c_str(), -1, &stmt, NULL);
		//sqlite3_bind_text(stmt, 1, user.c_str(), -1, SQLITE_STATIC);
		int ret = sqlite3_step(stmt);
		while (ret == SQLITE_ROW)
		{
			user_item item;
			item.pwd 		= (const char *)sqlite3_column_text(stmt, 0);
			//cout << "1111111111111" << item.pwd << endl;
			item.name 		= (const char *)sqlite3_column_text(stmt, 1);
			item.sex 		= (const char *)sqlite3_column_text(stmt, 2);
			item.age 		= sqlite3_column_int(stmt, 3);
			item.classes 	= (const char *)sqlite3_column_text(stmt, 4);
			item.department = (const char *)sqlite3_column_text(stmt, 5);
			item.csl_user 	= (const char *)sqlite3_column_text(stmt, 6);
			item.user 		= (const char *)sqlite3_column_text(stmt, 7);
			ret = sqlite3_step(stmt);
			users.push_back(item);
		}
		sqlite3_finalize(stmt);
		return SUCCESS;
		
	}


	int Disk::stu_select_courses(const string& user, vector<course_item>& items)
	{
		for (auto it = items.begin(); it  != items.end(); it++)
		{
			sqlite3_stmt* stmt = NULL;
			string sql="select ad_stu_id from AD_STCOURSES where ad_crs_id=? and ad_stu_id = ?";
			sqlite3_prepare(this->m_db, sql.c_str(), -1, &stmt, NULL);
			sqlite3_bind_text(stmt, 1, it->course_id.c_str(), -1, SQLITE_STATIC);
			sqlite3_bind_text(stmt, 2, user.c_str(), -1, SQLITE_STATIC);
			int ret = sqlite3_step(stmt);
			sqlite3_finalize(stmt); 
			if (ret != SQLITE_ROW)
			{
	            string sql = "insert into AD_STCOURSES(ad_stu_id,ad_tch_id,ad_crs_id,ad_crs_name) "
					"values(?, ?, ?, ?)";
	            sqlite3_prepare(this->m_db, sql.c_str(), -1, &stmt, NULL);
	            sqlite3_bind_text(stmt, 1, user.c_str(), -1, SQLITE_STATIC);
	            sqlite3_bind_text(stmt, 2, it->tch_id.c_str(), -1, SQLITE_STATIC);
	            sqlite3_bind_text(stmt, 3, it->course_id.c_str(), -1, SQLITE_STATIC);
	            sqlite3_bind_text(stmt, 4, it->course_name.c_str(), -1, SQLITE_STATIC);

	            ret = sqlite3_step(stmt);
	            sqlite3_finalize(stmt);
				//cout<<"add_default_dev_states:ret="<<ret<<endl;
	            //return SUCCESS;
        	}
        	//sqlite3_finalize(stmt);
		}
		return SUCCESS;
	}

	int Disk::tch_add_attendance(const string& user, const string& user_stu, const string& afd_reason)
	{
		int afd_num = 0;
		attendance_item item;
		sqlite3_stmt* stmt = NULL;
		string sql = "select ad_crs_id from AD_STCOURSES where ad_stu_id=? and ad_tch_id=?";
		sqlite3_prepare(this->m_db, sql.c_str(), -1, &stmt, NULL);
		sqlite3_bind_text(stmt, 1, user_stu.c_str(), -1, SQLITE_STATIC);
		sqlite3_bind_text(stmt, 2, user.c_str(), -1, SQLITE_STATIC);
		int ret = sqlite3_step(stmt);
		if (ret == SQLITE_ROW)
		{
			item.course_id = (const char *)sqlite3_column_text(stmt, 0);
			cout <<"course_id = " <<item.course_id << endl;

			sqlite3_finalize(stmt);
		}else{
			cout << "no ad_crs_id" << endl;
			sqlite3_finalize(stmt);
			return 6;
		}


		{
			sqlite3_stmt* stmt = NULL;
			string sql = "select ad_csl_id from AD_STUDENT where ad_stu_id=?";
			sqlite3_prepare(this->m_db, sql.c_str(), -1, &stmt, NULL);
			sqlite3_bind_text(stmt, 1, user_stu.c_str(), -1, SQLITE_STATIC);
			ret = sqlite3_step(stmt);
			if (ret == SQLITE_ROW)
			{
				item.user_csl = (const char*)sqlite3_column_text(stmt, 0);
				cout << "csl_id = " << item.user_csl << endl;
				sqlite3_finalize(stmt);
			}else{
				sqlite3_finalize(stmt);
				return 6;
			}
		}


		{
			sqlite3_stmt* stmt = NULL;
			string sql = "select ad_crs_name from AD_STCOURSES where ad_crs_id=?";
			sqlite3_prepare(this->m_db, sql.c_str(), -1, &stmt, NULL);
			sqlite3_bind_text(stmt, 1, item.course_id.c_str(), -1, SQLITE_STATIC);
			ret = sqlite3_step(stmt);
			if (ret == SQLITE_ROW)
			{
				item.course_name = (const char *)sqlite3_column_text(stmt, 0);
				cout << "course_name = " << item.course_name << endl; 
				sqlite3_finalize(stmt);
			}else{
			sqlite3_finalize(stmt);
			return 6;
			}
		}

		{
			sqlite3_stmt* stmt = NULL;
			string sql = "select ad_afd_num from AD_ATTENDANCE where ad_afd_reason=? and ad_crs_id=? and ad_stu_id=?";
			sqlite3_prepare(this->m_db, sql.c_str(), -1, &stmt, NULL);
			sqlite3_bind_text(stmt, 1, afd_reason.c_str(), -1, SQLITE_STATIC);
			sqlite3_bind_text(stmt, 2, item.course_id.c_str(), -1, SQLITE_STATIC);
			sqlite3_bind_text(stmt, 3, item.user_stu.c_str(), -1, SQLITE_STATIC);
			ret = sqlite3_step(stmt);
				
			if (ret != SQLITE_ROW)
			{
				afd_num = 1;
				cout << "afd_num = " << afd_num << endl;
				sqlite3_finalize(stmt);
				string sql = "insert into AD_ATTENDANCE(ad_stu_id,ad_csl_id,ad_tch_id,ad_crs_id,ad_crs_name,"
					"ad_afd_reason,ad_afd_num) values(?,?,?,?,?,?,?)";
			    sqlite3_prepare(this->m_db, sql.c_str(), -1, &stmt, NULL);
			    sqlite3_bind_text(stmt, 1, user_stu.c_str(), -1, SQLITE_STATIC);
			    sqlite3_bind_text(stmt, 2, item.user_csl.c_str(), -1, SQLITE_STATIC);
			    sqlite3_bind_text(stmt, 3, user.c_str(), -1, SQLITE_STATIC);
			    sqlite3_bind_text(stmt, 4, item.course_id .c_str(), -1, SQLITE_STATIC);
			    sqlite3_bind_text(stmt, 5, item.course_name.c_str(), -1, SQLITE_STATIC);
			    sqlite3_bind_text(stmt, 6, afd_reason.c_str(), -1, SQLITE_STATIC);
			    sqlite3_bind_int(stmt, 7, afd_num);

			    ret = sqlite3_step(stmt);
			    sqlite3_finalize(stmt); 
			}else if (ret == SQLITE_ROW){
				item.afd_num = sqlite3_column_int(stmt, 0);
				afd_num = item.afd_num + 1;
				cout << "afd_num = " << afd_num << endl;
				sqlite3_finalize(stmt);

				//sqlite3_stmt* stmt = NULL;
				string sql = "update AD_ATTENDANCE set ad_afd_num=? where ad_stu_id=? and ad_crs_id=? and ad_afd_reason=?";
				sqlite3_prepare(this->m_db, sql.c_str(), -1, &stmt, NULL);
				sqlite3_bind_int(stmt, 1, afd_num);
				sqlite3_bind_text(stmt, 2, user_stu.c_str(), -1, SQLITE_STATIC);
				sqlite3_bind_text(stmt, 3, item.course_id.c_str(), -1, SQLITE_STATIC);
				sqlite3_bind_text(stmt, 4, afd_reason.c_str(), -1, SQLITE_STATIC);
				int ret = sqlite3_step(stmt);
				if (ret != SQLITE_DONE)
				{
					sqlite3_finalize(stmt);
					cout << "error" << endl;
					return SYS_ERR_ID;
				}
				cout << "succ" << endl;
				sqlite3_finalize(stmt); 
			}
		}


		//cout << "6" << endl;
		return SUCCESS;
	}

	int Disk::tch_get_attendances(const string& user, vector<attendance_item>& items)
	{
		sqlite3_stmt* stmt;
		string sql = "select ad_afd_num,ad_stu_id,ad_afd_reason from AD_ATTENDANCE where ad_tch_id=?";
		sqlite3_prepare(this->m_db, sql.c_str(), -1, &stmt, NULL);
		sqlite3_bind_text(stmt, 1, user.c_str(), -1, SQLITE_STATIC);
		int ret = sqlite3_step(stmt);
		while (ret == SQLITE_ROW)
		{
			attendance_item item;
			item.afd_num =sqlite3_column_int(stmt, 0);
			item.user_stu = (const char *)sqlite3_column_text(stmt, 1);
			item.afd_reason = (const char *)sqlite3_column_text(stmt, 2);
			{
			
				sqlite3_stmt* stmt;
				sql = "select ad_stu_name from AD_STUDENT where ad_stu_id=?";
				sqlite3_prepare(this->m_db, sql.c_str(), -1, &stmt, NULL);
				sqlite3_bind_text(stmt, 1, item.user_stu.c_str(), -1, SQLITE_STATIC);
				ret = sqlite3_step(stmt);

				if (ret == SQLITE_ROW)
				{
					item.stu_name = (const char *)sqlite3_column_text(stmt, 0);
					sqlite3_finalize(stmt);
				}else{
					sqlite3_finalize(stmt);
					return 7;
				}
			}
			items.push_back(item);
			ret = sqlite3_step(stmt);
		}
		sqlite3_finalize(stmt);
		return SUCCESS;
	}


	int Disk::tch_get_attendance(const string& user, const string& user_stu, vector<attendance_item>& items)
	{
		sqlite3_stmt* stmt;
		string sql = "select ad_afd_num,ad_afd_reason from AD_ATTENDANCE where ad_tch_id=? and ad_stu_id=?";
		sqlite3_prepare(this->m_db, sql.c_str(), -1, &stmt, NULL);
		sqlite3_bind_text(stmt, 1, user.c_str(), -1, SQLITE_STATIC);
		sqlite3_bind_text(stmt, 2, user_stu.c_str(), -1, SQLITE_STATIC);
		int ret = sqlite3_step(stmt);
		while (ret == SQLITE_ROW)
		{
			attendance_item item;
			item.afd_num =sqlite3_column_int(stmt, 0);
			item.user_stu = user_stu;
			item.afd_reason = (const char *)sqlite3_column_text(stmt, 1); 
			{
			
				sqlite3_stmt* stmt;
				//ret = sqlite3_step(stmt);
				sql = "select ad_stu_name from AD_STUDENT where ad_stu_id=?";
				sqlite3_prepare(this->m_db, sql.c_str(), -1, &stmt, NULL);
				sqlite3_bind_text(stmt, 1, user_stu.c_str(), -1, SQLITE_STATIC);
				ret = sqlite3_step(stmt);

				if (ret == SQLITE_ROW)
				{
					item.stu_name = (const char *)sqlite3_column_text(stmt, 0);
					//cout << "stu_name = " << item.stu_name << endl;
					sqlite3_finalize(stmt);
				}else{
					sqlite3_finalize(stmt);
					return 7;
				}
			}
			items.push_back(item);
			ret = sqlite3_step(stmt);
			//cout << "for this " << endl;
		}
		sqlite3_finalize(stmt);
		return SUCCESS;
	}

	int Disk::tch_del_attendance(const string& user, const string& user_stu, const string& afd_reason)
	{
		sqlite3_stmt* stmt;
		string sql = "select ad_afd_num from AD_ATTENDANCE where ad_tch_id=? and ad_stu_id=? and ad_afd_reason=?";
		sqlite3_prepare(this->m_db, sql.c_str(), -1, &stmt, NULL);
		sqlite3_bind_text(stmt, 1, user.c_str(), -1, SQLITE_STATIC);
		sqlite3_bind_text(stmt, 2, user_stu.c_str(), -1, SQLITE_STATIC);
		sqlite3_bind_text(stmt, 3, afd_reason.c_str(), -1, SQLITE_STATIC);
		int ret = sqlite3_step(stmt);
		if (ret == SQLITE_ROW)
		{
			int count = sqlite3_column_int(stmt, 0);
			if (count == 1)
			{
				sql = "delete from AD_ATTENDANCE where ad_tch_id=? and ad_stu_id=? and ad_afd_reason=?";
				sqlite3_bind_text(stmt, 1, user.c_str(), -1, SQLITE_STATIC);
				sqlite3_bind_text(stmt, 2, user_stu.c_str(), -1, SQLITE_STATIC);
				sqlite3_bind_text(stmt, 3, afd_reason.c_str(), -1, SQLITE_STATIC);
				ret = sqlite3_step(stmt);
				sqlite3_finalize(stmt);

			}else{
				count -= 1;
				sql = "update AD_ATTENDANCE set ad_afd_num=? where ad_tch_id=? and ad_stu_id=? and ad_afd_reason=?";
				//string sql = "update AD_TEACHER set ad_tch_pwd=? where ad_tch_id=?";
				sqlite3_prepare(this->m_db, sql.c_str(), -1, &stmt, NULL);
				sqlite3_bind_int(stmt, 1, count);
				sqlite3_bind_text(stmt, 2, user.c_str(), -1, SQLITE_STATIC);
				sqlite3_bind_text(stmt, 3, user_stu.c_str(), -1, SQLITE_STATIC);
				sqlite3_bind_text(stmt, 4, afd_reason.c_str(), -1, SQLITE_STATIC);
				ret = sqlite3_step(stmt);
				sqlite3_finalize(stmt);
			}
		}
	}

	int Disk::tch_del_attendance(const string& user, const string& user_stu)
	{
		sqlite3_stmt* stmt;
		string sql = "delete from AD_ATTENDANCE where ad_tch_id=? and ad_stu_id=?";
		sqlite3_prepare(this->m_db, sql.c_str(), -1, &stmt, NULL);
		sqlite3_bind_text(stmt, 1, user.c_str(), -1, SQLITE_STATIC);
		sqlite3_bind_text(stmt, 2, user_stu.c_str(), -1, SQLITE_STATIC);
		int ret = sqlite3_step(stmt);
		sqlite3_finalize(stmt);
		cout << "delete success!!" << endl;
	}

	int Disk::stu_get_attendance(const string& user, vector<attendance_item>& items)
	{
		sqlite3_stmt* stmt;
		string sql = "select ad_crs_name,ad_crs_id,ad_afd_num,ad_afd_reason,ad_tch_id from AD_ATTENDANCE where  ad_stu_id=?";
		sqlite3_prepare(this->m_db, sql.c_str(), -1, &stmt, NULL);
		sqlite3_bind_text(stmt, 1, user.c_str(), -1, SQLITE_STATIC);
		int ret = sqlite3_step(stmt);
		while (ret == SQLITE_ROW)
		{
			attendance_item item;
			item.course_name = (const char *)sqlite3_column_text(stmt, 0);
			item.course_id = (const char *)sqlite3_column_text(stmt, 1);
			item.afd_num = sqlite3_column_int(stmt, 2);
			item.afd_reason = (const char *)sqlite3_column_text(stmt, 3);
			item.user_tch = (const char *)sqlite3_column_text(stmt, 4);

			{
			
				sqlite3_stmt* stmt;
				sql = "select ad_tch_name from AD_TEACHER where ad_tch_id=?";
				sqlite3_prepare(this->m_db, sql.c_str(), -1, &stmt, NULL);
				sqlite3_bind_text(stmt, 1, item.user_tch.c_str(), -1, SQLITE_STATIC);
				ret = sqlite3_step(stmt);

				if (ret == SQLITE_ROW)
				{
					item.tch_name = (const char *)sqlite3_column_text(stmt, 0);
					sqlite3_finalize(stmt);
				}else{
					sqlite3_finalize(stmt);
					return 7;
				}
			}
			items.push_back(item);
			ret = sqlite3_step(stmt);
		}
		sqlite3_finalize(stmt);
		return SUCCESS;

	}

	int Disk::csl_get_attendances(const string& user, vector<attendance_item>& items)
	{
		sqlite3_stmt* stmt;
		string sql = "select ad_stu_id,ad_tch_id,ad_crs_id,ad_crs_name,ad_afd_reason,ad_afd_num from AD_ATTENDANCE where ad_csl_id=?";
		sqlite3_prepare(this->m_db, sql.c_str(), -1, &stmt, NULL);
		sqlite3_bind_text(stmt, 1, user.c_str(), -1, SQLITE_STATIC);
		int ret = sqlite3_step(stmt);
		while (ret == SQLITE_ROW)
		{
			attendance_item item;
			
			item.user_stu = (const char *)sqlite3_column_text(stmt, 0);
			item.user_tch = (const char *)sqlite3_column_text(stmt, 1);
			item.course_id = (const char *)sqlite3_column_text(stmt, 2);
			item.course_name = (const char *)sqlite3_column_text(stmt, 3);
			item.afd_reason = (const char *)sqlite3_column_text(stmt, 4);
			item.afd_num =sqlite3_column_int(stmt, 5);
			{
			
				sqlite3_stmt* stmt;
				sql = "select ad_tch_name from AD_TEACHER where ad_tch_id=?";
				sqlite3_prepare(this->m_db, sql.c_str(), -1, &stmt, NULL);
				sqlite3_bind_text(stmt, 1, item.user_tch.c_str(), -1, SQLITE_STATIC);
				ret = sqlite3_step(stmt);

				if (ret == SQLITE_ROW)
				{
					item.tch_name = (const char *)sqlite3_column_text(stmt, 0);
					sqlite3_finalize(stmt);
				}else{
					sqlite3_finalize(stmt);
					return 7;
				}
			}
			{
			
				sqlite3_stmt* stmt;
				sql = "select ad_stu_name from AD_STUDENT where ad_stu_id=?";
				sqlite3_prepare(this->m_db, sql.c_str(), -1, &stmt, NULL);
				sqlite3_bind_text(stmt, 1, item.user_stu.c_str(), -1, SQLITE_STATIC);
				ret = sqlite3_step(stmt);

				if (ret == SQLITE_ROW)
				{
					item.stu_name = (const char *)sqlite3_column_text(stmt, 0);
					sqlite3_finalize(stmt);
				}else{
					sqlite3_finalize(stmt);
					return 7;
				}
			}
			items.push_back(item);
			ret = sqlite3_step(stmt);
		}
		sqlite3_finalize(stmt);
		return SUCCESS;
	}

	int Disk::csl_get_attendance(const string& user, const string& user_stu, vector<attendance_item>& items)
	{

		sqlite3_stmt* stmt;
		string sql = "select ad_crs_name,ad_crs_id,ad_afd_num,ad_afd_reason,ad_tch_id from AD_ATTENDANCE where ad_csl_id=? and ad_stu_id=?";
		sqlite3_prepare(this->m_db, sql.c_str(), -1, &stmt, NULL);
		sqlite3_bind_text(stmt, 1, user.c_str(), -1, SQLITE_STATIC);
		sqlite3_bind_text(stmt, 2, user_stu.c_str(), -1, SQLITE_STATIC);
		int ret = sqlite3_step(stmt);
		while (ret == SQLITE_ROW)
		{
			attendance_item item;
			item.course_name = (const char *)sqlite3_column_text(stmt, 0);
			item.course_id = (const char *)sqlite3_column_text(stmt, 1);
			item.afd_num = sqlite3_column_int(stmt, 2);
			item.afd_reason = (const char *)sqlite3_column_text(stmt, 3);
			item.user_tch = (const char *)sqlite3_column_text(stmt, 4);

			{
			
				sqlite3_stmt* stmt;
				sql = "select ad_tch_name from AD_TEACHER where ad_tch_id=?";
				sqlite3_prepare(this->m_db, sql.c_str(), -1, &stmt, NULL);
				sqlite3_bind_text(stmt, 1, item.user_tch.c_str(), -1, SQLITE_STATIC);
				ret = sqlite3_step(stmt);

				if (ret == SQLITE_ROW)
				{
					item.tch_name = (const char *)sqlite3_column_text(stmt, 0);
					//cout << "111111111tch_name   " << item.tch_name << endl;
					sqlite3_finalize(stmt);
				}else{
					sqlite3_finalize(stmt);
					return 7;
				}
			}
			{
			
				sqlite3_stmt* stmt;
				sql = "select ad_stu_name from AD_STUDENT where ad_stu_id=?";
				sqlite3_prepare(this->m_db, sql.c_str(), -1, &stmt, NULL);
				sqlite3_bind_text(stmt, 1, user_stu.c_str(), -1, SQLITE_STATIC);
				ret = sqlite3_step(stmt);

				if (ret == SQLITE_ROW)
				{
					item.stu_name = (const char *)sqlite3_column_text(stmt, 0);
					//cout << "111111111111111111" << item.stu_name << endl;
					sqlite3_finalize(stmt);
				}else{
					sqlite3_finalize(stmt);
					return 7;
				}
			}
			items.push_back(item);
			ret = sqlite3_step(stmt);
		}
		sqlite3_finalize(stmt);
		return SUCCESS;

	}
#if 0
	int Disk::tch_get_attendance(const string& user, const string& user_stu, vector<attendance_item>& items)
	{
		sqlite3_stmt* stmt;
		string sql = "select ad_afd_num,ad_afd_reason from AD_ATTENDANCE where ad_tch_id=? and ad_stu_id=?";
		sqlite3_prepare(this->m_db, sql.c_str(), -1, &stmt, NULL);
		sqlite3_bind_text(stmt, 1, user.c_str(), -1, SQLITE_STATIC);
		sqlite3_bind_text(stmt, 2, user_stu.c_str(), -1, SQLITE_STATIC);
		int ret = sqlite3_step(stmt);
		while (ret == SQLITE_ROW)
		{
			attendance_item item;
			item.afd_num =sqlite3_column_int(stmt, 0);
			item.user_stu = user_stu;
			item.afd_reason = (const char *)sqlite3_column_text(stmt, 1); 
			{
			
				sqlite3_stmt* stmt;
				//ret = sqlite3_step(stmt);
				sql = "select ad_stu_name from AD_STUDENT where ad_stu_id=?";
				sqlite3_prepare(this->m_db, sql.c_str(), -1, &stmt, NULL);
				sqlite3_bind_text(stmt, 1, user_stu.c_str(), -1, SQLITE_STATIC);
				ret = sqlite3_step(stmt);

				if (ret == SQLITE_ROW)
				{
					item.stu_name = (const char *)sqlite3_column_text(stmt, 0);
					//cout << "stu_name = " << item.stu_name << endl;
					sqlite3_finalize(stmt);
				}else{
					sqlite3_finalize(stmt);
					return 7;
				}
			}
			items.push_back(item);
			ret = sqlite3_step(stmt);
			//cout << "for this " << endl;
		}
		sqlite3_finalize(stmt);
		return SUCCESS;
	}

	#endif

	int Disk::csl_get_attendance(const string& user, const string& user_stu, const string& course_name, vector<attendance_item>& items)
	{
		sqlite3_stmt* stmt;
		string sql = "select ad_afd_num,ad_afd_reason from AD_ATTENDANCE where ad_csl_id = ?and ad_stu_id=? and ad_crs_name=?";
		sqlite3_prepare(this->m_db, sql.c_str(), -1, &stmt, NULL);
		sqlite3_bind_text(stmt, 1, user.c_str(), -1, SQLITE_STATIC);
		sqlite3_bind_text(stmt, 2, user_stu.c_str(), -1, SQLITE_STATIC);
		sqlite3_bind_text(stmt, 3, course_name.c_str(), -1, SQLITE_STATIC);
		int ret = sqlite3_step(stmt);
		while (ret == SQLITE_ROW)
		{
			attendance_item item;
			item.afd_num =sqlite3_column_int(stmt, 0);
			cout << "11111111111afd_num  " << item.afd_num << endl;
			item.user_stu = user_stu;
			item.afd_reason = (const char *)sqlite3_column_text(stmt, 1); 
			{
			
				sqlite3_stmt* stmt;
				//ret = sqlite3_step(stmt);
				sql = "select ad_stu_name from AD_STUDENT where ad_stu_id=?";
				sqlite3_prepare(this->m_db, sql.c_str(), -1, &stmt, NULL);
				sqlite3_bind_text(stmt, 1, user_stu.c_str(), -1, SQLITE_STATIC);
				ret = sqlite3_step(stmt);

				if (ret == SQLITE_ROW)
				{
					item.stu_name = (const char *)sqlite3_column_text(stmt, 0);
					//cout << "stu_name = " << item.stu_name << endl;
					sqlite3_finalize(stmt);
				}else{
					sqlite3_finalize(stmt);
					return 7;
				}
			}
			items.push_back(item);
			ret = sqlite3_step(stmt);
			//cout << "for this " << endl;
		}
		sqlite3_finalize(stmt);
		return SUCCESS;
	}


	int Disk::csl_del_attendance(const string& user, const string& user_stu, const string& course_name, const string& afd_reason)
	{
		sqlite3_stmt* stmt;
		string sql = "select ad_afd_num from AD_ATTENDANCE where ad_csl_id=? and ad_stu_id=? and ad_afd_reason=? and ad_crs_name=?";
		sqlite3_prepare(this->m_db, sql.c_str(), -1, &stmt, NULL);
		sqlite3_bind_text(stmt, 1, user.c_str(), -1, SQLITE_STATIC);
		sqlite3_bind_text(stmt, 2, user_stu.c_str(), -1, SQLITE_STATIC);
		sqlite3_bind_text(stmt, 3, afd_reason.c_str(), -1, SQLITE_STATIC);
		sqlite3_bind_text(stmt, 4, course_name.c_str(), -1, SQLITE_STATIC);
		int ret = sqlite3_step(stmt);
		if (ret == SQLITE_ROW)
		{
			int count = sqlite3_column_int(stmt, 0);
			cout << "11111111111count  " << count << endl;
			if (count == 1)
			{
				sql = "delete from AD_ATTENDANCE where ad_csl_id=? and ad_stu_id=? and ad_afd_reason=?";
				sqlite3_bind_text(stmt, 1, user.c_str(), -1, SQLITE_STATIC);
				sqlite3_bind_text(stmt, 2, user_stu.c_str(), -1, SQLITE_STATIC);
				sqlite3_bind_text(stmt, 3, afd_reason.c_str(), -1, SQLITE_STATIC);
				ret = sqlite3_step(stmt);
				sqlite3_finalize(stmt);

			}else{
				count -= 1;
				sql = "update AD_ATTENDANCE set ad_afd_num=? where ad_csl_id=? and ad_stu_id=? and ad_afd_reason=?";
				//string sql = "update AD_TEACHER set ad_tch_pwd=? where ad_tch_id=?";
				sqlite3_prepare(this->m_db, sql.c_str(), -1, &stmt, NULL);
				sqlite3_bind_int(stmt, 1, count);
				sqlite3_bind_text(stmt, 2, user.c_str(), -1, SQLITE_STATIC);
				sqlite3_bind_text(stmt, 3, user_stu.c_str(), -1, SQLITE_STATIC);
				sqlite3_bind_text(stmt, 4, afd_reason.c_str(), -1, SQLITE_STATIC);
				ret = sqlite3_step(stmt);
				sqlite3_finalize(stmt);
			}
		}
	}

	int Disk::csl_del_attendance(const string& user, const string& user_stu)
	{
		sqlite3_stmt* stmt;
		string sql = "delete from AD_ATTENDANCE where ad_csl_id=? and ad_stu_id=?";
		sqlite3_prepare(this->m_db, sql.c_str(), -1, &stmt, NULL);
		sqlite3_bind_text(stmt, 1, user.c_str(), -1, SQLITE_STATIC);
		sqlite3_bind_text(stmt, 2, user_stu.c_str(), -1, SQLITE_STATIC);
		int ret = sqlite3_step(stmt);
		sqlite3_finalize(stmt);
		cout << "delete success!!" << endl;
	}






















































};