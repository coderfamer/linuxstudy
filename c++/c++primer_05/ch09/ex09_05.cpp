#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

vector<int>::iterator
get_value(vector<int>::iterator beg, vector<int>::iterator end, int val)
{
    for (; beg != end; ++beg) {
        if (val == *beg) {
            return beg;
        }
    }

    return end;
}

int main()
{
    vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    vector<int>::iterator iter = get_value(vec.begin(), vec.end(), 25);
    if (iter != vec.end()) {
        cout << *iter << endl;
    } else {
        cout << "can't not found!!" << endl;
    }

    return 0;
}