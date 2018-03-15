#include <iostream>

using namespace std;

int mysum(initializer_list<int> num)
{
    int sum = 0;
    for (auto it : num)
    {
        sum += it;
    }

    return sum;
}

int main()
{
    cout << "1,2,3,4,5 : " << mysum({1,2,3,4,5}) << endl;
    cout << "1 2 3: " << mysum({1,2,3}) << endl;


    return 0;
}
