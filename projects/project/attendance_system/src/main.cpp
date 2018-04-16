#include <iostream>
#include <string>

#include "manager.hpp"
#include "disk.hpp"
using namespace AttendanceSYS;

//using std::endl;

int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		cout << "usage: ./a.out ./db" << endl;
		return -1;
	}

	string db_name = argv[1];
	Manager* adsys = Manager::get_instance(db_name);
	
	return 0;
}
