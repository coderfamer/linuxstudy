#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    multimap<string, string> authors{
        {"alan", "DMA"},
        {"pezy", "LeetCode"},
        {"alan", "CLRS"},
        {"wang", "FTP"},
        {"pezy", "CPS"},
        {"wang", "cpp"}
    };

    string autor = "pezy";
    string work = "CPS";

    auto found = authors.find(autor);
    auto cunt = authors.count(autor);

    while (cunt)
    {
        if (found->second == work)
        {
            authors.erase(found);
        }
        ++found;
        --cunt;
    }

    for (const auto &w : authors)
    {
        cout << w.first << " " << w.second << endl;
    }



    return 0;
}
