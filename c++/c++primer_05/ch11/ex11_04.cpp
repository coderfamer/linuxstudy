#include <iostream>
#include <map>
#include <string>
#include <cstddef>
#include <algorithm>
#include <locale>

using std::cout;
using std::endl;
using std::cin;
using std::map;
using std::string;

void word_ignore(string &word)
{
    word.erase( std::remove_if(word.begin(), word.end(), ispunct), word.end());
    for (auto &ch : word) {
        std::tolower(ch);
    }
}

int main()
{
    map<string, std::size_t> word_counts;
    string word;
    while (cin >> word) {
        word_ignore(word);
        ++word_counts[word];
    }


    for (const auto &c : word_counts) {
        cout << c.first << " occurs " << c.second
            << ((c.second > 1) ? " times." : " time.") << endl;
    }


    return 0;
}