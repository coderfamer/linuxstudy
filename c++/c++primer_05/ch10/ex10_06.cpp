#include <iostream>
#include <algorithm>
#include <cstring>
using std::cout;
using std::endl;

int main()
{
    int ia[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (auto c : ia) {
        cout << c << " ";
    }
    cout << endl;
    std::fill_n(std::begin(ia), sizeof(ia)/sizeof(int), 0);
    for (auto c : ia) {
        cout << c << " ";
    }
    cout << endl;

    return 0;
}