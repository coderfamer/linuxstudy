#include <iostream>
#include <string>
#include <list>

using namespace std;

int main()
{
    list<string> deq;
    string str;
    while(cin >> str) {
        deq.push_back(str);
    }

    for (const auto c : deq) {
        cout << c << " ";
    }
    cout << endl;


    return 0;
}