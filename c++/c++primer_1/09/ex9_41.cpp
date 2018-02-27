#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<char> cvec  = {'a', 'b', 'h', 'e', 'l', 'l', 'o'};
    string s(cvec.begin(), cvec.end());
    //string s1(cvec);

    cout << s << endl;


    return 0;
}
