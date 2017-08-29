#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> i_vec(10, 2);

    cout << i_vec.at(0) << endl;
    cout << i_vec[0] << endl;
    cout << i_vec.front() << endl;
    cout << *i_vec.begin() << endl;
    return 0;
}
