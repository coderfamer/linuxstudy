#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    int arr1[10] = {0,1,2,3,4,5,6,7,8,9};
    int arr2[10] = {0,1,2,3,4,5,6,7,8,9};
    int flag=0;
    if (sizeof(arr1) == sizeof(arr2))
    {
        for (int i=0; i<10; i++)
        {
            if (arr1[i] == arr2[i])
            {
                flag++;
            }
        }
        if (flag == 10)
        {
            cout << "equal" << endl;
        }
        else
        {
            cout << "not equal" << endl;
        }
    }
    else
    {
        cout << "number not equal" << endl;
    }

    vector<int> ivec1(arr1, arr1+10);
    vector<int> ivec2(arr2, arr2+10);
    if (ivec1 == ivec2)
    {
        cout << "vector equal" << endl;
    }
    else
    {
        cout << "vector not equal" << endl;
    }

    return 0;
}
