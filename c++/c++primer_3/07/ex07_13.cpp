#include <iostream>
#include "ex07_12.h"

using namespace std;

int main()
{
    Sales_data total(cin);
    if (!total.isbn().empty())
    {
        istream &is = cin;
        while (is)
        {
            Sales_data tran(is);
            if (!is) break;
            if (total.isbn() == tran.isbn())
            {
                total.combine(tran);
            }
            else
            {
                print(cout, total) << endl;
                total = tran;
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
