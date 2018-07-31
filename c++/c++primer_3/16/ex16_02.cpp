#include <iostream>
#include <vector>

using namespace std;

class Sales_data {};

template<class T>
int compare(const T &v1, const T &v2)
{
    if (v1 < v2) return -1;
    if (v2 < v1) return 1;
    return 0;
}


int main()
{
    cout << "compare(1, 0)" << compare(1, 0) << endl;
    cout << "compare(1, 1)" << compare(1, 1) << endl;
    cout << "compare(1, 2)" << compare(1, 2) << endl;
    vector<int> vec1{ 1, 2, 3 }, vec2{ 4, 5, 6 };
    cout << "compare vec" << compare(vec1, vec2) << endl;
    
    /*error: no match for ‘operator<’ (operand types are ‘const Sales_data’ and ‘const Sales_data’)
                if (v1 < v2) return -1;
                */
    //Sales_data lsd, rsd;
    //cout << compare(lsd, rsd) << endl;

    return 0;
}
