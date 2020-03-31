#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto iter = vec.begin();
    while (iter != vec.end()) {
        ++iter;
        //iter = vec.insert(iter, 42);
        vec.insert(iter, 42);
        ++iter;
    }

    for (auto c : vec) {
        cout << c << " ";
    }
    cout << endl;



    return 0;
}