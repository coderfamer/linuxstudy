#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec;
    //vec.reserve(10);
    vec.resize(10);
    fill_n(vec.begin(), 10, 2);

    for (auto it : vec)
    {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}
