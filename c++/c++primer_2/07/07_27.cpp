#include <iostream>

#include "Screen2.h"

using namespace std;


int main()
{
    Screen myScreen(5, 5, 'X');
    myScreen.move(4, 0).set('#').display();
    cout << endl;
    myScreen.display();
    cout << endl;


    return 0;
}
