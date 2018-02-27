#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    string s1;
    string s2 = s1;
    string s3 = "hello quange";
    string s4(10, 'c');
    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << s4 << endl;
    bool e = s1.empty();
    cout << "s1.empty = " << e << endl;
    return 0;
}
