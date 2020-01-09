#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> vec;
    int num;
    while (cin >> num) {
        vec.push_back(num);
    }

    for (const auto &v : vec) {
        cout << v << " ";
    }
    cout << endl;


    return 0;
}