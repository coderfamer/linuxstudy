#include <iostream>
#include <algorithm>
#include <list>
#include <iterator>

using std::cout;
using std::endl;
using std::list;

int main()
{
    list<int> lst = {1, 2, 3, 0, 4, 5, 6, 0, 7, 8, 9};

    auto iter = std::find(lst.crbegin(), lst.crend(), 0);
    auto pos = std::distance(lst.crbegin(), iter);

    cout << pos << "===>>" <<  *iter << endl;

    return 0;
}