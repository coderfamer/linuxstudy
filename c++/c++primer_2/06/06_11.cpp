#include <iostream>

using namespace std;

void reset(int &i)
{
    i = 0;
}

int main()
{
    int j = 100000;
    cout << "before reset: j = " << j << endl;
    reset(j);
    cout << "after reset: j = " << j << endl;

    return 0;
}
