#include <iostream>

using namespace std;

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}


int main()
{
    int i = 10, j = 20;
    //int &m = i, &n = j;
    cout << "before swap: i = " << i << ", j = " << j << endl;
    //swap(m, n);
    swap(i, j);
    cout << "after swap: i = " << i << ", j = " << j << endl;


    return 0;
}
