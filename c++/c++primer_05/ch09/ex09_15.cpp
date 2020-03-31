#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec1{1, 2, 3, 4, 5, 6};
    vector<int> vec2{1, 2, 3, 4, 5, 6, 7};

    if (vec1 == vec2) {
        cout << "yes!!" << endl;
    } else {
        cout << "no!!!" << endl;
    }

    return 0;
}