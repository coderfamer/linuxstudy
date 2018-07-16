
#include <iostream>

#include "ex07_06.h"

using std::cin;
using std::cout;
using std::cerr;
using std::endl;
int main()
{
    Sales_data total;
    if (read(cin, total))
    {
        Sales_data trans;
        while (read(cin, trans))
        {
            if (trans.isbn() == total.isbn())
            {
                total.combine(trans);
            }
            else
            {
                print(cout, total) << endl;
                total = trans;
            }
        }
        print(cout, total) << endl;
    }
    else
    {
        cerr << "no data!!!" << endl;
        return -1;
    }

    return 0;
}
