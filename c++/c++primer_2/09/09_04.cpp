#include <iostream>
#include <vector>

using namespace std;

bool find_val(vector<int>::iterator, vector<int>::iterator, int);

int main()
{
    vector<int> ivec = {1, 2, 3, 4, 5 ,6 ,7, 8};
    //vector<int>::iterator beg = ivec.begin();
    //vector<int>::iterator end = ivec.end();
    bool b = find_val(ivec.begin(), ivec.end(), 50);
    if (b)
    {
        cout << "find value" << endl;
    }
    else
    {
        cout << "no value" << endl;
    }


    return 0;
}

bool find_val(vector<int>::iterator beg, vector<int>::iterator end, int val)
{
    for (auto it = beg; it != end; it++)
    {
        if (*it == val)
        {
            return true;
        }
    }
    return false;
}
