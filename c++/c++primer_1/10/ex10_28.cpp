#include<iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

void print(list<int> &vec)
{
    for (auto it : vec)
    {
        cout << it << " ";
    }
    cout << endl;
}

int main()
{
    list<int> ivec;
    list<int> ivec1, ivec2, ivec3;

    for (int i=1; i<10; i++)
    {
        ivec.push_back(i);
    }
    cout << "ivec: " << endl;
    print(ivec);

    ivec1.insert(ivec1.begin(), ivec.begin(), ivec.end());
    cout << "ivec1: " << endl;
    print(ivec1);


    copy(ivec.begin(), ivec.end(), back_inserter(ivec2));
    cout << "ivec2: " << endl;
    print(ivec2);

    copy(ivec.begin(), ivec.end(), front_inserter(ivec3));
    cout << "ivec3:" << endl;
    print(ivec3);




    return 0;
}
