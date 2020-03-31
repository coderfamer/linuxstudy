#include <iostream>
#include <functional>
#include <vector>
#include <string>
#include <algorithm>

using std::cout;
using std::endl;
using std::string;
using std::vector;

bool check(int a, vector<int>::size_type sz)
{
    return a > sz;
}

int main()
{
    vector<int> vec = {1, 3, 4, 5, 6, 7, 8, 10, 2, 5};
    string s = "test";

    auto iter = std::find_if(vec.begin(), vec.end(),
        std::bind(check, std::placeholders::_1, s.size()));

    if (iter != vec.end()) {
        cout << vec.end() - iter << " " << *iter << endl;
    } 

    return 0;
}