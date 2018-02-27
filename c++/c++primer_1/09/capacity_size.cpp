#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> ivec;

    cout << "ivec:size " << ivec.size() << " capacity: " << ivec.capacity() << endl;

    for (auto ix=0; ix != 24; ix++)
    {
        ivec.push_back(ix);
    }
    cout << "ivec:size " << ivec.size() << " capacity: " << ivec.capacity() << endl;
    ivec.reserve(50);
    cout << "ivec:size " << ivec.size() << " capacity: " << ivec.capacity() << endl;

    while (ivec.size() != ivec.capacity())
    {
        ivec.push_back(0);
    }
    cout << "ivec:size " << ivec.size() << " capacity: " << ivec.capacity() << endl;

    ivec.push_back(23);
    cout << "ivec:size " << ivec.size() << " capacity: " << ivec.capacity() << endl;
    return 0;
}
