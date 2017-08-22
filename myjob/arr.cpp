#include <iostream>

using namespace std;

void arr_print(int p[], int num)
{
    for (int i=0; i<num; i++)
    {
        if (p[i+1] -1 ==  p[i])
        {
            cout << p[i] << " ";
        }else{
            cout << endl;
            cout << p[i] << endl ;
        }

    }
}

int main()
{
    int a[] = {1, 2, 3,  5, 6, 7, 9};
    arr_print(a, 7);

    return 0;
}
