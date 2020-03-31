#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> lt = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto iter = lt.begin();

    while (iter != lt.end()) {
        if (*iter & 0x01) {
            iter = lt.insert(iter, *iter), advance(iter, 2);
            // ++iter;
            // ++iter;
        } else {
            iter = lt.erase(iter);
        }
    }

    for (auto c : lt) {
        cout << c << " ";
    }
    cout << endl;

    return 0;
}