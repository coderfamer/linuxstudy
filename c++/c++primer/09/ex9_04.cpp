#include <iostream>
#include <vector>
using namespace std;

bool vec_find(vector<int> &a, int tag)
{
    for (auto i : a)
    {
        if (i == tag)
        {
            cout << "find" << endl;
            return true;
        }
    }
    return false;
}

int main()
{
    vector<int> a = {1, 2, 3, 4};

    bool flag = vec_find(a, 2);
    cout << flag << endl;

    cout << vec_find(a, 5) << endl;
    
    
    return 0;
}
