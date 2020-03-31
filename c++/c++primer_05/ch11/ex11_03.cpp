#include <iostream>
#include <map>
#include <string>
#include <cstddef>

using std::cout;
using std::endl;
using std::cin;
using std::map;
using std::string;

int main()
{
    map<string, std::size_t> word_counts;
    string word;
    while (cin >> word) {
        ++word_counts[word];
    }


    for (const auto &c : word_counts) {
        cout << c.first << " occurs " << c.second
            << ((c.second > 1) ? " times." : " time.") << endl;
    }


    return 0;
}