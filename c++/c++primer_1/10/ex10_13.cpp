#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

bool islong(const string &s)
{
    return s.size() > 3;
}

void pirnt(const vector<string> &svec)
{
    for (auto &s : svec)
    {
        cout << s << " ";
    }
    cout << endl;
}

int main()
{
    vector<string> svec
            = {"a", "an", "the", "xya", "quan", "zheng"};

    cout << "before:" << endl;
    pirnt(svec);
    //stable_partition 拆分之后按照字典排序
    auto flag = partition(svec.begin(), svec.end(), islong);

    pirnt(svec);

    svec.erase(flag, svec.end());
    pirnt(svec);

    unique_copy(svec.begin(),);


    return 0;
}
