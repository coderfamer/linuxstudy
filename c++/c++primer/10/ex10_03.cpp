#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<double> ivec(10, 2.2);
    double val = 0.0;
    auto sum = accumulate(ivec.cbegin(), ivec.cend(), val);
    cout << sum << endl;


    return 0;
}
