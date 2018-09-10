#include <vector>
#include <iostream>

using namespace std;

vector<int> two_sum(vector<int> &nums, int target)
{
    vector<int> vtag;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i; j < nums.size(); j++)
        {
            if (i == j)
                continue;
            if (nums[i] + nums[j] == target)
            {
                vtag.push_back(i);
                vtag.push_back(j);
            }
        }
    }
    return vtag;
}

int main()
{
    vector<int> vec = {1, 2, 3, 4};
    vector<int> ivec = two_sum(vec, 6);

    for (auto const &w : ivec)
    {
        cout << w << endl;
    }

    return 0;
}