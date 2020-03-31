#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

bool get_value(vector<int>::iterator beg, vector<int>::iterator end, int val)
{
    for (; beg != end; ++beg) {
        if (val == *beg) {
            return true;
        }
    }

    return false;
}

int main()
{
    vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int val = 12;
    if (get_value(vec.begin(), vec.end(), val)) {
        cout << "found!!" << endl;
    } else {
        cout <<"can't found!" << endl;
    }

    return 0;
}