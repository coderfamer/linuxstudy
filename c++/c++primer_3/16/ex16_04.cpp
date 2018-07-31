#include <iostream>
#include <vector>
#include <list>


using namespace std;

template<typename Iterator, typename T>
Iterator find_temp(Iterator beg, Iterator end,const T value)
{
    for (; beg != end; ++beg)
    {
        if (*beg == value)
            return beg;
    }
    return end;
}


int main()
{
    vector<int> vec = { 1, 2, 3, 4, 5, 6 };
    //auto iter = vec.begin();
    auto vec_true = find_temp(vec.begin(), vec.end(), 4);
    cout << *vec_true << endl;

    return 0;
}

