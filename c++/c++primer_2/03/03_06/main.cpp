#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    string str;
    cout << "Enter a string:" << endl;
    cin >> str;
    cout << str << endl;
    for (int i=0; i<str.size(); i++)
    {
        str[i] = 'x';
    }
    cout << str << endl;

    return 0;
}
