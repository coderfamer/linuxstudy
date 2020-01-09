#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int>::size_type len = vec.size();
    decltype(len) i = 1;

    for (;i < len; i++) {
        cout << vec[i] + vec[i - 1] << endl; 
    }
    return 0;
}