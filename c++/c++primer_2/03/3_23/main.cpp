#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
    cout << "Hello World!" << endl;
    vector<int> ivec = {1,2,3,4,5,6,7,8,9,10};
    cout << "begin double" << ivec << endl;
    for (auto it = ivec.begin(); it != ivec.end(); it++)
    {
        *it = (*it)*2;
    }
    cout << "after double" << ivec << endl;
    return 0;
}
