#include <iostream>
#include <string>
#include <map>
#include <set>

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

    map<string, multiset<string>> order_authors;
    for (const auto &w : authors)
    {
        order_authors[w.first].insert(w.second);
    }

    for (const auto &w : order_authors)
    {
        cout << w.first << ": ";
        for (const auto &s : w.second)
        {
            cout << s << " ";
        }
        cout << endl;
    }


    return 0;
}
