#include <iostream>
#include <utility>
#include <vector>
#include <string>

using std::string;
using std::cout;
using std::endl;
using std::vector;
using std::cin;

using Pvec = vector<std::pair<string, int>>;

int main()
{
    Pvec pvec;

    string str;
    int a;
    for(;cout << "Enter string:\n",cin >> str,cout << "Enter int:\n",cin >> a;){
        //pvec.push_back({str, a});
        //pvec.push_back(std::make_pair(str, a));
        pvec.emplace_back(str, a);
    }

    for (const auto &v : pvec) {
        cout << v.first << " " << v.second << endl;
    }


    return 0;
}