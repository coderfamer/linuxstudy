#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> ivec1 = {2, 3, 4, 5, 1, 4};
    vector<int> ivec2(10, 3);
    vector<int> ivec3(ivec2);

    cout << "ivec1 = ";
    for (auto it : ivec1)
    {
        cout << it << " ";
    }
    cout << endl;
    cout << "ivec2 = ";
    for (auto it : ivec2)
    {
        cout << it << " ";
    }
    cout << endl;
    cout << "ivec3 = ";
    for (auto it : ivec3)
    {
        cout << it << " ";
    }
    cout << endl;

    cout << "ivec1 > ivec2 " << (ivec1 > ivec2) << endl;
    cout << "ivec2 >= ivec3 " << (ivec2 >= ivec3) << endl;



    return 0;
}
