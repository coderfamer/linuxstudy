#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    vector<string> svec;
    string str;
    while (cin >> str)
    {
        svec.push_back(str);
    }

    for (auto &s : svec)
    {
        cout << s << " ";
    }
    cout << endl;

    return 0;
}
