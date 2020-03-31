#include <iostream>
#include <vector>
#include <numeric>

using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << "sum of vec: "
         << std::accumulate(vec.begin(), vec.end(), 0) << endl;

    vector<double> dvec = {1.1, 2.222, 3.11, 4.1, 5.44};
    cout << "sum of dvec: "
        << std::accumulate(dvec.begin(), dvec.end(), 0) << endl;

    return 0;
}