#include <iostream>
#include <vector>
#include <list>

using std::vector;
using std::list;
using std::cout;
using std::endl;

int main()
{
    list<int> lst{1, 2, 3, 4, 5, 6, 7, 8, 0};
    auto beg = lst.begin();
    vector<double> vec(beg, lst.end());

    for (auto val : vec) {
        cout << val  << " ";
    }
    cout << endl;

    vector<int> vec2{1, 2, 3, 4, 5, 6, 7, 8, 0};
    vector<double> vec3(vec2.begin(), vec2.end());

    for (auto val : vec3) {
        cout << val << " ";
    }
    cout << endl;


    return 0;
}