#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
#include <iterator>

using std::cout;
using std::endl;
using std::list;
using std::vector;

void print(const list<int> &lst)
{
    std::for_each(lst.begin(), lst.end(), [](int a){
        cout << a << " ";
    });
    cout << endl;
}

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    list<int> lst1, lst2, lst3;
    std::unique_copy(vec.begin(), vec.end(), std::back_inserter(lst1));
    std::unique_copy(vec.begin(), vec.end(), std::front_inserter(lst2));
    std::unique_copy(vec.begin(), vec.end(), std::inserter(lst3, lst3.begin()));

    print(lst1);
    print(lst2);
    print(lst3);

    return 0;
}