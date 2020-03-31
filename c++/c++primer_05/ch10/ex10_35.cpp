#include <iostream>
#include <algorithm>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

void print(const vector<int> &vec)
{
    int num = vec.size()  - 1;

    while (num >= 0) {
        cout << vec[num] << " ";
        num--;
    }
    cout << endl;
}

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    print(vec);

    return 0;
}