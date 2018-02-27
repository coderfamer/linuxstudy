#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int > svec;
    svec.reserve(1024);
    string word;
    cout << "size: " << svec.size() << " capacity: " << svec.capacity() << endl;
    for (int i=0; i<1048; i++)
    {
        svec.push_back(i);
    }
    cout << "size: " << svec.size() << " capacity: " << svec.capacity() << endl;
    svec.resize(svec.size() + svec.size()/2);
    cout << "size: " << svec.size() << " capacity: " << svec.capacity() << endl;

    return 0;
}
