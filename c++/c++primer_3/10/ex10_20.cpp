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

auto str_count(vector<string > &svec, vector<string>::size_type sz)
{
    auto count = count_if(svec.begin(), svec.end(),
                          [sz](const string &str){
                            return str.size() > sz;
                          });
    cout << "the count number is " << count << endl;
}



int main()
{
    vector<string> svec;
    for (string str; cout << "Enter your str:\n", cin >> str && str != "@q";)
    {
        svec.push_back(str);
    }
    print(svec);

    str_count(svec, 6);


    return 0;
}
