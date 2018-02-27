#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int arr[5] = {22,32,43,54,65};
    int *p = arr;
    for (auto s : arr)
    {
        cout << s << " ";
    }
    cout << endl;
    for (int i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
    {
        p[i] = 0;
    }
    for (auto s : arr)
    {
        cout << s << " ";
    }
    cout << endl;
    return 0;
}
