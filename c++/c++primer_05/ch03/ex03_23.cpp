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
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 3, 9, 10};
    auto iter = vec.begin();
    for (;iter != vec.end(); iter++) {
        *iter = (*iter) *2;
    }

    for (const auto &c : vec) {
        cout << c << endl;
    }

    return 0;
}