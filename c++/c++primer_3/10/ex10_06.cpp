#include <iostream>

#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
    vector<int> v {1,2,3,4,5,6};
    for (auto const &w : v)
    {
        cout << w << " ";
    }
    cout << endl;
    fill_n(v.begin(), v.size(),  0);
    for (auto const &w : v)
    {
        cout << w << " ";
    }
    cout << endl;
    return 0;
}
