#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int m = 50;
    int n = 100;
    int sum = 0;
    while (m <= n)
    {
        sum += m;
        m++;
    }
    cout << "the sum is " << sum << endl;
    return 0;
}
