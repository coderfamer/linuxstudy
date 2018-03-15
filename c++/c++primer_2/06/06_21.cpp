#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int compare(const int val, const int *p)
{
    if (val < *p)
    {
        cout << "the biggest is " << *p << endl;
        return *p;
    }
    else if (val > *p)
    {
        cout << "the biggest is " << val << endl;
        return val;
    }
    else
    {
        cout << "they are same" << endl;
        return 0;
    }

}

int compare2(const int val, const int *p)
{
    return (val > *p) ? val : *p;
}

int main()
{
    int m = 10;
    int b = 15;
    int *p = &b;
    cout << compare(m, p) << endl;
    srand((unsigned) time (NULL));//产生随机种子
    int a[10];
    for (auto &i : a)
    {
        i = rand()%100;
    }
    cout << "please enter a number: " ;
    int j;
    cin >> j;
    cout << "the biggest is :" << compare2(j, a) << endl;
    cout << "the arr is: " << endl;
    for (auto i : a)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
