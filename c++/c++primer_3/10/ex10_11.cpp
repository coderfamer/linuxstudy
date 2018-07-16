#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

auto print(vector<string> svec)
{
    for (auto const &w : svec)
    {
        cout << w << " ";
    }
    cout << endl;
}

auto isshort(const string &str1, const string &str2)
{
    return str1.size() < str2.size();
}

int main()
{
    vector<string> svec;
    for (string str; cout << "Enter your str: \n", cin >> str && str != "@q";)
    {
        svec.push_back(str);
    }
    print(svec);

    sort(svec.begin(), svec.end() );
    print(svec);

    auto unique_end =  unique(svec.begin(), svec.end());
      print(svec);

    svec.erase(unique_end, svec.end());
    print(svec);

    stable_sort(svec.begin(), svec.end(), isshort);
    print(svec);


    return 0;
}
