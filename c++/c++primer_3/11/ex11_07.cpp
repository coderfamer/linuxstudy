#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;
using Families = map<string, vector<string>>;

auto make_families()
{
    Families families;
    for (string fn; cout << "Family name:\n", cin >> fn && fn != "@q";)
    {
        for (string cn; cout << "|-children's names:\n", cin >> cn && cn != "@q";)
        {
            families[fn].push_back(cn);
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
            cout << child << " ";
        cout << endl;
    }
}


int main()
{
    print(make_families());


    return 0;
}
