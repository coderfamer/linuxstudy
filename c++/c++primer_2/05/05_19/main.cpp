#include <iostream>

using namespace std;

int main()
{
    string str1, str2;
    cout << "Please enter two string object:" << endl;
    do {
        cin >> str1 >> str2;
        cout << "the short string is: " <<
                ((str1.length()<str2.length()) ? str1 : str2) << endl;
    }while(cin);
    return 0;
}
