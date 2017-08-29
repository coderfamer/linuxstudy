#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec1;
    vector<int> vec2(10);
    vector<int> vec3(10, 1);
    vector<int> vec4 = {1, 2, 3, 4, 5};
    vector<int> vec5(vec4);
    vector<int> vec6(vec5.begin(), vec5.end());

    for (auto it = vec1.begin(); it != vec1.end(); it++)
    {
        cout << "vec1 = " << *it << endl;
    }
    for (auto it = vec2.begin(); it != vec2.end(); it++)
    {
        cout << "vec2 = " << *it << " ";
    }
    cout << endl;
    for (auto it = vec3.begin(); it != vec3.end(); it++)
    {
        cout << "vec3 = " << *it << " ";
    }
    cout << endl;
    for (auto it = vec4.begin(); it != vec4.end(); it++)
    {
        cout << "vec4 = " << *it << " ";
    }
    cout << endl;
    for (auto it = vec5.begin(); it != vec5.end(); it++)
    {
        cout << "vec5 = " << *it << " ";
    }
    cout << endl;
    for (auto it = vec6.begin(); it != vec6.end(); it++)
    {
        cout << "vec6 = " << *it << " ";
    }
    cout << endl;



    return 0;
}
