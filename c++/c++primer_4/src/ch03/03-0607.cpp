#include "StdAfx.h"

using std::cout;
using std::endl;
using std::string;
using std::cin;


void exe306_stringtox()
{
	string str;
	const char ch = 'X';
	cin >> str;
	for (auto &s : str)
	{
		s = 'X';
	}

	cout << str << endl;
}

void exe306_chartox()
{
	string str;
	const char ch = 'X';
	cin >> str;
	for (char &s : str)
	{
		s = ch;
	}

	cout << str << endl;
}