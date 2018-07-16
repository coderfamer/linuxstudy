#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
    vector<double> dvec = {1.1, 2.1, 3.1, 4.5};

    //会被转换为int型
    cout << accumulate(dvec.cbegin(), dvec.cend(), 0) << endl;

    return 0;
}
