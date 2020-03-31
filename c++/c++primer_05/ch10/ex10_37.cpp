#include <iostream>
#include <algorithm>
#include <list>
#include <iterator>
#include <vector>

using std::cout;
using std::endl;
using std::list;
using std::vector;

int main()
{
    list<int> lst ;
    vector<int> vec = {1, 2, 3, 0, 4, 5, 6, 7, 8, 9, 10};

    std::copy(vec.crbegin() + 3, vec.crend() - 3, std::back_inserter(lst));

    for (auto c : lst) {
        cout << c << " ";
    }
    cout << endl;

    return 0;
}