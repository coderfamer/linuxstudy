#include <iostream>
#include <vector>

using namespace std;
using Ptr = vector<int> *;

auto make_dynameically()
{
    return new vector<int>{};
}

auto poplulate(Ptr vec)
{
    for (int i; cout << "Please Enter:\n", cin >> i; vec->push_back(i));
    return vec;
}

auto print(Ptr vec) ->ostream&
{
    for (auto i : * vec)
        cout << i << " ";
    return cout;
}


int main()
{
    auto vec = poplulate(make_dynameically());
    print(vec) << endl;
    delete vec;

    return 0;
}
