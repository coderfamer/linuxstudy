#include <iostream>

#include "ex07_11_sales_data.h"

using std::cin;
using std::cout;
using std::endl;

int main()
{
    Sales_data sd1;
    Sales_data sd2("c++_primer");
    Sales_data sd3("c++_primer", 10, 12.2);
    Sales_data sd4(cin);

    print(cout, sd1) << endl;
    print(cout, sd2) << endl;
    print(cout, sd3) << endl;
    print(cout, sd4) << endl;

    return 0;
}