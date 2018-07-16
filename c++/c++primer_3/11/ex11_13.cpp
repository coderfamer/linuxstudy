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
        //pvec.push_back(make_pair(str, i));
        //pvec.push_back({str, i});
        pvec.push_back(pair<string, int>(str, i));
    }

    for (auto const &w : pvec)
    {
        cout << w.first << " " << w.second << endl;
    }

    return 0;
}
