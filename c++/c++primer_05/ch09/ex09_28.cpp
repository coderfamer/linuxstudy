#include <iostream>
#include <forward_list>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::forward_list;

void fl_insert(forward_list<string> fl, string str1, string str2);

int main()
{
    forward_list<string> fl{"cuihua", "quan", "zong", "wen", "wei"};

    return 0;
}

void fl_insert(forward_list<string> fl, string str1, string str2)
{
    //auto prev = fl.before_begin();
    auto curr = fl.begin();
    while (curr != fl.end()) {
        if (*curr == str1) {
            fl.insert_after(curr, str2);
        }
        ++curr;

        if (curr == fl.end()) {
            
        }
    }
}