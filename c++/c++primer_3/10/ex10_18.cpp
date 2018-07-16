#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void elimdups(vector<string> &svec)
{
    sort(svec.begin(), svec.end());

    svec.erase(unique(svec.begin(), svec.end()), svec.end());
}

void print(vector<string> &svec)
{
    for (auto const &w : svec)
    {
        cout << w << " ";
    }
    cout << endl;

}

void biggies(vector<string> &svec, vector<string>::size_type sz)
{
    elimdups(svec);

    auto true_end = partition(svec.begin(), svec.end(),
                              [sz](const string &s){
                                return s.size() >= sz;
                              });
    print(svec);
    for (auto it = svec.begin(); it != true_end; it++)
    {
        cout << *it << " ";
    }

}

int main()
{
    vector<string> svec;
    for (string str; cout << "Enter your str:\n", cin >> str && str != "@q";)
    {
        svec.push_back(str);
    }
    print(svec);

    biggies(svec, 5);
    cout << endl;


    return 0;
}
