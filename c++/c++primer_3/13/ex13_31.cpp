#include <iostream>
#include <vector>
#include <algorithm>
#include "ex13_31.h"

int main()
{
    HasPtr s{"s"}, a{"a"}, c{"c"};
    vector<HasPtr> vec{s, a, c};
    sort(vec.begin(), vec.end());

    for (auto const &elem : vec)
        elem.show();
    return 0;
}

