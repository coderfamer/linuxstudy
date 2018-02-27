#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> v1(a, a+10);
    for (auto s : v1)
    {
        cout << s << " ";
    }
    cout << endl;

    vector<int> v2 = v1;
    int b[10];
    for (int i=0; i<10; i++)
    {
        cout << " a[" << i << "]" << " = " << a[i] << endl;
        b[i] = a[i];
        cout << " b[" << i << "]" << " = " << b[i] << endl;
        cout << "v1[" << i << "]" << " = " << v1[i] << endl;
        cout << "v2[" << i << "]" << " = " << v2[i] << endl;
    }
    return 0;
}
