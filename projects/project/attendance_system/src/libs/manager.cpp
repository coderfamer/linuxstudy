#include <iostream>
#include "manager.hpp"

namespace AttendanceSYS
{
	Manager* Manager::m_instance = nullptr;
	Manager::Manager()
	{

	}
	Manager::~Manager()
	{

	}

	Manager* Manager::get_instance()
	{
		return m_instance;
	}

	Manager* Manager::get_instance(const string &db)
	{
		if (m_instance == NULL)
		{
			m_instance = new Manager();
			m_instance->init(db);
		}
	}

	bool Manager::init(const string &db)
	{
		#if 1
		if (!this->init_disk(db))
		{
			return false;
		}
		#endif

		if (!this->init_interface())
		{
			return false;
		}
	}

	bool Manager::init_disk(const string &name)
	{
		this->m_disk = new Disk();
		if (!this->m_disk->init(name))
		{
			delete this->m_disk;
			this->m_disk = NULL;
			return false;
		}

		return true;
	}
	bool Manager::init_interface()
	{
		this->m_interface = new InterFace();
		if (!this->m_interface->init())
		{
			delete this->m_disk;
			this->m_disk = NULL;
			return false;
		}
		return true;
	}

	Disk* Manager::get_disk()
	{
		return this->m_disk;
	}

	InterFace* Manager::get_interface()
	{
		return this->m_interface;
	}

	Admin* Manager::get_admin()
	{
		return this->m_admin;
	}

	Teacher* Manager::get_tch()
	{
		return this->m_tch;
	}

	Student* Manager::get_stu()
	{
		return this->m_stu;
	}

	Counsellor* Manager::get_csl()
	{
		return this->m_csl;
	}
	
};