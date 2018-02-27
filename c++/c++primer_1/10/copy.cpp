#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
    vector<int> ivec;
    auto it = back_inserter(ivec);
    *it = 43;
    for (auto it : ivec)
    {
        cout <<  it << " ";
    }
    cout << endl;

    fill_n(back_inserter(ivec), 11, 0);
    for (auto it : ivec)
    {
        cout <<  it << " ";
    }
    cout << endl;

    int a1[] = {0,1,2,3,4,5,6,7,8,9};
    int a2[sizeof(a1)/sizeof(*a1)];
    auto ret = copy(begin(a1), end(a1), a2);
    cout << *ret << endl;
    for (auto it : a2)
    {
        cout << it << " ";
    }
    cout << endl;




    return 0;
}
