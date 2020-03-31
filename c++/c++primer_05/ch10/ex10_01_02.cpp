#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::list;
using std::string;
using std::vector;

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 6, 5, 5, 5};
    cout << "ex10_01 appear:" << std::count(vec.begin(), vec.end(), 5) << " times" << endl;

    list<string> lt = {"aa", "bb", "cc", "aa", "cc"};
    cout << "ex10_02 appear:" << std::count(lt.begin(), lt.end(), "aa") << " times" << endl;

    return 0;
}