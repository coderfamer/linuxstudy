#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

using namespace std;

int main()
{
    vector<string> svec = {"quan",  "quan","xi", "xi", "quan"};
    list<string> slist;

    unique_copy(svec.begin(), svec.end(), back_inserter(slist));

    for (auto it : slist)
    {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}
