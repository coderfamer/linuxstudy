#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main()
{
    list<char *> clist(10, "a");
    //list<char *> clist = {"zheng", "quan"};
    vector<string> svec;
    svec.assign(clist.begin(), clist.end());

    for (auto it = svec.begin();it != svec.end(); it++ )
    {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
