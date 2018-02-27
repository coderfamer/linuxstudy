#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> vInt, unsigned index)
{
    unsigned sz = vInt.size();
    if (!vInt.empty() && index < sz)
    {
        cout << vInt[index] << " ";
        print(vInt, index +1);
    }
}

int main()
{
    vector<int> v = {1, 3, 5, 7, 9, 13, 17};

    print(v, 0);
    return 0;
}
