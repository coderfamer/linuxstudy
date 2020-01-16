#include <iostream>

#include "ex07_02_sales_data.h"

using namespace std;

int main()
{
    Sales_data total;
    if (cin >> total.m_bookNo >> total.m_units_sold >> total.m_revenue) {
        Sales_data trans;
        while (cin >> trans.m_bookNo >> trans.m_units_sold >> trans.m_revenue) {
            if (total.isbn() == trans.isbn()) {
                total.combine(trans);
            } else {
                cout << total.m_bookNo << " " << total.m_units_sold << " " 
                        << total.m_revenue << endl;
                total = trans;
            }
            cout << total.m_bookNo << " " << total.m_units_sold << " " 
                        << total.m_revenue << endl;
        }
    } else {
        cerr << "No data?" << std::endl;
        return -1;
    }


    return 0;
}