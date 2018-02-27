#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int arr[10], brr[10];
    for (int i=0; i<10; i++)
    {
        arr[i] = i;
        brr[i] = arr[i];
    }
    for (auto s : arr)
    {
        cout << s << " ";
    }
    cout << endl;
    for (auto s : brr)
    {
        cout << s << " ";
    }
    cout << endl;
    return 0;
}
