#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> &ivec, unsigned num)
{
    unsigned sz = ivec.size();
    if (!ivec.empty() && num < sz)
    {
        cout << ivec[num] << " ";
        print(ivec, num + 1);
    }
}

int main()
{
    vector<int> ivec = {1,2,3,4,5,6,7,8,9,10};
    print(ivec, 0);

    return 0;
}
