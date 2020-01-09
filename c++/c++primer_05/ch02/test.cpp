#include <iostream>
#include <cstring>


using namespace std;

int main()
{
    int num = 0;
    int * const ptr = &num;
    num = 20;
    *ptr = 21;
    int arr = 20;
    
    using UINT = unsigned int;

    UINT a = 122;

    cout << a << endl;

    return 0;
}