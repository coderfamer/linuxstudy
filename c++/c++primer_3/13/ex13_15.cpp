#include <iostream>

using namespace std;

class numbered
{
public:
    numbered(){
        mysn = unique++;
    }
    numbered(const numbered &num)
    {
        mysn = num.unique++;
        cout << unique << endl;
    }

    int mysn;
    static int unique;

};


int numbered::unique = 10;

void f(numbered s)
{
    cout << s.mysn << endl;
}

int main()
{
    numbered a;
    cout << "==============" << endl;
    numbered b = a;
    cout << "==============" << endl;
    numbered c = b;
    cout << "===================" << endl;
    f(a);
    cout << "===================" << endl;
    f(b);
    cout << "===================" << endl;
    f(c);


    return 0;
}
