#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    cout << "int " << sizeof(int) << endl;
    cout << "char " << sizeof(char) << endl;
    cout << "long " << sizeof(long) << endl;
    cout << "short " << sizeof(short) << endl;
    cout << "short int " << sizeof(short int) << endl;
    cout << "double " << sizeof(double) << endl;
    cout << "float " << sizeof(float) << endl;
    cout << "long long " << sizeof(long long) << endl;
    int *p;
    cout << "*p " << sizeof(*p) << endl;
    cout << "p " << sizeof(p) << endl;
    //cout << "p/*p " << sizeof(p/(*p)) << endl;
    return 0;
}
