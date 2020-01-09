#include <iostream>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    if (s1 == s2) {
        cout << "equal" << endl;
    } else {
        cout << ((s1 > s2) ? s1 : s2) << endl;
    }

    return 0;
}