#include <iostream>

using namespace std;
class human
{
public:
    human()
    {
        cout << "gouzao" << endl;
        human_num++;
    }
    static int human_num;
    ~human()
    {
        cout << "xigou " << endl;
        human_num--;
        print();
    }

    void print()
    {
        cout << "lei print" << endl;
        cout << "human num is: " << human_num << endl;
    }
};

int human::human_num = 0;

human f1(human x)
{
    cout << "print" << endl;
    x.print();
    return x;
}

int main()
{
    human h1;
    h1.print();
    human h2 = f1(h1);
    h2.print();
    return 0;
}


