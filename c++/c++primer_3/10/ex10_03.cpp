#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
    vector<int> ivec = {1, 2, 3, 4};
    cout << accumulate(ivec.cbegin(), ivec.cend(), 0) << endl;


    return 0;
}
