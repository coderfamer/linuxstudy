#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
    vector<string> vec;
    string num;
    while (cin >> num) {
        vec.push_back(num);
    }

    for (auto &v : vec) {
        for (auto &c : v) {
            c = toupper(c);
        }
    }
    for (const auto &v : vec) {
        cout << v << endl;
    }
    return 0;
}