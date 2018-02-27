#include <iostream>
#include <map>
#include <string>
#include <vector>
//#include <stdio.h>
using namespace std;

void add_family(map<string, vector<string>> &families, const string &family)
{
    if (families.find(family) == families.end())
    {
        families[family] = vector<string>();
    }
}

void add_child(map<string, vector<string>> & families, const string &family, const string & child)
{
    families[family].push_back(child);
}


int main()
{
    map<string, vector<string>> families;

    add_family(families, "chen");
    add_child(families, "chen", "xi");
    add_child(families, "chen", "zhengquan");
    add_child(families, "wang", "badan");
    add_family(families, "wang");

    for (auto f : families)
    {
        cout << f.first << " home's children: ";
        for (auto s : f.second)
        {
            cout << s << " ";
        }
        cout << endl;
    }
    cout <<endl;




    return 0;
}
