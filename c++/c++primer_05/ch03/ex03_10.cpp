#include <iostream>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    string str = "h,e.l.l~o!!!wor...d!!!";
    for (auto c : str) {
        if (!ispunct(c))
            cout << c ;
    }
    cout << endl;

    return 0;
}