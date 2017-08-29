#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main()
{
    list<int> llist(5, 2);
    vector<int> vec(10, 1);

    vector<double> dvec(llist.begin(), llist.end());
    vector<double> dvec1(vec.begin(), vec.end());

    auto it1 = dvec.begin();
    auto it2 = dvec1.begin();

    while (it1 != dvec.end())
    {
        cout << *it1 << " ";
        it1++;
    }
    cout << endl;
    while (it2 != dvec1.end())
    {
        cout << *it2 << " ";
        it2++;
    }
    cout << endl;

    return 0;
}
