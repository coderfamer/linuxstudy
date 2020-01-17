#include <iostream>
#include <string>
#include <fstream>

#include "ex07_41_sales_data.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
    cout << "Sales_data():" << endl;
    Sales_data sales_data1;


    cout << "Sales_data(string):" << endl;
    Sales_data sales_data2("c++primer");

    cout << "Sales_data(string, unsigned, double):" << endl;
    Sales_data sales_data3("c++primer", 12, 10.0);
    sales_data3.combine(std::string("999"));

    cout << "Sales_data(istream):" << endl;
    //Sales_data sales_data4(cin);

    return 0;
}