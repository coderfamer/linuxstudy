#include "StdAfx.h"

using std::cout;
using std::endl;
using std::string;
using std::cin;

void exe0310_erasepunct()
{
	string str;
	string new_str;
	cin >> str;
	for (auto &s : str)
	{
		if (!ispunct(s))
		{
			new_str += s;
		}
	}
	cout << new_str << endl;
}