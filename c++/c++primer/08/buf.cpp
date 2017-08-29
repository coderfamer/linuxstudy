#include <iostream>

using namespace std;

int main()
{
    cout << "hello!" << endl;
    cout << "hello!!" << flush;
    cout << "hello!!" << ends;

    cout << unitbuf;
    cout << "first" << "second" << endl;
    cout << nounitbuf;

    return 0;
}
