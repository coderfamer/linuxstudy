#include <iostream>
#include <forward_list>

using std::cout;
using std::endl;
using std::forward_list;

int main()
{
    forward_list<int> fl{1, 2, 3, 4, 5, 6, 7, 8, 9};

    auto prev = fl.before_begin();
    auto curr = fl.begin();
    for (;curr != fl.end(); ) {
        if (*curr & 1) {
            curr = fl.erase_after(prev);
        } else {
            prev = curr;
            ++curr;
        }
    }

    for (const auto c : fl) {
        cout << c << " ";
    }
    cout << endl;

    return 0;
}