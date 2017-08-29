#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main()
{
    deque<string> s_deq;

    string str;
    while (cin >> str)
    {
        s_deq.push_back(str);
    }

    for (auto it : s_deq)
    {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}
