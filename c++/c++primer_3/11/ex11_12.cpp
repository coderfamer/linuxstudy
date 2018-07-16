#include <iostream>
#include <utility>
#include <vector>
#include <string>

using namespace std;

int main()
{
    using PVEC =  vector<pair<string, int>>;
    PVEC pvec;

    cout << "Enter you pair: " << endl;
    string str;
    int i;
    while (cin >> str >> i)
    {
        pvec.push_back(make_pair(str, i));
    }

    for (PVEC::size_type i = 0; i < pvec.size(); i++)
    {
        cout << pvec[i].first << " " << pvec[i].second << endl;
    }
    return 0;
}
