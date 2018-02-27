#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int arr[10];
    for (int i=0; i<10; i++)
    {
        arr[i] = i;
    }
    for (auto s : arr)
    {
        cout << s << " ";
    }
    cout << endl;
    return 0;
}
