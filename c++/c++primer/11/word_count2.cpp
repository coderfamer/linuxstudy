#include <iostream>
#include <ifstream>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[])
{
	ifstream in(argv[1]);
	if (!in)
	{
		cout << "open files error!!!" << endl;
		exit(0);
	}

	map<string, size_t> word_count;
	string word;
	while (cin >> word)
	{
		
	}
	

	return 0;
}
