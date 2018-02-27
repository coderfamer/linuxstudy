#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool isshort(const string &s1, const string &s2)
{
    return s1.size() < s2.size();
}

void print(const vector<string> &svec)
{
    for (auto &it : svec)
    {
        cout << it << " ";
    }
    cout << endl;
}

int main()
{
    vector<string> svec =
    {"chen","the","zhg", "quan", "chen", "xi", "li", "xi", "li", "the"};

    cout << "before:" << endl;
    print(svec);


    sort(svec.begin(), svec.end());
    cout << "sort:" << endl;
    print(svec);

    stable_sort(svec.begin(), svec.end(), isshort);
    cout << "stable_sort: " << endl;
    print(svec);

    auto flag = unique(svec.begin(), svec.end());
    cout << "unique:" << endl;
    print(svec);

    svec.erase(flag, svec.end());
    cout << "erase:" << endl;
    print(svec);



    return 0;
}
