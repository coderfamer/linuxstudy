#include <iostream>

#include "ex07_11_sales_data.h"

using namespace std;

int main()
{
    Sales_data total(cin);
    if (!total.isbn().empty()) {
        istream &is = cin;
        while (is) {
            Sales_data trans(is);
            if (total.isbn() == trans.isbn()) {
                total.combine(trans);
            } else {
                print(cout, total) << endl;
                total = trans;
            }
        }
    } else {
        cerr << "No data?" << std::endl;
        return -1;
    }


    return 0;
}