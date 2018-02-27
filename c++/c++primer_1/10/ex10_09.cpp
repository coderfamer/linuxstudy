#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void print(vector<string> &vec)
{
    for (auto it : vec)
    {
        cout << it << " ";
    }
    cout << endl;
}

int main()
{
    vector<string> ivec =
    {"chen","zh", "quan", "chen", "xi", "li", "xi", "li",};
    print(ivec);
    sort(ivec.begin(), ivec.end());
    cout << "sort:" << endl;
    print(ivec);
    auto flag = unique(ivec.begin(), ivec.end());
    cout << "unique: "<< endl;
    print(ivec);
    ivec.erase(flag, ivec.end());
    cout << "erase :" << endl;
    print(ivec);
    stable_sort(ivec.begin(), ivec.end());
    print(ivec);
    return 0;
}
