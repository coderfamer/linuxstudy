#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
#include <iterator>

using std::cout;
using std::endl;
using std::list;
using std::vector;

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    list<int> lst;
    std::unique_copy(vec.begin(), vec.end(), std::back_inserter(lst));

    for (auto c : lst) {
        cout << c << " ";
    }
    cout << endl;

    return 0;
}