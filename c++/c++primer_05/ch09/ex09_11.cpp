#include <iostream>
#include <vector>

using std::vector;

int main()
{
    vector<int> vec1;
    vector<int> vec2{1, 2, 3, 4, 5, 6, 7};
    vector<int> vec3(10, 1);
    vector<int> vec4(10);
    vector<int> vec5(vec2);
    vector<int> vec6(vec2.begin(), vec2.end());

    return 0;
}