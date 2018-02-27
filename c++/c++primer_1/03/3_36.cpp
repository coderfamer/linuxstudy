/*************************************************************************
	> File Name: 3_36.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年07月23日 星期日 21时59分54秒
 ************************************************************************/

#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main()
{
    const int sz = 5;
    int a[sz], b[sz], i;
    srand((unsigned) time (NULL));
    for (i=0; i<sz; i++)
    {
        a[i] = rand()%100;
    }

    cout << "system date has been generated, please enter the five number you guessed(0-10), can repeat:" << endl;
    int uVal;

    for (i=0; i<sz; i++)
    {
        if (cin >> uVal)
        {
            b[i] = uVal;
        }
    }

    cout << "the data gengrated by system is:" << endl;
    for (auto val : a)
    {
        cout << val << " ";
    }
    cout << endl;
    cout << "the data you guessed was: " << endl;
    for (auto val : b)
    {
        cout << val << " ";
    }
    cout << endl;

    int *p = begin(a), *q = begin(b);
    while (p != end(a) && q != end(b))
    {
        if (*p != *q)
        {
            cout << "wrong " << endl;
            return -1;
        }
        p++;
        q++;
    }
    cout << "congratulations, you got it" << endl;



    return 0;
}
