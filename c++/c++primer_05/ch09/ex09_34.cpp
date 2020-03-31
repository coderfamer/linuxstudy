#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto iter = vec.begin();
    while (iter != vec.end()) {
        if (*iter % 2) {
            iter = vec.insert(iter, *iter);
        }
        ++iter;
        cout << *iter << endl;
    }

    for (auto c : vec) {
        cout << c << " ";
    }
    cout << endl;



    return 0;
}