#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    cout << "Enter a string:" << endl;
    string str;
    string Nstr;
    cin >> str;
    cout << str << endl;
    for (int i=0; i<str.size(); i++)
    {
        if (!ispunct(str[i]))
        {
            cout << str[i];
        }
    }
    cout <<  endl;
    return 0;
}
