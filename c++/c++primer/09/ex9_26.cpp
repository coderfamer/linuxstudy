#include <iostream>
#include <vector>
#include <list>


using namespace std;

int main()
{
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
    vector<int> ivec;
    list<int> ilist;

    for (auto it : ia)
    {
        ivec.push_back(it);
        ilist.push_back(it);
    }

    /*
    for (int i=0; i<sizeof(ia)/sizeof(int); i++)
    {
        ivec.push_back(ia[i]);
        ilist.push_back(ia[i]);
    }
    */
    /*
    for (auto it : ivec)
    {
        cout << it << " ";
    }
    cout << endl;*/
    auto itvec = ivec.begin();
    while (itvec != ivec.end())
    {
        if (*itvec % 2)
        {
            itvec++;
        }else{
            itvec = ivec.erase(itvec);
        }
    }
    for (auto it : ivec)
    {
        cout << it << " ";
    }
    cout << endl;

    auto itlist = ilist.begin();
    while (itlist != ilist.end())
    {
        if (*itlist % 2)
        {
            itlist = ilist.erase(itlist);
        }else{
            itlist++;
        }
    }
    for (auto it : ilist)
    {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}
