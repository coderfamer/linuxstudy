#include <iostream>

using namespace std;

int arr_print(int n)
{
    int i;
    if (n == 1)
    {
        i  = 1;
        return i;
    }
    else if (n == 2)
    {
        i = 1;
        return i;
    }
    else
    {
        i = arr_print(n-1) + arr_print(n-2) ;
        return i;
    }

}

int main()
{
    int num;
    cout << "enter num:" << endl;
    cin >> num;
    int k = 0;
    for (int i=1; i<=num; i++)
    {
        //cout << arr_print(i) << endl;
        k += arr_print(i);
    }
    cout << k << endl;

    return 0;
}
