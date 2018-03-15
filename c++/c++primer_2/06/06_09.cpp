//factmain.cpp
#include <iostream>
#include "chapter6.h"

using namespace std;

int main()
{
    int num;
    cout << "please enter a num: " << endl;
    cin >> num;
    cout << num << fact(num) << endl;
    return 0;
}
