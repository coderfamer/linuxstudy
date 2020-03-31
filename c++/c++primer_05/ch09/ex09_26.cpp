#include <iostream>
#include <vector>
#include <list>


using namespace std;

int main()
{
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
    vector<int> vec;
    list<int> lst;
    for (const auto c : ia) {
        vec.push_back(c);
        lst.push_back(c);
    }

    for (auto iter = vec.begin(); iter != vec.end();) {
        if (*iter & 1) {
            ++iter;
        } else {
            iter = vec.erase(iter);
        }
    }

    for (auto iter = lst.begin(); iter != lst.end();) {
        if (!(*iter & 1)) {
            ++iter;
        } else {
            iter = lst.erase(iter);
        }
    }

    cout << "vec:";
    for (const auto c : vec) {
        cout << c << " ";
    }
    cout << endl;

    cout << "lst:";
    for (const auto c : lst) {
        cout << c << " ";
    }
    cout << endl;

    return 0;
}