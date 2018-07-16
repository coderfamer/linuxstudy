#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

void read_file_to_vec(const string &filename, vector<string> &vec);


int main()
{
	vector<string> vec;
	read_file_to_vec("./book.txt", vec);
	for (const auto &str : vec)
		cout << str << endl;

	return 0;
}

void read_file_to_vec(const string &filename, vector<string> &vec)
{
	ifstream ifs(filename);
	if (ifs)
	{
		string buf;
		while (ifs >> buf)
			vec.push_back(buf);
	}
}