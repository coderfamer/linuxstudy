#include <iostream>

#include "test.h"

using namespace std;

const int GamePlayer::NumTurns;

int main()
{
    int a = 5, b = 1;

    CALL_WITH_MAX(++a, b);

    cout << a << "   " << b << endl;

    CALL_WITH_MAX(++a, b+10);
    cout << a << "  " << b << endl;
    
    callWithMax(a, b);
    cout << a << "  " << b << endl;

    callWithMax(a, b);
    cout << a << "  " << b << endl;


    return 0;
}

void f(int a)
{
    cout << a << endl;
}
