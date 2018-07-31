#include <iostream>

#include "ex14_13.h"

int main()
{
    Sales_data s1("book1", 150, 10);
    Sales_data s2("book1", 200, 20);

    cout << s1 << endl;

    s1 = s1 + s2;
    cout << s1 << endl;

    s1 += s2;
    cout << s1 << endl;

    s1 -= s2;
    cout << s1 << endl;
    
    s1 = s1 - s2;
    cout << s1 << endl;

    Sales_data s3(cin);
    cout << s3 << endl;

    return 0;
}
