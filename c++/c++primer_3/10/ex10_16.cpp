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
    stable_sort(svec.begin(), svec.end(),
                [](const string &a, const string &b){
                    return a.size() < b.size();
                });
    print(svec);
    auto fbiger = find_if(svec.begin(), svec.end(), 
                          [sz](const string &a){
                            return a.size() >= sz;
                          });
    print(svec);
    
    for_each(fbiger, svec.end(),
             [](const string &s){
                cout << s << " ";
             });
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
