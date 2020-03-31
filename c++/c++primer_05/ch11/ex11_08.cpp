#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

using std::vector;
using std::endl;
using std::cout;
using std::cin;
using std::string;

int main()
{
    vector<string> vec;
    string word;
    while (cin >> word) {
        auto iter = std::find(vec.begin(), vec.end(), word);
        if (iter == vec.end()) {
            vec.push_back(word);
        }
    }

    for (const auto &c : vec) {
        cout << c << " ";
    }
    cout << endl;

    return 0;
}