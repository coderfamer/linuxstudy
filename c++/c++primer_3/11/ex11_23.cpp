#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    multimap<string, string> families;
    for (string lname, cname; cin >> lname >> cname; families.emplace(lname, cname));
    for (auto const& family : families)
    {
        cout << family.first << " " << family.second << endl;
    }


    return 0;
}
