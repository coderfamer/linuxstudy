#include <iostream>
#include <vector>

using namespace std;

using Ptr = vector<int> *;

auto make_dynameically()
{
    return new vector<int>{};
}

auto popolate(Ptr vec)
{
    for (int i; cout << "Pls Enter:\n", cin >> i; vec->push_back(i));
    return vec;
}

auto print(Ptr vec) ->ostream&
{
    for (auto &w : *vec)
    {
        cout << w << " ";
    }
    return cout;
}

int main()
{
    auto vec = popolate(make_dynameically());
    print(vec) << endl;

    delete  vec;
    vec = nullptr;

    return 0;
}
