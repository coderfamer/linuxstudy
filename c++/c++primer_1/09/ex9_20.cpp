#include <iostream>
#include <list>
#include <deque>

using namespace std;

int main()
{
    list<int> ilist = {1,2,3,4,5,6,7,8,9,10};
    deque<int> ideq(ilist.begin(), ilist.end());

    deque<int> ideq1;
    deque<int> ideq2;

    for (auto it=ideq.begin(); it != ideq.end(); it++)
    {
        if ( *it % 2)
        {
            ideq1.push_back(*it);
        }else{
            ideq2.push_back(*it);
        }
    }
    cout << "(奇数)ideq1 = ";
    for (auto it : ideq1)
    {
        cout << it << " ";
    }
    cout << endl;
    cout << "(偶数)ideq2 = ";
    for (auto it : ideq2)
    {
        cout << it << " ";
    }
    cout << endl;



    for (auto it : ideq)
    {
        cout << it << " ";
    }
    cout << endl;


    return 0;
}
