#include <iostream>
#include <list>
#include <deque>

using namespace std;

int main()
{
    list<int> lst = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    deque<int> deq1;
    deque<int> deq2;

    // for (auto c : lst) {
    //     if (c % 2 == 0) {
    //         deq1.push_back(c);
    //     }else {
    //         deq2.push_back(c);
    //     }
    // }

    for (auto c : lst) {
        ((c & 1) ? deq1 : deq2).push_back(c);
    }

    for (auto c : deq1) {
        cout << c << " ";
    }
    cout << endl;

    for (auto c : deq2) {
        cout << c << " ";
    }
    cout << endl;

    return 0;
}