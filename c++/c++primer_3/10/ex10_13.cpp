#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool isfive(string str)
{
    if (str.size() < 5)
    {
        return false;
    }
    return true;
}

auto print(vector<string> svec)
{
    for (auto const &w : svec)
    {
        cout << w << " ";
    }
    cout << endl;
}

int main()
{
    vector<string > svec;
    for (string str; cout << "Enter a str:\n", cin >> str && str != "@q";)
    {
        svec.push_back(str);
    }
    print(svec);
    auto true_end = partition(svec.begin(), svec.end(), isfive);
    print(svec);
    svec.erase(true_end, svec.end());
    print(svec);





    return 0;
}
