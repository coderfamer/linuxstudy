#include <iostream>
#include <list>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::list;
using std::vector;
using std::string;

int main()
{
    list<const char *> lst{"ni", "hao", "wo", "shi", "c++"};
    vector<string> vec;

    vec.assign(lst.begin(), lst.end());


    for (auto var : vec) {
        cout << var << " ";
    }
    cout << endl;

    return 0;
}