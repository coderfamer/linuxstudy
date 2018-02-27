#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    vector<int> ivec = {1,2,3,4,5,6,7,8,9,10};
    for (auto it : ivec)
    {
       cout << it << " ";
    }
    cout << endl;
    for (auto iter=ivec.begin(); iter != ivec.end(); iter++)
    {
        cout << *iter << endl;
        if (*iter%2)
        {
            (*iter) = (*iter)*2;
        }
    }
    for (auto it : ivec)
    {
       cout << it << " ";
    }
    int a = 10;

    cout << endl;
    cout << sizeof ivec << endl;
    return 0;
}
