#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> ivec = {1,2,1,3,1,5,1,6,7,8,2,3};

    int val = 1;
    int result = count(ivec.begin(), ivec.end(), val);

    cout << result << endl;


    return 0;
}
