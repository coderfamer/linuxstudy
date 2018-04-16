#include <iostream>
#include <vector>

using namespace std;

vector<int>::iterator find_val(vector<int>::iterator beg, vector<int>::iterator end, int val)
{
    for (; beg != end; beg++)
    {
        if (*beg == val)
        {
            return beg;
        }
    }
    return end;
}

int main()
{
    vector<int> ivec = {1, 2, 3, 4, 5, 6, 7, 8};

    auto a = find_val(ivec.begin(), ivec.end(), 5);
    cout << a - ivec.begin() << endl;

    cout << find_val(ivec.begin(), ivec.end(), 3) - ivec.begin() << endl;

    return 0;
}
