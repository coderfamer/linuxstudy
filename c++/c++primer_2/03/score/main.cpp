#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    vector<unsigned> ivec(11, 0);
    unsigned grade;
    while (cin >> grade)
    {
        ivec[grade/10]++;
    }

    for (auto &s : ivec)
    {
        cout << s << " ";
    }
    cout << endl;
    return 0;
}
