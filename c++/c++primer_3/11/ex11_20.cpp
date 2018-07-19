#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<string, size_t> counts;
    for (string word; cin >> word;)
    {
        auto result = counts.insert({word, 1});
        if (!result.second)
        {
            ++result.first->second;
        }
    }

    for (auto const &w : counts)
    {
        cout << w.first << " " << w.second << ((w.second > 1) ? " times" : " time") << endl;
    }



    return 0;
}
