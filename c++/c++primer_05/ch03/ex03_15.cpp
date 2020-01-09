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

    for (const auto &v : vec) {
        cout << v << " ";
    }
    cout << endl;


    return 0;
}