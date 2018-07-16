#include <iostream>
#include "ex07_41.h"

int main()
{
    string str = "hello";
    cout << "===========================" << endl;
    Sales_data item1;
    cout << "===========================" << endl;
    Sales_data item2(str);
    cout << "===========================" << endl;
    Sales_data item3(str, 12, 12);
    cout << "===========================" << endl;
    Sales_data item4(cin);
    cout << "===========================" << endl;

    return 0;
}
