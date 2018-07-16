#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;
using Families = map<string, vector<pair<string, string>>>;

auto make_families()
{
    Families families;
    string name, birth;
    for (string fn; cout << "Family name:\n", cin >> fn && fn != "@q";)
    {
        cout << "enter childrens name and birthday: " << endl;
        while (cin >> name >> birth )
        {
            if (name == "@q")
            {
                break;
            }
            cout << "enter childrens name and birthday: " << endl;
            families[fn].push_back(make_pair(name, birth));
        }
    }
    return families;
}

auto print(Families const &families) //此处用c++14编译才能通过，否则auto 改成void
{
    for (auto const & family : families)
    {
        cout << family.first << ":\n";
        for (auto const &child : family.second)
            cout << child.first << " " << child.second;
        cout << endl;
    }
}


int main()
{
    print(make_families());


    return 0;
}
