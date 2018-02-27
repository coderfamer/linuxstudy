#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};
    int *e = &arr[10];
    for (int *b = arr; b!=e; ++b)
    {
        cout << *b << endl;
    }
    cout << "................................." << endl;

    int *beg = begin(arr);
    int *pend = end(arr);
    while (beg != pend && *beg >= 0 )
    {
        cout << *beg << endl;
        ++beg;
    }
    return 0;
}
