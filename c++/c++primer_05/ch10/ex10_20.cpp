#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::vector;
using std::string;


int main()
{
    vector<string> vec = {"chen", "xi", "chen", "quan", "min", "jing", "min"};

    auto c = std::count_if(vec.begin(), vec.end(), [](const string &s){
        return s.size() > 3;
    });

    cout << c << endl;


    // std::for_each(vec.cbegin(), vec.cend(), [](const string &s){
    //     cout << s << " ";
    // });
    // cout << endl;

    return 0;
}