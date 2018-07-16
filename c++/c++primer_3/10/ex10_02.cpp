#include <iostream>
#include <algorithm>
#include <list>

using namespace std;

int main()
{
	list<string> v = {"aa", "bb", "cc", "dd", "aa", "aa"};
	cout << count(v.cbegin(), v.cend(), "aa") << endl;

    return 0;
}
