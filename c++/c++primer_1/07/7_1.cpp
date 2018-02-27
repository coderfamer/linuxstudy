#include <iostream>
#include "sales_data.h"
using namespace std;

int main()
{
    cout << "please enter Transaction record(isbn,number,oprice, aprice):" << endl;
    Sales_data total;

    if (cin >> total)
    {
        Sales_data trans;
        while (cin >> trans)
        {
            if (total.isbn() == trans.isbn())
            {
                total += trans;
            }
        }
        cout << total << endl;

    }else{
        cerr << "no data?!" << endl;
        return -1;
    }

    return 0;
}
