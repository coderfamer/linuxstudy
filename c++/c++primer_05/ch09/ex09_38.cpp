#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> vec;
    for (string buf; cin >> buf; vec.push_back(buf)) {
        cout << vec.capacity() << endl;
    }

    return 0;
}