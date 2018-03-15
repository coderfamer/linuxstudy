#include <iostream>

using namespace std;

//int型数据使用此函数无效
void print1(const int *p)
{
    if (p)
    {
        while (*p)
        {
            cout << *p++;
        }
    }
}

void print2(const int *beg, const int *end)
{
    while (beg != end)
    {
        cout << *beg++  << endl;
    }
}

void print3(const int ia[], size_t size)
{
    for (size_t i = 0; i != size; i++)
    {
        cout << ia[i] << endl;
    }
}

int main()
{
    int i = 0, j[2] = {0, 1};
    cout << "begin" << endl;
    print1(&i);
    print1(j);

    //auto a = begin(j);
    //auto b = end(j);
    print2(begin(j), end(j));

    print3(j, sizeof(j)/sizeof(*j));

    return 0;
}
