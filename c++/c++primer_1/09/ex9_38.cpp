#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> ivec;
    int num;
    while (cin >> num)
    {
        ivec.push_back(num);
        for (auto it : ivec)
        {
            cout << it << " ";
        }
        cout << endl;
        cout << "the size of ivec = " << ivec.size() << endl;
        cout << "the capacity of ivec = " << ivec.capacity() << endl;
    }

    return 0;
}
