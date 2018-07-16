#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	std::vector<int> v = {1, 2, 3, 4, 5, 6, 7, 6, 5, 4, 5};;
	cout << count(v.cbegin(), v.cend(), 6) << endl;

    return 0;
}
