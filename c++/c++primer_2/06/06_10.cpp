#include <iostream>

using namespace std;

void swap(int *p, int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}

int main()
{
    int a = 10, b = 20;
    int *p = &a, *q = &b;
    cout << "before the swap, a = " << a << ", b = " << b << endl;
    swap(p, q);
    cout << "after the swap, a = " << a << ", b = " << b << endl;

    return 0;
}

