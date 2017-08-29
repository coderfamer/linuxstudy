#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<char> cvec1 = {'a', 'b', 'c'};
    vector<char> cvec2 = {'a', 'c', 'c'};

    auto flag = equal(cvec1.begin(), cvec1.end(), cvec2.begin());
    cout << flag << endl;


    return 0;
}
