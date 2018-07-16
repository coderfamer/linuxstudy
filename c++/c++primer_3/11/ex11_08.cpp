#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print(vector<string> &vstr)
{
    for (auto const &v : vstr)
    {
        cout << v << " ";
    }
    cout << endl;
}

int main()
{
    vector<string> vstr;
    string str;
    while (cin >> str && str != "@q")
    {
        vstr.push_back(str);
    }

    print(vstr);
    sort(vstr.begin(), vstr.end());
    print(vstr);

    vstr.erase(unique(vstr.begin(), vstr.end()), vstr.end());
    print(vstr);
        

    

    return 0;
}
