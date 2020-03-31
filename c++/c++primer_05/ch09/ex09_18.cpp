#include <iostream>
#include <string>
#include <deque>

using namespace std;

int main()
{
    deque<string> deq;
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