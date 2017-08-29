#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printf(vector<int> &vec)
{
    for (auto it : vec)
    {
        cout << it << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> ivec(1000, 3);
    printf(ivec);

    fill_n(ivec.begin(), 1000, 1000);
    printf(ivec);

    return 0;
}
