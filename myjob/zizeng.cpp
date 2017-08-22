#include <iostream>


using namespace std;

int main()
{
    int a = 1, b = 10;
    do{
        cout << "before a = " << a << ",b = " << b << endl;
        b -= a;
        a++;
        cout << "after a = " << a << ",b = " << b << endl;
    }while (b-- < 0);
    cout << a << "  " << b << endl;

    return 0;
}
