#include "common.h"

extern int i;
//int _K20 = 20;
int main0205()
{
    cout << "\'a\' " << L'a' << endl;
    cout << "\"a\" " << L"a" << endl;

    cout << "10 " << 10 << endl;
    cout << "10u " << 10uL << endl;
    cout << "012 " << 012 << endl;
    cout << "0xc " << 0xc << endl;

    cout << "3.14 3.14f 3.14L " << 3.14 << 3.14f << 3.14L << endl;

    cout << 10. << " " << 10e-2 << endl;

    


    return 0;
}