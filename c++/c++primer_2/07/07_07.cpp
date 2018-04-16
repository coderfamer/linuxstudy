#include <iostream>

#include "../include/Sales_data.h"

using namespace std;

int main()
{
    cout << "请输入交易记录(ISBN,销售量，原价，实际售价): " << endl;
    Sales_data total;

    if ( read(cin, total) )
    {
        Sales_data trans;
        while ( read(cin, trans) )
        {
            if (total.isbn() == trans.isbn())
            {
                total = add(total, trans);
            }
            else
            {
                print(cout, total);
                cout << endl;
                total = trans;
            }
        }
        print(cout, total);
        cout << endl;
    }
    else
    {
        cerr << "no data" << endl;
        return -1;
    }


    return 0;
}

