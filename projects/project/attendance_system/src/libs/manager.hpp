#ifndef _MANAGER_H
#define _MANAGER_H

#include <iostream>
#include <string>

#include "interface.hpp"
#include "disk.hpp"
//#include "manager.hpp"
#include "admin.hpp"
#include "public.hpp"
#include "student.hpp"
#include "teacher.hpp"
#include "counsellor.hpp"

using std::string;

namespace AttendanceSYS
{
	class Manager
	{
	public:
		static Manager *get_instance();
		static Manager *get_instance(const string &db);
		~Manager();
		bool init(const string &db);

		Disk* 		get_disk();
		InterFace* 	get_interface();
		Admin* 		get_admin();
		Student* 	get_stu();
		Teacher* 	get_tch();
		Counsellor* get_csl();
	private:
		Manager();
		bool init_disk(const string &name);
		bool init_interface();

	private:
		static Manager* m_instance;
		Disk* 		m_disk      = nullptr;
		InterFace* 	m_interface = nullptr;
		Admin* 		m_admin     = nullptr;
		Student*	m_stu       = nullptr;
		Teacher* 	m_tch 		= nullptr;
		Counsellor* m_csl		= nullptr;
	};
};

#endif