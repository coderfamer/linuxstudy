#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    vector<int> ivec;
    int inum;
    while (cin >> inum)
    {
        ivec.push_back(inum);
    }

    for (auto &it : ivec)
    {
        cout << it ;
    }
    cout << endl;

    return 0;
}
