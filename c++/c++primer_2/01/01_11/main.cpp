#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    cout << "please enter to different integer" << endl;
    int m;
    int n;
    cin >> m >> n;
    if (m - n >= 0)
    {
        while (n <= m)
        {
            cout << n << " ";
            n++;
        }
    }
    else
    {
        while (m <= n)
        {
            cout << m << " ";
            m++;
        }
    }
    cout << endl;
    return 0;
}
