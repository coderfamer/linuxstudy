#include <iostream>
#include <ostream>
#include <iterator>
#include <algorithm>
using namespace std;

void perm(int list[], int k, int m)
{
    if (k == m)
    {
        copy(list, list+m, ostream_iterator<int>(cout, " "));
        cout << endl;
        return ;
    }
    for (int i=k; i<=m; i++)
    {
        std::swap(list[k], list[i]);
        perm(list, k+1, m);
        std::swap(list[k], list[i]);
    }

}

int main()
{
    int list[] = {1, 2, 3, 5,4, 7 ,6 ,9};
    perm(list, 2, 2);
    perm(list, 3, 3);
    perm(list, 0, 4);
    //perm(list, 1, 7);
    //std::swap

    return 0;
}
