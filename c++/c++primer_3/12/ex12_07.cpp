#include <iostream>
#include <vector>
#include <memory>

using namespace std;

using Sptr = shared_ptr<vector<int>>;

auto make_dynamically()
{
    return make_shared<vector<int>>();
}

auto populate(Sptr vec)
{
    for (int i; cout << "Please Enter:\n", cin >> i; vec->push_back(i));
    return vec;
}

auto populate2(Sptr vec)
{
    vec = make_shared<vector<int>>();
    for (int i; cout << "please Enter:\n", cin >> i; vec->push_back(i));
    return vec;
}

auto print(Sptr vec) -> ostream &
{
    for (auto &w : *vec)
    {
        cout << w << " ";
    }
    return cout;
}

int main()
{
    auto vec = populate2(make_dynamically());
    print(vec) << endl;
    
    return 0;
}
